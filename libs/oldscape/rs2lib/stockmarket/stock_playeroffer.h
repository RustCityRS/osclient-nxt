// libs/oldscape/rs2lib/stockmarket/stock_playeroffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib {
    class StockPlayerOffer {
    public:
        void SetItem(int arg1);
        EnumOptionToggle GetPrice() const;
        void SetPrice(int arg1);
        void SetCompletedCount(int arg1);
        void SetAddedCount(int arg1);
        unsigned int GetCompletedCount() const;
        unsigned int GetItem() const;
        unsigned int GetAddedCount() const;
        unsigned int GetCompletedGold() const;
        StockPlayerOffer();
        void SetOfferStatus(OFFER_STATUS oFFER_STATUS);
        void SetOfferType(OFFER_TYPE oFFER_TYPE);
        void SetCompletedGold(int arg1);
        StockPlayerOffer(PacketJ<Array<unsigned char>>& packetJ, bool arg2, ErrorCapture& errorCapture);
        void Pack(PacketJ<Array<unsigned char>>& packetJ, bool arg2) const;
        void DecodeTypeStatus(unsigned char arg1);
        void UnpackVariables(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture);
        unsigned int EncodeTypeStatus() const;
        void PackVariables(PacketJ<Array<unsigned char>>& packetJ) const;
        uint8_t GetOfferStatus() const;
        uint8_t GetOfferType() const;

    private:
        uint8_t m_offerStatus;
        uint8_t m_offerType;
        uint16_t field_2;
        unsigned int m_item;
        unsigned int m_price;
        unsigned int m_addedCount;
        unsigned int m_completedCount;
        unsigned int m_completedGold;
        uint8_t field_24;
        uint8_t _unknown_25[3];
        unsigned int field_28;
        uint8_t _unknown_32[4];
    };

    // 0x100207330
    void StockPlayerOffer::SetCompletedGold(int arg1) {
        m_gameplayLevel = arg1;
    }

} // namespace jag::oldscape::rs2lib
