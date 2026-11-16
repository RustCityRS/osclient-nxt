// projects/osclient/FriendSystem.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "FriendSystem.h"

namespace jag::oldscape {
    // 0x1001856f0
    void FriendSystem::ProcessFriendListUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, int arg2,
                                               ErrorCapture& errorCapture) {
        field_8->ProcessUpdate(packetJ, arg2, errorCapture);
        field_376 = 2;
        Client::Instance()->ResetPlayerFriendIndicators();
    }

    // 0x100185720
    void FriendSystem::Service() {
        int iVar1;
        long lVar3;
        Client* pCVar4;
        eastl::string* pbVar5;
        eastl::string local_78;
        eastl::string local_58;

        Layout* this_00 = (Layout*)(field_8 + 168);
        auto friendEvent = this_00->HeapBeginPtr();
        auto pFVar2 = this_00->end();
        if (friendEvent != pFVar2) {
            do {
                if ((friendEvent->field_70 == '\0') &&
                    (iVar1 = friendEvent->field_64, lVar3 = core::SafeTime::CurrentTimeMillis(),
                     (long)iVar1 < lVar3 / 1000 - 5)) {
                    if (0 < friendEvent->field_68) {
                        pCVar4 = Client::Instance();
                        local_58 = eastl::string("");
                        pbVar5 = friendEvent->GetDisplayName();
                        local_78 + *pbVar5;
                        pCVar4->AddChat(5, local_58, local_78);
                    }
                    if (friendEvent->field_68 == 0) {
                        pCVar4 = Client::Instance();
                        local_58 = eastl::string("");
                        pbVar5 = friendEvent->GetDisplayName();
                        local_78 + *pbVar5;
                        pCVar4->AddChat(5, local_58, local_78);
                    }
                    friendEvent = (FriendEvent*)this_00->erase(friendEvent);
                } else {
                    friendEvent = (FriendEvent*)&friendEvent->field_72;
                }
                pFVar2 = (FriendEvent*)this_00->end();
            } while (friendEvent != pFVar2);
        }
    }

    // 0x1001859d0
    void FriendSystem::Reset() {
        field_376 = 0;
        field_8->Reset();
        field_208->Reset();
    }

    // 0x100185ad0
    bool FriendSystem::IsFriend(const rs2lib::social::DisplayName& displayName, bool arg2) const {
        long lVar3 = Client::Instance()->field_52016.operator->();
        bool cVar1 = displayName.Equals(*((lVar3 + 992)));
        uint64_t uVar4 = 1;
        if (!cVar1) {
            uVar4 = field_8->IsFriend(displayName, arg2);
        }
        return uVar4;
    }

    // 0x100185bf0
    void FriendSystem::AddFriend(const eastl::string& str) {
        long lVar3;
        DisplayName local_60;

        if (!(str.empty())) {
            local_60 = rs2lib::social::DisplayName(str, field_0);
            if (local_60.IsValid()) {
                if (!(IsFriendListAtMaxCapacity())) {
                    lVar3 = Client::Instance()->field_52016.operator->();
                    if (!(((DisplayName*)(*((lVar3 + 992))).operator->())->Equals(local_60))) {
                        if (!(IsFriend(local_60, false))) {
                            if (!(IsIgnored(local_60))) {
                                SendAddFriendServerMessage(str);
                            } else {
                                NotifyFriendOnIgnoreList(str);
                            }
                        } else {
                            NotifyAlreadyFriend(str);
                        }
                    } else {
                        NotifyCannotFriendSelf();
                    }
                } else {
                    NotifyFriendListFull();
                }
            }
        }
    }

    // 0x100185d00
    unsigned long FriendSystem::IsFriendListAtMaxCapacity() const {
        int iVar2;
        uint64_t unaff_R14;

        bool cVar1 = field_8->IsFull();
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (!cVar1) {
            iVar2 = field_8->GetLevel();
            if (199 < iVar2) {
                if (Client::Instance()->field_51992 != 1)
                    goto LAB_100185d3d;
            }
            uVar4 = 0;
        }
    LAB_100185d3d:
        return uVar4 & 4294967295;
    }

    // 0x100185d50
    void FriendSystem::NotifyFriendListFull() {
        AddFriendSystemChatNotification(*((eastl::string*)&constants::text::friendlistfull));
    }

    // 0x100185dc0
    void FriendSystem::NotifyCannotFriendSelf() {
        AddFriendSystemChatNotification(*((eastl::string*)&constants::text::friendcantaddself));
    }

    // 0x100185de0
    void FriendSystem::NotifyAlreadyFriend(const eastl::string& str) {
        eastl::string local_30;

        local_30 + str;
        AddFriendSystemChatNotification(&local_30, &local_30);
    }

    // 0x100185e50
    void FriendSystem::NotifyFriendOnIgnoreList(const eastl::string& str) {
        eastl::string local_50;
        eastl::string local_30;

        local_50 + (*((eastl::string*)&constants::text::removeignore1));
        *&local_30 + local_50;
        AddFriendSystemChatNotification(&local_30, &local_30);
    }

    // 0x100185ed0
    void FriendSystem::SendAddFriendServerMessage(const eastl::string& str) {
        uint8_t local_58[64];

        auto pCVar1 = Client::Instance();
        auto pSVar2 = pCVar1->field_19120.operator->();
        auto isaac = pSVar2->GetOutgoingEncryption();
        *local_58 = shared::ClientMessage::MakeClientMessage(19, *isaac);
        auto publishingPlatformType =
            PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(str, false);
        ((local_58 + 8))->p1<shared::LoginProt::ID>(publishingPlatformType);
        ((local_58 + 8))->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(str, false);
        pCVar1 = Client::Instance();
        pSVar2 = (ServerConnection*)pCVar1->field_19120.operator->();
        pSVar2->SendClientMessage(*local_58);
    }

    // 0x100185f70
    void FriendSystem::AddFriendSystemChatNotification(const eastl::string& str) {
        auto this_00 = Client::Instance();
        eastl::string local_50("");
        this_00->AddChat(30, local_50, str);
    }

    // 0x100186000
    void FriendSystem::AddIgnore(const eastl::string& str) {
        long lVar3;
        FriendSystem* pFVar4;
        DisplayName local_60;

        if (!(str.empty())) {
            local_60 = rs2lib::social::DisplayName(str, field_0);
            if (local_60.IsValid()) {
                pFVar4 = this;
                if (!(IsIgnoreListAtMaxCapacity())) {
                    lVar3 = Client::Instance()->field_52016.operator->();
                    pFVar4 = (FriendSystem*)(*((lVar3 + 992))).operator->();
                    if (!(pFVar4->Equals(local_60))) {
                        pFVar4 = this;
                        if (!(IsIgnored(local_60))) {
                            if (!(IsFriend(local_60, false))) {
                                SendAddIgnoreServerMessage(str);
                            } else {
                                NotifyIgnoreOnFriendList(str);
                            }
                        } else {
                            NotifyAlreadyIgnored(pFVar4, str);
                        }
                    } else {
                        NotifyCannotIgnoreSelf(pFVar4);
                    }
                } else {
                    NotifyIgnoreListFull(pFVar4);
                }
            }
        }
    }

    // 0x100186100
    unsigned long FriendSystem::IsIgnoreListAtMaxCapacity() const {
        int iVar2;
        uint64_t unaff_R14;

        bool cVar1 = field_208->IsFull();
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (!cVar1) {
            iVar2 = field_208->GetLevel();
            if (99 < iVar2) {
                if (Client::Instance()->field_51992 != 1)
                    goto LAB_10018613e;
            }
            uVar4 = 0;
        }
    LAB_10018613e:
        return uVar4 & 4294967295;
    }

    // 0x100186150
    void FriendSystem::NotifyIgnoreListFull() {
        AddFriendSystemChatNotification(*((eastl::string*)&constants::text::ignorelistfull));
    }

    // 0x100186170
    void FriendSystem::NotifyCannotIgnoreSelf() {
        AddFriendSystemChatNotification(*((eastl::string*)&constants::text::ignorecantaddself));
    }

    // 0x100186190
    void FriendSystem::NotifyAlreadyIgnored(const eastl::string& str) {
        eastl::string local_30;

        local_30 + str;
        AddFriendSystemChatNotification(&local_30, &local_30);
    }

    // 0x1001861e0
    void FriendSystem::NotifyIgnoreOnFriendList(const eastl::string& str) {
        eastl::string local_50;
        eastl::string local_30;

        local_50 + (*((eastl::string*)&constants::text::removefriend1));
        *&local_30 + local_50;
        AddFriendSystemChatNotification(&local_30, &local_30);
    }

    // 0x100186260
    void FriendSystem::SendAddIgnoreServerMessage(const eastl::string& str) {
        uint8_t local_58[64];

        auto pCVar1 = Client::Instance();
        auto pSVar2 = pCVar1->field_19120.operator->();
        auto isaac = pSVar2->GetOutgoingEncryption();
        *local_58 = shared::ClientMessage::MakeClientMessage(4, *isaac);
        auto publishingPlatformType =
            PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(str, false);
        ((local_58 + 8))->p1<shared::LoginProt::ID>(publishingPlatformType);
        ((local_58 + 8))->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(str, false);
        pCVar1 = Client::Instance();
        pSVar2 = (ServerConnection*)pCVar1->field_19120.operator->();
        pSVar2->SendClientMessage(*local_58);
    }

    // 0x100186300
    void FriendSystem::DelFriend(const eastl::string& str) {
        PublishingPlatformType publishingPlatformType;
        Client* pCVar2;
        ServerConnection* pSVar3;
        Isaac* isaac;
        DisplayName local_a0;
        uint8_t local_60[64];

        if (!(str.empty())) {
            local_a0 = rs2lib::social::DisplayName(str, field_0);
            if (local_a0.IsValid()) {
                if (field_8->RemovePlayer(&local_a0)) {
                    pCVar2 = Client::Instance();
                    pCVar2->NotifyFriendSystemUpdate();
                    pCVar2 = Client::Instance();
                    pSVar3 = (ServerConnection*)pCVar2->field_19120.operator->();
                    isaac = pSVar3->GetOutgoingEncryption();
                    *local_60 = shared::ClientMessage::MakeClientMessage(86, *isaac);
                    publishingPlatformType =
                        PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(str, false);
                    ((local_60 + 8))->p1<shared::LoginProt::ID>(publishingPlatformType);
                    ((local_60 + 8))->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(str, false);
                    pCVar2 = Client::Instance();
                    pSVar3 = (ServerConnection*)pCVar2->field_19120.operator->();
                    pSVar3->SendClientMessage(*local_60);
                }
                pCVar2 = Client::Instance();
                pCVar2->ResetPlayerFriendIndicators();
            }
        }
    }

    // 0x100186470
    void FriendSystem::DelIgnore(const eastl::string& str, bool arg2) {
        PublishingPlatformType publishingPlatformType;
        Client* pCVar2;
        ServerConnection* pSVar3;
        Isaac* isaac;
        DisplayName local_a8;
        uint8_t local_68[64];

        if (!(str.empty())) {
            local_a8 = rs2lib::social::DisplayName(str, field_0);
            if (local_a8.IsValid()) {
                if (field_208->RemovePlayer(&local_a8)) {
                    pCVar2 = Client::Instance();
                    pCVar2->NotifyFriendSystemUpdate();
                    if (arg2) {
                        pCVar2 = Client::Instance();
                        pSVar3 = (ServerConnection*)pCVar2->field_19120.operator->();
                        isaac = pSVar3->GetOutgoingEncryption();
                        *local_68 = shared::ClientMessage::MakeClientMessage(57, *isaac);
                        publishingPlatformType =
                            PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(str, false);
                        ((local_68 + 8))->p1<shared::LoginProt::ID>(publishingPlatformType);
                        ((local_68 + 8))
                            ->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(str, false);
                        pCVar2 = Client::Instance();
                        pSVar3 = (ServerConnection*)pCVar2->field_19120.operator->();
                        pSVar3->SendClientMessage(*local_68);
                    }
                }
                pCVar2 = Client::Instance();
                pCVar2->ResetPlayerIgnoreIndicators();
            }
        }
    }

    // 0x1001865f0
    void FriendSystem::SetFriendRank(const eastl::string& str, int arg2) {
        uint8_t local_70[64];

        auto pCVar2 = Client::Instance();
        auto pSVar3 = pCVar2->field_19120.operator->();
        auto isaac = pSVar3->GetOutgoingEncryption();
        *local_70 = shared::ClientMessage::MakeClientMessage(74, *isaac);
        int iVar1 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(str, false);
        ((local_70 + 8))->p1<shared::LoginProt::ID>(iVar1 + 1);
        SuperShuffledPacketFactory local_30(*((local_70 + 8)));
        auto pPVar4 = local_30.HeapBeginPtr();
        pPVar4->p1<shared::LoginProt::ID>(arg2);
        pPVar4 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
        pPVar4->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(str, false);
        pCVar2 = Client::Instance();
        pSVar3 = (ServerConnection*)pCVar2->field_19120.operator->();
        pSVar3->SendClientMessage(*local_70);
    }

} // namespace jag::oldscape
