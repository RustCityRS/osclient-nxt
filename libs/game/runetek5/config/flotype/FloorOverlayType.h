// libs/game/runetek5/config/flotype/FloorOverlayType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class FloorOverlayType {
    public:
        // virtual methods in vtable order
        virtual ~FloorOverlayType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        HasSmoothEdges() const;
        uint GetMaterialID() const;
        uint GetPriority() const;
        GetRGBA() const;
        uint ColourFudge(unsigned int);
        FloorOverlayType(BaseTemplateConfigTypeList<FloorOverlayType>*, int);
        float GetTextureScale() const;
        bool GetBlendingEnabled() const;
        void SetBlending(bool);

        // data members, from how the methods use this: 108 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        undefined4 m_rGBA;           // offset 56
        uint m_materialID;           // offset 60
        float m_textureScale;        // offset 64
        undefined4 field_68;         // offset 68
        uint m_priority;             // offset 72
        undefined1 m_hasSmoothEdges; // offset 76
        undefined1 field_77;         // offset 77
        bool m_blendingEnabled;      // offset 78
        char _unknown_79[1];
        undefined4 field_80; // offset 80
        uint field_84;       // offset 84
        uint field_88;       // offset 88
        uint field_92;       // offset 92
        bool field_96;       // offset 96
        char _unknown_97[3];
        uint field_100; // offset 100
        char _unknown_104[4];
    };

    // 0x10054ff70, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // FloorOverlayType::~FloorOverlayType()
    void FloorOverlayType::~FloorOverlayType() {
        ~FloorOverlayType(this);
        operator_delete(this);
    }

    // 0x100597eb0, 16 bytes, complete-object destructor, inline, placed by class name
    // FloorOverlayType::~FloorOverlayType(): jumps straight to the base-object destructor

    // 0x100597ec0, 16 bytes, base-object destructor, inline, placed by class name
    // FloorOverlayType::~FloorOverlayType()
    void FloorOverlayType::~FloorOverlayType() {
        ~ConfigType();
    }

    // 0x1005980d0, 16 bytes, complete-object constructor, inline, placed by class name
    // FloorOverlayType::FloorOverlayType(BaseTemplateConfigTypeList<FloorOverlayType>*, int): jumps straight to the base-object constructor

    // 0x1005980e0, 112 bytes, base-object constructor, inline, placed by class name
    // FloorOverlayType::FloorOverlayType(BaseTemplateConfigTypeList<FloorOverlayType>*, int)
    void FloorOverlayType::FloorOverlayType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<FloorOverlayType>(param_1, param_2);
        new (this) MakeSharedPool<FloorOverlayType, 128>();
        field_0 = &PTR__FloorOverlayType_100f04250;
        m_rGBA = 0;
        m_materialID = 4294967295;
        m_textureScale = 1.0;
        field_68 = 0;
        m_priority = 8;
        m_hasSmoothEdges = 0;
        field_77 = 1;
        m_blendingEnabled = true;
        field_80 = 0;
        field_84 = 64;
        field_88 = 255;
        field_92 = 63;
        field_96 = false;
        field_100 = 64;
    }

    // 0x10062bb40, 16 bytes, inline, placed by class name
    // FloorOverlayType::GetBlendingEnabled() const
    undefined1 FloorOverlayType::GetBlendingEnabled() {
        return m_blendingEnabled;
    }

    // 0x10062dc50, 16 bytes, inline, placed by class name
    // FloorOverlayType::SetBlending(bool)
    void FloorOverlayType::SetBlending(bool param_1) {
        m_blendingEnabled = param_1;
    }

} // namespace jag::game
