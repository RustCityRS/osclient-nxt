// libs/hal/audio/workers/MixerWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

class MixerWorker {
public:
    // virtual methods in vtable order
    virtual void OnInterval(float, unsigned long long);
    void Init(jag::hal::audio::AudioAPI*);
    MixerWorker();
};
