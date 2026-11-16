// libs/hal/audio/AudioSend.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::hal::audio {
    class AudioSend {
    public:
        GetDestinationBuss() const;
        ~AudioSend();
        Resume();
        uint Mix(AudioBuffer*, bool);
        void Free();
        AudioSend(VoiceInstance&);
        void SetMasterBuss(shared_ptr<AudioBuss> const&);
        void SetDestinationBuss(shared_ptr<AudioBuss> const&);
        void Pause();

        // data members, from how the methods use this: 41 bytes
        char _unknown_0[8];
        long field_8;            // offset 8
        shared_ptr field_16;     // offset 16
        VoiceInstance* field_32; // offset 32
        undefined1 field_40;     // offset 40
    };

    // 0x100b901c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AudioSend::AudioSend(VoiceInstance&): jumps straight to the base-object constructor

    // 0x100b90230, 16 bytes, inline, placed by class name and debug map
    // AudioSend::SetMasterBuss(shared_ptr<AudioBuss> const&)
    void AudioSend::SetMasterBuss(shared_ptr* param_1) {
        shared_ptr<AudioBuss>::operator=((shared_ptr<AudioBuss>*)field_16, param_1);
    }

    // 0x100b90240, 16 bytes, inline, placed by class name and debug map
    // AudioSend::SetDestinationBuss(shared_ptr<AudioBuss> const&)
    void AudioSend::SetDestinationBuss(shared_ptr* param_1) {
        shared_ptr<AudioBuss>::operator=((shared_ptr<AudioBuss>*)this, param_1);
    }

    // 0x100b90e50, 16 bytes, inline, placed by class name and debug map
    // AudioSend::Pause()
    void AudioSend::Pause() {
        field_40 = 1;
    }

    // 0x100b97c10, 64 bytes, base-object constructor, inline, placed by class name
    // AudioSend::AudioSend(VoiceInstance&)
    void AudioSend::AudioSend(VoiceInstance* param_1) {
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        new (field_16, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_32 = param_1;
        field_40 = 0;
    }

} // namespace jag::hal::audio

namespace jag {
    // 0x100b90a80, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<hal::audio::AudioBufferHandler>::type make_shared<hal::audio::AudioBufferHandler, unsigned int&, shared_ptr<hal::audio::AudioBuffer>&>(unsigned int&, shared_ptr<hal::audio::AudioBuffer>&)
    jag* jag::make_shared<hal::audio::AudioBufferHandler, unsigned int&, shared_ptr<hal::audio::AudioBuffer>&>(
        uint* param_1, shared_ptr* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        AudioBufferHandler* local_38[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<hal::audio::AudioBufferHandler, unsigned int&, shared_ptr<hal::audio::AudioBuffer>&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<hal::audio::AudioBufferHandler>, int,
                                   hal::audio::AudioBufferHandler*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag
