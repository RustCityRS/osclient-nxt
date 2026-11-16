// libs/game/runetek5/config/hitmarktype/HitmarkType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class HitmarkType {
    public:
        // virtual methods in vtable order
        virtual ~HitmarkType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        uint GetOverride() const;
        uint GetDuration() const;
        HitmarkType(BaseTemplateConfigTypeList<HitmarkType>*, int);
        GetText(int);
        shared_ptr* GetSpriteInner(graphics::RT7Core&, int);
        void CacheSprites(graphics::RT7Core&);
        void GetIconSprite(graphics::RT7Core&);
        void GetBackgroundSprite(graphics::RT7Core&);
        void GetBackgroundLeftSprite(graphics::RT7Core&);
        void GetBackgroundRightSprite(graphics::RT7Core&);
        GetMultiHitmark(PlayerVarDomain const*, ConfigProvider*);
        void CacheSpriteInner(graphics::RT7Core&, int);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullHitmarkType;

        // data members, from how the methods use this: 188 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        undefined1 field_56; // offset 56
        char _unknown_57[3];
        undefined4 field_60; // offset 60
        undefined4 field_64; // offset 64
        uint m_duration;     // offset 68
        undefined4 field_72; // offset 72
        undefined4 field_76; // offset 76
        undefined4 field_80; // offset 80
        undefined4 field_84; // offset 84
        int field_88;        // offset 88
        int field_92;        // offset 92
        uint field_96;       // offset 96
        char _unknown_100[28];
        uint m_override; // offset 128
        int field_132;   // offset 132
        int field_136;   // offset 136
        int field_140;   // offset 140
        char _unknown_144[24];
        uint field_168; // offset 168
        uint field_172; // offset 172
        int field_176;  // offset 176
        int field_180;  // offset 180
        char _unknown_184[4];
    };

    // 0x100547ab0, 32 bytes, deleting destructor, inline, placed by class name
    // HitmarkType::~HitmarkType()
    void HitmarkType::~HitmarkType() {
        ~HitmarkType(this);
        operator_delete(this);
    }

    // 0x10059d630, 16 bytes, complete-object destructor, inline, placed by class name
    // HitmarkType::~HitmarkType(): jumps straight to the base-object destructor

    // 0x10059d640, 64 bytes, base-object destructor, inline, placed by class name
    // HitmarkType::~HitmarkType()
    void HitmarkType::~HitmarkType() {
        field_0 = &PTR__HitmarkType_100f03f50;
        (&field_144)->~Array();
        (&field_104)->~basic_string();
        ~ConfigType();
    }

} // namespace jag::game
