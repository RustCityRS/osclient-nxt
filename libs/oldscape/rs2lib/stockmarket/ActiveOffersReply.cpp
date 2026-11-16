// libs/oldscape/rs2lib/stockmarket/ActiveOffersReply.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "ActiveOffersReply.h"

namespace jag::oldscape::rs2lib {
    // 0x100fd53e0, 48 bytes, __common; zero-initialised
    ActiveOffersReply::compareByOfferMade;

    // 0x100fd5410, 48 bytes, __common; zero-initialised
    ActiveOffersReply::compareByNodeId;

    // 0x100fd5440, 48 bytes, __common; zero-initialised
    ActiveOffersReply::compareByPrice;

    // 0x100fd5470, 48 bytes, __common; zero-initialised
    ActiveOffersReply::compareByDisplayName;

    // 0x100fd54a0, 48 bytes, __common; zero-initialised
    ActiveOffersReply::compareByCount;

    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    ActiveOffersReply::ActiveOffer::GetOffer() const;

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    ActiveOffersReply::ActiveOffer::GetUserhash() const;

    // 0x100023f30: the linker folded this into option::IOption::GetName() const, which has identical code
    ActiveOffersReply::ActiveOffer::GetOfferMade() const;

    // 0x100024170: the linker folded this into option::IScriptOption::GetId() const, which has identical code
    ActiveOffersReply::ActiveOffer::GetNodeId() const;

    // 0x1002067a0, 352 bytes, base-object constructor, placed by class name and debug map
    // ActiveOffersReply::ActiveOffersReply(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, ErrorCapture&)
    void ActiveOffersReply::ActiveOffersReply(PacketJ* param_1, ErrorCapture* param_2) {
        byte bVar1;
        char cVar2;
        ushort uVar3;
        unique_ptr<ActiveOffersReply::ActiveOffer, eastl::default_delete<ActiveOffersReply::ActiveOffer>>* this_00;
        ActiveOffer* this_01;
        ulong uVar4;
        undefined1* this_02;

        this_02 = &field_8;
        new (this_02) Array<
            eastl::unique_ptr<ActiveOffersReply::ActiveOffer, eastl::default_delete<ActiveOffersReply::ActiveOffer>>,
            eastl::allocator>();
        bVar1 = param_1->g1();
        if (bVar1 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "stockmarket/ActiveOffersReply.cpp",
                            44, "Unsupported version %i (support up to %i)", (ulong)bVar1, 1);
        }
        bVar1 = param_1->g1();
        field_0 = (uint)bVar1;
        if (bVar1 == 0) {
            uVar3 = param_1->g2();
            this_02->set_max_size((ulong)uVar3, 3);
            if (uVar3 != 0) {
                uVar4 = 0;
                do {
                    this_00 = (unique_ptr<ActiveOffersReply::ActiveOffer,
                                          eastl::default_delete<ActiveOffersReply::ActiveOffer>>*)
                        Array<eastl::unique_ptr<ActiveOffersReply::ActiveOffer,
                                                eastl::default_delete<ActiveOffersReply::ActiveOffer>>,
                              eastl::allocator>::
                        operator[]((Array<eastl::unique_ptr<ActiveOffersReply::ActiveOffer,
                                                            eastl::default_delete<ActiveOffersReply::ActiveOffer>>,
                                          eastl::allocator>*)this_02,
                                   uVar4);
                    this_01 = operator_new(120);
                    ActiveOffer::ActiveOffer(this_01, param_1, param_2);
                    eastl::unique_ptr<ActiveOffersReply::ActiveOffer,
                                      eastl::default_delete<ActiveOffersReply::ActiveOffer>>::reset(this_00, this_01);
                    cVar2 = param_2->IsRaised();
                    if (cVar2 != '\0') {
                        this_02->clear();
                        return;
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar3 != uVar4);
            }
        } else {
            this_02->clear();
        }
    }

    // 0x100206ba0, 128 bytes, complete-object constructor, placed by class name and debug map
    // ActiveOffersReply::ActiveOffer::ActiveOffer(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, ErrorCapture&)
    void ActiveOffersReply::ActiveOffer::ActiveOffer(PacketJ* param_1, ErrorCapture* param_2) {
        longlong lVar1;
        longlong lVar2;
        ushort uVar3;
        undefined1 local_58[40];

        local_58._32_8_ = this;
        lVar1 = param_1->g8();
        uVar3 = param_1->g2();
        lVar2 = param_1->g8();
        new (local_58) StockPlayerOffer(param_1, true, param_2);
        ActiveOffer((ActiveOffer*)local_58._32_8_, lVar1, (uint)uVar3, lVar2, (StockPlayerOffer*)local_58);
    }

    // 0x100206c70, 16 bytes, complete-object constructor, placed by class name and debug map
    // ActiveOffersReply::ActiveOffersReply(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, ErrorCapture&): jumps straight to the base-object constructor

    // 0x100206c80, 144 bytes, placed by class name and debug map
    // ActiveOffersReply::Pack(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ActiveOffersReply::Pack(PacketJ* param_1) {
        int iVar1;
        unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>* this_00;
        unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>* puVar2;
        ActiveOffer* this_01;
        undefined1* this_02;

        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_0);
        if (field_0 == 0) {
            this_02 = &field_8;
            iVar1 = this_02->end();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, iVar1);
            this_00 = (unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>*)this_02->data();
            puVar2 = (unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>*)this_02->end();
            for (; this_00 != puVar2; this_00 = this_00 + 8) {
                this_01 =
                    (ActiveOffer*)
                        eastl::unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>::operator->(
                            this_00);
                this_01->Pack(param_1);
            }
        }
    }

    // 0x100206d10, 96 bytes, placed by class name and debug map
    // ActiveOffersReply::ActiveOffer::Pack(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ActiveOffersReply::ActiveOffer::Pack(PacketJ* param_1) {
        longlong lVar1;
        int iVar2;

        lVar1 = HeapBeginPtr();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, lVar1);
        iVar2 = GetPos();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, iVar2);
        lVar1 = data();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, lVar1);
        (field_24, param_1, true)->Pack();
    }

    // 0x100206d70, 272 bytes, base-object constructor, placed by class name and debug map
    // ActiveOffersReply::ActiveOffersReply(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool)
    void ActiveOffersReply::ActiveOffersReply(PacketJ* param_1, bool param_2) {
        char cVar1;
        undefined2 uVar2;
        ushort uVar3;
        unique_ptr<ActiveOffersReply::ActiveOffer, eastl::default_delete<ActiveOffersReply::ActiveOffer>>* this_00;
        ActiveOffer* pAVar4;
        undefined1* this_01;
        ulong uVar5;

        this_01 = &field_8;
        new (this_01) Array<
            eastl::unique_ptr<ActiveOffersReply::ActiveOffer, eastl::default_delete<ActiveOffersReply::ActiveOffer>>,
            eastl::allocator>();
        field_0 = 4294967295;
        uVar2 = param_1->g2();
        cVar1 = param_1->g1();
        uVar3 = param_1->g2();
        this_01->set_max_size((ulong)uVar3, 3);
        if (uVar3 != 0) {
            uVar5 = 0;
            do {
                this_00 =
                    (unique_ptr<ActiveOffersReply::ActiveOffer, eastl::default_delete<ActiveOffersReply::ActiveOffer>>*)
                        Array<eastl::unique_ptr<ActiveOffersReply::ActiveOffer,
                                                eastl::default_delete<ActiveOffersReply::ActiveOffer>>,
                              eastl::allocator>::
                        operator[]((Array<eastl::unique_ptr<ActiveOffersReply::ActiveOffer,
                                                            eastl::default_delete<ActiveOffersReply::ActiveOffer>>,
                                          eastl::allocator>*)this_01,
                                   uVar5);
                pAVar4 = operator_new(120);
                ActiveOffer::ActiveOffer(pAVar4, param_1, cVar1 == '\x01', uVar2);
                eastl::unique_ptr<ActiveOffersReply::ActiveOffer,
                                  eastl::default_delete<ActiveOffersReply::ActiveOffer>>::reset(this_00, pAVar4);
                uVar5 = uVar5 + 1;
            } while (uVar3 != uVar5);
        }
    }

    // 0x100206e80, 16 bytes, complete-object constructor, placed by class name and debug map
    // ActiveOffersReply::ActiveOffer::ActiveOffer(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, StockPlayerOffer::OFFER_TYPE, int): jumps straight to the base-object constructor

    // 0x100206e90, 16 bytes, complete-object constructor, placed by class name and debug map
    // ActiveOffersReply::ActiveOffersReply(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool): jumps straight to the base-object constructor

    // 0x100206ea0, 144 bytes, placed by class name and debug map
    // ActiveOffersReply::PackClient(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, int, bool)
    void ActiveOffersReply::PackClient(PacketJ* param_1, int param_2, bool param_3) {
        int iVar1;
        unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>* this_00;
        unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>* puVar2;
        ActiveOffer* this_01;
        undefined3 in_register_00000009;
        undefined1* this_02;

        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, param_2);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, CONCAT31(in_register_00000009, param_3));
        this_02 = &field_8;
        iVar1 = this_02->end();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, iVar1);
        this_00 = (unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>*)this_02->data();
        puVar2 = (unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>*)this_02->end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            this_01 =
                (ActiveOffer*)
                    eastl::unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>::operator->(this_00);
            this_01->PackClient(param_1);
        }
    }

    // 0x100206f30, 160 bytes, placed by class name and debug map
    // ActiveOffersReply::ActiveOffer::PackClient(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ActiveOffersReply::ActiveOffer::PackClient(PacketJ* param_1) {
        int iVar1;
        int iVar2;
        longlong lVar3;
        undefined1* this_00;

        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1,
            (basic_string*)(field_24 + 32), false);
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1,
            (basic_string*)(field_24 + 64), false);
        iVar1 = GetPos();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, iVar1);
        lVar3 = data();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, lVar3);
        this_00 = field_24;
        iVar1 = this_00->GetPos();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, iVar1);
        iVar1 = this_00->GetLevel();
        iVar2 = this_00->GetMaxLineWidth();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, iVar1 - iVar2);
    }

    // 0x100206fd0, 176 bytes, placed by class name and debug map
    // ActiveOffersReply::SortList(std::function<bool (ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>, bool)
    /* ActiveOffersReply::SortList(std::function<bool
   (ActiveOffersReply::ActiveOffer const&,
   ActiveOffersReply::ActiveOffer const&)>, bool) */

    void ActiveOffersReply::SortList(function* param_2, undefined1 param_3) {
        undefined8 uVar1;
        undefined8 uVar2;
        function<bool(ActiveOffersReply::ActiveOffer_const&, ActiveOffersReply::ActiveOffer_const&)> local_78[48];
        undefined1 local_48;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar1 = (&field_8)->data();
        uVar2 = (&field_8)->end();
        std::function<bool(ActiveOffersReply::ActiveOffer_const&, ActiveOffersReply::ActiveOffer_const&)>::function(
            local_78, param_2);
        local_48 = param_3;
        std::sort<
            eastl::unique_ptr<ActiveOffersReply::ActiveOffer, eastl::default_delete<ActiveOffersReply::ActiveOffer>>*,
            (std::function<bool(ActiveOffersReply::ActiveOffer_const&, ActiveOffersReply::ActiveOffer_const&)>)
                ->SortList(bool)::__9>(uVar1, uVar2, local_78);
        SortList(std::function<bool(ActiveOffersReply::ActiveOffer_const&, ActiveOffersReply::ActiveOffer_const&)>,
                 bool)::$_9::~__9((__9*)local_78);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002070e0, 16 bytes, placed by class name and debug map
    // ActiveOffersReply::GetActiveOfferCount() const
    void ActiveOffersReply::GetActiveOfferCount() {
        (&field_8)->end();
    }

    // 0x1002070f0, 32 bytes, placed by class name and debug map
    // ActiveOffersReply::GetActiveOffer(unsigned int) const
    void ActiveOffersReply::GetActiveOffer(uint param_1) {
        unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>* this_00;

        this_00 = (unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>*)Array<
            eastl::unique_ptr<ActiveOffersReply::ActiveOffer, eastl::default_delete<ActiveOffersReply::ActiveOffer>>,
            eastl::allocator>::
        operator[]((Array<eastl::unique_ptr<ActiveOffersReply::ActiveOffer,
                                            eastl::default_delete<ActiveOffersReply::ActiveOffer>>,
                          eastl::allocator>*)&field_8,
                   (ulong)param_1);
        eastl::unique_ptr<ActiveOffersReply, eastl::default_delete<ActiveOffersReply>>::operator->(this_00);
    }

    // 0x100207190, 368 bytes, base-object constructor, placed by class name and debug map
    // ActiveOffersReply::ActiveOffer::ActiveOffer(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, StockPlayerOffer::OFFER_TYPE, int)
    void ActiveOffersReply::ActiveOffer::ActiveOffer(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* param_1, undefined4 param_3,
        int param_4) {
        undefined1* this_00;
        ushort uVar1;
        undefined4 uVar2;
        int iVar3;
        longlong lVar4;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_58[32];
        int local_38;
        undefined4 local_34;

        field_0 = 0;
        field_8 = 0;
        field_16 = 0;
        this_00 = field_24;
        local_38 = param_4;
        local_34 = param_3;
        new (this_00) StockPlayerOffer();
        new ((field_24 + 32)) eastl::string();
        new ((field_24 + 64)) eastl::string();
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            local_58, SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)(field_24 + 32), (basic_string*)local_58);
        local_58->~basic_string();
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            local_58, SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)(field_24 + 64), (basic_string*)local_58);
        local_58->~basic_string();
        uVar1 = param_1->g2();
        field_8 = (uint)uVar1;
        lVar4 = param_1->g8();
        field_16 = lVar4;
        uVar2 = param_1->g4();
        iVar3 = param_1->g4();
        this_00->SetOfferStatus(2);
        this_00->SetOfferType((undefined1)local_34);
        new (this_00) ServerConnectionWorkItem(uVar2);
        this_00->SetLevel(iVar3);
        this_00->SetCompletedCount(0);
        this_00->SetGameplayLevel(0);
        this_00->SetZ(local_38);
    }

    // 0x100207340, 128 bytes, base-object constructor, placed by class name
    // ActiveOffersReply::ActiveOffer::ActiveOffer(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, ErrorCapture&)
    void ActiveOffersReply::ActiveOffer::ActiveOffer(PacketJ* param_1, ErrorCapture* param_2) {
        longlong lVar1;
        longlong lVar2;
        ushort uVar3;
        undefined1 local_58[40];

        local_58._32_8_ = this;
        lVar1 = param_1->g8();
        uVar3 = param_1->g2();
        lVar2 = param_1->g8();
        new (local_58) StockPlayerOffer(param_1, true, param_2);
        ActiveOffer((ActiveOffer*)local_58._32_8_, lVar1, (uint)uVar3, lVar2, (StockPlayerOffer*)local_58);
    }

    // 0x1002074c0, 48 bytes, placed by class name
    // ActiveOffersReply::ActiveOffer::SetDisplayName(eastl::string const&, eastl::string const&)
    void ActiveOffersReply::ActiveOffer::SetDisplayName(basic_string* param_1, basic_string* param_2) {
        eastl::string::operator=((eastl::string*)(field_24 + 32), param_1);
        eastl::string::operator=((eastl::string*)(field_24 + 64), param_2);
    }

    // 0x1002074f0, 16 bytes, placed by class name
    // ActiveOffersReply::ActiveOffer::getDisplayName() const
    undefined1* ActiveOffersReply::ActiveOffer::getDisplayName() {
        return field_24 + 32;
    }

    // 0x100207500, 16 bytes, placed by class name
    // ActiveOffersReply::ActiveOffer::getOldDisplayName() const
    undefined1* ActiveOffersReply::ActiveOffer::getOldDisplayName() {
        return field_24 + 64;
    }

    // 0x100220820, 48 bytes, placed by class name
    // ActiveOffersReply::$_4::operator()(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&) const
    /* ActiveOffersReply::$_4::TEMPNAMEPLACEHOLDERVALUE(ActiveOffersReply::ActiveOffer
   const&, ActiveOffersReply::ActiveOffer const&) const */

    bool ActiveOffersReply::$_4::operator()(ActiveOffer* param_1, ActiveOffer* param_2) {
        long lVar1;
        long lVar2;

        lVar1 = param_1->data();
        lVar2 = param_2->data();
        return lVar1 < lVar2;
    }

    // 0x100221010, 48 bytes, placed by class name
    // ActiveOffersReply::$_5::operator()(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&) const
    /* ActiveOffersReply::$_5::TEMPNAMEPLACEHOLDERVALUE(ActiveOffersReply::ActiveOffer
   const&, ActiveOffersReply::ActiveOffer const&) const */

    bool ActiveOffersReply::$_5::operator()(ActiveOffer* param_1, ActiveOffer* param_2) {
        int iVar1;
        int iVar2;

        iVar1 = param_1->GetPos();
        iVar2 = param_2->GetPos();
        return iVar1 < iVar2;
    }

    // 0x1002217b0, 64 bytes, placed by class name
    // ActiveOffersReply::$_6::operator()(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&) const
    /* ActiveOffersReply::$_6::TEMPNAMEPLACEHOLDERVALUE(ActiveOffersReply::ActiveOffer
   const&, ActiveOffersReply::ActiveOffer const&) const */

    bool ActiveOffersReply::$_6::operator()(ActiveOffer* param_1, ActiveOffer* param_2) {
        CommandLine* pCVar1;
        int iVar2;
        int iVar3;

        pCVar1 = (CommandLine*)param_1->second();
        iVar2 = pCVar1->GetPos();
        pCVar1 = (CommandLine*)param_2->second();
        iVar3 = pCVar1->GetPos();
        return iVar2 < iVar3;
    }

    // 0x100221f60, 48 bytes, placed by class name
    // ActiveOffersReply::$_7::operator()(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&) const
    /* ActiveOffersReply::$_7::TEMPNAMEPLACEHOLDERVALUE(ActiveOffersReply::ActiveOffer
   const&, ActiveOffersReply::ActiveOffer const&) const */

    uint ActiveOffersReply::$_7::operator()(ActiveOffer* param_1, ActiveOffer* param_2) {
        basic_string* pbVar2;

        pbVar2 = (basic_string*)param_1->getDisplayName();
        param_2->getDisplayName();
        return eastl::basic_string<char, BucketAllocatorEASTL>::compare(pbVar2) >> 31;
    }

    // 0x100222700, 64 bytes, placed by class name
    // ActiveOffersReply::$_8::operator()(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&) const
    /* ActiveOffersReply::$_8::TEMPNAMEPLACEHOLDERVALUE(ActiveOffersReply::ActiveOffer
   const&, ActiveOffersReply::ActiveOffer const&) const */

    bool ActiveOffersReply::$_8::operator()(ActiveOffer* param_1, ActiveOffer* param_2) {
        Minimap* pMVar1;
        int iVar2;
        int iVar3;

        pMVar1 = (Minimap*)param_1->second();
        iVar2 = pMVar1->GetLevel();
        pMVar1 = (Minimap*)param_2->second();
        iVar3 = pMVar1->GetLevel();
        return iVar2 < iVar3;
    }

} // namespace jag::oldscape::rs2lib
