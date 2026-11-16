// libs/game/runetek5/config/lighttype/LightType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class LightType {
    public:
        // virtual methods in vtable order
        virtual ~LightType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        uint32_t GetJitterMoveTimeOffsetRandomMS() const;
        int GetOffset() const;
        int GetJitterMoveTimeMS() const;
        uint8_t GetJitterRadiusRandom() const;
        unsigned int GetWaveType() const;
        unsigned int GetFrequency() const;
        unsigned int GetAmplitude() const;
        float GetJitterRadius() const;
        uint32_t GetJitterMovePower() const;
        uint32_t GetJitterIntensityStrength() const;
        LightType(BaseTemplateConfigTypeList<LightType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<LightType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        unsigned int m_waveType;
        int m_offset;
        unsigned int m_amplitude;
        unsigned int m_frequency;
        uint32_t field_72;
        uint32_t field_76;
        uint32_t field_80;
        float m_jitterRadius;
        uint8_t m_jitterRadiusRandom;
        uint8_t _unknown_89[3];
        int m_jitterMoveTimeMS;
        uint32_t m_jitterMoveTimeOffsetRandomMS;
        uint32_t m_jitterMovePower;
        uint32_t m_jitterIntensityStrength;
        uint8_t _unknown_108[4];
    };

    // 0x10043c600
    float LightType::GetJitterRadius() const {
        return m_soundSpatialSizeMin;
    }

    // 0x10043c610
    uint32_t LightType::GetJitterMovePower() const {
        return m_jitterMovePower;
    }

    // 0x10043c620
    uint32_t LightType::GetJitterIntensityStrength() const {
        return m_jitterIntensityStrength;
    }

    // 0x1005c4bd0
    LightType::~LightType() {}

    // 0x1005c4df0
    LightType::LightType(BaseTemplateConfigTypeList<LightType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<LightType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<LightType, 32>(), m_waveType(0),
          m_offset(0), m_amplitude(2048), m_frequency(2048), field_72(1097859072), field_76(1080033280),
          m_jitterMoveTimeMS(0), m_jitterMoveTimeOffsetRandomMS(0), field_80(0), m_jitterRadius(0.0),
          m_jitterRadiusRandom(0), m_jitterMovePower(1065353216), m_jitterIntensityStrength(0) {}

} // namespace jag::game

namespace jag::math {
    // 0x10043c630
    void FRand(float arg1) {
        g_Rand.FRand(arg1);
    }

    // 0x10043c650
    Vector3T<float>* Vector3T<float>::operator-=(const Vector3T<float>& vector3) {
        *(float*)this = *(float*)this - *(float*)vector3;
        *(float*)(this + 4) = *(float*)(this + 4) - *(float*)(vector3 + 4);
        *(float*)(this + 8) = *(float*)(this + 8) - *(float*)(vector3 + 8);
        return this;
    }

} // namespace jag::math

// 0x10043c6a0
void pow(float arg1, float arg2) {
    _powf();
}
