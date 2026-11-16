// libs/oldscape/rs2lib/configdecoder/ItemCodeType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::configdecoder {
    class ItemCodeType {
    public:
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);

        uint8_t _unknown_0[1];
    };

    // 0x1002288a0
    void ItemCodeType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint64_t in_RAX;

        uint32_t uVar1 = (uint32_t)((unsigned long)in_RAX >> 32);
        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/configdecoder/"
                  "ItemCodeType.cpp",
                  12, "Error unrecognised .itemcode config code: %i", (((uint64_t)uVar1 << 32) | (uint32_t)arg2));
    }

    // 0x1002288e0
    void ItemCodeType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode((ItemCodeType*)packetJ, packetJ, (unsigned int)bVar1);
        }
    }

} // namespace jag::oldscape::configdecoder
