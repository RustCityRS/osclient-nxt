// libs/game/runetek5/audio/MiniSoundManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class MiniSoundManager : public graphics::particlemodules::Module // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~MiniSoundManager();
        virtual void AddSound(int arg1, int arg2, SoundShape soundShape, int arg4, int arg5,
                              const math::Vector3T<float>& vector3, int arg7, hal::audio::BussType bussType,
                              SoundType soundType, int arg10, unsigned int arg11);
        virtual void CleanUpAudio();
        virtual uint8_t AllowAudio() const;
        virtual uint64_t UpdateAudio();
        virtual uint8_t* GetSoundPosition() const;
        bool HasSoundInstance(int arg1) const;
        MiniSoundManager();
        void ProcessSoundInstances();
        SoundInstance* GetSoundInstance(int arg1) const;
        unsigned long HasSoundInstance(SoundType soundType) const;
        void StopSounds(SoundType soundType, float arg2);

    private:
        uint8_t _unknown_8[8];
    };

    // 0x100449510
    bool MiniSoundManager::HasSoundInstance(int arg1) const {
        return GetSoundInstance(arg1) != nullptr;
    }

    // 0x1006699a0
    uint8_t* MiniSoundManager::GetSoundPosition() const {
        return PTR_ZERO_100ee66e8;
    }

} // namespace jag::game
