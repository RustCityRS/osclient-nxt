// libs/game/runetek5/audio/SoundManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class SoundManager {
    public:
        class SoundManagerDebugData;
        auto GetDebugData() const;
        void GetAudioAPI();
        void TakeOwnershipOfSoundInstance(audio::SoundInstance* soundInstance);
        bool TestWithinLevel(int arg1) const;
        SoundInstance* ClaimVorbis(void* arg1, SoundType soundType, int arg3, int arg4, int arg5,
                                   hal::audio::BussType bussType, SoundShape soundShape, int arg8, int arg9,
                                   const math::Vector3T<float>& vector3, int arg11, int arg12, int arg13, bool arg14);
        SoundManager(Js5ResourceProvider* js5ResourceProvider, const std::function<void(int)>& callback1,
                     const std::function<bool(EntityCombinedID)>& callback2,
                     const std::function<bool(EntityCombinedID)>& callback3);
        void StartAudio();
        ~SoundManager();
        void StopAudioSystem();
        void MainLogic();
        void Service(float arg1);
        void Restart();
        void SuspendSoundInstancesByResourceId(int arg1);
        void StopJingle();
        void StopSong(bool arg1, float arg2);
        unsigned long PreLoadResource(int arg1, bool arg2);
        bool IsReady() const;
        shared_ptr* LoadResource(int arg1, bool arg2);
        void PlaySong(int arg1, int arg2, bool arg3);
        void PlaySong(audio::SoundInstance* soundInstance);
        void PlayVorbis(SoundType soundType, int arg2, int arg3, int arg4, hal::audio::BussType bussType,
                        SoundShape soundShape, int arg7, int arg8, const math::Vector3T<float>& vector3, int arg10,
                        int arg11, int arg12);
        void PlaySEQSound(Entity* entity, int arg2, int arg3, int arg4, int arg5, hal::audio::BussType bussType,
                          int arg7, const math::Vector3T<float>& vector3, SoundType soundType, unsigned int arg10);
        bool TestWithinRange(const math::Vector3T<float>& vector3, int arg2) const;
        SoundInstance* ClaimSoundInstance(const shared_ptr<audio::SoundResource>& soundResource, void* arg2);
        void UpdateSpatialShapeSphere(audio::SoundInstance* soundInstance);
        void StopAllSoundsOnBuss(hal::audio::BussType bussType);
        void AddMixBuss(hal::audio::BussType bussType1, hal::audio::BussType bussType2, int arg3);
        void SetMixBussGain(hal::audio::BussType bussType, int arg2);
        void AddSoundToGroup(int arg1, audio::SoundInstance* soundInstance, int arg3);
        void StartSoundGroup(int arg1);
        void StopSoundGroup(int arg1);
        void PlayJingle(int arg1, int arg2);
        void Reset();
        void Shutdown();
        void MuteMusic();
        void ResumeMusic();
        void SetVolume(SoundVolumeClass soundVolumeClass, unsigned char arg2);
        bool IsMusicAudible() const;
        void NotifyAudioDeviceArrival();
        int GetNumberOfLoadingSoundResources() const;
        void UpdateDebugData();
        uint8_t GetVolume(SoundVolumeClass soundVolumeClass) const;

    private:
        ReturnValue field_0;
        int field_4;
        ReturnValue field_8;
        ReturnValue field_16;
        int field_20;
        uint8_t _unknown_24[8];
        uint64_t field_32;
        uint8_t _unknown_40[32];
        CoordMapSquare field_72;
        uint8_t _unknown_84[10532];
        Js5ResourceProvider* field_10616;
        uint8_t _unknown_10624[12];
        int field_10636;
        int field_10640;
        int field_10644;
        int field_10648;
        uint8_t field_10652;
        uint8_t _unknown_10653[3];
        SoundInstance* field_10656;
        SoundInstance* field_10664;
        uint8_t _unknown_10672[144];
        unsigned int field_10816;
        uint8_t _unknown_10820[260];
    };

    class SoundManager::SoundManagerDebugData {
    public:
        SoundManagerDebugData();
        void Reset();
    };

    // 0x1004bbad0
    auto SoundManager::GetDebugData() const {
        auto result;

        &result[2] = *(ReturnValue*)&field_16;
        ReturnValue RVar1 = *(ReturnValue*)field_8;
        result = *(ReturnValue*)this;
        &result[1] = RVar1;
        return result;
    }

    // 0x100662c40
    void SoundManager::GetAudioAPI() {
        field_24.get();
    }

    // 0x100662df0
    bool SoundManager::TestWithinLevel(int arg1) const {
        return arg1 == -1 || field_10636 == arg1;
    }

    // 0x100664600
    bool SoundManager::IsReady() const {
        return field_10816 == 1;
    }

    // 0x100665ab0
    bool SoundManager::IsMusicAudible() const {
        bool bVar2 = false;
        char cVar1 = GetVolume(0);
        if (cVar1) {
            cVar1 = GetVolume(4);
            bVar2 = cVar1;
        }
        return bVar2;
    }

    // 0x100669f00
    uint8_t SoundManager::GetVolume(SoundVolumeClass soundVolumeClass) const {
        uint8_t* puVar1 = &field_11072[(long)(int)soundVolumeClass];
        return *puVar1;
    }

    // 0x10066c190
    float SoundManager::SoundManager(Js5ResourceProvider*, std::function<void(int)> const&,
                                     std::function<bool(EntityCombinedID)> const&,
                                     std::function<bool(EntityCombinedID)> const&)::$_0::operator()() const {
        long lVar2 = *(long*)this;
        uint8_t* pbVar3 = (uint8_t*)(*((lVar2 + 11072)))[0];
        uint8_t bVar1 = *pbVar3;
        pbVar3 = (uint8_t*)(*((lVar2 + 11072)))[1];
        return (float)bVar1 * 5.7670136e-06 * (float)*pbVar3;
    }

    // 0x10066cc80
    float SoundManager::SoundManager(Js5ResourceProvider*, std::function<void(int)> const&,
                                     std::function<bool(EntityCombinedID)> const&,
                                     std::function<bool(EntityCombinedID)> const&)::$_1::operator()() const {
        long lVar2 = *(long*)this;
        uint8_t* pbVar3 = (uint8_t*)(*((lVar2 + 11072)))[0];
        uint8_t bVar1 = *pbVar3;
        pbVar3 = (uint8_t*)(*((lVar2 + 11072)))[3];
        return (float)bVar1 * 5.7670136e-06 * (float)*pbVar3;
    }

    // 0x10066d5d0
    float SoundManager::SoundManager(Js5ResourceProvider*, std::function<void(int)> const&,
                                     std::function<bool(EntityCombinedID)> const&,
                                     std::function<bool(EntityCombinedID)> const&)::$_2::operator()() const {
        long lVar2 = *(long*)this;
        uint8_t* pbVar3 = (uint8_t*)(*((lVar2 + 11072)))[0];
        uint8_t bVar1 = *pbVar3;
        pbVar3 = (uint8_t*)(*((lVar2 + 11072)))[4];
        return (float)bVar1 * 5.7670136e-06 * (float)*pbVar3;
    }

    // 0x10066df20
    float SoundManager::SoundManager(Js5ResourceProvider*, std::function<void(int)> const&,
                                     std::function<bool(EntityCombinedID)> const&,
                                     std::function<bool(EntityCombinedID)> const&)::$_3::operator()() const {
        long lVar2 = *(long*)this;
        uint8_t* pbVar3 = (uint8_t*)(*((lVar2 + 11072)))[0];
        uint8_t bVar1 = *pbVar3;
        pbVar3 = (uint8_t*)(*((lVar2 + 11072)))[2];
        return (float)bVar1 * 5.7670136e-06 * (float)*pbVar3;
    }

    // 0x10066e870
    float SoundManager::SoundManager(Js5ResourceProvider*, std::function<void(int)> const&,
                                     std::function<bool(EntityCombinedID)> const&,
                                     std::function<bool(EntityCombinedID)> const&)::$_4::operator()() const {
        long lVar2 = *(long*)this;
        uint8_t* pbVar3 = (uint8_t*)(*((lVar2 + 11072)))[0];
        uint8_t bVar1 = *pbVar3;
        pbVar3 = (uint8_t*)(*((lVar2 + 11072)))[5];
        return (float)bVar1 * 5.7670136e-06 * (float)*pbVar3;
    }

} // namespace jag::game
