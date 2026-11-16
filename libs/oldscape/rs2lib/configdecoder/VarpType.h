// libs/oldscape/rs2lib/configdecoder/VarpType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class VarpType {
    public:
        void ResetCache();
        VarpType();
        void Init(jagex3::Js5* js5);
        shared_ptr<midi2::MidiPlayerMainThread>* List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        static int64_t m_pConfigClient;
        static LRUHashCache<VarpType, 64ul, 65ul, false, unsigned long long> m_recentUse;
        static int64_t m_numDefinitions;

    private:
        unsigned int field_0;
    };

    // 0x100112c40
    void VarpType::ResetCache() {
        m_recentUse.Reset();
    }

} // namespace jag::oldscape::configdecoder
