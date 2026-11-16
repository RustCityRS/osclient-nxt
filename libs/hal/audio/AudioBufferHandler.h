// libs/hal/audio/AudioBufferHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::hal::audio {
    class AudioBufferHandler {
    public:
        // virtual methods in vtable order
        virtual ~AudioBufferHandler();
        virtual int GetNumberSamplesCanBeRead(unsigned int arg1) const;
        virtual void NumberOfChannels() const;
        virtual void HasChannel(unsigned int arg1) const;
        virtual uint32_t SampleRate() const;
        virtual void ReadSample(unsigned int arg1, unsigned int arg2, bool arg3) const;
        virtual void SetRate(unsigned int arg1);
        virtual void GetData(unsigned int arg1);
        virtual unsigned int GetReadOffsetSamples(unsigned int arg1) const;
        virtual void GetMaximumSamples() const;
        AudioBufferHandler(unsigned int arg1, const shared_ptr<AudioBuffer>& audioBuffer);
        void ConsumedSamples(unsigned int arg1);
        bool IsFinishedReading() const;
        void ResetReadPosition();

    private:
        uint8_t _unknown_8[16];
        unsigned int m_readOffsetSamples;
        unsigned int field_28;
        unsigned int field_32;
        uint8_t _unknown_36[4];
    };

    // 0x100b90020
    void AudioBufferHandler::ConsumedSamples(unsigned int arg1) {
        m_readOffsetSamples = m_readOffsetSamples + arg1;
    }

    // 0x100b90670
    bool AudioBufferHandler::IsFinishedReading() const {
        auto plVar2 = field_8.operator->();
        return (**(void (**)(...))(*plVar2 + 80))(plVar2) == m_readOffsetSamples;
    }

    // 0x100b906a0
    void AudioBufferHandler::ResetReadPosition() {
        m_readOffsetSamples = 0;
    }

    // 0x100b97090
    void AudioBufferHandler::NumberOfChannels() const {
        auto plVar1 = field_8.operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
    }

    // 0x100b970b0
    void AudioBufferHandler::HasChannel(unsigned int arg1) const {
        auto plVar1 = field_8.operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1, arg1);
    }

    // 0x100b970e0
    void AudioBufferHandler::ReadSample(unsigned int arg1, unsigned int arg2, bool arg3) const {
        uint64_t in_register_00000009;

        auto plVar1 = field_8.operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1, arg1, arg2 + m_readOffsetSamples,
                                           (((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) & 4294967295);
    }

    // 0x100b97120
    void AudioBufferHandler::SetRate(unsigned int arg1) {
        field_28 = (unsigned int)(long)((float)arg1 * 0.00390625f * (float)field_28);
    }

    // 0x100b97150
    void AudioBufferHandler::GetData(unsigned int arg1) {
        auto plVar1 = field_8.operator->();
        (**(void (**)(...))(*plVar1 + 64))(plVar1, arg1);
    }

    // 0x100b97180
    void AudioBufferHandler::GetMaximumSamples() const {
        auto plVar1 = field_8.operator->();
        (**(void (**)(...))(*plVar1 + 80))(plVar1);
    }

    // 0x100b9f870
    AudioBufferHandler::~AudioBufferHandler() {
        field_8.~shared_ptr();
    }

} // namespace jag::hal::audio
