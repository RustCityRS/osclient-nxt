// libs/oldscape/rs2lib/stockmarket/ActiveOffersReply.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "ActiveOffersReply.h"

namespace jag::oldscape::rs2lib {
    // 0x100fd53e0
    uint8_t ActiveOffersReply::compareByOfferMade[48];

    // 0x100fd5410
    uint8_t ActiveOffersReply::compareByNodeId[48];

    // 0x100fd5440
    uint8_t ActiveOffersReply::compareByPrice[48];

    // 0x100fd5470
    uint8_t ActiveOffersReply::compareByDisplayName[48];

    // 0x100fd54a0
    uint8_t ActiveOffersReply::compareByCount[48];

    // 0x100009d00: ActiveOffersReply::ActiveOffer::GetOffer() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x100009d10: ActiveOffersReply::ActiveOffer::GetUserhash() const has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x100023f30: ActiveOffersReply::ActiveOffer::GetOfferMade() const has the same machine code as option::IOption::GetName() const

    // 0x100024170: ActiveOffersReply::ActiveOffer::GetNodeId() const has the same machine code as option::IScriptOption::GetId() const

    // 0x1002067a0
    ActiveOffersReply::ActiveOffersReply(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                         ErrorCapture& errorCapture) {
        unsigned short uVar3;
        unique_ptr<ActiveOffersReply::ActiveOffer>* this_00;
        ActiveOffer* this_01;
        unsigned long arg1;

        uint8_t* this_02 = &field_8;
        new (this_02) Array<eastl::unique_ptr<ActiveOffersReply::ActiveOffer>>();
        uint8_t bVar1 = packetJ.g1();
        if (bVar1 != 1) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "stockmarket/ActiveOffersReply.cpp",
                            44, "Unsupported version %i (support up to %i)", (unsigned long)bVar1, 1);
        }
        bVar1 = packetJ.g1();
        field_0 = (unsigned int)bVar1;
        if (bVar1 == 0) {
            uVar3 = packetJ.g2();
            this_02->set_max_size((unsigned long)uVar3, 3);
            if (uVar3 != 0) {
                arg1 = 0;
                do {
                    this_00 = (unique_ptr<ActiveOffersReply::ActiveOffer>*)(*this_02)[arg1];
                    this_01 = (ActiveOffer*)operator new(120);
                    new (this_01) ActiveOffer(packetJ, errorCapture);
                    this_00->reset(this_01);
                    if (errorCapture.IsRaised() != '\0') {
                        this_02->clear();
                        return;
                    }
                    arg1 = arg1 + 1;
                } while (uVar3 != arg1);
            }
        } else {
            this_02->clear();
        }
    }

    // 0x100206c80
    void ActiveOffersReply::Pack(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        unsigned int arg1;
        unique_ptr<ActiveOffersReply>* this_00;
        unique_ptr<ActiveOffersReply>* puVar1;
        uint8_t* this_02;

        packetJ.p1<shared::LoginProt::ID>(1);
        packetJ.p1<shared::LoginProt::ID>(field_0);
        if (field_0 == 0) {
            this_02 = &field_8;
            arg1 = this_02->end();
            packetJ.p2<int>(arg1);
            this_00 = (unique_ptr<ActiveOffersReply>*)this_02->data();
            puVar1 = (unique_ptr<ActiveOffersReply>*)this_02->end();
            for (; this_00 != puVar1; this_00 = this_00 + 8) {
                ((ActiveOffer*)(*this_00).operator->())->Pack(packetJ);
            }
        }
    }

    // 0x100206d10
    void ActiveOffersReply::ActiveOffer::Pack(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        unsigned long long uVar1 = HeapBeginPtr();
        packetJ.p8<long long>(uVar1);
        unsigned int arg1 = GetPos();
        packetJ.p2<int>(arg1);
        uVar1 = data();
        packetJ.p8<long long>(uVar1);
        field_24->Pack(packetJ, true);
    }

    // 0x100206d70
    ActiveOffersReply::ActiveOffersReply(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2) {
        unique_ptr<ActiveOffersReply::ActiveOffer>* this_00;
        ActiveOffer* this_01;
        unsigned long arg1;

        uint8_t* this_02 = &field_8;
        new (this_02) Array<eastl::unique_ptr<ActiveOffersReply::ActiveOffer>>();
        field_0 = 4294967295;
        unsigned int uVar3 = packetJ.g2();
        char cVar1 = packetJ.g1();
        unsigned short uVar2 = packetJ.g2();
        this_02->set_max_size((unsigned long)uVar2, 3);
        if (uVar2 != 0) {
            arg1 = 0;
            do {
                this_00 = (unique_ptr<ActiveOffersReply::ActiveOffer>*)(*this_02)[arg1];
                this_01 = (ActiveOffer*)operator new(120);
                new (this_01) ActiveOffer(packetJ, (unsigned int)(cVar1 == '\x01'), uVar3 & 65535);
                this_00->reset(this_01);
                arg1 = arg1 + 1;
            } while (uVar2 != arg1);
        }
    }

    // 0x100206ea0
    void ActiveOffersReply::PackClient(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, int arg2,
                                       bool arg3) {
        uint32_t in_register_00000009;

        packetJ.p2<int>(arg2);
        packetJ.p1<shared::LoginProt::ID>((((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3));
        uint8_t* this_02 = &field_8;
        unsigned int arg1 = this_02->end();
        packetJ.p2<int>(arg1);
        auto this_00 = this_02->data();
        auto puVar1 = this_02->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((ActiveOffer*)(*this_00).operator->())->PackClient(packetJ);
        }
    }

    // 0x100206f30
    void ActiveOffersReply::ActiveOffer::PackClient(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        packetJ.gStringCP1252ToUTF8<eastl::string>((field_24 + 32), false);
        packetJ.gStringCP1252ToUTF8<eastl::string>((field_24 + 64), false);
        unsigned int uVar1 = GetPos();
        packetJ.p2<int>(uVar1);
        unsigned long long arg1 = data();
        packetJ.p8<long long>(arg1);
        uint8_t* this_00 = field_24;
        uVar1 = this_00->GetPos();
        packetJ.p4<int>((unsigned long)uVar1);
        int iVar2 = this_00->GetLevel();
        int iVar3 = this_00->GetMaxLineWidth();
        packetJ.p4<int>((unsigned long)(unsigned int)(iVar2 - iVar3));
    }

    // 0x100206fd0
    void ActiveOffersReply::SortList(
        std::function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)> callback,
        bool arg2) {
        function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)> local_78[48];
        long local_38;

        auto activeOffer1 = field_8.data();
        auto activeOffer2 = field_8.end();
        new (local_78)
            std::function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>(
                *callback);
        uint8_t local_48 = arg2;
        std::sort<eastl::unique_ptr<ActiveOffersReply::ActiveOffer>*,
                  (std::function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>)
                      ->SortList(bool)::__9>(activeOffer1, activeOffer2, (__9*)local_78);
        SortList(std::function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>,
                 bool)::$_9::~__9((__9*)local_78);
    }

    // 0x1002070e0
    void ActiveOffersReply::GetActiveOfferCount() const {
        field_8.end();
    }

    // 0x1002070f0
    void ActiveOffersReply::GetActiveOffer(unsigned int arg1) const {
        unique_ptr<ActiveOffersReply>* this_00 = &field_8[(unsigned long)arg1];
        (*this_00).operator->();
    }

    // 0x100207190
    ActiveOffersReply::ActiveOffer::ActiveOffer(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                StockPlayerOffer::OFFER_TYPE oFFER_TYPE, int arg3) {
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_58[32];

        field_0 = 0;
        m_nodeId = 0;
        m_offerMade = 0;
        uint8_t* this_00 = field_24;
        int local_38 = arg3;
        OFFER_TYPE local_34 = oFFER_TYPE;
        new (this_00) StockPlayerOffer();
        new ((field_24 + 32)) eastl::string();
        new ((field_24 + 64)) eastl::string();
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            local_58, (uint8_t)packetJ);
        (*((field_24 + 32))) = local_58;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            local_58, (uint8_t)packetJ);
        (*((field_24 + 64))) = local_58;
        unsigned short uVar1 = packetJ.g2();
        m_nodeId = (unsigned int)uVar1;
        long long lVar2 = packetJ.g8();
        m_offerMade = lVar2;
        int arg1 = packetJ.g4();
        int arg1_00 = packetJ.g4();
        this_00->SetOfferStatus(2);
        this_00->SetOfferType(local_34 & 255);
        new (this_00) ServerConnectionWorkItem(arg1);
        this_00->SetLevel(arg1_00);
        this_00->SetCompletedCount(0);
        this_00->SetGameplayLevel(0);
        this_00->SetZ(local_38);
    }

    // 0x100207340
    ActiveOffersReply::ActiveOffer::ActiveOffer(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                ErrorCapture& errorCapture) {
        uint8_t local_58[40];

        local_58._32_8_ = this;
        long long arg1 = packetJ.g8();
        unsigned short uVar1 = packetJ.g2();
        long long arg3 = packetJ.g8();
        new (local_58) StockPlayerOffer(packetJ, true, errorCapture);
        ActiveOffer((ActiveOffer*)local_58._32_8_, arg1, (unsigned int)uVar1, arg3, (StockPlayerOffer*)local_58);
    }

    // 0x1002074c0
    void ActiveOffersReply::ActiveOffer::SetDisplayName(const eastl::string& str1, const eastl::string& str2) {
        (*((field_24 + 32))) = str1;
        (*((field_24 + 64))) = str2;
    }

    // 0x1002074f0
    uint8_t* ActiveOffersReply::ActiveOffer::getDisplayName() const {
        return field_24 + 32;
    }

    // 0x100207500
    uint8_t* ActiveOffersReply::ActiveOffer::getOldDisplayName() const {
        return field_24 + 64;
    }

    // 0x100220820
    bool ActiveOffersReply::$_4::operator()(const ActiveOffersReply::ActiveOffer& activeOffer1,
                                            const ActiveOffersReply::ActiveOffer& activeOffer2) const {
        long lVar1 = data();
        long lVar2 = activeOffer1.data();
        return lVar1 < lVar2;
    }

    // 0x100221010
    bool ActiveOffersReply::$_5::operator()(const ActiveOffersReply::ActiveOffer& activeOffer1,
                                            const ActiveOffersReply::ActiveOffer& activeOffer2) const {
        int iVar1 = GetPos();
        int iVar2 = activeOffer1.GetPos();
        return iVar1 < iVar2;
    }

    // 0x1002217b0
    bool ActiveOffersReply::$_6::operator()(const ActiveOffersReply::ActiveOffer& activeOffer1,
                                            const ActiveOffersReply::ActiveOffer& activeOffer2) const {
        auto pCVar1 = second();
        int iVar2 = pCVar1->GetPos();
        pCVar1 = (CommandLine*)activeOffer1.second();
        int iVar3 = pCVar1->GetPos();
        return iVar2 < iVar3;
    }

    // 0x100221f60
    unsigned int ActiveOffersReply::$_7::operator()(const ActiveOffersReply::ActiveOffer& activeOffer1,
                                                    const ActiveOffersReply::ActiveOffer& activeOffer2) const {
        auto this_00 = getDisplayName();
        auto str = activeOffer1.getDisplayName();
        return this_00->compare(str) >> 31;
    }

    // 0x100222700
    bool ActiveOffersReply::$_8::operator()(const ActiveOffersReply::ActiveOffer& activeOffer1,
                                            const ActiveOffersReply::ActiveOffer& activeOffer2) const {
        auto pMVar1 = second();
        int iVar2 = pMVar1->GetLevel();
        pMVar1 = (Minimap*)activeOffer1.second();
        int iVar3 = pMVar1->GetLevel();
        return iVar2 < iVar3;
    }

} // namespace jag::oldscape::rs2lib
