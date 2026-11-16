// libs/hal/audio/AudioBuffer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.audio

#include "AudioBuffer.h"

namespace jag::hal::audio {
    // 0x10000b2a0: AudioBuffer::Format() const has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x1001d9030: AudioBuffer::AudioDataContainer::~AudioDataContainer() has the same machine code as oldscape::VBOMapper::~VBOMapper()

    // 0x1004198f0: AudioBuffer::NumberOfChannels() const has the same machine code as game::GraphicsDefaults::GetNpcChatTimeout() const

    // 0x100444920: AudioBuffer::GetMaximumSamples() const has the same machine code as game::LocationContainer::GetMapSquareX() const

    // 0x1006211f0: AudioBuffer::SampleRate() const has the same machine code as game::Camera::GetLookatMode() const

    // 0x100b8be30
    AudioBuffer::AudioBuffer(int arg1, int arg2, int arg3, const AudioFormat* audioFormat, bool arg5)
        : SampleReadable(), field_8(audioFormat) {
        unsigned int uVar1;

        unsigned int uVar2 = arg1 * audioFormat->field_12;
        field_192 = uVar2;
        field_196 = arg2;
        field_200 = arg3;
        field_204 = arg3;
        field_208 = 0;
        m_maximumSamples = uVar2 >> (*(uint8_t*)&field_8->field_16 & 31);
        if (field_8->field_20 == false) {
            arg2 = 1;
        }
        unsigned long arg1_00 = 0;
        while (true) {
            uVar1 = 1;
            if (field_8->field_20 == false) {
                uVar1 = field_196;
            }
            if (uVar1 <= arg1_00)
                break;
            ((AudioDataContainer*)field_16[arg1_00])->Resize(arg2 * uVar2);
            arg1_00 = arg1_00 + 1;
        }
    }

    // 0x100b8bf80
    void AudioBuffer::AudioDataContainer::Resize(unsigned int arg1) {
        if (field_24.empty() == '\0') {
            LogAssert("m_DataByteView.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                      546, nullptr);
        }
        Reset();
        field_80 = arg1;
        set_max_size((unsigned long)arg1, 5);
        ___bzero((*this)[0]);
        Particle* pPVar3 = (Particle*)(*this)[0];
        new (&field_24) WrapArray(pPVar3, (unsigned long)arg1);
        if ((arg1 & 1) == 0) {
            pPVar3 = (Particle*)(*this)[0];
            new (&field_56) WrapArray(pPVar3, (unsigned long)(arg1 >> 1));
            if ((arg1 & 3) == 0) {
                pPVar3 = (Particle*)(*this)[0];
                new (&field_40) WrapArray(pPVar3, (unsigned long)(arg1 >> 2));
            }
        }
    }

    // 0x100b8c070
    AudioBuffer::AudioBuffer(int arg1, const AudioFormat* audioFormat)
        : SampleReadable(), field_8(audioFormat), field_192(arg1), field_196(1), field_200(0), field_204(0),
          field_208(1) {
        m_maximumSamples = (unsigned int)arg1 >> (*(uint8_t*)&field_8->field_16 & 31);
        ((AudioDataContainer*)field_16[0])->Resize(arg1);
    }

    // 0x100b8c130
    AudioBuffer::AudioBuffer(unsigned char* arg1, int arg2, int arg3, int arg4, const AudioFormat* audioFormat)
        : SampleReadable(), field_8(audioFormat) {
        unsigned int uVar3 = arg2 * audioFormat->field_12;
        field_192 = uVar3;
        field_196 = arg3;
        field_200 = arg4;
        field_204 = arg4;
        field_208 = 0;
        m_maximumSamples = uVar3 >> (*(uint8_t*)&field_8->field_16 & 31);
        int iVar2 = 1;
        if (field_8->field_20 != false) {
            iVar2 = arg3;
        }
        uVar3 = iVar2 * uVar3;
        long lVar1 = field_16[0];
        new ((lVar1 + 24)) WrapArray(arg1, (unsigned long)uVar3);
        new ((lVar1 + 56)) WrapArray(arg1, (unsigned long)(uVar3 >> 1));
        new ((lVar1 + 40)) WrapArray(arg1, (unsigned long)(uVar3 >> 2));
    }

    // 0x100b8c240
    int AudioBuffer::GetReadOffsetSamples(unsigned int arg1) const {
        int iVar2;
        long lVar3;

        AudioFormat* pAVar1 = field_8;
        if (pAVar1->field_20 == false) {
            lVar3 = field_16[(unsigned long)arg1];
            iVar2 = *(int*)(lVar3 + 76) >> (*(uint8_t*)&pAVar1->field_16 & 31);
        } else {
            lVar3 = field_16[0];
            iVar2 = (*(int*)(lVar3 + 76) >> (*(uint8_t*)&pAVar1->field_16 & 31)) * field_196;
        }
        return iVar2;
    }

    // 0x100b8c2a0
    int AudioBuffer::GetWriteOffsetSamples(unsigned int arg1) const {
        int iVar2;
        long lVar3;

        AudioFormat* pAVar1 = field_8;
        if (pAVar1->field_20 == false) {
            lVar3 = field_16[(unsigned long)arg1];
            iVar2 = *(int*)(lVar3 + 72) >> (*(uint8_t*)&pAVar1->field_16 & 31);
        } else {
            lVar3 = field_16[0];
            iVar2 = (*(int*)(lVar3 + 72) >> (*(uint8_t*)&pAVar1->field_16 & 31)) * field_196;
        }
        return iVar2;
    }

    // 0x100b8c2f0
    void AudioBuffer::ClearSamples(unsigned int arg1, unsigned int arg2, unsigned int arg3) {
        unsigned int local_38;

        AudioFormat* pAVar2 = field_8;
        bool bVar1 = pAVar2->field_20;
        unsigned int uVar6 = m_maximumSamples;
        if (bVar1 != false) {
            uVar6 = uVar6 * field_196;
        }
        if (uVar6 < arg2 + arg1) {
            local_38 = m_maximumSamples;
            if (bVar1 != false) {
                local_38 = local_38 * field_196;
            }
            local_38 = (arg2 + arg1) % local_38;
            arg2 = arg2 - local_38;
        } else {
            local_38 = 0;
        }
        unsigned long uVar4 = 0;
        if (bVar1 == false) {
            uVar4 = (unsigned long)arg3;
        }
        long lVar3 = field_16[uVar4];
        uVar6 = pAVar2->field_12;
        Layout* this_00 = (Layout*)(lVar3 + 24);
        uVar4 = this_00->HeapBeginPtr();
        if (uVar4 < (arg1 + arg2) * uVar6) {
            LogAssert("writeOffsetSamples * m_DataFormat->m_SampleSizeInBytes + nsamples * "
                      "m_DataFormat->m_SampleSizeInBytes <= dataContainer.m_DataByteView.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                      85, nullptr);
        }
        uint64_t uVar5 = (*this_00)[(unsigned long)(arg1 * field_8->field_12)];
        ___bzero(uVar5);
        if (local_38 != 0) {
            uVar6 = field_8->field_12;
            uVar4 = this_00->HeapBeginPtr();
            if (uVar4 < uVar6 * local_38) {
                LogAssert(
                    "nWrappedSamples * m_DataFormat->m_SampleSizeInBytes <= dataContainer.m_DataByteView.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                    91, nullptr);
            }
            uVar5 = (*this_00)[0];
            ___bzero(uVar5, local_38 * field_8->field_12);
        }
    }

    // 0x100b8c440
    void AudioBuffer::WriteByteData(const unsigned char* arg1, unsigned long arg2, unsigned long arg3) {
        int iVar1;
        long lVar2;
        int iVar5;

        if (field_8->field_21 == false) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                      100,
                      "AUDIO ERROR: Trying to write binary data into an audio buffer with a non-encoded format. Use "
                      "WriteSample or change the buffer type.");
        } else if (arg3 != 0) {
            lVar2 = field_16[0];
            if ((arg1 == nullptr) || (iVar5 = (int)arg3, *(int*)(lVar2 + 80) < iVar5)) {
                LogAssert(
                    "val && static_cast<int>(size) <= dataPoint.m_BytesCanBeWritten",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                    109, nullptr);
            }
            if (arg1 != nullptr) {
                iVar1 = *(int*)(lVar2 + 72);
                if (((lVar2 + 24))->HeapBeginPtr() < (long)iVar1 + arg3) {
                    LogAssert("dataPoint.m_WriteOffsetBytes + size <= dataPoint.m_DataByteView.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                              "AudioBuffer.cpp",
                              112, nullptr);
                }
                _memcpy((void*)(*((lVar2 + 24)))[(long)*(int*)(lVar2 + 72)], arg1 + arg2, arg3);
            }
            *(int*)(lVar2 + 72) = *(int*)(lVar2 + 72) + iVar5;
            *(int*)(lVar2 + 80) = *(int*)(lVar2 + 80) - iVar5;
        }
    }

    // 0x100b8c550
    void AudioBuffer::ConsumedSamples(unsigned int arg1, bool arg2) {
        int* piVar1;
        bool bVar2;
        uint8_t uVar3;
        uint32_t extraout_var;
        long lVar4;
        int iVar5;
        unsigned int uVar6;

        unsigned long arg1_00 = 0;
        while (true) {
            bVar2 = field_8->field_20;
            uVar6 = 1;
            if (bVar2 == false) {
                uVar6 = field_196;
            }
            if (uVar6 <= arg1_00) {
                return;
            }
            if (arg2) {
                uVar6 = arg1;
                if (bVar2 != false) {
                    uVar6 = field_196 * arg1;
                }
                uVar3 = GetReadOffsetSamples((unsigned int)this);
                ClearSamples((((uint32_t)extraout_var << 8) | (uint8_t)uVar3), uVar6, (unsigned int)arg1_00);
            }
            iVar5 = field_8->field_12 * arg1;
            lVar4 = field_16[arg1_00];
            uVar6 = *(int*)(lVar4 + 76) + iVar5;
            *(unsigned int*)(lVar4 + 76) = uVar6;
            *(unsigned int*)(lVar4 + 76) = uVar6 % field_192;
            *(int*)(lVar4 + 80) = *(int*)(lVar4 + 80) + iVar5;
            piVar1 = (int*)(lVar4 + 84);
            *piVar1 = *piVar1 - iVar5;
            if (*piVar1 < 0)
                break;
            if ((int)field_192 < *(int*)(lVar4 + 80)) {
                LogAssert(
                    "dataPoint.m_BytesCanBeWritten <= static_cast<int>(m_DataLengthBytes)",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                    137, "Read too many bytes");
            }
            arg1_00 = arg1_00 + 1;
        }
        LogAssert("dataPoint.m_BytesCanBeRead >= 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                  136, "Read too many bytes");
    }

    // 0x100b8c680
    void AudioBuffer::WroteSamples(unsigned int arg1) {
        unsigned int uVar1;
        unsigned int uVar2;
        int iVar3;
        long lVar4;
        int iVar5;
        unsigned long arg1_00;

        if (field_208 == '\0') {
            iVar5 = arg1 * field_8->field_12;
            arg1_00 = 0;
            while (true) {
                uVar1 = 1;
                if (field_8->field_20 == false) {
                    uVar1 = field_196;
                }
                if (uVar1 <= arg1_00)
                    break;
                lVar4 = field_16[arg1_00];
                uVar2 = *(int*)(lVar4 + 72) + iVar5;
                *(unsigned int*)(lVar4 + 72) = uVar2;
                uVar1 = field_192;
                *(unsigned int*)(lVar4 + 72) = uVar2 % uVar1;
                iVar3 = *(int*)(lVar4 + 84) + iVar5;
                *(int*)(lVar4 + 84) = iVar3;
                *(int*)(lVar4 + 80) = *(int*)(lVar4 + 80) - iVar5;
                if ((int)uVar1 < iVar3) {
                    LogAssert("dataPoint.m_BytesCanBeRead <= static_cast<int>(m_DataLengthBytes)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                              "AudioBuffer.cpp",
                              157, "Wrote too many bytes");
                }
                if (*(int*)(lVar4 + 80) < 0) {
                    LogAssert("dataPoint.m_BytesCanBeWritten >= 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                              "AudioBuffer.cpp",
                              158, "Wrote too many bytes");
                }
                arg1_00 = arg1_00 + 1;
            }
        }
    }

    // 0x100b8c790
    void AudioBuffer::Reset(int arg1, bool arg2) {
        bool bVar1;
        uint8_t uVar2;
        uint32_t extraout_var;
        long lVar3;
        unsigned int uVar4;

        unsigned long arg1_00 = 0;
        while (true) {
            bVar1 = field_8->field_20;
            uVar4 = 1;
            if (bVar1 == false) {
                uVar4 = field_196;
            }
            if (uVar4 <= arg1_00)
                break;
            lVar3 = field_16[arg1_00];
            if ((arg1 & 3U) != 0) {
                *(uint32_t*)(lVar3 + 76) = 0;
            }
            if ((arg1 & 5U) != 0) {
                uVar4 = 0;
                if (arg2) {
                    uVar4 = field_192;
                }
                *(unsigned int*)(lVar3 + 84) = uVar4;
            }
            if (field_208 == '\0') {
                if ((arg1 & 9U) != 0) {
                    *(uint32_t*)(lVar3 + 72) = 0;
                }
                if ((arg1 & 17U) != 0) {
                    uVar4 = 0;
                    if (!arg2) {
                        uVar4 = field_192;
                    }
                    *(unsigned int*)(lVar3 + 80) = uVar4;
                }
                if ((arg1 & 33U) != 0) {
                    uVar4 = m_maximumSamples;
                    if (bVar1 != false) {
                        uVar4 = uVar4 * field_196;
                    }
                    uVar2 = GetReadOffsetSamples((unsigned int)this);
                    ClearSamples((((uint32_t)extraout_var << 8) | (uint8_t)uVar2), uVar4, (unsigned int)arg1_00);
                }
            }
            arg1_00 = arg1_00 + 1;
        }
    }

    // 0x100b8c8a0
    float AudioBuffer::ReadSample(unsigned int arg1, unsigned int arg2, bool arg3) const {
        AudioFormat* pAVar1;
        uint8_t uVar2;
        uint64_t extraout_var;
        long lVar3;
        float* pfVar4;
        unsigned int uVar5;

        float fVar6 = 0.0;
        if (arg1 < field_196) {
            uVar2 = GetNumberSamplesCanBeRead((unsigned int)this);
            if ((unsigned int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) < arg2) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                          "AudioBuffer.cpp",
                          212, "Audio buffer is over-running");
            }
            pAVar1 = field_8;
            if (pAVar1->field_20 == false) {
                lVar3 = field_16[(unsigned long)arg1];
                uVar5 = (arg2 * pAVar1->field_12 + *(int*)(lVar3 + 76)) % field_192;
            } else {
                lVar3 = field_16[0];
                uVar5 = field_196;
                uVar5 = ((arg2 * uVar5 + arg1) * pAVar1->field_12 + *(int*)(lVar3 + 76) * uVar5) % (uVar5 * field_192);
            }
            pfVar4 = (float*)(*((lVar3 + 24)))[(unsigned long)uVar5];
            pAVar1 = field_8;
            if ((pAVar1 == (AudioFormat*)AudioFormat::FLOAT) ||
                (pAVar1 == (AudioFormat*)AudioFormat::FLOAT_INTERLEAVED)) {
                fVar6 = *pfVar4;
            } else if ((pAVar1 == (AudioFormat*)AudioFormat::PCM8) ||
                       (pAVar1 == (AudioFormat*)AudioFormat::PCM8_INTERLEAVED)) {
                fVar6 = (float)*(uint8_t*)pfVar4;
                if (arg3) {
                    fVar6 = fVar6 * 0.007874016f;
                }
            } else if ((pAVar1 == (AudioFormat*)AudioFormat::UPCM8) ||
                       (pAVar1 == (AudioFormat*)AudioFormat::UPCM8_INTERLEAVED)) {
                fVar6 = (float)*(uint8_t*)pfVar4;
                if (arg3) {
                    fVar6 = fVar6 * 0.003921569f;
                }
            } else if ((pAVar1 == (AudioFormat*)AudioFormat::PCM16) ||
                       (pAVar1 == (AudioFormat*)AudioFormat::PCM16_INTERLEAVED)) {
                fVar6 = (float)(int)*(short*)pfVar4;
                if (arg3) {
                    fVar6 = fVar6 * 3.051851e-05;
                }
            } else {
                if ((pAVar1 != (AudioFormat*)AudioFormat::UPCM16) &&
                    (pAVar1 != (AudioFormat*)AudioFormat::UPCM16_INTERLEAVED)) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                                    "AudioBuffer.cpp",
                                    281, "Can\'t read samples from this buffer format");
                }
                fVar6 = (float)(int)*(short*)pfVar4;
                if (arg3) {
                    fVar6 = fVar6 * 1.5259022e-05;
                }
            }
        }
        return fVar6;
    }

    // 0x100b8cad0
    void AudioBuffer::WriteSample(float arg1, unsigned int arg2, unsigned int arg3, bool arg4) {
        AudioFormat* pAVar1;
        unsigned int uVar2;
        long lVar3;
        float* pfVar4;
        uint64_t uVar5;

        if ((field_208 == '\0') && (arg2 < field_196)) {
            uVar2 = GetNumberSamplesCanBeWritten(arg2);
            if (uVar2 <= arg3) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                    302, "Audio buffer is over-running");
            }
            pAVar1 = field_8;
            if (pAVar1->field_20 == false) {
                lVar3 = field_16[(unsigned long)arg2];
                uVar2 = (arg3 * pAVar1->field_12 + *(int*)(lVar3 + 72)) % field_192;
            } else {
                lVar3 = field_16[0];
                uVar2 = field_196;
                uVar2 = ((arg3 * uVar2 + arg2) * pAVar1->field_12 + *(int*)(lVar3 + 72) * uVar2) % (uVar2 * field_192);
            }
            pfVar4 = (float*)(*((lVar3 + 24)))[(unsigned long)uVar2];
            pAVar1 = field_8;
            if ((pAVar1 == (AudioFormat*)AudioFormat::FLOAT) ||
                (pAVar1 == (AudioFormat*)AudioFormat::FLOAT_INTERLEAVED)) {
                *pfVar4 = arg1 + *pfVar4;
            } else {
                if ((pAVar1 == (AudioFormat*)AudioFormat::PCM8) ||
                    (pAVar1 == (AudioFormat*)AudioFormat::PCM8_INTERLEAVED)) {
                    if (arg4) {
                        arg1 = arg1 * 127.0;
                    }
                } else {
                    if ((pAVar1 != (AudioFormat*)AudioFormat::UPCM8) &&
                        (pAVar1 != (AudioFormat*)AudioFormat::UPCM8_INTERLEAVED)) {
                        if ((pAVar1 == (AudioFormat*)AudioFormat::PCM16) ||
                            (pAVar1 == (AudioFormat*)AudioFormat::PCM16_INTERLEAVED)) {
                            if (arg4) {
                                arg1 = arg1 * 32767.0;
                            }
                        } else {
                            if ((pAVar1 != (AudioFormat*)AudioFormat::UPCM16) &&
                                (pAVar1 != (AudioFormat*)AudioFormat::UPCM16_INTERLEAVED)) {
                                uVar5 = pAVar1->HeapBeginPtr();
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/audio/AudioBuffer.cpp",
                                                356, "Can\'t read samples from this buffer format: %s", uVar5);
                            }
                            if (arg4) {
                                arg1 = arg1 * 32767.5 + 32767.5;
                            }
                        }
                        *(char*)pfVar4 = *(char*)pfVar4 + (char)(int)arg1;
                        *(char*)((long)pfVar4 + 1) = *(char*)((long)pfVar4 + 1) + (char)((unsigned int)(int)arg1 >> 8);
                        return;
                    }
                    if (arg4) {
                        arg1 = arg1 * 127.5 + 127.5;
                    }
                }
                *(char*)pfVar4 = *(char*)pfVar4 + (char)(int)arg1;
            }
        }
    }

    // 0x100b8cce0
    void AudioBuffer::SplitIntoChannelSpecificPan(unsigned int arg1, float arg2) const {
        float arg1_00 = arg2 * 0.7853982f + 0.7853982f;
        if ((arg1 & 1) == 0) {
            ::cos(arg1_00);
            return;
        }
        ::sin(arg1_00);
    }

    // 0x100b8cd30
    void AudioBuffer::WriteFromInterleavedPacket(unsigned char* arg1, unsigned int arg2, unsigned int arg3,
                                                 unsigned int arg4, unsigned int arg5) {
        uint32_t uVar1;
        unsigned int uVar4;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint32_t* puVar5;
        unsigned int arg1_00;
        unsigned int uVar6;
        unsigned long uVar7;

        int iVar3 = GetWriteOffsetSamples(0);
        uint8_t uVar2 = GetMaximumSamples();
        if ((unsigned int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) < iVar3 + arg4) {
            LogAssert("(GetWriteOffsetSamples(0) + nsamples) <= GetMaximumSamples()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                      372,
                      "Wrapping shouldn\'t be an issue here because this method is used for filling the AudioBuffer "
                      "for the first time, but it\'s showing signs of wrapping...");
        }
        if ((field_196 != arg5) || (field_8->field_20 != false)) {
            LogAssert("m_NumberOfChannels == channels && !m_DataFormat->m_interleaved",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                      375, nullptr);
        }
        if ((unsigned long)arg3 < (unsigned long)(field_196 * arg4) * 4) {
            LogAssert("m_NumberOfChannels * nsamples * sizeof(float) <= bufferSize",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                      379, nullptr);
        }
        if (field_196 != 0) {
            arg1_00 = 0;
            do {
                uVar2 = GetData((unsigned int)this);
                uVar4 = GetWriteOffsetSamples(arg1_00);
                if (arg4 != 0) {
                    uVar7 = (unsigned long)arg4;
                    uVar6 = arg1_00;
                    do {
                        uVar1 = *(uint32_t*)(arg1 + (unsigned long)uVar6 * 4 + (unsigned long)arg2);
                        puVar5 = (uint32_t*)(*((WrapArray<float>*)(((uint64_t)extraout_var_00 << 8) |
                                                                   (uint8_t)uVar2)))[(unsigned long)uVar4];
                        *puVar5 = uVar1;
                        uVar4 = uVar4 + 1;
                        uVar6 = uVar6 + arg5;
                        uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 < field_196);
        }
    }

    // 0x100b8cee0
    void AudioBuffer::WriteSamples(SampleReadable& sampleReadable, unsigned int arg2, unsigned int arg3,
                                   unsigned int& arg4, unsigned int& arg5, bool arg6, float arg7, float arg8) {
        uint8_t uVar1;
        uint64_t extraout_var;
        uint32_t in_register_00000034;
        uint64_t in_register_00000089;

        long* plVar2 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        arg5 = 0;
        *(uint32_t*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6) = 0;
        if (*(char*)&sampleReadable[26]._vptr == '\0') {
            uVar1 = (**(void (**)(...))(*plVar2 + 24))(plVar2);
            if ((arg3 < (unsigned int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1)) &&
                ((unsigned int)arg4 < *(unsigned int*)((long)&sampleReadable[24]._vptr + 4))) {
                GetNumberSamplesCanBeWritten((AudioBuffer*)sampleReadable, (unsigned int)arg4);
                (**(void (**)(...))(*plVar2 + 16))(arg2);
                (sampleReadable._vptr[2]._x7e___2)(sampleReadable);
            }
        }
    }

    // 0x100b8d100
    void AudioBuffer::ReSample(const WrapArray<float>& wrapArray1, WrapArray<float>& wrapArray2, unsigned int arg3,
                               unsigned int arg4, unsigned int arg5, unsigned int arg6, float arg7, float arg8,
                               float arg9, unsigned int arg10, float arg11) {
        float fVar1;
        float* pfVar2;
        unsigned long uVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        float fVar6;
        float fVar7;
        float fVar8;

        if (arg10 != 0) {
            uVar3 = 0;
            do {
                if (arg7 == arg8) {
                    uVar4 = (unsigned int)uVar3;
                LAB_100b8d178:
                    pfVar2 = &wrapArray1[(unsigned long)(uVar4 + arg3)];
                    fVar8 = *pfVar2;
                } else {
                    if (arg9 == 2.0) {
                        uVar4 = (unsigned int)(uVar3 >> 1) & 2147483647;
                        goto LAB_100b8d178;
                    }
                    fVar6 = ((float)(uVar3 & 4294967295) * arg8) / arg7;
                    fVar7 = (float)::floor(fVar6);
                    uVar4 = (int)(long)fVar7 + arg3;
                    if (arg4 <= uVar4) {
                        uVar4 = arg4 - 1;
                    }
                    fVar8 = (float)ceil(fVar6);
                    uVar5 = (int)(long)fVar8 + arg3;
                    if (arg4 <= uVar5) {
                        uVar5 = uVar4;
                    }
                    pfVar2 = &wrapArray1[(unsigned long)uVar4];
                    fVar8 = *pfVar2;
                    pfVar2 = &wrapArray1[(unsigned long)uVar5];
                    fVar1 = *pfVar2;
                    fVar6 = fVar6 - fVar7;
                    if ((fVar6 < 0.0) || (1.0 < fVar6)) {
                        (logger::default_logger())
                            ->Log(false, 2,
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                                  "AudioBuffer.cpp",
                                  509,
                                  "Invalid audio resampling ratio, it needs to be in the range of 0 -> 1, ratio used "
                                  "was %f",
                                  (double)fVar6);
                        fVar6 = 1.0;
                    }
                    fVar8 = (fVar1 - fVar8) * fVar6 + fVar8;
                }
                uVar4 = arg6;
                if (arg5 < arg6) {
                    uVar4 = 0;
                }
                pfVar2 = &wrapArray2[(unsigned long)(arg5 - uVar4)];
                *pfVar2 = fVar8 * arg11 + *pfVar2;
                uVar3 = uVar3 + 1;
                arg5 = arg5 + 1;
            } while (arg10 != uVar3);
        }
    }

    // 0x100b8d3a0
    void AudioBuffer::AudioDataContainer::Reset() {
        field_72 = 0;
        *(uint64_t*)&field_80 = 0;
        new (&field_24) shared_ptr();
        new (&field_40) shared_ptr();
        new (&field_56) shared_ptr();
        clear();
    }

} // namespace jag::hal::audio

// 0x100b8cd10
void cos(float arg1) {
    _cosf();
}

// 0x100b8cd20
void sin(float arg1) {
    _sinf();
}

// 0x100b8d380
void floor(float arg1) {
    _floorf();
}

// 0x100b8d390
void ceil(float arg1) {
    _ceilf();
}
