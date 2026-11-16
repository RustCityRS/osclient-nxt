// libs/game/runetek5/config/db/dbtabletype/DBTableType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class DBTableType {
    public:
        // virtual methods in vtable order
        virtual ~DBTableType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        void GetColumnDefaultValue(unsigned int arg1, unsigned int arg2, unsigned int arg3) const;
        bool HasColumnDefaultValues(unsigned int arg1) const;
        void GetColumnDefaultValues(unsigned int arg1) const;
        Array<VarValue>* GetColumnVarType(unsigned int arg1) const;
        DBTableType(BaseTemplateConfigTypeList<DBTableType>* baseTemplateConfigTypeList, unsigned int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<DBTableType>* field_24;
        int field_32;
        uint8_t _unknown_36[52];
    };

    // 0x10057df20
    DBTableType::~DBTableType() {
        field_80.~Array();
        field_56.~Array();
    }

    // 0x10057e170
    DBTableType::DBTableType(BaseTemplateConfigTypeList<DBTableType>* baseTemplateConfigTypeList, unsigned int arg2)
        : ConfigType<DBTableType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<DBTableType, 4>() {}

} // namespace jag::game
