// libs/hal/audio/AudioRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.audio

#include "AudioRenderer.h"

namespace jag::hal::audio {
    // 0x100f482b0
    int32_t AudioRenderer::m_audioMutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f48350
    int32_t AudioRenderer::m_voiceInstanceGuardMutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x103bc2748
    int64_t AudioRenderer::m_outputBuffersIndex;

    // 0x103bc2750
    Array<std::unique_ptr<AudioBuffer>> AudioRenderer::m_outputBuffers;

    // 0x103bc2768
    int64_t AudioRenderer::m_debugShowAudio;

    // 0x103bc2770, set at startup by ___cxx_global_var_init.62
    AudioRenderer::DebugData AudioRenderer::m_debugData = DebugData();

    // 0x100009e70: AudioRenderer::VerifyDefaultAudioDevice() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: AudioRenderer::Pause() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: AudioRenderer::Resume() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1000b9950: AudioRenderer::GetStartParams() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x100663fb0: AudioRenderer::ActiveDecoderCount() const has the same machine code as AudioRenderer::GetActiveDecoders() const

    // 0x100b8e320
    void AudioRenderer::RecordDebugValue(int arg1, float arg2) {
        float* pfVar2;
        fixed_list<float, 1920ul>* fixed_list;
        list<float, eastl::fixed_node_allocator<24ul, 1920ul, 8ul, 0ul, true>>* plVar3;
        float* pfVar4;
        float* arg1_00;
        uint32_t* puVar5;
        array<float, 2ul>* paVar6;
        unsigned long uVar7;
        float fVar8;

        if (m_debugShowAudio != '\0') {
            uVar7 = (unsigned long)arg1;
            pfVar2 = &DAT_103bd9044[uVar7];
            *pfVar2 = *pfVar2 + arg2;
            pfVar2 = &DAT_103bd9054[uVar7];
            fVar8 = (float)eastl::min<float>(arg2, *pfVar2);
            *pfVar2 = fVar8;
            pfVar2 = &DAT_103bd904c[uVar7];
            fVar8 = (float)eastl::max_alt(arg2, *pfVar2);
            *pfVar2 = fVar8;
            if ((arg1 == 1) &&
                (m_debugData.field_92368 = m_debugData.field_92368 + 1, m_debugData.field_92368 == 480)) {
                fixed_list = &nullptr[uVar7];
                if (fixed_list->full() != '\0') {
                    fixed_list->pop_back();
                    plVar3 = &DAT_00000001[uVar7];
                    plVar3->pop_back();
                }
                pfVar2 = &DAT_103bd9044[0];
                paVar6 = (array<float, 2ul>*)&DAT_103bd904c;
                if (*pfVar2 <= 0.0 && *pfVar2 != 0.0) {
                    paVar6 = (array<float, 2ul>*)&DAT_103bd9054;
                }
                pfVar4 = (float*)(*paVar6)[0];
                fixed_list->push_front(*pfVar4);
                uVar7 = 1;
                pfVar4 = &DAT_103bd9044[1];
                paVar6 = (array<float, 2ul>*)&DAT_103bd904c;
                if (*pfVar4 <= 0.0 && *pfVar4 != 0.0) {
                    paVar6 = (array<float, 2ul>*)&DAT_103bd9054;
                }
                plVar3 = &DAT_00000001[uVar7];
                arg1_00 = (float*)(*paVar6)[1];
                plVar3->push_front(*arg1_00);
                *pfVar2 = 0.0;
                *pfVar4 = 0.0;
                puVar5 = (uint32_t*)DAT_103bd9054[0];
                *puVar5 = 0;
                puVar5 = (uint32_t*)DAT_103bd9054[1];
                *puVar5 = 0;
                puVar5 = (uint32_t*)DAT_103bd904c[0];
                *puVar5 = 0;
                puVar5 = (uint32_t*)DAT_103bd904c[1];
                *puVar5 = 0;
                m_debugData.field_92368 = 0;
            }
        }
    }

    // 0x100b8f650
    AudioRenderer::AudioRenderer() {
        field_8.unique_ptr<true, void>();
        new (m_startParams) AudioSystemStartParams();
        field_32 = 0;
        field_36 = 0;
        m_state = 0;
        new (&field_48) std::array<decoders::vorbis::VorbisDecoder, 6ul>();
        field_244 = 0;
        field_240 = 0;
        new (&field_248) std::atomic<int>(0);
        new (&field_256) eastl::vector<unsigned char>();
    }

    // 0x100b8f760
    AudioRenderer::~AudioRenderer() {
        field_256.~vector();
        field_48.~array();
        field_8.~unique_ptr();
    }

    // 0x100b8f7d0
    uint64_t AudioRenderer::ClaimVoice(BussType bussType) {
        uint64_t uVar2;

        if ((&field_8)->operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = ((AudioMixer*)field_8.operator->())->ClaimVoice(bussType);
        }
        return uVar2;
    }

    // 0x100b8f840
    uint64_t AudioRenderer::Init(AudioAPI* audioAPI, const AudioSystemStartParams& audioSystemStartParams) {
        ReturnValue local_30;

        uint64_t uVar1 = audioSystemStartParams.field_8;
        *(uint64_t*)m_startParams = audioSystemStartParams.field_0;
        *(uint64_t*)(m_startParams + 8) = uVar1;
        uint8_t* this_00 = &field_8;
        if (!(this_00->operator_cast_to_bool())) {
            local_30 = std::make_unique<AudioMixer, AudioAPI*&, AudioSystemStartParams const&>(audioAPI,
                                                                                               audioSystemStartParams);
            *this_00 = local_30;
        }
        field_256.resize((unsigned long)(unsigned int)(*(int*)((long)&audioSystemStartParams.field_8 + 4) << 2));
        new (&local_30) std::scoped_lock(m_audioMutex);
        (((AudioMixer*)(*this_00).operator->())->GetMasterBuss())->ClearSamples();
        auto this_03 = m_outputBuffers.data();
        auto puVar3 = m_outputBuffers.end();
        for (; this_03 != puVar3; this_03 = this_03 + 8) {
            if (std::unique_ptr::operator_cast_to_bool(this_03)) {
                ((AudioBuffer*)(*this_03).operator->())->Reset(1, false);
            }
        }
        return 1;
    }

    // 0x100b8f9f0
    void AudioRenderer::Shutdown() {
        m_state = 3;
        uint8_t* this_00 = &field_8;
        if (this_00->operator_cast_to_bool() != '\0') {
            ((AudioMixer*)(*this_00).operator->())->ShutDown();
        }
        field_32 = 0;
        m_outputBuffersIndex = 0;
        this_00->reset(nullptr);
    }

    // 0x100b8fa80
    void AudioRenderer::Update(float arg1) {}

    // 0x100b8fa90
    uint64_t AudioRenderer::GetDecoder(const AudioFormat* audioFormat) {
        memory_order in_ECX;
        bool arg2;
        bool local_31;

        unsigned long arg1 = 0;
        do {
            local_31 = false;
            if (((__atomic_base<bool, false>*)field_240[arg1])->compare_exchange_strong(local_31, arg2, in_ECX) !=
                '\0') {
                std::__atomic_base<int, true>::operator++();
                return field_48[arg1];
            }
            arg1 = arg1 + 1;
        } while (arg1 != 6);
        return 0;
    }

    // 0x100b8fb60
    void AudioRenderer::FreeDecoder(decoders::AudioDecoder* audioDecoder) {
        AudioDecoder* pAVar1 = &field_48[0];
        if ((audioDecoder < pAVar1) || (pAVar1 + 24 <= audioDecoder)) {
            LogAssert(
                "decoder >= &m_decoders[0] && uintptr_t(decoder) < uintptr_t(&m_decoders[0]) + sizeof(m_decoders)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioRenderer.cpp", 97,
                nullptr);
        }
        unsigned long arg1 = (unsigned long)((long)audioDecoder - (long)pAVar1) >> 5;
        atomic<bool>* this_00 = &field_240[arg1];
        *this_00 = ((uint8_t)arg1);
        std::__atomic_base<int, true>::operator--();
    }

    // 0x100b8fc10
    void AudioRenderer::InjectTestTone(AudioBuffer* audioBuffer, int arg2) {
        bool cVar3;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        unsigned int arg3;
        unsigned int arg1;
        double dVar4;

        double dVar1 = InjectTestTone(AudioBuffer*, int)::x;
        uint8_t uVar2 = audioBuffer->NumberOfChannels();
        if ((int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) == 0) {
            arg3 = 0;
        } else {
            arg1 = 0;
            do {
                InjectTestTone(AudioBuffer*, int)::x = dVar1;
                uVar2 = audioBuffer->SampleRate();
                cVar3 = audioBuffer->CanWriteSample(arg1, 0);
                arg3 = 0;
                if (cVar3) {
                    arg3 = 0;
                    do {
                        if ((-1 < arg2) && ((unsigned int)arg2 <= arg3))
                            break;
                        dVar4 = (double)_sin(InjectTestTone(AudioBuffer*, int)::x * 6.283185307179586);
                        audioBuffer->WriteSample((float)(dVar4 * 0.9), arg1, arg3, true);
                        dVar4 = InjectTestTone(AudioBuffer*, int)::x +
                                300.0 / (double)((((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar2) & 4294967295);
                        InjectTestTone(AudioBuffer*, int)::x =
                            (double)(~-(unsigned long)(1.0 < dVar4) & (unsigned long)dVar4);
                        arg3 = arg3 + 1;
                        cVar3 = audioBuffer->CanWriteSample(arg1, arg3);
                    } while (cVar3);
                }
                arg1 = arg1 + 1;
                uVar2 = audioBuffer->NumberOfChannels();
            } while (arg1 < (unsigned int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2));
        }
        audioBuffer->WroteSamples(arg3);
    }

} // namespace jag::hal::audio
