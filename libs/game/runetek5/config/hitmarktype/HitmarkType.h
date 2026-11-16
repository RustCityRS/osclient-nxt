// libs/game/runetek5/config/hitmarktype/HitmarkType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class HitmarkType {
    public:
        // virtual methods in vtable order
        virtual ~HitmarkType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        unsigned int GetOverride() const;
        unsigned int GetDuration() const;
        HitmarkType(BaseTemplateConfigTypeList<HitmarkType>* baseTemplateConfigTypeList, int arg2);
        auto GetText(int arg1);
        shared_ptr* GetSpriteInner(graphics::RT7Core& rt7Core, int arg2);
        void CacheSprites(graphics::RT7Core& rt7Core);
        void GetIconSprite(graphics::RT7Core& rt7Core);
        void GetBackgroundSprite(graphics::RT7Core& rt7Core);
        void GetBackgroundLeftSprite(graphics::RT7Core& rt7Core);
        void GetBackgroundRightSprite(graphics::RT7Core& rt7Core);
        auto GetMultiHitmark(const PlayerVarDomain* playerVarDomain, ConfigProvider* configProvider);
        void CacheSpriteInner(graphics::RT7Core& rt7Core, int arg2);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullHitmarkType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<HitmarkType>* field_24;
        int field_32;
        uint8_t _unknown_36[20];
        uint8_t field_56;
        uint8_t _unknown_57[3];
        uint32_t field_60;
        uint32_t field_64;
        unsigned int m_duration;
        uint32_t field_72;
        uint32_t field_76;
        uint32_t field_80;
        uint32_t field_84;
        int field_88;
        int field_92;
        unsigned int field_96;
        uint8_t _unknown_100[28];
        unsigned int m_override;
        int field_132;
        int field_136;
        int field_140;
        uint8_t _unknown_144[24];
        unsigned int field_168;
        unsigned int field_172;
        int field_176;
        int field_180;
        uint8_t _unknown_184[4];
    };

    // 0x10059d640
    HitmarkType::~HitmarkType() {
        field_144.~Array();
        field_104.~basic_string();
    }

} // namespace jag::game
