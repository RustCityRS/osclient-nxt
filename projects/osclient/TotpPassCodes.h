// projects/osclient/TotpPassCodes.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class TotpPassCodes {
    public:
        TotpPassCodes();
        uint32_t InitFromFile(File& file);
        unsigned long InitFromLegacyFormat(File& file);
        void SaveToFile();
        void MainLogic();
        TotpPassCodes* LoadFile(File& file);
        uint32_t Deserialise(PacketJ<Array<unsigned char>>* packetJ);
        void PutTotpPassCode(int arg1, int arg2);
        uint32_t GetTotpPassCode(int arg1) const;
        auto Serialise() const;
        ~TotpPassCodes();

    private:
        uint8_t _unknown_0[304];
        int field_304;
        uint8_t _unknown_308[36];
        uint8_t field_344;
    };

    // 0x10013cd80
    TotpPassCodes::~TotpPassCodes() {}

} // namespace jag::oldscape

namespace jag {
    // 0x1000c0490
    bool PacketT<Array<unsigned char>>::IsValid() const {
        return GetTextureAtlas() != 0;
    }

    // 0x1000c04b0
    void PacketT<Array<unsigned char>>::Skip(unsigned long arg1) {
        long lVar1 = *(long*)(this + 24);
        if (end() < lVar1 + arg1) {
            LogAssert("m_pos + _size <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 170,
                      "Packet: Invalid pos");
        }
        *(unsigned long*)(this + 24) = *(long*)(this + 24) + arg1;
    }

} // namespace jag
