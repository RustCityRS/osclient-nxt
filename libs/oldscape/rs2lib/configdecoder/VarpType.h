// libs/oldscape/rs2lib/configdecoder/VarpType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class VarpType {
    public:
        void ResetCache();
        VarpType();
        void Init(jagex3::Js5*);
        shared_ptr* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        static /* 8 bytes */ m_pConfigClient;
        static /* 5376 bytes */ m_recentUse;
        static /* 8 bytes */ m_numDefinitions;

        // data members, from how the methods use this: 4 bytes
        uint field_0; // offset 0
    };

    // 0x100112c40, 32 bytes, inline, placed by class name and debug map
    // VarpType::ResetCache()
    void VarpType::ResetCache() {
        m_recentUse.Reset();
    }

} // namespace jag::oldscape::configdecoder
