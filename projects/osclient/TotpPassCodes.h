// projects/osclient/TotpPassCodes.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class TotpPassCodes {
    public:
        TotpPassCodes();
        InitFromFile(File&);
        ulong InitFromLegacyFormat(File&);
        void SaveToFile();
        void MainLogic();
        TotpPassCodes* LoadFile(File&);
        Deserialise(PacketJ<Array<unsigned char, eastl::allocator>>*);
        void PutTotpPassCode(int, int);
        GetTotpPassCode(int) const;
        Serialise() const;
        ~TotpPassCodes();

        // data members, from how the methods use this: 345 bytes
        char _unknown_0[344];
        undefined1 field_344; // offset 344
    };

    // 0x10013cd70, 16 bytes, complete-object destructor, inline, placed by class name
    // TotpPassCodes::~TotpPassCodes(): jumps straight to the base-object destructor

    // 0x10013cd80, 48 bytes, base-object destructor, inline, placed by class name
    // TotpPassCodes::~TotpPassCodes()
    void TotpPassCodes::~TotpPassCodes() {
        (&field_304)->~vector_map();
        ~pair();
    }

} // namespace jag::oldscape

namespace jag {
    // 0x1000c0490, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::IsValid() const
    bool
    PacketT<Array<unsigned char, eastl::allocator>>::IsValid(PacketT<Array<unsigned char, eastl::allocator>>* this) {
        return GetTextureAtlas() != 0;
    }

    // 0x1000c04b0, 96 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::Skip(unsigned long)
    void PacketT<Array<unsigned char, eastl::allocator>>::Skip(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                               ulong param_1) {
        long lVar1;
        ulong uVar2;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + _size <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 170,
                      "Packet: Invalid pos");
        }
        *(ulong*)(this + 24) = *(long*)(this + 24) + param_1;
    }

} // namespace jag
