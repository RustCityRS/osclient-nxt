// libs/hal/audio/AudioBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::hal::audio {
    class AudioBuffer {
    public:
        class AudioDataContainer;
        // virtual methods in vtable order
        virtual ~AudioBuffer();
        virtual GetNumberSamplesCanBeRead(unsigned int) const;
        virtual NumberOfChannels() const;
        virtual bool HasChannel(unsigned int) const;
        virtual int SampleRate() const;
        virtual float ReadSample(unsigned int, unsigned int, bool) const;
        virtual void SetRate(unsigned int);
        virtual long GetData(unsigned int);
        virtual int GetReadOffsetSamples(unsigned int) const;
        virtual GetMaximumSamples() const;
        Format() const;
        int TotalSize() const;
        AudioBuffer(int, int, int, AudioFormat const*, bool);
        AudioBuffer(int, AudioFormat const*);
        AudioBuffer(unsigned char*, int, int, int, AudioFormat const*);
        int GetWriteOffsetSamples(unsigned int) const;
        void ClearSamples(unsigned int, unsigned int, unsigned int);
        void WriteByteData(unsigned char const*, unsigned long, unsigned long);
        void ConsumedSamples(unsigned int, bool);
        void WroteSamples(unsigned int);
        void Reset(int, bool);
        void WriteSample(float, unsigned int, unsigned int, bool);
        ulong GetNumberSamplesCanBeWritten(unsigned int) const;
        void SplitIntoChannelSpecificPan(unsigned int, float) const;
        void WriteFromInterleavedPacket(unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int);
        void WriteSamples(SampleReadable&, unsigned int, unsigned int, unsigned int&, unsigned int&, bool, float,
                          float);
        void ReSample(WrapArray<float> const&, WrapArray<float>&, unsigned int, unsigned int, unsigned int,
                      unsigned int, float, float, float, unsigned int, float);
        void WriteSamples(shared_ptr<SampleReadable> const&, unsigned int, unsigned int, unsigned int&, unsigned int&,
                          bool, float, float);
        long GetDataShort(unsigned int);
        bool CanWriteSample(unsigned int, unsigned int) const;
        long GetDataRaw();
        bool CanReadSample(unsigned int, unsigned int) const;
        int GetNumberBytesCanBeRead(unsigned int, unsigned int) const;
        int GetNumberBytesCanBeWritten(unsigned int, unsigned int) const;

        // data members, from how the methods use this: 220 bytes
        undefined** field_0;  // offset 0, vtable pointer
        AudioFormat* field_8; // offset 8
        char _unknown_16[176];
        uint field_192;       // offset 192
        uint field_196;       // offset 196
        int field_200;        // offset 200
        uint field_204;       // offset 204
        undefined1 field_208; // offset 208
        char _unknown_209[3];
        uint field_212; // offset 212
        char _unknown_216[4];
    };

    class AudioBuffer::AudioDataContainer {
    public:
        ~AudioDataContainer();
        void Resize(unsigned int);
        void Reset();
        AudioDataContainer();

        // data members, from how the methods use this: 88 bytes
        char _unknown_0[8];
        ulong field_8;    // offset 8
        signed* field_16; // offset 16
        char _unknown_24[48];
        undefined8 field_72; // offset 72
        uint field_80;       // offset 80
        char _unknown_84[4];
    };

    class SampleReadable {
    public:
        // virtual methods in vtable order
        virtual ~SampleReadable();
        SampleReadable();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100293a20, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // AudioBuffer::~AudioBuffer(): jumps straight to the base-object destructor

    // 0x100294560, 48 bytes, inline, placed by class name and debug map
    // AudioBuffer::GetData(unsigned int)
    long AudioBuffer::GetData(uint param_1) {
        ulong uVar1;
        long lVar2;

        uVar1 = 0;
        if (field_8->field_20 == false) {
            uVar1 = (ulong)param_1;
        }
        lVar2 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
            (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, uVar1);
        return lVar2 + 40;
    }

    // 0x1002a7a60, 48 bytes, base-object destructor, inline, placed by class name
    // AudioBuffer::~AudioBuffer()
    void AudioBuffer::~AudioBuffer() {
        field_0 = &PTR__AudioBuffer_100f26780;
        (&field_16)->~array();
        ~AutoSingleton();
    }

    // 0x100666ad0, 32 bytes, inline, placed by class name
    // AudioBuffer::TotalSize() const
    int AudioBuffer::TotalSize() {
        return field_196 * field_192;
    }

    // 0x100b8bf40, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // SampleReadable::SampleReadable()
    void SampleReadable::SampleReadable() {
        field_0 = PTR_vtable_100ee7db8 + 16;
    }

    // 0x100b8ccb0, 48 bytes, inline, placed by class name
    // AudioBuffer::GetNumberSamplesCanBeWritten(unsigned int) const
    ulong AudioBuffer::GetNumberSamplesCanBeWritten(uint param_1) {
        ulong uVar1;

        uVar1 = 0;
        if (field_208 == '\0') {
            uVar1 = GetNumberBytesCanBeWritten(this, param_1, 0);
            uVar1 = (uVar1 & 4294967295) / (ulong)field_8->field_12;
        }
        return uVar1;
    }

    // 0x100b8dbc0, 128 bytes, inline, placed by class name
    // AudioBuffer::WriteSamples(shared_ptr<SampleReadable> const&, unsigned int, unsigned int, unsigned int&, unsigned int&, bool, float, float)
    void AudioBuffer::WriteSamples(shared_ptr* param_1, uint param_2, uint param_3, uint* param_4, uint* param_5,
                                   bool param_6, float param_7, float param_8) {
        SampleReadable* pSVar1;

        if (shared_ptr::operator_cast_to_bool(param_1)) {
            pSVar1 = (SampleReadable*)shared_ptr<SampleReadable>::operator*((shared_ptr<SampleReadable>*)param_1);
            WriteSamples(this, pSVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
        }
    }

    // 0x100b8e2f0, 48 bytes, inline, placed by class name
    // AudioBuffer::GetDataShort(unsigned int)
    long AudioBuffer::GetDataShort(uint param_1) {
        ulong uVar1;
        long lVar2;

        uVar1 = 0;
        if (field_8->field_20 == false) {
            uVar1 = (ulong)param_1;
        }
        lVar2 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
            (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, uVar1);
        return lVar2 + 56;
    }

    // 0x100b8fd60, 64 bytes, inline, placed by class name
    // AudioBuffer::CanWriteSample(unsigned int, unsigned int) const
    bool AudioBuffer::CanWriteSample(uint param_1, uint param_2) {
        uint uVar1;
        bool bVar2;

        if (field_208 == '\0') {
            uVar1 = GetNumberBytesCanBeWritten(this, param_1, param_2 * field_8->field_12);
            bVar2 = field_8->field_12 <= uVar1;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x100b90610, 96 bytes, inline, placed by class name
    // AudioBuffer::GetDataRaw()
    long AudioBuffer::GetDataRaw() {
        long lVar1;

        if ((field_8->field_20 == false) && (field_196 != 1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_DataFormat->m_interleaved || m_NumberOfChannels == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.h",
                      70, (char*)0);
        }
        lVar1 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
            (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, 0);
        return lVar1 + 24;
    }

    // 0x100b908d0, 48 bytes, inline, placed by class name
    // AudioBuffer::CanReadSample(unsigned int, unsigned int) const
    bool AudioBuffer::CanReadSample(uint param_1, uint param_2) {
        uint uVar1;

        uVar1 = GetNumberBytesCanBeRead(this, param_1, param_2 * field_8->field_12);
        return field_8->field_12 <= uVar1;
    }

    // 0x100b91e60, 64 bytes, inline, placed by class name
    // AudioBuffer::GetNumberBytesCanBeRead(unsigned int, unsigned int) const
    int AudioBuffer::GetNumberBytesCanBeRead(uint param_1, uint param_2) {
        int iVar1;
        ulong uVar2;
        long lVar3;

        iVar1 = 0;
        if (param_1 < field_196) {
            uVar2 = 0;
            if (field_8->field_20 == false) {
                uVar2 = (ulong)param_1;
            }
            lVar3 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, uVar2);
            iVar1 = *(int*)(lVar3 + 84) - param_2;
        }
        return iVar1;
    }

    // 0x100b96fb0, 32 bytes, deleting destructor, inline, placed by class name
    // AudioBuffer::~AudioBuffer()
    void AudioBuffer::~AudioBuffer() {
        ~AudioBuffer(this);
        operator_delete(this);
    }

    // 0x100b96fd0, 32 bytes, inline, placed by class name
    // AudioBuffer::GetNumberSamplesCanBeRead(unsigned int) const
    undefined1[16] AudioBuffer::GetNumberSamplesCanBeRead(uint param_1) {
        ulong uVar1;
        ulong uVar2;
        undefined1 auVar3[16];

        uVar2 = GetNumberBytesCanBeRead(this, param_1, 0);
        uVar1 = (ulong)field_8->field_12;
        auVar3._8_8_ = (uVar2 & 4294967295) % uVar1;
        auVar3._0_8_ = (uVar2 & 4294967295) / uVar1;
        return auVar3;
    }

    // 0x100b96ff0, 16 bytes, inline, placed by class name
    // AudioBuffer::HasChannel(unsigned int) const
    bool AudioBuffer::HasChannel(uint param_1) {
        return param_1 < field_196;
    }

    // 0x100b97000, 96 bytes, inline, placed by class name
    // AudioBuffer::SetRate(unsigned int)
    void AudioBuffer::SetRate(uint param_1) {
        uint* puVar1;
        uint local_1c[2];
        float local_14;

        local_14 = (float)field_204;
        local_1c[1] = 1;
        local_1c[0] = param_1;
        puVar1 = std::max<unsigned int>(local_1c + 1, local_1c);
        field_200 = (int)(long)(local_14 * 0.00390625 * (float)*puVar1);
    }

    // 0x100b972f0, 16 bytes, complete-object constructor, inline, placed by class name
    // AudioBuffer::AudioDataContainer::AudioDataContainer(): jumps straight to the base-object constructor

    // 0x100b97300, 80 bytes, base-object constructor, inline, placed by class name
    // AudioBuffer::AudioDataContainer::AudioDataContainer()
    void AudioBuffer::AudioDataContainer::AudioDataContainer() {
        _func_decltype_nullptr* in_RSI;

        new (this) Array<unsigned char, eastl::allocator>();
        new (&field_24, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_40, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_56, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_72 = 0;
        *(undefined8*)&field_80 = 0;
    }

    // 0x100b97350, 80 bytes, inline, placed by class name
    // AudioBuffer::GetNumberBytesCanBeWritten(unsigned int, unsigned int) const
    int AudioBuffer::GetNumberBytesCanBeWritten(uint param_1, uint param_2) {
        int iVar1;
        ulong uVar2;
        long lVar3;

        iVar1 = 0;
        if ((param_1 < field_196) && (field_208 == '\0')) {
            uVar2 = 0;
            if (field_8->field_20 == false) {
                uVar2 = (ulong)param_1;
            }
            lVar3 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, uVar2);
            iVar1 = *(int*)(lVar3 + 80) - param_2;
        }
        return iVar1;
    }

} // namespace jag::hal::audio

namespace jag::oldscape::sound {
    // 0x100294590, 48 bytes, placed by debug map only (low confidence)
    // Pcm24ToFloat(int)
    float Pcm24ToFloat(int param_1) {
        uint uVar1;

        uVar1 = param_1 >> 31 ^ 8388607;
        if (param_1 + 8388608U < 16777216) {
            uVar1 = param_1;
        }
        return (float)(int)uVar1 * 1.192093e-07;
    }

} // namespace jag::oldscape::sound
