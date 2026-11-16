// libs/hal/audio/AudioAPI.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::hal::audio {
    class AudioAPI {
    public:
        GetRenderer() const;
        AudioAPI();
        ~AudioAPI();
        void IsRendererValid() const;
        StartAudioSystem(AudioSystemStartParams const&, AudioOptionsCallbacks const*);
        ulong ConfigureRoutingArchitecture(AudioOptionsCallbacks const&);
        void StopAudioSystem();
        RestartAudioSystem(AudioOptionsCallbacks const*);
        GetDecoder(AudioFormat const*);
        void FreeDecoder(decoders::AudioDecoder*);
        ActiveDecoderCount();
        void ServiceAudio(float);
        void AddMixBuss(BussType, unsigned int, unsigned int, float, BussType, std::function<float()> const&);
        GetMixBuss(BussType);
        GetMixBussTotalGain(BussType);
        IsMixBussInChain(BussType, BussType);
        void VerifyDefaultAudioDevice();

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        long field_8; // offset 8
        char _unknown_16[8];
    };

    // 0x1001e0c20, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AudioAPI::AudioAPI(): jumps straight to the base-object constructor

    // 0x1001e0c40, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // AudioAPI::AudioAPI()
    void AudioAPI::AudioAPI() {
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        new (&field_16, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1001e0d50, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // AudioAPI::~AudioAPI(): jumps straight to the base-object destructor

    // 0x1001e0d60, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // AudioAPI::~AudioAPI()
    /* game::ActiveComponent::~ActiveComponent() */

    void game::ActiveComponent::~ActiveComponent() {
        (&field_16)->~shared_ptr();
        ~shared_ptr();
    }

    // 0x100665fb0, 16 bytes, inline, placed by class name
    // AudioAPI::IsRendererValid() const
    void AudioAPI::IsRendererValid() {
        operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
    }

} // namespace jag::hal::audio

namespace jag::game {
    // 0x1001e0d50: the linker folded this into hal::audio::AudioAPI::~AudioAPI(), which has identical code
    AssetWorkerJob::~AssetWorkerJob();

    // 0x1001e0d50: the linker folded this into hal::audio::AudioAPI::~AudioAPI(), which has identical code
    AnimatedModelPair::~AnimatedModelPair();

    // 0x1001e0d60: the linker folded this into hal::audio::AudioAPI::~AudioAPI(), which has identical code
    AssetWorkerJob::~AssetWorkerJob();

    // 0x1001e0d60: the linker folded this into hal::audio::AudioAPI::~AudioAPI(), which has identical code
    AnimatedModelPair::~AnimatedModelPair();

} // namespace jag::game
