// libs/game/runetek5/audio/MiniSoundManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class MiniSoundManager : public graphics::particlemodules::Module // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~MiniSoundManager();
        virtual void AddSound(int, int, SoundShape, int, int, math::Vector3T<float> const&, int, hal::audio::BussType,
                              SoundType, int, unsigned int);
        virtual void CleanUpAudio();
        virtual AllowAudio() const;
        virtual UpdateAudio();
        virtual GetSoundPosition() const;
        bool HasSoundInstance(int) const;
        MiniSoundManager();
        void ProcessSoundInstances();
        GetSoundInstance(int) const;
        ulong HasSoundInstance(SoundType) const;
        void StopSounds(SoundType, float);

        // data members, from how the methods use this: 16 bytes, the first 8 are Module
        char _unknown_8[8];
    };

    // 0x100449510, 32 bytes, inline, placed by class name and debug map
    // MiniSoundManager::HasSoundInstance(int) const
    bool MiniSoundManager::HasSoundInstance(int param_1) {
        return GetSoundInstance(this, param_1) != 0;
    }

    // 0x1006699a0, 16 bytes, inline, placed by class name
    // MiniSoundManager::GetSoundPosition() const
    undefined* MiniSoundManager::GetSoundPosition() {
        return PTR_ZERO_100ee66e8;
    }

} // namespace jag::game
