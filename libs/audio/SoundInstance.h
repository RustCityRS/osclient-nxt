// libs/audio/SoundInstance.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::audio {
    class SoundInstance {
    public:
        // virtual methods in vtable order
        virtual ~SoundInstance();
        SetOwner(void*);
        GetLevel() const;
        float GetSoundSpatialSizeMax() const;
        void SetLevel(int);
        int GetSoundShape() const;
        int GetSoundType() const;
        bool IsAudible() const;
        float GetSoundSpatialSizeMin() const;
        void FlagFinished();
        bool IsLoading() const;
        IsFinished() const;
        bool IsSoundShape3d() const;
        void SetPosition(math::Vector3T<float> const&);
        IsAnimationSound() const;
        void GetResource() const;
        bool IsFree() const;
        bool IsOwnedBy(void*) const;
        void SetStartDelay(int, bool);
        void SetSoundType(game::SoundType);
        GetBussID() const;
        void SetOriginalGain(float);
        void SetLoopCount(int);
        void SetSoundSpatialSize(float, float);
        SetBussID(hal::audio::BussType);
        void SetSoundShape(game::SoundShape);
        void SetRate(unsigned int);
        bool IsSoundShapeSphere() const;
        void SetSpatialCallback(std::function<void(SoundInstance*)> const&);
        GetPosition() const;
        void SetGain(float);
        void SetPan(float);
        void SetGroupID(int);
        int GetGroupID() const;
        bool IsPlaying() const;
        SoundInstance();
        void Claim(shared_ptr<SoundResource> const&);
        void Free();
        void Update(float, shared_ptr<hal::audio::AudioRenderer> const&);
        void Start();
        void UpdatePreSendControls(float);
        void Suspend(float);
        void StartDelayCount();
        void SetPreSendGain(float, float);
        void FadeIn(float, float, float);
        void SetPreSendGain(float);
        void ProcessDelayedStart();
        void Pause();
        void Resume();
        bool IsAudibleInBussChain(hal::audio::AudioAPI*) const;

        // data members, from how the methods use this: 196 bytes
        undefined* field_0;  // offset 0, vtable pointer
        void* field_8;       // offset 8
        undefined1 field_16; // offset 16
        char _unknown_17[3];
        uint field_20;               // offset 20
        shared_ptr field_24;         // offset 24
        VoiceInstance* field_40;     // offset 40
        int m_loopCount;             // offset 48
        float field_52;              // offset 52
        float field_56;              // offset 56
        float m_preSendGain;         // offset 60
        float field_64;              // offset 64
        float field_68;              // offset 68
        float field_72;              // offset 72
        float field_76;              // offset 76
        float field_80;              // offset 80
        float m_soundSpatialSizeMin; // offset 84
        float m_soundSpatialSizeMax; // offset 88
        undefined8 m_position;       // offset 92
        char _unknown_100[4];
        int m_level; // offset 104
        char _unknown_108[52];
        undefined4 m_bussID; // offset 160
        int m_startDelay;    // offset 164
        bool field_168;      // offset 168
        char _unknown_169[3];
        int m_groupID;        // offset 172
        int m_soundShape;     // offset 176
        int m_soundType;      // offset 180
        undefined1 field_184; // offset 184
        char _unknown_185[3];
        uint m_rate; // offset 188
        char _unknown_192[4];
    };

    // 0x10042c410, 32 bytes, inline, placed by class name and debug map
    // SoundInstance::IsAudible() const
    bool SoundInstance::IsAudible() {
        return 0.0 < field_76 * field_52;
    }

    // 0x100524c80, 16 bytes, inline, placed by class name
    // SoundInstance::FlagFinished()
    void SoundInstance::FlagFinished() {
        field_20 = 7;
    }

    // 0x100524cf0, 16 bytes, inline, placed by class name
    // SoundInstance::IsLoading() const
    bool SoundInstance::IsLoading() {
        return field_20 == 2;
    }

    // 0x100662d30, 32 bytes, inline, placed by class name
    // SoundInstance::IsFinished() const
    undefined4 SoundInstance::IsFinished() {
        uint uVar1;

        uVar1 = field_20 & 4294967294;
        return CONCAT31((int3)(uVar1 >> 8), uVar1 == 6);
    }

    // 0x100662e10, 16 bytes, inline, placed by class name
    // SoundInstance::IsSoundShape3d() const
    bool SoundInstance::IsSoundShape3d() {
        return m_soundShape != 4;
    }

    // 0x100662e20, 80 bytes, inline, placed by class name
    // SoundInstance::SetPosition(math::Vector3T<float> const&)
    void SoundInstance::SetPosition(Vector3T* param_1) {
        float fVar1;
        vector* pvVar2;
        float* pfVar3;

        pvVar2 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar2;
        pfVar3 = (float*)param_1->second();
        (&m_position, fVar1, 0.0, *pfVar3)->Set();
    }

    // 0x100662ef0, 48 bytes, inline, placed by class name
    // SoundInstance::IsAnimationSound() const
    undefined4 SoundInstance::IsAnimationSound() {
        uint uVar1;

        uVar1 = m_soundType - 3;
        return CONCAT31((int3)(uVar1 >> 8), (2079U >> (uVar1 & 31) & 1) != 0 && uVar1 < 12);
    }

    // 0x1006632f0, 16 bytes, inline, placed by class name
    // SoundInstance::GetResource() const
    void SoundInstance::GetResource() {
        field_24->end();
    }

    // 0x1006643f0, 16 bytes, inline, placed by class name
    // SoundInstance::IsFree() const
    bool SoundInstance::IsFree() {
        return field_20 < 2;
    }

    // 0x100664400, 16 bytes, inline, placed by class name
    // SoundInstance::IsOwnedBy(void*) const
    bool SoundInstance::IsOwnedBy(void* param_1) {
        return field_8 == param_1;
    }

    // 0x100664b80, 32 bytes, inline, placed by class name
    // SoundInstance::SetStartDelay(int, bool)
    void SoundInstance::SetStartDelay(int param_1, bool param_2) {
        m_startDelay = param_1;
        field_168 = param_2;
    }

    // 0x100664c80, 16 bytes, inline, placed by class name
    // SoundInstance::SetSoundType(game::SoundType)
    void SoundInstance::SetSoundType(int param_2) {
        m_soundType = param_2;
    }

    // 0x100664ca0, 16 bytes, inline, placed by class name
    // SoundInstance::GetBussID() const
    undefined4 SoundInstance::GetBussID() {
        return m_bussID;
    }

    // 0x100664ff0, 112 bytes, inline, placed by class name
    // SoundInstance::SetOriginalGain(float)
    void SoundInstance::SetOriginalGain(float param_1) {
        float fVar1;
        float local_1c;
        float local_18;
        float local_14;

        local_1c = param_1;
        if (field_16 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_started",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/audio/SoundInstance.h", 97,
                      "OriginalGain should be set before starting the SoundInstance.");
        }
        local_18 = 0.0;
        local_14 = 1.0;
        fVar1 = math::Clamp<float>(&local_1c, &local_18, &local_14);
        field_72 = fVar1;
        field_76 = fVar1;
    }

    // 0x100665060, 64 bytes, inline, placed by class name
    // SoundInstance::SetLoopCount(int)
    void SoundInstance::SetLoopCount(int param_1) {
        if (field_16 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_started",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/audio/SoundInstance.h", 87,
                      "AUDIO WARNING: Setting loop count after sound has started has no effect.");
        }
        m_loopCount = param_1;
    }

    // 0x1006650a0, 16 bytes, inline, placed by class name
    // SoundInstance::SetSoundSpatialSize(float, float)
    void SoundInstance::SetSoundSpatialSize(float param_1, float param_2) {
        m_soundSpatialSizeMin = param_1;
        m_soundSpatialSizeMax = param_2;
    }

    // 0x1006650b0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SoundInstance::SetBussID(hal::audio::BussType)
    /* game::GWCWorld::SetPlayers(int) */

    void game::GWCWorld::SetPlayers(int param_1) {
        m_players = param_1;
    }

    // 0x1006650c0, 16 bytes, inline, placed by class name
    // SoundInstance::SetSoundShape(game::SoundShape)
    void SoundInstance::SetSoundShape(int param_2) {
        m_soundShape = param_2;
    }

    // 0x1006650d0, 16 bytes, inline, placed by class name
    // SoundInstance::SetRate(unsigned int)
    void SoundInstance::SetRate(uint param_1) {
        m_rate = param_1;
    }

    // 0x1006650e0, 32 bytes, inline, placed by class name
    // SoundInstance::IsSoundShapeSphere() const
    bool SoundInstance::IsSoundShapeSphere() {
        return (m_soundShape & 4294967293U) == 0;
    }

    // 0x100665100, 16 bytes, inline, placed by class name
    // SoundInstance::SetSpatialCallback(std::function<void (SoundInstance*)> const&)
    /* SoundInstance::SetSpatialCallback(std::function<void (SoundInstance*)>
   const&) */

    void SoundInstance::SetSpatialCallback(function* param_1) {
        std::function<void(SoundInstance*)>::operator=((function<void(SoundInstance*)>*)&field_112, param_1);
    }

    // 0x100665350, 16 bytes, inline, placed by class name
    // SoundInstance::GetPosition() const
    undefined8 SoundInstance::GetPosition() {
        return m_position;
    }

    // 0x100665360, 80 bytes, inline, placed by class name
    // SoundInstance::SetGain(float)
    void SoundInstance::SetGain(float param_1) {
        float local_20;
        float local_1c;
        float local_18;
        float local_14;

        local_14 = field_72;
        local_1c = 0.0;
        local_18 = 1.0;
        local_20 = param_1;
        field_76 = math::Clamp<float>(&local_20, &local_1c, &local_18) * local_14;
    }

    // 0x100665400, 64 bytes, inline, placed by class name
    // SoundInstance::SetPan(float)
    void SoundInstance::SetPan(float param_1) {
        float local_1c;
        float local_18;
        float local_14;

        local_18 = -1.0;
        local_14 = 1.0;
        local_1c = param_1;
        field_80 = math::Clamp<float>(&local_1c, &local_18, &local_14);
    }

    // 0x1006656b0, 16 bytes, inline, placed by class name
    // SoundInstance::SetGroupID(int)
    void SoundInstance::SetGroupID(int param_1) {
        m_groupID = param_1;
    }

    // 0x100665770, 16 bytes, inline, placed by class name
    // SoundInstance::GetGroupID() const
    int SoundInstance::GetGroupID() {
        return m_groupID;
    }

    // 0x100665d20, 16 bytes, inline, placed by class name
    // SoundInstance::IsPlaying() const
    bool SoundInstance::IsPlaying() {
        return field_20 == 4;
    }

    // 0x100b8a620, 80 bytes, inline, placed by class name
    // SoundInstance::SetPreSendGain(float)
    void SoundInstance::SetPreSendGain(float param_1) {
        float fVar1;
        float local_1c;
        float local_18;
        float local_14;

        local_1c = 0.0;
        local_18 = 1.0;
        local_14 = param_1;
        fVar1 = math::Clamp<float>(&local_14, &local_1c, &local_18);
        field_52 = fVar1;
        m_preSendGain = fVar1;
        field_64 = 0.0;
        field_68 = 0.0;
    }

    // 0x100b8a760, 16 bytes, complete-object destructor, inline, placed by class name
    // SoundInstance::~SoundInstance(): jumps straight to the base-object destructor

    // 0x100b8a770, 32 bytes, deleting destructor, inline, placed by class name
    // SoundInstance::~SoundInstance()
    void SoundInstance::~SoundInstance() {
        ~SoundInstance(this);
        operator_delete(this);
    }

    // 0x100b8add0, 64 bytes, base-object destructor, inline, placed by class name
    // SoundInstance::~SoundInstance()
    void SoundInstance::~SoundInstance() {
        field_0 = PTR_vtable_100ee8608 + 16;
        std::function<void(SoundInstance*)>::~function((function<void(SoundInstance*)>*)&field_112);
        field_24->~shared_ptr();
    }

} // namespace jag::audio
