// libs/game/runetek5/animation/AnimationWrapper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class AnimationWrapper {
    public:
        GetSourceID() const;
        GetSource() const;
        void SetReadyAnim(bool);
        SetAnimationLateness(int);
        void GetAnimationParameters() const;
        void GetAnimationParameters();
        void ResetLoopCounter();
        bool AbortOnMove() const;
        void SetDelay(unsigned int);
        void HasAnimationParameters() const;
        IsReadyAnim() const;
        void Restart(unsigned int, unsigned int);
        void Reset(unsigned int, unsigned int);
        AnimationWrapper(AssetBuilder&, ConfigProvider const&, int, unsigned int, graphics::AnimationLoopBehaviour,
                         bool, bool);
        LoadSeq(ConfigProvider const&);
        Build(ConfigProvider const&, unsigned int, shared_ptr<graphics::Model> const&, unsigned int);
        void GenerateAnimation(unsigned int, shared_ptr<graphics::Model> const&, unsigned int);
        void Update(unsigned int, int);
        void ProcessAudio();
        void ApplyToAnimationState(int, graphics::AnimationState&, bool);
        bool MayMove(int);
        bool ShouldBeFinished() const;
        bool ShouldBeFinishedOrLooping() const;
        void IsReady() const;
        void SetAudioTrigger(std::function<void(int, int, int, int, int, int)> const&);
        IsFinished() const;
        GetDelay() const;
        void ResetToTime(unsigned int, unsigned int, unsigned int, unsigned int);
        bool HasFinishedBuilding() const;
        bool IsDelayedAnimation(int) const;
        ~AnimationWrapper();

        // data members, from how the methods use this: 120 bytes
        AssetBuilder* field_0; // offset 0
        int field_8;           // offset 8
        char _unknown_12[4];
        shared_ptr field_16; // offset 16
        uint field_32;       // offset 32
        undefined4 field_36; // offset 36
        undefined1 field_40; // offset 40
        bool field_41;       // offset 41
        char _unknown_42[14];
        bool m_readyAnim;    // offset 56
        undefined1 field_57; // offset 57
        char _unknown_58[2];
        int field_60;  // offset 60
        int field_64;  // offset 64
        uint field_68; // offset 68
        char _unknown_72[48];
    };

    // 0x1003f6590, 16 bytes, inline, placed by class name and debug map
    // AnimationWrapper::GetAnimationParameters() const
    /* AnimationWrapper::GetAnimationParameters() */

    void AnimationWrapper::GetAnimationParameters() {
        std::unique_ptr<graphics::AnimationParameters,
                        MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
        operator*((unique_ptr<graphics::AnimationParameters,
                              MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
    }

    // 0x1003f6a00, 48 bytes, inline, placed by class name
    // AnimationWrapper::ResetLoopCounter()
    void AnimationWrapper::ResetLoopCounter() {
        AnimationParameters* this_00;

        if ((&field_48)->operator_cast_to_bool()) {
            this_00 =
                (AnimationParameters*)
                    std::unique_ptr<graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
                    operator->(
                        (unique_ptr<graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
            this_00->ResetLoopCounter();
        }
    }

    // 0x1003f7f70, 64 bytes, inline, placed by class name
    // AnimationWrapper::AbortOnMove() const
    bool AnimationWrapper::AbortOnMove() {
        bool bVar1;
        SeqType* this_00;

        bVar1 = field_16->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)field_16);
            bVar1 = this_00->GetPostanimMove() == 1;
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1003f8e30, 64 bytes, inline, placed by class name
    // AnimationWrapper::SetDelay(unsigned int)
    void AnimationWrapper::SetDelay(uint param_1) {
        AnimationParameters* this_00;

        if ((&field_48)->operator_cast_to_bool()) {
            this_00 =
                (AnimationParameters*)
                    std::unique_ptr<graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
                    operator->(
                        (unique_ptr<graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
            this_00->SetDelay(param_1);
        }
    }

    // 0x1003f9250, 16 bytes, inline, placed by class name
    // AnimationWrapper::HasAnimationParameters() const
    void AnimationWrapper::HasAnimationParameters() {
        _func_decltype_nullptr* in_RSI;

        std::operator!=((unique_ptr*)&field_48, in_RSI);
    }

    // 0x100432490, 16 bytes, inline, placed by class name
    // AnimationWrapper::Restart(unsigned int, unsigned int)
    void AnimationWrapper::Restart(uint param_1, uint param_2) {
        Reset(this, param_1, param_2);
    }

    // 0x1004324a0, 80 bytes, inline, placed by class name
    // AnimationWrapper::Reset(unsigned int, unsigned int)
    void AnimationWrapper::Reset(uint param_1, uint param_2) {
        AnimationParameters* this_00;

        if ((&field_48)->operator_cast_to_bool()) {
            this_00 =
                (AnimationParameters*)
                    std::unique_ptr<graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
                    operator->(
                        (unique_ptr<graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
            this_00->Reset(param_1, param_2);
        }
    }

    // 0x100657c40, 128 bytes, inline, placed by class name
    // AnimationWrapper::LoadSeq(ConfigProvider const&)
    undefined1* AnimationWrapper::LoadSeq(ConfigProvider* param_1) {
        undefined1* this_00;
        GameToken* this_01;
        shared_ptr* psVar3;

        this_00 = field_16;
        if (this_00->operator_cast_to_bool()) {
            this_01 = (GameToken*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)this_00);
            if (this_01->GetStatus() != field_8) {
                /* WARNING: Subroutine does not return */
                LogAssert("(int)m_seq->GetMyID() == m_seqID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "animation/AnimationWrapper.h",
                          67, (char*)0);
            }
        } else {
            psVar3 = ConfigProvider::GetConfig<SeqType>(param_1, field_8, (DataStatus**)0);
            shared_ptr<SeqType>::operator=((shared_ptr<SeqType>*)this_00, psVar3);
        }
        return this_00;
    }

    // 0x100667e70, 16 bytes, inline, placed by class name
    // AnimationWrapper::IsReady() const
    void AnimationWrapper::IsReady() {
        HasFinishedBuilding(this);
    }

    // 0x1006682b0, 16 bytes, inline, placed by class name
    // AnimationWrapper::SetAudioTrigger(std::function<void (int, int, int, int, int, int)> const&)
    /* AnimationWrapper::SetAudioTrigger(std::function<void (int, int, int, int, int, int)>
   const&) */

    void AnimationWrapper::SetAudioTrigger(function* param_1) {
        std::function<void(int, int, int, int, int, int)>::operator=(
            (function<void(int, int, int, int, int, int)>*)&field_112, param_1);
    }

    // 0x100669520, 64 bytes, inline, placed by class name
    // AnimationWrapper::IsFinished() const
    undefined8 AnimationWrapper::IsFinished() {
        AnimationParameters* this_00;
        undefined8 uVar2;

        uVar2 = 1;
        if (field_57 == '\0') {
            if ((&field_48)->operator_cast_to_bool()) {
                this_00 =
                    (AnimationParameters*)std::unique_ptr<
                        graphics::AnimationParameters,
                        MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
                    operator->(
                        (unique_ptr<graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
                uVar2 = this_00->IsFinished();
            } else {
                uVar2 = 0;
            }
        }
        return uVar2;
    }

    // 0x100669870, 64 bytes, inline, placed by class name
    // AnimationWrapper::GetDelay() const
    undefined8 AnimationWrapper::GetDelay() {
        bool bVar1;
        NXTRenderCanvas* this_00;
        undefined8 uVar2;

        bVar1 = (&field_48)->operator_cast_to_bool();
        uVar2 = 0;
        if (bVar1) {
            this_00 =
                (NXTRenderCanvas*)
                    std::unique_ptr<graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
                    operator->(
                        (unique_ptr<graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
            uVar2 = this_00->GetLastNumVerts();
        }
        return uVar2;
    }

    // 0x1006698b0, 96 bytes, inline, placed by class name
    // AnimationWrapper::ResetToTime(unsigned int, unsigned int, unsigned int, unsigned int)
    void AnimationWrapper::ResetToTime(uint param_1, uint param_2, uint param_3, uint param_4) {
        AnimationParameters* this_00;

        if ((&field_48)->operator_cast_to_bool()) {
            this_00 =
                (AnimationParameters*)
                    std::unique_ptr<graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
                    operator->(
                        (unique_ptr<graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
            this_00->ResetToTime(param_1, param_2, param_3, param_4);
        }
    }

    // 0x10066a260, 64 bytes, inline, placed by class name
    // AnimationWrapper::HasFinishedBuilding() const
    bool AnimationWrapper::HasFinishedBuilding() {
        long lVar1;
        bool bVar2;

        lVar1 = field_16->end();
        if (lVar1 == 0) {
            bVar2 = false;
        } else {
            lVar1 = (&field_48)->get();
            bVar2 = lVar1 != 0;
        }
        return bVar2;
    }

    // 0x10066a4e0, 64 bytes, inline, placed by class name
    // AnimationWrapper::IsDelayedAnimation(int) const
    bool AnimationWrapper::IsDelayedAnimation(int param_1) {
        SeqType* this_00;

        if (param_1 != 0) {
            if (field_16->operator_cast_to_bool()) {
                this_00 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)field_16);
                return this_00->GetPreanimMove() == 1;
            }
        }
        return false;
    }

    // 0x100672720, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimationWrapper::~AnimationWrapper(): jumps straight to the base-object destructor

    // 0x100672730, 64 bytes, base-object destructor, inline, placed by class name
    // AnimationWrapper::~AnimationWrapper()
    void AnimationWrapper::~AnimationWrapper() {
        std::function<void(int, int, int, int, int, int)>::~function(
            (function<void(int, int, int, int, int, int)>*)&field_112);
        (&field_72)->~ActiveComponent();
        (&field_48)->~unique_ptr();
        field_16->~shared_ptr();
    }

} // namespace jag::game
