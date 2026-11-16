// libs/game/runetek5/config/flutype/FloorUnderlayType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class FloorUnderlayType {
    public:
        // virtual methods in vtable order
        virtual ~FloorUnderlayType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        uint GetMaterialID() const;
        FloorUnderlayType(BaseTemplateConfigTypeList<FloorUnderlayType>*, int);
        float GetTextureScale() const;
        bool GetBlendingEnabled() const;
        void SetBlending(bool);

        // data members, from how the methods use this: 76 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        undefined4 field_56;    // offset 56
        uint m_materialID;      // offset 60
        float m_textureScale;   // offset 64
        undefined1 field_68;    // offset 68
        bool m_blendingEnabled; // offset 69
        char _unknown_70[6];
    };

    // 0x100547a50, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // FloorUnderlayType::~FloorUnderlayType()
    void FloorUnderlayType::~FloorUnderlayType() {
        ~FloorUnderlayType(this);
        operator_delete(this);
    }

    // 0x100547af0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // GameUIHookProperties::~GameUIHookProperties(): jumps straight to the base-object destructor

    // 0x100547b00, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // GameUIHookProperties::~GameUIHookProperties()
    void GameUIHookProperties::~GameUIHookProperties() {
        ~GameUIHookProperties(this);
        operator_delete(this);
    }

    // 0x100547b20, 16 bytes, inline, placed by debug map only (low confidence)
    // GameUIHookProperties::HasInputHooks() const
    void GameUIHookProperties::HasInputHooks() {
        field_8->HasInputHooks();
    }

    // 0x1005927f0, 16 bytes, complete-object destructor, inline, placed by class name
    // FloorUnderlayType::~FloorUnderlayType(): jumps straight to the base-object destructor

    // 0x100592800, 16 bytes, base-object destructor, inline, placed by class name
    // FloorUnderlayType::~FloorUnderlayType()
    void FloorUnderlayType::~FloorUnderlayType() {
        ~ConfigType();
    }

    // 0x100592a10, 16 bytes, complete-object constructor, inline, placed by class name
    // FloorUnderlayType::FloorUnderlayType(BaseTemplateConfigTypeList<FloorUnderlayType>*, int): jumps straight to the base-object constructor

    // 0x100592a20, 96 bytes, base-object constructor, inline, placed by class name
    // FloorUnderlayType::FloorUnderlayType(BaseTemplateConfigTypeList<FloorUnderlayType>*, int)
    void FloorUnderlayType::FloorUnderlayType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<FloorUnderlayType>(param_1, param_2);
        new (this) MakeSharedPool<FloorUnderlayType, 128>();
        field_0 = &PTR__FloorUnderlayType_100f03f88;
        field_56 = 0;
        m_materialID = 4294967295;
        m_textureScale = 1.0;
        field_68 = 1;
        m_blendingEnabled = true;
    }

    // 0x10062b9c0, 16 bytes, inline, placed by class name
    // FloorUnderlayType::GetTextureScale() const
    /* FloorOverlayType::GetTextureScale() const */

    float FloorOverlayType::GetTextureScale() {
        return m_textureScale;
    }

    // 0x10062b9d0, 16 bytes, inline, placed by class name
    // FloorUnderlayType::GetBlendingEnabled() const
    undefined1 FloorUnderlayType::GetBlendingEnabled() {
        return m_blendingEnabled;
    }

    // 0x10062dc40, 16 bytes, inline, placed by class name
    // FloorUnderlayType::SetBlending(bool)
    void FloorUnderlayType::SetBlending(bool param_1) {
        m_blendingEnabled = param_1;
    }

} // namespace jag::game
