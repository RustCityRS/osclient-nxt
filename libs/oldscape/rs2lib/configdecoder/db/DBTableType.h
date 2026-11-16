// libs/oldscape/rs2lib/configdecoder/db/DBTableType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class DBTableType {
    public:
        void Init(jagex3::Js5* js5);
        auto List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void ResetCache();
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        void GetColumnDefaultValue(unsigned int arg1, unsigned int arg2, unsigned int arg3) const;
        bool HasColumnDefaultValues(unsigned int arg1) const;
        void GetColumnDefaultValues(unsigned int arg1) const;
        Array<game::VarValue>* GetColumnVarType(unsigned int arg1) const;
        DBTableType();
        ~DBTableType();
        static int64_t m_pConfigClient;
        static LRUHashCache<DBTableType, 64ul, 65ul, false, unsigned long long> m_recentUse;

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        Array<ScriptVarType const*>* field_16;
        uint8_t _unknown_24[8];
    };

    // 0x1002575c0
    DBTableType::DBTableType() {
        new (this) Array<Array<ScriptVarType const*>>();
        new (&field_24) Array<Array<game::VarValue>>();
    }

    // 0x1002576a0
    DBTableType::~DBTableType() {
        field_24.~Array();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100257600
    ref_counter_shared<oldscape::configdecoder::DBTableType>::ref_counter_shared(
        unsigned long arg1, oldscape::configdecoder::DBTableType* dbTableType)
        : ref_counter_base() {}

    // 0x100257640
    void ref_counter_shared<oldscape::configdecoder::DBTableType>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::DBTableType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((DBTableType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~DBTableType();
                    prVar1 =
                        (ref_counter_shared<oldscape::configdecoder::DBTableType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 48;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag
