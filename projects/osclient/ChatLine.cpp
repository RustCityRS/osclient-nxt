// projects/osclient/ChatLine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ChatLine.h"

namespace jag::oldscape {
    // 0x10017d8f0, 16 bytes, placed by class name and debug map
    // ChatLine::ResetFriendIndicator()
    void ChatLine::ResetFriendIndicator() {
        field_236 = 0;
    }

    // 0x10017d9b0, 16 bytes, placed by class name and debug map
    // ChatLine::ResetIgnoreIndicator()
    void ChatLine::ResetIgnoreIndicator() {
        field_240 = 0;
    }

    // 0x10017de30, 176 bytes, placed by class name
    // ChatLine::ReUse(int, eastl::string const&, eastl::string const&, eastl::string const&)
    void ChatLine::ReUse(int param_1, basic_string* param_2, basic_string* param_3, basic_string* param_4) {
        undefined8 in_RAX;
        long lVar1;
        undefined8 local_38;

        local_38 = in_RAX;
        local_38.GetNextUID();
        field_0 = local_38;
        lVar1 = Client::Instance();
        field_8 = *(undefined4*)(lVar1 + 8488);
        field_80 = param_1;
        eastl::string::operator=((eastl::string*)&field_88, param_2);
        UpdatePlayerDisplayName(this);
        eastl::string::operator=((eastl::string*)&field_136, param_3);
        eastl::string::operator=((eastl::string*)&field_200, param_4);
        ResetFriendIndicator(this);
        ResetIgnoreIndicator(this);
        GenerateTimeStamps(this);
        ApplyTimeStamp(this);
        RefreshClanChatRank(this);
    }

    // 0x10017e100, 176 bytes, placed by class name
    // ChatLine::ApplyTimeStamp()
    void ChatLine::ApplyTimeStamp() {
        basic_string* pbVar1;
        eastl local_58[32];
        eastl local_38[32];

        if (GetTimestampMode() == 0) {
            eastl::string::operator=((eastl::string*)&field_168, (basic_string*)&field_200);
        } else {
            pbVar1 = (basic_string*)GetTimeStamp(this);
            eastl::operator+(local_58, pbVar1, (value_type*)&DAT_100e35840);
            eastl::operator+(local_38, (basic_string*)local_58, (basic_string*)&field_200);
            eastl::string::operator=((eastl::string*)&field_168, (basic_string*)local_38);
            local_38->~basic_string();
            local_58->~basic_string();
        }
    }

    // 0x10017e1f0, 320 bytes, base-object constructor, placed by class name
    // ChatLine::ChatLine(int, eastl::string const&, eastl::string const&, eastl::string const&)
    void ChatLine::ChatLine(int param_1, basic_string* param_2, basic_string* param_3, basic_string* param_4) {
        new (this) eastl::compressed_pair<dash3d::EntityHighlight**, BucketAllocatorEASTL>(0, param_2);
        field_8 = 0;
        new (&field_16) eastl::string();
        new (&field_48) eastl::string();
        field_80 = 0;
        new (&field_88) eastl::string();
        new (field_120, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_136) eastl::string();
        new (&field_168) eastl::string();
        new (&field_200) eastl::string();
        field_236 = 0;
        field_240 = 0;
        ReUse(this, param_1, param_2, param_3, param_4);
    }

    // 0x10017e330, 16 bytes, complete-object constructor, placed by class name
    // ChatLine::ChatLine(int, eastl::string const&, eastl::string const&, eastl::string const&): jumps straight to the base-object constructor

    // 0x10017e3a0, 224 bytes, placed by class name
    // ChatLine::UpdatePlayerDisplayName()
    void ChatLine::UpdatePlayerDisplayName() {
        basic_string* pbVar1;
        long lVar2;
        shared_ptr local_50[2];
        shared_ptr local_30;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            pbVar1 = (basic_string*)Client::Instance();
            local_50->RemoveChatCrownTags(pbVar1);
            lVar2 = Client::Instance();
            make_shared<rs2lib::social::DisplayName, eastl::string, rs2lib::social::NameSpace&>(
                (jag*)&local_30, (basic_string*)local_50, (NameSpace*)(lVar2 + 54172));
            shared_ptr<rs2lib::social::DisplayName>::operator=((shared_ptr<rs2lib::social::DisplayName>*)field_120,
                                                               &local_30);
            local_30.~shared_ptr();
            local_50->~basic_string();
        } else {
            new (local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<rs2lib::social::DisplayName>::operator=((shared_ptr<rs2lib::social::DisplayName>*)field_120,
                                                               local_50);
            local_50->~shared_ptr();
        }
    }

    // 0x10017e480, 304 bytes, placed by class name
    // ChatLine::GenerateTimeStamps()
    void ChatLine::GenerateTimeStamps() {
        tm* ptVar1;
        undefined8 local_68[4];
        allocator local_48[8];
        time_t local_40;
        char local_38[8];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_68[0] = std::chrono::system_clock::now();
        local_40 = std::chrono::system_clock::to_time_t((time_point*)local_68);
        ptVar1 = _localtime(&local_40);
        _strftime(local_38, 8, "[%R]", ptVar1);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        new (local_68) eastl::string(local_38, local_48);
        eastl::string::operator=((eastl::string*)&field_16, (basic_string*)local_68);
        local_68->~basic_string();
        ptVar1 = _gmtime(&local_40);
        _strftime(local_38, 8, "[%R]", ptVar1);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        new (local_68) eastl::string(local_38, local_48);
        eastl::string::operator=((eastl::string*)&field_48, (basic_string*)local_68);
        local_68->~basic_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10017e5b0, 144 bytes, placed by class name
    // ChatLine::RefreshClanChatRank()
    void ChatLine::RefreshClanChatRank() {
        bool bVar1;
        long lVar2;
        PlayerRegistry<social::FriendData>* this_00;
        DisplayName* pDVar3;
        _func_decltype_nullptr* in_RSI;

        field_232 = 0;
        lVar2 = Client::Instance();
        bVar1 = std::operator!=((unique_ptr*)(lVar2 + 52544), in_RSI);
        if (bVar1) {
            bVar1 = operator!=((shared_ptr*)field_120, (_func_decltype_nullptr*)0);
            if (bVar1) {
                lVar2 = Client::Instance();
                this_00 =
                    (PlayerRegistry<social::FriendData>*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)(lVar2 + 52544));
                pDVar3 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator*(
                    (shared_ptr<rs2lib::social::DisplayName>*)field_120);
                lVar2 = this_00->GetPlayerByCurrentDisplayName(pDVar3);
                if (lVar2 != 0) {
                    field_232 = *(undefined4*)(lVar2 + 176);
                }
            }
        }
    }

    // 0x10017e640, 48 bytes, placed by class name
    // ChatLine::IsFriend()
    bool ChatLine::IsFriend() {
        if (field_236 == 0) {
            RecalcIsFriend(this);
        }
        return field_236 == 1;
    }

    // 0x10017e670, 112 bytes, placed by class name
    // ChatLine::RecalcIsFriend()
    void ChatLine::RecalcIsFriend() {
        bool bVar1;
        byte bVar2;
        long lVar3;
        DisplayName* pDVar4;
        int iVar5;

        bVar1 = operator!=((shared_ptr*)field_120, (_func_decltype_nullptr*)0);
        iVar5 = 2;
        if (bVar1) {
            lVar3 = Client::Instance();
            lVar3 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)(lVar3 + 52768));
            pDVar4 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator*(
                (shared_ptr<rs2lib::social::DisplayName>*)field_120);
            bVar2 = ((lVar3 + 8))->ContainsPlayerDisplayName(pDVar4);
            iVar5 = 2 - (uint)bVar2;
        }
        field_236 = iVar5;
    }

    // 0x10017e730, 48 bytes, placed by class name
    // ChatLine::IsIgnore()
    bool ChatLine::IsIgnore() {
        if (field_240 == 0) {
            RecalcIsIgnore(this);
        }
        return field_240 == 1;
    }

    // 0x10017e760, 112 bytes, placed by class name
    // ChatLine::RecalcIsIgnore()
    void ChatLine::RecalcIsIgnore() {
        bool bVar1;
        byte bVar2;
        long lVar3;
        DisplayName* pDVar4;
        int iVar5;

        bVar1 = operator!=((shared_ptr*)field_120, (_func_decltype_nullptr*)0);
        iVar5 = 2;
        if (bVar1) {
            lVar3 = Client::Instance();
            lVar3 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)(lVar3 + 52768));
            pDVar4 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator*(
                (shared_ptr<rs2lib::social::DisplayName>*)field_120);
            bVar2 = ((lVar3 + 208))->ContainsPlayerDisplayName(pDVar4);
            iVar5 = 2 - (uint)bVar2;
        }
        field_240 = iVar5;
    }

    // 0x10017e9e0, 64 bytes, placed by class name
    // ChatLine::GetTimeStamp() const
    undefined1* ChatLine::GetTimeStamp() {
        int iVar1;
        undefined1* puVar2;

        iVar1 = GetTimestampMode();
        if (iVar1 == 1) {
            puVar2 = &field_48;
        } else if (iVar1 == 2) {
            puVar2 = &field_16;
        } else {
            puVar2 = &eastl::EMPTY_STRING;
        }
        return puVar2;
    }

} // namespace jag::oldscape
