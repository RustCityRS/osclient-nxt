// projects/osclient/ChatLine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ChatLine {
    public:
        void ResetFriendIndicator();
        void ResetIgnoreIndicator();
        void ReUse(int arg1, const eastl::string& str1, const eastl::string& str2, const eastl::string& str3);
        void ApplyTimeStamp();
        ChatLine(int arg1, const eastl::string& str1, const eastl::string& str2, const eastl::string& str3);
        void UpdatePlayerDisplayName();
        void GenerateTimeStamps();
        void RefreshClanChatRank();
        bool IsFriend();
        void RecalcIsFriend();
        bool IsIgnore();
        void RecalcIsIgnore();
        eastl::string* GetTimeStamp() const;
        ~ChatLine();

    private:
        uint8_t** field_0;
        uint32_t field_8;
        uint8_t _unknown_12[68];
        int field_80;
        uint8_t _unknown_84[148];
        uint32_t field_232;
        int field_236;
        int field_240;
        uint8_t _unknown_244[4];
    };

    // 0x1001a8950
    ChatLine::~ChatLine() {
        field_200.~basic_string();
        field_168.~basic_string();
        field_136.~basic_string();
        field_120.~shared_ptr();
        field_88.~basic_string();
        field_48.~basic_string();
        field_16.~basic_string();
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10017e7d0
    shared_ptr_if_not_array<oldscape::rs2lib::social::DisplayName>::type
    make_shared<oldscape::rs2lib::social::DisplayName, eastl::string, oldscape::rs2lib::social::NameSpace&>(
        eastl::string&& str, oldscape::rs2lib::social::NameSpace& nameSpace) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DisplayName* local_38[2];

        auto arg1 = aligned_alloc(96, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::DisplayName>::type result;
        } else {
            local_38[0] = placement_new<oldscape::rs2lib::social::DisplayName, eastl::string,
                                        oldscape::rs2lib::social::NameSpace&>((void*)((long)arg1 + 32), str, nameSpace);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::DisplayName>, int,
                              oldscape::rs2lib::social::DisplayName*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag
