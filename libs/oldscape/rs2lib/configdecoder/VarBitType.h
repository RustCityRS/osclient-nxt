// libs/oldscape/rs2lib/configdecoder/VarBitType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class VarBitType {
    public:
        void ResetCache();
        void Init(jagex3::Js5*);
        VarBitType* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        uint GetVarbitValue(int);
        uint SetVarbitValue(int, int, bool*);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        void InitMaskLoopUpTable();
        static /* 8 bytes */ m_pConfigClient;
        static /* 5376 bytes */ m_recentUse;
        static /* 128 bytes */ m_maskLookUp;

        // data members, from how the methods use this: 16 bytes
        uint field_0; // offset 0
        uint field_4; // offset 4
        uint field_8; // offset 8
        char _unknown_12[4];
    };

    // 0x100112c20, 32 bytes, inline, placed by class name and debug map
    // VarBitType::ResetCache()
    void VarBitType::ResetCache() {
        m_recentUse.Reset();
    }

} // namespace jag::oldscape::configdecoder
