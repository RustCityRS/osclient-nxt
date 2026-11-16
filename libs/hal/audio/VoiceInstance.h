// libs/hal/audio/VoiceInstance.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::hal::audio {
    class VoiceInstance {
    public:
        uint32_t GetPriority() const;
        uint8_t* GetAudioBufferHandler() const;
        void SetLoopIterations(int arg1);
        void SetGain(float arg1);
        void SetPriority(float arg1);
        float GetPan() const;
        void SetVirtual(bool arg1);
        void SetBussID(BussType arg1);
        void SetPreSendControls(float arg1, float arg2);
        void SetSoundType(game::SoundType soundType);
        bool IsFinished() const;
        bool IsSuspended() const;
        void Init(AudioRenderer* audioRenderer, int arg2);
        bool IsPlaying() const;
        bool IsPersistent() const;
        void Suspend();
        void Update(float arg1);
        void MixSend();
        bool IsFree() const;
        void Claim();
        void SetSend(const shared_ptr<AudioBuss>& audioBuss1, const shared_ptr<AudioBuss>& audioBuss2);
        float GetGain() const;
        bool IsEncoded() const;
        VoiceInstance();
        void Free();
        void SetRate(unsigned int arg1);
        void Start();
        void UpdateLoopIterations();
        void WriteToOutputBuffer();
        void ConfigureVoice(const shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>>& fixed_stack,
                            const AudioFormat* audioFormat);
        void DecodeCallback(PacketT<Array<unsigned char>>& arg1);
        void Pause();
        void Resume();
        ~VoiceInstance();

    private:
        AudioRenderer* field_0;
        DebugUIElement m_virtual;
        uint8_t _unknown_9[3];
        float m_priority;
        uint8_t field_16;
        uint8_t _unknown_17[3];
        float m_preSendControls;
        float m_gain;
        float m_pan;
        unsigned int m_loopIterations;
        unsigned int field_36;
        Layout* field_40;
        int field_48;
        uint8_t _unknown_52[20];
        shared_ptr field_72;
        uint8_t _unknown_88[168];
        unsigned long field_256;
        uint8_t _unknown_264[8];
        long* field_272;
        int field_280;
        uint8_t _unknown_284[4];
        AudioSend field_288;
        uint8_t _unknown_329[7];
        int m_bussID;
        SoundType m_soundType;
        uint8_t _unknown_344[4];
    };

    // 0x100b8a450
    void VoiceInstance::SetPreSendControls(float arg1, float arg2) {
        m_preSendControls = arg1;
        m_pan = arg2;
    }

    // 0x100b8a460
    void VoiceInstance::SetSoundType(game::SoundType soundType) {
        m_soundType = soundType;
    }

    // 0x100b8a4c0
    bool VoiceInstance::IsFinished() const {
        return field_48 == 5;
    }

    // 0x100b8a4d0
    bool VoiceInstance::IsSuspended() const {
        return field_48 == 4;
    }

    // 0x100b8f020
    bool VoiceInstance::IsPlaying() const {
        return field_48 == 3;
    }

    // 0x100b8f030
    bool VoiceInstance::IsPersistent() const {
        return m_soundType & 4294967294 == 10;
    }

    // 0x100b8f5c0
    bool VoiceInstance::IsFree() const {
        return field_48 < 1;
    }

    // 0x100b8ffc0
    float VoiceInstance::GetGain() const {
        return m_gain * m_preSendControls;
    }

    // 0x100b8ffd0
    bool VoiceInstance::IsEncoded() const {
        return field_40[21];
    }

    // 0x100b97530
    VoiceInstance::~VoiceInstance() {
        field_288->~ActiveComponent();
        field_240.~shared_ptr();
        (&field_176)->~mutex();
        field_88.~queue();
        field_72->~shared_ptr();
        field_56.~shared_ptr();
    }

    // 0x100ba20c0
    void VoiceInstance::Update(float)::$_1::operator()(PacketT<Array<unsigned char>>& arg1) const {
        DecodeCallback(field_0, arg1);
    }

} // namespace jag::hal::audio
