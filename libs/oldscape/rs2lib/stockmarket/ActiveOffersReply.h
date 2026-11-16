// libs/oldscape/rs2lib/stockmarket/ActiveOffersReply.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib {
    class ActiveOffersReply {
    public:
        class ActiveOffer;
        ~ActiveOffersReply();
        ActiveOffersReply(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, ErrorCapture&);
        void Pack(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        ActiveOffersReply(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool);
        void PackClient(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, int, bool);
        void SortList(std::function<bool(ActiveOffer const&, ActiveOffer const&)>, bool);
        void GetActiveOfferCount() const;
        void GetActiveOffer(unsigned int) const;
        static /* 48 bytes */ compareByOfferMade;
        static /* 48 bytes */ compareByNodeId;
        static /* 48 bytes */ compareByPrice;
        static /* 48 bytes */ compareByDisplayName;
        static /* 48 bytes */ compareByCount;

        // data members, from how the methods use this: 32 bytes
        uint field_0; // offset 0
        char _unknown_4[28];
    };

    class ActiveOffersReply::ActiveOffer {
    public:
        GetOffer() const;
        GetUserhash() const;
        GetOfferMade() const;
        GetNodeId() const;
        ~ActiveOffer();
        ActiveOffer(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, ErrorCapture&);
        void Pack(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        ActiveOffer(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, StockPlayerOffer::OFFER_TYPE, int);
        void PackClient(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        ActiveOffer(long long, int, long long, StockPlayerOffer const&);
        void SetDisplayName(eastl::string const&, eastl::string const&);
        getDisplayName() const;
        getOldDisplayName() const;

        // data members, from how the methods use this: 26152 bytes
        longlong field_0; // offset 0
        uint field_8;     // offset 8
        char _unknown_12[4];
        longlong field_16; // offset 16
        Minimap field_24;  // offset 24
    };

    // 0x10013c340, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ActiveOffersReply::~ActiveOffersReply(): jumps straight to the base-object destructor

    // 0x10013c350, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // ActiveOffersReply::~ActiveOffersReply()
    void ActiveOffersReply::~ActiveOffersReply() {
        (&field_8)->~Array();
    }

    // 0x10013c4e0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ActiveOffersReply::ActiveOffer::~ActiveOffer(): jumps straight to the base-object destructor

    // 0x10013c4f0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // ActiveOffersReply::ActiveOffer::~ActiveOffer()
    void ActiveOffersReply::ActiveOffer::~ActiveOffer() {
        ((field_24 + 64))->~basic_string();
        ((field_24 + 32))->~basic_string();
    }

    // 0x1002070d0, 16 bytes, complete-object destructor, inline, placed by class name
    // ActiveOffersReply::SortList(std::function<bool (ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>, bool)::$_9::~$_9(): jumps straight to the base-object destructor

    // 0x100207450, 96 bytes, base-object constructor, inline, placed by class name
    // ActiveOffersReply::ActiveOffer::ActiveOffer(long long, int, long long, StockPlayerOffer const&)
    void ActiveOffersReply::ActiveOffer::ActiveOffer(longlong param_1, int param_2, longlong param_3,
                                                     StockPlayerOffer* param_4) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        byte bVar4;
        undefined2 uVar5;
        uint uVar6;

        field_0 = param_1;
        field_8 = param_2;
        field_16 = param_3;
        bVar4 = param_4->m_offerType;
        uVar5 = param_4->field_2;
        uVar6 = param_4->field_4;
        uVar1 = *(undefined8*)&param_4->field_8;
        uVar2 = *(undefined8*)&param_4->m_completedCount;
        uVar3 = *(undefined8*)&param_4->field_24;
        field_24[0] = param_4->m_offerStatus;
        field_24[1] = bVar4;
        *(undefined2*)(field_24 + 2) = uVar5;
        *(uint*)(field_24 + 4) = uVar6;
        *(undefined8*)(field_24 + 8) = uVar1;
        *(undefined8*)(field_24 + 16) = uVar2;
        *(undefined8*)(field_24 + 24) = uVar3;
        new ((field_24 + 32)) eastl::string();
        new ((field_24 + 64)) eastl::string();
    }

    // 0x1002074b0, 16 bytes, complete-object constructor, inline, placed by class name
    // ActiveOffersReply::ActiveOffer::ActiveOffer(long long, int, long long, StockPlayerOffer const&): jumps straight to the base-object constructor

    // 0x1002163e0, 16 bytes, base-object destructor, inline, placed by class name
    // ActiveOffersReply::SortList(std::function<bool (ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>, bool)::$_9::~$_9()
    /* ~$_9() */

    void ActiveOffersReply::SortList(
        std::function<bool(ActiveOffersReply::ActiveOffer_const&, ActiveOffersReply::ActiveOffer_const&)>,
        bool)::$_9::~__9() {
        std::function<bool(ActiveOffersReply::ActiveOffer_const&, ActiveOffersReply::ActiveOffer_const&)>::~function(
            (function<bool(ActiveOffersReply::ActiveOffer_const&, ActiveOffersReply::ActiveOffer_const&)>*)this);
    }

    // 0x100222d90, 80 bytes, inline, placed by class name
    // ActiveOffersReply::SortList(std::function<bool (ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>, bool)::$_9::operator()(eastl::unique_ptr<ActiveOffersReply::ActiveOffer, eastl::default_delete<ActiveOffersReply::ActiveOffer> > const&, eastl::unique_ptr<ActiveOffersReply::ActiveOffer, eastl::default_delete<ActiveOffersReply::ActiveOffer> > const&) const
    /* ActiveOffersReply::SortList(std::function<bool
   (ActiveOffersReply::ActiveOffer const&,
   ActiveOffersReply::ActiveOffer const&)>,
   bool)::$_9::TEMPNAMEPLACEHOLDERVALUE(eastl::unique_ptr<ActiveOffersReply::ActiveOffer,
   eastl::default_delete<ActiveOffersReply::ActiveOffer> > const&,
   eastl::unique_ptr<ActiveOffersReply::ActiveOffer,
   eastl::default_delete<ActiveOffersReply::ActiveOffer> > const&) const */

    bool ActiveOffersReply::SortList(
        std::function<bool(ActiveOffersReply::ActiveOffer_const&, ActiveOffersReply::ActiveOffer_const&)>,
        bool)::$_9::operator()(unique_ptr* param_1, unique_ptr* param_2) {
        __9 _Var1;
        ActiveOffer* pAVar2;
        __9 _Var3;

        _Var1 = this[48];
        pAVar2 =
            (ActiveOffer*)eastl::unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>::operator->(
                (unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>*)param_1);
        eastl::unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>::operator->(
            (unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>*)param_2);
        _Var3 = (__9)std::function<bool(ActiveOffersReply::ActiveOffer_const&,
                                        ActiveOffersReply::ActiveOffer_const&)>::operator()((ActiveOffer*)this, pAVar2);
        return _Var1 == _Var3;
    }

} // namespace jag::oldscape::rs2lib
