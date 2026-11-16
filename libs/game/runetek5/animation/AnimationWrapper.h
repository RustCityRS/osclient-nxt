// libs/game/runetek5/animation/AnimationWrapper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class AnimationWrapper {
    public:
        int GetSourceID() const;
        shared_ptr GetSource() const;
        void SetReadyAnim(bool arg1);
        void SetAnimationLateness(int arg1);
        void GetAnimationParameters() const;
        void GetAnimationParameters();
        void ResetLoopCounter();
        bool AbortOnMove() const;
        void SetDelay(unsigned int arg1);
        void HasAnimationParameters() const;
        bool IsReadyAnim() const;
        void Restart(unsigned int arg1, unsigned int arg2);
        void Reset(unsigned int arg1, unsigned int arg2);
        AnimationWrapper(AssetBuilder& assetBuilder, const ConfigProvider& configProvider, int arg3, unsigned int arg4,
                         graphics::AnimationLoopBehaviour animationLoopBehaviour, bool arg6, bool arg7);
        uint8_t* LoadSeq(const ConfigProvider& configProvider);
        uint64_t Build(const ConfigProvider& configProvider, unsigned int arg2,
                       const shared_ptr<graphics::Model>& model, unsigned int arg4);
        void GenerateAnimation(unsigned int arg1, const shared_ptr<graphics::Model>& model, unsigned int arg3);
        void Update(unsigned int arg1, int arg2);
        void ProcessAudio();
        void ApplyToAnimationState(int arg1, graphics::AnimationState& animationState, bool arg3);
        bool MayMove(int arg1);
        bool ShouldBeFinished() const;
        bool ShouldBeFinishedOrLooping() const;
        void IsReady() const;
        void SetAudioTrigger(const std::function<void(int, int, int, int, int, int)>& callback);
        bool IsFinished() const;
        uint64_t GetDelay() const;
        void ResetToTime(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        bool HasFinishedBuilding() const;
        bool IsDelayedAnimation(int arg1) const;
        ~AnimationWrapper();

    private:
        AssetBuilder* field_0;
        int m_sourceID;
        uint8_t _unknown_12[4];
        shared_ptr m_source;
        AnimationLoopBehaviour field_32;
        unsigned int field_36;
        bool field_40;
        bool field_41;
        uint8_t _unknown_42[14];
        unsigned char m_readyAnim;
        uint8_t field_57;
        uint8_t _unknown_58[2];
        int field_60;
        int m_animationLateness;
        unsigned int field_68;
        uint8_t _unknown_72[48];
    };

    // 0x1003f6590
    void AnimationWrapper::GetAnimationParameters() const {
        *field_48;
    }

    // 0x1003f6a00
    void AnimationWrapper::ResetLoopCounter() {
        if ((&field_48)->operator_cast_to_bool() != '\0') {
            ((AnimationParameters*)field_48.operator->())->ResetLoopCounter();
        }
    }

    // 0x1003f7f70
    bool AnimationWrapper::AbortOnMove() const {
        bool bVar3;

        if (m_source->operator_cast_to_bool() == '\0') {
            bVar3 = false;
        } else {
            bVar3 = ((SeqType*)(*m_source).operator->())->GetPostanimMove() == 1;
        }
        return bVar3;
    }

    // 0x1003f8e30
    void AnimationWrapper::SetDelay(unsigned int arg1) {
        if ((&field_48)->operator_cast_to_bool() != '\0') {
            ((AnimationParameters*)field_48.operator->())->SetDelay(arg1);
        }
    }

    // 0x1003f9250
    void AnimationWrapper::HasAnimationParameters() const {
        void* in_RSI;

        &field_48 != in_RSI;
    }

    // 0x100432490
    void AnimationWrapper::Restart(unsigned int arg1, unsigned int arg2) {
        Reset(arg1, arg2);
    }

    // 0x1004324a0
    void AnimationWrapper::Reset(unsigned int arg1, unsigned int arg2) {
        if ((&field_48)->operator_cast_to_bool() != '\0') {
            ((AnimationParameters*)field_48.operator->())->Reset(arg1, arg2);
        }
    }

    // 0x100657c40
    uint8_t* AnimationWrapper::LoadSeq(const ConfigProvider& configProvider) {
        shared_ptr<SeqType>* seqType;

        uint8_t* this_00 = m_source;
        if (this_00->operator_cast_to_bool() == '\0') {
            seqType = configProvider.GetConfig<SeqType>(m_sourceID, nullptr);
            *this_00 = *seqType;
        } else {
            if (((GameToken*)(*this_00).operator->())->GetStatus() != m_sourceID) {
                LogAssert("(int)m_seq->GetMyID() == m_seqID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "animation/AnimationWrapper.h",
                          67, nullptr);
            }
        }
        return this_00;
    }

    // 0x100667e70
    void AnimationWrapper::IsReady() const {
        HasFinishedBuilding();
    }

    // 0x1006682b0
    void AnimationWrapper::SetAudioTrigger(const std::function<void(int, int, int, int, int, int)>& callback) {
        field_112 = callback;
    }

    // 0x100669520
    bool AnimationWrapper::IsFinished() const {
        uint64_t uVar2 = 1;
        if (field_57 == '\0') {
            if ((&field_48)->operator_cast_to_bool() == '\0') {
                uVar2 = 0;
            } else {
                uVar2 = ((AnimationParameters*)field_48.operator->())->IsFinished();
            }
        }
        return uVar2;
    }

    // 0x100669870
    uint64_t AnimationWrapper::GetDelay() const {
        bool cVar1 = (&field_48)->operator_cast_to_bool();
        uint64_t uVar2 = 0;
        if (cVar1) {
            uVar2 = ((NXTRenderCanvas*)field_48.operator->())->GetLastNumVerts();
        }
        return uVar2;
    }

    // 0x1006698b0
    void AnimationWrapper::ResetToTime(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        if ((&field_48)->operator_cast_to_bool() != '\0') {
            ((AnimationParameters*)field_48.operator->())->ResetToTime(arg1, arg2, arg3, arg4);
        }
    }

    // 0x10066a260
    bool AnimationWrapper::HasFinishedBuilding() const {
        bool bVar2;

        long lVar1 = m_source->end();
        if (lVar1 == 0) {
            bVar2 = false;
        } else {
            lVar1 = field_48.get();
            bVar2 = lVar1 != 0;
        }
        return bVar2;
    }

    // 0x10066a4e0
    bool AnimationWrapper::IsDelayedAnimation(int arg1) const {
        if (arg1 != 0) {
            if (m_source->operator_cast_to_bool() != '\0') {
                return ((SeqType*)(*m_source).operator->())->GetPreanimMove() == 1;
            }
        }
        return false;
    }

    // 0x100672730
    AnimationWrapper::~AnimationWrapper() {
        field_112.~function();
        field_72.~ActiveComponent();
        field_48.~unique_ptr();
        m_source->~shared_ptr();
    }

} // namespace jag::game
