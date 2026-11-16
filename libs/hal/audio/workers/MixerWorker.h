// libs/hal/audio/workers/MixerWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

class MixerWorker {
public:
    // virtual methods in vtable order
    virtual void OnInterval(float arg1, unsigned long long arg2);
    void Init(jag::hal::audio::AudioAPI* audioAPI);
    MixerWorker();
};
