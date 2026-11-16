// libs/game/runetek5/config/cursortype/CursorType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class CursorType {
    public:
        // virtual methods in vtable order
        virtual ~CursorType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        CursorType(BaseTemplateConfigTypeList<CursorType>*, int);

        // data members, from how the methods use this: 64 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        undefined4 field_56; // offset 56
        undefined1 field_60; // offset 60
        undefined1 field_61; // offset 61
        char _unknown_62[2];
    };

    // 0x10055ae40, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // CursorType::~CursorType()
    void CursorType::~CursorType() {
        ~CursorType(this);
        operator_delete(this);
    }

    // 0x1005d4480, 16 bytes, complete-object destructor, inline, placed by class name
    // CursorType::~CursorType(): jumps straight to the base-object destructor

    // 0x1005d4490, 16 bytes, base-object destructor, inline, placed by class name
    // CursorType::~CursorType()
    void CursorType::~CursorType() {
        ~ConfigType();
    }

    // 0x1005d46a0, 16 bytes, complete-object constructor, inline, placed by class name
    // CursorType::CursorType(BaseTemplateConfigTypeList<CursorType>*, int): jumps straight to the base-object constructor

    // 0x1005d46b0, 64 bytes, base-object constructor, inline, placed by class name
    // CursorType::CursorType(BaseTemplateConfigTypeList<CursorType>*, int)
    void CursorType::CursorType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<CursorType>(param_1, param_2);
        new (this) MakeSharedPool<CursorType, 64>();
        field_0 = &PTR__CursorType_100f042f8;
    }

} // namespace jag::game
