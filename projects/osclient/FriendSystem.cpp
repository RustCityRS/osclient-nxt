// projects/osclient/FriendSystem.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "FriendSystem.h"

namespace jag::oldscape {
    // 0x1001856f0, 48 bytes, placed by class name and debug map
    // FriendSystem::ProcessFriendListUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, int, ErrorCapture&)
    void FriendSystem::ProcessFriendListUpdate(PacketJ* param_1, int param_2, ErrorCapture* param_3) {
        Client* this_00;

        (field_8, param_1, param_2, param_3)->ProcessUpdate();
        field_376 = 2;
        this_00 = (Client*)Client::Instance();
        this_00->ResetPlayerFriendIndicators();
    }

    // 0x100185720, 464 bytes, placed by class name and debug map
    // FriendSystem::Service()
    void FriendSystem::Service() {
        int iVar1;
        FriendEvent* this_00;
        FriendEvent* pFVar2;
        long lVar3;
        Client* pCVar4;
        basic_string* pbVar5;
        Layout* this_01;
        Layout* this_02;
        basic_string local_78[32];
        eastl::string local_58[32];
        allocator local_38[8];

        this_02 = (Layout*)(field_8 + 168);
        this_00 = (FriendEvent*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_02);
        this_01 = this_02;
        pFVar2 = (FriendEvent*)this_02->end();
        if (this_00 != pFVar2) {
            do {
                if ((this_00->field_70 == '\0') && (iVar1 = this_00->field_64, lVar3 = this_01->CurrentTimeMillis(),
                                                    (long)iVar1 < lVar3 / 1000 + -5)) {
                    if (0 < this_00->field_68) {
                        pCVar4 = (Client*)Client::Instance();
                        eastl::allocator::allocator(local_38, "EASTL basic_string");
                        eastl::string::basic_string(local_58, "", local_38);
                        pbVar5 = (basic_string*)this_00->GetDisplayName();
                        eastl::operator+(local_78, pbVar5);
                        pCVar4->AddChat(5, local_58, local_78);
                        local_78->~basic_string();
                        eastl::string::~basic_string(local_58);
                    }
                    if (this_00->field_68 == 0) {
                        pCVar4 = (Client*)Client::Instance();
                        eastl::allocator::allocator(local_38, "EASTL basic_string");
                        eastl::string::basic_string(local_58, "", local_38);
                        pbVar5 = (basic_string*)this_00->GetDisplayName();
                        eastl::operator+(local_78, pbVar5);
                        pCVar4->AddChat(5, local_58, local_78);
                        local_78->~basic_string();
                        eastl::string::~basic_string(local_58);
                    }
                    this_00 = (FriendEvent*)this_02->erase(this_00);
                } else {
                    this_00 = (FriendEvent*)&this_00->field_72;
                }
                this_01 = this_02;
                pFVar2 = (FriendEvent*)this_02->end();
            } while (this_00 != pFVar2);
        }
    }

    // 0x1001859d0, 64 bytes, placed by class name and debug map
    // FriendSystem::Reset()
    void FriendSystem::Reset() {
        field_376 = 0;
        field_8->Reset();
        field_208->Reset();
    }

    // 0x100185ad0, 96 bytes, placed by class name and debug map
    // FriendSystem::IsFriend(rs2lib::social::DisplayName const&, bool) const
    undefined4 FriendSystem::IsFriend(DisplayName* param_1, bool param_2) {
        long lVar1;
        char cVar2;
        undefined4 uVar3;

        lVar1 = Client::Instance();
        lVar1 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)(lVar1 + 52016));
        cVar2 = param_1->Equals((shared_ptr*)(lVar1 + 992));
        uVar3 = 1;
        if (cVar2 == '\0') {
            uVar3 = (field_8, param_1, param_2)->IsFriend();
        }
        return uVar3;
    }

    // 0x100185bf0, 256 bytes, placed by class name and debug map
    // FriendSystem::AddFriend(eastl::string const&)
    void FriendSystem::AddFriend(basic_string* param_1) {
        char cVar1;
        long lVar2;
        DisplayName* this_00;
        DisplayName local_60;

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            new (&local_60) rs2lib::social::DisplayName(param_1, field_0);
            cVar1 = local_60.IsValid();
            if (cVar1 != '\0') {
                cVar1 = IsFriendListAtMaxCapacity(this);
                if (cVar1 == '\0') {
                    lVar2 = Client::Instance();
                    lVar2 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)(lVar2 + 52016));
                    this_00 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                        (shared_ptr<rs2lib::social::DisplayName>*)(lVar2 + 992));
                    cVar1 = this_00->Equals(&local_60);
                    if (cVar1 == '\0') {
                        cVar1 = IsFriend(this, &local_60, false);
                        if (cVar1 == '\0') {
                            cVar1 = IsIgnored(this, &local_60);
                            if (cVar1 == '\0') {
                                SendAddFriendServerMessage(param_1);
                            } else {
                                NotifyFriendOnIgnoreList((basic_string*)this);
                            }
                        } else {
                            NotifyAlreadyFriend(this, param_1);
                        }
                    } else {
                        NotifyCannotFriendSelf(this);
                    }
                } else {
                    NotifyFriendListFull(this);
                }
            }
            local_60.~pair();
        }
    }

    // 0x100185d00, 80 bytes, placed by class name and debug map
    // FriendSystem::IsFriendListAtMaxCapacity() const
    ulong FriendSystem::IsFriendListAtMaxCapacity() {
        char cVar1;
        int iVar2;
        long lVar3;
        undefined8 unaff_R14;
        ulong uVar4;

        cVar1 = field_8->IsFull();
        uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (cVar1 == '\0') {
            iVar2 = field_8->GetLevel();
            if (199 < iVar2) {
                lVar3 = Client::Instance();
                if (*(int*)(lVar3 + 51992) != 1)
                    goto LAB_100185d3d;
            }
            uVar4 = 0;
        }
    LAB_100185d3d:
        return uVar4 & 4294967295;
    }

    // 0x100185d50, 32 bytes, placed by class name and debug map
    // FriendSystem::NotifyFriendListFull()
    void FriendSystem::NotifyFriendListFull() {
        AddFriendSystemChatNotification(this, (basic_string*)&constants::text::friendlistfull);
    }

    // 0x100185dc0, 32 bytes, placed by class name and debug map
    // FriendSystem::NotifyCannotFriendSelf()
    void FriendSystem::NotifyCannotFriendSelf() {
        AddFriendSystemChatNotification(this, (basic_string*)&constants::text::friendcantaddself);
    }

    // 0x100185de0, 80 bytes, placed by class name and debug map
    // FriendSystem::NotifyAlreadyFriend(eastl::string const&)
    void FriendSystem::NotifyAlreadyFriend(basic_string* param_1) {
        FriendSystem* this_00;
        eastl::string local_30[32];

        this_00 = (FriendSystem*)local_30;
        eastl::operator+((basic_string*)local_30, param_1);
        AddFriendSystemChatNotification(this_00, (basic_string*)local_30);
        eastl::string::~basic_string(local_30);
    }

    // 0x100185e50, 128 bytes, placed by class name and debug map
    // FriendSystem::NotifyFriendOnIgnoreList(eastl::string const&)
    void FriendSystem::NotifyFriendOnIgnoreList(basic_string* param_1) {
        FriendSystem* this;
        basic_string local_50[32];
        basic_string local_30[32];

        eastl::operator+(local_50, (basic_string*)&constants::text::removeignore1);
        this = (FriendSystem*)local_30;
        eastl::operator+((eastl*)this, local_50, (basic_string*)&constants::text::removeignore2);
        AddFriendSystemChatNotification(this, local_30);
        local_30->~basic_string();
        local_50->~basic_string();
    }

    // 0x100185ed0, 160 bytes, placed by class name and debug map
    // FriendSystem::SendAddFriendServerMessage(eastl::string const&)
    void FriendSystem::SendAddFriendServerMessage(basic_string* param_1) {
        long lVar1;
        ServerConnection* pSVar2;
        undefined8 uVar3;
        int iVar4;
        undefined1 local_58[64];

        lVar1 = Client::Instance();
        pSVar2 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar1 + 19120));
        uVar3 = pSVar2->GetOutgoingEncryption();
        local_58->MakeClientMessage(19, uVar3);
        iVar4 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
            param_1, false);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_58 + 8), iVar4);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_58 + 8), param_1, false);
        lVar1 = Client::Instance();
        pSVar2 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar1 + 19120));
        pSVar2->SendClientMessage(local_58);
        local_58->~ClientMessage();
    }

    // 0x100185f70, 128 bytes, placed by class name and debug map
    // FriendSystem::AddFriendSystemChatNotification(eastl::string const&)
    void FriendSystem::AddFriendSystemChatNotification(basic_string* param_1) {
        Client* this_00;
        eastl::string local_50[32];
        allocator local_30[8];

        this_00 = (Client*)Client::Instance();
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_50, "", local_30);
        this_00->AddChat(30, local_50, param_1);
        eastl::string::~basic_string(local_50);
    }

    // 0x100186000, 256 bytes, placed by class name and debug map
    // FriendSystem::AddIgnore(eastl::string const&)
    void FriendSystem::AddIgnore(basic_string* param_1) {
        char cVar1;
        long lVar2;
        FriendSystem* pFVar3;
        DisplayName local_60;

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            new (&local_60) rs2lib::social::DisplayName(param_1, field_0);
            cVar1 = local_60.IsValid();
            if (cVar1 != '\0') {
                pFVar3 = this;
                cVar1 = IsIgnoreListAtMaxCapacity(this);
                if (cVar1 == '\0') {
                    lVar2 = Client::Instance();
                    lVar2 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)(lVar2 + 52016));
                    pFVar3 = (FriendSystem*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                        (shared_ptr<rs2lib::social::DisplayName>*)(lVar2 + 992));
                    cVar1 = pFVar3->Equals(&local_60);
                    if (cVar1 == '\0') {
                        pFVar3 = this;
                        cVar1 = IsIgnored(this, &local_60);
                        if (cVar1 == '\0') {
                            cVar1 = IsFriend(this, &local_60, false);
                            if (cVar1 == '\0') {
                                SendAddIgnoreServerMessage(param_1);
                            } else {
                                NotifyIgnoreOnFriendList((basic_string*)this);
                            }
                        } else {
                            NotifyAlreadyIgnored(pFVar3, param_1);
                        }
                    } else {
                        NotifyCannotIgnoreSelf(pFVar3);
                    }
                } else {
                    NotifyIgnoreListFull(pFVar3);
                }
            }
            local_60.~pair();
        }
    }

    // 0x100186100, 80 bytes, placed by class name and debug map
    // FriendSystem::IsIgnoreListAtMaxCapacity() const
    ulong FriendSystem::IsIgnoreListAtMaxCapacity() {
        char cVar1;
        int iVar2;
        long lVar3;
        undefined8 unaff_R14;
        ulong uVar4;

        cVar1 = field_208->IsFull();
        uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (cVar1 == '\0') {
            iVar2 = field_208->GetLevel();
            if (99 < iVar2) {
                lVar3 = Client::Instance();
                if (*(int*)(lVar3 + 51992) != 1)
                    goto LAB_10018613e;
            }
            uVar4 = 0;
        }
    LAB_10018613e:
        return uVar4 & 4294967295;
    }

    // 0x100186150, 32 bytes, placed by class name and debug map
    // FriendSystem::NotifyIgnoreListFull()
    void FriendSystem::NotifyIgnoreListFull() {
        AddFriendSystemChatNotification(this, (basic_string*)&constants::text::ignorelistfull);
    }

    // 0x100186170, 32 bytes, placed by class name and debug map
    // FriendSystem::NotifyCannotIgnoreSelf()
    void FriendSystem::NotifyCannotIgnoreSelf() {
        AddFriendSystemChatNotification(this, (basic_string*)&constants::text::ignorecantaddself);
    }

    // 0x100186190, 80 bytes, placed by class name and debug map
    // FriendSystem::NotifyAlreadyIgnored(eastl::string const&)
    void FriendSystem::NotifyAlreadyIgnored(basic_string* param_1) {
        FriendSystem* this_00;
        eastl::string local_30[32];

        this_00 = (FriendSystem*)local_30;
        eastl::operator+((basic_string*)local_30, param_1);
        AddFriendSystemChatNotification(this_00, (basic_string*)local_30);
        eastl::string::~basic_string(local_30);
    }

    // 0x1001861e0, 128 bytes, placed by class name and debug map
    // FriendSystem::NotifyIgnoreOnFriendList(eastl::string const&)
    void FriendSystem::NotifyIgnoreOnFriendList(basic_string* param_1) {
        FriendSystem* this;
        basic_string local_50[32];
        basic_string local_30[32];

        eastl::operator+(local_50, (basic_string*)&constants::text::removefriend1);
        this = (FriendSystem*)local_30;
        eastl::operator+((eastl*)this, local_50, (basic_string*)&constants::text::removefriend2);
        AddFriendSystemChatNotification(this, local_30);
        local_30->~basic_string();
        local_50->~basic_string();
    }

    // 0x100186260, 160 bytes, placed by class name and debug map
    // FriendSystem::SendAddIgnoreServerMessage(eastl::string const&)
    void FriendSystem::SendAddIgnoreServerMessage(basic_string* param_1) {
        long lVar1;
        ServerConnection* pSVar2;
        undefined8 uVar3;
        int iVar4;
        undefined1 local_58[64];

        lVar1 = Client::Instance();
        pSVar2 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar1 + 19120));
        uVar3 = pSVar2->GetOutgoingEncryption();
        local_58->MakeClientMessage(4, uVar3);
        iVar4 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
            param_1, false);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_58 + 8), iVar4);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_58 + 8), param_1, false);
        lVar1 = Client::Instance();
        pSVar2 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar1 + 19120));
        pSVar2->SendClientMessage(local_58);
        local_58->~ClientMessage();
    }

    // 0x100186300, 320 bytes, placed by class name and debug map
    // FriendSystem::DelFriend(eastl::string const&)
    void FriendSystem::DelFriend(basic_string* param_1) {
        Client* pCVar1;
        long lVar2;
        ServerConnection* pSVar3;
        undefined8 uVar4;
        char cVar5;
        int iVar6;
        DisplayName local_a0;
        undefined1 local_60[64];

        cVar5 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar5 == '\0') {
            new (&local_a0) rs2lib::social::DisplayName(param_1, field_0);
            cVar5 = local_a0.IsValid();
            if (cVar5 != '\0') {
                cVar5 = (field_8, &local_a0)->RemovePlayer();
                if (cVar5 != '\0') {
                    pCVar1 = (Client*)Client::Instance();
                    pCVar1->NotifyFriendSystemUpdate();
                    lVar2 = Client::Instance();
                    pSVar3 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar2 + 19120));
                    uVar4 = pSVar3->GetOutgoingEncryption();
                    local_60->MakeClientMessage(86, uVar4);
                    iVar6 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<
                        eastl::string>(param_1, false);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_60 + 8), iVar6);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_60 + 8), param_1, false);
                    lVar2 = Client::Instance();
                    pSVar3 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar2 + 19120));
                    pSVar3->SendClientMessage(local_60);
                    local_60->~ClientMessage();
                }
                pCVar1 = (Client*)Client::Instance();
                pCVar1->ResetPlayerFriendIndicators();
            }
            local_a0.~pair();
        }
    }

    // 0x100186470, 336 bytes, placed by class name and debug map
    // FriendSystem::DelIgnore(eastl::string const&, bool)
    void FriendSystem::DelIgnore(basic_string* param_1, bool param_2) {
        Client* pCVar1;
        long lVar2;
        ServerConnection* pSVar3;
        undefined8 uVar4;
        char cVar5;
        int iVar6;
        DisplayName local_a8;
        undefined1 local_68[64];

        cVar5 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar5 == '\0') {
            new (&local_a8) rs2lib::social::DisplayName(param_1, field_0);
            cVar5 = local_a8.IsValid();
            if (cVar5 != '\0') {
                cVar5 = (field_208, &local_a8)->RemovePlayer();
                if (cVar5 != '\0') {
                    pCVar1 = (Client*)Client::Instance();
                    pCVar1->NotifyFriendSystemUpdate();
                    if (param_2) {
                        lVar2 = Client::Instance();
                        pSVar3 =
                            (ServerConnection*)
                                std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar2 +
                                                                                                           19120));
                        uVar4 = pSVar3->GetOutgoingEncryption();
                        local_68->MakeClientMessage(57, uVar4);
                        iVar6 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<
                            eastl::string>(param_1, false);
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_68 + 8), iVar6);
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                            eastl::basic_string<char, BucketAllocatorEASTL>>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_68 + 8), param_1, false);
                        lVar2 = Client::Instance();
                        pSVar3 =
                            (ServerConnection*)
                                std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar2 +
                                                                                                           19120));
                        pSVar3->SendClientMessage(local_68);
                        local_68->~ClientMessage();
                    }
                }
                pCVar1 = (Client*)Client::Instance();
                pCVar1->ResetPlayerIgnoreIndicators();
            }
            local_a8.~pair();
        }
    }

    // 0x1001865f0, 224 bytes, placed by class name and debug map
    // FriendSystem::SetFriendRank(eastl::string const&, int)
    void FriendSystem::SetFriendRank(basic_string* param_1, int param_2) {
        int iVar1;
        long lVar2;
        ServerConnection* pSVar3;
        undefined8 uVar4;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar5;
        undefined1 local_70[64];
        SuperShuffledPacketFactory local_30;

        lVar2 = Client::Instance();
        pSVar3 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar2 + 19120));
        uVar4 = pSVar3->GetOutgoingEncryption();
        local_70->MakeClientMessage(74, uVar4);
        iVar1 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
            param_1, false);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_70 + 8), iVar1 + 1);
        new (&local_30) SuperShuffledPacketFactory((SuperPacket*)(local_70 + 8));
        pPVar5 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_30.HeapBeginPtr();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar5, param_2);
        pPVar5 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_30.p2_alt2();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>(pPVar5, param_1, false);
        lVar2 = Client::Instance();
        pSVar3 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)(lVar2 + 19120));
        pSVar3->SendClientMessage(local_70);
        local_70->~ClientMessage();
    }

} // namespace jag::oldscape
