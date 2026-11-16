// libs/game/runetek5/config/paramtype/ParamType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ParamType {
    public:
        // virtual methods in vtable order
        virtual ~ParamType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        uint GetDefaultNumber() const;
        GetAutoDisable() const;
        ParamType(BaseTemplateConfigTypeList<ParamType>*, int);

        // data members, from how the methods use this: 105 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        undefined8 field_56;  // offset 56
        uint m_defaultNumber; // offset 64
        char _unknown_68[36];
        undefined1 m_autoDisable; // offset 104
    };

    // 0x1004f6a00, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ParamType::~ParamType()
    void ParamType::~ParamType() {
        ~ParamType(this);
        operator_delete(this);
    }

    // 0x100509c20, 16 bytes, inline, placed by class name
    // ParamType::GetAutoDisable() const
    undefined1 ParamType::GetAutoDisable() {
        return m_autoDisable;
    }

    // 0x100572b10, 16 bytes, complete-object destructor, inline, placed by class name
    // ParamType::~ParamType(): jumps straight to the base-object destructor

    // 0x100572b20, 48 bytes, base-object destructor, inline, placed by class name
    // ParamType::~ParamType()
    void ParamType::~ParamType() {
        field_0 = &PTR__ParamType_100f02bb8;
        (&field_72)->~basic_string();
        ~ConfigType();
    }

    // 0x100572d50, 16 bytes, complete-object constructor, inline, placed by class name
    // ParamType::ParamType(BaseTemplateConfigTypeList<ParamType>*, int): jumps straight to the base-object constructor

    // 0x100572d60, 96 bytes, base-object constructor, inline, placed by class name
    // ParamType::ParamType(BaseTemplateConfigTypeList<ParamType>*, int)
    void ParamType::ParamType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<ParamType>(param_1, param_2);
        new (this) MakeSharedPool<ParamType, 640>();
        field_0 = &PTR__ParamType_100f02bb8;
        m_defaultNumber = 0;
        new (&field_72, (basic_string*)&eastl::EMPTY_STRING) eastl::string();
        m_autoDisable = 1;
    }

} // namespace jag::game
