// libs/game/runetek5/config/flotype/FloorOverlayType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class FloorOverlayType {
    public:
        // virtual methods in vtable order
        virtual ~FloorOverlayType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        bool HasSmoothEdges() const;
        unsigned int GetMaterialID() const;
        unsigned int GetPriority() const;
        uint32_t GetRGBA() const;
        unsigned int ColourFudge(unsigned int arg1);
        FloorOverlayType(BaseTemplateConfigTypeList<FloorOverlayType>* baseTemplateConfigTypeList, int arg2);
        float GetTextureScale() const;
        bool GetBlendingEnabled() const;
        void SetBlending(bool arg1);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<FloorOverlayType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        uint32_t m_rGBA;
        unsigned int m_materialID;
        float m_textureScale;
        uint32_t field_68;
        unsigned int m_priority;
        uint8_t m_hasSmoothEdges;
        uint8_t field_77;
        bool m_blendingEnabled;
        uint8_t _unknown_79[1];
        uint32_t field_80;
        unsigned int field_84;
        unsigned int field_88;
        unsigned int field_92;
        bool field_96;
        uint8_t _unknown_97[3];
        unsigned int field_100;
        uint8_t _unknown_104[4];
    };

    // 0x100597ec0
    FloorOverlayType::~FloorOverlayType() {}

    // 0x1005980e0
    FloorOverlayType::FloorOverlayType(BaseTemplateConfigTypeList<FloorOverlayType>* baseTemplateConfigTypeList,
                                       int arg2)
        : ConfigType<FloorOverlayType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<FloorOverlayType, 128>(),
          m_rGBA(0), m_materialID(4294967295), m_textureScale(1.0), field_68(0), m_priority(8), m_hasSmoothEdges(0),
          field_77(1), m_blendingEnabled(true), field_80(0), field_84(64), field_88(255), field_92(63), field_96(false),
          field_100(64) {}

    // 0x10062bb40
    bool FloorOverlayType::GetBlendingEnabled() const {
        return m_blendingEnabled;
    }

    // 0x10062dc50
    void FloorOverlayType::SetBlending(bool arg1) {
        m_blendingEnabled = arg1;
    }

} // namespace jag::game
