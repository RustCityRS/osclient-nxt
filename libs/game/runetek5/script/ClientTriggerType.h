// libs/game/runetek5/script/ClientTriggerType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ClientTriggerType {
    public:
        ClientTriggerType();
        ClientTriggerType(int, char const*, bool);
        void GetByID(unsigned int);
        static ClientTriggerType const* /* 8 bytes */
            OPWORLDMAPELEMENT1;         // = &enumArray[10] /* ClientTriggerType(10, "opworldmapelement1", false) */
        static ClientTriggerType const* /* 8 bytes */
            OPWORLDMAPELEMENT2;         // = &enumArray[11] /* ClientTriggerType(11, "opworldmapelement2", false) */
        static ClientTriggerType const* /* 8 bytes */
            OPWORLDMAPELEMENT3;         // = &enumArray[12] /* ClientTriggerType(12, "opworldmapelement3", false) */
        static ClientTriggerType const* /* 8 bytes */
            OPWORLDMAPELEMENT4;         // = &enumArray[13] /* ClientTriggerType(13, "opworldmapelement4", false) */
        static ClientTriggerType const* /* 8 bytes */
            OPWORLDMAPELEMENT5;         // = &enumArray[14] /* ClientTriggerType(14, "opworldmapelement5", false) */
        static ClientTriggerType const* /* 8 bytes */
            WORLDMAPELEMENTMOUSEOVER; // = &enumArray[15] /* ClientTriggerType(15, "worldmapelementmouseover", true) */
        static ClientTriggerType const* /* 8 bytes */
            WORLDMAPELEMENTMOUSELEAVE; // = &enumArray[16] /* ClientTriggerType(16, "worldmapelementmouseleave", true) */
        static ClientTriggerType const* /* 8 bytes */
            WORLDMAPELEMENTMOUSEREPEAT; // = &enumArray[17] /* ClientTriggerType(17, "worldmapelementmouserepeat", true) */
        static ClientTriggerType const* /* 8 bytes */
            VIDEO_END;                  // = &enumArray[18] /* ClientTriggerType(18, "video_end", false) */
        static ClientTriggerType const* /* 8 bytes */
            JCOINS_UPDATED;             // = &enumArray[19] /* ClientTriggerType(19, "jcoins_updated", false) */
        static ClientTriggerType const* /* 8 bytes */
            CUTSCENE_SUBTITLE;          // = &enumArray[20] /* ClientTriggerType(20, "cutscene_subtitle", false) */
        static ClientTriggerType const* /* 8 bytes */
            LOYALTY_UPDATED;            // = &enumArray[21] /* ClientTriggerType(21, "loyalty_updated", false) */
        static ClientTriggerType const* /* 8 bytes */
            PROCESS_NPC;                // = &enumArray[22] /* ClientTriggerType(22, "process_npc", false) */
        static ClientTriggerType const* /* 8 bytes */
            PROCESS_PLAYER;             // = &enumArray[23] /* ClientTriggerType(23, "process_player", false) */
        static ClientTriggerType const* /* 8 bytes */
            IF_PROCESS_ACTIVE_NPC;      // = &enumArray[24] /* ClientTriggerType(24, "if_process_active_npc", false) */
        static ClientTriggerType const* /* 8 bytes */
            IF_PROCESS_ACTIVE_PLAYER; // = &enumArray[25] /* ClientTriggerType(25, "if_process_active_player", false) */
        static ClientTriggerType const* /* 8 bytes */
            IF_PROCESS_ACTIVE_LOC;      // = &enumArray[26] /* ClientTriggerType(26, "if_process_active_loc", false) */
        static ClientTriggerType const* /* 8 bytes */
            IF_PROCESS_ACTIVE_OBJ;      // = &enumArray[27] /* ClientTriggerType(27, "if_process_active_obj", false) */
        static ClientTriggerType const* /* 8 bytes */
            MINIMENU_EVENT;             // = &enumArray[30] /* ClientTriggerType(30, "minimenu_event", false) */
        static ClientTriggerType const* /* 8 bytes */
            UPDATEOBJSTACK;             // = &enumArray[45] /* ClientTriggerType(45, "updateobjstack", false) */
        static ClientTriggerType const* /* 8 bytes */
            UPDATEOBJCOUNT;             // = &enumArray[46] /* ClientTriggerType(46, "updateobjcount", false) */
        static ClientTriggerType const* /* 8 bytes */
            PROC;                       // = &enumArray[73] /* ClientTriggerType(73, "proc", false) */
        static ClientTriggerType const* /* 8 bytes */
            CLIENTSCRIPT;               // = &enumArray[76] /* ClientTriggerType(76, "clientscript", false) */
        static ClientTriggerType /* 1232 bytes */ enumArray[77]; // initialised in its definition

        // data members, from how the methods use this: 16 bytes
        EntityHighlight** field_0; // offset 0
        int field_8;               // offset 8
        bool field_12;             // offset 12
        char _unknown_13[3];
    };

    // 0x1003b64e0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ClientTriggerType::ClientTriggerType(): jumps straight to the base-object constructor

    // 0x1003b64f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ClientTriggerType::ClientTriggerType(int, char const*, bool): jumps straight to the base-object constructor

    // 0x1003b7670, 48 bytes, base-object constructor, inline, placed by class name
    // ClientTriggerType::ClientTriggerType()
    void ClientTriggerType::ClientTriggerType() {
        BucketAllocatorEASTL* in_RDX;

        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(0, in_RDX);
        field_8 = -1;
        field_12 = false;
    }

    // 0x1003b76a0, 48 bytes, base-object constructor, inline, placed by class name
    // ClientTriggerType::ClientTriggerType(int, char const*, bool)
    void ClientTriggerType::ClientTriggerType(int param_1, char* param_2, bool param_3) {
        new (this)
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(param_2, param_2);
        field_8 = param_1;
        field_12 = param_3;
    }

} // namespace jag::game

namespace jag::oldscape::rs2lib {
    class ClientTriggerType {
    public:
        bool IsMelTypeSubjectTriggerType(ID);
    };

    // 0x100190a30, 16 bytes, inline, placed by class name
    // ClientTriggerType::IsMelTypeSubjectTriggerType(ClientTriggerType::ID)
    bool ClientTriggerType::IsMelTypeSubjectTriggerType(int param_1) {
        return param_1 - 10U < 8;
    }

} // namespace jag::oldscape::rs2lib
