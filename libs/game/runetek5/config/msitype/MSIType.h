// libs/game/runetek5/config/msitype/MSIType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class MSIType {
    public:
        // virtual methods in vtable order
        virtual ~MSIType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        GetTint() const;
        GetSpriteID() const;
        bool GetResize() const;
        GetHideOnMinimap() const;
        PacketView* GetSprite(graphics::RT7Core&, Rotation90, bool);
        MSIType(BaseTemplateConfigTypeList<MSIType>*, int);

        // data members, from how the methods use this: 72 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        undefined4 m_spriteID;      // offset 56
        undefined4 m_tint;          // offset 60
        bool m_resize;              // offset 64
        undefined1 m_hideOnMinimap; // offset 65
        char _unknown_66[6];
    };

    // 0x1003c2290, 16 bytes, inline, placed by class name and debug map
    // MSIType::GetHideOnMinimap() const
    undefined1 MSIType::GetHideOnMinimap() {
        return m_hideOnMinimap;
    }

    // 0x100518670, 32 bytes, deleting destructor, inline, placed by class name
    // MSIType::~MSIType()
    void MSIType::~MSIType() {
        ~MSIType(this);
        operator_delete(this);
    }

    // 0x1005b3e70, 16 bytes, complete-object destructor, inline, placed by class name
    // MSIType::~MSIType(): jumps straight to the base-object destructor

    // 0x1005b3e80, 16 bytes, base-object destructor, inline, placed by class name
    // MSIType::~MSIType()
    void MSIType::~MSIType() {
        ~ConfigType();
    }

    // 0x1005b4090, 16 bytes, complete-object constructor, inline, placed by class name
    // MSIType::MSIType(BaseTemplateConfigTypeList<MSIType>*, int): jumps straight to the base-object constructor

    // 0x1005b40a0, 80 bytes, base-object constructor, inline, placed by class name
    // MSIType::MSIType(BaseTemplateConfigTypeList<MSIType>*, int)
    void MSIType::MSIType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<MSIType>(param_1, param_2);
        new (this) MakeSharedPool<MSIType, 32>();
        field_0 = &PTR__MSIType_100f03520;
        m_tint = 0;
        m_resize = false;
        m_hideOnMinimap = 0;
    }

} // namespace jag::game
