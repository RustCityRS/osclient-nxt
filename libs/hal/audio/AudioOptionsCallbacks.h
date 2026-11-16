// libs/hal/audio/AudioOptionsCallbacks.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::hal::audio {
    class AudioOptionsCallbacks {
    public:
        AudioOptionsCallbacks();
        ~AudioOptionsCallbacks();

        // data members, from how the methods use this: 200 bytes
        char _unknown_0[200];
    };

    // 0x100663760, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AudioOptionsCallbacks::AudioOptionsCallbacks(): jumps straight to the base-object constructor

    // 0x1006639d0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // AudioOptionsCallbacks::~AudioOptionsCallbacks(): jumps straight to the base-object destructor

    // 0x100669ae0, 80 bytes, base-object constructor, inline, placed by class name
    // AudioOptionsCallbacks::AudioOptionsCallbacks()
    void AudioOptionsCallbacks::AudioOptionsCallbacks() {
        std::function<float()>::function((function<float()>*)this);
        std::function<float()>::function((function<float()>*)&field_48);
        std::function<float()>::function((function<float()>*)&field_96);
        std::function<float()>::function((function<float()>*)&field_144);
        std::function<float()>::function((function<float()>*)&field_192);
    }

    // 0x100669b70, 80 bytes, base-object destructor, inline, placed by class name
    // AudioOptionsCallbacks::~AudioOptionsCallbacks()
    void AudioOptionsCallbacks::~AudioOptionsCallbacks() {
        std::function<float()>::~function((function<float()>*)&field_192);
        std::function<float()>::~function((function<float()>*)&field_144);
        std::function<float()>::~function((function<float()>*)&field_96);
        std::function<float()>::~function((function<float()>*)&field_48);
        std::function<float()>::~function((function<float()>*)this);
    }

} // namespace jag::hal::audio

namespace jag {
    // 0x100664350, 80 bytes, inline, placed by debug map only (low confidence)
    // FastPool_iterator<audio::SoundInstance, int>::operator!=(FastPool_iterator<audio::SoundInstance, int> const&) const
    /* FastPool_iterator<audio::SoundInstance,
   int>::TEMPNAMEPLACEHOLDERVALUE(FastPool_iterator<audio::SoundInstance, int> const&)
   const */

    undefined4
    FastPool_iterator<audio::SoundInstance, int>::operator!=(FastPool_iterator<audio::SoundInstance, int>* this,
                                                             FastPool_iterator* param_1) {
        if (*(long*)this != *(long*)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pPool == other.m_pPool",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 61,
                      (char*)0);
        }
        return CONCAT31((int3)((uint) * (int*)(this + 8) >> 8), *(int*)(this + 8) != *(int*)(param_1 + 8));
    }

    // 0x1006643d0, 32 bytes, inline, placed by debug map only (low confidence)
    // FastPool_iterator<audio::SoundInstance, int>::operator*() const
    /* FastPool_iterator<audio::SoundInstance, int>::TEMPNAMEPLACEHOLDERVALUE() const */

    void FastPool_iterator<audio::SoundInstance, int>::operator*(FastPool_iterator<audio::SoundInstance, int>* this) {
        FastPool<audio::SoundInstance, int>::operator[](*(FastPool<audio::SoundInstance, int>**)this,
                                                        *(int*)(this + 8));
    }

    // 0x100664520, 32 bytes, inline, placed by debug map only (low confidence)
    // FastPool_iterator<audio::SoundInstance, int>::destroy(audio::SoundInstance*)
    void FastPool_iterator<audio::SoundInstance, int>::destroy(FastPool_iterator<audio::SoundInstance, int>* this,
                                                               SoundInstance* param_1) {
        (*(FastPool<audio::SoundInstance, int>**)this)->Destroy(param_1);
        *(int*)(this + 8) = *(int*)(this + 8) + -1;
    }

    // 0x100664540, 32 bytes, inline, placed by debug map only (low confidence)
    // FastPool_iterator<audio::SoundInstance, int>::operator++()
    /* FastPool_iterator<audio::SoundInstance, int>::TEMPNAMEPLACEHOLDERVALUE() */

    FastPool_iterator<audio::SoundInstance, int>*
    FastPool_iterator<audio::SoundInstance, int>::operator++(FastPool_iterator<audio::SoundInstance, int>* this) {
        Increment(this);
        return this;
    }

} // namespace jag
