// libs/game/runetek5/config/flutype/FloorUnderlayType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class FloorUnderlayType {
    public:
        // virtual methods in vtable order
        virtual ~FloorUnderlayType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        unsigned int GetMaterialID() const;
        FloorUnderlayType(BaseTemplateConfigTypeList<FloorUnderlayType>* baseTemplateConfigTypeList, int arg2);
        float GetTextureScale() const;
        bool GetBlendingEnabled() const;
        void SetBlending(bool arg1);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<FloorUnderlayType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        uint32_t field_56;
        unsigned int m_materialID;
        float m_textureScale;
        uint8_t field_68;
        bool m_blendingEnabled;
        uint8_t _unknown_70[6];
    };

    // 0x100547b20
    void GameUIHookProperties::HasInputHooks() const {
        field_8->HasInputHooks();
    }

    // 0x100592800
    FloorUnderlayType::~FloorUnderlayType() {}

    // 0x100592a20
    FloorUnderlayType::FloorUnderlayType(BaseTemplateConfigTypeList<FloorUnderlayType>* baseTemplateConfigTypeList,
                                         int arg2)
        : ConfigType<FloorUnderlayType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<FloorUnderlayType, 128>(),
          field_56(0), m_materialID(4294967295), m_textureScale(1.0), field_68(1), m_blendingEnabled(true) {}

    // 0x10062b9c0
    float FloorUnderlayType::GetTextureScale() const {
        return m_textureScale;
    }

    // 0x10062b9d0
    bool FloorUnderlayType::GetBlendingEnabled() const {
        return m_blendingEnabled;
    }

    // 0x10062dc40
    void FloorUnderlayType::SetBlending(bool arg1) {
        m_blendingEnabled = arg1;
    }

} // namespace jag::game
