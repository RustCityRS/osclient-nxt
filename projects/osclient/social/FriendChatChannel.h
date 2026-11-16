// projects/osclient/social/FriendChatChannel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::social {
    class FriendChatChannel {
    public:
        // virtual methods in vtable order
        virtual FriendChatChannel* CreatePlayerData() const;
        void ResetCachedFriendIndicators();
        void ResetCachedIgnoreIndicators();
        ulong ProcessFullUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, unsigned int);
        void ProcessSingleUserUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        void SetOwnerName(eastl::string const&);
        void SetChannelName(eastl::string const&);
        void CheckRefreshSelfRank(FriendChatUser const&);
        ~FriendChatChannel();
        FriendChatChannel(rs2lib::social::NameSpace, DisplayNameQueryable*);

        // data members, from how the methods use this: 320 bytes
        undefined* field_0; // offset 0, vtable pointer
        int field_8;        // offset 8
        int field_12;       // offset 12
        char _unknown_16[272];
        undefined1 field_288; // offset 288
        char _unknown_289[3];
        undefined4 field_292; // offset 292
        int field_296;        // offset 296
        char _unknown_300[4];
        undefined8** field_304; // offset 304
        undefined4 field_312;   // offset 312
        char _unknown_316[4];
    };

    // 0x1000e03a0, 80 bytes, inline, placed by class name and debug map
    // FriendChatChannel::ResetCachedFriendIndicators()
    void FriendChatChannel::ResetCachedFriendIndicators() {
        FriendChatUser* this_00;
        int iVar1;
        int iVar2;

        iVar1 = GetLevel();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                this_00 = (FriendChatUser*)GetPlayerBySlot(iVar1);
                this_00->ResetFriendIndicator();
                iVar1 = iVar1 + 1;
                iVar2 = GetLevel();
            } while (iVar1 < iVar2);
        }
    }

    // 0x1000e0430, 80 bytes, inline, placed by class name and debug map
    // FriendChatChannel::ResetCachedIgnoreIndicators()
    void FriendChatChannel::ResetCachedIgnoreIndicators() {
        FriendChatUser* this_00;
        int iVar1;
        int iVar2;

        iVar1 = GetLevel();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                this_00 = (FriendChatUser*)GetPlayerBySlot(iVar1);
                this_00->ResetIgnoreIndicator();
                iVar1 = iVar1 + 1;
                iVar2 = GetLevel();
            } while (iVar1 < iVar2);
        }
    }

    // 0x100112db0, 544 bytes, inline, placed by class name
    // FriendChatChannel::ProcessFullUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, unsigned int)
    ulong FriendChatChannel::ProcessFullUpdate(PacketJ* param_1, uint param_2) {
        int iVar1;
        PacketJ* this_00;
        undefined1 uVar2;
        byte bVar3;
        char cVar4;
        short sVar5;
        ushort uVar6;
        uint uVar7;
        longlong lVar8;
        FriendChatUser* this_01;
        char* pcVar9;
        ulong uVar10;
        uint uVar11;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_98[32];
        DisplayName local_78;
        PacketJ* local_38;

        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_78, SUB81(param_1, 0));
        SetOwnerName(this, (basic_string*)&local_78);
        local_78.~basic_string();
        lVar8 = param_1->g8();
        local_78.ToRawUsername(lVar8);
        SetChannelName(this, (basic_string*)&local_78);
        local_78.~basic_string();
        uVar2 = param_1->g1s();
        field_288 = uVar2;
        local_38 = param_1;
        if (param_2 == 2) {
            sVar5 = param_1->gSmart1Or2Minus1();
            uVar11 = (uint)sVar5;
            uVar7 = 4294967295;
        } else {
            if (param_2 != 1) {
                new (&local_78) eastl::string("Unrecognized process full update version: %d", param_2);
                pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                OldscapeClientError::ReportError(pcVar9, (Callstack*)0);
                local_78.~basic_string();
                Reset();
                uVar10 = 0;
                goto LAB_100112f8a;
            }
            bVar3 = param_1->g1();
            uVar11 = (uint)bVar3;
            uVar7 = 255;
        }
        uVar10 = CONCAT71((int7)((ulong)param_1 >> 8), 1);
        if (uVar11 != uVar7) {
            Reset();
            if (0 < (int)uVar11) {
                do {
                    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                        eastl::string>(local_98, SUB81(local_38, 0));
                    new (&local_78) rs2lib::social::DisplayName(local_98, field_312);
                    this_01 = (FriendChatUser*)AddPlayer(&local_78);
                    local_78.~pair();
                    local_98->~basic_string();
                    this_00 = local_38;
                    uVar6 = local_38->g2();
                    if (this_01 != (FriendChatUser*)0) {
                        iVar1 = field_296;
                        field_296 = iVar1 + 1;
                        this_01->SetWorld((uint)uVar6, iVar1);
                        cVar4 = this_00->g1s();
                        *(int*)&this_01->field_176 = (int)cVar4;
                        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                            eastl::string>(
                            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_78,
                            SUB81(this_00, 0));
                        eastl::string::operator=((eastl::string*)&this_01->field_144, (basic_string*)&local_78);
                        local_78.~basic_string();
                        CheckRefreshSelfRank(this, this_01);
                    }
                    uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
                uVar10 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
            }
        }
    LAB_100112f8a:
        return uVar10 & 4294967295;
    }

    // 0x100113020, 400 bytes, inline, placed by class name
    // FriendChatChannel::ProcessSingleUserUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void FriendChatChannel::ProcessSingleUserUpdate(PacketJ* param_1) {
        char cVar1;
        uint uVar2;
        int iVar3;
        uint uVar4;
        FriendChatUser* pFVar5;
        DisplayName local_88;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_48[32];

        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            local_48, SUB81(param_1, 0));
        new (&local_88) rs2lib::social::DisplayName(local_48, field_312);
        local_48->~basic_string();
        uVar2 = param_1->g2();
        cVar1 = param_1->g1s();
        if (cVar1 == -128) {
            iVar3 = GetLevel();
            if (((iVar3 != 0) &&
                 (pFVar5 = (FriendChatUser*)GetPlayerByCurrentDisplayName(&local_88), pFVar5 != (FriendChatUser*)0)) &&
                (uVar4 = pFVar5->GetLastNumVerts(), uVar4 == (uVar2 & 65535))) {
                RemovePlayer(pFVar5);
            }
            goto LAB_10011315c;
        }
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            local_48, SUB81(param_1, 0));
        pFVar5 = (FriendChatUser*)GetPlayerByCurrentDisplayName(&local_88);
        if (pFVar5 == (FriendChatUser*)0) {
            iVar3 = GetLevel();
            if (iVar3 <= field_8) {
                pFVar5 = (FriendChatUser*)AddPlayer(&local_88);
                goto joined_r0x000100113151;
            }
        } else {
        joined_r0x000100113151:
            if (pFVar5 != (FriendChatUser*)0) {
                iVar3 = field_296;
                field_296 = iVar3 + 1;
                pFVar5->SetWorld(uVar2 & 65535, iVar3);
                *(int*)&pFVar5->field_176 = (int)cVar1;
                eastl::string::operator=((eastl::string*)&pFVar5->field_144, (basic_string*)local_48);
                CheckRefreshSelfRank(this, pFVar5);
            }
        }
        local_48->~basic_string();
    LAB_10011315c:
        local_88.~pair();
    }

    // 0x10012e710, 112 bytes, inline, placed by class name
    // FriendChatChannel::SetOwnerName(eastl::string const&)
    void FriendChatChannel::SetOwnerName(basic_string* param_1) {
        UserhashTools local_40[32];

        eastl::string::operator=((eastl::string*)&field_224, param_1);
        local_40->ToScreenName(param_1);
        eastl::string::operator=((eastl::string*)&field_256, (basic_string*)local_40);
        local_40->~basic_string();
    }

    // 0x10012e780, 112 bytes, inline, placed by class name
    // FriendChatChannel::SetChannelName(eastl::string const&)
    void FriendChatChannel::SetChannelName(basic_string* param_1) {
        UserhashTools local_40[32];

        eastl::string::operator=((eastl::string*)&field_160, param_1);
        local_40->ToScreenName(param_1);
        eastl::string::operator=((eastl::string*)&field_192, (basic_string*)local_40);
        local_40->~basic_string();
    }

    // 0x10012e8d0, 80 bytes, inline, placed by class name
    // FriendChatChannel::CheckRefreshSelfRank(FriendChatUser const&)
    void FriendChatChannel::CheckRefreshSelfRank(FriendChatUser* param_1) {
        DisplayName* this_00;
        DisplayName* pDVar2;

        this_00 = (DisplayName*)param_1->second();
        pDVar2 = (DisplayName*)(*(code*)**field_304)();
        if (rs2lib::social::DisplayName::operator==(this_00, pDVar2) != '\0') {
            field_292 = *(undefined4*)&param_1->field_176;
        }
    }

    // 0x10013bef0, 16 bytes, complete-object destructor, inline, placed by class name
    // FriendChatChannel::~FriendChatChannel(): jumps straight to the base-object destructor

    // 0x10013bf00, 80 bytes, base-object destructor, inline, placed by class name
    // FriendChatChannel::~FriendChatChannel()
    void FriendChatChannel::~FriendChatChannel() {
        (&field_256)->~basic_string();
        (&field_224)->~basic_string();
        (&field_192)->~basic_string();
        (&field_160)->~basic_string();
        ~PlayerRegistry();
    }

    // 0x100150cb0, 16 bytes, complete-object constructor, inline, placed by class name
    // FriendChatChannel::FriendChatChannel(rs2lib::social::NameSpace, DisplayNameQueryable*): jumps straight to the base-object constructor

    // 0x100150cd0, 224 bytes, base-object constructor, inline, placed by class name
    // FriendChatChannel::FriendChatChannel(rs2lib::social::NameSpace, DisplayNameQueryable*)
    void FriendChatChannel::FriendChatChannel(undefined4 param_2, undefined8** param_3) {
        new (this) PlayerRegistry<FriendChatUser>(500);
        field_0 = PTR_vtable_100ee8b48 + 16;
        new (&field_160) eastl::string();
        new (&field_192) eastl::string();
        new (&field_224) eastl::string();
        new (&field_256) eastl::string();
        field_296 = 1;
        field_304 = param_3;
        field_312 = param_2;
    }

    // 0x100150ec0, 32 bytes, inline, placed by class name
    // FriendChatChannel::CreatePlayerData() const
    FriendChatChannel* FriendChatChannel::CreatePlayerData() {
        std::make_unique<FriendChatUser>();
        return this;
    }

} // namespace jag::oldscape::social

namespace jag::game {
    // 0x1000e10c0: the linker folded this into oldscape::FoundObject::FoundObject(), which has identical code
    BuildFunctionRequestData::BuildFunctionRequestData();

    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    MapSquareStatus::~MapSquareStatus();

    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    BuildModelResultData::~BuildModelResultData();

    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    BuildAnimationResultData::~BuildAnimationResultData();

    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    BuildFunctionRequestData::~BuildFunctionRequestData();

    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    BuildSingleLocationResultData::~BuildSingleLocationResultData();

    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    BuildCombinedLocationRequestData_PerModelData::~BuildCombinedLocationRequestData_PerModelData();

} // namespace jag::game

namespace jag::oldscape {
    // 0x1000e10c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // FoundObject::FoundObject(): jumps straight to the base-object constructor

    // 0x1000e10d0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // FoundObject::~FoundObject(): jumps straight to the base-object destructor

} // namespace jag::oldscape

namespace jag::graphics {
    // 0x1000e10c0: the linker folded this into oldscape::FoundObject::FoundObject(), which has identical code
    BindInfo::BindInfo();

    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    BindInfo::~BindInfo();

} // namespace jag::graphics

namespace jag::oldscape::dash3d {
    // 0x1000e10d0: the linker folded this into FoundObject::~FoundObject(), which has identical code
    OperationBuffer::~OperationBuffer();

    // 0x1000e10d0: the linker folded this into FoundObject::~FoundObject(), which has identical code
    ShareLightRequest::~ShareLightRequest();

} // namespace jag::oldscape::dash3d

namespace jag::tweak {
    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    Event::~Event();

} // namespace jag::tweak

namespace jag::render {
    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    KeepAliveSharedPtrAndOwner::~KeepAliveSharedPtrAndOwner();

} // namespace jag::render
