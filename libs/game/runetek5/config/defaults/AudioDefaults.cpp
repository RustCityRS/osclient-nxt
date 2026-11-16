// libs/game/runetek5/config/defaults/AudioDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class AudioDefaults {
    public:
        AudioDefaults(PacketT<Array<unsigned char>>& arg1);

    private:
        uint32_t field_0;
    };

    // 0x100551640
    AudioDefaults::AudioDefaults(PacketT<Array<unsigned char>>& arg1) : field_0(4294967295) {
        uint8_t bVar1;
        uint32_t uVar2;
        uint64_t in_RAX;
        Logger* this_00;

        while (true) {
            while (true) {
                bVar1 = arg1.g1();
                uVar2 = (uint32_t)((unsigned long)in_RAX >> 32);
                if (bVar1 != 1)
                    break;
                uVar2 = arg1.g4();
                field_0 = uVar2;
            }
            if (bVar1 == 0)
                break;
            this_00 = logger::default_logger();
            in_RAX = (((uint64_t)uVar2 << 32) | (uint32_t)((unsigned int)bVar1));
            this_00->Log(false, 8,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                         "defaults/AudioDefaults.cpp",
                         23, "AudioDefaults: Error unrecognised .defaults config code: %u", in_RAX);
        }
    }

} // namespace jag::game
