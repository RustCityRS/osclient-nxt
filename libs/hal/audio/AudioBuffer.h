// libs/hal/audio/AudioBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::hal::audio {
    class AudioBuffer {
    public:
        class AudioDataContainer;
        // virtual methods in vtable order
        virtual ~AudioBuffer();
        virtual uint8_t[16] GetNumberSamplesCanBeRead(unsigned int arg1) const;
        virtual int NumberOfChannels() const;
        virtual bool HasChannel(unsigned int arg1) const;
        virtual int SampleRate() const;
        virtual float ReadSample(unsigned int arg1, unsigned int arg2, bool arg3) const;
        virtual void SetRate(unsigned int arg1);
        virtual WrapArray<float>* GetData(unsigned int arg1);
        virtual int GetReadOffsetSamples(unsigned int arg1) const;
        virtual unsigned int GetMaximumSamples() const;
        void Format() const;
        int TotalSize() const;
        AudioBuffer(int arg1, int arg2, int arg3, const AudioFormat* audioFormat, bool arg5);
        AudioBuffer(int arg1, const AudioFormat* audioFormat);
        AudioBuffer(unsigned char* arg1, int arg2, int arg3, int arg4, const AudioFormat* audioFormat);
        int GetWriteOffsetSamples(unsigned int arg1) const;
        void ClearSamples(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        void WriteByteData(const unsigned char* arg1, unsigned long arg2, unsigned long arg3);
        void ConsumedSamples(unsigned int arg1, bool arg2);
        void WroteSamples(unsigned int arg1);
        void Reset(int arg1, bool arg2);
        void WriteSample(float arg1, unsigned int arg2, unsigned int arg3, bool arg4);
        unsigned long GetNumberSamplesCanBeWritten(unsigned int arg1) const;
        void SplitIntoChannelSpecificPan(unsigned int arg1, float arg2) const;
        void WriteFromInterleavedPacket(unsigned char* arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                        unsigned int arg5);
        void WriteSamples(SampleReadable& sampleReadable, unsigned int arg2, unsigned int arg3, unsigned int& arg4,
                          unsigned int& arg5, bool arg6, float arg7, float arg8);
        void ReSample(const WrapArray<float>& wrapArray1, WrapArray<float>& wrapArray2, unsigned int arg3,
                      unsigned int arg4, unsigned int arg5, unsigned int arg6, float arg7, float arg8, float arg9,
                      unsigned int arg10, float arg11);
        void WriteSamples(const shared_ptr<SampleReadable>& sampleReadable, unsigned int arg2, unsigned int arg3,
                          unsigned int& arg4, unsigned int& arg5, bool arg6, float arg7, float arg8);
        WrapArray<short>* GetDataShort(unsigned int arg1);
        bool CanWriteSample(unsigned int arg1, unsigned int arg2) const;
        long GetDataRaw();
        bool CanReadSample(unsigned int arg1, unsigned int arg2) const;
        int GetNumberBytesCanBeRead(unsigned int arg1, unsigned int arg2) const;
        int GetNumberBytesCanBeWritten(unsigned int arg1, unsigned int arg2) const;

    private:
        AudioFormat* field_8;
        uint8_t _unknown_16[176];
        unsigned int field_192;
        unsigned int field_196;
        int field_200;
        unsigned int field_204;
        uint8_t field_208;
        uint8_t _unknown_209[3];
        unsigned int m_maximumSamples;
        uint8_t _unknown_216[4];
    };

    class AudioBuffer::AudioDataContainer {
    public:
        ~AudioDataContainer();
        void Resize(unsigned int arg1);
        void Reset();
        AudioDataContainer();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        bool* field_16;
        uint8_t _unknown_24[48];
        uint64_t field_72;
        unsigned int field_80;
        uint8_t _unknown_84[4];
    };

    class SampleReadable {
    public:
        // virtual methods in vtable order
        virtual ~SampleReadable();
        SampleReadable();
    };

    // 0x100294560
    WrapArray<float>* AudioBuffer::GetData(unsigned int arg1) {
        unsigned long arg1_00 = 0;
        if (field_8->field_20 == false) {
            arg1_00 = (unsigned long)arg1;
        }
        long lVar1 = field_16[arg1_00];
        return (WrapArray<float>*)(lVar1 + 40);
    }

    // 0x1002a7a60
    AudioBuffer::~AudioBuffer() {
        field_16.~array();
    }

    // 0x100666ad0
    int AudioBuffer::TotalSize() const {
        return field_196 * field_192;
    }

    // 0x100b8bf40
    SampleReadable::SampleReadable() {}

    // 0x100b8ccb0
    unsigned long AudioBuffer::GetNumberSamplesCanBeWritten(unsigned int arg1) const {
        unsigned long uVar1 = 0;
        if (field_208 == '\0') {
            uVar1 = GetNumberBytesCanBeWritten(arg1, 0);
            uVar1 = (uVar1 & 4294967295) / (unsigned long)field_8->field_12;
        }
        return uVar1;
    }

    // 0x100b8dbc0
    void AudioBuffer::WriteSamples(const shared_ptr<SampleReadable>& sampleReadable, unsigned int arg2,
                                   unsigned int arg3, unsigned int& arg4, unsigned int& arg5, bool arg6, float arg7,
                                   float arg8) {
        unsigned int arg2_00;
        uint32_t in_register_00000034;

        if (((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2))->operator_cast_to_bool() != '\0') {
            arg2_00 = *(*((shared_ptr<SampleReadable>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2)));
            WriteSamples((SampleReadable*)sampleReadable, arg2_00, arg3,
                         (unsigned int*)((unsigned long)arg4 & 4294967295), arg5, arg6, arg7, arg8);
        }
    }

    // 0x100b8e2f0
    WrapArray<short>* AudioBuffer::GetDataShort(unsigned int arg1) {
        unsigned long arg1_00 = 0;
        if (field_8->field_20 == false) {
            arg1_00 = (unsigned long)arg1;
        }
        long lVar1 = field_16[arg1_00];
        return (WrapArray<short>*)(lVar1 + 56);
    }

    // 0x100b8fd60
    bool AudioBuffer::CanWriteSample(unsigned int arg1, unsigned int arg2) const {
        unsigned int uVar1;
        bool bVar2;

        if (field_208 == '\0') {
            uVar1 = GetNumberBytesCanBeWritten(arg1, arg2 * field_8->field_12);
            bVar2 = field_8->field_12 <= uVar1;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x100b90610
    long AudioBuffer::GetDataRaw() {
        if ((field_8->field_20 == false) && (field_196 != 1)) {
            LogAssert("m_DataFormat->m_interleaved || m_NumberOfChannels == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.h",
                      70, nullptr);
        }
        return field_16[0] + 24;
    }

    // 0x100b908d0
    bool AudioBuffer::CanReadSample(unsigned int arg1, unsigned int arg2) const {
        unsigned int uVar1 = GetNumberBytesCanBeRead(arg1, arg2 * field_8->field_12);
        return field_8->field_12 <= uVar1;
    }

    // 0x100b91e60
    int AudioBuffer::GetNumberBytesCanBeRead(unsigned int arg1, unsigned int arg2) const {
        unsigned long arg1_00;
        long lVar2;

        int iVar1 = 0;
        if (arg1 < field_196) {
            arg1_00 = 0;
            if (field_8->field_20 == false) {
                arg1_00 = (unsigned long)arg1;
            }
            lVar2 = field_16[arg1_00];
            iVar1 = *(int*)(lVar2 + 84) - arg2;
        }
        return iVar1;
    }

    // 0x100b96fd0
    uint8_t[16] AudioBuffer::GetNumberSamplesCanBeRead(unsigned int arg1) const {
        uint8_t auVar3[16];

        unsigned long uVar2 = GetNumberBytesCanBeRead(arg1, 0);
        unsigned long uVar1 = (unsigned long)field_8->field_12;
        auVar3._8_8_ = (uVar2 & 4294967295) % uVar1;
        auVar3._0_8_ = (uVar2 & 4294967295) / uVar1;
        return auVar3;
    }

    // 0x100b96ff0
    bool AudioBuffer::HasChannel(unsigned int arg1) const {
        return arg1 < field_196;
    }

    // 0x100b97000
    void AudioBuffer::SetRate(unsigned int arg1) {
        unsigned int local_1c[2];

        float local_14 = (float)field_204;
        local_1c[1] = 1;
        local_1c[0] = arg1;
        auto puVar1 = std::max<unsigned int>(*(local_1c + 1), *local_1c);
        field_200 = (int)(long)(local_14 * 0.00390625f * (float)*puVar1);
    }

    // 0x100b97300
    AudioBuffer::AudioDataContainer::AudioDataContainer() : Array<unsigned char>() {
        new (&field_24) shared_ptr();
        new (&field_40) shared_ptr();
        new (&field_56) shared_ptr();
        field_72 = 0;
        *(uint64_t*)&field_80 = 0;
    }

    // 0x100b97350
    int AudioBuffer::GetNumberBytesCanBeWritten(unsigned int arg1, unsigned int arg2) const {
        unsigned long arg1_00;
        long lVar2;

        int iVar1 = 0;
        if ((arg1 < field_196) && (field_208 == '\0')) {
            arg1_00 = 0;
            if (field_8->field_20 == false) {
                arg1_00 = (unsigned long)arg1;
            }
            lVar2 = field_16[arg1_00];
            iVar1 = *(int*)(lVar2 + 80) - arg2;
        }
        return iVar1;
    }

} // namespace jag::hal::audio

namespace jag::oldscape::sound {
    // 0x100294590
    float Pcm24ToFloat(int arg1) {
        unsigned int uVar1 = arg1 >> 31 ^ 8388607;
        if (arg1 + 8388608U < 16777216) {
            uVar1 = arg1;
        }
        return (float)(int)uVar1 * 1.192093e-07;
    }

} // namespace jag::oldscape::sound
