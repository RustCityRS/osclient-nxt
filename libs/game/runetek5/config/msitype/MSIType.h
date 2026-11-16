// libs/game/runetek5/config/msitype/MSIType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class MSIType {
    public:
        // virtual methods in vtable order
        virtual ~MSIType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        uint32_t GetTint() const;
        uint32_t GetSpriteID() const;
        uint8_t GetResize() const;
        uint8_t GetHideOnMinimap() const;
        PacketView* GetSprite(graphics::RT7Core& rt7Core, Rotation90 rotation90, bool arg3);
        MSIType(BaseTemplateConfigTypeList<MSIType>* baseTemplateConfigTypeList, int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<MSIType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        uint32_t m_spriteID;
        uint32_t m_tint;
        uint8_t m_resize;
        uint8_t m_hideOnMinimap;
        uint8_t _unknown_66[6];
    };

    // 0x1003c2290
    uint8_t MSIType::GetHideOnMinimap() const {
        return m_hideOnMinimap;
    }

    // 0x1005b3e80
    MSIType::~MSIType() {}

    // 0x1005b40a0
    MSIType::MSIType(BaseTemplateConfigTypeList<MSIType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<MSIType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<MSIType, 32>(), m_tint(0), m_resize(0),
          m_hideOnMinimap(0) {}

} // namespace jag::game
