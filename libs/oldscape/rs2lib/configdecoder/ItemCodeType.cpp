// libs/oldscape/rs2lib/configdecoder/ItemCodeType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::configdecoder {
    class ItemCodeType {
    public:
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1002288a0, 64 bytes, placed by class name and debug map
    // ItemCodeType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void ItemCodeType::Decode(PacketJ* param_1, int param_2) {
        undefined8 in_RAX;
        undefined4 uVar2;
        undefined8 uVar1;

        uVar2 = (undefined4)((ulong)in_RAX >> 32);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "configdecoder/ItemCodeType.cpp",
                            12, "Error unrecognised .itemcode config code: %i", CONCAT44(uVar2, param_2));
    }

    // 0x1002288e0, 48 bytes, placed by class name and debug map
    // ItemCodeType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void ItemCodeType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode((ItemCodeType*)param_1, param_1, (uint)bVar1);
        }
    }

} // namespace jag::oldscape::configdecoder
