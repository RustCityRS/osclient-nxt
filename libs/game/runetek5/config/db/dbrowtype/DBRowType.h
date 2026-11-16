// libs/game/runetek5/config/db/dbrowtype/DBRowType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class DBRowType {
    public:
        // virtual methods in vtable order
        virtual ~DBRowType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        void GetColumnVarValue(unsigned int arg1, unsigned int arg2, unsigned int arg3) const;
        bool HasColumnVarValues(unsigned int arg1) const;
        void GetColumnVarValues(unsigned int arg1) const;
        void GetColumnVarType(unsigned int arg1) const;
        DBRowType(BaseTemplateConfigTypeList<DBRowType>* baseTemplateConfigTypeList, unsigned int arg2);

    private:
        uint8_t _unknown_8[16];
        BaseTemplateConfigTypeList<DBRowType>* field_24;
        int field_32;
        uint8_t _unknown_36[68];
        uint32_t field_104;
        uint8_t _unknown_108[4];
    };

    // 0x100578450
    DBRowType::~DBRowType() {
        field_80.~Array();
        field_56.~Array();
    }

    // 0x100578a60
    DBRowType::DBRowType(BaseTemplateConfigTypeList<DBRowType>* baseTemplateConfigTypeList, unsigned int arg2)
        : ConfigType<DBRowType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<DBRowType, 128>() {}

} // namespace jag::game
