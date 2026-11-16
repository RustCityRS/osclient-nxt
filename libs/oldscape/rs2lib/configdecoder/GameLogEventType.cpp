// libs/oldscape/rs2lib/configdecoder/GameLogEventType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::configdecoder {
    class GameLogEventType {
    public:
        GameLogEventType(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        int GetID();

    private:
        int m_iD;
    };

    // 0x100266fc0
    GameLogEventType::GameLogEventType(int arg1) : m_iD(arg1) {}

    // 0x100266fe0
    void GameLogEventType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint64_t in_RAX;

        uint32_t uVar1 = (uint32_t)((unsigned long)in_RAX >> 32);
        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/configdecoder/"
                  "GameLogEventType.cpp",
                  16, "Error unrecognised .gamelogevent config code: %i", (((uint64_t)uVar1 << 32) | (uint32_t)arg2));
    }

    // 0x100267020
    void GameLogEventType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode((GameLogEventType*)packetJ, packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100267050
    int GameLogEventType::GetID() {
        return m_iD;
    }

} // namespace jag::oldscape::configdecoder
