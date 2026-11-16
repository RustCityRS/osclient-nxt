// libs/hal/audio/AudioBuss.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.audio

#include "AudioBuss.h"

namespace jag::hal::audio {
    // 0x103bc2618, set at startup by ___cxx_global_var_init
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> AudioBuss::NullAudioBuss =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100061e30: AudioBuss::GetBussID() const has the same machine code as render::RenderStats::GetTriangleCount() const

    // 0x100b8bc90
    void AudioBuss::GetTotalGainOfChain() const {
        AudioBuss* this_00;
        float fVar2;

        float local_14 = field_36;
        if (field_40->operator_cast_to_bool() == '\0') {
            fVar2 = 1.0;
        } else {
            this_00 = (AudioBuss*)(*field_40).operator->();
            fVar2 = (float)GetTotalGainOfChain(this_00);
        }
        local_14 = fVar2 * local_14;
        math::Clamp<float>(local_14, 0.0, 1.0);
    }

    // 0x100b8bdc0
    bool AudioBuss::IsMixBussInChain(BussType bussType) const {
        uint64_t uVar2 = 1;
        if (m_bussID != bussType) {
            if (field_40->operator_cast_to_bool() == '\0') {
                uVar2 = 0;
            } else {
                uVar2 = IsMixBussInChain((AudioBuss*)(*field_40).operator->(), bussType);
            }
        }
        return uVar2;
    }

    // 0x100b8d580
    AudioBuss::AudioBuss(BussType bussType, unsigned int arg2, unsigned int arg3, float arg4, unsigned int arg5,
                         bool arg6) {
        uint32_t in_register_00000034;
        unique_ptr<AudioBuffer, std::default_delete<AudioBuffer> _> local_48;
        bool local_31;

        field_8 = (&BussTypeStrings)[bussType];
        *(unsigned int*)&field_16 = arg2;
        field_24.unique_ptr<true, void>((void*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)bussType));
        field_32 = 0;
        field_36 = 1.0;
        void* arg1 = nullptr;
        new (field_40) shared_ptr();
        m_priority = arg4;
        m_bussID = bussType;
        new (&field_64) std::function<float()>(arg1);
        if (arg6) {
            local_31 = true;
            std::make_unique<AudioBuffer, unsigned int&, unsigned int&, unsigned int&, AudioFormat const*&, bool>(
                local_48, arg5, arg3, field_16, local_31);
            field_24 = local_48;
        }
    }

    // 0x100b8d760
    AudioBuss::~AudioBuss() {
        field_64.~function();
        field_40->~shared_ptr();
        field_24.~unique_ptr();
    }

    // 0x100b8d7d0
    void AudioBuss::ClearSamples() {
        if ((&field_24)->operator_cast_to_bool() != '\0') {
            ((AudioBuffer*)field_24.operator->())->Reset(1, false);
        }
    }

    // 0x100b8d840
    void AudioBuss::AddRouting(const shared_ptr<AudioBuss>& audioBuss) {
        *field_40 = audioBuss;
    }

    // 0x100b8d8a0
    void AudioBuss::PreMix() {
        field_32 = 0;
    }

    // 0x100b8d8b0
    void AudioBuss::PostMix() {
        ((AudioBuffer*)field_24.operator->())->WroteSamples(field_32);
    }

    // 0x100b8d8e0
    unsigned int AudioBuss::MixFromBuffer(AudioBuffer* audioBuffer, bool arg2, float arg3) {
        float fVar1;
        uint8_t uVar3;
        uint8_t uVar4;
        unsigned int uVar7;
        uint64_t extraout_var;
        long* plVar9;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;
        WrapArray<float>* this_00;
        uint64_t extraout_var_03;
        float* pfVar10;
        uint64_t in_register_00000011;
        unsigned int arg1;
        unsigned long uVar11;
        unsigned int uVar12;

        uint8_t uVar2 = audioBuffer->GetNumberSamplesCanBeRead((unsigned int)audioBuffer);
        uint8_t* this_01 = &field_24;
        AudioBuffer* pAVar8 = (AudioBuffer*)(*this_01).operator->();
        unsigned int uVar5 = pAVar8->GetNumberSamplesCanBeWritten(0);
        uVar5 = eastl::min<unsigned int>((unsigned int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2), uVar5);
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            plVar9 = (long*)(*this_01).operator->();
            if ((**(void (**)(...))(*plVar9 + 24))(plVar9) != 0) {
                arg1 = 0;
                do {
                    uVar2 = audioBuffer->GetData((unsigned int)audioBuffer);
                    uVar3 = audioBuffer->GetReadOffsetSamples((unsigned int)audioBuffer);
                    uVar11 = (((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar3) & 4294967295;
                    uVar3 = audioBuffer->GetMaximumSamples();
                    plVar9 = (long*)(*this_01).operator->();
                    this_00 = (WrapArray<float>*)(**(void (**)(...))(*plVar9 + 64))(plVar9, arg1);
                    pAVar8 = (AudioBuffer*)(*this_01).operator->();
                    uVar7 = pAVar8->GetWriteOffsetSamples(arg1);
                    uVar4 = pAVar8->GetMaximumSamples();
                    if (uVar5 != 0) {
                        uVar12 = uVar5;
                        do {
                            pfVar10 =
                                (float*)(*((WrapArray<float>*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2)))
                                    [uVar11 % ((((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar3) & 4294967295)];
                            fVar1 = *pfVar10;
                            pfVar10 =
                                (float*)(*this_00)[(unsigned long)uVar7 %
                                                   ((((uint64_t)extraout_var_03 << 8) | (uint8_t)uVar4) & 4294967295)];
                            *pfVar10 = fVar1 * arg3 + *pfVar10;
                            uVar7 = uVar7 + 1;
                            uVar11 = (unsigned long)((int)uVar11 + 1);
                            uVar12 = uVar12 - 1;
                        } while (uVar12 != 0);
                    }
                    arg1 = arg1 + 1;
                    plVar9 = (long*)(*this_01).operator->();
                    uVar7 = (**(void (**)(...))(*plVar9 + 24))(plVar9);
                } while (arg1 < uVar7);
            }
        }
        if (field_32 < uVar5) {
            field_32 = uVar5;
        }
        return uVar5;
    }

    // 0x100b8da90
    unsigned int AudioBuss::MixFromBufferWithResample(const shared_ptr<SampleReadable>& sampleReadable, bool arg2,
                                                      float arg3, float arg4) {
        bool cVar1;
        unsigned int uVar3;
        shared_ptr<SampleReadable>* sampleReadable_00;
        unsigned int uVar5;

        unsigned int local_34 = 0;
        uint8_t* this_00 = &field_24;
        long* plVar4 = (long*)(*this_00).operator->();
        if ((**(void (**)(...))(*plVar4 + 24))(plVar4) != 0) {
            uVar5 = 0;
            do {
                plVar4 = (long*)sampleReadable.operator->();
                cVar1 = (**(void (**)(...))(*plVar4 + 32))(plVar4, uVar5);
                uVar3 = 0;
                if (cVar1) {
                    uVar3 = uVar5;
                }
                sampleReadable_00 = (shared_ptr<SampleReadable>*)(*this_00).operator->();
                AudioBuffer::WriteSamples(*sampleReadable_00, (unsigned int)sampleReadable, uVar3,
                                          *((unsigned int*)(unsigned long)uVar5), 0, (uint8_t)(&local_34), arg3, arg4);
                uVar5 = uVar5 + 1;
                plVar4 = (long*)(*this_00).operator->();
                uVar3 = (**(void (**)(...))(*plVar4 + 24))(plVar4);
            } while (uVar5 < uVar3);
        }
        if (field_32 < local_34) {
            field_32 = local_34;
        }
        return 0;
    }

    // 0x100b8dc40
    void AudioBuss::MixToBuffer(AudioBuffer* audioBuffer) {
        uint8_t uVar1;
        unsigned int uVar2;
        unsigned int arg1;
        int iVar3;
        uint32_t uVar4;
        unsigned int uVar5;
        long* plVar6;
        uint8_t* puVar7;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        float* pfVar8;
        uint16_t* puVar9;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;
        WrapArray<float>* this_00;
        uint64_t extraout_var_03;
        uint64_t extraout_var_04;
        WrapArray<float>* pWVar10;
        uint64_t extraout_var_05;
        uint32_t* puVar11;
        uint64_t extraout_var_06;
        unsigned int uVar12;
        WrapArray<short>* pWVar13;
        unsigned long uVar14;
        unsigned int uVar15;
        uint8_t* this_02;
        unsigned long uVar16;
        float arg2;
        int local_68[2];
        unsigned long local_60;
        unsigned int local_54;
        WrapArray<short>* local_50;
        WrapArray<float>* local_48;
        int local_3c;
        WrapArray<float>* local_38;

        if (audioBuffer != nullptr) {
            audioBuffer->Reset(30, false);
            this_02 = &field_24;
            plVar6 = (long*)(*this_02).operator->();
            uVar2 = (**(void (**)(...))(*plVar6 + 16))(plVar6);
            arg1 = audioBuffer->GetNumberSamplesCanBeWritten(0);
            if (uVar2 < arg1) {
                audioBuffer->Reset(32, false);
                arg1 = uVar2;
            }
            if (uVar2 != 0) {
                puVar7 = (uint8_t*)audioBuffer->end();
                if (puVar7 == AudioFormat::PCM16_INTERLEAVED) {
                    uVar1 = audioBuffer->NumberOfChannels();
                    local_54 = (unsigned int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
                    if (local_54 != 0) {
                        uVar2 = 0;
                        do {
                            iVar3 = audioBuffer->GetWriteOffsetSamples(uVar2);
                            uVar1 = audioBuffer->GetMaximumSamples();
                            if ((unsigned int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1) < iVar3 + arg1) {
                                LogAssert("pAudioBuffer->GetWriteOffsetSamples(chn) + consumed <= "
                                          "pAudioBuffer->GetMaximumSamples()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                          "audio/AudioBuss.cpp",
                                          155, "pAudioBuffer is showing signs of wrapping, despite having been reset.");
                            }
                            plVar6 = (long*)(*this_02).operator->();
                            uVar12 = (**(void (**)(...))(*plVar6 + 72))(plVar6, uVar2);
                            plVar6 = (long*)(*this_02).operator->();
                            uVar4 = (**(void (**)(...))(*plVar6 + 80))(plVar6);
                            local_48 = (WrapArray<float>*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar4);
                            plVar6 = (long*)(*this_02).operator->();
                            pWVar10 = (WrapArray<float>*)(**(void (**)(...))(*plVar6 + 64))(plVar6, uVar2);
                            local_38 = (WrapArray<float>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar2);
                            local_50 = audioBuffer->GetDataShort(uVar2);
                            uVar2 = 0;
                            if ((unsigned int)local_48 < uVar12 + arg1) {
                                uVar2 = (uVar12 + arg1) % (unsigned int)local_48;
                            }
                            uVar15 = arg1 - uVar2;
                            local_48 = pWVar10;
                            if (uVar15 != 0) {
                                uVar16 = (unsigned long)uVar15;
                                uVar5 = (unsigned int)local_38._0_4_;
                                do {
                                    pfVar8 = (float*)(*local_48)[(unsigned long)uVar12];
                                    local_60 = (((uint64_t)local_60._4_4_ << 32) | (uint32_t)(*pfVar8));
                                    AudioRenderer::RecordDebugValue((int)local_38._0_4_, *pfVar8);
                                    local_3c = (int)((float)local_60 * 32767.0);
                                    local_68[0] = -32768;
                                    local_68[1] = 32767;
                                    iVar3 = math::Clamp<int>(local_3c, *local_68, *(local_68 + 1));
                                    local_3c = iVar3;
                                    puVar9 = (uint16_t*)(*local_50)[(unsigned long)uVar5];
                                    *puVar9 = (short)iVar3;
                                    uVar5 = uVar5 + local_54;
                                    uVar12 = uVar12 + 1;
                                    uVar16 = uVar16 - 1;
                                } while (uVar16 != 0);
                            }
                            uVar12 = local_54;
                            if (uVar2 != 0) {
                                uVar15 = uVar15 * local_54 + (int)local_38._0_4_;
                                uVar16 = 0;
                                iVar3 = (int)local_38._0_4_;
                                do {
                                    pfVar8 = (float*)(*local_48)[uVar16];
                                    local_60 = (((uint64_t)local_60._4_4_ << 32) | (uint32_t)(*pfVar8));
                                    AudioRenderer::RecordDebugValue(iVar3, *pfVar8);
                                    local_3c = (int)((float)local_60 * 32767.0);
                                    local_68[0] = -32768;
                                    local_68[1] = 32767;
                                    iVar3 = math::Clamp<int>(local_3c, *local_68, *(local_68 + 1));
                                    local_3c = iVar3;
                                    puVar9 = (uint16_t*)(*local_50)[(unsigned long)uVar15];
                                    *puVar9 = (short)iVar3;
                                    uVar16 = uVar16 + 1;
                                    uVar15 = uVar15 + uVar12;
                                    iVar3 = (int)local_38._0_4_;
                                } while (uVar2 != uVar16);
                            }
                            uVar2 = (int)local_38._0_4_ + 1;
                        } while (uVar2 != uVar12);
                    }
                } else {
                    puVar7 = (uint8_t*)audioBuffer->end();
                    if (puVar7 == AudioFormat::FLOAT) {
                        uVar1 = audioBuffer->NumberOfChannels();
                        if ((int)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar1) != 0) {
                            pWVar10 = nullptr;
                            do {
                                plVar6 = (long*)(*this_02).operator->();
                                uVar12 = (**(void (**)(...))(*plVar6 + 72))(plVar6, pWVar10);
                                plVar6 = (long*)(*this_02).operator->();
                                uVar4 = (**(void (**)(...))(*plVar6 + 80))(plVar6);
                                local_38 = (WrapArray<float>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar4);
                                plVar6 = (long*)(*this_02).operator->();
                                this_00 = (WrapArray<float>*)(**(void (**)(...))(*plVar6 + 64))(plVar6, pWVar10);
                                uVar15 = 0;
                                uVar2 = arg1;
                                if ((unsigned int)local_38._0_4_ < uVar12 + arg1) {
                                    uVar15 = (uVar12 + arg1) % (unsigned int)local_38._0_4_;
                                    uVar2 = arg1 - uVar15;
                                }
                                local_50 = (WrapArray<short>*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)uVar15);
                                local_60 = (unsigned long)uVar12;
                                local_48 = pWVar10;
                                uVar1 = audioBuffer->GetData((unsigned int)audioBuffer);
                                if (uVar2 != 0) {
                                    iVar3 = (int)(float)local_60;
                                    uVar16 = 0;
                                    do {
                                        puVar11 =
                                            (uint32_t*)(*this_00)[(unsigned long)(unsigned int)(iVar3 + (int)uVar16)];
                                        local_38 = (WrapArray<float>*)(((uint64_t)local_38._4_4_ << 32) |
                                                                       (uint32_t)(*puVar11));
                                        puVar11 = (uint32_t*)(*((WrapArray<float>*)(((uint64_t)extraout_var_03 << 8) |
                                                                                    (uint8_t)uVar1)))[uVar16];
                                        *puVar11 = local_38._0_4_;
                                        uVar16 = uVar16 + 1;
                                    } while (uVar2 != uVar16);
                                }
                                if ((int)local_50 != 0) {
                                    uVar14 = (unsigned long)local_50 & 4294967295;
                                    uVar16 = 0;
                                    do {
                                        puVar11 = (uint32_t*)(*this_00)[uVar16];
                                        local_38 = (WrapArray<float>*)(((uint64_t)local_38._4_4_ << 32) |
                                                                       (uint32_t)(*puVar11));
                                        puVar11 = (uint32_t*)(*(
                                            (WrapArray<float>*)(((uint64_t)extraout_var_03 << 8) |
                                                                (uint8_t)uVar1)))[(unsigned long)(uVar2 + (int)uVar16)];
                                        *puVar11 = local_38._0_4_;
                                        uVar16 = uVar16 + 1;
                                    } while (uVar14 != uVar16);
                                }
                                uVar2 = (int)local_48 + 1;
                                pWVar10 = (WrapArray<float>*)(unsigned long)uVar2;
                                uVar1 = audioBuffer->NumberOfChannels();
                            } while (uVar2 < (unsigned int)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar1));
                        }
                    } else {
                        puVar7 = (uint8_t*)audioBuffer->end();
                        if (puVar7 == AudioFormat::FLOAT_INTERLEAVED) {
                            uVar1 = audioBuffer->NumberOfChannels();
                            uVar2 = (unsigned int)(((uint64_t)extraout_var_04 << 8) | (uint8_t)uVar1);
                            if (uVar2 != 0) {
                                pWVar13 = nullptr;
                                do {
                                    local_50 = pWVar13;
                                    plVar6 = (long*)(*this_02).operator->();
                                    uVar12 = (**(void (**)(...))(*plVar6 + 72))(plVar6, pWVar13);
                                    plVar6 = (long*)(*this_02).operator->();
                                    uVar5 = (**(void (**)(...))(*plVar6 + 80))(plVar6);
                                    plVar6 = (long*)(*this_02).operator->();
                                    pWVar10 = (WrapArray<float>*)(**(void (**)(...))(*plVar6 + 64))(plVar6, local_50);
                                    local_54 = 0;
                                    uVar15 = arg1;
                                    if (uVar5 < uVar12 + arg1) {
                                        local_54 = (uVar12 + arg1) % uVar5;
                                        uVar15 = arg1 - local_54;
                                    }
                                    uVar1 = audioBuffer->GetData((unsigned int)audioBuffer);
                                    local_38 = (WrapArray<float>*)(((uint64_t)extraout_var_05 << 8) | (uint8_t)uVar1);
                                    local_60 = (((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar15);
                                    if (uVar15 != 0) {
                                        uVar16 = (unsigned long)uVar15;
                                        uVar14 = (unsigned long)local_50 & 4294967295;
                                        do {
                                            puVar11 = (uint32_t*)(*pWVar10)[(unsigned long)uVar12];
                                            local_48 = (WrapArray<float>*)(((uint64_t)local_48._4_4_ << 32) |
                                                                           (uint32_t)(*puVar11));
                                            puVar11 = (uint32_t*)(*local_38)[uVar14];
                                            *puVar11 = (unsigned int)local_48;
                                            uVar14 = (unsigned long)((int)uVar14 + uVar2);
                                            uVar12 = uVar12 + 1;
                                            uVar16 = uVar16 - 1;
                                        } while (uVar16 != 0);
                                    }
                                    if (local_54 != 0) {
                                        uVar14 = (unsigned long)local_54;
                                        uVar12 = (int)(float)local_60 * uVar2 + (int)local_50;
                                        uVar16 = 0;
                                        do {
                                            puVar11 = (uint32_t*)(*pWVar10)[uVar16];
                                            local_48 = (WrapArray<float>*)(((uint64_t)local_48._4_4_ << 32) |
                                                                           (uint32_t)(*puVar11));
                                            puVar11 = (uint32_t*)(*local_38)[(unsigned long)uVar12];
                                            *puVar11 = (unsigned int)local_48;
                                            uVar16 = uVar16 + 1;
                                            uVar12 = uVar12 + uVar2;
                                        } while (uVar14 != uVar16);
                                    }
                                    uVar12 = (int)local_50 + 1;
                                    pWVar13 = (WrapArray<short>*)(unsigned long)uVar12;
                                } while (uVar12 != uVar2);
                            }
                        } else {
                            uVar2 = 0;
                            audioBuffer->Reset(32, false);
                            plVar6 = (long*)(*this_02).operator->();
                            iVar3 = (**(void (**)(...))(*plVar6 + 24))(plVar6);
                            if (iVar3 != 0) {
                                do {
                                    if (arg1 != 0) {
                                        uVar12 = 0;
                                        do {
                                            plVar6 = (long*)(*this_02).operator->();
                                            arg2 = (float)(**(void (**)(...))(*plVar6 + 48))(plVar6, uVar2, uVar12, 1);
                                            local_38 =
                                                (WrapArray<float>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)arg2);
                                            AudioRenderer::RecordDebugValue(uVar2, arg2);
                                            audioBuffer->WriteSample(local_38._0_4_, uVar2, uVar12, true);
                                            uVar12 = uVar12 + 1;
                                        } while (arg1 != uVar12);
                                    }
                                    uVar2 = uVar2 + 1;
                                    plVar6 = (long*)(*this_02).operator->();
                                    uVar12 = (**(void (**)(...))(*plVar6 + 24))(plVar6);
                                } while (uVar2 < uVar12);
                            }
                        }
                    }
                }
            }
            uVar1 = audioBuffer->GetMaximumSamples();
            audioBuffer->WroteSamples((unsigned int)(((uint64_t)extraout_var_06 << 8) | (uint8_t)uVar1));
            ((AudioBuffer*)(*this_02).operator->())->ConsumedSamples(arg1, true);
        }
    }

    // 0x100b8e570
    void AudioBuss::Service() {
        if ((&field_64)->operator_cast_to_bool() != '\0') {
            field_36 = (float)std::function<float()>::operator()((function<float()>*)&field_64);
        }
    }

} // namespace jag::hal::audio
