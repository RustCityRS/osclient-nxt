// libs/oldscape/rs2lib/stockmarket/stock_playeroffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib {
    class StockPlayerOffer {
    public:
        SetItem(int);
        GetPrice() const;
        SetPrice(int);
        void SetCompletedCount(int);
        SetAddedCount(int);
        GetCompletedCount() const;
        GetItem() const;
        GetAddedCount() const;
        GetCompletedGold() const;
        StockPlayerOffer();
        void SetOfferStatus(OFFER_STATUS);
        void SetOfferType(OFFER_TYPE);
        SetCompletedGold(int);
        StockPlayerOffer(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, ErrorCapture&);
        void Pack(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool) const;
        void DecodeTypeStatus(unsigned char);
        void UnpackVariables(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, ErrorCapture&);
        uint EncodeTypeStatus() const;
        void PackVariables(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&) const;
        byte GetOfferStatus() const;
        byte GetOfferType() const;

        // data members, from how the methods use this: 36 bytes
        byte m_offerStatus;         // offset 0
        byte m_offerType;           // offset 1
        undefined2 field_2;         // offset 2
        uint field_4;               // offset 4
        undefined4 field_8;         // offset 8
        undefined4 field_12;        // offset 12
        int m_completedCount;       // offset 16
        undefined4 m_completedGold; // offset 20
        undefined1 field_24;        // offset 24
        char _unknown_25[3];
        undefined4 field_28; // offset 28
        char _unknown_32[4];
    };

    // 0x100207330, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // StockPlayerOffer::SetCompletedGold(int)
    /* game::PlayerStat::SetGameplayLevel(unsigned int) */

    void game::PlayerStat::SetGameplayLevel(uint param_1) {
        m_gameplayLevel = param_1;
    }

} // namespace jag::oldscape::rs2lib
