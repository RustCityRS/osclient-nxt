// libs/hal/audio/AudioFormat.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.audio

namespace jag::hal::audio {
    class AudioFormat {
    public:
        AudioFormat(int arg1, const char* str, unsigned int arg3, bool arg4, bool arg5);
        static AudioFormat const* FLOAT;              // = &_FLOAT
        static AudioFormat const* FLOAT_INTERLEAVED;  // = &_FLOAT_INTERLEAVED
        static AudioFormat const* PCM8;               // = &_PCM8
        static AudioFormat const* PCM8_INTERLEAVED;   // = &_PCM8_INTERLEAVED
        static AudioFormat const* UPCM8;              // = &_UPCM8
        static AudioFormat const* UPCM8_INTERLEAVED;  // = &_UPCM8_INTERLEAVED
        static AudioFormat const* PCM16;              // = &_PCM16
        static AudioFormat const* PCM16_INTERLEAVED;  // = &_PCM16_INTERLEAVED
        static AudioFormat const* UPCM16;             // = &_UPCM16
        static AudioFormat const* UPCM16_INTERLEAVED; // = &_UPCM16_INTERLEAVED
        static AudioFormat const* INVALID;            // = &_INVALID
        static AudioFormat const* VORBIS;             // = &_VORBIS
        static AudioFormat _INVALID;                  // = AudioFormat(0, "INVALID", 0, false, false)
        static AudioFormat _PCM8;                     // = AudioFormat(1, "PCM SIGNED 8BIT", 1, false, false)
        static AudioFormat _PCM8_INTERLEAVED;         // = AudioFormat(1, "PCM SIGNED 8BIT INTERLEAVED", 1, true, false)
        static AudioFormat _UPCM8;                    // = AudioFormat(2, "PCM UNSIGNED 8BIT", 1, false, false)
        static AudioFormat _UPCM8_INTERLEAVED;  // = AudioFormat(2, "PCM UNSIGNED 8BIT INTERLEAVED", 1, true, false)
        static AudioFormat _PCM16;              // = AudioFormat(3, "PCM SIGNED 16BIT", 2, false, false)
        static AudioFormat _PCM16_INTERLEAVED;  // = AudioFormat(3, "PCM SIGNED 16BIT INTERLEAVED", 2, true, false)
        static AudioFormat _UPCM16;             // = AudioFormat(4, "PCM UNSIGNED 16BIT", 2, false, false)
        static AudioFormat _UPCM16_INTERLEAVED; // = AudioFormat(4, "PCM UNSIGNED 16BIT INTERLEAVED", 2, true, false)
        static AudioFormat _FLOAT;              // = AudioFormat(5, "FLOATING POINT 32BIT", 4, false, false)
        static AudioFormat _FLOAT_INTERLEAVED;  // = AudioFormat(5, "FLOATING POINT 32BIT INTERLEAVED", 4, true, false)
        static AudioFormat _VORBIS;             // = AudioFormat(6, "VORBIS", 1, false, true)

    private:
        PlayerDataComparator<oldscape::social::FriendChatUser>* field_0;
        int field_8;
        unsigned int field_12;
        uint32_t field_16;
        bool field_20;
        bool field_21;
        uint8_t _unknown_22[2];
    };

    // 0x100f482f0
    AudioFormat const* AudioFormat::FLOAT = &_FLOAT;

    // 0x100f482f8
    AudioFormat const* AudioFormat::FLOAT_INTERLEAVED = &_FLOAT_INTERLEAVED;

    // 0x100f48300
    AudioFormat const* AudioFormat::PCM8 = &_PCM8;

    // 0x100f48308
    AudioFormat const* AudioFormat::PCM8_INTERLEAVED = &_PCM8_INTERLEAVED;

    // 0x100f48310
    AudioFormat const* AudioFormat::UPCM8 = &_UPCM8;

    // 0x100f48318
    AudioFormat const* AudioFormat::UPCM8_INTERLEAVED = &_UPCM8_INTERLEAVED;

    // 0x100f48320
    AudioFormat const* AudioFormat::PCM16 = &_PCM16;

    // 0x100f48328
    AudioFormat const* AudioFormat::PCM16_INTERLEAVED = &_PCM16_INTERLEAVED;

    // 0x100f48330
    AudioFormat const* AudioFormat::UPCM16 = &_UPCM16;

    // 0x100f48338
    AudioFormat const* AudioFormat::UPCM16_INTERLEAVED = &_UPCM16_INTERLEAVED;

    // 0x100f48340
    AudioFormat const* AudioFormat::INVALID = &_INVALID;

    // 0x100f48348
    AudioFormat const* AudioFormat::VORBIS = &_VORBIS;

    // 0x103bc2628, set at startup by ___cxx_global_var_init.33
    AudioFormat AudioFormat::_INVALID = AudioFormat(0, "INVALID", 0, false, false);

    // 0x103bc2640, set at startup by ___cxx_global_var_init.35
    AudioFormat AudioFormat::_PCM8 = AudioFormat(1, "PCM SIGNED 8BIT", 1, false, false);

    // 0x103bc2658, set at startup by ___cxx_global_var_init.37
    AudioFormat AudioFormat::_PCM8_INTERLEAVED = AudioFormat(1, "PCM SIGNED 8BIT INTERLEAVED", 1, true, false);

    // 0x103bc2670, set at startup by ___cxx_global_var_init.39
    AudioFormat AudioFormat::_UPCM8 = AudioFormat(2, "PCM UNSIGNED 8BIT", 1, false, false);

    // 0x103bc2688, set at startup by ___cxx_global_var_init.41
    AudioFormat AudioFormat::_UPCM8_INTERLEAVED = AudioFormat(2, "PCM UNSIGNED 8BIT INTERLEAVED", 1, true, false);

    // 0x103bc26a0, set at startup by ___cxx_global_var_init.43
    AudioFormat AudioFormat::_PCM16 = AudioFormat(3, "PCM SIGNED 16BIT", 2, false, false);

    // 0x103bc26b8, set at startup by ___cxx_global_var_init.45
    AudioFormat AudioFormat::_PCM16_INTERLEAVED = AudioFormat(3, "PCM SIGNED 16BIT INTERLEAVED", 2, true, false);

    // 0x103bc26d0, set at startup by ___cxx_global_var_init.47
    AudioFormat AudioFormat::_UPCM16 = AudioFormat(4, "PCM UNSIGNED 16BIT", 2, false, false);

    // 0x103bc26e8, set at startup by ___cxx_global_var_init.49
    AudioFormat AudioFormat::_UPCM16_INTERLEAVED = AudioFormat(4, "PCM UNSIGNED 16BIT INTERLEAVED", 2, true, false);

    // 0x103bc2700, set at startup by ___cxx_global_var_init.51
    AudioFormat AudioFormat::_FLOAT = AudioFormat(5, "FLOATING POINT 32BIT", 4, false, false);

    // 0x103bc2718, set at startup by ___cxx_global_var_init.53
    AudioFormat AudioFormat::_FLOAT_INTERLEAVED = AudioFormat(5, "FLOATING POINT 32BIT INTERLEAVED", 4, true, false);

    // 0x103bc2730, set at startup by ___cxx_global_var_init.55
    AudioFormat AudioFormat::_VORBIS = AudioFormat(6, "VORBIS", 1, false, true);

    // 0x100b97430
    AudioFormat::AudioFormat(int arg1, const char* str, unsigned int arg3, bool arg4, bool arg5) {
        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(str);
        field_8 = arg1;
        field_12 = arg3;
        field_16 = math::Log2Int(arg3);
        field_20 = arg4;
        field_21 = arg5;
    }

} // namespace jag::hal::audio

namespace jag {
    // 0x100b8e7a0
    shared_ptr_if_not_array<hal::audio::AudioBuss>::type
    make_shared<hal::audio::AudioBuss, hal::audio::BussType, unsigned int const&, int, float, unsigned int const&,
                bool>(hal::audio::BussType&& bussType, const unsigned int& arg2, int&& arg3, float&& arg4,
                      const unsigned int& arg5, bool&& arg6) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        bool* in_stack_00000008;
        int local_44;
        AudioBuss* local_40[2];

        auto arg1 = aligned_alloc(144, 16);
        if (arg1 == nullptr) {
            new (bussType) shared_ptr();
        } else {
            local_40[0] = placement_new<hal::audio::AudioBuss, hal::audio::BussType, unsigned int const&, int, float,
                                        unsigned int const&, bool>((void*)((long)arg1 + 32), arg2, (unsigned int*)arg3,
                                                                   (int*)arg4, (float*)arg5, (unsigned int*)arg6,
                                                                   in_stack_00000008);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<hal::audio::AudioBuss>, int, hal::audio::AudioBuss*&>(arg1, &local_44,
                                                                                                       local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (bussType) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return bussType;
    }

    // 0x100b8e930
    shared_ptr_if_not_array<MixerWorker>::type make_shared<MixerWorker>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        MixerWorker* local_28[2];

        auto arg1 = aligned_alloc(488, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<MixerWorker>::type result;
        } else {
            local_28[0] = placement_new<MixerWorker>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<MixerWorker>, int, MixerWorker*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
