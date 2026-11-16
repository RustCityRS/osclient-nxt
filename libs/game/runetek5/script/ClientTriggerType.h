// libs/game/runetek5/script/ClientTriggerType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ClientTriggerType {
    public:
        ClientTriggerType();
        ClientTriggerType(int arg1, const char* str, bool arg3);
        void GetByID(unsigned int arg1);
        static ClientTriggerType const*
            OPWORLDMAPELEMENT1; // = &enumArray[10] /* ClientTriggerType(10, "opworldmapelement1", false) */
        static ClientTriggerType const*
            OPWORLDMAPELEMENT2; // = &enumArray[11] /* ClientTriggerType(11, "opworldmapelement2", false) */
        static ClientTriggerType const*
            OPWORLDMAPELEMENT3; // = &enumArray[12] /* ClientTriggerType(12, "opworldmapelement3", false) */
        static ClientTriggerType const*
            OPWORLDMAPELEMENT4; // = &enumArray[13] /* ClientTriggerType(13, "opworldmapelement4", false) */
        static ClientTriggerType const*
            OPWORLDMAPELEMENT5; // = &enumArray[14] /* ClientTriggerType(14, "opworldmapelement5", false) */
        static ClientTriggerType const*
            WORLDMAPELEMENTMOUSEOVER; // = &enumArray[15] /* ClientTriggerType(15, "worldmapelementmouseover", true) */
        static ClientTriggerType const*
            WORLDMAPELEMENTMOUSELEAVE; // = &enumArray[16] /* ClientTriggerType(16, "worldmapelementmouseleave", true) */
        static ClientTriggerType const*
            WORLDMAPELEMENTMOUSEREPEAT; // = &enumArray[17] /* ClientTriggerType(17, "worldmapelementmouserepeat", true) */
        static ClientTriggerType const* VIDEO_END; // = &enumArray[18] /* ClientTriggerType(18, "video_end", false) */
        static ClientTriggerType const*
            JCOINS_UPDATED; // = &enumArray[19] /* ClientTriggerType(19, "jcoins_updated", false) */
        static ClientTriggerType const*
            CUTSCENE_SUBTITLE; // = &enumArray[20] /* ClientTriggerType(20, "cutscene_subtitle", false) */
        static ClientTriggerType const*
            LOYALTY_UPDATED; // = &enumArray[21] /* ClientTriggerType(21, "loyalty_updated", false) */
        static ClientTriggerType const*
            PROCESS_NPC; // = &enumArray[22] /* ClientTriggerType(22, "process_npc", false) */
        static ClientTriggerType const*
            PROCESS_PLAYER; // = &enumArray[23] /* ClientTriggerType(23, "process_player", false) */
        static ClientTriggerType const*
            IF_PROCESS_ACTIVE_NPC; // = &enumArray[24] /* ClientTriggerType(24, "if_process_active_npc", false) */
        static ClientTriggerType const*
            IF_PROCESS_ACTIVE_PLAYER; // = &enumArray[25] /* ClientTriggerType(25, "if_process_active_player", false) */
        static ClientTriggerType const*
            IF_PROCESS_ACTIVE_LOC; // = &enumArray[26] /* ClientTriggerType(26, "if_process_active_loc", false) */
        static ClientTriggerType const*
            IF_PROCESS_ACTIVE_OBJ; // = &enumArray[27] /* ClientTriggerType(27, "if_process_active_obj", false) */
        static ClientTriggerType const*
            MINIMENU_EVENT; // = &enumArray[30] /* ClientTriggerType(30, "minimenu_event", false) */
        static ClientTriggerType const*
            UPDATEOBJSTACK; // = &enumArray[45] /* ClientTriggerType(45, "updateobjstack", false) */
        static ClientTriggerType const*
            UPDATEOBJCOUNT;                   // = &enumArray[46] /* ClientTriggerType(46, "updateobjcount", false) */
        static ClientTriggerType const* PROC; // = &enumArray[73] /* ClientTriggerType(73, "proc", false) */
        static ClientTriggerType const*
            CLIENTSCRIPT;                       // = &enumArray[76] /* ClientTriggerType(76, "clientscript", false) */
        static ClientTriggerType enumArray[77]; // initialised in its definition

    private:
        PlayerDataComparator<oldscape::social::FriendChatUser>* field_0;
        int field_8;
        bool field_12;
        uint8_t _unknown_13[3];
    };

    // 0x1003b7670
    ClientTriggerType::ClientTriggerType() {
        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(nullptr);
        field_8 = -1;
        field_12 = false;
    }

    // 0x1003b76a0
    ClientTriggerType::ClientTriggerType(int arg1, const char* str, bool arg3) {
        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(str);
        field_8 = arg1;
        field_12 = arg3;
    }

} // namespace jag::game

namespace jag::oldscape::rs2lib {
    class ClientTriggerType {
    public:
        bool IsMelTypeSubjectTriggerType(ID id);
    };

    // 0x100190a30
    bool ClientTriggerType::IsMelTypeSubjectTriggerType(ClientTriggerType::ID id) {
        return id - 10 < 8;
    }

} // namespace jag::oldscape::rs2lib
