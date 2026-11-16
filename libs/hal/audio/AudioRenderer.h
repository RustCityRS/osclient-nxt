// libs/hal/audio/AudioRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::hal::audio {
    class AudioRenderer : public graphics::Drawable // base inferred from shared vtable slots
    {
    public:
        class DebugData;
        // virtual methods in vtable order
        virtual ~AudioRenderer();
        virtual uint64_t Init(AudioAPI* audioAPI, const AudioSystemStartParams& audioSystemStartParams);
        virtual void Shutdown();
        virtual void VerifyDefaultAudioDevice();
        virtual void Update(float arg1);
        virtual uint64_t GetDecoder(const AudioFormat* audioFormat);
        virtual void FreeDecoder(decoders::AudioDecoder* audioDecoder);
        virtual void GetActiveDecoders() const;
        void Pause();
        void Resume();
        AudioSystemStartParams GetStartParams() const;
        AudioMixer* GetMixer() const;
        int GetState() const;
        void ActiveDecoderCount() const;
        void RecordDebugValue(int arg1, float arg2);
        AudioRenderer();
        uint64_t ClaimVoice(BussType bussType);
        void InjectTestTone(AudioBuffer* audioBuffer, int arg2);
        static int32_t m_audioMutex[16];              // initialised in its definition
        static int32_t m_voiceInstanceGuardMutex[16]; // initialised in its definition
        static int64_t m_outputBuffersIndex;
        static Array<std::unique_ptr<AudioBuffer>> m_outputBuffers;
        static int64_t m_debugShowAudio;
        static DebugData m_debugData; // = DebugData()

    private:
        AudioSystemStartParams m_startParams;
        uint32_t field_32;
        uint8_t field_36;
        uint8_t _unknown_37[3];
        int m_state;
        uint8_t _unknown_44[196];
        uint32_t field_240;
        uint16_t field_244;
        uint8_t _unknown_246[18];
    };

    class AudioRenderer::DebugData {
    public:
        DebugData();
        ~DebugData();

    private:
        uint8_t _unknown_0[92368];
        uint32_t field_92368;
        uint8_t _unknown_92372[4];
    };

    // 0x1001c37d0
    AudioMixer* AudioRenderer::GetMixer() const {
        return (AudioMixer*)field_8.get();
    }

    // 0x100293ee0
    int AudioRenderer::GetState() const {
        return m_endPosition;
    }

    // 0x100663fb0
    void AudioRenderer::GetActiveDecoders() const {
        (&field_248)->operator_cast_to_int();
    }

    // 0x100b979a0
    AudioRenderer::DebugData::DebugData() : std::array<eastl::fixed_list<float, 1920ul>, 2ul>(), field_92368(0) {}

    // 0x100b97bc0
    AudioRenderer::DebugData::~DebugData() {}

} // namespace jag::hal::audio

namespace jag::game {
    // 0x100293ee0: TcpConnectionMessageBase::GetEndPosition() const has the same machine code as hal::audio::AudioRenderer::GetState() const

} // namespace jag::game

namespace jag::graphics {
    // 0x100293ee0: ModularParticleSystemDrawable::GetViewportMapID() const has the same machine code as hal::audio::AudioRenderer::GetState() const

} // namespace jag::graphics
