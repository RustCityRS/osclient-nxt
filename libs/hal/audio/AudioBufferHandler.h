// libs/hal/audio/AudioBufferHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::hal::audio {
    class AudioBufferHandler {
    public:
        // virtual methods in vtable order
        virtual ~AudioBufferHandler();
        virtual int GetNumberSamplesCanBeRead(unsigned int) const;
        virtual void NumberOfChannels() const;
        virtual void HasChannel(unsigned int) const;
        virtual SampleRate() const;
        virtual void ReadSample(unsigned int, unsigned int, bool) const;
        virtual void SetRate(unsigned int);
        virtual void GetData(unsigned int);
        virtual uint GetReadOffsetSamples(unsigned int) const;
        virtual void GetMaximumSamples() const;
        AudioBufferHandler(unsigned int, shared_ptr<AudioBuffer> const&);
        void ConsumedSamples(unsigned int);
        bool IsFinishedReading() const;
        void ResetReadPosition();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        uint m_readOffsetSamples; // offset 24
        uint field_28;            // offset 28
        uint field_32;            // offset 32
        char _unknown_36[4];
    };

    // 0x100b90020, 16 bytes, inline, placed by class name and debug map
    // AudioBufferHandler::ConsumedSamples(unsigned int)
    void AudioBufferHandler::ConsumedSamples(uint param_1) {
        m_readOffsetSamples = m_readOffsetSamples + param_1;
    }

    // 0x100b90670, 48 bytes, inline, placed by class name
    // AudioBufferHandler::IsFinishedReading() const
    bool AudioBufferHandler::IsFinishedReading() {
        long* plVar2;

        plVar2 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)&field_8);
        return (**(code**)(*plVar2 + 80))(plVar2) == m_readOffsetSamples;
    }

    // 0x100b906a0, 16 bytes, inline, placed by class name
    // AudioBufferHandler::ResetReadPosition()
    void AudioBufferHandler::ResetReadPosition() {
        m_readOffsetSamples = 0;
    }

    // 0x100b97060, 16 bytes, complete-object destructor, inline, placed by class name
    // AudioBufferHandler::~AudioBufferHandler(): jumps straight to the base-object destructor

    // 0x100b97070, 32 bytes, deleting destructor, inline, placed by class name
    // AudioBufferHandler::~AudioBufferHandler()
    void AudioBufferHandler::~AudioBufferHandler() {
        ~AudioBufferHandler(this);
        operator_delete(this);
    }

    // 0x100b97090, 32 bytes, inline, placed by class name
    // AudioBufferHandler::NumberOfChannels() const
    void AudioBufferHandler::NumberOfChannels() {
        long* plVar1;

        plVar1 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)&field_8);
        (**(code**)(*plVar1 + 24))(plVar1);
    }

    // 0x100b970b0, 48 bytes, inline, placed by class name
    // AudioBufferHandler::HasChannel(unsigned int) const
    void AudioBufferHandler::HasChannel(uint param_1) {
        long* plVar1;

        plVar1 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)&field_8);
        (**(code**)(*plVar1 + 32))(plVar1, param_1);
    }

    // 0x100b970e0, 64 bytes, inline, placed by class name
    // AudioBufferHandler::ReadSample(unsigned int, unsigned int, bool) const
    void AudioBufferHandler::ReadSample(uint param_1, uint param_2, bool param_3) {
        long* plVar1;
        undefined7 in_register_00000009;

        plVar1 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)&field_8);
        (**(code**)(*plVar1 + 48))(plVar1, param_1, param_2 + m_readOffsetSamples,
                                   CONCAT71(in_register_00000009, param_3) & 4294967295);
    }

    // 0x100b97120, 48 bytes, inline, placed by class name
    // AudioBufferHandler::SetRate(unsigned int)
    void AudioBufferHandler::SetRate(uint param_1) {
        field_28 = (uint)(long)((float)param_1 * 0.00390625 * (float)field_28);
    }

    // 0x100b97150, 48 bytes, inline, placed by class name
    // AudioBufferHandler::GetData(unsigned int)
    void AudioBufferHandler::GetData(uint param_1) {
        long* plVar1;

        plVar1 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)&field_8);
        (**(code**)(*plVar1 + 64))(plVar1, param_1);
    }

    // 0x100b97180, 32 bytes, inline, placed by class name
    // AudioBufferHandler::GetMaximumSamples() const
    void AudioBufferHandler::GetMaximumSamples() {
        long* plVar1;

        plVar1 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)&field_8);
        (**(code**)(*plVar1 + 80))(plVar1);
    }

    // 0x100b9f870, 48 bytes, base-object destructor, inline, placed by class name
    // AudioBufferHandler::~AudioBufferHandler()
    void AudioBufferHandler::~AudioBufferHandler() {
        field_0 = &PTR__AudioBufferHandler_100f267e8;
        (&field_8)->~shared_ptr();
        ~AutoSingleton();
    }

} // namespace jag::hal::audio
