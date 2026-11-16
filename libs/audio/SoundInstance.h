// libs/audio/SoundInstance.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::audio {
    class SoundInstance {
    public:
        // virtual methods in vtable order
        virtual ~SoundInstance();
        void SetOwner(void* arg1);
        int GetLevel() const;
        float GetSoundSpatialSizeMax() const;
        void SetLevel(int arg1);
        SoundShape GetSoundShape() const;
        SoundType GetSoundType() const;
        bool IsAudible() const;
        float GetSoundSpatialSizeMin() const;
        void FlagFinished();
        bool IsLoading() const;
        bool IsFinished() const;
        bool IsSoundShape3d() const;
        void SetPosition(const math::Vector3T<float>& vector3);
        bool IsAnimationSound() const;
        long* GetResource() const;
        bool IsFree() const;
        bool IsOwnedBy(void* arg1) const;
        void SetStartDelay(int arg1, bool arg2);
        void SetSoundType(game::SoundType soundType);
        uint32_t GetBussID() const;
        void SetOriginalGain(float arg1);
        void SetLoopCount(int arg1);
        void SetSoundSpatialSize(float arg1, float arg2);
        void SetBussID(hal::audio::BussType bussType);
        void SetSoundShape(game::SoundShape soundShape);
        void SetRate(unsigned int arg1);
        bool IsSoundShapeSphere() const;
        void SetSpatialCallback(std::function<void(SoundInstance*)> const& callback);
        uint64_t GetPosition() const;
        void SetGain(float arg1);
        void SetPan(float arg1);
        void SetGroupID(int arg1);
        int GetGroupID() const;
        bool IsPlaying() const;
        SoundInstance();
        void Claim(const shared_ptr<SoundResource>& soundResource);
        void Free();
        void Update(float arg1, const shared_ptr<hal::audio::AudioRenderer>& audioRenderer);
        void Start();
        void UpdatePreSendControls(float arg1);
        void Suspend(float arg1);
        void StartDelayCount();
        void SetPreSendGain(float arg1, float arg2);
        void FadeIn(float arg1, float arg2, float arg3);
        void SetPreSendGain(float arg1);
        void ProcessDelayedStart();
        void Pause();
        void Resume();
        bool IsAudibleInBussChain(hal::audio::AudioAPI* audioAPI) const;

    private:
        void* field_8;
        uint8_t field_16;
        uint8_t _unknown_17[3];
        unsigned int field_20;
        shared_ptr field_24;
        VoiceInstance* field_40;
        int field_48;
        float field_52;
        float field_56;
        float field_60;
        float field_64;
        float field_68;
        float field_72;
        float field_76;
        float field_80;
        float m_soundSpatialSizeMin;
        float m_soundSpatialSizeMax;
        uint64_t m_position;
        uint8_t _unknown_100[4];
        int m_level;
        uint8_t _unknown_108[52];
        uint32_t m_bussID;
        int m_startDelay;
        bool field_168;
        uint8_t _unknown_169[3];
        int m_groupID;
        SoundShape m_soundShape;
        SoundType m_soundType;
        uint8_t field_184;
        uint8_t _unknown_185[3];
        unsigned int m_rate;
        uint8_t _unknown_192[4];
    };

    // 0x10042c410
    bool SoundInstance::IsAudible() const {
        return 0.0 < field_76 * field_52;
    }

    // 0x100524c80
    void SoundInstance::FlagFinished() {
        field_20 = 7;
    }

    // 0x100524cf0
    bool SoundInstance::IsLoading() const {
        return field_20 == 2;
    }

    // 0x100662d30
    bool SoundInstance::IsFinished() const {
        return field_20 & 4294967294 == 6;
    }

    // 0x100662e10
    bool SoundInstance::IsSoundShape3d() const {
        return m_soundShape != 4;
    }

    // 0x100662e20
    void SoundInstance::SetPosition(const math::Vector3T<float>& vector3) {
        auto pfVar1 = vector3.SSOBeginPtr();
        float arg1 = *pfVar1;
        pfVar1 = (float*)vector3.second();
        m_position.Set(arg1, 0.0, *pfVar1);
    }

    // 0x100662ef0
    bool SoundInstance::IsAnimationSound() const {
        unsigned int uVar1 = m_soundType - 3;
        return (2079U >> (uVar1 & 31) & 1) != 0 && uVar1 < 12;
    }

    // 0x1006632f0
    long* SoundInstance::GetResource() const {
        return (long*)field_24->end();
    }

    // 0x1006643f0
    bool SoundInstance::IsFree() const {
        return field_20 < 2;
    }

    // 0x100664400
    bool SoundInstance::IsOwnedBy(void* arg1) const {
        return field_8 == arg1;
    }

    // 0x100664b80
    void SoundInstance::SetStartDelay(int arg1, bool arg2) {
        m_startDelay = arg1;
        field_168 = arg2;
    }

    // 0x100664c80
    void SoundInstance::SetSoundType(game::SoundType soundType) {
        m_soundType = soundType;
    }

    // 0x100664ca0
    uint32_t SoundInstance::GetBussID() const {
        return m_bussID;
    }

    // 0x100664ff0
    void SoundInstance::SetOriginalGain(float arg1) {
        if (field_16 != '\0') {
            LogAssert("!m_started",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/audio/SoundInstance.h", 97,
                      "OriginalGain should be set before starting the SoundInstance.");
        }
        float fVar1 = math::Clamp<float>(arg1, 0.0, 1.0);
        field_72 = fVar1;
        field_76 = fVar1;
    }

    // 0x100665060
    void SoundInstance::SetLoopCount(int arg1) {
        if (field_16 != '\0') {
            LogAssert("!m_started",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/audio/SoundInstance.h", 87,
                      "AUDIO WARNING: Setting loop count after sound has started has no effect.");
        }
        field_48 = arg1;
    }

    // 0x1006650a0
    void SoundInstance::SetSoundSpatialSize(float arg1, float arg2) {
        m_soundSpatialSizeMin = arg1;
        m_soundSpatialSizeMax = arg2;
    }

    // 0x1006650b0
    void SoundInstance::SetBussID(hal::audio::BussType bussType) {
        m_players = bussType;
    }

    // 0x1006650c0
    void SoundInstance::SetSoundShape(game::SoundShape soundShape) {
        m_soundShape = soundShape;
    }

    // 0x1006650d0
    void SoundInstance::SetRate(unsigned int arg1) {
        m_rate = arg1;
    }

    // 0x1006650e0
    bool SoundInstance::IsSoundShapeSphere() const {
        return (m_soundShape & 4294967293) == 0;
    }

    // 0x100665100
    void SoundInstance::SetSpatialCallback(std::function<void(SoundInstance*)> const& callback) {
        field_112 = callback;
    }

    // 0x100665350
    uint64_t SoundInstance::GetPosition() const {
        return m_position;
    }

    // 0x100665360
    void SoundInstance::SetGain(float arg1) {
        float local_14 = field_72;
        field_76 = math::Clamp<float>(arg1, 0.0, 1.0) * local_14;
    }

    // 0x100665400
    void SoundInstance::SetPan(float arg1) {
        field_80 = math::Clamp<float>(arg1, -1.0, 1.0);
    }

    // 0x1006656b0
    void SoundInstance::SetGroupID(int arg1) {
        m_groupID = arg1;
    }

    // 0x100665770
    int SoundInstance::GetGroupID() const {
        return m_groupID;
    }

    // 0x100665d20
    bool SoundInstance::IsPlaying() const {
        return field_20 == 4;
    }

    // 0x100b8a620
    void SoundInstance::SetPreSendGain(float arg1) {
        float fVar1 = math::Clamp<float>(arg1, 0.0, 1.0);
        field_52 = fVar1;
        field_60 = fVar1;
        field_64 = 0.0;
        field_68 = 0.0;
    }

    // 0x100b8add0
    SoundInstance::~SoundInstance() {
        field_112.~function();
        field_24->~shared_ptr();
    }

} // namespace jag::audio
