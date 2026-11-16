// libs/constants/ModeWhere.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class ModeWhere {
    public:
        ModeWhere(unsigned int arg1, const char* str);
        ModeWhere();
        void GetByID(unsigned int arg1);
        static ModeWhere const* LIVE;    // = &enumArray
        static ModeWhere const* WTWIP;   // = &enumArray[3] /* ModeWhere(3, "WTWIP") */
        static ModeWhere const* WTRC;    // = &enumArray[1] /* ModeWhere(1, "WTRC") */
        static ModeWhere const* WTQA;    // = &enumArray[2] /* ModeWhere(2, "WTQA") */
        static ModeWhere const* LOCAL;   // = &enumArray[4] /* ModeWhere(4, "LOCAL") */
        static ModeWhere const* WTI;     // = &enumArray[5] /* ModeWhere(5, "WTI") */
        static ModeWhere const* INTBETA; // = &enumArray[6] /* ModeWhere(6, "INTBETA") */
        static ModeWhere const* DEMO;    // = &enumArray[10] /* ModeWhere(10, "DEMO") */
        static ModeWhere enumArray[11];  // initialised in its definition

    private:
        PlayerDataComparator<oldscape::social::FriendChatUser>* field_0;
        uint32_t field_8;
        uint8_t _unknown_12[4];
    };

    // 0x100b89670
    ModeWhere::ModeWhere() {
        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(
            (PlayerDataComparator<oldscape::social::FriendChatUser>*)"");
        field_8 = 4294967295;
    }

} // namespace jag
