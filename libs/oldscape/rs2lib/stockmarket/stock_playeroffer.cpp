// libs/oldscape/rs2lib/stockmarket/stock_playeroffer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "stock_playeroffer.h"

namespace jag::oldscape::rs2lib {
    // 0x10000c300: the linker folded this into jag::math::Rect<int>::SetY(int), which has identical code
    StockPlayerOffer::SetItem(int);

    // 0x100024170: the linker folded this into option::IScriptOption::GetId() const, which has identical code
    StockPlayerOffer::GetPrice() const;

    // 0x10005fd90: the linker folded this into widgets::Widget::SetBackgroundColour(unsigned int), which has identical code
    StockPlayerOffer::SetPrice(int);

    // 0x10005fe40: the linker folded this into widgets::Widget::SetTextColour(unsigned int), which has identical code
    StockPlayerOffer::SetCompletedCount(int);

    // 0x10005fe50: the linker folded this into widgets::Widget::SetBorderColour(unsigned int), which has identical code
    StockPlayerOffer::SetAddedCount(int);

    // 0x100066b70: the linker folded this into widgets::Widget::GetTextColour() const, which has identical code
    int StockPlayerOffer::GetCompletedCount() const;

    // 0x100073980: the linker folded this into jag::math::Rect<int>::MinY() const, which has identical code
    uint StockPlayerOffer::GetItem() const;

    // 0x1000e5d50: the linker folded this into CoordZoneSource::GetRotation() const, which has identical code
    int StockPlayerOffer::GetAddedCount() const;

    // 0x1001117e0: the linker folded this into jagex3::Js5::GetIndexCrc() const, which has identical code
    StockPlayerOffer::GetCompletedGold() const;

    // 0x100207300, 16 bytes, complete-object constructor, placed by class name and debug map
    // StockPlayerOffer::StockPlayerOffer(): jumps straight to the base-object constructor

    // 0x100207310, 16 bytes, placed by class name and debug map
    // StockPlayerOffer::SetOfferStatus(StockPlayerOffer::OFFER_STATUS)
    void StockPlayerOffer::SetOfferStatus(byte param_2) {
        m_offerStatus = param_2;
    }

    // 0x100207320, 16 bytes, placed by class name and debug map
    // StockPlayerOffer::SetOfferType(StockPlayerOffer::OFFER_TYPE)
    void StockPlayerOffer::SetOfferType(byte param_2) {
        m_offerType = param_2;
    }

    // 0x1002073c0, 144 bytes, complete-object constructor, placed by class name
    // StockPlayerOffer::StockPlayerOffer(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, ErrorCapture&)
    void StockPlayerOffer::StockPlayerOffer(PacketJ* param_1, bool param_2, ErrorCapture* param_3) {
        uchar uVar1;
        ushort uVar2;
        undefined4 uVar3;
        int iVar4;
        undefined7 in_register_00000011;

        StockPlayerOffer(this);
        uVar1 = param_1->g1();
        DecodeTypeStatus(this, uVar1);
        uVar2 = param_1->g2();
        m_item = (uint)uVar2;
        uVar3 = param_1->g4();
        m_price = uVar3;
        iVar4 = param_1->g4();
        m_addedCount = iVar4;
        iVar4 = param_1->g4();
        m_completedCount = iVar4;
        uVar3 = param_1->g4();
        m_completedGold = uVar3;
        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            UnpackVariables(this, param_1, param_3);
        }
    }

    // 0x100207510, 128 bytes, placed by class name
    // StockPlayerOffer::Pack(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool) const
    void StockPlayerOffer::Pack(PacketJ* param_1, bool param_2) {
        undefined1 uVar1;
        undefined3 in_register_00000011;

        uVar1 = EncodeTypeStatus(this);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, uVar1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, m_item);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, m_price);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, m_addedCount);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, m_completedCount);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, m_completedGold);
        if (CONCAT31(in_register_00000011, param_2) != 0) {
            PackVariables(this, param_1);
        }
    }

    // 0x1002075b0, 48 bytes, base-object constructor, placed by class name
    // StockPlayerOffer::StockPlayerOffer()
    void StockPlayerOffer::StockPlayerOffer() {
        m_offerStatus = 0;
        m_offerType = 1;
        field_28 = 0;
        m_item = 0;
        m_price = 0;
        m_addedCount = 0;
        m_completedCount = 0;
        *(undefined8*)((long)&m_completedCount + 1) = 0;
    }

    // 0x1002075e0, 144 bytes, base-object constructor, placed by class name
    // StockPlayerOffer::StockPlayerOffer(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, ErrorCapture&)
    void StockPlayerOffer::StockPlayerOffer(PacketJ* param_1, bool param_2, ErrorCapture* param_3) {
        uchar uVar1;
        ushort uVar2;
        undefined4 uVar3;
        int iVar4;
        undefined7 in_register_00000011;

        StockPlayerOffer(this);
        uVar1 = param_1->g1();
        DecodeTypeStatus(this, uVar1);
        uVar2 = param_1->g2();
        m_item = (uint)uVar2;
        uVar3 = param_1->g4();
        m_price = uVar3;
        iVar4 = param_1->g4();
        m_addedCount = iVar4;
        iVar4 = param_1->g4();
        m_completedCount = iVar4;
        uVar3 = param_1->g4();
        m_completedGold = uVar3;
        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            UnpackVariables(this, param_1, param_3);
        }
    }

    // 0x100207670, 32 bytes, placed by class name
    // StockPlayerOffer::DecodeTypeStatus(unsigned char)
    void StockPlayerOffer::DecodeTypeStatus(uchar param_1) {
        m_offerStatus = param_1 & 7;
        m_offerType = param_1 >> 3 & 1;
    }

    // 0x100207690, 304 bytes, placed by class name
    // StockPlayerOffer::UnpackVariables(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, ErrorCapture&)
    void StockPlayerOffer::UnpackVariables(PacketJ* param_1, ErrorCapture* param_2) {
        char cVar1;
        short sVar2;
        undefined4 uVar3;
        int iVar4;
        long lVar5;
        char* pcVar6;

        field_24 = 0;
        uVar3 = 0;
        do {
            cVar1 = param_1->g1();
            if (cVar1 == -1) {
                iVar4 = 3;
            } else if (cVar1 == '\0') {
                do {
                    cVar1 = param_1->g1();
                    if (cVar1 == -1) {
                        iVar4 = 5;
                    } else {
                        lVar5 = param_1->size();
                        param_1->SetPos(lVar5 - 1);
                        sVar2 = param_1->g2();
                        if (sVar2 == 0) {
                            if (field_24 == '\0') {
                                uVar3 = param_1->g4();
                                field_24 = 1;
                                iVar4 = 0;
                                goto LAB_100207705;
                            }
                            pcVar6 = "Received the same objvar twice when unpacking stockmarket offer!";
                        } else {
                            pcVar6 = "Only the legacty objvar, id=0, is supported in oldscape!";
                        }
                        param_2->Raise(pcVar6);
                        iVar4 = 1;
                    }
                LAB_100207705:
                } while (iVar4 == 0);
                if (iVar4 == 5) {
                    iVar4 = 0;
                }
            } else {
                param_2->Raise("Only vars of base type integer are supported in oldscape!");
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

    // 0x1002077c0, 32 bytes, placed by class name
    // StockPlayerOffer::EncodeTypeStatus() const
    uint StockPlayerOffer::EncodeTypeStatus() {
        uint uVar1;
        uint uVar2;

        uVar1._0_1_ = m_offerStatus;
        uVar1._1_1_ = m_offerType;
        uVar1._2_2_ = field_2;
        uVar2 = (uint)((undefined1)uVar1 | 8);
        if (m_offerType != 1) {
            uVar2 = uVar1;
        }
        return uVar2 & 255;
    }

    // 0x1002077e0, 96 bytes, placed by class name
    // StockPlayerOffer::PackVariables(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&) const
    void StockPlayerOffer::PackVariables(PacketJ* param_1) {
        if (field_24 != '\0') {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 0);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_28);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 255);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 255);
    }

    // 0x100207840, 16 bytes, placed by class name
    // StockPlayerOffer::GetOfferStatus() const
    byte StockPlayerOffer::GetOfferStatus() {
        return m_offerStatus;
    }

    // 0x100207850, 16 bytes, placed by class name
    // StockPlayerOffer::GetOfferType() const
    byte StockPlayerOffer::GetOfferType() {
        return m_offerType;
    }

} // namespace jag::oldscape::rs2lib
