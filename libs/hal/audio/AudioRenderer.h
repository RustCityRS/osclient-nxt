// libs/hal/audio/AudioRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::hal::audio {
    class AudioRenderer : public graphics::Drawable // base inferred from shared vtable slots
    {
    public:
        class DebugData;
        // virtual methods in vtable order
        virtual ~AudioRenderer();
        virtual Init(AudioAPI*, AudioSystemStartParams const&);
        virtual void Shutdown();
        virtual VerifyDefaultAudioDevice();
        virtual void Update(float);
        virtual GetDecoder(AudioFormat const*);
        virtual void FreeDecoder(decoders::AudioDecoder*);
        virtual GetActiveDecoders() const;
        Pause();
        Resume();
        AudioSystemStartParams GetStartParams() const;
        void GetMixer() const;
        int GetState() const;
        void ActiveDecoderCount() const;
        void RecordDebugValue(int, float);
        AudioRenderer();
        ClaimVoice(BussType);
        void InjectTestTone(AudioBuffer*, int);
        static /* 64 bytes */ m_audioMutex;              // initialised in its definition
        static /* 64 bytes */ m_voiceInstanceGuardMutex; // initialised in its definition
        static /* 8 bytes */ m_outputBuffersIndex;
        static /* 24 bytes */ m_outputBuffers;
        static /* 8 bytes */ m_debugShowAudio;
        static DebugData /* 92400 bytes */ m_debugData; // = DebugData()

        // data members, from how the methods use this: 264 bytes, the first 16 are Drawable
        AudioSystemStartParams m_startParams; // offset 16
        undefined4 field_32;                  // offset 32
        undefined1 field_36;                  // offset 36
        char _unknown_37[3];
        int m_state; // offset 40
        char _unknown_44[196];
        undefined4 field_240; // offset 240
        undefined2 field_244; // offset 244
        char _unknown_246[10];
        undefined1 field_256; // offset 256
        char _unknown_257[7];
    };

    class AudioRenderer::DebugData {
    public:
        DebugData();
        ~DebugData();

        // data members, from how the methods use this: 92376 bytes
        char _unknown_0[92368];
        undefined4 field_92368; // offset 92368
        char _unknown_92372[4];
    };

    // 0x1001c37d0, 16 bytes, inline, placed by class name and debug map
    // AudioRenderer::GetMixer() const
    void AudioRenderer::GetMixer() {
        (&field_8)->get();
    }

    // 0x100293ee0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // AudioRenderer::GetState() const
    /* game::TcpConnectionMessageBase::GetEndPosition() const */

    int game::TcpConnectionMessageBase::GetEndPosition() {
        return m_endPosition;
    }

    // 0x100663fb0, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // AudioRenderer::GetActiveDecoders() const
    /* AudioRenderer::ActiveDecoderCount() const */

    void AudioRenderer::ActiveDecoderCount() {
        (&field_248)->operator_cast_to_int();
    }

    // 0x100b8fda0, 16 bytes, complete-object constructor, inline, placed by class name
    // AudioRenderer::DebugData::DebugData(): jumps straight to the base-object constructor

    // 0x100b8fdb0, 16 bytes, complete-object destructor, inline, placed by class name
    // AudioRenderer::DebugData::~DebugData(): jumps straight to the base-object destructor

    // 0x100b979a0, 32 bytes, base-object constructor, inline, placed by class name
    // AudioRenderer::DebugData::DebugData()
    void AudioRenderer::DebugData::DebugData() {
        new (this) std::array<eastl::fixed_list<float, 1920ul, true, eastl::allocator>, 2ul>();
        field_92368 = 0;
    }

    // 0x100b97bc0, 16 bytes, base-object destructor, inline, placed by class name
    // AudioRenderer::DebugData::~DebugData()
    void AudioRenderer::DebugData::~DebugData() {
        ~array();
    }

} // namespace jag::hal::audio

namespace jag::game {
    // 0x100293ee0: the linker folded this into hal::audio::AudioRenderer::GetState() const, which has identical code
    int TcpConnectionMessageBase::GetEndPosition() const;

} // namespace jag::game

namespace jag::graphics {
    // 0x100293ee0: the linker folded this into hal::audio::AudioRenderer::GetState() const, which has identical code
    int ModularParticleSystemDrawable::GetViewportMapID() const;

} // namespace jag::graphics
