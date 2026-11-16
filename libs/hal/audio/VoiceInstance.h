// libs/hal/audio/VoiceInstance.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::hal::audio {
    class VoiceInstance {
    public:
        GetPriority() const;
        GetAudioBufferHandler() const;
        void SetLoopIterations(int);
        SetGain(float);
        SetPriority(float);
        GetPan() const;
        SetVirtual(bool);
        void SetBussID(BussType);
        void SetPreSendControls(float, float);
        void SetSoundType(game::SoundType);
        bool IsFinished() const;
        bool IsSuspended() const;
        void Init(AudioRenderer*, int);
        bool IsPlaying() const;
        IsPersistent() const;
        void Suspend();
        void Update(float);
        void MixSend();
        bool IsFree() const;
        void Claim();
        void SetSend(shared_ptr<AudioBuss> const&, shared_ptr<AudioBuss> const&);
        float GetGain() const;
        IsEncoded() const;
        VoiceInstance();
        void Free();
        void SetRate(unsigned int);
        void Start();
        void UpdateLoopIterations();
        void WriteToOutputBuffer();
        void ConfigureVoice(shared_ptr<eastl::fixed_stack<shared_ptr<AudioBuffer>, 1ul, true>> const&,
                            AudioFormat const*);
        void DecodeCallback(PacketT<Array<unsigned char, eastl::allocator>>&);
        void Pause();
        void Resume();
        ~VoiceInstance();

        // data members, from how the methods use this: 348 bytes
        AudioRenderer* field_0; // offset 0
        DebugUIElement field_8; // offset 8
        char _unknown_9[3];
        float field_12;      // offset 12
        undefined1 field_16; // offset 16
        char _unknown_17[3];
        float m_preSendControls; // offset 20
        float field_24;          // offset 24
        float field_28;          // offset 28
        int m_loopIterations;    // offset 32
        int field_36;            // offset 36
        Layout* field_40;        // offset 40
        int field_48;            // offset 48
        char _unknown_52[20];
        shared_ptr field_72; // offset 72
        char _unknown_88[168];
        ulong field_256; // offset 256
        char _unknown_264[8];
        long* field_272; // offset 272
        int field_280;   // offset 280
        char _unknown_284[4];
        AudioSend field_288; // offset 288
        char _unknown_329[7];
        undefined4 field_336; // offset 336
        undefined4 field_340; // offset 340
        char _unknown_344[4];
    };

    // 0x100b8a450, 16 bytes, inline, placed by class name and debug map
    // VoiceInstance::SetPreSendControls(float, float)
    void VoiceInstance::SetPreSendControls(float param_1, float param_2) {
        m_preSendControls = param_1;
        field_28 = param_2;
    }

    // 0x100b8a460, 16 bytes, inline, placed by class name and debug map
    // VoiceInstance::SetSoundType(game::SoundType)
    void VoiceInstance::SetSoundType(undefined4 param_2) {
        field_340 = param_2;
    }

    // 0x100b8a4c0, 16 bytes, inline, placed by class name and debug map
    // VoiceInstance::IsFinished() const
    bool VoiceInstance::IsFinished() {
        return field_48 == 5;
    }

    // 0x100b8a4d0, 16 bytes, inline, placed by class name and debug map
    // VoiceInstance::IsSuspended() const
    bool VoiceInstance::IsSuspended() {
        return field_48 == 4;
    }

    // 0x100b8f020, 16 bytes, inline, placed by class name
    // VoiceInstance::IsPlaying() const
    bool VoiceInstance::IsPlaying() {
        return field_48 == 3;
    }

    // 0x100b8f030, 32 bytes, inline, placed by class name
    // VoiceInstance::IsPersistent() const
    undefined4 VoiceInstance::IsPersistent() {
        uint uVar1;

        uVar1 = field_340 & 4294967294;
        return CONCAT31((int3)(uVar1 >> 8), uVar1 == 10);
    }

    // 0x100b8f5c0, 16 bytes, inline, placed by class name
    // VoiceInstance::IsFree() const
    bool VoiceInstance::IsFree() {
        return field_48 < 1;
    }

    // 0x100b8ffc0, 16 bytes, inline, placed by class name
    // VoiceInstance::GetGain() const
    float VoiceInstance::GetGain() {
        return field_24 * m_preSendControls;
    }

    // 0x100b8ffd0, 16 bytes, inline, placed by class name
    // VoiceInstance::IsEncoded() const
    undefined8 VoiceInstance::IsEncoded() {
        return CONCAT71((int7)((ulong)field_40 >> 8), field_40[21]);
    }

    // 0x100b97520, 16 bytes, complete-object destructor, inline, placed by class name
    // VoiceInstance::~VoiceInstance(): jumps straight to the base-object destructor

    // 0x100b97530, 96 bytes, base-object destructor, inline, placed by class name
    // VoiceInstance::~VoiceInstance()
    void VoiceInstance::~VoiceInstance() {
        field_288->~ActiveComponent();
        (&field_240)->~shared_ptr();
        (&field_176)->~mutex();
        (&field_88)->~queue();
        field_72->~shared_ptr();
        (&field_56)->~shared_ptr();
    }

    // 0x100ba20c0, 16 bytes, inline, placed by class name
    // VoiceInstance::Update(float)::$_1::operator()(PacketT<Array<unsigned char, eastl::allocator> >&) const
    /* VoiceInstance::Update(float)::$_1::TEMPNAMEPLACEHOLDERVALUE(PacketT<Array<unsigned
   char, eastl::allocator> >&) const */

    void VoiceInstance::Update(float)::$_1::operator()(PacketT* param_1) {
        DecodeCallback(*(VoiceInstance**)this, param_1);
    }

} // namespace jag::hal::audio
