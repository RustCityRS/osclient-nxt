// libs/oldscape/rs2lib/configdecoder/GameLogEventType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::configdecoder {
    class GameLogEventType {
    public:
        GameLogEventType(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        int GetID();

        // data members, from how the methods use this: 4 bytes
        int m_iD; // offset 0
    };

    // 0x100266fc0, 16 bytes, base-object constructor, placed by class name and debug map
    // GameLogEventType::GameLogEventType(int)
    void GameLogEventType::GameLogEventType(int param_1) {
        m_iD = param_1;
    }

    // 0x100266fd0, 16 bytes, complete-object constructor, placed by class name and debug map
    // GameLogEventType::GameLogEventType(int): jumps straight to the base-object constructor

    // 0x100266fe0, 64 bytes, placed by class name and debug map
    // GameLogEventType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void GameLogEventType::Decode(PacketJ* param_1, int param_2) {
        undefined8 in_RAX;
        undefined4 uVar2;
        undefined8 uVar1;

        uVar2 = (undefined4)((ulong)in_RAX >> 32);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "configdecoder/GameLogEventType.cpp",
                            16, "Error unrecognised .gamelogevent config code: %i", CONCAT44(uVar2, param_2));
    }

    // 0x100267020, 48 bytes, placed by class name and debug map
    // GameLogEventType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void GameLogEventType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode((GameLogEventType*)param_1, param_1, (uint)bVar1);
        }
    }

    // 0x100267050, 16 bytes, placed by class name and debug map
    // GameLogEventType::GetID()
    int GameLogEventType::GetID() {
        return m_iD;
    }

} // namespace jag::oldscape::configdecoder
