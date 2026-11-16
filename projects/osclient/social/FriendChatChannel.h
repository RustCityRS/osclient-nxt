// projects/osclient/social/FriendChatChannel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::social {
    class FriendChatChannel {
    public:
        // virtual methods in vtable order
        virtual FriendChatChannel* CreatePlayerData() const;
        void ResetCachedFriendIndicators();
        void ResetCachedIgnoreIndicators();
        unsigned long ProcessFullUpdate(PacketJ<Array<unsigned char>>& packetJ, unsigned int arg2);
        void ProcessSingleUserUpdate(PacketJ<Array<unsigned char>>& packetJ);
        void SetOwnerName(const eastl::string& str);
        void SetChannelName(const eastl::string& str);
        void CheckRefreshSelfRank(const FriendChatUser& friendChatUser);
        ~FriendChatChannel();
        FriendChatChannel(rs2lib::social::NameSpace nameSpace, DisplayNameQueryable* displayNameQueryable);

    private:
        int field_8;
        int field_12;
        uint8_t _unknown_16[272];
        uint8_t field_288;
        uint8_t _unknown_289[3];
        uint32_t field_292;
        int field_296;
        uint8_t _unknown_300[4];
        DisplayNameQueryable* field_304;
        NameSpace field_312;
        uint8_t _unknown_316[4];
    };

    // 0x1000e03a0
    void FriendChatChannel::ResetCachedFriendIndicators() {
        int iVar2;

        int iVar1 = GetLevel();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                ((FriendChatUser*)GetPlayerBySlot(iVar1))->ResetFriendIndicator();
                iVar1 = iVar1 + 1;
                iVar2 = GetLevel();
            } while (iVar1 < iVar2);
        }
    }

    // 0x1000e0430
    void FriendChatChannel::ResetCachedIgnoreIndicators() {
        int iVar2;

        int iVar1 = GetLevel();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                ((FriendChatUser*)GetPlayerBySlot(iVar1))->ResetIgnoreIndicator();
                iVar1 = iVar1 + 1;
                iVar2 = GetLevel();
            } while (iVar1 < iVar2);
        }
    }

    // 0x100112db0
    unsigned long FriendChatChannel::ProcessFullUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                       unsigned int arg2) {
        int arg2_00;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>* this_00;
        uint8_t bVar2;
        bool cVar3;
        short sVar4;
        unsigned short uVar5;
        unsigned int uVar6;
        FriendChatUser* friendChatUser;
        char* str;
        unsigned long uVar7;
        unsigned int uVar8;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_98[32];

        local_78.gStringCP1252ToUTF8<eastl::string>((uint8_t)packetJ);
        SetOwnerName(local_78);
        long long arg1 = packetJ.g8();
        DisplayName local_78 = core::stringtools::general::UserhashTools::ToRawUsername(arg1);
        SetChannelName(local_78);
        uint8_t uVar1 = packetJ.g1s();
        field_288 = uVar1;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>* local_38 = packetJ;
        if (arg2 == 2) {
            sVar4 = packetJ.gSmart1Or2Minus1();
            uVar8 = (unsigned int)sVar4;
            uVar6 = 4294967295;
        } else {
            if (arg2 != 1) {
                local_78 = eastl::string((CtorSprintf*)"Unrecognized process full update version: %d",
                                         (char*)(unsigned long)arg2);
                str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                OldscapeClientError::ReportError(str, nullptr);
                Reset();
                uVar7 = 0;
                goto LAB_100112f8a;
            }
            bVar2 = packetJ.g1();
            uVar8 = (unsigned int)bVar2;
            uVar6 = 255;
        }
        uVar7 = (((uint64_t)((int64_t)((unsigned long)packetJ >> 8)) << 8) | (uint8_t)1);
        if (uVar8 != uVar6) {
            Reset();
            if (0 < (int)uVar8) {
                do {
                    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                        eastl::string>(local_98, (uint8_t)local_38);
                    local_78 = rs2lib::social::DisplayName(*local_98, field_312);
                    friendChatUser = (FriendChatUser*)AddPlayer(local_78);
                    this_00 = local_38;
                    uVar5 = local_38->g2();
                    if (friendChatUser != nullptr) {
                        arg2_00 = field_296;
                        field_296 = arg2_00 + 1;
                        friendChatUser->SetWorld((unsigned int)uVar5, arg2_00);
                        cVar3 = this_00->g1s();
                        *(int*)&friendChatUser->field_176 = (int)cVar3;
                        local_78.gStringCP1252ToUTF8<eastl::string>((uint8_t)this_00);
                        friendChatUser->field_144 = &local_78;
                        CheckRefreshSelfRank(*friendChatUser);
                    }
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                uVar7 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
            }
        }
    LAB_100112f8a:
        return uVar7 & 4294967295;
    }

    // 0x100113020
    void FriendChatChannel::ProcessSingleUserUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        int iVar3;
        unsigned int uVar4;
        FriendChatUser* pFVar5;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_48[32];

        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            local_48, (uint8_t)packetJ);
        DisplayName local_88(*local_48, field_312);
        unsigned int uVar2 = packetJ.g2();
        bool cVar1 = packetJ.g1s();
        if (cVar1 == -128) {
            iVar3 = GetLevel();
            if (((iVar3 != 0) &&
                 (pFVar5 = (FriendChatUser*)GetPlayerByCurrentDisplayName(local_88), pFVar5 != nullptr)) &&
                (uVar4 = pFVar5->GetLastNumVerts(), uVar4 == (uVar2 & 65535))) {
                RemovePlayer(pFVar5);
            }
            goto LAB_10011315c;
        }
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            local_48, (uint8_t)packetJ);
        pFVar5 = (FriendChatUser*)GetPlayerByCurrentDisplayName(local_88);
        if (pFVar5 == nullptr) {
            iVar3 = GetLevel();
            if (iVar3 <= field_8) {
                pFVar5 = (FriendChatUser*)AddPlayer(local_88);
                goto joined_r0x000100113151;
            }
        } else {
        joined_r0x000100113151:
            if (pFVar5 != nullptr) {
                iVar3 = field_296;
                field_296 = iVar3 + 1;
                pFVar5->SetWorld(uVar2 & 65535, iVar3);
                *(int*)&pFVar5->field_176 = (int)cVar1;
                pFVar5->field_144 = local_48;
                CheckRefreshSelfRank(*pFVar5);
            }
        }
    LAB_10011315c:
    }

    // 0x10012e710
    void FriendChatChannel::SetOwnerName(const eastl::string& str) {

        field_224 = str;
        auto local_40 = core::stringtools::general::UserhashTools::ToScreenName(str);
        field_256 = &local_40;
    }

    // 0x10012e780
    void FriendChatChannel::SetChannelName(const eastl::string& str) {

        field_160 = str;
        auto local_40 = core::stringtools::general::UserhashTools::ToScreenName(str);
        field_192 = &local_40;
    }

    // 0x10012e8d0
    void FriendChatChannel::CheckRefreshSelfRank(const FriendChatUser& friendChatUser) {
        auto this_00 = friendChatUser.second();
        DisplayName* displayName = (DisplayName*)(**(void (**)(...))field_304->field_0)();
        if (*this_00 == *displayName != '\0') {
            field_292 = *(uint32_t*)&friendChatUser.field_176;
        }
    }

    // 0x10013bf00
    FriendChatChannel::~FriendChatChannel() {
        field_256.~basic_string();
        field_224.~basic_string();
        field_192.~basic_string();
        field_160.~basic_string();
    }

    // 0x100150cd0
    FriendChatChannel::FriendChatChannel(rs2lib::social::NameSpace nameSpace,
                                         DisplayNameQueryable* displayNameQueryable)
        : PlayerRegistry<FriendChatUser>(500), field_296(1), field_304(displayNameQueryable), field_312(nameSpace) {}

    // 0x100150ec0
    FriendChatChannel* FriendChatChannel::CreatePlayerData() const {
        *this = std::make_unique<FriendChatUser>();
        return this;
    }

} // namespace jag::oldscape::social

namespace jag::game {
    // 0x1000e10c0: BuildFunctionRequestData::BuildFunctionRequestData() has the same machine code as oldscape::FoundObject::FoundObject()

    // 0x1000e10d0: MapSquareStatus::~MapSquareStatus() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x1000e10d0: BuildModelResultData::~BuildModelResultData() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x1000e10d0: BuildAnimationResultData::~BuildAnimationResultData() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x1000e10d0: BuildFunctionRequestData::~BuildFunctionRequestData() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x1000e10d0: BuildSingleLocationResultData::~BuildSingleLocationResultData() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x1000e10d0: BuildCombinedLocationRequestData_PerModelData::~BuildCombinedLocationRequestData_PerModelData() has the same machine code as oldscape::FoundObject::~FoundObject()

} // namespace jag::game

namespace jag::graphics {
    // 0x1000e10c0: BindInfo::BindInfo() has the same machine code as oldscape::FoundObject::FoundObject()

    // 0x1000e10d0: BindInfo::~BindInfo() has the same machine code as oldscape::FoundObject::~FoundObject()

} // namespace jag::graphics

namespace jag::oldscape::dash3d {
    // 0x1000e10d0: OperationBuffer::~OperationBuffer() has the same machine code as FoundObject::~FoundObject()

    // 0x1000e10d0: ShareLightRequest::~ShareLightRequest() has the same machine code as FoundObject::~FoundObject()

} // namespace jag::oldscape::dash3d

namespace jag::tweak {
    // 0x1000e10d0: Event::~Event() has the same machine code as oldscape::FoundObject::~FoundObject()

} // namespace jag::tweak

namespace jag::render {
    // 0x1000e10d0: KeepAliveSharedPtrAndOwner::~KeepAliveSharedPtrAndOwner() has the same machine code as oldscape::FoundObject::~FoundObject()

} // namespace jag::render
