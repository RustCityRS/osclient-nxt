// libs/game/runetek5/config/headbartype/HeadbarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class HeadbarType {
    public:
        // virtual methods in vtable order
        virtual ~HeadbarType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        unsigned int GetPriority() const;
        unsigned int GetStickTime() const;
        unsigned int GetDisplayOrder() const;
        shared_ptr* GetSprite(graphics::RT7Core& rt7Core, int arg2);
        void CacheSprites(graphics::RT7Core& rt7Core);
        void CacheSpriteInner(graphics::RT7Core& rt7Core, int arg2);
        HeadbarType(BaseTemplateConfigTypeList<HeadbarType>* baseTemplateConfigTypeList, int arg2);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullHeadbarType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<HeadbarType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        unsigned int m_displayOrder;
        unsigned int m_priority;
        unsigned int field_64;
        unsigned int field_68;
        uint8_t _unknown_72[4];
        unsigned int m_stickTime;
        uint32_t field_80;
        uint32_t field_84;
        uint32_t field_88;
        uint32_t field_92;
        uint32_t field_96;
        uint32_t field_100;
        uint8_t field_104;
        uint8_t _unknown_105[3];
        uint32_t field_108;
        uint32_t field_112;
        uint8_t _unknown_116[4];
    };

    // 0x1005a2690
    HeadbarType::~HeadbarType() {}

    // 0x1005a28b0
    HeadbarType::HeadbarType(BaseTemplateConfigTypeList<HeadbarType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<HeadbarType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<HeadbarType, 32>(),
          m_displayOrder(255), m_priority(255), field_64(2), field_68(4294967295) {
        *(uint64_t*)&field_72 = 300647710721;
        field_80 = 4294967295;
        field_84 = 4294967295;
        field_88 = 4294967295;
        field_92 = 4294967295;
        field_96 = 4294967295;
        field_100 = 4294967295;
        field_104 = 0;
        field_108 = 4294967295;
        field_112 = 4294967295;
    }

} // namespace jag::game
