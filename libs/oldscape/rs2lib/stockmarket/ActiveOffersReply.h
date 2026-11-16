// libs/oldscape/rs2lib/stockmarket/ActiveOffersReply.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib {
    class ActiveOffersReply {
    public:
        class ActiveOffer;
        ~ActiveOffersReply();
        ActiveOffersReply(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture);
        void Pack(PacketJ<Array<unsigned char>>& packetJ);
        ActiveOffersReply(PacketJ<Array<unsigned char>>& packetJ, bool arg2);
        void PackClient(PacketJ<Array<unsigned char>>& packetJ, int arg2, bool arg3);
        void SortList(std::function<bool(ActiveOffer const&, ActiveOffer const&)> callback, bool arg2);
        void GetActiveOfferCount() const;
        void GetActiveOffer(unsigned int arg1) const;
        static uint8_t compareByOfferMade[48];
        static uint8_t compareByNodeId[48];
        static uint8_t compareByPrice[48];
        static uint8_t compareByDisplayName[48];
        static uint8_t compareByCount[48];

    private:
        unsigned int field_0;
        uint8_t _unknown_4[28];
    };

    class ActiveOffersReply::ActiveOffer {
    public:
        void GetOffer() const;
        void GetUserhash() const;
        long long GetOfferMade() const;
        unsigned int GetNodeId() const;
        ~ActiveOffer();
        ActiveOffer(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture);
        void Pack(PacketJ<Array<unsigned char>>& packetJ);
        ActiveOffer(PacketJ<Array<unsigned char>>& packetJ, StockPlayerOffer::OFFER_TYPE oFFER_TYPE, int arg3);
        void PackClient(PacketJ<Array<unsigned char>>& packetJ);
        ActiveOffer(long long arg1, int arg2, long long arg3, const StockPlayerOffer& stockPlayerOffer);
        void SetDisplayName(const eastl::string& str1, const eastl::string& str2);
        uint8_t* getDisplayName() const;
        uint8_t* getOldDisplayName() const;

    private:
        long long field_0;
        unsigned int m_nodeId;
        uint8_t _unknown_12[4];
        long long m_offerMade;
        Minimap field_24;
    };

    // 0x10013c350
    ActiveOffersReply::~ActiveOffersReply() {
        field_8.~Array();
    }

    // 0x10013c4f0
    ActiveOffersReply::ActiveOffer::~ActiveOffer() {
        ((field_24 + 64))->~basic_string();
        ((field_24 + 32))->~basic_string();
    }

    // 0x100207450
    ActiveOffersReply::ActiveOffer::ActiveOffer(long long arg1, int arg2, long long arg3,
                                                const StockPlayerOffer& stockPlayerOffer)
        : field_0(arg1), m_nodeId(arg2), m_offerMade(arg3) {
        uint8_t bVar4 = stockPlayerOffer.m_offerType;
        uint16_t uVar5 = stockPlayerOffer.field_2;
        unsigned int uVar6 = stockPlayerOffer.m_item;
        uint64_t uVar1 = *(uint64_t*)&stockPlayerOffer.m_price;
        uint64_t uVar2 = *(uint64_t*)&stockPlayerOffer.m_completedCount;
        uint64_t uVar3 = *(uint64_t*)&stockPlayerOffer.field_24;
        field_24[0] = stockPlayerOffer.m_offerStatus;
        field_24[1] = bVar4;
        *(uint16_t*)(field_24 + 2) = uVar5;
        *(unsigned int*)(field_24 + 4) = uVar6;
        *(uint64_t*)(field_24 + 8) = uVar1;
        *(uint64_t*)(field_24 + 16) = uVar2;
        *(uint64_t*)(field_24 + 24) = uVar3;
        new ((field_24 + 32)) eastl::string();
        new ((field_24 + 64)) eastl::string();
    }

    // 0x1002163e0
    ActiveOffersReply::SortList(
        std::function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>,
        bool)::$_9::~$_9() {}

    // 0x100222d90
    bool ActiveOffersReply::SortList(
        std::function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>,
        bool)::$_9::operator()(const eastl::unique_ptr<ActiveOffersReply::ActiveOffer>& activeOffer1,
                               const eastl::unique_ptr<ActiveOffersReply::ActiveOffer>& activeOffer2) const {
        ActiveOffer* activeOffer1_00;
        ActiveOffer* activeOffer2_00;

        __9 _Var1 = this[48];
        activeOffer1_00 = (ActiveOffer*)activeOffer1.operator->();
        activeOffer2_00 = (ActiveOffer*)activeOffer2.operator->();
        __9 _Var2 = (__9)std::
            function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>::operator()(
                (function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>*)this,
                activeOffer1_00, activeOffer2_00);
        return _Var1 == _Var2;
    }

} // namespace jag::oldscape::rs2lib
