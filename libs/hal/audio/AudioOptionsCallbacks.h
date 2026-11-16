// libs/hal/audio/AudioOptionsCallbacks.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100664350
    uint32_t FastPool_iterator<audio::SoundInstance, int>::operator!=(
        const FastPool_iterator<audio::SoundInstance, int>& fastPool_iterator) const {
        if (*(long*)this != *(long*)fastPool_iterator) {
            LogAssert("m_pPool == other.m_pPool",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 61,
                      nullptr);
        }
        return *(int*)(this + 8) != *(int*)(fastPool_iterator + 8);
    }

    // 0x1006643d0
    void FastPool_iterator<audio::SoundInstance, int>::operator*() const {
        (*(*(FastPool<audio::SoundInstance, int>**)this))[*(int*)(this + 8)];
    }

    // 0x100664520
    void FastPool_iterator<audio::SoundInstance, int>::destroy(audio::SoundInstance* soundInstance) {
        (*(FastPool<audio::SoundInstance, int>**)this)->Destroy(soundInstance);
        *(int*)(this + 8) = *(int*)(this + 8) - 1;
    }

    // 0x100664540
    FastPool_iterator<audio::SoundInstance, int>* FastPool_iterator<audio::SoundInstance, int>::operator++() {
        Increment(this);
        return this;
    }

} // namespace jag

namespace jag::hal::audio {
    class AudioOptionsCallbacks {
    public:
        AudioOptionsCallbacks();
        ~AudioOptionsCallbacks();

        uint8_t _unknown_0[200];
    };

    // 0x100669ae0
    AudioOptionsCallbacks::AudioOptionsCallbacks() : std::function<float()>() {}

    // 0x100669b70
    AudioOptionsCallbacks::~AudioOptionsCallbacks() {
        field_192.~function();
        field_144.~function();
        field_96.~function();
        field_48.~function();
    }

} // namespace jag::hal::audio
