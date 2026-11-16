// libs/game/runetek5/config/db/dbrowtype/DBRowType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class DBRowType {
    public:
        // virtual methods in vtable order
        virtual ~DBRowType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        void GetColumnVarValue(unsigned int, unsigned int, unsigned int) const;
        HasColumnVarValues(unsigned int) const;
        void GetColumnVarValues(unsigned int) const;
        void GetColumnVarType(unsigned int) const;
        DBRowType(BaseTemplateConfigTypeList<DBRowType>*, unsigned int);

        // data members, from how the methods use this: 112 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[68];
        undefined4 field_104; // offset 104
        char _unknown_108[4];
    };

    // 0x10055ae60, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // DBRowType::~DBRowType()
    void DBRowType::~DBRowType() {
        ~DBRowType(this);
        operator_delete(this);
    }

    // 0x100578440, 16 bytes, complete-object destructor, inline, placed by class name
    // DBRowType::~DBRowType(): jumps straight to the base-object destructor

    // 0x100578450, 64 bytes, base-object destructor, inline, placed by class name
    // DBRowType::~DBRowType()
    void DBRowType::~DBRowType() {
        field_0 = &PTR__DBRowType_100f04330;
        (&field_80)->~Array();
        (&field_56)->~Array();
        ~ConfigType();
    }

    // 0x100578a50, 16 bytes, complete-object constructor, inline, placed by class name
    // DBRowType::DBRowType(BaseTemplateConfigTypeList<DBRowType>*, unsigned int): jumps straight to the base-object constructor

    // 0x100578a60, 112 bytes, base-object constructor, inline, placed by class name
    // DBRowType::DBRowType(BaseTemplateConfigTypeList<DBRowType>*, unsigned int)
    void DBRowType::DBRowType(BaseTemplateConfigTypeList* param_1, uint param_2) {
        new (this) ConfigType<DBRowType>(param_1, param_2);
        new (this) MakeSharedPool<DBRowType, 128>();
        field_0 = &PTR__DBRowType_100f04330;
        new (&field_56) Array<Array<VarValue, eastl::allocator>, eastl::allocator>();
        new (&field_80) Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>();
    }

} // namespace jag::game
