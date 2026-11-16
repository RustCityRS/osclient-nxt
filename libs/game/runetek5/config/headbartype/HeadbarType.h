// libs/game/runetek5/config/headbartype/HeadbarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class HeadbarType {
    public:
        // virtual methods in vtable order
        virtual ~HeadbarType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        uint GetPriority() const;
        uint GetStickTime() const;
        uint GetDisplayOrder() const;
        shared_ptr* GetSprite(graphics::RT7Core&, int);
        void CacheSprites(graphics::RT7Core&);
        void CacheSpriteInner(graphics::RT7Core&, int);
        HeadbarType(BaseTemplateConfigTypeList<HeadbarType>*, int);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullHeadbarType;

        // data members, from how the methods use this: 120 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        uint m_displayOrder; // offset 56
        uint m_priority;     // offset 60
        uint field_64;       // offset 64
        uint field_68;       // offset 68
        char _unknown_72[4];
        uint m_stickTime;     // offset 76
        undefined4 field_80;  // offset 80
        undefined4 field_84;  // offset 84
        undefined4 field_88;  // offset 88
        undefined4 field_92;  // offset 92
        undefined4 field_96;  // offset 96
        undefined4 field_100; // offset 100
        undefined1 field_104; // offset 104
        char _unknown_105[3];
        undefined4 field_108; // offset 108
        undefined4 field_112; // offset 112
        char _unknown_116[4];
    };

    // 0x100547a90, 32 bytes, deleting destructor, inline, placed by class name
    // HeadbarType::~HeadbarType()
    void HeadbarType::~HeadbarType() {
        ~HeadbarType(this);
        operator_delete(this);
    }

    // 0x1005a2680, 16 bytes, complete-object destructor, inline, placed by class name
    // HeadbarType::~HeadbarType(): jumps straight to the base-object destructor

    // 0x1005a2690, 16 bytes, base-object destructor, inline, placed by class name
    // HeadbarType::~HeadbarType()
    void HeadbarType::~HeadbarType() {
        ~ConfigType();
    }

    // 0x1005a28a0, 16 bytes, complete-object constructor, inline, placed by class name
    // HeadbarType::HeadbarType(BaseTemplateConfigTypeList<HeadbarType>*, int): jumps straight to the base-object constructor

    // 0x1005a28b0, 128 bytes, base-object constructor, inline, placed by class name
    // HeadbarType::HeadbarType(BaseTemplateConfigTypeList<HeadbarType>*, int)
    void HeadbarType::HeadbarType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<HeadbarType>(param_1, param_2);
        new (this) MakeSharedPool<HeadbarType, 32>();
        field_0 = &PTR__HeadbarType_100f03ff8;
        m_displayOrder = 255;
        m_priority = 255;
        field_64 = 2;
        field_68 = 4294967295;
        *(undefined8*)&field_72 = 300647710721;
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
