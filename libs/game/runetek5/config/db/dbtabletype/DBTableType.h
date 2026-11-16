// libs/game/runetek5/config/db/dbtabletype/DBTableType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class DBTableType {
    public:
        // virtual methods in vtable order
        virtual ~DBTableType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        void GetColumnDefaultValue(unsigned int, unsigned int, unsigned int) const;
        HasColumnDefaultValues(unsigned int) const;
        void GetColumnDefaultValues(unsigned int) const;
        void GetColumnVarType(unsigned int) const;
        DBTableType(BaseTemplateConfigTypeList<DBTableType>*, unsigned int);

        // data members, from how the methods use this: 88 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[52];
    };

    // 0x10055ae80, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // DBTableType::~DBTableType()
    void DBTableType::~DBTableType() {
        ~DBTableType(this);
        operator_delete(this);
    }

    // 0x10057df10, 16 bytes, complete-object destructor, inline, placed by class name
    // DBTableType::~DBTableType(): jumps straight to the base-object destructor

    // 0x10057df20, 64 bytes, base-object destructor, inline, placed by class name
    // DBTableType::~DBTableType()
    void DBTableType::~DBTableType() {
        field_0 = &PTR__DBTableType_100f04368;
        (&field_80)->~Array();
        (&field_56)->~Array();
        ~ConfigType();
    }

    // 0x10057e160, 16 bytes, complete-object constructor, inline, placed by class name
    // DBTableType::DBTableType(BaseTemplateConfigTypeList<DBTableType>*, unsigned int): jumps straight to the base-object constructor

    // 0x10057e170, 112 bytes, base-object constructor, inline, placed by class name
    // DBTableType::DBTableType(BaseTemplateConfigTypeList<DBTableType>*, unsigned int)
    void DBTableType::DBTableType(BaseTemplateConfigTypeList* param_1, uint param_2) {
        new (this) ConfigType<DBTableType>(param_1, param_2);
        new (this) MakeSharedPool<DBTableType, 4>();
        field_0 = &PTR__DBTableType_100f04368;
        new (&field_56) Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>();
        new (&field_80) Array<Array<VarValue, eastl::allocator>, eastl::allocator>();
    }

} // namespace jag::game
