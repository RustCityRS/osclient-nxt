// libs/game/runetek5/config/effectanimtype/EffectAnimType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class EffectAnimType {
    public:
        // virtual methods in vtable order
        virtual ~EffectAnimType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        uint32_t GetSeqID() const;
        float GetRotation() const;
        uint8_t GetObeyExtraSeqSettings() const;
        bool ShouldHillRotate() const;
        uint8_t CastsShadows() const;
        shared_ptr* GetModel(const DataStatus*& arg1, graphics::RT7Core* rt7Core);
        EffectAnimType(BaseTemplateConfigTypeList<EffectAnimType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<EffectAnimType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        uint32_t field_56;
        uint32_t m_seqID;
        uint8_t _unknown_64[96];
        float field_160;
        float field_164;
        float m_rotation;
        uint8_t m_obeyExtraSeqSettings;
        uint8_t _unknown_173[3];
        uint32_t field_176;
        unsigned int field_180;
        uint8_t field_184;
        uint8_t _unknown_185[1];
        short field_186;
        uint8_t _unknown_188[6];
    };

    // 0x1003f8580
    float EffectAnimType::GetRotation() const {
        return m_mouseX;
    }

    // 0x1003f8590
    uint8_t EffectAnimType::GetObeyExtraSeqSettings() const {
        return m_obeyExtraSeqSettings;
    }

    // 0x1003f8ef0
    bool EffectAnimType::ShouldHillRotate() const {
        return field_176 == 3;
    }

    // 0x1003f9260
    uint8_t EffectAnimType::CastsShadows() const {
        return m_paused;
    }

    // 0x1005e5700
    EffectAnimType::~EffectAnimType() {
        field_136.~Array();
        field_112.~Array();
        field_88.~Array();
        field_64.~Array();
    }

    // 0x1005e5960
    EffectAnimType::EffectAnimType(BaseTemplateConfigTypeList<EffectAnimType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<EffectAnimType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<EffectAnimType, 256>(),
          m_seqID(4294967295), field_160(1.0), field_164(1.0), m_rotation(0.0), m_obeyExtraSeqSettings(0), field_176(0),
          field_184(1), field_186(64) {}

} // namespace jag::game
