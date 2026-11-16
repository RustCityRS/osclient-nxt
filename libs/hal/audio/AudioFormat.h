// libs/hal/audio/AudioFormat.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.audio

namespace jag::hal::audio {
    class AudioFormat {
    public:
        AudioFormat(int, char const*, unsigned int, bool, bool);
        static AudioFormat const* /* 8 bytes */ FLOAT;              // = &_FLOAT
        static AudioFormat const* /* 8 bytes */ FLOAT_INTERLEAVED;  // = &_FLOAT_INTERLEAVED
        static AudioFormat const* /* 8 bytes */ PCM8;               // = &_PCM8
        static AudioFormat const* /* 8 bytes */ PCM8_INTERLEAVED;   // = &_PCM8_INTERLEAVED
        static AudioFormat const* /* 8 bytes */ UPCM8;              // = &_UPCM8
        static AudioFormat const* /* 8 bytes */ UPCM8_INTERLEAVED;  // = &_UPCM8_INTERLEAVED
        static AudioFormat const* /* 8 bytes */ PCM16;              // = &_PCM16
        static AudioFormat const* /* 8 bytes */ PCM16_INTERLEAVED;  // = &_PCM16_INTERLEAVED
        static AudioFormat const* /* 8 bytes */ UPCM16;             // = &_UPCM16
        static AudioFormat const* /* 8 bytes */ UPCM16_INTERLEAVED; // = &_UPCM16_INTERLEAVED
        static AudioFormat const* /* 8 bytes */ INVALID;            // = &_INVALID
        static AudioFormat const* /* 8 bytes */ VORBIS;             // = &_VORBIS
        static AudioFormat /* 24 bytes */ _INVALID;                 // = AudioFormat(0, "INVALID", 0, false, false)
        static AudioFormat /* 24 bytes */ _PCM8;   // = AudioFormat(1, "PCM SIGNED 8BIT", 1, false, false)
        static AudioFormat                         /* 24 bytes */
            _PCM8_INTERLEAVED;                     // = AudioFormat(1, "PCM SIGNED 8BIT INTERLEAVED", 1, true, false)
        static AudioFormat /* 24 bytes */ _UPCM8;  // = AudioFormat(2, "PCM UNSIGNED 8BIT", 1, false, false)
        static AudioFormat                         /* 24 bytes */
            _UPCM8_INTERLEAVED;                    // = AudioFormat(2, "PCM UNSIGNED 8BIT INTERLEAVED", 1, true, false)
        static AudioFormat /* 24 bytes */ _PCM16;  // = AudioFormat(3, "PCM SIGNED 16BIT", 2, false, false)
        static AudioFormat                         /* 24 bytes */
            _PCM16_INTERLEAVED;                    // = AudioFormat(3, "PCM SIGNED 16BIT INTERLEAVED", 2, true, false)
        static AudioFormat /* 24 bytes */ _UPCM16; // = AudioFormat(4, "PCM UNSIGNED 16BIT", 2, false, false)
        static AudioFormat                         /* 24 bytes */
            _UPCM16_INTERLEAVED;                   // = AudioFormat(4, "PCM UNSIGNED 16BIT INTERLEAVED", 2, true, false)
        static AudioFormat /* 24 bytes */ _FLOAT;  // = AudioFormat(5, "FLOATING POINT 32BIT", 4, false, false)
        static AudioFormat                         /* 24 bytes */
            _FLOAT_INTERLEAVED; // = AudioFormat(5, "FLOATING POINT 32BIT INTERLEAVED", 4, true, false)
        static AudioFormat /* 24 bytes */ _VORBIS; // = AudioFormat(6, "VORBIS", 1, false, true)

        // data members, from how the methods use this: 24 bytes
        EntityHighlight** field_0; // offset 0
        int field_8;               // offset 8
        uint field_12;             // offset 12
        undefined4 field_16;       // offset 16
        bool field_20;             // offset 20
        bool field_21;             // offset 21
        char _unknown_22[2];
    };

    // 0x100f482f0, 8 bytes, __data
    AudioFormat const* AudioFormat::FLOAT = &_FLOAT;

    // 0x100f482f8, 8 bytes, __data
    AudioFormat const* AudioFormat::FLOAT_INTERLEAVED = &_FLOAT_INTERLEAVED;

    // 0x100f48300, 8 bytes, __data
    AudioFormat const* AudioFormat::PCM8 = &_PCM8;

    // 0x100f48308, 8 bytes, __data
    AudioFormat const* AudioFormat::PCM8_INTERLEAVED = &_PCM8_INTERLEAVED;

    // 0x100f48310, 8 bytes, __data
    AudioFormat const* AudioFormat::UPCM8 = &_UPCM8;

    // 0x100f48318, 8 bytes, __data
    AudioFormat const* AudioFormat::UPCM8_INTERLEAVED = &_UPCM8_INTERLEAVED;

    // 0x100f48320, 8 bytes, __data
    AudioFormat const* AudioFormat::PCM16 = &_PCM16;

    // 0x100f48328, 8 bytes, __data
    AudioFormat const* AudioFormat::PCM16_INTERLEAVED = &_PCM16_INTERLEAVED;

    // 0x100f48330, 8 bytes, __data
    AudioFormat const* AudioFormat::UPCM16 = &_UPCM16;

    // 0x100f48338, 8 bytes, __data
    AudioFormat const* AudioFormat::UPCM16_INTERLEAVED = &_UPCM16_INTERLEAVED;

    // 0x100f48340, 8 bytes, __data
    AudioFormat const* AudioFormat::INVALID = &_INVALID;

    // 0x100f48348, 8 bytes, __data
    AudioFormat const* AudioFormat::VORBIS = &_VORBIS;

    // 0x103bc2628, 24 bytes, __common; set at startup by ___cxx_global_var_init.33
    AudioFormat AudioFormat::_INVALID = AudioFormat(0, "INVALID", 0, false, false);

    // 0x103bc2640, 24 bytes, __common; set at startup by ___cxx_global_var_init.35
    AudioFormat AudioFormat::_PCM8 = AudioFormat(1, "PCM SIGNED 8BIT", 1, false, false);

    // 0x103bc2658, 24 bytes, __common; set at startup by ___cxx_global_var_init.37
    AudioFormat AudioFormat::_PCM8_INTERLEAVED = AudioFormat(1, "PCM SIGNED 8BIT INTERLEAVED", 1, true, false);

    // 0x103bc2670, 24 bytes, __common; set at startup by ___cxx_global_var_init.39
    AudioFormat AudioFormat::_UPCM8 = AudioFormat(2, "PCM UNSIGNED 8BIT", 1, false, false);

    // 0x103bc2688, 24 bytes, __common; set at startup by ___cxx_global_var_init.41
    AudioFormat AudioFormat::_UPCM8_INTERLEAVED = AudioFormat(2, "PCM UNSIGNED 8BIT INTERLEAVED", 1, true, false);

    // 0x103bc26a0, 24 bytes, __common; set at startup by ___cxx_global_var_init.43
    AudioFormat AudioFormat::_PCM16 = AudioFormat(3, "PCM SIGNED 16BIT", 2, false, false);

    // 0x103bc26b8, 24 bytes, __common; set at startup by ___cxx_global_var_init.45
    AudioFormat AudioFormat::_PCM16_INTERLEAVED = AudioFormat(3, "PCM SIGNED 16BIT INTERLEAVED", 2, true, false);

    // 0x103bc26d0, 24 bytes, __common; set at startup by ___cxx_global_var_init.47
    AudioFormat AudioFormat::_UPCM16 = AudioFormat(4, "PCM UNSIGNED 16BIT", 2, false, false);

    // 0x103bc26e8, 24 bytes, __common; set at startup by ___cxx_global_var_init.49
    AudioFormat AudioFormat::_UPCM16_INTERLEAVED = AudioFormat(4, "PCM UNSIGNED 16BIT INTERLEAVED", 2, true, false);

    // 0x103bc2700, 24 bytes, __common; set at startup by ___cxx_global_var_init.51
    AudioFormat AudioFormat::_FLOAT = AudioFormat(5, "FLOATING POINT 32BIT", 4, false, false);

    // 0x103bc2718, 24 bytes, __common; set at startup by ___cxx_global_var_init.53
    AudioFormat AudioFormat::_FLOAT_INTERLEAVED = AudioFormat(5, "FLOATING POINT 32BIT INTERLEAVED", 4, true, false);

    // 0x103bc2730, 24 bytes, __common; set at startup by ___cxx_global_var_init.55
    AudioFormat AudioFormat::_VORBIS = AudioFormat(6, "VORBIS", 1, false, true);

    // 0x100b8e5c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AudioFormat::AudioFormat(int, char const*, unsigned int, bool, bool): jumps straight to the base-object constructor

    // 0x100b97430, 80 bytes, base-object constructor, inline, placed by class name
    // AudioFormat::AudioFormat(int, char const*, unsigned int, bool, bool)
    void AudioFormat::AudioFormat(int param_1, char* param_2, uint param_3, bool param_4, bool param_5) {
        new (this)
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(param_2, param_2);
        field_8 = param_1;
        field_12 = param_3;
        field_16 = math::Log2Int(param_3);
        field_20 = param_4;
        field_21 = param_5;
    }

    // 0x100ba3760, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.33
    void ___cxx_global_var_init_33() {
        new (&AudioFormat::_INVALID) AudioFormat(0, "INVALID", 0, false, false);
    }

    // 0x100ba3790, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.35
    void ___cxx_global_var_init_35() {
        new (&AudioFormat::_PCM8) AudioFormat(1, "PCM SIGNED 8BIT", 1, false, false);
    }

    // 0x100ba37c0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.37
    void ___cxx_global_var_init_37() {
        new (&AudioFormat::_PCM8_INTERLEAVED) AudioFormat(1, "PCM SIGNED 8BIT INTERLEAVED", 1, true, false);
    }

    // 0x100ba37f0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.39
    void ___cxx_global_var_init_39() {
        new (&AudioFormat::_UPCM8) AudioFormat(2, "PCM UNSIGNED 8BIT", 1, false, false);
    }

    // 0x100ba3820, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.41
    void ___cxx_global_var_init_41() {
        new (&AudioFormat::_UPCM8_INTERLEAVED) AudioFormat(2, "PCM UNSIGNED 8BIT INTERLEAVED", 1, true, false);
    }

    // 0x100ba3850, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.43
    void ___cxx_global_var_init_43() {
        new (&AudioFormat::_PCM16) AudioFormat(3, "PCM SIGNED 16BIT", 2, false, false);
    }

    // 0x100ba3880, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.45
    void ___cxx_global_var_init_45() {
        new (&AudioFormat::_PCM16_INTERLEAVED) AudioFormat(3, "PCM SIGNED 16BIT INTERLEAVED", 2, true, false);
    }

    // 0x100ba38b0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.47
    void ___cxx_global_var_init_47() {
        new (&AudioFormat::_UPCM16) AudioFormat(4, "PCM UNSIGNED 16BIT", 2, false, false);
    }

    // 0x100ba38e0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.49
    void ___cxx_global_var_init_49() {
        new (&AudioFormat::_UPCM16_INTERLEAVED) AudioFormat(4, "PCM UNSIGNED 16BIT INTERLEAVED", 2, true, false);
    }

    // 0x100ba3910, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.51
    void ___cxx_global_var_init_51() {
        new (&AudioFormat::_FLOAT) AudioFormat(5, "FLOATING POINT 32BIT", 4, false, false);
    }

    // 0x100ba3940, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.53
    void ___cxx_global_var_init_53() {
        new (&AudioFormat::_FLOAT_INTERLEAVED) AudioFormat(5, "FLOATING POINT 32BIT INTERLEAVED", 4, true, false);
    }

    // 0x100ba3970, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55() {
        new (&AudioFormat::_VORBIS) AudioFormat(6, "VORBIS", 1, false, true);
    }

} // namespace jag::hal::audio

namespace jag {
    // 0x100b8e7a0, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<hal::audio::AudioBuss>::type make_shared<hal::audio::AudioBuss, hal::audio::BussType, unsigned int const&, int, float, unsigned int const&, bool>(hal::audio::BussType&&, unsigned int const&, int&&, float&&, unsigned int const&, bool&&)
    jag* jag::make_shared<hal::audio::AudioBuss, hal::audio::BussType, unsigned int const&, int, float,
                          unsigned int const&, bool>(BussType* param_1, uint* param_2, int* param_3, float* param_4,
                                                     uint* param_5, bool* param_6) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        AudioBuss* local_40[2];

        pvVar1 = (void*)aligned_alloc(144, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<hal::audio::AudioBuss, hal::audio::BussType, unsigned int const&, int, float,
                                        unsigned int const&, bool>((void*)((long)pvVar1 + 32), param_1, param_2,
                                                                   param_3, param_4, param_5, param_6);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<hal::audio::AudioBuss>, int, hal::audio::AudioBuss*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100b8e930, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<MixerWorker>::type make_shared<MixerWorker>()
    jag* make_shared<MixerWorker>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        MixerWorker* local_28[2];

        pvVar1 = (void*)aligned_alloc(488, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<MixerWorker>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<MixerWorker>, int, MixerWorker*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
