// libs/oldscape/rs2lib/configdecoder/VarBitType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class VarBitType {
    public:
        void ResetCache();
        void Init(jagex3::Js5* js5);
        auto List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        unsigned int GetVarbitValue(int arg1);
        unsigned int SetVarbitValue(int arg1, int arg2, bool* arg3);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        void InitMaskLoopUpTable();
        static int64_t m_pConfigClient;
        static LRUHashCache<VarBitType, 64ul, 65ul, false, unsigned long long> m_recentUse;
        static uint8_t m_maskLookUp[128];

    private:
        unsigned int field_0;
        unsigned int field_4;
        unsigned int field_8;
        uint8_t _unknown_12[4];
    };

    // 0x100112c20
    void VarBitType::ResetCache() {
        m_recentUse.Reset();
    }

} // namespace jag::oldscape::configdecoder
