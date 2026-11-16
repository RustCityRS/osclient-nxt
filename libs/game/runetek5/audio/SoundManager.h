// libs/game/runetek5/audio/SoundManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class SoundManager {
    public:
        class SoundManagerDebugData;
        GetDebugData() const;
        void GetAudioAPI();
        void TakeOwnershipOfSoundInstance(audio::SoundInstance*);
        bool TestWithinLevel(int) const;
        SoundInstance* ClaimVorbis(void*, SoundType, int, int, int, hal::audio::BussType, SoundShape, int, int,
                                   math::Vector3T<float> const&, int, int, int, bool);
        SoundManager(Js5ResourceProvider*, std::function<void(int)> const&,
                     std::function<bool(EntityCombinedID)> const&, std::function<bool(EntityCombinedID)> const&);
        void StartAudio();
        ~SoundManager();
        void StopAudioSystem();
        void MainLogic();
        void Service(float);
        void Restart();
        void SuspendSoundInstancesByResourceId(int);
        void StopJingle();
        void StopSong(bool, float);
        ulong PreLoadResource(int, bool);
        bool IsReady() const;
        shared_ptr* LoadResource(int, bool);
        void PlaySong(int, int, bool);
        void PlaySong(audio::SoundInstance*);
        void PlayVorbis(SoundType, int, int, int, hal::audio::BussType, SoundShape, int, int,
                        math::Vector3T<float> const&, int, int, int);
        void PlaySEQSound(Entity*, int, int, int, int, hal::audio::BussType, int, math::Vector3T<float> const&,
                          SoundType, unsigned int);
        bool TestWithinRange(math::Vector3T<float> const&, int) const;
        SoundInstance* ClaimSoundInstance(shared_ptr<audio::SoundResource> const&, void*);
        void UpdateSpatialShapeSphere(audio::SoundInstance*);
        void StopAllSoundsOnBuss(hal::audio::BussType);
        void AddMixBuss(hal::audio::BussType, hal::audio::BussType, int);
        void SetMixBussGain(hal::audio::BussType, int);
        void AddSoundToGroup(int, audio::SoundInstance*, int);
        void StartSoundGroup(int);
        void StopSoundGroup(int);
        void PlayJingle(int, int);
        void Reset();
        void Shutdown();
        void MuteMusic();
        void ResumeMusic();
        void SetVolume(SoundVolumeClass, unsigned char);
        bool IsMusicAudible() const;
        void NotifyAudioDeviceArrival();
        int GetNumberOfLoadingSoundResources() const;
        void UpdateDebugData();
        GetVolume(SoundVolumeClass) const;

        // data members, from how the methods use this: 11080 bytes
        undefined4 field_0;  // offset 0
        int field_4;         // offset 4
        int field_8;         // offset 8
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
        int field_20;        // offset 20
        char _unknown_24[8];
        undefined8 field_32; // offset 32
        char _unknown_40[32];
        CoordMapSquare field_72; // offset 72
        char _unknown_84[10532];
        Js5ResourceProvider* field_10616; // offset 10616
        char _unknown_10624[12];
        int field_10636;        // offset 10636
        int field_10640;        // offset 10640
        int field_10644;        // offset 10644
        int field_10648;        // offset 10648
        undefined1 field_10652; // offset 10652
        char _unknown_10653[3];
        SoundInstance* field_10656; // offset 10656
        SoundInstance* field_10664; // offset 10664
        char _unknown_10672[144];
        uint field_10816; // offset 10816
        char _unknown_10820[260];
    };

    class SoundManager::SoundManagerDebugData {
    public:
        SoundManagerDebugData();
        Reset();
    };

    // 0x1004bbad0, 32 bytes, inline, placed by class name and debug map
    // SoundManager::GetDebugData() const
    SoundManager* SoundManager::GetDebugData() {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8* in_RSI;

        uVar1 = in_RSI[2];
        field_16 = (int)uVar1;
        field_20 = (int)((ulong)uVar1 >> 32);
        uVar1 = *in_RSI;
        uVar2 = in_RSI[1];
        field_0 = (int)uVar1;
        field_4 = (int)((ulong)uVar1 >> 32);
        field_8 = (int)uVar2;
        field_12 = (int)((ulong)uVar2 >> 32);
        return this;
    }

    // 0x100662c40, 16 bytes, inline, placed by class name
    // SoundManager::GetAudioAPI()
    void SoundManager::GetAudioAPI() {
        (&field_24)->get();
    }

    // 0x100662df0, 32 bytes, inline, placed by class name
    // SoundManager::TestWithinLevel(int) const
    bool SoundManager::TestWithinLevel(int param_1) {
        return param_1 == -1 || field_10636 == param_1;
    }

    // 0x100664600, 16 bytes, inline, placed by class name
    // SoundManager::IsReady() const
    bool SoundManager::IsReady() {
        return field_10816 == 1;
    }

    // 0x100665ab0, 64 bytes, inline, placed by class name
    // SoundManager::IsMusicAudible() const
    bool SoundManager::IsMusicAudible() {
        char cVar1;
        bool bVar2;

        bVar2 = false;
        cVar1 = GetVolume(this, 0);
        if (cVar1 != '\0') {
            cVar1 = GetVolume(this, 4);
            bVar2 = cVar1 != '\0';
        }
        return bVar2;
    }

    // 0x100669f00, 32 bytes, inline, placed by class name
    // SoundManager::GetVolume(SoundVolumeClass) const
    undefined1 SoundManager::GetVolume(int param_2) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<unsigned char, 6ul>::operator[]((array<unsigned char, 6ul>*)&field_11072,
                                                                         (long)param_2);
        return *puVar1;
    }

    // 0x10066c190, 80 bytes, inline, placed by class name
    // SoundManager::SoundManager(Js5ResourceProvider*, std::function<void (int)> const&, std::function<bool (EntityCombinedID)> const&, std::function<bool (EntityCombinedID)> const&)::$_0::operator()() const
    /* SoundManager::SoundManager(Js5ResourceProvider*, std::function<void (int)>
   const&, std::function<bool (EntityCombinedID)> const&, std::function<bool
   (EntityCombinedID)> const&)::$_0::TEMPNAMEPLACEHOLDERVALUE() const */

    float SoundManager::SoundManager(Js5ResourceProvider*, std::function<void(int)> const&,
                                     std::function<bool(EntityCombinedID)> const&,
                                     std::function<bool(EntityCombinedID)> const&)::$_0::operator()() {
        byte bVar1;
        long lVar2;
        byte* pbVar3;

        lVar2 = *(long*)this;
        pbVar3 = (byte*)std::array<unsigned char, 6ul>::operator[]((array<unsigned char, 6ul>*)(lVar2 + 11072), 0);
        bVar1 = *pbVar3;
        pbVar3 = (byte*)std::array<unsigned char, 6ul>::operator[]((array<unsigned char, 6ul>*)(lVar2 + 11072), 1);
        return (float)bVar1 * 5.7670136e-06 * (float)*pbVar3;
    }

    // 0x10066cc80, 80 bytes, inline, placed by class name
    // SoundManager::SoundManager(Js5ResourceProvider*, std::function<void (int)> const&, std::function<bool (EntityCombinedID)> const&, std::function<bool (EntityCombinedID)> const&)::$_1::operator()() const
    /* SoundManager::SoundManager(Js5ResourceProvider*, std::function<void (int)>
   const&, std::function<bool (EntityCombinedID)> const&, std::function<bool
   (EntityCombinedID)> const&)::$_1::TEMPNAMEPLACEHOLDERVALUE() const */

    float SoundManager::SoundManager(Js5ResourceProvider*, std::function<void(int)> const&,
                                     std::function<bool(EntityCombinedID)> const&,
                                     std::function<bool(EntityCombinedID)> const&)::$_1::operator()() {
        byte bVar1;
        long lVar2;
        byte* pbVar3;

        lVar2 = *(long*)this;
        pbVar3 = (byte*)std::array<unsigned char, 6ul>::operator[]((array<unsigned char, 6ul>*)(lVar2 + 11072), 0);
        bVar1 = *pbVar3;
        pbVar3 = (byte*)std::array<unsigned char, 6ul>::operator[]((array<unsigned char, 6ul>*)(lVar2 + 11072), 3);
        return (float)bVar1 * 5.7670136e-06 * (float)*pbVar3;
    }

    // 0x10066d5d0, 80 bytes, inline, placed by class name
    // SoundManager::SoundManager(Js5ResourceProvider*, std::function<void (int)> const&, std::function<bool (EntityCombinedID)> const&, std::function<bool (EntityCombinedID)> const&)::$_2::operator()() const
    /* SoundManager::SoundManager(Js5ResourceProvider*, std::function<void (int)>
   const&, std::function<bool (EntityCombinedID)> const&, std::function<bool
   (EntityCombinedID)> const&)::$_2::TEMPNAMEPLACEHOLDERVALUE() const */

    float SoundManager::SoundManager(Js5ResourceProvider*, std::function<void(int)> const&,
                                     std::function<bool(EntityCombinedID)> const&,
                                     std::function<bool(EntityCombinedID)> const&)::$_2::operator()() {
        byte bVar1;
        long lVar2;
        byte* pbVar3;

        lVar2 = *(long*)this;
        pbVar3 = (byte*)std::array<unsigned char, 6ul>::operator[]((array<unsigned char, 6ul>*)(lVar2 + 11072), 0);
        bVar1 = *pbVar3;
        pbVar3 = (byte*)std::array<unsigned char, 6ul>::operator[]((array<unsigned char, 6ul>*)(lVar2 + 11072), 4);
        return (float)bVar1 * 5.7670136e-06 * (float)*pbVar3;
    }

    // 0x10066df20, 80 bytes, inline, placed by class name
    // SoundManager::SoundManager(Js5ResourceProvider*, std::function<void (int)> const&, std::function<bool (EntityCombinedID)> const&, std::function<bool (EntityCombinedID)> const&)::$_3::operator()() const
    /* SoundManager::SoundManager(Js5ResourceProvider*, std::function<void (int)>
   const&, std::function<bool (EntityCombinedID)> const&, std::function<bool
   (EntityCombinedID)> const&)::$_3::TEMPNAMEPLACEHOLDERVALUE() const */

    float SoundManager::SoundManager(Js5ResourceProvider*, std::function<void(int)> const&,
                                     std::function<bool(EntityCombinedID)> const&,
                                     std::function<bool(EntityCombinedID)> const&)::$_3::operator()() {
        byte bVar1;
        long lVar2;
        byte* pbVar3;

        lVar2 = *(long*)this;
        pbVar3 = (byte*)std::array<unsigned char, 6ul>::operator[]((array<unsigned char, 6ul>*)(lVar2 + 11072), 0);
        bVar1 = *pbVar3;
        pbVar3 = (byte*)std::array<unsigned char, 6ul>::operator[]((array<unsigned char, 6ul>*)(lVar2 + 11072), 2);
        return (float)bVar1 * 5.7670136e-06 * (float)*pbVar3;
    }

    // 0x10066e870, 80 bytes, inline, placed by class name
    // SoundManager::SoundManager(Js5ResourceProvider*, std::function<void (int)> const&, std::function<bool (EntityCombinedID)> const&, std::function<bool (EntityCombinedID)> const&)::$_4::operator()() const
    /* SoundManager::SoundManager(Js5ResourceProvider*, std::function<void (int)>
   const&, std::function<bool (EntityCombinedID)> const&, std::function<bool
   (EntityCombinedID)> const&)::$_4::TEMPNAMEPLACEHOLDERVALUE() const */

    float SoundManager::SoundManager(Js5ResourceProvider*, std::function<void(int)> const&,
                                     std::function<bool(EntityCombinedID)> const&,
                                     std::function<bool(EntityCombinedID)> const&)::$_4::operator()() {
        byte bVar1;
        long lVar2;
        byte* pbVar3;

        lVar2 = *(long*)this;
        pbVar3 = (byte*)std::array<unsigned char, 6ul>::operator[]((array<unsigned char, 6ul>*)(lVar2 + 11072), 0);
        bVar1 = *pbVar3;
        pbVar3 = (byte*)std::array<unsigned char, 6ul>::operator[]((array<unsigned char, 6ul>*)(lVar2 + 11072), 5);
        return (float)bVar1 * 5.7670136e-06 * (float)*pbVar3;
    }

} // namespace jag::game
