// libs/hal/audio/AudioBuffer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.audio

#include "AudioBuffer.h"

namespace jag::hal::audio {
    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    AudioBuffer::Format() const;

    // 0x100198190: the linker folded this into oldscape::PacketJ<Array<unsigned char, eastl::allocator> >::~PacketJ(), which has identical code
    AudioBuffer::AudioDataContainer::~AudioDataContainer();

    // 0x1001d9030: the linker folded this into oldscape::VBOMapper::~VBOMapper(), which has identical code
    AudioBuffer::AudioDataContainer::~AudioDataContainer();

    // 0x1004198f0: the linker folded this into game::GraphicsDefaults::GetNpcChatTimeout() const, which has identical code
    AudioBuffer::NumberOfChannels() const;

    // 0x100444920: the linker folded this into game::LocationContainer::GetMapSquareX() const, which has identical code
    AudioBuffer::GetMaximumSamples() const;

    // 0x1006211f0: the linker folded this into game::Camera::GetLookatMode() const, which has identical code
    AudioBuffer::SampleRate() const;

    // 0x100b8be30, 272 bytes, base-object constructor, placed by class name and debug map
    // AudioBuffer::AudioBuffer(int, int, int, AudioFormat const*, bool)
    void AudioBuffer::AudioBuffer(int param_1, int param_2, int param_3, AudioFormat* param_4, bool param_5) {
        uint uVar1;
        AudioDataContainer* this_00;
        uint uVar2;
        ulong uVar3;

        new (this) SampleReadable();
        field_0 = &PTR__AudioBuffer_100f26780;
        field_8 = param_4;
        new (&field_16) std::array<AudioBuffer::AudioDataContainer, 2ul>();
        uVar2 = param_1 * param_4->field_12;
        field_192 = uVar2;
        field_196 = param_2;
        field_200 = param_3;
        field_204 = param_3;
        field_208 = 0;
        field_212 = uVar2 >> (*(byte*)&field_8->field_16 & 31);
        if (field_8->field_20 == false) {
            param_2 = 1;
        }
        uVar3 = 0;
        while (true) {
            uVar1 = 1;
            if (field_8->field_20 == false) {
                uVar1 = field_196;
            }
            if (uVar1 <= uVar3)
                break;
            this_00 = (AudioDataContainer*)std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, uVar3);
            this_00->Resize(param_2 * uVar2);
            uVar3 = uVar3 + 1;
        }
    }

    // 0x100b8bf80, 224 bytes, placed by class name and debug map
    // AudioBuffer::AudioDataContainer::Resize(unsigned int)
    void AudioBuffer::AudioDataContainer::Resize(uint param_1) {
        char cVar1;
        undefined8 uVar2;
        uchar* puVar3;

        cVar1 = (&field_24)->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_DataByteView.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                      546, (char*)0);
        }
        Reset(this);
        field_80 = param_1;
        set_max_size((ulong)param_1, 5);
        uVar2 = Array<unsigned char, eastl::allocator>::operator[]((Array<unsigned char, eastl::allocator>*)this, 0);
        ___bzero(uVar2);
        puVar3 = (uchar*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, 0);
        new (&field_24, puVar3, (ulong)param_1) WrapArray<unsigned char>();
        if ((param_1 & 1) == 0) {
            puVar3 = (uchar*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, 0);
            new (&field_56, puVar3, (ulong)(param_1 >> 1)) WrapArray<unsigned char>();
            if ((param_1 & 3) == 0) {
                puVar3 = (uchar*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)this, 0);
                new (&field_40, puVar3, (ulong)(param_1 >> 2)) WrapArray<unsigned char>();
            }
        }
    }

    // 0x100b8c060, 16 bytes, complete-object constructor, placed by class name and debug map
    // AudioBuffer::AudioBuffer(int, int, int, AudioFormat const*, bool): jumps straight to the base-object constructor

    // 0x100b8c070, 176 bytes, base-object constructor, placed by class name and debug map
    // AudioBuffer::AudioBuffer(int, AudioFormat const*)
    void AudioBuffer::AudioBuffer(int param_1, AudioFormat* param_2) {
        AudioDataContainer* this_00;

        new (this) SampleReadable();
        field_0 = &PTR__AudioBuffer_100f26780;
        field_8 = param_2;
        new (&field_16) std::array<AudioBuffer::AudioDataContainer, 2ul>();
        field_192 = param_1;
        field_196 = 1;
        field_200 = 0;
        field_204 = 0;
        field_208 = 1;
        field_212 = (uint)param_1 >> (*(byte*)&field_8->field_16 & 31);
        this_00 = (AudioDataContainer*)std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
            (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, 0);
        this_00->Resize(param_1);
    }

    // 0x100b8c120, 16 bytes, complete-object constructor, placed by class name and debug map
    // AudioBuffer::AudioBuffer(int, AudioFormat const*): jumps straight to the base-object constructor

    // 0x100b8c130, 256 bytes, base-object constructor, placed by class name and debug map
    // AudioBuffer::AudioBuffer(unsigned char*, int, int, int, AudioFormat const*)
    void AudioBuffer::AudioBuffer(uchar* param_1, int param_2, int param_3, int param_4, AudioFormat* param_5) {
        long lVar1;
        int iVar2;
        uint uVar3;

        new (this) SampleReadable();
        field_0 = &PTR__AudioBuffer_100f26780;
        field_8 = param_5;
        new (&field_16) std::array<AudioBuffer::AudioDataContainer, 2ul>();
        uVar3 = param_2 * param_5->field_12;
        field_192 = uVar3;
        field_196 = param_3;
        field_200 = param_4;
        field_204 = param_4;
        field_208 = 0;
        field_212 = uVar3 >> (*(byte*)&field_8->field_16 & 31);
        iVar2 = 1;
        if (field_8->field_20 != false) {
            iVar2 = param_3;
        }
        uVar3 = iVar2 * uVar3;
        lVar1 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
            (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, 0);
        new ((lVar1 + 24)) WrapArray<unsigned char>(param_1, (ulong)uVar3);
        new ((lVar1 + 56)) WrapArray<unsigned char>(param_1, (ulong)(uVar3 >> 1));
        new ((lVar1 + 40)) WrapArray<unsigned char>(param_1, (ulong)(uVar3 >> 2));
    }

    // 0x100b8c230, 16 bytes, complete-object constructor, placed by class name and debug map
    // AudioBuffer::AudioBuffer(unsigned char*, int, int, int, AudioFormat const*): jumps straight to the base-object constructor

    // 0x100b8c240, 80 bytes, placed by class name and debug map
    // AudioBuffer::GetReadOffsetSamples(unsigned int) const
    int AudioBuffer::GetReadOffsetSamples(uint param_1) {
        AudioFormat* pAVar1;
        int iVar2;
        long lVar3;

        pAVar1 = field_8;
        if (pAVar1->field_20 == false) {
            lVar3 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, (ulong)param_1);
            iVar2 = *(int*)(lVar3 + 76) >> (*(byte*)&pAVar1->field_16 & 31);
        } else {
            lVar3 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, 0);
            iVar2 = (*(int*)(lVar3 + 76) >> (*(byte*)&pAVar1->field_16 & 31)) * field_196;
        }
        return iVar2;
    }

    // 0x100b8c2a0, 80 bytes, placed by class name and debug map
    // AudioBuffer::GetWriteOffsetSamples(unsigned int) const
    int AudioBuffer::GetWriteOffsetSamples(uint param_1) {
        AudioFormat* pAVar1;
        int iVar2;
        long lVar3;

        pAVar1 = field_8;
        if (pAVar1->field_20 == false) {
            lVar3 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, (ulong)param_1);
            iVar2 = *(int*)(lVar3 + 72) >> (*(byte*)&pAVar1->field_16 & 31);
        } else {
            lVar3 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, 0);
            iVar2 = (*(int*)(lVar3 + 72) >> (*(byte*)&pAVar1->field_16 & 31)) * field_196;
        }
        return iVar2;
    }

    // 0x100b8c2f0, 336 bytes, placed by class name and debug map
    // AudioBuffer::ClearSamples(unsigned int, unsigned int, unsigned int)
    void AudioBuffer::ClearSamples(uint param_1, uint param_2, uint param_3) {
        bool bVar1;
        AudioFormat* pAVar2;
        long lVar3;
        ulong uVar4;
        undefined8 uVar5;
        uint uVar6;
        Layout* this_00;
        uint local_38;

        pAVar2 = field_8;
        bVar1 = pAVar2->field_20;
        uVar6 = field_212;
        if (bVar1 != false) {
            uVar6 = uVar6 * field_196;
        }
        if (uVar6 < param_2 + param_1) {
            local_38 = field_212;
            if (bVar1 != false) {
                local_38 = local_38 * field_196;
            }
            local_38 = (param_2 + param_1) % local_38;
            param_2 = param_2 - local_38;
        } else {
            local_38 = 0;
        }
        uVar4 = 0;
        if (bVar1 == false) {
            uVar4 = (ulong)param_3;
        }
        lVar3 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
            (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, uVar4);
        uVar6 = pAVar2->field_12;
        this_00 = (Layout*)(lVar3 + 24);
        uVar4 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        if (uVar4 < (param_1 + param_2) * uVar6) {
            /* WARNING: Subroutine does not return */
            LogAssert("writeOffsetSamples * m_DataFormat->m_SampleSizeInBytes + nsamples * "
                      "m_DataFormat->m_SampleSizeInBytes <= dataContainer.m_DataByteView.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                      85, (char*)0);
        }
        uVar5 = WrapArray<unsigned char>::operator[]((WrapArray<unsigned char>*)this_00,
                                                     (ulong)(param_1 * field_8->field_12));
        ___bzero(uVar5);
        if (local_38 != 0) {
            uVar6 = field_8->field_12;
            uVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            if (uVar4 < uVar6 * local_38) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "nWrappedSamples * m_DataFormat->m_SampleSizeInBytes <= dataContainer.m_DataByteView.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                    91, (char*)0);
            }
            uVar5 = WrapArray<unsigned char>::operator[]((WrapArray<unsigned char>*)this_00, 0);
            ___bzero(uVar5, local_38 * field_8->field_12);
        }
    }

    // 0x100b8c440, 272 bytes, placed by class name and debug map
    // AudioBuffer::WriteByteData(unsigned char const*, unsigned long, unsigned long)
    void AudioBuffer::WriteByteData(uchar* param_1, ulong param_2, ulong param_3) {
        int iVar1;
        long lVar2;
        void* pvVar4;
        undefined8 uVar5;
        int iVar6;

        if (field_8->field_21 == false) {
            uVar5 = logger::default_logger();
            logger::Logger::Log(
                uVar5, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp", 100,
                "AUDIO ERROR: Trying to write binary data into an audio buffer with a non-encoded format. Use "
                "WriteSample or change the buffer type.");
        } else if (param_3 != 0) {
            lVar2 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, 0);
            if ((param_1 == (uchar*)0) || (iVar6 = (int)param_3, *(int*)(lVar2 + 80) < iVar6)) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "val && static_cast<int>(size) <= dataPoint.m_BytesCanBeWritten",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                    109, (char*)0);
            }
            if (param_1 != (uchar*)0) {
                iVar1 = *(int*)(lVar2 + 72);
                if (((lVar2 + 24))->HeapBeginPtr() < (long)iVar1 + param_3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("dataPoint.m_WriteOffsetBytes + size <= dataPoint.m_DataByteView.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                              "AudioBuffer.cpp",
                              112, (char*)0);
                }
                pvVar4 = (void*)WrapArray<unsigned char>::operator[]((WrapArray<unsigned char>*)(lVar2 + 24),
                                                                     (long)*(int*)(lVar2 + 72));
                _memcpy(pvVar4, param_1 + param_2, param_3);
            }
            *(int*)(lVar2 + 72) = *(int*)(lVar2 + 72) + iVar6;
            *(int*)(lVar2 + 80) = *(int*)(lVar2 + 80) - iVar6;
        }
    }

    // 0x100b8c550, 304 bytes, placed by class name and debug map
    // AudioBuffer::ConsumedSamples(unsigned int, bool)
    void AudioBuffer::ConsumedSamples(uint param_1, bool param_2) {
        int* piVar1;
        bool bVar2;
        uint uVar3;
        long lVar4;
        int iVar5;
        ulong uVar6;
        uint uVar7;

        uVar6 = 0;
        while (true) {
            bVar2 = field_8->field_20;
            uVar7 = 1;
            if (bVar2 == false) {
                uVar7 = field_196;
            }
            if (uVar7 <= uVar6) {
                return;
            }
            if (param_2) {
                uVar7 = param_1;
                if (bVar2 != false) {
                    uVar7 = field_196 * param_1;
                }
                uVar3 = (*(code*)field_0[9])(this, uVar6 & 4294967295);
                ClearSamples(this, uVar3, uVar7, (uint)uVar6);
            }
            iVar5 = field_8->field_12 * param_1;
            lVar4 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, uVar6);
            uVar7 = *(int*)(lVar4 + 76) + iVar5;
            *(uint*)(lVar4 + 76) = uVar7;
            *(uint*)(lVar4 + 76) = uVar7 % field_192;
            *(int*)(lVar4 + 80) = *(int*)(lVar4 + 80) + iVar5;
            piVar1 = (int*)(lVar4 + 84);
            *piVar1 = *piVar1 - iVar5;
            if (*piVar1 < 0)
                break;
            if ((int)field_192 < *(int*)(lVar4 + 80)) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "dataPoint.m_BytesCanBeWritten <= static_cast<int>(m_DataLengthBytes)",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                    137, "Read too many bytes");
            }
            uVar6 = uVar6 + 1;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("dataPoint.m_BytesCanBeRead >= 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                  136, "Read too many bytes");
    }

    // 0x100b8c680, 272 bytes, placed by class name and debug map
    // AudioBuffer::WroteSamples(unsigned int)
    void AudioBuffer::WroteSamples(uint param_1) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        long lVar4;
        int iVar5;
        ulong uVar6;

        if (field_208 == '\0') {
            iVar5 = param_1 * field_8->field_12;
            uVar6 = 0;
            while (true) {
                uVar1 = 1;
                if (field_8->field_20 == false) {
                    uVar1 = field_196;
                }
                if (uVar1 <= uVar6)
                    break;
                lVar4 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                    (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, uVar6);
                uVar2 = *(int*)(lVar4 + 72) + iVar5;
                *(uint*)(lVar4 + 72) = uVar2;
                uVar1 = field_192;
                *(uint*)(lVar4 + 72) = uVar2 % uVar1;
                iVar3 = *(int*)(lVar4 + 84) + iVar5;
                *(int*)(lVar4 + 84) = iVar3;
                *(int*)(lVar4 + 80) = *(int*)(lVar4 + 80) - iVar5;
                if ((int)uVar1 < iVar3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("dataPoint.m_BytesCanBeRead <= static_cast<int>(m_DataLengthBytes)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                              "AudioBuffer.cpp",
                              157, "Wrote too many bytes");
                }
                if (*(int*)(lVar4 + 80) < 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("dataPoint.m_BytesCanBeWritten >= 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                              "AudioBuffer.cpp",
                              158, "Wrote too many bytes");
                }
                uVar6 = uVar6 + 1;
            }
        }
    }

    // 0x100b8c790, 272 bytes, placed by class name and debug map
    // AudioBuffer::Reset(int, bool)
    void AudioBuffer::Reset(int param_1, bool param_2) {
        bool bVar1;
        uint uVar2;
        long lVar3;
        ulong uVar4;
        uint uVar5;

        uVar4 = 0;
        while (true) {
            bVar1 = field_8->field_20;
            uVar5 = 1;
            if (bVar1 == false) {
                uVar5 = field_196;
            }
            if (uVar5 <= uVar4)
                break;
            lVar3 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, uVar4);
            if ((param_1 & 3U) != 0) {
                *(undefined4*)(lVar3 + 76) = 0;
            }
            if ((param_1 & 5U) != 0) {
                uVar5 = 0;
                if (param_2) {
                    uVar5 = field_192;
                }
                *(uint*)(lVar3 + 84) = uVar5;
            }
            if (field_208 == '\0') {
                if ((param_1 & 9U) != 0) {
                    *(undefined4*)(lVar3 + 72) = 0;
                }
                if ((param_1 & 17U) != 0) {
                    uVar5 = 0;
                    if (!param_2) {
                        uVar5 = field_192;
                    }
                    *(uint*)(lVar3 + 80) = uVar5;
                }
                if ((param_1 & 33U) != 0) {
                    uVar5 = field_212;
                    if (bVar1 != false) {
                        uVar5 = uVar5 * field_196;
                    }
                    uVar2 = (*(code*)field_0[9])(this, uVar4 & 4294967295);
                    ClearSamples(this, uVar2, uVar5, (uint)uVar4);
                }
            }
            uVar4 = uVar4 + 1;
        }
    }

    // 0x100b8c8a0, 448 bytes, placed by class name and debug map
    // AudioBuffer::ReadSample(unsigned int, unsigned int, bool) const
    float AudioBuffer::ReadSample(uint param_1, uint param_2, bool param_3) {
        AudioFormat* pAVar1;
        uint uVar2;
        undefined8 uVar3;
        long lVar4;
        float* pfVar5;
        float fVar6;

        fVar6 = 0.0;
        if (param_1 < field_196) {
            uVar2 = (*(code*)field_0[2])(0);
            if (uVar2 < param_2) {
                uVar3 = logger::default_logger();
                logger::Logger::Log(
                    uVar3, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                    212, "Audio buffer is over-running");
            }
            pAVar1 = field_8;
            if (pAVar1->field_20 == false) {
                lVar4 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                    (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, (ulong)param_1);
                uVar2 = (param_2 * pAVar1->field_12 + *(int*)(lVar4 + 76)) % field_192;
            } else {
                lVar4 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                    (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, 0);
                uVar2 = field_196;
                uVar2 = ((param_2 * uVar2 + param_1) * pAVar1->field_12 + *(int*)(lVar4 + 76) * uVar2) %
                        (uVar2 * field_192);
            }
            pfVar5 =
                (float*)WrapArray<unsigned char>::operator[]((WrapArray<unsigned char>*)(lVar4 + 24), (ulong)uVar2);
            pAVar1 = field_8;
            if ((pAVar1 == (AudioFormat*)AudioFormat::FLOAT) ||
                (pAVar1 == (AudioFormat*)AudioFormat::FLOAT_INTERLEAVED)) {
                fVar6 = *pfVar5;
            } else if ((pAVar1 == (AudioFormat*)AudioFormat::PCM8) ||
                       (pAVar1 == (AudioFormat*)AudioFormat::PCM8_INTERLEAVED)) {
                fVar6 = (float)*(byte*)pfVar5;
                if (param_3) {
                    fVar6 = fVar6 * 0.007874016;
                }
            } else if ((pAVar1 == (AudioFormat*)AudioFormat::UPCM8) ||
                       (pAVar1 == (AudioFormat*)AudioFormat::UPCM8_INTERLEAVED)) {
                fVar6 = (float)*(byte*)pfVar5;
                if (param_3) {
                    fVar6 = fVar6 * 0.003921569;
                }
            } else if ((pAVar1 == (AudioFormat*)AudioFormat::PCM16) ||
                       (pAVar1 == (AudioFormat*)AudioFormat::PCM16_INTERLEAVED)) {
                fVar6 = (float)(int)*(short*)pfVar5;
                if (param_3) {
                    fVar6 = fVar6 * 3.051851e-05;
                }
            } else {
                if ((pAVar1 != (AudioFormat*)AudioFormat::UPCM16) &&
                    (pAVar1 != (AudioFormat*)AudioFormat::UPCM16_INTERLEAVED)) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                                    "AudioBuffer.cpp",
                                    281, "Can\'t read samples from this buffer format");
                }
                fVar6 = (float)(int)*(short*)pfVar5;
                if (param_3) {
                    fVar6 = fVar6 * 1.5259022e-05;
                }
            }
        }
        return fVar6;
    }

    // 0x100b8cad0, 480 bytes, placed by class name and debug map
    // AudioBuffer::WriteSample(float, unsigned int, unsigned int, bool)
    void AudioBuffer::WriteSample(float param_1, uint param_2, uint param_3, bool param_4) {
        AudioFormat* pAVar1;
        uint uVar2;
        long lVar3;
        float* pfVar4;
        undefined8 uVar5;

        if ((field_208 == '\0') && (param_2 < field_196)) {
            uVar2 = GetNumberSamplesCanBeWritten(this, param_2);
            if (uVar2 <= param_3) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                    302, "Audio buffer is over-running");
            }
            pAVar1 = field_8;
            if (pAVar1->field_20 == false) {
                lVar3 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                    (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, (ulong)param_2);
                uVar2 = (param_3 * pAVar1->field_12 + *(int*)(lVar3 + 72)) % field_192;
            } else {
                lVar3 = std::array<AudioBuffer::AudioDataContainer, 2ul>::operator[](
                    (array<AudioBuffer::AudioDataContainer, 2ul>*)&field_16, 0);
                uVar2 = field_196;
                uVar2 = ((param_3 * uVar2 + param_2) * pAVar1->field_12 + *(int*)(lVar3 + 72) * uVar2) %
                        (uVar2 * field_192);
            }
            pfVar4 =
                (float*)WrapArray<unsigned char>::operator[]((WrapArray<unsigned char>*)(lVar3 + 24), (ulong)uVar2);
            pAVar1 = field_8;
            if ((pAVar1 == (AudioFormat*)AudioFormat::FLOAT) ||
                (pAVar1 == (AudioFormat*)AudioFormat::FLOAT_INTERLEAVED)) {
                *pfVar4 = param_1 + *pfVar4;
            } else {
                if ((pAVar1 == (AudioFormat*)AudioFormat::PCM8) ||
                    (pAVar1 == (AudioFormat*)AudioFormat::PCM8_INTERLEAVED)) {
                    if (param_4) {
                        param_1 = param_1 * 127.0;
                    }
                } else {
                    if ((pAVar1 != (AudioFormat*)AudioFormat::UPCM8) &&
                        (pAVar1 != (AudioFormat*)AudioFormat::UPCM8_INTERLEAVED)) {
                        if ((pAVar1 == (AudioFormat*)AudioFormat::PCM16) ||
                            (pAVar1 == (AudioFormat*)AudioFormat::PCM16_INTERLEAVED)) {
                            if (param_4) {
                                param_1 = param_1 * 32767.0;
                            }
                        } else {
                            if ((pAVar1 != (AudioFormat*)AudioFormat::UPCM16) &&
                                (pAVar1 != (AudioFormat*)AudioFormat::UPCM16_INTERLEAVED)) {
                                uVar5 = pAVar1->HeapBeginPtr();
                                /* WARNING: Subroutine does not return */
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/audio/AudioBuffer.cpp",
                                                356, "Can\'t read samples from this buffer format: %s", uVar5);
                            }
                            if (param_4) {
                                param_1 = param_1 * 32767.5 + 32767.5;
                            }
                        }
                        *(char*)pfVar4 = *(char*)pfVar4 + (char)(int)param_1;
                        *(char*)((long)pfVar4 + 1) = *(char*)((long)pfVar4 + 1) + (char)((uint)(int)param_1 >> 8);
                        return;
                    }
                    if (param_4) {
                        param_1 = param_1 * 127.5 + 127.5;
                    }
                }
                *(char*)pfVar4 = *(char*)pfVar4 + (char)(int)param_1;
            }
        }
    }

    // 0x100b8cce0, 48 bytes, placed by class name and debug map
    // AudioBuffer::SplitIntoChannelSpecificPan(unsigned int, float) const
    void AudioBuffer::SplitIntoChannelSpecificPan(uint param_1, float param_2) {
        float fVar1;

        fVar1 = param_2 * 0.7853982 + 0.7853982;
        if ((param_1 & 1) == 0) {
            ::cos(fVar1);
            return;
        }
        ::sin(fVar1);
    }

    // 0x100b8cd30, 432 bytes, placed by class name and debug map
    // AudioBuffer::WriteFromInterleavedPacket(unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int)
    void AudioBuffer::WriteFromInterleavedPacket(uchar* param_1, uint param_2, uint param_3, uint param_4,
                                                 uint param_5) {
        undefined4 uVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        WrapArray<float>* this_00;
        undefined4* puVar5;
        uint uVar6;
        ulong uVar7;

        iVar2 = GetWriteOffsetSamples(this, 0);
        uVar3 = (*(code*)field_0[10])(this);
        if (uVar3 < iVar2 + param_4) {
            /* WARNING: Subroutine does not return */
            LogAssert("(GetWriteOffsetSamples(0) + nsamples) <= GetMaximumSamples()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                      372,
                      "Wrapping shouldn\'t be an issue here because this method is used for filling the AudioBuffer "
                      "for the first time, but it\'s showing signs of wrapping...");
        }
        if ((field_196 != param_5) || (field_8->field_20 != false)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_NumberOfChannels == channels && !m_DataFormat->m_interleaved",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                      375, (char*)0);
        }
        if ((ulong)param_3 < (ulong)(field_196 * param_4) * 4) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_NumberOfChannels * nsamples * sizeof(float) <= bufferSize",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioBuffer.cpp",
                      379, (char*)0);
        }
        if (field_196 != 0) {
            uVar3 = 0;
            do {
                this_00 = (WrapArray<float>*)(*(code*)field_0[8])(this, uVar3);
                uVar4 = GetWriteOffsetSamples(this, uVar3);
                if (param_4 != 0) {
                    uVar7 = (ulong)param_4;
                    uVar6 = uVar3;
                    do {
                        uVar1 = *(undefined4*)(param_1 + (ulong)uVar6 * 4 + (ulong)param_2);
                        puVar5 = (undefined4*)WrapArray<float>::operator[](this_00, (ulong)uVar4);
                        *puVar5 = uVar1;
                        uVar4 = uVar4 + 1;
                        uVar6 = uVar6 + param_5;
                        uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < field_196);
        }
    }

    // 0x100b8cee0, 544 bytes, placed by class name and debug map
    // AudioBuffer::WriteSamples(SampleReadable&, unsigned int, unsigned int, unsigned int&, unsigned int&, bool, float, float)
    void AudioBuffer::WriteSamples(SampleReadable* param_1, uint param_2, uint param_3, uint* param_4, uint* param_5,
                                   bool param_6, float param_7, float param_8) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;
        WrapArray* pWVar6;
        WrapArray* pWVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;

        *param_4 = 0;
        *param_5 = 0;
        if (((field_208 == '\0') && (uVar1 = (**(code**)(param_1->field_0 + 24))(param_1), param_2 < uVar1)) &&
            (param_3 < field_196)) {
            uVar1 = GetNumberSamplesCanBeWritten(this, param_3);
            uVar2 = (**(code**)(param_1->field_0 + 16))(param_1, param_2);
            uVar3 = (*(code*)field_0[5])(this);
            fVar8 = (float)uVar3;
            uVar3 = (**(code**)(param_1->field_0 + 40))();
            fVar10 = (float)uVar3;
            if (fVar8 == fVar10) {
                uVar3 = uVar1;
                if (uVar2 < uVar1) {
                    uVar3 = uVar2;
                }
                fVar11 = 1.0;
            } else {
                fVar11 = fVar8 / fVar10;
                uVar3 = (uint)(long)((float)uVar2 * fVar11);
                if ((int)uVar1 <= (int)uVar3) {
                    uVar3 = uVar1;
                }
            }
            if ((uVar2 != 0) && (uVar1 != 0)) {
                if ((uVar3 == 0) && (fVar11 != 1.0)) {
                    *param_5 = 0;
                } else {
                    if (!param_6) {
                        fVar9 = (float)SplitIntoChannelSpecificPan((AudioBuffer*)param_1, param_3, param_8);
                        uVar1 = GetWriteOffsetSamples(this, param_3);
                        pWVar6 = (WrapArray*)(*(code*)field_0[8])(this, param_3);
                        uVar2 = (*(code*)field_0[10])(this);
                        pWVar7 = (WrapArray*)(**(code**)(param_1->field_0 + 64))(param_1, param_2);
                        uVar4 = (**(code**)(param_1->field_0 + 72))(param_1, param_2);
                        uVar5 = (**(code**)(param_1->field_0 + 80))();
                        ReSample((AudioBuffer*)param_1, pWVar7, pWVar6, uVar4, uVar5, uVar1, uVar2, fVar8, fVar10,
                                 fVar11, uVar3, param_7 * fVar9);
                    }
                    *param_5 = uVar3;
                    uVar2 = math::RoundFloatToInt(((float)(int)uVar3 * fVar10) / fVar8);
                }
                *param_4 = uVar2;
            }
        }
    }

    // 0x100b8d100, 512 bytes, placed by class name and debug map
    // AudioBuffer::ReSample(WrapArray<float> const&, WrapArray<float>&, unsigned int, unsigned int, unsigned int, unsigned int, float, float, float, unsigned int, float)
    void AudioBuffer::ReSample(WrapArray* param_1, WrapArray* param_2, uint param_3, uint param_4, uint param_5,
                               uint param_6, float param_7, float param_8, float param_9, uint param_10,
                               float param_11) {
        float fVar1;
        float* pfVar2;
        undefined8 uVar3;
        ulong uVar4;
        uint uVar5;
        uint uVar6;
        float fVar7;
        float fVar8;
        float fVar9;

        if (param_10 != 0) {
            uVar4 = 0;
            do {
                if (param_7 == param_8) {
                    uVar5 = (uint)uVar4;
                LAB_100b8d178:
                    pfVar2 = (float*)WrapArray<float>::operator[]((WrapArray<float>*)param_1, (ulong)(uVar5 + param_3));
                    fVar9 = *pfVar2;
                } else {
                    if (param_9 == 2.0) {
                        uVar5 = (uint)(uVar4 >> 1) & 2147483647;
                        goto LAB_100b8d178;
                    }
                    fVar7 = ((float)(uVar4 & 4294967295) * param_8) / param_7;
                    fVar8 = (float)floor(fVar7);
                    uVar5 = (int)(long)fVar8 + param_3;
                    if (param_4 <= uVar5) {
                        uVar5 = param_4 - 1;
                    }
                    fVar9 = (float)ceil(fVar7);
                    uVar6 = (int)(long)fVar9 + param_3;
                    if (param_4 <= uVar6) {
                        uVar6 = uVar5;
                    }
                    pfVar2 = (float*)WrapArray<float>::operator[]((WrapArray<float>*)param_1, (ulong)uVar5);
                    fVar9 = *pfVar2;
                    pfVar2 = (float*)WrapArray<float>::operator[]((WrapArray<float>*)param_1, (ulong)uVar6);
                    fVar1 = *pfVar2;
                    fVar7 = fVar7 - fVar8;
                    if ((fVar7 < 0.0) || (1.0 < fVar7)) {
                        uVar3 = logger::default_logger();
                        logger::Logger::Log(
                            (double)fVar7, uVar3, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                            "AudioBuffer.cpp",
                            509,
                            "Invalid audio resampling ratio, it needs to be in the range of 0 -> 1, ratio used was %f");
                        fVar7 = 1.0;
                    }
                    fVar9 = (fVar1 - fVar9) * fVar7 + fVar9;
                }
                uVar5 = param_6;
                if (param_5 < param_6) {
                    uVar5 = 0;
                }
                pfVar2 = (float*)WrapArray<float>::operator[]((WrapArray<float>*)param_2, (ulong)(param_5 - uVar5));
                *pfVar2 = fVar9 * param_11 + *pfVar2;
                uVar4 = uVar4 + 1;
                param_5 = param_5 + 1;
            } while (param_10 != uVar4);
        }
    }

    // 0x100b8d3a0, 64 bytes, placed by class name and debug map
    // AudioBuffer::AudioDataContainer::Reset()
    void AudioBuffer::AudioDataContainer::Reset() {
        field_72 = 0;
        *(undefined8*)&field_80 = 0;
        new (&field_24) shared_ptr<oldscape::DBTableIndex>();
        new (&field_40) shared_ptr<oldscape::DBTableIndex>();
        new (&field_56) shared_ptr<oldscape::DBTableIndex>();
        clear();
    }

} // namespace jag::hal::audio

// 0x100b8cd10, 16 bytes, placed by neighbouring functions
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x100b8cd20, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x100b8d380, 16 bytes, placed by neighbouring functions
// floor(float)
void floor(float param_1) {
    _floorf();
}

// 0x100b8d390, 16 bytes, placed by neighbouring functions
// ceil(float)
void ceil(float param_1) {
    _ceilf();
}
