// libs/hal/audio/AudioRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.audio

#include "AudioRenderer.h"

namespace jag::hal::audio {
    // 0x100f482b0, 64 bytes, __data
    AudioRenderer::m_audioMutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f48350, 64 bytes, __data
    AudioRenderer::m_voiceInstanceGuardMutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x103bc2748, 8 bytes, __common; zero-initialised
    AudioRenderer::m_outputBuffersIndex;

    // 0x103bc2750, 24 bytes, __common; zero-initialised
    AudioRenderer::m_outputBuffers;

    // 0x103bc2768, 8 bytes, __common; zero-initialised
    AudioRenderer::m_debugShowAudio;

    // 0x103bc2770, 92400 bytes, __common; set at startup by ___cxx_global_var_init.62
    AudioRenderer::DebugData AudioRenderer::m_debugData = DebugData();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AudioRenderer::VerifyDefaultAudioDevice();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AudioRenderer::Pause();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AudioRenderer::Resume();

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    AudioRenderer::GetStartParams() const;

    // 0x100663fb0: the linker folded this into AudioRenderer::GetActiveDecoders() const, which has identical code
    AudioRenderer::ActiveDecoderCount() const;

    // 0x100b8e320, 464 bytes, placed by class name and debug map
    // AudioRenderer::RecordDebugValue(int, float)
    void AudioRenderer::RecordDebugValue(int param_1, float param_2) {
        float* pfVar2;
        fixed_list<float, 1920ul, true, eastl::allocator>* this;
        list<float, eastl::fixed_node_allocator<24ul, 1920ul, 8ul, 0ul, true, eastl::allocator>>* plVar3;
        float* pfVar4;
        float* pfVar5;
        undefined4* puVar6;
        array<float, 2ul>* paVar7;
        float fVar9;

        if (m_debugShowAudio != '\0') {
            pfVar2 = (float*)std::array<float, 2ul>::operator[]((array<float, 2ul>*)&DAT_103bd9044, (ulong)param_1);
            *pfVar2 = *pfVar2 + param_2;
            pfVar2 = (float*)std::array<float, 2ul>::operator[]((array<float, 2ul>*)&DAT_103bd9054, (ulong)param_1);
            fVar9 = (float)eastl::min<float>(param_2, *pfVar2);
            *pfVar2 = fVar9;
            pfVar2 = (float*)std::array<float, 2ul>::operator[]((array<float, 2ul>*)&DAT_103bd904c, (ulong)param_1);
            fVar9 = (float)eastl::max_alt(param_2, *pfVar2);
            *pfVar2 = fVar9;
            if ((param_1 == 1) && (DAT_103bd9040 = DAT_103bd9040 + 1, DAT_103bd9040 == 480)) {
                this = (fixed_list<float, 1920ul, true, eastl::allocator>*)
                    std::array<eastl::fixed_list<float, 1920ul, true, eastl::allocator>, 2ul>::operator[](0);
                if (eastl::fixed_list<float, 1920ul, true, eastl::allocator>::full(this) != '\0') {
                    pop_back();
                    plVar3 = (list<float, eastl::fixed_node_allocator<24ul, 1920ul, 8ul, 0ul, true, eastl::allocator>>*)
                        std::array<eastl::fixed_list<float, 1920ul, true, eastl::allocator>, 2ul>::operator[](1);
                    eastl::list<float, eastl::fixed_node_allocator<24ul, 1920ul, 8ul, 0ul, true,
                                                                   eastl::allocator>>::pop_back(plVar3);
                }
                pfVar2 = (float*)std::array<float, 2ul>::operator[]((array<float, 2ul>*)&DAT_103bd9044, 0);
                paVar7 = (array<float, 2ul>*)&DAT_103bd904c;
                if (*pfVar2 <= 0.0 && *pfVar2 != 0.0) {
                    paVar7 = (array<float, 2ul>*)&DAT_103bd9054;
                }
                pfVar4 = (float*)std::array<float, 2ul>::operator[](paVar7, 0);
                push_front(pfVar4);
                pfVar4 = (float*)std::array<float, 2ul>::operator[]((array<float, 2ul>*)&DAT_103bd9044, 1);
                paVar7 = (array<float, 2ul>*)&DAT_103bd904c;
                if (*pfVar4 <= 0.0 && *pfVar4 != 0.0) {
                    paVar7 = (array<float, 2ul>*)&DAT_103bd9054;
                }
                plVar3 = (list<float, eastl::fixed_node_allocator<24ul, 1920ul, 8ul, 0ul, true, eastl::allocator>>*)
                    std::array<eastl::fixed_list<float, 1920ul, true, eastl::allocator>, 2ul>::operator[](1);
                pfVar5 = (float*)std::array<float, 2ul>::operator[](paVar7, 1);
                eastl::list<float, eastl::fixed_node_allocator<24ul, 1920ul, 8ul, 0ul, true,
                                                               eastl::allocator>>::push_front(plVar3, pfVar5);
                *pfVar2 = 0.0;
                *pfVar4 = 0.0;
                puVar6 = (undefined4*)std::array<float, 2ul>::operator[]((array<float, 2ul>*)&DAT_103bd9054, 0);
                *puVar6 = 0;
                puVar6 = (undefined4*)std::array<float, 2ul>::operator[]((array<float, 2ul>*)&DAT_103bd9054, 1);
                *puVar6 = 0;
                puVar6 = (undefined4*)std::array<float, 2ul>::operator[]((array<float, 2ul>*)&DAT_103bd904c, 0);
                *puVar6 = 0;
                puVar6 = (undefined4*)std::array<float, 2ul>::operator[]((array<float, 2ul>*)&DAT_103bd904c, 1);
                *puVar6 = 0;
                DAT_103bd9040 = 0;
            }
        }
    }

    // 0x100b8f650, 176 bytes, base-object constructor, placed by class name
    // AudioRenderer::AudioRenderer()
    void AudioRenderer::AudioRenderer() {
        field_0 = &PTR__AudioRenderer_100f26890;
        std::unique_ptr<AudioMixer, std::default_delete<AudioMixer>>::unique_ptr<true, void>(
            (unique_ptr<AudioMixer, std::default_delete<AudioMixer>>*)&field_8);
        new (field_16) AudioSystemStartParams();
        field_32 = 0;
        field_36 = 0;
        field_40 = 0;
        new (&field_48) std::array<decoders::vorbis::VorbisDecoder, 6ul>();
        field_244 = 0;
        field_240 = 0;
        std::atomic<int>::atomic((int)this + 248);
        new (&field_256) eastl::vector<unsigned char, eastl::allocator>();
    }

    // 0x100b8f750, 16 bytes, complete-object constructor, placed by class name
    // AudioRenderer::AudioRenderer(): jumps straight to the base-object constructor

    // 0x100b8f760, 64 bytes, base-object destructor, placed by class name
    // AudioRenderer::~AudioRenderer()
    void AudioRenderer::~AudioRenderer() {
        field_0 = &PTR__AudioRenderer_100f26890;
        (&field_256)->~vector();
        (&field_48)->~array();
        (&field_8)->~unique_ptr();
    }

    // 0x100b8f7a0, 16 bytes, complete-object destructor, placed by class name
    // AudioRenderer::~AudioRenderer(): jumps straight to the base-object destructor

    // 0x100b8f7b0, 32 bytes, deleting destructor, placed by class name
    // AudioRenderer::~AudioRenderer()
    void AudioRenderer::~AudioRenderer() {
        ~AudioRenderer(this);
        operator_delete(this);
    }

    // 0x100b8f7d0, 64 bytes, placed by class name
    // AudioRenderer::ClaimVoice(BussType)
    undefined8 AudioRenderer::ClaimVoice(undefined4 param_2) {
        AudioMixer* pAVar2;
        undefined8 uVar3;

        if ((&field_8)->operator_cast_to_bool()) {
            pAVar2 = (AudioMixer*)std::unique_ptr<AudioMixer, std::default_delete<AudioMixer>>::operator->(
                (unique_ptr<AudioMixer, std::default_delete<AudioMixer>>*)&field_8);
            uVar3 = pAVar2->ClaimVoice(param_2);
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x100b8f840, 288 bytes, placed by class name
    // AudioRenderer::Init(AudioAPI*, AudioSystemStartParams const&)
    undefined1 AudioRenderer::Init(AudioAPI* param_1, AudioSystemStartParams* param_2) {
        undefined1* this_00;
        AudioMixer* this_01;
        AudioBuss* this_02;
        unique_ptr* puVar1;
        AudioBuffer* this_03;
        undefined8 uVar2;
        bool bVar3;
        unique_ptr* puVar4;
        undefined1 local_38[16];

        uVar2 = param_2->field_8;
        *(undefined8*)field_16 = param_2->field_0;
        *(undefined8*)(field_16 + 8) = uVar2;
        this_00 = &field_8;
        local_38._0_8_ = param_1;
        bVar3 = this_00->operator_cast_to_bool();
        if (!bVar3) {
            puVar4 = (unique_ptr*)(local_38 + 8);
            std::make_unique<AudioMixer, AudioAPI*&, AudioSystemStartParams_const&>((AudioAPI**)puVar4,
                                                                                    (AudioSystemStartParams*)local_38);
            std::unique_ptr<AudioMixer, std::default_delete<AudioMixer>>::operator=(
                (unique_ptr<AudioMixer, std::default_delete<AudioMixer>>*)this_00, puVar4);
            puVar4->~unique_ptr();
        }
        eastl::vector<unsigned char, eastl::allocator>::resize((ulong)&field_256);
        new ((local_38 + 8)) std::scoped_lock<std::mutex>((mutex*)&m_audioMutex);
        this_01 = (AudioMixer*)std::unique_ptr<AudioMixer, std::default_delete<AudioMixer>>::operator->(
            (unique_ptr<AudioMixer, std::default_delete<AudioMixer>>*)this_00);
        this_02 = (AudioBuss*)this_01->GetMasterBuss();
        this_02->ClearSamples();
        puVar4 = (unique_ptr*)m_outputBuffers.data();
        puVar1 = (unique_ptr*)m_outputBuffers.end();
        for (; puVar4 != puVar1; puVar4 = puVar4 + 8) {
            bVar3 = std::unique_ptr::operator_cast_to_bool(puVar4);
            if (bVar3) {
                this_03 = (AudioBuffer*)std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator->(
                    (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)puVar4);
                this_03->Reset(1, false);
            }
        }
        ((local_38 + 8))->~scoped_lock();
        return 1;
    }

    // 0x100b8f9f0, 96 bytes, placed by class name
    // AudioRenderer::Shutdown()
    void AudioRenderer::Shutdown() {
        undefined1* this_00;
        AudioMixer* this_01;

        field_40 = 3;
        this_00 = &field_8;
        if (this_00->operator_cast_to_bool()) {
            this_01 = (AudioMixer*)std::unique_ptr<AudioMixer, std::default_delete<AudioMixer>>::operator->(
                (unique_ptr<AudioMixer, std::default_delete<AudioMixer>>*)this_00);
            this_01->ShutDown();
        }
        field_32 = 0;
        m_outputBuffersIndex = 0;
        this_00->reset(0);
    }

    // 0x100b8fa80, 16 bytes, placed by class name
    // AudioRenderer::Update(float)
    void AudioRenderer::Update(float param_1) {}

    // 0x100b8fa90, 144 bytes, placed by class name
    // AudioRenderer::GetDecoder(AudioFormat const*)
    undefined8 AudioRenderer::GetDecoder(AudioFormat* param_1) {
        undefined8 uVar2;
        ulong uVar3;
        undefined1 local_31;

        uVar3 = 0;
        do {
            local_31 = 0;
            uVar2 = std::array<std::atomic<bool>, 6ul>::operator[]((array<std::atomic<bool>, 6ul>*)&field_240, uVar3);
            if (std::__atomic_base<bool, false>::compare_exchange_strong(uVar2, &local_31) != '\0') {
                std::__atomic_base<int, true>::operator++((__atomic_base<int, true>*)&field_248);
                uVar2 = std::array<decoders::vorbis::VorbisDecoder, 6ul>::operator[](
                    (array<decoders::vorbis::VorbisDecoder, 6ul>*)&field_48, uVar3);
                return uVar2;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 != 6);
        return 0;
    }

    // 0x100b8fb60, 144 bytes, placed by class name
    // AudioRenderer::FreeDecoder(decoders::AudioDecoder*)
    void AudioRenderer::FreeDecoder(AudioDecoder* param_1) {
        AudioDecoder* pAVar1;
        atomic<bool>* this_00;
        ulong uVar2;

        pAVar1 = (AudioDecoder*)std::array<decoders::vorbis::VorbisDecoder, 6ul>::operator[](
            (array<decoders::vorbis::VorbisDecoder, 6ul>*)&field_48, 0);
        if ((param_1 < pAVar1) || (pAVar1 + 24 <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "decoder >= &m_decoders[0] && uintptr_t(decoder) < uintptr_t(&m_decoders[0]) + sizeof(m_decoders)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioRenderer.cpp", 97,
                (char*)0);
        }
        uVar2 = (ulong)((long)param_1 - (long)pAVar1) >> 5;
        this_00 = (atomic<bool>*)std::array<std::atomic<bool>, 6ul>::operator[](
            (array<std::atomic<bool>, 6ul>*)&field_240, uVar2);
        std::atomic<bool>::operator=(this_00, SUB81(uVar2, 0));
        std::__atomic_base<int, true>::operator--((__atomic_base<int, true>*)&field_248);
    }

    // 0x100b8fc10, 336 bytes, placed by class name
    // AudioRenderer::InjectTestTone(AudioBuffer*, int)
    void AudioRenderer::InjectTestTone(AudioBuffer* param_1, int param_2) {
        double dVar1;
        char cVar2;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        double dVar7;

        dVar1 = InjectTestTone(AudioBuffer*, int)::x;
        if ((*(code*)param_1->field_0[3])() == 0) {
            uVar5 = 0;
        } else {
            uVar6 = 0;
            do {
                InjectTestTone(AudioBuffer*, int)::x = dVar1;
                uVar4 = (*(code*)param_1->field_0[5])(param_1);
                cVar2 = param_1->CanWriteSample(uVar6, 0);
                uVar5 = 0;
                if (cVar2 != '\0') {
                    uVar5 = 0;
                    do {
                        if ((-1 < param_2) && ((uint)param_2 <= uVar5))
                            break;
                        dVar7 = (double)_sin(InjectTestTone(AudioBuffer*, int)::x * 6.283185307179586);
                        param_1->WriteSample((float)(dVar7 * 0.9), uVar6, uVar5, true);
                        dVar7 = InjectTestTone(AudioBuffer*, int)::x + 300.0 / (double)uVar4;
                        InjectTestTone(AudioBuffer*, int)::x = (double)(~-(ulong)(1.0 < dVar7) & (ulong)dVar7);
                        uVar5 = uVar5 + 1;
                        cVar2 = param_1->CanWriteSample(uVar6, uVar5);
                    } while (cVar2 != '\0');
                }
                uVar6 = uVar6 + 1;
                uVar4 = (*(code*)param_1->field_0[3])(param_1);
            } while (uVar6 < uVar4);
        }
        param_1->WroteSamples(uVar5);
    }

    // 0x100ba39e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62() {
        new (&AudioRenderer::m_debugData) AudioRenderer::DebugData();
        ___cxa_atexit(PTR__DebugData_100ee64b0, &AudioRenderer::m_debugData, 4294967296);
    }

} // namespace jag::hal::audio
