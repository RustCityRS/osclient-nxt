// libs/game/runetek5/config/defaults/AudioDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class AudioDefaults {
    public:
        AudioDefaults(PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 4 bytes
        undefined4 field_0; // offset 0
    };

    // 0x100551640, 144 bytes, base-object constructor, placed by class name and debug map
    // AudioDefaults::AudioDefaults(PacketT<Array<unsigned char, eastl::allocator> >&)
    void AudioDefaults::AudioDefaults(PacketT* param_1) {
        byte bVar1;
        undefined4 uVar2;
        undefined8 in_RAX;
        undefined8 uVar3;

        field_0 = 4294967295;
        while (true) {
            while (true) {
                bVar1 = param_1->g1();
                uVar2 = (undefined4)((ulong)in_RAX >> 32);
                if (bVar1 != 1)
                    break;
                uVar2 = param_1->g4();
                field_0 = uVar2;
            }
            if (bVar1 == 0)
                break;
            uVar3 = logger::default_logger();
            in_RAX = CONCAT44(uVar2, (uint)bVar1);
            logger::Logger::Log(uVar3, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/defaults/AudioDefaults.cpp",
                                23, "AudioDefaults: Error unrecognised .defaults config code: %u", in_RAX);
        }
    }

    // 0x1005516d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // AudioDefaults::AudioDefaults(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

} // namespace jag::game
