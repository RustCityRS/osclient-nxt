// libs/game/runetek5/config/lighttype/LightType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class LightType {
    public:
        // virtual methods in vtable order
        virtual ~LightType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual PostDecode();
        GetJitterMoveTimeOffsetRandomMS() const;
        int GetOffset() const;
        int GetJitterMoveTimeMS() const;
        GetJitterRadiusRandom() const;
        uint GetWaveType() const;
        uint GetFrequency() const;
        uint GetAmplitude() const;
        float GetJitterRadius() const;
        GetJitterMovePower() const;
        GetJitterIntensityStrength() const;
        LightType(BaseTemplateConfigTypeList<LightType>*, int);

        // data members, from how the methods use this: 112 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        uint m_waveType;                 // offset 56
        int m_offset;                    // offset 60
        uint m_amplitude;                // offset 64
        uint m_frequency;                // offset 68
        undefined4 field_72;             // offset 72
        undefined4 field_76;             // offset 76
        undefined4 field_80;             // offset 80
        float m_jitterRadius;            // offset 84
        undefined1 m_jitterRadiusRandom; // offset 88
        char _unknown_89[3];
        int m_jitterMoveTimeMS;                    // offset 92
        undefined4 m_jitterMoveTimeOffsetRandomMS; // offset 96
        undefined4 m_jitterMovePower;              // offset 100
        undefined4 m_jitterIntensityStrength;      // offset 104
        char _unknown_108[4];
    };

    // 0x10043c600, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LightType::GetJitterRadius() const
    /* audio::SoundInstance::GetSoundSpatialSizeMin() const */

    float audio::SoundInstance::GetSoundSpatialSizeMin() {
        return m_soundSpatialSizeMin;
    }

    // 0x10043c610, 16 bytes, inline, placed by class name and debug map
    // LightType::GetJitterMovePower() const
    undefined4 LightType::GetJitterMovePower() {
        return m_jitterMovePower;
    }

    // 0x10043c620, 16 bytes, inline, placed by class name and debug map
    // LightType::GetJitterIntensityStrength() const
    undefined4 LightType::GetJitterIntensityStrength() {
        return m_jitterIntensityStrength;
    }

    // 0x100518630, 32 bytes, deleting destructor, inline, placed by class name
    // LightType::~LightType()
    void LightType::~LightType() {
        ~LightType(this);
        operator_delete(this);
    }

    // 0x1005c4bc0, 16 bytes, complete-object destructor, inline, placed by class name
    // LightType::~LightType(): jumps straight to the base-object destructor

    // 0x1005c4bd0, 16 bytes, base-object destructor, inline, placed by class name
    // LightType::~LightType()
    void LightType::~LightType() {
        ~ConfigType();
    }

    // 0x1005c4de0, 16 bytes, complete-object constructor, inline, placed by class name
    // LightType::LightType(BaseTemplateConfigTypeList<LightType>*, int): jumps straight to the base-object constructor

    // 0x1005c4df0, 128 bytes, base-object constructor, inline, placed by class name
    // LightType::LightType(BaseTemplateConfigTypeList<LightType>*, int)
    void LightType::LightType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<LightType>(param_1, param_2);
        new (this) MakeSharedPool<LightType, 32>();
        field_0 = &PTR__LightType_100f034b0;
        m_waveType = 0;
        m_offset = 0;
        m_amplitude = 2048;
        m_frequency = 2048;
        field_72 = 1097859072;
        field_76 = 1080033280;
        m_jitterMoveTimeMS = 0;
        m_jitterMoveTimeOffsetRandomMS = 0;
        field_80 = 0;
        m_jitterRadius = 0.0;
        m_jitterRadiusRandom = 0;
        m_jitterMovePower = 1065353216;
        m_jitterIntensityStrength = 0;
    }

} // namespace jag::game

namespace jag::math {
    // 0x10043c630, 32 bytes, inline, placed by debug map only (low confidence)
    // FRand(float)
    void FRand(float param_1) {
        g_Rand.FRand(param_1);
    }

    // 0x10043c650, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::operator-=(Vector3T<float> const&)
    /* Vector3T<float>::TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&) */

    Vector3T<float>* Vector3T<float>::operator-=(Vector3T* param_1) {
        *(float*)this = *(float*)this - *(float*)param_1;
        *(float*)(this + 4) = *(float*)(this + 4) - *(float*)(param_1 + 4);
        *(float*)(this + 8) = *(float*)(this + 8) - *(float*)(param_1 + 8);
        return this;
    }

} // namespace jag::math

// 0x10043c6a0, 16 bytes, placed by debug map only (low confidence)
// pow(float, float)
void pow(float param_1, float param_2) {
    _powf();
}
