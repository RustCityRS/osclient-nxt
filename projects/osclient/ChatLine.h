// projects/osclient/ChatLine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class ChatLine {
    public:
        void ResetFriendIndicator();
        void ResetIgnoreIndicator();
        void ReUse(int, eastl::string const&, eastl::string const&, eastl::string const&);
        void ApplyTimeStamp();
        ChatLine(int, eastl::string const&, eastl::string const&, eastl::string const&);
        void UpdatePlayerDisplayName();
        void GenerateTimeStamps();
        void RefreshClanChatRank();
        bool IsFriend();
        void RecalcIsFriend();
        bool IsIgnore();
        void RecalcIsIgnore();
        GetTimeStamp() const;
        ~ChatLine();

        // data members, from how the methods use this: 248 bytes
        undefined8 field_0; // offset 0
        undefined4 field_8; // offset 8
        char _unknown_12[68];
        int field_80; // offset 80
        char _unknown_84[36];
        shared_ptr field_120; // offset 120
        char _unknown_136[96];
        undefined4 field_232; // offset 232
        int field_236;        // offset 236
        int field_240;        // offset 240
        char _unknown_244[4];
    };

    // 0x1001a8940, 16 bytes, complete-object destructor, inline, placed by class name
    // ChatLine::~ChatLine(): jumps straight to the base-object destructor

    // 0x1001a8950, 96 bytes, base-object destructor, inline, placed by class name
    // ChatLine::~ChatLine()
    void ChatLine::~ChatLine() {
        (&field_200)->~basic_string();
        (&field_168)->~basic_string();
        (&field_136)->~basic_string();
        field_120->~shared_ptr();
        (&field_88)->~basic_string();
        (&field_48)->~basic_string();
        (&field_16)->~basic_string();
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10017e7d0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::DisplayName>::type make_shared<oldscape::rs2lib::social::DisplayName, eastl::string, oldscape::rs2lib::social::NameSpace&>(eastl::string&&, oldscape::rs2lib::social::NameSpace&)
    jag* jag::make_shared<oldscape::rs2lib::social::DisplayName, eastl::string, oldscape::rs2lib::social::NameSpace&>(
        basic_string* param_1, NameSpace* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DisplayName* local_38[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::rs2lib::social::DisplayName, eastl::string,
                              oldscape::rs2lib::social::NameSpace&>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::DisplayName>, int,
                                   oldscape::rs2lib::social::DisplayName*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag
