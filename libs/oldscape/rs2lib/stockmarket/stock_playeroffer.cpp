// libs/oldscape/rs2lib/stockmarket/stock_playeroffer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "stock_playeroffer.h"

namespace jag::oldscape::rs2lib {
    // 0x10000c300: StockPlayerOffer::SetItem(int) has the same machine code as jag::math::Rect<int>::SetY(int)

    // 0x100024170: StockPlayerOffer::GetPrice() const has the same machine code as option::IScriptOption::GetId() const

    // 0x10005fd90: StockPlayerOffer::SetPrice(int) has the same machine code as widgets::Widget::SetBackgroundColour(unsigned int)

    // 0x10005fe40: StockPlayerOffer::SetCompletedCount(int) has the same machine code as widgets::Widget::SetTextColour(unsigned int)

    // 0x10005fe50: StockPlayerOffer::SetAddedCount(int) has the same machine code as widgets::Widget::SetBorderColour(unsigned int)

    // 0x100066b70: StockPlayerOffer::GetCompletedCount() const has the same machine code as widgets::Widget::GetTextColour() const

    // 0x100073980: StockPlayerOffer::GetItem() const has the same machine code as jag::math::Rect<int>::MinY() const

    // 0x1000e5d50, the same machine code as CoordZoneSource::GetRotation() const
    unsigned int StockPlayerOffer::GetAddedCount() const {
        return m_price;
    }

    // 0x1001117e0: StockPlayerOffer::GetCompletedGold() const has the same machine code as jagex3::Js5::GetIndexCrc() const

    // 0x100207310
    void StockPlayerOffer::SetOfferStatus(StockPlayerOffer::OFFER_STATUS oFFER_STATUS) {
        m_offerStatus = (uint8_t)oFFER_STATUS;
    }

    // 0x100207320
    void StockPlayerOffer::SetOfferType(StockPlayerOffer::OFFER_TYPE oFFER_TYPE) {
        m_offerType = (uint8_t)oFFER_TYPE;
    }

    // 0x100207510
    void StockPlayerOffer::Pack(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2) const {
        uint32_t in_register_00000011;

        uint8_t bVar1 = EncodeTypeStatus();
        packetJ.p1<shared::LoginProt::ID>((unsigned int)bVar1);
        packetJ.p2<int>(m_item);
        packetJ.p4<int>((unsigned long)m_price);
        packetJ.p4<int>((unsigned long)m_addedCount);
        packetJ.p4<int>((unsigned long)m_completedCount);
        packetJ.p4<int>((unsigned long)m_completedGold);
        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            PackVariables(packetJ);
        }
    }

    // 0x1002075b0
    StockPlayerOffer::StockPlayerOffer()
        : m_offerStatus(0), m_offerType(1), field_28(0), m_item(0), m_price(0), m_addedCount(0), m_completedCount(0) {
        *(uint64_t*)((long)&m_completedCount + 1) = 0;
    }

    // 0x1002075e0
    StockPlayerOffer::StockPlayerOffer(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2,
                                       ErrorCapture& errorCapture) {
        uint64_t in_register_00000011;

        StockPlayerOffer();
        DecodeTypeStatus(packetJ.g1());
        unsigned short uVar1 = packetJ.g2();
        m_item = (unsigned int)uVar1;
        unsigned int uVar2 = packetJ.g4();
        m_price = uVar2;
        uVar2 = packetJ.g4();
        m_addedCount = uVar2;
        uVar2 = packetJ.g4();
        m_completedCount = uVar2;
        uVar2 = packetJ.g4();
        m_completedGold = uVar2;
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            UnpackVariables(packetJ, errorCapture);
        }
    }

    // 0x100207670
    void StockPlayerOffer::DecodeTypeStatus(unsigned char arg1) {
        m_offerStatus = arg1 & 7;
        m_offerType = arg1 >> 3 & 1;
    }

    // 0x100207690
    void StockPlayerOffer::UnpackVariables(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                           ErrorCapture& errorCapture) {
        bool cVar1;
        int iVar4;
        char* str;

        field_24 = 0;
        unsigned int uVar3 = 0;
        do {
            cVar1 = packetJ.g1();
            if (cVar1 == -1) {
                iVar4 = 3;
            } else if (!cVar1) {
                do {
                    cVar1 = packetJ.g1();
                    if (cVar1 == -1) {
                        iVar4 = 5;
                    } else {
                        packetJ.SetPos(packetJ.size() - 1);
                        if (packetJ.g2() == 0) {
                            if (field_24 == '\0') {
                                uVar3 = packetJ.g4();
                                field_24 = 1;
                                iVar4 = 0;
                                goto LAB_100207705;
                            }
                            str = "Received the same objvar twice when unpacking stockmarket offer!";
                        } else {
                            str = "Only the legacty objvar, id=0, is supported in oldscape!";
                        }
                        errorCapture.Raise(str);
                        iVar4 = 1;
                    }
                LAB_100207705:
                } while (iVar4 == 0);
                if (iVar4 == 5) {
                    iVar4 = 0;
                }
            } else {
                errorCapture.Raise("Only vars of base type integer are supported in oldscape!");
                iVar4 = 1;
            }
            if (iVar4 != 0) {
                if (iVar4 == 3) {
                    if (field_24 == '\0') {
                        uVar3 = 0;
                    }
                    field_28 = uVar3;
                }
                return;
            }
        } while (true);
    }

    // 0x1002077c0
    unsigned int StockPlayerOffer::EncodeTypeStatus() const {
        unsigned int uVar1;

        uVar1._0_1_ = m_offerStatus;
        uVar1._1_1_ = m_offerType;
        uVar1._2_2_ = field_2;
        unsigned int uVar2 = (unsigned int)((uint8_t)uVar1 | 8);
        if (m_offerType != 1) {
            uVar2 = uVar1;
        }
        return uVar2 & 255;
    }

    // 0x1002077e0
    void StockPlayerOffer::PackVariables(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) const {
        if (field_24 != '\0') {
            packetJ.p1<shared::LoginProt::ID>(0);
            packetJ.p2<int>(0);
            packetJ.p4<int>((unsigned long)field_28);
            packetJ.p1<shared::LoginProt::ID>(255);
        }
        packetJ.p1<shared::LoginProt::ID>(255);
    }

    // 0x100207840
    uint8_t StockPlayerOffer::GetOfferStatus() const {
        return m_offerStatus;
    }

    // 0x100207850
    uint8_t StockPlayerOffer::GetOfferType() const {
        return m_offerType;
    }

} // namespace jag::oldscape::rs2lib
