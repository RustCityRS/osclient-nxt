// libs/oldscape/rs2lib/configdecoder/db/DBRowType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class DBRowType {
    public:
        uint32_t GetDbTableId() const;
        void Init(jagex3::Js5* js5);
        auto List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void ResetCache();
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        void GetColumnVarValue(unsigned int arg1, unsigned int arg2, unsigned int arg3) const;
        bool HasColumnVarValues(unsigned int arg1) const;
        void GetColumnVarValues(unsigned int arg1) const;
        void GetColumnVarType(unsigned int arg1) const;
        DBRowType();
        ~DBRowType();
        static int64_t m_pConfigClient;
        static LRUHashCache<DBRowType, 64ul, 65ul, false, unsigned long long> m_recentUse;

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        Array<game::VarValue>* field_16;
        uint8_t _unknown_24[24];
        uint32_t m_dbTableId;
        uint8_t _unknown_52[4];
    };

    // 0x1000b9a40
    uint32_t DBRowType::GetDbTableId() const {
        return field_48;
    }

    // 0x100253d10
    DBRowType::DBRowType() : Array<Array<game::VarValue>>() {}

    // 0x100253f40
    DBRowType::~DBRowType() {
        field_24.~Array();
    }

} // namespace jag::oldscape::configdecoder
