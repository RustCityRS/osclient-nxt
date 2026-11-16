// projects/osclient/ChatLine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ChatLine.h"

namespace jag::oldscape {
    // 0x10017d8f0
    void ChatLine::ResetFriendIndicator() {
        field_236 = 0;
    }

    // 0x10017d9b0
    void ChatLine::ResetIgnoreIndicator() {
        field_240 = 0;
    }

    // 0x10017de30
    void ChatLine::ReUse(int arg1, const eastl::string& str1, const eastl::string& str2, const eastl::string& str3) {
        ReturnValue in_RAX;

        ReturnValue local_38 = in_RAX;
        local_38 = ChatHistory::GetNextUID();
        field_0 = (uint8_t**)local_38;
        field_8 = Client::Instance()->field_8488;
        field_80 = arg1;
        field_88 = str1;
        UpdatePlayerDisplayName();
        field_136 = str2;
        field_200 = str3;
        ResetFriendIndicator();
        ResetIgnoreIndicator();
        GenerateTimeStamps();
        ApplyTimeStamp();
        RefreshClanChatRank();
    }

    // 0x10017e100
    void ChatLine::ApplyTimeStamp() {
        eastl::string* value_type;
        eastl::string local_58;
        eastl::string local_38;

        if (ChatHistory::GetTimestampMode() == 0) {
            field_168 = &field_200;
        } else {
            value_type = GetTimeStamp();
            local_58 + *value_type;
            local_38 + local_58;
            field_168 = &local_38;
        }
    }

    // 0x10017e1f0
    ChatLine::ChatLine(int arg1, const eastl::string& str1, const eastl::string& str2, const eastl::string& str3) {
        new (this) eastl::compressed_pair<dash3d::EntityHighlight**, BucketAllocatorEASTL>(nullptr);
        field_8 = 0;
        new (&field_16) eastl::string();
        new (&field_48) eastl::string();
        field_80 = 0;
        new (&field_88) eastl::string();
        new (&field_120) shared_ptr();
        new (&field_136) eastl::string();
        new (&field_168) eastl::string();
        new (&field_200) eastl::string();
        field_236 = 0;
        field_240 = 0;
        ReUse(arg1, str1, str2, str3);
    }

    // 0x10017e3a0
    void ChatLine::UpdatePlayerDisplayName() {
        Client* pCVar2;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_50;
        ReturnValue local_30;

        if (field_88.empty() == '\0') {
            pCVar2 = Client::Instance();
            local_50.RemoveChatCrownTags(*pCVar2);
            pCVar2 = Client::Instance();
            make_shared<rs2lib::social::DisplayName, eastl::string, rs2lib::social::NameSpace&>(&local_30, &local_50,
                                                                                                &pCVar2->field_54172);
            field_120 = local_30;
        } else {
            local_50 = shared_ptr();
            field_120 = local_50;
        }
    }

    // 0x10017e480
    void ChatLine::GenerateTimeStamps() {
        uint64_t local_68[4];
        char local_38[8];

        local_68[0] = std::chrono::system_clock::now();
        time_t local_40 = std::chrono::system_clock::to_time_t((time_point*)local_68);
        auto ptVar1 = _localtime(&local_40);
        _strftime(local_38, 8, "[%R]", ptVar1);
        new (local_68) eastl::string(local_38);
        field_16 = local_68;
        ptVar1 = _gmtime(&local_40);
        _strftime(local_38, 8, "[%R]", ptVar1);
        new (local_68) eastl::string(local_38);
        field_48 = local_68;
    }

    // 0x10017e5b0
    void ChatLine::RefreshClanChatRank() {
        PlayerRegistry<social::FriendData>* this_00;
        DisplayName* displayName;
        long lVar3;
        void* in_RSI;

        field_232 = 0;
        auto pCVar2 = Client::Instance();
        if (&pCVar2->field_52544 != in_RSI) {
            if (field_120 != nullptr) {
                pCVar2 = Client::Instance();
                this_00 = (PlayerRegistry<social::FriendData>*)pCVar2->field_52544.operator->();
                displayName = (DisplayName*)*field_120;
                lVar3 = this_00->GetPlayerByCurrentDisplayName(*displayName);
                if (lVar3 != 0) {
                    field_232 = *(uint32_t*)(lVar3 + 176);
                }
            }
        }
    }

    // 0x10017e640
    bool ChatLine::IsFriend() {
        if (field_236 == 0) {
            RecalcIsFriend();
        }
        return field_236 == 1;
    }

    // 0x10017e670
    void ChatLine::RecalcIsFriend() {
        uint8_t bVar2;
        long lVar4;
        DisplayName* displayName;

        bool bVar1 = field_120 != nullptr;
        int iVar5 = 2;
        if (bVar1) {
            lVar4 = Client::Instance()->field_52768.operator->();
            displayName = (DisplayName*)*field_120;
            bVar2 = ((lVar4 + 8))->ContainsPlayerDisplayName(*displayName);
            iVar5 = 2 - (unsigned int)bVar2;
        }
        field_236 = iVar5;
    }

    // 0x10017e730
    bool ChatLine::IsIgnore() {
        if (field_240 == 0) {
            RecalcIsIgnore();
        }
        return field_240 == 1;
    }

    // 0x10017e760
    void ChatLine::RecalcIsIgnore() {
        uint8_t bVar2;
        long lVar4;
        DisplayName* displayName;

        bool bVar1 = field_120 != nullptr;
        int iVar5 = 2;
        if (bVar1) {
            lVar4 = Client::Instance()->field_52768.operator->();
            displayName = (DisplayName*)*field_120;
            bVar2 = ((lVar4 + 208))->ContainsPlayerDisplayName(*displayName);
            iVar5 = 2 - (unsigned int)bVar2;
        }
        field_240 = iVar5;
    }

    // 0x10017e9e0
    eastl::string* ChatLine::GetTimeStamp() const {
        eastl::string* pbVar2;

        int iVar1 = ChatHistory::GetTimestampMode();
        if (iVar1 == 1) {
            pbVar2 = (eastl::string*)&field_48;
        } else if (iVar1 == 2) {
            pbVar2 = (eastl::string*)&field_16;
        } else {
            pbVar2 = (eastl::string*)&eastl::EMPTY_STRING;
        }
        return pbVar2;
    }

} // namespace jag::oldscape
