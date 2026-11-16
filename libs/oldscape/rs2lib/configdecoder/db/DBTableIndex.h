// libs/oldscape/rs2lib/configdecoder/db/DBTableIndex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class DBTableIndex {
    public:
        void GetDBRowsForValue(const game::VarValue& varValue) const;
        DBTableIndex(PacketJ<Array<unsigned char>>& packetJ);
        unsigned long Deserialise(PacketJ<Array<unsigned char>>& packetJ);
        uint8_t* GetDBRowsForValue(const game::VarValue& varValue, int arg2) const;
        ~DBTableIndex();

    private:
        long field_0;
        vector_map<game::VarValue, Array<int>>* field_8;
    };

    // 0x1000b99f0
    void DBTableIndex::GetDBRowsForValue(const game::VarValue& varValue) const {
        GetDBRowsForValue(varValue, 0);
    }

    // 0x100255430
    DBTableIndex::~DBTableIndex() {}

} // namespace jag::oldscape

namespace jag::game {
    class DBTableIndex {
    public:
        ~DBTableIndex();
        DBTableIndex(PacketT<Array<unsigned char>>& arg1);
        unsigned long Deserialise(PacketT<Array<unsigned char>>& arg1);
        uint8_t* GetDBRowsForValue(const VarValue& varValue, unsigned int arg2) const;

    private:
        long field_0;
        vector_map<VarValue, Array<int>>* field_8;
    };

} // namespace jag::game
