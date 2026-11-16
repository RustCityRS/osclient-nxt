// libs/game/runetek5/network/protocol/ServerProt.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class ServerProt {
    public:
        ~ServerProt();
        ServerProt(int, int, char const*);
        static eastl::fixed_vector<ServerProt_const*, 200ul, true, eastl::allocator> /* 1648 bytes */
            m_typeLookup; // = fixed_vector<ServerProt_const*,200ul,true,eastl::allocator>()
        static ServerProt /* 96 bytes */ UPDATE_RUNWEIGHT;      // = ServerProt(0, 2, "UPDATE_RUNWEIGHT")
        static ServerProt                                       /* 96 bytes */
            MESSAGE_QUICKCHAT_FRIENDCHAT;                       // = ServerProt(1, -1, "MESSAGE_QUICKCHAT_FRIENDCHAT")
        static ServerProt /* 96 bytes */ CLANCHANNEL_DELTA;     // = ServerProt(2, -2, "CLANCHANNEL_DELTA")
        static ServerProt /* 96 bytes */ OBJ_ADD;               // = ServerProt(3, 5, "OBJ_ADD")
        static ServerProt /* 96 bytes */ UPDATE_STAT;           // = ServerProt(4, 6, "UPDATE_STAT")
        static ServerProt /* 96 bytes */ IF_OPENSUB_ACTIVE_LOC; // = ServerProt(5, 32, "IF_OPENSUB_ACTIVE_LOC")
        static ServerProt /* 96 bytes */ DEBUG_SERVER_TRIGGERS; // = ServerProt(6, -1, "DEBUG_SERVER_TRIGGERS")
        static ServerProt /* 96 bytes */ HINT_ARROW;            // = ServerProt(7, 14, "HINT_ARROW")
        static ServerProt /* 96 bytes */ NPC_ANIM_SPECIFIC;     // = ServerProt(8, 19, "NPC_ANIM_SPECIFIC")
        static ServerProt /* 96 bytes */ PLAYER_INFO;           // = ServerProt(9, -2, "PLAYER_INFO")
        static ServerProt /* 96 bytes */ CHAT_FILTER_SETTINGS;  // = ServerProt(10, 2, "CHAT_FILTER_SETTINGS")
        static ServerProt /* 96 bytes */ REFLECTION_CHECKER;    // = ServerProt(11, -2, "REFLECTION_CHECKER")
        static ServerProt                                       /* 96 bytes */
            MESSAGE_CLANCHANNEL_SYSTEM;                         // = ServerProt(12, -1, "MESSAGE_CLANCHANNEL_SYSTEM")
        static ServerProt /* 96 bytes */ UPDATE_RUNENERGY;      // = ServerProt(13, 1, "UPDATE_RUNENERGY")
        static ServerProt /* 96 bytes */ CLANCHANNEL_FULL;      // = ServerProt(14, -2, "CLANCHANNEL_FULL")
        static ServerProt /* 96 bytes */ FRIENDLIST_LOADED;     // = ServerProt(15, 0, "FRIENDLIST_LOADED")
        static ServerProt /* 96 bytes */ RESET_ANIMS;           // = ServerProt(16, 0, "RESET_ANIMS")
        static ServerProt /* 96 bytes */ IF_SETSCROLLPOS;       // = ServerProt(17, 6, "IF_SETSCROLLPOS")
        static ServerProt /* 96 bytes */ IF_SETEVENTS;          // = ServerProt(18, 12, "IF_SETEVENTS")
        static ServerProt /* 96 bytes */ MIDI_SONG_LOCATION;    // = ServerProt(19, 11, "MIDI_SONG_LOCATION")
        static ServerProt /* 96 bytes */ IF_SETOBJECT;          // = ServerProt(20, 10, "IF_SETOBJECT")
        static ServerProt /* 96 bytes */ UPDATE_ZONE_FULL_FOLLOWS; // = ServerProt(21, 3, "UPDATE_ZONE_FULL_FOLLOWS")
        static ServerProt                                          /* 96 bytes */
            UPDATE_ZONE_PARTIAL_ENCLOSED;                       // = ServerProt(22, -2, "UPDATE_ZONE_PARTIAL_ENCLOSED")
        static ServerProt /* 96 bytes */ CLIENT_SETVARC_LARGE;  // = ServerProt(23, 6, "CLIENT_SETVARC_LARGE")
        static ServerProt /* 96 bytes */ MESSAGE_FRIENDCHANNEL; // = ServerProt(24, -1, "MESSAGE_FRIENDCHANNEL")
        static ServerProt /* 96 bytes */ CAM_MOVETO;            // = ServerProt(25, 6, "CAM_MOVETO")
        static ServerProt /* 96 bytes */ VARBIT_SMALL;          // = ServerProt(26, 3, "VARBIT_SMALL")
        static ServerProt /* 96 bytes */ IF_SETANIM;            // = ServerProt(27, 8, "IF_SETANIM")
        static ServerProt /* 96 bytes */ CLIENT_SETVARCBIT_LARGE;  // = ServerProt(28, 6, "CLIENT_SETVARCBIT_LARGE")
        static ServerProt /* 96 bytes */ CAM_FORCEANGLE;           // = ServerProt(29, 4, "CAM_FORCEANGLE")
        static ServerProt /* 96 bytes */ CLIENT_SETVARCBIT_SMALL;  // = ServerProt(30, 3, "CLIENT_SETVARCBIT_SMALL")
        static ServerProt /* 96 bytes */ CLANSETTINGS_FULL;        // = ServerProt(31, -2, "CLANSETTINGS_FULL")
        static ServerProt /* 96 bytes */ CLIENT_SETVARCSTR_SMALL;  // = ServerProt(32, -1, "CLIENT_SETVARCSTR_SMALL")
        static ServerProt /* 96 bytes */ MIDI_SONG;                // = ServerProt(33, 5, "MIDI_SONG")
        static ServerProt /* 96 bytes */ SOUND_AREA;               // = ServerProt(34, 10, "SOUND_AREA")
        static ServerProt /* 96 bytes */ VARP_SMALL;               // = ServerProt(35, 3, "VARP_SMALL")
        static ServerProt /* 96 bytes */ MESSAGE_PRIVATE_ECHO;     // = ServerProt(36, -2, "MESSAGE_PRIVATE_ECHO")
        static ServerProt /* 96 bytes */ IF_OPENTOP;               // = ServerProt(37, 19, "IF_OPENTOP")
        static ServerProt /* 96 bytes */ CLANSETTINGS_DELTA;       // = ServerProt(38, -2, "CLANSETTINGS_DELTA")
        static ServerProt /* 96 bytes */ IF_OPENSUB_ACTIVE_OBJ;    // = ServerProt(39, 29, "IF_OPENSUB_ACTIVE_OBJ")
        static ServerProt /* 96 bytes */ VARCLAN;                  // = ServerProt(40, -1, "VARCLAN")
        static ServerProt                                          /* 96 bytes */
            UPDATE_ZONE_PARTIAL_FOLLOWS;                           // = ServerProt(41, 3, "UPDATE_ZONE_PARTIAL_FOLLOWS")
        static ServerProt /* 96 bytes */ TRIGGER_ONDIALOGABORT;    // = ServerProt(42, 0, "TRIGGER_ONDIALOGABORT")
        static ServerProt /* 96 bytes */ MESSAGE_CLANCHANNEL;      // = ServerProt(43, -1, "MESSAGE_CLANCHANNEL")
        static ServerProt /* 96 bytes */ UPDATE_IGNORELIST;        // = ServerProt(44, -2, "UPDATE_IGNORELIST")
        static ServerProt /* 96 bytes */ LOC_DEL;                  // = ServerProt(45, 2, "LOC_DEL")
        static ServerProt /* 96 bytes */ CAM_RESET;                // = ServerProt(46, 0, "CAM_RESET")
        static ServerProt /* 96 bytes */ IF_SETTEXT;               // = ServerProt(47, -2, "IF_SETTEXT")
        static ServerProt /* 96 bytes */ OBJ_REVEAL;               // = ServerProt(48, 7, "OBJ_REVEAL")
        static ServerProt /* 96 bytes */ SET_MAP_FLAG;             // = ServerProt(49, 10, "SET_MAP_FLAG")
        static ServerProt /* 96 bytes */ IF_SET_HTTP_IMAGE;        // = ServerProt(50, 8, "IF_SET_HTTP_IMAGE")
        static ServerProt /* 96 bytes */ VARBIT_LARGE;             // = ServerProt(51, 6, "VARBIT_LARGE")
        static ServerProt /* 96 bytes */ MAP_PROJANIM;             // = ServerProt(52, 20, "MAP_PROJANIM")
        static ServerProt /* 96 bytes */ LOC_ANIM;                 // = ServerProt(53, 7, "LOC_ANIM")
        static ServerProt /* 96 bytes */ MAP_ANIM;                 // = ServerProt(54, 11, "MAP_ANIM")
        static ServerProt /* 96 bytes */ UPDATE_INV_STOP_TRANSMIT; // = ServerProt(55, 3, "UPDATE_INV_STOP_TRANSMIT")
        static ServerProt /* 96 bytes */ VORBIS_SOUND;             // = ServerProt(56, 10, "VORBIS_SOUND")
        static ServerProt /* 96 bytes */ SET_PLAYER_OP;            // = ServerProt(57, -1, "SET_PLAYER_OP")
        static ServerProt /* 96 bytes */ MESSAGE_GAME;             // = ServerProt(58, -1, "MESSAGE_GAME")
        static ServerProt /* 96 bytes */ LOGOUT;                   // = ServerProt(59, 1, "LOGOUT")
        static ServerProt /* 96 bytes */ LOC_CUSTOMISE;            // = ServerProt(60, -1, "LOC_CUSTOMISE")
        static ServerProt /* 96 bytes */ CAM_REMOVEROOF;           // = ServerProt(61, 4, "CAM_REMOVEROOF")
        static ServerProt /* 96 bytes */ IF_SETCOLOUR;             // = ServerProt(62, 6, "IF_SETCOLOUR")
        static ServerProt /* 96 bytes */ IF_SETPOSITION;           // = ServerProt(63, 8, "IF_SETPOSITION")
        static ServerProt /* 96 bytes */ IF_SETPLAYERHEAD;         // = ServerProt(64, 4, "IF_SETPLAYERHEAD")
        static ServerProt /* 96 bytes */ VARCLAN_ENABLE;           // = ServerProt(65, 0, "VARCLAN_ENABLE")
        static ServerProt /* 96 bytes */ LAST_LOGIN_INFO;          // = ServerProt(66, 4, "LAST_LOGIN_INFO")
        static ServerProt /* 96 bytes */ CAM2_ENABLE;              // = ServerProt(67, 1, "CAM2_ENABLE")
        static ServerProt                                          /* 96 bytes */
            IF_SETPLAYERHEAD_IGNOREWORN;                         // = ServerProt(68, 10, "IF_SETPLAYERHEAD_IGNOREWORN")
        static ServerProt /* 96 bytes */ IF_SETHIDE;             // = ServerProt(69, 5, "IF_SETHIDE")
        static ServerProt /* 96 bytes */ MESSAGE_PUBLIC;         // = ServerProt(70, -1, "MESSAGE_PUBLIC")
        static ServerProt /* 96 bytes */ IF_SETPLAYERMODEL_SELF; // = ServerProt(71, 4, "IF_SETPLAYERMODEL_SELF")
        static ServerProt /* 96 bytes */ SYNTH_SOUND;            // = ServerProt(72, 10, "SYNTH_SOUND")
        static ServerProt /* 96 bytes */ IF_SETNPCHEAD;          // = ServerProt(73, 8, "IF_SETNPCHEAD")
        static ServerProt /* 96 bytes */ MESSAGE_QUICKCHAT_PRIVATE; // = ServerProt(74, -1, "MESSAGE_QUICKCHAT_PRIVATE")
        static ServerProt /* 96 bytes */ CAM_SHAKE;                 // = ServerProt(75, 6, "CAM_SHAKE")
        static ServerProt /* 96 bytes */ LOC_ANIM_SPECIFIC;         // = ServerProt(76, 10, "LOC_ANIM_SPECIFIC")
        static ServerProt /* 96 bytes */ IF_SETTEXTFONT;            // = ServerProt(77, 8, "IF_SETTEXTFONT")
        static ServerProt /* 96 bytes */ HINT_TRAIL;                // = ServerProt(78, -2, "HINT_TRAIL")
        static ServerProt /* 96 bytes */ MINIMAP_TOGGLE;            // = ServerProt(79, 1, "MINIMAP_TOGGLE")
        static ServerProt /* 96 bytes */ UPDATE_INV_PARTIAL;        // = ServerProt(80, -2, "UPDATE_INV_PARTIAL")
        static ServerProt /* 96 bytes */ RESET_CLIENT_VARCACHE;     // = ServerProt(81, 0, "RESET_CLIENT_VARCACHE")
        static ServerProt                                           /* 96 bytes */
            UPDATE_FRIENDCHAT_CHANNEL_SINGLEUSER;    // = ServerProt(82, -1, "UPDATE_FRIENDCHAT_CHANNEL_SINGLEUSER")
        static ServerProt /* 96 bytes */ IF_MOVESUB; // = ServerProt(83, 8, "IF_MOVESUB")
        static ServerProt /* 96 bytes */ IF_OPENSUB; // = ServerProt(84, 23, "IF_OPENSUB")
        static ServerProt /* 96 bytes */ CLIENT_SETVARCSTR_LARGE; // = ServerProt(85, -2, "CLIENT_SETVARCSTR_LARGE")
        static ServerProt                                         /* 96 bytes */
            CHAT_FILTER_SETTINGS_PRIVATECHAT;             // = ServerProt(86, 1, "CHAT_FILTER_SETTINGS_PRIVATECHAT")
        static ServerProt /* 96 bytes */ UPDATE_INV_FULL; // = ServerProt(87, -2, "UPDATE_INV_FULL")
        static ServerProt /* 96 bytes */ OBJ_DEL;         // = ServerProt(88, 3, "OBJ_DEL")
        static ServerProt /* 96 bytes */ UPDATE_STOCKMARKET_SLOT; // = ServerProt(89, 35, "UPDATE_STOCKMARKET_SLOT")
        static ServerProt /* 96 bytes */ UPDATE_UID192;           // = ServerProt(90, 28, "UPDATE_UID192")
        static ServerProt /* 96 bytes */ CAM_SMOOTHRESET;         // = ServerProt(91, 0, "CAM_SMOOTHRESET")
        static ServerProt /* 96 bytes */ VARP_LARGE;              // = ServerProt(92, 6, "VARP_LARGE")
        static ServerProt /* 96 bytes */ IF_CLOSESUB;             // = ServerProt(93, 4, "IF_CLOSESUB")
        static ServerProt /* 96 bytes */ IF_SETANGLE;             // = ServerProt(94, 10, "IF_SETANGLE")
        static ServerProt /* 96 bytes */ UPDATE_FRIENDLIST;       // = ServerProt(95, -2, "UPDATE_FRIENDLIST")
        static ServerProt /* 96 bytes */ CAM_LOOKAT;              // = ServerProt(96, 6, "CAM_LOOKAT")
        static ServerProt /* 96 bytes */ PROJANIM_SPECIFIC;       // = ServerProt(97, 25, "PROJANIM_SPECIFIC")
        static ServerProt /* 96 bytes */ REBUILD_REGION;          // = ServerProt(98, -2, "REBUILD_REGION")
        static ServerProt /* 96 bytes */ MIDI_JINGLE;             // = ServerProt(99, 5, "MIDI_JINGLE")
        static ServerProt                                         /* 96 bytes */
            UPDATE_FRIENDCHAT_CHANNEL_FULL;                 // = ServerProt(100, -2, "UPDATE_FRIENDCHAT_CHANNEL_FULL")
        static ServerProt /* 96 bytes */ IF_SETTARGETPARAM; // = ServerProt(101, 10, "IF_SETTARGETPARAM")
        static ServerProt /* 96 bytes */ IF_SETMODEL;       // = ServerProt(102, 8, "IF_SETMODEL")
        static ServerProt /* 96 bytes */ LOGOUT_FULL;       // = ServerProt(103, 1, "LOGOUT_FULL")
        static ServerProt /* 96 bytes */ LOC_ADD_CHANGE;    // = ServerProt(104, -1, "LOC_ADD_CHANGE")
        static ServerProt /* 96 bytes */ IF_SETGRAPHIC;     // = ServerProt(105, 8, "IF_SETGRAPHIC")
        static ServerProt /* 96 bytes */ IF_SETPLAYERHEAD_OTHER; // = ServerProt(106, 10, "IF_SETPLAYERHEAD_OTHER")
        static ServerProt /* 96 bytes */ NPC_INFO;               // = ServerProt(107, -2, "NPC_INFO")
        static ServerProt /* 96 bytes */ SET_MOVEACTION;         // = ServerProt(108, -1, "SET_MOVEACTION")
        static ServerProt                                        /* 96 bytes */
            MESSAGE_QUICKCHAT_PRIVATE_ECHO; // = ServerProt(109, -1, "MESSAGE_QUICKCHAT_PRIVATE_ECHO")
        static ServerProt /* 96 bytes */ IF_SETPLAYERMODEL_OTHER; // = ServerProt(110, 10, "IF_SETPLAYERMODEL_OTHER")
        static ServerProt /* 96 bytes */ OBJ_COUNT;               // = ServerProt(111, 7, "OBJ_COUNT")
        static ServerProt /* 96 bytes */ SPOTANIM_SPECIFIC;       // = ServerProt(112, 12, "SPOTANIM_SPECIFIC")
        static ServerProt /* 96 bytes */ UPDATE_REBOOT_TIMER;     // = ServerProt(113, 2, "UPDATE_REBOOT_TIMER")
        static ServerProt                                         /* 96 bytes */
            MESSAGE_QUICKCHAT_CLANCHANNEL; // = ServerProt(114, -1, "MESSAGE_QUICKCHAT_CLANCHANNEL")
        static ServerProt /* 96 bytes */ IF_OPENSUB_ACTIVE_PLAYER;  // = ServerProt(115, 25, "IF_OPENSUB_ACTIVE_PLAYER")
        static ServerProt /* 96 bytes */ IF_OPENSUB_ACTIVE_NPC;     // = ServerProt(116, 25, "IF_OPENSUB_ACTIVE_NPC")
        static ServerProt /* 96 bytes */ MESSAGE_PRIVATE;           // = ServerProt(117, -2, "MESSAGE_PRIVATE")
        static ServerProt /* 96 bytes */ CAMERA_UPDATE;             // = ServerProt(118, -2, "CAMERA_UPDATE")
        static ServerProt /* 96 bytes */ VORBIS_SPEECH_STOP;        // = ServerProt(119, 0, "VORBIS_SPEECH_STOP")
        static ServerProt /* 96 bytes */ VARCLAN_DISABLE;           // = ServerProt(120, 0, "VARCLAN_DISABLE")
        static ServerProt /* 96 bytes */ IF_SETTEXTANTIMACRO;       // = ServerProt(121, 5, "IF_SETTEXTANTIMACRO")
        static ServerProt /* 96 bytes */ REBUILD_NORMAL;            // = ServerProt(122, -2, "REBUILD_NORMAL")
        static ServerProt /* 96 bytes */ CLIENT_SETVARC_SMALL;      // = ServerProt(123, 3, "CLIENT_SETVARC_SMALL")
        static ServerProt /* 96 bytes */ URL_OPEN;                  // = ServerProt(124, -2, "URL_OPEN")
        static ServerProt /* 96 bytes */ UPDATE_SITESETTINGS;       // = ServerProt(125, -1, "UPDATE_SITESETTINGS")
        static ServerProt /* 96 bytes */ VORBIS_SPEECH_SOUND;       // = ServerProt(126, 8, "VORBIS_SPEECH_SOUND")
        static ServerProt /* 96 bytes */ RUNCLIENTSCRIPT;           // = ServerProt(127, -2, "RUNCLIENTSCRIPT")
        static ServerProt /* 96 bytes */ TELEMETRY_GRID_REMOVE_ROW; // = ServerProt(128, 2, "TELEMETRY_GRID_REMOVE_ROW")
        static ServerProt /* 96 bytes */ LOC_PREFETCH;              // = ServerProt(129, 5, "LOC_PREFETCH")
        static ServerProt /* 96 bytes */ CUTSCENE;                  // = ServerProt(130, -2, "CUTSCENE")
        static ServerProt /* 96 bytes */ IF_SETCLICKMASK;           // = ServerProt(131, 5, "IF_SETCLICKMASK")
        static ServerProt /* 96 bytes */ SOUND_MIXBUSS_ADD;         // = ServerProt(132, 6, "SOUND_MIXBUSS_ADD")
        static ServerProt                                           /* 96 bytes */
            TELEMETRY_GRID_REMOVE_COLUMN;                      // = ServerProt(133, 2, "TELEMETRY_GRID_REMOVE_COLUMN")
        static ServerProt /* 96 bytes */ NO_TIMEOUT;           // = ServerProt(134, 0, "NO_TIMEOUT")
        static ServerProt                                      /* 96 bytes */
            TELEMETRY_GRID_MOVE_COLUMN;                        // = ServerProt(135, 3, "TELEMETRY_GRID_MOVE_COLUMN")
        static ServerProt /* 96 bytes */ MESSAGE_PLAYER_GROUP; // = ServerProt(136, -1, "MESSAGE_PLAYER_GROUP")
        static ServerProt /* 96 bytes */ SET_NPC_ATTACK_PRIORITY;  // = ServerProt(137, 1, "SET_NPC_ATTACK_PRIORITY")
        static ServerProt /* 96 bytes */ TELEMETRY_GRID_FULL;      // = ServerProt(138, -2, "TELEMETRY_GRID_FULL")
        static ServerProt                                          /* 96 bytes */
            SET_PLAYER_ATTACK_PRIORITY;                            // = ServerProt(139, 1, "SET_PLAYER_ATTACK_PRIORITY")
        static ServerProt /* 96 bytes */ IF_SETRECOL;              // = ServerProt(140, 9, "IF_SETRECOL")
        static ServerProt /* 96 bytes */ SOCIAL_NETWORK_LOGOUT;    // = ServerProt(141, -2, "SOCIAL_NETWORK_LOGOUT")
        static ServerProt /* 96 bytes */ LOYALTY_UPDATE;           // = ServerProt(142, 4, "LOYALTY_UPDATE")
        static ServerProt /* 96 bytes */ TELEMETRY_GRID_ADD_GROUP; // = ServerProt(143, 5, "TELEMETRY_GRID_ADD_GROUP")
        static ServerProt /* 96 bytes */ LOGOUT_TRANSFER;          // = ServerProt(144, -1, "LOGOUT_TRANSFER")
        static ServerProt /* 96 bytes */ UPDATE_DOB;               // = ServerProt(145, 4, "UPDATE_DOB")
        static ServerProt /* 96 bytes */ VORBIS_PRELOAD_SOUNDS;    // = ServerProt(146, 4, "VORBIS_PRELOAD_SOUNDS")
        static ServerProt /* 96 bytes */ CLEAR_PLAYER_SNAPSHOT;    // = ServerProt(147, 1, "CLEAR_PLAYER_SNAPSHOT")
        static ServerProt /* 96 bytes */ CHANGE_LOBBY;             // = ServerProt(148, -1, "CHANGE_LOBBY")
        static ServerProt /* 96 bytes */ CREATE_ACCOUNT_REPLY;     // = ServerProt(149, 1, "CREATE_ACCOUNT_REPLY")
        static ServerProt /* 96 bytes */ MAP_PROJANIM_HALFSQ;      // = ServerProt(150, 21, "MAP_PROJANIM_HALFSQ")
        static ServerProt /* 96 bytes */ DO_CHEAT;                 // = ServerProt(151, -1, "DO_CHEAT")
        static ServerProt /* 96 bytes */ SEND_PING;                // = ServerProt(152, 8, "SEND_PING")
        static ServerProt /* 96 bytes */ WORLDLIST_FETCH_REPLY;    // = ServerProt(153, -2, "WORLDLIST_FETCH_REPLY")
        static ServerProt /* 96 bytes */ CREATE_CHECK_EMAIL_REPLY; // = ServerProt(154, 1, "CREATE_CHECK_EMAIL_REPLY")
        static ServerProt /* 96 bytes */ CREATE_CHECK_NAME_REPLY;  // = ServerProt(155, 1, "CREATE_CHECK_NAME_REPLY")
        static ServerProt /* 96 bytes */ JCOINS_UPDATE;            // = ServerProt(156, 4, "JCOINS_UPDATE")
        static ServerProt /* 96 bytes */ ENVIRONMENT_OVERRIDE;     // = ServerProt(157, -1, "ENVIRONMENT_OVERRIDE")
        static ServerProt                                          /* 96 bytes */
            TELEMETRY_GRID_SET_ROW_PINNED; // = ServerProt(158, 3, "TELEMETRY_GRID_SET_ROW_PINNED")
        static ServerProt                  /* 96 bytes */
            STORE_SERVERPERM_VARCS_ACK;    // = ServerProt(159, 0, "STORE_SERVERPERM_VARCS_ACK")
        static ServerProt /* 96 bytes */ SOUND_MIXBUSS_SETLEVEL;   // = ServerProt(160, 4, "SOUND_MIXBUSS_SETLEVEL")
        static ServerProt /* 96 bytes */ VORBIS_SOUND_GROUP_START; // = ServerProt(161, 2, "VORBIS_SOUND_GROUP_START")
        static ServerProt /* 96 bytes */ SONG_PRELOAD;             // = ServerProt(162, 4, "SONG_PRELOAD")
        static ServerProt                                          /* 96 bytes */
            TELEMETRY_GRID_VALUES_DELTA;                     // = ServerProt(163, -2, "TELEMETRY_GRID_VALUES_DELTA")
        static ServerProt /* 96 bytes */ SHOW_FACE_HERE;     // = ServerProt(164, 1, "SHOW_FACE_HERE")
        static ServerProt /* 96 bytes */ VORBIS_SOUND_GROUP; // = ServerProt(165, 12, "VORBIS_SOUND_GROUP")
        static ServerProt /* 96 bytes */ SERVER_REPLY;       // = ServerProt(166, -2, "SERVER_REPLY")
        static ServerProt /* 96 bytes */ POINTLIGHT_COLOUR;  // = ServerProt(167, 8, "POINTLIGHT_COLOUR")
        static ServerProt                                    /* 96 bytes */
            MESSAGE_QUICKCHAT_PLAYER_GROUP;                  // = ServerProt(168, -1, "MESSAGE_QUICKCHAT_PLAYER_GROUP")
        static ServerProt                                    /* 96 bytes */
            VORBIS_PRELOAD_SOUND_GROUP;                      // = ServerProt(169, 2, "VORBIS_PRELOAD_SOUND_GROUP")
        static ServerProt /* 96 bytes */ TELEMETRY_GRID_MOVE_ROW; // = ServerProt(170, 3, "TELEMETRY_GRID_MOVE_ROW")
        static ServerProt /* 96 bytes */ PLAYER_GROUP_DELTA;      // = ServerProt(171, -2, "PLAYER_GROUP_DELTA")
        static ServerProt /* 96 bytes */ VORBIS_SOUND_GROUP_STOP; // = ServerProt(172, 2, "VORBIS_SOUND_GROUP_STOP")
        static ServerProt /* 96 bytes */ PLAYER_SNAPSHOT;         // = ServerProt(173, -2, "PLAYER_SNAPSHOT")
        static ServerProt /* 96 bytes */ PLAYER_GROUP_VARPS;      // = ServerProt(174, -2, "PLAYER_GROUP_VARPS")
        static ServerProt /* 96 bytes */ CONSOLE_FEEDBACK;        // = ServerProt(175, -2, "CONSOLE_FEEDBACK")
        static ServerProt /* 96 bytes */ JS5_RELOAD;              // = ServerProt(176, 0, "JS5_RELOAD")
        static ServerProt                                         /* 96 bytes */
            IF_SETPLAYERMODEL_SNAPSHOT;                           // = ServerProt(177, 5, "IF_SETPLAYERMODEL_SNAPSHOT")
        static ServerProt /* 96 bytes */ TEXT_COORD;              // = ServerProt(178, -1, "TEXT_COORD")
        static ServerProt /* 96 bytes */ TELEMETRY_GRID_ADD_COLUMN; // = ServerProt(179, 6, "TELEMETRY_GRID_ADD_COLUMN")
        static ServerProt /* 96 bytes */ TELEMETRY_GRID_ADD_ROW;    // = ServerProt(180, 6, "TELEMETRY_GRID_ADD_ROW")
        static ServerProt /* 96 bytes */ PLAYER_GROUP_FULL;         // = ServerProt(181, -2, "PLAYER_GROUP_FULL")
        static ServerProt /* 96 bytes */ LOBBY_APPEARANCE;          // = ServerProt(182, -2, "LOBBY_APPEARANCE")
        static ServerProt /* 96 bytes */ POINTLIGHT_INTENSITYSCALE; // = ServerProt(183, 5, "POINTLIGHT_INTENSITYSCALE")
        static ServerProt /* 96 bytes */ SET_TARGET;                // = ServerProt(184, 3, "SET_TARGET")
        static ServerProt /* 96 bytes */ EXECUTE_CLIENT_CHEAT;      // = ServerProt(185, 2, "EXECUTE_CLIENT_CHEAT")
        static ServerProt /* 96 bytes */ NPC_HEADICON_SPECIFIC;     // = ServerProt(186, 9, "NPC_HEADICON_SPECIFIC")
        static ServerProt /* 96 bytes */ CREATE_SUGGEST_NAME_ERROR; // = ServerProt(187, 1, "CREATE_SUGGEST_NAME_ERROR")
        static ServerProt /* 96 bytes */ IF_SETRETEX;               // = ServerProt(188, 9, "IF_SETRETEX")
        static ServerProt                                           /* 96 bytes */
            TELEMETRY_CLEAR_GRID_VALUE;                   // = ServerProt(189, 3, "TELEMETRY_CLEAR_GRID_VALUE")
        static ServerProt /* 96 bytes */ SETDRAWORDER;    // = ServerProt(190, 1, "SETDRAWORDER")
        static ServerProt /* 96 bytes */ SERVER_TICK_END; // = ServerProt(191, 0, "SERVER_TICK_END")
        static ServerProt /* 96 bytes */ CUTSCENE2D_PLAY; // = ServerProt(192, 2, "CUTSCENE2D_PLAY")
        static ServerProt                                 /* 96 bytes */
            CREATE_SUGGEST_NAME_REPLY;                    // = ServerProt(193, -1, "CREATE_SUGGEST_NAME_REPLY")
        static ServerProt                                 /* 96 bytes */
            TELEMETRY_GRID_REMOVE_GROUP;                  // = ServerProt(194, 1, "TELEMETRY_GRID_REMOVE_GROUP")
        static ServerProt /* 96 bytes */ MIDI_SONG_STOP;  // = ServerProt(195, 0, "MIDI_SONG_STOP")
        static ServerProt /* 96 bytes */ IF_SETPLAYERHEAD_SNAPSHOT; // = ServerProt(196, 5, "IF_SETPLAYERHEAD_SNAPSHOT")
        static ServerProt /* 96 bytes */ IF_SETOBJECT_LONG;         // = ServerProt(197, 14, "IF_SETOBJECT_LONG")
        static ServerProt /* 96 bytes */ VARP_LONG;                 // = ServerProt(198, 10, "VARP_LONG")
        static ServerProt /* 96 bytes */ CLIENT_SETVARC_LONG;       // = ServerProt(199, 10, "CLIENT_SETVARC_LONG")

        // data members, from how the methods use this: 96 bytes
        int field_0;   // offset 0
        int field_4;   // offset 4
        char* field_8; // offset 8
        char _unknown_16[48];
        undefined4 field_64; // offset 64
        char _unknown_68[4];
        undefined8 field_72; // offset 72
        undefined8 field_80; // offset 80
        undefined4 field_88; // offset 88
        char _unknown_92[4];
    };

    // 0x1039b6540, 1648 bytes, __common; set at startup by ___cxx_global_var_init.297
    eastl::fixed_vector<ServerProt_const*, 200ul, true, eastl::allocator> ServerProt::m_typeLookup =
        fixed_vector<ServerProt_const*, 200ul, true, eastl::allocator>();

    // 0x1039b6bb0, 96 bytes, __common; set at startup by ___cxx_global_var_init.298
    ServerProt ServerProt::UPDATE_RUNWEIGHT = ServerProt(0, 2, "UPDATE_RUNWEIGHT");

    // 0x1039b6c10, 96 bytes, __common; set at startup by ___cxx_global_var_init.300
    ServerProt ServerProt::MESSAGE_QUICKCHAT_FRIENDCHAT = ServerProt(1, -1, "MESSAGE_QUICKCHAT_FRIENDCHAT");

    // 0x1039b6c70, 96 bytes, __common; set at startup by ___cxx_global_var_init.302
    ServerProt ServerProt::CLANCHANNEL_DELTA = ServerProt(2, -2, "CLANCHANNEL_DELTA");

    // 0x1039b6cd0, 96 bytes, __common; set at startup by ___cxx_global_var_init.304
    ServerProt ServerProt::OBJ_ADD = ServerProt(3, 5, "OBJ_ADD");

    // 0x1039b6d30, 96 bytes, __common; set at startup by ___cxx_global_var_init.306
    ServerProt ServerProt::UPDATE_STAT = ServerProt(4, 6, "UPDATE_STAT");

    // 0x1039b6d90, 96 bytes, __common; set at startup by ___cxx_global_var_init.308
    ServerProt ServerProt::IF_OPENSUB_ACTIVE_LOC = ServerProt(5, 32, "IF_OPENSUB_ACTIVE_LOC");

    // 0x1039b6df0, 96 bytes, __common; set at startup by ___cxx_global_var_init.310
    ServerProt ServerProt::DEBUG_SERVER_TRIGGERS = ServerProt(6, -1, "DEBUG_SERVER_TRIGGERS");

    // 0x1039b6e50, 96 bytes, __common; set at startup by ___cxx_global_var_init.312
    ServerProt ServerProt::HINT_ARROW = ServerProt(7, 14, "HINT_ARROW");

    // 0x1039b6eb0, 96 bytes, __common; set at startup by ___cxx_global_var_init.314
    ServerProt ServerProt::NPC_ANIM_SPECIFIC = ServerProt(8, 19, "NPC_ANIM_SPECIFIC");

    // 0x1039b6f10, 96 bytes, __common; set at startup by ___cxx_global_var_init.316
    ServerProt ServerProt::PLAYER_INFO = ServerProt(9, -2, "PLAYER_INFO");

    // 0x1039b6f70, 96 bytes, __common; set at startup by ___cxx_global_var_init.318
    ServerProt ServerProt::CHAT_FILTER_SETTINGS = ServerProt(10, 2, "CHAT_FILTER_SETTINGS");

    // 0x1039b6fd0, 96 bytes, __common; set at startup by ___cxx_global_var_init.320
    ServerProt ServerProt::REFLECTION_CHECKER = ServerProt(11, -2, "REFLECTION_CHECKER");

    // 0x1039b7030, 96 bytes, __common; set at startup by ___cxx_global_var_init.322
    ServerProt ServerProt::MESSAGE_CLANCHANNEL_SYSTEM = ServerProt(12, -1, "MESSAGE_CLANCHANNEL_SYSTEM");

    // 0x1039b7090, 96 bytes, __common; set at startup by ___cxx_global_var_init.324
    ServerProt ServerProt::UPDATE_RUNENERGY = ServerProt(13, 1, "UPDATE_RUNENERGY");

    // 0x1039b70f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.326
    ServerProt ServerProt::CLANCHANNEL_FULL = ServerProt(14, -2, "CLANCHANNEL_FULL");

    // 0x1039b7150, 96 bytes, __common; set at startup by ___cxx_global_var_init.328
    ServerProt ServerProt::FRIENDLIST_LOADED = ServerProt(15, 0, "FRIENDLIST_LOADED");

    // 0x1039b71b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.330
    ServerProt ServerProt::RESET_ANIMS = ServerProt(16, 0, "RESET_ANIMS");

    // 0x1039b7210, 96 bytes, __common; set at startup by ___cxx_global_var_init.332
    ServerProt ServerProt::IF_SETSCROLLPOS = ServerProt(17, 6, "IF_SETSCROLLPOS");

    // 0x1039b7270, 96 bytes, __common; set at startup by ___cxx_global_var_init.334
    ServerProt ServerProt::IF_SETEVENTS = ServerProt(18, 12, "IF_SETEVENTS");

    // 0x1039b72d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.336
    ServerProt ServerProt::MIDI_SONG_LOCATION = ServerProt(19, 11, "MIDI_SONG_LOCATION");

    // 0x1039b7330, 96 bytes, __common; set at startup by ___cxx_global_var_init.338
    ServerProt ServerProt::IF_SETOBJECT = ServerProt(20, 10, "IF_SETOBJECT");

    // 0x1039b7390, 96 bytes, __common; set at startup by ___cxx_global_var_init.340
    ServerProt ServerProt::UPDATE_ZONE_FULL_FOLLOWS = ServerProt(21, 3, "UPDATE_ZONE_FULL_FOLLOWS");

    // 0x1039b73f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.342
    ServerProt ServerProt::UPDATE_ZONE_PARTIAL_ENCLOSED = ServerProt(22, -2, "UPDATE_ZONE_PARTIAL_ENCLOSED");

    // 0x1039b7450, 96 bytes, __common; set at startup by ___cxx_global_var_init.344
    ServerProt ServerProt::CLIENT_SETVARC_LARGE = ServerProt(23, 6, "CLIENT_SETVARC_LARGE");

    // 0x1039b74b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.346
    ServerProt ServerProt::MESSAGE_FRIENDCHANNEL = ServerProt(24, -1, "MESSAGE_FRIENDCHANNEL");

    // 0x1039b7510, 96 bytes, __common; set at startup by ___cxx_global_var_init.348
    ServerProt ServerProt::CAM_MOVETO = ServerProt(25, 6, "CAM_MOVETO");

    // 0x1039b7570, 96 bytes, __common; set at startup by ___cxx_global_var_init.350
    ServerProt ServerProt::VARBIT_SMALL = ServerProt(26, 3, "VARBIT_SMALL");

    // 0x1039b75d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.352
    ServerProt ServerProt::IF_SETANIM = ServerProt(27, 8, "IF_SETANIM");

    // 0x1039b7630, 96 bytes, __common; set at startup by ___cxx_global_var_init.354
    ServerProt ServerProt::CLIENT_SETVARCBIT_LARGE = ServerProt(28, 6, "CLIENT_SETVARCBIT_LARGE");

    // 0x1039b7690, 96 bytes, __common; set at startup by ___cxx_global_var_init.356
    ServerProt ServerProt::CAM_FORCEANGLE = ServerProt(29, 4, "CAM_FORCEANGLE");

    // 0x1039b76f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.358
    ServerProt ServerProt::CLIENT_SETVARCBIT_SMALL = ServerProt(30, 3, "CLIENT_SETVARCBIT_SMALL");

    // 0x1039b7750, 96 bytes, __common; set at startup by ___cxx_global_var_init.360
    ServerProt ServerProt::CLANSETTINGS_FULL = ServerProt(31, -2, "CLANSETTINGS_FULL");

    // 0x1039b77b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.362
    ServerProt ServerProt::CLIENT_SETVARCSTR_SMALL = ServerProt(32, -1, "CLIENT_SETVARCSTR_SMALL");

    // 0x1039b7810, 96 bytes, __common; set at startup by ___cxx_global_var_init.364
    ServerProt ServerProt::MIDI_SONG = ServerProt(33, 5, "MIDI_SONG");

    // 0x1039b7870, 96 bytes, __common; set at startup by ___cxx_global_var_init.366
    ServerProt ServerProt::SOUND_AREA = ServerProt(34, 10, "SOUND_AREA");

    // 0x1039b78d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.368
    ServerProt ServerProt::VARP_SMALL = ServerProt(35, 3, "VARP_SMALL");

    // 0x1039b7930, 96 bytes, __common; set at startup by ___cxx_global_var_init.370
    ServerProt ServerProt::MESSAGE_PRIVATE_ECHO = ServerProt(36, -2, "MESSAGE_PRIVATE_ECHO");

    // 0x1039b7990, 96 bytes, __common; set at startup by ___cxx_global_var_init.372
    ServerProt ServerProt::IF_OPENTOP = ServerProt(37, 19, "IF_OPENTOP");

    // 0x1039b79f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.374
    ServerProt ServerProt::CLANSETTINGS_DELTA = ServerProt(38, -2, "CLANSETTINGS_DELTA");

    // 0x1039b7a50, 96 bytes, __common; set at startup by ___cxx_global_var_init.376
    ServerProt ServerProt::IF_OPENSUB_ACTIVE_OBJ = ServerProt(39, 29, "IF_OPENSUB_ACTIVE_OBJ");

    // 0x1039b7ab0, 96 bytes, __common; set at startup by ___cxx_global_var_init.378
    ServerProt ServerProt::VARCLAN = ServerProt(40, -1, "VARCLAN");

    // 0x1039b7b10, 96 bytes, __common; set at startup by ___cxx_global_var_init.380
    ServerProt ServerProt::UPDATE_ZONE_PARTIAL_FOLLOWS = ServerProt(41, 3, "UPDATE_ZONE_PARTIAL_FOLLOWS");

    // 0x1039b7b70, 96 bytes, __common; set at startup by ___cxx_global_var_init.382
    ServerProt ServerProt::TRIGGER_ONDIALOGABORT = ServerProt(42, 0, "TRIGGER_ONDIALOGABORT");

    // 0x1039b7bd0, 96 bytes, __common; set at startup by ___cxx_global_var_init.384
    ServerProt ServerProt::MESSAGE_CLANCHANNEL = ServerProt(43, -1, "MESSAGE_CLANCHANNEL");

    // 0x1039b7c30, 96 bytes, __common; set at startup by ___cxx_global_var_init.386
    ServerProt ServerProt::UPDATE_IGNORELIST = ServerProt(44, -2, "UPDATE_IGNORELIST");

    // 0x1039b7c90, 96 bytes, __common; set at startup by ___cxx_global_var_init.388
    ServerProt ServerProt::LOC_DEL = ServerProt(45, 2, "LOC_DEL");

    // 0x1039b7cf0, 96 bytes, __common; set at startup by ___cxx_global_var_init.390
    ServerProt ServerProt::CAM_RESET = ServerProt(46, 0, "CAM_RESET");

    // 0x1039b7d50, 96 bytes, __common; set at startup by ___cxx_global_var_init.392
    ServerProt ServerProt::IF_SETTEXT = ServerProt(47, -2, "IF_SETTEXT");

    // 0x1039b7db0, 96 bytes, __common; set at startup by ___cxx_global_var_init.394
    ServerProt ServerProt::OBJ_REVEAL = ServerProt(48, 7, "OBJ_REVEAL");

    // 0x1039b7e10, 96 bytes, __common; set at startup by ___cxx_global_var_init.396
    ServerProt ServerProt::SET_MAP_FLAG = ServerProt(49, 10, "SET_MAP_FLAG");

    // 0x1039b7e70, 96 bytes, __common; set at startup by ___cxx_global_var_init.398
    ServerProt ServerProt::IF_SET_HTTP_IMAGE = ServerProt(50, 8, "IF_SET_HTTP_IMAGE");

    // 0x1039b7ed0, 96 bytes, __common; set at startup by ___cxx_global_var_init.400
    ServerProt ServerProt::VARBIT_LARGE = ServerProt(51, 6, "VARBIT_LARGE");

    // 0x1039b7f30, 96 bytes, __common; set at startup by ___cxx_global_var_init.402
    ServerProt ServerProt::MAP_PROJANIM = ServerProt(52, 20, "MAP_PROJANIM");

    // 0x1039b7f90, 96 bytes, __common; set at startup by ___cxx_global_var_init.404
    ServerProt ServerProt::LOC_ANIM = ServerProt(53, 7, "LOC_ANIM");

    // 0x1039b7ff0, 96 bytes, __common; set at startup by ___cxx_global_var_init.406
    ServerProt ServerProt::MAP_ANIM = ServerProt(54, 11, "MAP_ANIM");

    // 0x1039b8050, 96 bytes, __common; set at startup by ___cxx_global_var_init.408
    ServerProt ServerProt::UPDATE_INV_STOP_TRANSMIT = ServerProt(55, 3, "UPDATE_INV_STOP_TRANSMIT");

    // 0x1039b80b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.410
    ServerProt ServerProt::VORBIS_SOUND = ServerProt(56, 10, "VORBIS_SOUND");

    // 0x1039b8110, 96 bytes, __common; set at startup by ___cxx_global_var_init.412
    ServerProt ServerProt::SET_PLAYER_OP = ServerProt(57, -1, "SET_PLAYER_OP");

    // 0x1039b8170, 96 bytes, __common; set at startup by ___cxx_global_var_init.414
    ServerProt ServerProt::MESSAGE_GAME = ServerProt(58, -1, "MESSAGE_GAME");

    // 0x1039b81d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.416
    ServerProt ServerProt::LOGOUT = ServerProt(59, 1, "LOGOUT");

    // 0x1039b8230, 96 bytes, __common; set at startup by ___cxx_global_var_init.418
    ServerProt ServerProt::LOC_CUSTOMISE = ServerProt(60, -1, "LOC_CUSTOMISE");

    // 0x1039b8290, 96 bytes, __common; set at startup by ___cxx_global_var_init.420
    ServerProt ServerProt::CAM_REMOVEROOF = ServerProt(61, 4, "CAM_REMOVEROOF");

    // 0x1039b82f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.422
    ServerProt ServerProt::IF_SETCOLOUR = ServerProt(62, 6, "IF_SETCOLOUR");

    // 0x1039b8350, 96 bytes, __common; set at startup by ___cxx_global_var_init.424
    ServerProt ServerProt::IF_SETPOSITION = ServerProt(63, 8, "IF_SETPOSITION");

    // 0x1039b83b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.426
    ServerProt ServerProt::IF_SETPLAYERHEAD = ServerProt(64, 4, "IF_SETPLAYERHEAD");

    // 0x1039b8410, 96 bytes, __common; set at startup by ___cxx_global_var_init.428
    ServerProt ServerProt::VARCLAN_ENABLE = ServerProt(65, 0, "VARCLAN_ENABLE");

    // 0x1039b8470, 96 bytes, __common; set at startup by ___cxx_global_var_init.430
    ServerProt ServerProt::LAST_LOGIN_INFO = ServerProt(66, 4, "LAST_LOGIN_INFO");

    // 0x1039b84d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.432
    ServerProt ServerProt::CAM2_ENABLE = ServerProt(67, 1, "CAM2_ENABLE");

    // 0x1039b8530, 96 bytes, __common; set at startup by ___cxx_global_var_init.434
    ServerProt ServerProt::IF_SETPLAYERHEAD_IGNOREWORN = ServerProt(68, 10, "IF_SETPLAYERHEAD_IGNOREWORN");

    // 0x1039b8590, 96 bytes, __common; set at startup by ___cxx_global_var_init.436
    ServerProt ServerProt::IF_SETHIDE = ServerProt(69, 5, "IF_SETHIDE");

    // 0x1039b85f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.438
    ServerProt ServerProt::MESSAGE_PUBLIC = ServerProt(70, -1, "MESSAGE_PUBLIC");

    // 0x1039b8650, 96 bytes, __common; set at startup by ___cxx_global_var_init.439
    ServerProt ServerProt::IF_SETPLAYERMODEL_SELF = ServerProt(71, 4, "IF_SETPLAYERMODEL_SELF");

    // 0x1039b86b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.441
    ServerProt ServerProt::SYNTH_SOUND = ServerProt(72, 10, "SYNTH_SOUND");

    // 0x1039b8710, 96 bytes, __common; set at startup by ___cxx_global_var_init.443
    ServerProt ServerProt::IF_SETNPCHEAD = ServerProt(73, 8, "IF_SETNPCHEAD");

    // 0x1039b8770, 96 bytes, __common; set at startup by ___cxx_global_var_init.445
    ServerProt ServerProt::MESSAGE_QUICKCHAT_PRIVATE = ServerProt(74, -1, "MESSAGE_QUICKCHAT_PRIVATE");

    // 0x1039b87d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.446
    ServerProt ServerProt::CAM_SHAKE = ServerProt(75, 6, "CAM_SHAKE");

    // 0x1039b8830, 96 bytes, __common; set at startup by ___cxx_global_var_init.448
    ServerProt ServerProt::LOC_ANIM_SPECIFIC = ServerProt(76, 10, "LOC_ANIM_SPECIFIC");

    // 0x1039b8890, 96 bytes, __common; set at startup by ___cxx_global_var_init.450
    ServerProt ServerProt::IF_SETTEXTFONT = ServerProt(77, 8, "IF_SETTEXTFONT");

    // 0x1039b88f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.452
    ServerProt ServerProt::HINT_TRAIL = ServerProt(78, -2, "HINT_TRAIL");

    // 0x1039b8950, 96 bytes, __common; set at startup by ___cxx_global_var_init.454
    ServerProt ServerProt::MINIMAP_TOGGLE = ServerProt(79, 1, "MINIMAP_TOGGLE");

    // 0x1039b89b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.456
    ServerProt ServerProt::UPDATE_INV_PARTIAL = ServerProt(80, -2, "UPDATE_INV_PARTIAL");

    // 0x1039b8a10, 96 bytes, __common; set at startup by ___cxx_global_var_init.458
    ServerProt ServerProt::RESET_CLIENT_VARCACHE = ServerProt(81, 0, "RESET_CLIENT_VARCACHE");

    // 0x1039b8a70, 96 bytes, __common; set at startup by ___cxx_global_var_init.460
    ServerProt ServerProt::UPDATE_FRIENDCHAT_CHANNEL_SINGLEUSER =
        ServerProt(82, -1, "UPDATE_FRIENDCHAT_CHANNEL_SINGLEUSER");

    // 0x1039b8ad0, 96 bytes, __common; set at startup by ___cxx_global_var_init.462
    ServerProt ServerProt::IF_MOVESUB = ServerProt(83, 8, "IF_MOVESUB");

    // 0x1039b8b30, 96 bytes, __common; set at startup by ___cxx_global_var_init.464
    ServerProt ServerProt::IF_OPENSUB = ServerProt(84, 23, "IF_OPENSUB");

    // 0x1039b8b90, 96 bytes, __common; set at startup by ___cxx_global_var_init.466
    ServerProt ServerProt::CLIENT_SETVARCSTR_LARGE = ServerProt(85, -2, "CLIENT_SETVARCSTR_LARGE");

    // 0x1039b8bf0, 96 bytes, __common; set at startup by ___cxx_global_var_init.468
    ServerProt ServerProt::CHAT_FILTER_SETTINGS_PRIVATECHAT = ServerProt(86, 1, "CHAT_FILTER_SETTINGS_PRIVATECHAT");

    // 0x1039b8c50, 96 bytes, __common; set at startup by ___cxx_global_var_init.470
    ServerProt ServerProt::UPDATE_INV_FULL = ServerProt(87, -2, "UPDATE_INV_FULL");

    // 0x1039b8cb0, 96 bytes, __common; set at startup by ___cxx_global_var_init.472
    ServerProt ServerProt::OBJ_DEL = ServerProt(88, 3, "OBJ_DEL");

    // 0x1039b8d10, 96 bytes, __common; set at startup by ___cxx_global_var_init.474
    ServerProt ServerProt::UPDATE_STOCKMARKET_SLOT = ServerProt(89, 35, "UPDATE_STOCKMARKET_SLOT");

    // 0x1039b8d70, 96 bytes, __common; set at startup by ___cxx_global_var_init.476
    ServerProt ServerProt::UPDATE_UID192 = ServerProt(90, 28, "UPDATE_UID192");

    // 0x1039b8dd0, 96 bytes, __common; set at startup by ___cxx_global_var_init.478
    ServerProt ServerProt::CAM_SMOOTHRESET = ServerProt(91, 0, "CAM_SMOOTHRESET");

    // 0x1039b8e30, 96 bytes, __common; set at startup by ___cxx_global_var_init.480
    ServerProt ServerProt::VARP_LARGE = ServerProt(92, 6, "VARP_LARGE");

    // 0x1039b8e90, 96 bytes, __common; set at startup by ___cxx_global_var_init.482
    ServerProt ServerProt::IF_CLOSESUB = ServerProt(93, 4, "IF_CLOSESUB");

    // 0x1039b8ef0, 96 bytes, __common; set at startup by ___cxx_global_var_init.484
    ServerProt ServerProt::IF_SETANGLE = ServerProt(94, 10, "IF_SETANGLE");

    // 0x1039b8f50, 96 bytes, __common; set at startup by ___cxx_global_var_init.486
    ServerProt ServerProt::UPDATE_FRIENDLIST = ServerProt(95, -2, "UPDATE_FRIENDLIST");

    // 0x1039b8fb0, 96 bytes, __common; set at startup by ___cxx_global_var_init.488
    ServerProt ServerProt::CAM_LOOKAT = ServerProt(96, 6, "CAM_LOOKAT");

    // 0x1039b9010, 96 bytes, __common; set at startup by ___cxx_global_var_init.490
    ServerProt ServerProt::PROJANIM_SPECIFIC = ServerProt(97, 25, "PROJANIM_SPECIFIC");

    // 0x1039b9070, 96 bytes, __common; set at startup by ___cxx_global_var_init.492
    ServerProt ServerProt::REBUILD_REGION = ServerProt(98, -2, "REBUILD_REGION");

    // 0x1039b90d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.494
    ServerProt ServerProt::MIDI_JINGLE = ServerProt(99, 5, "MIDI_JINGLE");

    // 0x1039b9130, 96 bytes, __common; set at startup by ___cxx_global_var_init.496
    ServerProt ServerProt::UPDATE_FRIENDCHAT_CHANNEL_FULL = ServerProt(100, -2, "UPDATE_FRIENDCHAT_CHANNEL_FULL");

    // 0x1039b9190, 96 bytes, __common; set at startup by ___cxx_global_var_init.498
    ServerProt ServerProt::IF_SETTARGETPARAM = ServerProt(101, 10, "IF_SETTARGETPARAM");

    // 0x1039b91f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.500
    ServerProt ServerProt::IF_SETMODEL = ServerProt(102, 8, "IF_SETMODEL");

    // 0x1039b9250, 96 bytes, __common; set at startup by ___cxx_global_var_init.502
    ServerProt ServerProt::LOGOUT_FULL = ServerProt(103, 1, "LOGOUT_FULL");

    // 0x1039b92b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.504
    ServerProt ServerProt::LOC_ADD_CHANGE = ServerProt(104, -1, "LOC_ADD_CHANGE");

    // 0x1039b9310, 96 bytes, __common; set at startup by ___cxx_global_var_init.506
    ServerProt ServerProt::IF_SETGRAPHIC = ServerProt(105, 8, "IF_SETGRAPHIC");

    // 0x1039b9370, 96 bytes, __common; set at startup by ___cxx_global_var_init.508
    ServerProt ServerProt::IF_SETPLAYERHEAD_OTHER = ServerProt(106, 10, "IF_SETPLAYERHEAD_OTHER");

    // 0x1039b93d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.510
    ServerProt ServerProt::NPC_INFO = ServerProt(107, -2, "NPC_INFO");

    // 0x1039b9430, 96 bytes, __common; set at startup by ___cxx_global_var_init.512
    ServerProt ServerProt::SET_MOVEACTION = ServerProt(108, -1, "SET_MOVEACTION");

    // 0x1039b9490, 96 bytes, __common; set at startup by ___cxx_global_var_init.514
    ServerProt ServerProt::MESSAGE_QUICKCHAT_PRIVATE_ECHO = ServerProt(109, -1, "MESSAGE_QUICKCHAT_PRIVATE_ECHO");

    // 0x1039b94f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.516
    ServerProt ServerProt::IF_SETPLAYERMODEL_OTHER = ServerProt(110, 10, "IF_SETPLAYERMODEL_OTHER");

    // 0x1039b9550, 96 bytes, __common; set at startup by ___cxx_global_var_init.518
    ServerProt ServerProt::OBJ_COUNT = ServerProt(111, 7, "OBJ_COUNT");

    // 0x1039b95b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.520
    ServerProt ServerProt::SPOTANIM_SPECIFIC = ServerProt(112, 12, "SPOTANIM_SPECIFIC");

    // 0x1039b9610, 96 bytes, __common; set at startup by ___cxx_global_var_init.522
    ServerProt ServerProt::UPDATE_REBOOT_TIMER = ServerProt(113, 2, "UPDATE_REBOOT_TIMER");

    // 0x1039b9670, 96 bytes, __common; set at startup by ___cxx_global_var_init.524
    ServerProt ServerProt::MESSAGE_QUICKCHAT_CLANCHANNEL = ServerProt(114, -1, "MESSAGE_QUICKCHAT_CLANCHANNEL");

    // 0x1039b96d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.526
    ServerProt ServerProt::IF_OPENSUB_ACTIVE_PLAYER = ServerProt(115, 25, "IF_OPENSUB_ACTIVE_PLAYER");

    // 0x1039b9730, 96 bytes, __common; set at startup by ___cxx_global_var_init.528
    ServerProt ServerProt::IF_OPENSUB_ACTIVE_NPC = ServerProt(116, 25, "IF_OPENSUB_ACTIVE_NPC");

    // 0x1039b9790, 96 bytes, __common; set at startup by ___cxx_global_var_init.530
    ServerProt ServerProt::MESSAGE_PRIVATE = ServerProt(117, -2, "MESSAGE_PRIVATE");

    // 0x1039b97f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.531
    ServerProt ServerProt::CAMERA_UPDATE = ServerProt(118, -2, "CAMERA_UPDATE");

    // 0x1039b9850, 96 bytes, __common; set at startup by ___cxx_global_var_init.533
    ServerProt ServerProt::VORBIS_SPEECH_STOP = ServerProt(119, 0, "VORBIS_SPEECH_STOP");

    // 0x1039b98b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.535
    ServerProt ServerProt::VARCLAN_DISABLE = ServerProt(120, 0, "VARCLAN_DISABLE");

    // 0x1039b9910, 96 bytes, __common; set at startup by ___cxx_global_var_init.537
    ServerProt ServerProt::IF_SETTEXTANTIMACRO = ServerProt(121, 5, "IF_SETTEXTANTIMACRO");

    // 0x1039b9970, 96 bytes, __common; set at startup by ___cxx_global_var_init.539
    ServerProt ServerProt::REBUILD_NORMAL = ServerProt(122, -2, "REBUILD_NORMAL");

    // 0x1039b99d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.541
    ServerProt ServerProt::CLIENT_SETVARC_SMALL = ServerProt(123, 3, "CLIENT_SETVARC_SMALL");

    // 0x1039b9a30, 96 bytes, __common; set at startup by ___cxx_global_var_init.543
    ServerProt ServerProt::URL_OPEN = ServerProt(124, -2, "URL_OPEN");

    // 0x1039b9a90, 96 bytes, __common; set at startup by ___cxx_global_var_init.545
    ServerProt ServerProt::UPDATE_SITESETTINGS = ServerProt(125, -1, "UPDATE_SITESETTINGS");

    // 0x1039b9af0, 96 bytes, __common; set at startup by ___cxx_global_var_init.547
    ServerProt ServerProt::VORBIS_SPEECH_SOUND = ServerProt(126, 8, "VORBIS_SPEECH_SOUND");

    // 0x1039b9b50, 96 bytes, __common; set at startup by ___cxx_global_var_init.549
    ServerProt ServerProt::RUNCLIENTSCRIPT = ServerProt(127, -2, "RUNCLIENTSCRIPT");

    // 0x1039b9bb0, 96 bytes, __common; set at startup by ___cxx_global_var_init.551
    ServerProt ServerProt::TELEMETRY_GRID_REMOVE_ROW = ServerProt(128, 2, "TELEMETRY_GRID_REMOVE_ROW");

    // 0x1039b9c10, 96 bytes, __common; set at startup by ___cxx_global_var_init.553
    ServerProt ServerProt::LOC_PREFETCH = ServerProt(129, 5, "LOC_PREFETCH");

    // 0x1039b9c70, 96 bytes, __common; set at startup by ___cxx_global_var_init.555
    ServerProt ServerProt::CUTSCENE = ServerProt(130, -2, "CUTSCENE");

    // 0x1039b9cd0, 96 bytes, __common; set at startup by ___cxx_global_var_init.557
    ServerProt ServerProt::IF_SETCLICKMASK = ServerProt(131, 5, "IF_SETCLICKMASK");

    // 0x1039b9d30, 96 bytes, __common; set at startup by ___cxx_global_var_init.559
    ServerProt ServerProt::SOUND_MIXBUSS_ADD = ServerProt(132, 6, "SOUND_MIXBUSS_ADD");

    // 0x1039b9d90, 96 bytes, __common; set at startup by ___cxx_global_var_init.561
    ServerProt ServerProt::TELEMETRY_GRID_REMOVE_COLUMN = ServerProt(133, 2, "TELEMETRY_GRID_REMOVE_COLUMN");

    // 0x1039b9df0, 96 bytes, __common; set at startup by ___cxx_global_var_init.563
    ServerProt ServerProt::NO_TIMEOUT = ServerProt(134, 0, "NO_TIMEOUT");

    // 0x1039b9e50, 96 bytes, __common; set at startup by ___cxx_global_var_init.564
    ServerProt ServerProt::TELEMETRY_GRID_MOVE_COLUMN = ServerProt(135, 3, "TELEMETRY_GRID_MOVE_COLUMN");

    // 0x1039b9eb0, 96 bytes, __common; set at startup by ___cxx_global_var_init.566
    ServerProt ServerProt::MESSAGE_PLAYER_GROUP = ServerProt(136, -1, "MESSAGE_PLAYER_GROUP");

    // 0x1039b9f10, 96 bytes, __common; set at startup by ___cxx_global_var_init.568
    ServerProt ServerProt::SET_NPC_ATTACK_PRIORITY = ServerProt(137, 1, "SET_NPC_ATTACK_PRIORITY");

    // 0x1039b9f70, 96 bytes, __common; set at startup by ___cxx_global_var_init.570
    ServerProt ServerProt::TELEMETRY_GRID_FULL = ServerProt(138, -2, "TELEMETRY_GRID_FULL");

    // 0x1039b9fd0, 96 bytes, __common; set at startup by ___cxx_global_var_init.572
    ServerProt ServerProt::SET_PLAYER_ATTACK_PRIORITY = ServerProt(139, 1, "SET_PLAYER_ATTACK_PRIORITY");

    // 0x1039ba030, 96 bytes, __common; set at startup by ___cxx_global_var_init.574
    ServerProt ServerProt::IF_SETRECOL = ServerProt(140, 9, "IF_SETRECOL");

    // 0x1039ba090, 96 bytes, __common; set at startup by ___cxx_global_var_init.576
    ServerProt ServerProt::SOCIAL_NETWORK_LOGOUT = ServerProt(141, -2, "SOCIAL_NETWORK_LOGOUT");

    // 0x1039ba0f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.578
    ServerProt ServerProt::LOYALTY_UPDATE = ServerProt(142, 4, "LOYALTY_UPDATE");

    // 0x1039ba150, 96 bytes, __common; set at startup by ___cxx_global_var_init.580
    ServerProt ServerProt::TELEMETRY_GRID_ADD_GROUP = ServerProt(143, 5, "TELEMETRY_GRID_ADD_GROUP");

    // 0x1039ba1b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.582
    ServerProt ServerProt::LOGOUT_TRANSFER = ServerProt(144, -1, "LOGOUT_TRANSFER");

    // 0x1039ba210, 96 bytes, __common; set at startup by ___cxx_global_var_init.584
    ServerProt ServerProt::UPDATE_DOB = ServerProt(145, 4, "UPDATE_DOB");

    // 0x1039ba270, 96 bytes, __common; set at startup by ___cxx_global_var_init.586
    ServerProt ServerProt::VORBIS_PRELOAD_SOUNDS = ServerProt(146, 4, "VORBIS_PRELOAD_SOUNDS");

    // 0x1039ba2d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.588
    ServerProt ServerProt::CLEAR_PLAYER_SNAPSHOT = ServerProt(147, 1, "CLEAR_PLAYER_SNAPSHOT");

    // 0x1039ba330, 96 bytes, __common; set at startup by ___cxx_global_var_init.590
    ServerProt ServerProt::CHANGE_LOBBY = ServerProt(148, -1, "CHANGE_LOBBY");

    // 0x1039ba390, 96 bytes, __common; set at startup by ___cxx_global_var_init.592
    ServerProt ServerProt::CREATE_ACCOUNT_REPLY = ServerProt(149, 1, "CREATE_ACCOUNT_REPLY");

    // 0x1039ba3f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.594
    ServerProt ServerProt::MAP_PROJANIM_HALFSQ = ServerProt(150, 21, "MAP_PROJANIM_HALFSQ");

    // 0x1039ba450, 96 bytes, __common; set at startup by ___cxx_global_var_init.596
    ServerProt ServerProt::DO_CHEAT = ServerProt(151, -1, "DO_CHEAT");

    // 0x1039ba4b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.598
    ServerProt ServerProt::SEND_PING = ServerProt(152, 8, "SEND_PING");

    // 0x1039ba510, 96 bytes, __common; set at startup by ___cxx_global_var_init.600
    ServerProt ServerProt::WORLDLIST_FETCH_REPLY = ServerProt(153, -2, "WORLDLIST_FETCH_REPLY");

    // 0x1039ba570, 96 bytes, __common; set at startup by ___cxx_global_var_init.602
    ServerProt ServerProt::CREATE_CHECK_EMAIL_REPLY = ServerProt(154, 1, "CREATE_CHECK_EMAIL_REPLY");

    // 0x1039ba5d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.604
    ServerProt ServerProt::CREATE_CHECK_NAME_REPLY = ServerProt(155, 1, "CREATE_CHECK_NAME_REPLY");

    // 0x1039ba630, 96 bytes, __common; set at startup by ___cxx_global_var_init.606
    ServerProt ServerProt::JCOINS_UPDATE = ServerProt(156, 4, "JCOINS_UPDATE");

    // 0x1039ba690, 96 bytes, __common; set at startup by ___cxx_global_var_init.608
    ServerProt ServerProt::ENVIRONMENT_OVERRIDE = ServerProt(157, -1, "ENVIRONMENT_OVERRIDE");

    // 0x1039ba6f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.610
    ServerProt ServerProt::TELEMETRY_GRID_SET_ROW_PINNED = ServerProt(158, 3, "TELEMETRY_GRID_SET_ROW_PINNED");

    // 0x1039ba750, 96 bytes, __common; set at startup by ___cxx_global_var_init.612
    ServerProt ServerProt::STORE_SERVERPERM_VARCS_ACK = ServerProt(159, 0, "STORE_SERVERPERM_VARCS_ACK");

    // 0x1039ba7b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.614
    ServerProt ServerProt::SOUND_MIXBUSS_SETLEVEL = ServerProt(160, 4, "SOUND_MIXBUSS_SETLEVEL");

    // 0x1039ba810, 96 bytes, __common; set at startup by ___cxx_global_var_init.616
    ServerProt ServerProt::VORBIS_SOUND_GROUP_START = ServerProt(161, 2, "VORBIS_SOUND_GROUP_START");

    // 0x1039ba870, 96 bytes, __common; set at startup by ___cxx_global_var_init.618
    ServerProt ServerProt::SONG_PRELOAD = ServerProt(162, 4, "SONG_PRELOAD");

    // 0x1039ba8d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.620
    ServerProt ServerProt::TELEMETRY_GRID_VALUES_DELTA = ServerProt(163, -2, "TELEMETRY_GRID_VALUES_DELTA");

    // 0x1039ba930, 96 bytes, __common; set at startup by ___cxx_global_var_init.622
    ServerProt ServerProt::SHOW_FACE_HERE = ServerProt(164, 1, "SHOW_FACE_HERE");

    // 0x1039ba990, 96 bytes, __common; set at startup by ___cxx_global_var_init.624
    ServerProt ServerProt::VORBIS_SOUND_GROUP = ServerProt(165, 12, "VORBIS_SOUND_GROUP");

    // 0x1039ba9f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.626
    ServerProt ServerProt::SERVER_REPLY = ServerProt(166, -2, "SERVER_REPLY");

    // 0x1039baa50, 96 bytes, __common; set at startup by ___cxx_global_var_init.628
    ServerProt ServerProt::POINTLIGHT_COLOUR = ServerProt(167, 8, "POINTLIGHT_COLOUR");

    // 0x1039baab0, 96 bytes, __common; set at startup by ___cxx_global_var_init.630
    ServerProt ServerProt::MESSAGE_QUICKCHAT_PLAYER_GROUP = ServerProt(168, -1, "MESSAGE_QUICKCHAT_PLAYER_GROUP");

    // 0x1039bab10, 96 bytes, __common; set at startup by ___cxx_global_var_init.632
    ServerProt ServerProt::VORBIS_PRELOAD_SOUND_GROUP = ServerProt(169, 2, "VORBIS_PRELOAD_SOUND_GROUP");

    // 0x1039bab70, 96 bytes, __common; set at startup by ___cxx_global_var_init.634
    ServerProt ServerProt::TELEMETRY_GRID_MOVE_ROW = ServerProt(170, 3, "TELEMETRY_GRID_MOVE_ROW");

    // 0x1039babd0, 96 bytes, __common; set at startup by ___cxx_global_var_init.636
    ServerProt ServerProt::PLAYER_GROUP_DELTA = ServerProt(171, -2, "PLAYER_GROUP_DELTA");

    // 0x1039bac30, 96 bytes, __common; set at startup by ___cxx_global_var_init.638
    ServerProt ServerProt::VORBIS_SOUND_GROUP_STOP = ServerProt(172, 2, "VORBIS_SOUND_GROUP_STOP");

    // 0x1039bac90, 96 bytes, __common; set at startup by ___cxx_global_var_init.640
    ServerProt ServerProt::PLAYER_SNAPSHOT = ServerProt(173, -2, "PLAYER_SNAPSHOT");

    // 0x1039bacf0, 96 bytes, __common; set at startup by ___cxx_global_var_init.642
    ServerProt ServerProt::PLAYER_GROUP_VARPS = ServerProt(174, -2, "PLAYER_GROUP_VARPS");

    // 0x1039bad50, 96 bytes, __common; set at startup by ___cxx_global_var_init.644
    ServerProt ServerProt::CONSOLE_FEEDBACK = ServerProt(175, -2, "CONSOLE_FEEDBACK");

    // 0x1039badb0, 96 bytes, __common; set at startup by ___cxx_global_var_init.646
    ServerProt ServerProt::JS5_RELOAD = ServerProt(176, 0, "JS5_RELOAD");

    // 0x1039bae10, 96 bytes, __common; set at startup by ___cxx_global_var_init.648
    ServerProt ServerProt::IF_SETPLAYERMODEL_SNAPSHOT = ServerProt(177, 5, "IF_SETPLAYERMODEL_SNAPSHOT");

    // 0x1039bae70, 96 bytes, __common; set at startup by ___cxx_global_var_init.650
    ServerProt ServerProt::TEXT_COORD = ServerProt(178, -1, "TEXT_COORD");

    // 0x1039baed0, 96 bytes, __common; set at startup by ___cxx_global_var_init.652
    ServerProt ServerProt::TELEMETRY_GRID_ADD_COLUMN = ServerProt(179, 6, "TELEMETRY_GRID_ADD_COLUMN");

    // 0x1039baf30, 96 bytes, __common; set at startup by ___cxx_global_var_init.654
    ServerProt ServerProt::TELEMETRY_GRID_ADD_ROW = ServerProt(180, 6, "TELEMETRY_GRID_ADD_ROW");

    // 0x1039baf90, 96 bytes, __common; set at startup by ___cxx_global_var_init.656
    ServerProt ServerProt::PLAYER_GROUP_FULL = ServerProt(181, -2, "PLAYER_GROUP_FULL");

    // 0x1039baff0, 96 bytes, __common; set at startup by ___cxx_global_var_init.658
    ServerProt ServerProt::LOBBY_APPEARANCE = ServerProt(182, -2, "LOBBY_APPEARANCE");

    // 0x1039bb050, 96 bytes, __common; set at startup by ___cxx_global_var_init.660
    ServerProt ServerProt::POINTLIGHT_INTENSITYSCALE = ServerProt(183, 5, "POINTLIGHT_INTENSITYSCALE");

    // 0x1039bb0b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.662
    ServerProt ServerProt::SET_TARGET = ServerProt(184, 3, "SET_TARGET");

    // 0x1039bb110, 96 bytes, __common; set at startup by ___cxx_global_var_init.664
    ServerProt ServerProt::EXECUTE_CLIENT_CHEAT = ServerProt(185, 2, "EXECUTE_CLIENT_CHEAT");

    // 0x1039bb170, 96 bytes, __common; set at startup by ___cxx_global_var_init.666
    ServerProt ServerProt::NPC_HEADICON_SPECIFIC = ServerProt(186, 9, "NPC_HEADICON_SPECIFIC");

    // 0x1039bb1d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.668
    ServerProt ServerProt::CREATE_SUGGEST_NAME_ERROR = ServerProt(187, 1, "CREATE_SUGGEST_NAME_ERROR");

    // 0x1039bb230, 96 bytes, __common; set at startup by ___cxx_global_var_init.670
    ServerProt ServerProt::IF_SETRETEX = ServerProt(188, 9, "IF_SETRETEX");

    // 0x1039bb290, 96 bytes, __common; set at startup by ___cxx_global_var_init.672
    ServerProt ServerProt::TELEMETRY_CLEAR_GRID_VALUE = ServerProt(189, 3, "TELEMETRY_CLEAR_GRID_VALUE");

    // 0x1039bb2f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.674
    ServerProt ServerProt::SETDRAWORDER = ServerProt(190, 1, "SETDRAWORDER");

    // 0x1039bb350, 96 bytes, __common; set at startup by ___cxx_global_var_init.676
    ServerProt ServerProt::SERVER_TICK_END = ServerProt(191, 0, "SERVER_TICK_END");

    // 0x1039bb3b0, 96 bytes, __common; set at startup by ___cxx_global_var_init.678
    ServerProt ServerProt::CUTSCENE2D_PLAY = ServerProt(192, 2, "CUTSCENE2D_PLAY");

    // 0x1039bb410, 96 bytes, __common; set at startup by ___cxx_global_var_init.680
    ServerProt ServerProt::CREATE_SUGGEST_NAME_REPLY = ServerProt(193, -1, "CREATE_SUGGEST_NAME_REPLY");

    // 0x1039bb470, 96 bytes, __common; set at startup by ___cxx_global_var_init.682
    ServerProt ServerProt::TELEMETRY_GRID_REMOVE_GROUP = ServerProt(194, 1, "TELEMETRY_GRID_REMOVE_GROUP");

    // 0x1039bb4d0, 96 bytes, __common; set at startup by ___cxx_global_var_init.684
    ServerProt ServerProt::MIDI_SONG_STOP = ServerProt(195, 0, "MIDI_SONG_STOP");

    // 0x1039bb530, 96 bytes, __common; set at startup by ___cxx_global_var_init.686
    ServerProt ServerProt::IF_SETPLAYERHEAD_SNAPSHOT = ServerProt(196, 5, "IF_SETPLAYERHEAD_SNAPSHOT");

    // 0x1039bb590, 96 bytes, __common; set at startup by ___cxx_global_var_init.688
    ServerProt ServerProt::IF_SETOBJECT_LONG = ServerProt(197, 14, "IF_SETOBJECT_LONG");

    // 0x1039bb5f0, 96 bytes, __common; set at startup by ___cxx_global_var_init.690
    ServerProt ServerProt::VARP_LONG = ServerProt(198, 10, "VARP_LONG");

    // 0x1039bb650, 96 bytes, __common; set at startup by ___cxx_global_var_init.692
    ServerProt ServerProt::CLIENT_SETVARC_LONG = ServerProt(199, 10, "CLIENT_SETVARC_LONG");

    // 0x10049fb30: the linker folded this into ZoneProt::~ZoneProt(), which has identical code
    ServerProt::~ServerProt();

    // 0x1004a09d0: the linker folded this into ZoneProt::~ZoneProt(), which has identical code
    ServerProt::~ServerProt();

    // 0x1004a2c50, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ServerProt::ServerProt(int, int, char const*): jumps straight to the base-object constructor

    // 0x1004a3640, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketError::PacketError(PacketErrorType)
    void PacketError::PacketError(undefined4 param_2) {
        field_0 = param_2;
        new (&field_8) eastl::string();
    }

    // 0x1004a36b0, 176 bytes, base-object constructor, inline, placed by class name and debug map
    // ServerProt::ServerProt(int, int, char const*)
    void ServerProt::ServerProt(int param_1, int param_2, char* param_3) {
        int iVar1;
        ServerProt* local_28;

        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        std::function<PacketError_const&(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, int, Isaac*)>::function((
            function<PacketError_const&(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, int, Isaac*)>*)&field_16);
        field_64 = 0;
        field_72 = 0;
        field_80 = 0;
        field_88 = 0;
        iVar1 = m_typeLookup.size();
        if (iVar1 != param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("pType == (int)m_typeLookup.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/network/"
                      "protocol/ServerProt.h",
                      43, "ServerProt creation error");
        }
        local_28 = this;
        m_typeLookup.push_back(&local_28);
    }

    // 0x1004a41e0, 48 bytes, inline, placed by debug map only (low confidence)
    // ClientStream* placement_new<ClientStream, char const*, int const&, int const&, int const&, int const&, bool>(void*, char const*&&, int const&, int const&, int const&, int const&, bool&&)
    ClientStream* placement_new<ClientStream, char const*, int const&, int const&, int const&, int const&, bool>(
        void* param_1, char** param_2, int* param_3, int* param_4, int* param_5, int* param_6, bool* param_7) {
        ClientStream::ClientStream(param_1, *param_2, *param_3, *param_4, *param_5, *param_6, *param_7);
        return param_1;
    }

    // 0x1004a6590, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.297
    void ___cxx_global_var_init_297() {
        new (&ServerProt::m_typeLookup) eastl::fixed_vector<ServerProt_const*, 200ul, true, eastl::allocator>();
        ___cxa_atexit(PTR__fixed_vector_100ee6cc0, &ServerProt::m_typeLookup, 4294967296);
    }

    // 0x1004a65d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.298
    void ___cxx_global_var_init_298() {
        new (&ServerProt::UPDATE_RUNWEIGHT) ServerProt(0, 2, "UPDATE_RUNWEIGHT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_RUNWEIGHT, 4294967296);
    }

    // 0x1004a6610, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.300
    void ___cxx_global_var_init_300() {
        new (&ServerProt::MESSAGE_QUICKCHAT_FRIENDCHAT) ServerProt(1, -1, "MESSAGE_QUICKCHAT_FRIENDCHAT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MESSAGE_QUICKCHAT_FRIENDCHAT, 4294967296);
    }

    // 0x1004a6660, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.302
    void ___cxx_global_var_init_302() {
        new (&ServerProt::CLANCHANNEL_DELTA) ServerProt(2, -2, "CLANCHANNEL_DELTA");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CLANCHANNEL_DELTA, 4294967296);
    }

    // 0x1004a66b0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.304
    void ___cxx_global_var_init_304() {
        new (&ServerProt::OBJ_ADD) ServerProt(3, 5, "OBJ_ADD");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::OBJ_ADD, 4294967296);
    }

    // 0x1004a6700, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.306
    void ___cxx_global_var_init_306() {
        new (&ServerProt::UPDATE_STAT) ServerProt(4, 6, "UPDATE_STAT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_STAT, 4294967296);
    }

    // 0x1004a6750, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.308
    void ___cxx_global_var_init_308() {
        new (&ServerProt::IF_OPENSUB_ACTIVE_LOC) ServerProt(5, 32, "IF_OPENSUB_ACTIVE_LOC");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_OPENSUB_ACTIVE_LOC, 4294967296);
    }

    // 0x1004a67a0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.310
    void ___cxx_global_var_init_310() {
        new (&ServerProt::DEBUG_SERVER_TRIGGERS) ServerProt(6, -1, "DEBUG_SERVER_TRIGGERS");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::DEBUG_SERVER_TRIGGERS, 4294967296);
    }

    // 0x1004a67f0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.312
    void ___cxx_global_var_init_312() {
        new (&ServerProt::HINT_ARROW) ServerProt(7, 14, "HINT_ARROW");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::HINT_ARROW, 4294967296);
    }

    // 0x1004a6840, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.314
    void ___cxx_global_var_init_314() {
        new (&ServerProt::NPC_ANIM_SPECIFIC) ServerProt(8, 19, "NPC_ANIM_SPECIFIC");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::NPC_ANIM_SPECIFIC, 4294967296);
    }

    // 0x1004a6890, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.316
    void ___cxx_global_var_init_316() {
        new (&ServerProt::PLAYER_INFO) ServerProt(9, -2, "PLAYER_INFO");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::PLAYER_INFO, 4294967296);
    }

    // 0x1004a68e0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.318
    void ___cxx_global_var_init_318() {
        new (&ServerProt::CHAT_FILTER_SETTINGS) ServerProt(10, 2, "CHAT_FILTER_SETTINGS");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CHAT_FILTER_SETTINGS, 4294967296);
    }

    // 0x1004a6930, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.320
    void ___cxx_global_var_init_320() {
        new (&ServerProt::REFLECTION_CHECKER) ServerProt(11, -2, "REFLECTION_CHECKER");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::REFLECTION_CHECKER, 4294967296);
    }

    // 0x1004a6980, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.322
    void ___cxx_global_var_init_322() {
        new (&ServerProt::MESSAGE_CLANCHANNEL_SYSTEM) ServerProt(12, -1, "MESSAGE_CLANCHANNEL_SYSTEM");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MESSAGE_CLANCHANNEL_SYSTEM, 4294967296);
    }

    // 0x1004a69d0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.324
    void ___cxx_global_var_init_324() {
        new (&ServerProt::UPDATE_RUNENERGY) ServerProt(13, 1, "UPDATE_RUNENERGY");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_RUNENERGY, 4294967296);
    }

    // 0x1004a6a20, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.326
    void ___cxx_global_var_init_326() {
        new (&ServerProt::CLANCHANNEL_FULL) ServerProt(14, -2, "CLANCHANNEL_FULL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CLANCHANNEL_FULL, 4294967296);
    }

    // 0x1004a6a70, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.328
    void ___cxx_global_var_init_328() {
        new (&ServerProt::FRIENDLIST_LOADED) ServerProt(15, 0, "FRIENDLIST_LOADED");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::FRIENDLIST_LOADED, 4294967296);
    }

    // 0x1004a6ab0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.330
    void ___cxx_global_var_init_330() {
        new (&ServerProt::RESET_ANIMS) ServerProt(16, 0, "RESET_ANIMS");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::RESET_ANIMS, 4294967296);
    }

    // 0x1004a6af0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.332
    void ___cxx_global_var_init_332() {
        new (&ServerProt::IF_SETSCROLLPOS) ServerProt(17, 6, "IF_SETSCROLLPOS");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETSCROLLPOS, 4294967296);
    }

    // 0x1004a6b40, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.334
    void ___cxx_global_var_init_334() {
        new (&ServerProt::IF_SETEVENTS) ServerProt(18, 12, "IF_SETEVENTS");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETEVENTS, 4294967296);
    }

    // 0x1004a6b90, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.336
    void ___cxx_global_var_init_336() {
        new (&ServerProt::MIDI_SONG_LOCATION) ServerProt(19, 11, "MIDI_SONG_LOCATION");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MIDI_SONG_LOCATION, 4294967296);
    }

    // 0x1004a6be0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.338
    void ___cxx_global_var_init_338() {
        new (&ServerProt::IF_SETOBJECT) ServerProt(20, 10, "IF_SETOBJECT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETOBJECT, 4294967296);
    }

    // 0x1004a6c30, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.340
    void ___cxx_global_var_init_340() {
        new (&ServerProt::UPDATE_ZONE_FULL_FOLLOWS) ServerProt(21, 3, "UPDATE_ZONE_FULL_FOLLOWS");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_ZONE_FULL_FOLLOWS, 4294967296);
    }

    // 0x1004a6c80, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.342
    void ___cxx_global_var_init_342() {
        new (&ServerProt::UPDATE_ZONE_PARTIAL_ENCLOSED) ServerProt(22, -2, "UPDATE_ZONE_PARTIAL_ENCLOSED");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_ZONE_PARTIAL_ENCLOSED, 4294967296);
    }

    // 0x1004a6cd0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.344
    void ___cxx_global_var_init_344() {
        new (&ServerProt::CLIENT_SETVARC_LARGE) ServerProt(23, 6, "CLIENT_SETVARC_LARGE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CLIENT_SETVARC_LARGE, 4294967296);
    }

    // 0x1004a6d20, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.346
    void ___cxx_global_var_init_346() {
        new (&ServerProt::MESSAGE_FRIENDCHANNEL) ServerProt(24, -1, "MESSAGE_FRIENDCHANNEL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MESSAGE_FRIENDCHANNEL, 4294967296);
    }

    // 0x1004a6d70, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.348
    void ___cxx_global_var_init_348() {
        new (&ServerProt::CAM_MOVETO) ServerProt(25, 6, "CAM_MOVETO");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CAM_MOVETO, 4294967296);
    }

    // 0x1004a6dc0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.350
    void ___cxx_global_var_init_350() {
        new (&ServerProt::VARBIT_SMALL) ServerProt(26, 3, "VARBIT_SMALL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VARBIT_SMALL, 4294967296);
    }

    // 0x1004a6e10, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.352
    void ___cxx_global_var_init_352() {
        new (&ServerProt::IF_SETANIM) ServerProt(27, 8, "IF_SETANIM");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETANIM, 4294967296);
    }

    // 0x1004a6e60, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.354
    void ___cxx_global_var_init_354() {
        new (&ServerProt::CLIENT_SETVARCBIT_LARGE) ServerProt(28, 6, "CLIENT_SETVARCBIT_LARGE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CLIENT_SETVARCBIT_LARGE, 4294967296);
    }

    // 0x1004a6eb0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.356
    void ___cxx_global_var_init_356() {
        new (&ServerProt::CAM_FORCEANGLE) ServerProt(29, 4, "CAM_FORCEANGLE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CAM_FORCEANGLE, 4294967296);
    }

    // 0x1004a6f00, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.358
    void ___cxx_global_var_init_358() {
        new (&ServerProt::CLIENT_SETVARCBIT_SMALL) ServerProt(30, 3, "CLIENT_SETVARCBIT_SMALL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CLIENT_SETVARCBIT_SMALL, 4294967296);
    }

    // 0x1004a6f50, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.360
    void ___cxx_global_var_init_360() {
        new (&ServerProt::CLANSETTINGS_FULL) ServerProt(31, -2, "CLANSETTINGS_FULL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CLANSETTINGS_FULL, 4294967296);
    }

    // 0x1004a6fa0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.362
    void ___cxx_global_var_init_362() {
        new (&ServerProt::CLIENT_SETVARCSTR_SMALL) ServerProt(32, -1, "CLIENT_SETVARCSTR_SMALL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CLIENT_SETVARCSTR_SMALL, 4294967296);
    }

    // 0x1004a6ff0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.364
    void ___cxx_global_var_init_364() {
        new (&ServerProt::MIDI_SONG) ServerProt(33, 5, "MIDI_SONG");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MIDI_SONG, 4294967296);
    }

    // 0x1004a7040, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.366
    void ___cxx_global_var_init_366() {
        new (&ServerProt::SOUND_AREA) ServerProt(34, 10, "SOUND_AREA");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SOUND_AREA, 4294967296);
    }

    // 0x1004a7090, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.368
    void ___cxx_global_var_init_368() {
        new (&ServerProt::VARP_SMALL) ServerProt(35, 3, "VARP_SMALL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VARP_SMALL, 4294967296);
    }

    // 0x1004a70e0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.370
    void ___cxx_global_var_init_370() {
        new (&ServerProt::MESSAGE_PRIVATE_ECHO) ServerProt(36, -2, "MESSAGE_PRIVATE_ECHO");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MESSAGE_PRIVATE_ECHO, 4294967296);
    }

    // 0x1004a7130, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.372
    void ___cxx_global_var_init_372() {
        new (&ServerProt::IF_OPENTOP) ServerProt(37, 19, "IF_OPENTOP");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_OPENTOP, 4294967296);
    }

    // 0x1004a7180, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.374
    void ___cxx_global_var_init_374() {
        new (&ServerProt::CLANSETTINGS_DELTA) ServerProt(38, -2, "CLANSETTINGS_DELTA");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CLANSETTINGS_DELTA, 4294967296);
    }

    // 0x1004a71d0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.376
    void ___cxx_global_var_init_376() {
        new (&ServerProt::IF_OPENSUB_ACTIVE_OBJ) ServerProt(39, 29, "IF_OPENSUB_ACTIVE_OBJ");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_OPENSUB_ACTIVE_OBJ, 4294967296);
    }

    // 0x1004a7220, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.378
    void ___cxx_global_var_init_378() {
        new (&ServerProt::VARCLAN) ServerProt(40, -1, "VARCLAN");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VARCLAN, 4294967296);
    }

    // 0x1004a7270, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.380
    void ___cxx_global_var_init_380() {
        new (&ServerProt::UPDATE_ZONE_PARTIAL_FOLLOWS) ServerProt(41, 3, "UPDATE_ZONE_PARTIAL_FOLLOWS");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_ZONE_PARTIAL_FOLLOWS, 4294967296);
    }

    // 0x1004a72c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.382
    void ___cxx_global_var_init_382() {
        new (&ServerProt::TRIGGER_ONDIALOGABORT) ServerProt(42, 0, "TRIGGER_ONDIALOGABORT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TRIGGER_ONDIALOGABORT, 4294967296);
    }

    // 0x1004a7300, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.384
    void ___cxx_global_var_init_384() {
        new (&ServerProt::MESSAGE_CLANCHANNEL) ServerProt(43, -1, "MESSAGE_CLANCHANNEL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MESSAGE_CLANCHANNEL, 4294967296);
    }

    // 0x1004a7350, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.386
    void ___cxx_global_var_init_386() {
        new (&ServerProt::UPDATE_IGNORELIST) ServerProt(44, -2, "UPDATE_IGNORELIST");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_IGNORELIST, 4294967296);
    }

    // 0x1004a73a0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.388
    void ___cxx_global_var_init_388() {
        new (&ServerProt::LOC_DEL) ServerProt(45, 2, "LOC_DEL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::LOC_DEL, 4294967296);
    }

    // 0x1004a73f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.390
    void ___cxx_global_var_init_390() {
        new (&ServerProt::CAM_RESET) ServerProt(46, 0, "CAM_RESET");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CAM_RESET, 4294967296);
    }

    // 0x1004a7430, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.392
    void ___cxx_global_var_init_392() {
        new (&ServerProt::IF_SETTEXT) ServerProt(47, -2, "IF_SETTEXT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETTEXT, 4294967296);
    }

    // 0x1004a7480, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.394
    void ___cxx_global_var_init_394() {
        new (&ServerProt::OBJ_REVEAL) ServerProt(48, 7, "OBJ_REVEAL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::OBJ_REVEAL, 4294967296);
    }

    // 0x1004a74d0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.396
    void ___cxx_global_var_init_396() {
        new (&ServerProt::SET_MAP_FLAG) ServerProt(49, 10, "SET_MAP_FLAG");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SET_MAP_FLAG, 4294967296);
    }

    // 0x1004a7520, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.398
    void ___cxx_global_var_init_398() {
        new (&ServerProt::IF_SET_HTTP_IMAGE) ServerProt(50, 8, "IF_SET_HTTP_IMAGE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SET_HTTP_IMAGE, 4294967296);
    }

    // 0x1004a7570, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.400
    void ___cxx_global_var_init_400() {
        new (&ServerProt::VARBIT_LARGE) ServerProt(51, 6, "VARBIT_LARGE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VARBIT_LARGE, 4294967296);
    }

    // 0x1004a75c0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.402
    void ___cxx_global_var_init_402() {
        new (&ServerProt::MAP_PROJANIM) ServerProt(52, 20, "MAP_PROJANIM");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MAP_PROJANIM, 4294967296);
    }

    // 0x1004a7610, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.404
    void ___cxx_global_var_init_404() {
        new (&ServerProt::LOC_ANIM) ServerProt(53, 7, "LOC_ANIM");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::LOC_ANIM, 4294967296);
    }

    // 0x1004a7660, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.406
    void ___cxx_global_var_init_406() {
        new (&ServerProt::MAP_ANIM) ServerProt(54, 11, "MAP_ANIM");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MAP_ANIM, 4294967296);
    }

    // 0x1004a76b0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.408
    void ___cxx_global_var_init_408() {
        new (&ServerProt::UPDATE_INV_STOP_TRANSMIT) ServerProt(55, 3, "UPDATE_INV_STOP_TRANSMIT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_INV_STOP_TRANSMIT, 4294967296);
    }

    // 0x1004a7700, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.410
    void ___cxx_global_var_init_410() {
        new (&ServerProt::VORBIS_SOUND) ServerProt(56, 10, "VORBIS_SOUND");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VORBIS_SOUND, 4294967296);
    }

    // 0x1004a7750, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.412
    void ___cxx_global_var_init_412() {
        new (&ServerProt::SET_PLAYER_OP) ServerProt(57, -1, "SET_PLAYER_OP");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SET_PLAYER_OP, 4294967296);
    }

    // 0x1004a77a0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.414
    void ___cxx_global_var_init_414() {
        new (&ServerProt::MESSAGE_GAME) ServerProt(58, -1, "MESSAGE_GAME");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MESSAGE_GAME, 4294967296);
    }

    // 0x1004a77f0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.416
    void ___cxx_global_var_init_416() {
        new (&ServerProt::LOGOUT) ServerProt(59, 1, "LOGOUT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::LOGOUT, 4294967296);
    }

    // 0x1004a7840, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.418
    void ___cxx_global_var_init_418() {
        new (&ServerProt::LOC_CUSTOMISE) ServerProt(60, -1, "LOC_CUSTOMISE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::LOC_CUSTOMISE, 4294967296);
    }

    // 0x1004a7890, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.420
    void ___cxx_global_var_init_420() {
        new (&ServerProt::CAM_REMOVEROOF) ServerProt(61, 4, "CAM_REMOVEROOF");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CAM_REMOVEROOF, 4294967296);
    }

    // 0x1004a78e0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.422
    void ___cxx_global_var_init_422() {
        new (&ServerProt::IF_SETCOLOUR) ServerProt(62, 6, "IF_SETCOLOUR");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETCOLOUR, 4294967296);
    }

    // 0x1004a7930, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.424
    void ___cxx_global_var_init_424() {
        new (&ServerProt::IF_SETPOSITION) ServerProt(63, 8, "IF_SETPOSITION");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETPOSITION, 4294967296);
    }

    // 0x1004a7980, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.426
    void ___cxx_global_var_init_426() {
        new (&ServerProt::IF_SETPLAYERHEAD) ServerProt(64, 4, "IF_SETPLAYERHEAD");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETPLAYERHEAD, 4294967296);
    }

    // 0x1004a79d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.428
    void ___cxx_global_var_init_428() {
        new (&ServerProt::VARCLAN_ENABLE) ServerProt(65, 0, "VARCLAN_ENABLE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VARCLAN_ENABLE, 4294967296);
    }

    // 0x1004a7a10, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.430
    void ___cxx_global_var_init_430() {
        new (&ServerProt::LAST_LOGIN_INFO) ServerProt(66, 4, "LAST_LOGIN_INFO");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::LAST_LOGIN_INFO, 4294967296);
    }

    // 0x1004a7a60, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.432
    void ___cxx_global_var_init_432() {
        new (&ServerProt::CAM2_ENABLE) ServerProt(67, 1, "CAM2_ENABLE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CAM2_ENABLE, 4294967296);
    }

    // 0x1004a7ab0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.434
    void ___cxx_global_var_init_434() {
        new (&ServerProt::IF_SETPLAYERHEAD_IGNOREWORN) ServerProt(68, 10, "IF_SETPLAYERHEAD_IGNOREWORN");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETPLAYERHEAD_IGNOREWORN, 4294967296);
    }

    // 0x1004a7b00, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.436
    void ___cxx_global_var_init_436() {
        new (&ServerProt::IF_SETHIDE) ServerProt(69, 5, "IF_SETHIDE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETHIDE, 4294967296);
    }

    // 0x1004a7b50, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.438
    void ___cxx_global_var_init_438() {
        new (&ServerProt::MESSAGE_PUBLIC) ServerProt(70, -1, "MESSAGE_PUBLIC");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MESSAGE_PUBLIC, 4294967296);
    }

    // 0x1004a7ba0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.439
    void ___cxx_global_var_init_439() {
        new (&ServerProt::IF_SETPLAYERMODEL_SELF) ServerProt(71, 4, "IF_SETPLAYERMODEL_SELF");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETPLAYERMODEL_SELF, 4294967296);
    }

    // 0x1004a7bf0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.441
    void ___cxx_global_var_init_441() {
        new (&ServerProt::SYNTH_SOUND) ServerProt(72, 10, "SYNTH_SOUND");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SYNTH_SOUND, 4294967296);
    }

    // 0x1004a7c40, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.443
    void ___cxx_global_var_init_443() {
        new (&ServerProt::IF_SETNPCHEAD) ServerProt(73, 8, "IF_SETNPCHEAD");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETNPCHEAD, 4294967296);
    }

    // 0x1004a7c90, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.445
    void ___cxx_global_var_init_445() {
        new (&ServerProt::MESSAGE_QUICKCHAT_PRIVATE) ServerProt(74, -1, "MESSAGE_QUICKCHAT_PRIVATE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MESSAGE_QUICKCHAT_PRIVATE, 4294967296);
    }

    // 0x1004a7ce0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.446
    void ___cxx_global_var_init_446() {
        new (&ServerProt::CAM_SHAKE) ServerProt(75, 6, "CAM_SHAKE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CAM_SHAKE, 4294967296);
    }

    // 0x1004a7d30, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.448
    void ___cxx_global_var_init_448() {
        new (&ServerProt::LOC_ANIM_SPECIFIC) ServerProt(76, 10, "LOC_ANIM_SPECIFIC");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::LOC_ANIM_SPECIFIC, 4294967296);
    }

    // 0x1004a7d80, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.450
    void ___cxx_global_var_init_450() {
        new (&ServerProt::IF_SETTEXTFONT) ServerProt(77, 8, "IF_SETTEXTFONT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETTEXTFONT, 4294967296);
    }

    // 0x1004a7dd0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.452
    void ___cxx_global_var_init_452() {
        new (&ServerProt::HINT_TRAIL) ServerProt(78, -2, "HINT_TRAIL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::HINT_TRAIL, 4294967296);
    }

    // 0x1004a7e20, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.454
    void ___cxx_global_var_init_454() {
        new (&ServerProt::MINIMAP_TOGGLE) ServerProt(79, 1, "MINIMAP_TOGGLE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MINIMAP_TOGGLE, 4294967296);
    }

    // 0x1004a7e70, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.456
    void ___cxx_global_var_init_456() {
        new (&ServerProt::UPDATE_INV_PARTIAL) ServerProt(80, -2, "UPDATE_INV_PARTIAL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_INV_PARTIAL, 4294967296);
    }

    // 0x1004a7ec0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.458
    void ___cxx_global_var_init_458() {
        new (&ServerProt::RESET_CLIENT_VARCACHE) ServerProt(81, 0, "RESET_CLIENT_VARCACHE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::RESET_CLIENT_VARCACHE, 4294967296);
    }

    // 0x1004a7f00, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.460
    void ___cxx_global_var_init_460() {
        new (&ServerProt::UPDATE_FRIENDCHAT_CHANNEL_SINGLEUSER)
            ServerProt(82, -1, "UPDATE_FRIENDCHAT_CHANNEL_SINGLEUSER");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_FRIENDCHAT_CHANNEL_SINGLEUSER, 4294967296);
    }

    // 0x1004a7f50, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.462
    void ___cxx_global_var_init_462() {
        new (&ServerProt::IF_MOVESUB) ServerProt(83, 8, "IF_MOVESUB");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_MOVESUB, 4294967296);
    }

    // 0x1004a7fa0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.464
    void ___cxx_global_var_init_464() {
        new (&ServerProt::IF_OPENSUB) ServerProt(84, 23, "IF_OPENSUB");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_OPENSUB, 4294967296);
    }

    // 0x1004a7ff0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.466
    void ___cxx_global_var_init_466() {
        new (&ServerProt::CLIENT_SETVARCSTR_LARGE) ServerProt(85, -2, "CLIENT_SETVARCSTR_LARGE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CLIENT_SETVARCSTR_LARGE, 4294967296);
    }

    // 0x1004a8040, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.468
    void ___cxx_global_var_init_468() {
        new (&ServerProt::CHAT_FILTER_SETTINGS_PRIVATECHAT) ServerProt(86, 1, "CHAT_FILTER_SETTINGS_PRIVATECHAT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CHAT_FILTER_SETTINGS_PRIVATECHAT, 4294967296);
    }

    // 0x1004a8090, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.470
    void ___cxx_global_var_init_470() {
        new (&ServerProt::UPDATE_INV_FULL) ServerProt(87, -2, "UPDATE_INV_FULL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_INV_FULL, 4294967296);
    }

    // 0x1004a80e0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.472
    void ___cxx_global_var_init_472() {
        new (&ServerProt::OBJ_DEL) ServerProt(88, 3, "OBJ_DEL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::OBJ_DEL, 4294967296);
    }

    // 0x1004a8130, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.474
    void ___cxx_global_var_init_474() {
        new (&ServerProt::UPDATE_STOCKMARKET_SLOT) ServerProt(89, 35, "UPDATE_STOCKMARKET_SLOT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_STOCKMARKET_SLOT, 4294967296);
    }

    // 0x1004a8180, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.476
    void ___cxx_global_var_init_476() {
        new (&ServerProt::UPDATE_UID192) ServerProt(90, 28, "UPDATE_UID192");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_UID192, 4294967296);
    }

    // 0x1004a81d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.478
    void ___cxx_global_var_init_478() {
        new (&ServerProt::CAM_SMOOTHRESET) ServerProt(91, 0, "CAM_SMOOTHRESET");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CAM_SMOOTHRESET, 4294967296);
    }

    // 0x1004a8210, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.480
    void ___cxx_global_var_init_480() {
        new (&ServerProt::VARP_LARGE) ServerProt(92, 6, "VARP_LARGE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VARP_LARGE, 4294967296);
    }

    // 0x1004a8260, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.482
    void ___cxx_global_var_init_482() {
        new (&ServerProt::IF_CLOSESUB) ServerProt(93, 4, "IF_CLOSESUB");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_CLOSESUB, 4294967296);
    }

    // 0x1004a82b0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.484
    void ___cxx_global_var_init_484() {
        new (&ServerProt::IF_SETANGLE) ServerProt(94, 10, "IF_SETANGLE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETANGLE, 4294967296);
    }

    // 0x1004a8300, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.486
    void ___cxx_global_var_init_486() {
        new (&ServerProt::UPDATE_FRIENDLIST) ServerProt(95, -2, "UPDATE_FRIENDLIST");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_FRIENDLIST, 4294967296);
    }

    // 0x1004a8350, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.488
    void ___cxx_global_var_init_488() {
        new (&ServerProt::CAM_LOOKAT) ServerProt(96, 6, "CAM_LOOKAT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CAM_LOOKAT, 4294967296);
    }

    // 0x1004a83a0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.490
    void ___cxx_global_var_init_490() {
        new (&ServerProt::PROJANIM_SPECIFIC) ServerProt(97, 25, "PROJANIM_SPECIFIC");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::PROJANIM_SPECIFIC, 4294967296);
    }

    // 0x1004a83f0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.492
    void ___cxx_global_var_init_492() {
        new (&ServerProt::REBUILD_REGION) ServerProt(98, -2, "REBUILD_REGION");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::REBUILD_REGION, 4294967296);
    }

    // 0x1004a8440, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.494
    void ___cxx_global_var_init_494() {
        new (&ServerProt::MIDI_JINGLE) ServerProt(99, 5, "MIDI_JINGLE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MIDI_JINGLE, 4294967296);
    }

    // 0x1004a8490, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.496
    void ___cxx_global_var_init_496() {
        new (&ServerProt::UPDATE_FRIENDCHAT_CHANNEL_FULL) ServerProt(100, -2, "UPDATE_FRIENDCHAT_CHANNEL_FULL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_FRIENDCHAT_CHANNEL_FULL, 4294967296);
    }

    // 0x1004a84e0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.498
    void ___cxx_global_var_init_498() {
        new (&ServerProt::IF_SETTARGETPARAM) ServerProt(101, 10, "IF_SETTARGETPARAM");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETTARGETPARAM, 4294967296);
    }

    // 0x1004a8530, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.500
    void ___cxx_global_var_init_500() {
        new (&ServerProt::IF_SETMODEL) ServerProt(102, 8, "IF_SETMODEL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETMODEL, 4294967296);
    }

    // 0x1004a8580, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.502
    void ___cxx_global_var_init_502() {
        new (&ServerProt::LOGOUT_FULL) ServerProt(103, 1, "LOGOUT_FULL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::LOGOUT_FULL, 4294967296);
    }

    // 0x1004a85d0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.504
    void ___cxx_global_var_init_504() {
        new (&ServerProt::LOC_ADD_CHANGE) ServerProt(104, -1, "LOC_ADD_CHANGE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::LOC_ADD_CHANGE, 4294967296);
    }

    // 0x1004a8620, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.506
    void ___cxx_global_var_init_506() {
        new (&ServerProt::IF_SETGRAPHIC) ServerProt(105, 8, "IF_SETGRAPHIC");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETGRAPHIC, 4294967296);
    }

    // 0x1004a8670, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.508
    void ___cxx_global_var_init_508() {
        new (&ServerProt::IF_SETPLAYERHEAD_OTHER) ServerProt(106, 10, "IF_SETPLAYERHEAD_OTHER");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETPLAYERHEAD_OTHER, 4294967296);
    }

    // 0x1004a86c0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.510
    void ___cxx_global_var_init_510() {
        new (&ServerProt::NPC_INFO) ServerProt(107, -2, "NPC_INFO");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::NPC_INFO, 4294967296);
    }

    // 0x1004a8710, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.512
    void ___cxx_global_var_init_512() {
        new (&ServerProt::SET_MOVEACTION) ServerProt(108, -1, "SET_MOVEACTION");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SET_MOVEACTION, 4294967296);
    }

    // 0x1004a8760, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.514
    void ___cxx_global_var_init_514() {
        new (&ServerProt::MESSAGE_QUICKCHAT_PRIVATE_ECHO) ServerProt(109, -1, "MESSAGE_QUICKCHAT_PRIVATE_ECHO");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MESSAGE_QUICKCHAT_PRIVATE_ECHO, 4294967296);
    }

    // 0x1004a87b0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.516
    void ___cxx_global_var_init_516() {
        new (&ServerProt::IF_SETPLAYERMODEL_OTHER) ServerProt(110, 10, "IF_SETPLAYERMODEL_OTHER");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETPLAYERMODEL_OTHER, 4294967296);
    }

    // 0x1004a8800, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.518
    void ___cxx_global_var_init_518() {
        new (&ServerProt::OBJ_COUNT) ServerProt(111, 7, "OBJ_COUNT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::OBJ_COUNT, 4294967296);
    }

    // 0x1004a8850, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.520
    void ___cxx_global_var_init_520() {
        new (&ServerProt::SPOTANIM_SPECIFIC) ServerProt(112, 12, "SPOTANIM_SPECIFIC");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SPOTANIM_SPECIFIC, 4294967296);
    }

    // 0x1004a88a0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.522
    void ___cxx_global_var_init_522() {
        new (&ServerProt::UPDATE_REBOOT_TIMER) ServerProt(113, 2, "UPDATE_REBOOT_TIMER");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_REBOOT_TIMER, 4294967296);
    }

    // 0x1004a88f0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.524
    void ___cxx_global_var_init_524() {
        new (&ServerProt::MESSAGE_QUICKCHAT_CLANCHANNEL) ServerProt(114, -1, "MESSAGE_QUICKCHAT_CLANCHANNEL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MESSAGE_QUICKCHAT_CLANCHANNEL, 4294967296);
    }

    // 0x1004a8940, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.526
    void ___cxx_global_var_init_526() {
        new (&ServerProt::IF_OPENSUB_ACTIVE_PLAYER) ServerProt(115, 25, "IF_OPENSUB_ACTIVE_PLAYER");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_OPENSUB_ACTIVE_PLAYER, 4294967296);
    }

    // 0x1004a8990, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.528
    void ___cxx_global_var_init_528() {
        new (&ServerProt::IF_OPENSUB_ACTIVE_NPC) ServerProt(116, 25, "IF_OPENSUB_ACTIVE_NPC");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_OPENSUB_ACTIVE_NPC, 4294967296);
    }

    // 0x1004a89e0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.530
    void ___cxx_global_var_init_530() {
        new (&ServerProt::MESSAGE_PRIVATE) ServerProt(117, -2, "MESSAGE_PRIVATE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MESSAGE_PRIVATE, 4294967296);
    }

    // 0x1004a8a30, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.531
    void ___cxx_global_var_init_531() {
        new (&ServerProt::CAMERA_UPDATE) ServerProt(118, -2, "CAMERA_UPDATE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CAMERA_UPDATE, 4294967296);
    }

    // 0x1004a8a80, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.533
    void ___cxx_global_var_init_533() {
        new (&ServerProt::VORBIS_SPEECH_STOP) ServerProt(119, 0, "VORBIS_SPEECH_STOP");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VORBIS_SPEECH_STOP, 4294967296);
    }

    // 0x1004a8ac0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.535
    void ___cxx_global_var_init_535() {
        new (&ServerProt::VARCLAN_DISABLE) ServerProt(120, 0, "VARCLAN_DISABLE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VARCLAN_DISABLE, 4294967296);
    }

    // 0x1004a8b00, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.537
    void ___cxx_global_var_init_537() {
        new (&ServerProt::IF_SETTEXTANTIMACRO) ServerProt(121, 5, "IF_SETTEXTANTIMACRO");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETTEXTANTIMACRO, 4294967296);
    }

    // 0x1004a8b50, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.539
    void ___cxx_global_var_init_539() {
        new (&ServerProt::REBUILD_NORMAL) ServerProt(122, -2, "REBUILD_NORMAL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::REBUILD_NORMAL, 4294967296);
    }

    // 0x1004a8ba0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.541
    void ___cxx_global_var_init_541() {
        new (&ServerProt::CLIENT_SETVARC_SMALL) ServerProt(123, 3, "CLIENT_SETVARC_SMALL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CLIENT_SETVARC_SMALL, 4294967296);
    }

    // 0x1004a8bf0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.543
    void ___cxx_global_var_init_543() {
        new (&ServerProt::URL_OPEN) ServerProt(124, -2, "URL_OPEN");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::URL_OPEN, 4294967296);
    }

    // 0x1004a8c40, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.545
    void ___cxx_global_var_init_545() {
        new (&ServerProt::UPDATE_SITESETTINGS) ServerProt(125, -1, "UPDATE_SITESETTINGS");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_SITESETTINGS, 4294967296);
    }

    // 0x1004a8c90, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.547
    void ___cxx_global_var_init_547() {
        new (&ServerProt::VORBIS_SPEECH_SOUND) ServerProt(126, 8, "VORBIS_SPEECH_SOUND");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VORBIS_SPEECH_SOUND, 4294967296);
    }

    // 0x1004a8ce0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.549
    void ___cxx_global_var_init_549() {
        new (&ServerProt::RUNCLIENTSCRIPT) ServerProt(127, -2, "RUNCLIENTSCRIPT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::RUNCLIENTSCRIPT, 4294967296);
    }

    // 0x1004a8d30, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.551
    void ___cxx_global_var_init_551() {
        new (&ServerProt::TELEMETRY_GRID_REMOVE_ROW) ServerProt(128, 2, "TELEMETRY_GRID_REMOVE_ROW");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TELEMETRY_GRID_REMOVE_ROW, 4294967296);
    }

    // 0x1004a8d80, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.553
    void ___cxx_global_var_init_553() {
        new (&ServerProt::LOC_PREFETCH) ServerProt(129, 5, "LOC_PREFETCH");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::LOC_PREFETCH, 4294967296);
    }

    // 0x1004a8dd0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.555
    void ___cxx_global_var_init_555() {
        new (&ServerProt::CUTSCENE) ServerProt(130, -2, "CUTSCENE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CUTSCENE, 4294967296);
    }

    // 0x1004a8e20, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.557
    void ___cxx_global_var_init_557() {
        new (&ServerProt::IF_SETCLICKMASK) ServerProt(131, 5, "IF_SETCLICKMASK");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETCLICKMASK, 4294967296);
    }

    // 0x1004a8e70, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.559
    void ___cxx_global_var_init_559() {
        new (&ServerProt::SOUND_MIXBUSS_ADD) ServerProt(132, 6, "SOUND_MIXBUSS_ADD");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SOUND_MIXBUSS_ADD, 4294967296);
    }

    // 0x1004a8ec0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.561
    void ___cxx_global_var_init_561() {
        new (&ServerProt::TELEMETRY_GRID_REMOVE_COLUMN) ServerProt(133, 2, "TELEMETRY_GRID_REMOVE_COLUMN");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TELEMETRY_GRID_REMOVE_COLUMN, 4294967296);
    }

    // 0x1004a8f10, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.563
    void ___cxx_global_var_init_563() {
        new (&ServerProt::NO_TIMEOUT) ServerProt(134, 0, "NO_TIMEOUT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::NO_TIMEOUT, 4294967296);
    }

    // 0x1004a8f50, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.564
    void ___cxx_global_var_init_564() {
        new (&ServerProt::TELEMETRY_GRID_MOVE_COLUMN) ServerProt(135, 3, "TELEMETRY_GRID_MOVE_COLUMN");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TELEMETRY_GRID_MOVE_COLUMN, 4294967296);
    }

    // 0x1004a8fa0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.566
    void ___cxx_global_var_init_566() {
        new (&ServerProt::MESSAGE_PLAYER_GROUP) ServerProt(136, -1, "MESSAGE_PLAYER_GROUP");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MESSAGE_PLAYER_GROUP, 4294967296);
    }

    // 0x1004a8ff0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.568
    void ___cxx_global_var_init_568() {
        new (&ServerProt::SET_NPC_ATTACK_PRIORITY) ServerProt(137, 1, "SET_NPC_ATTACK_PRIORITY");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SET_NPC_ATTACK_PRIORITY, 4294967296);
    }

    // 0x1004a9040, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.570
    void ___cxx_global_var_init_570() {
        new (&ServerProt::TELEMETRY_GRID_FULL) ServerProt(138, -2, "TELEMETRY_GRID_FULL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TELEMETRY_GRID_FULL, 4294967296);
    }

    // 0x1004a9090, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.572
    void ___cxx_global_var_init_572() {
        new (&ServerProt::SET_PLAYER_ATTACK_PRIORITY) ServerProt(139, 1, "SET_PLAYER_ATTACK_PRIORITY");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SET_PLAYER_ATTACK_PRIORITY, 4294967296);
    }

    // 0x1004a90e0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.574
    void ___cxx_global_var_init_574() {
        new (&ServerProt::IF_SETRECOL) ServerProt(140, 9, "IF_SETRECOL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETRECOL, 4294967296);
    }

    // 0x1004a9130, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.576
    void ___cxx_global_var_init_576() {
        new (&ServerProt::SOCIAL_NETWORK_LOGOUT) ServerProt(141, -2, "SOCIAL_NETWORK_LOGOUT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SOCIAL_NETWORK_LOGOUT, 4294967296);
    }

    // 0x1004a9180, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.578
    void ___cxx_global_var_init_578() {
        new (&ServerProt::LOYALTY_UPDATE) ServerProt(142, 4, "LOYALTY_UPDATE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::LOYALTY_UPDATE, 4294967296);
    }

    // 0x1004a91d0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.580
    void ___cxx_global_var_init_580() {
        new (&ServerProt::TELEMETRY_GRID_ADD_GROUP) ServerProt(143, 5, "TELEMETRY_GRID_ADD_GROUP");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TELEMETRY_GRID_ADD_GROUP, 4294967296);
    }

    // 0x1004a9220, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.582
    void ___cxx_global_var_init_582() {
        new (&ServerProt::LOGOUT_TRANSFER) ServerProt(144, -1, "LOGOUT_TRANSFER");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::LOGOUT_TRANSFER, 4294967296);
    }

    // 0x1004a9270, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.584
    void ___cxx_global_var_init_584() {
        new (&ServerProt::UPDATE_DOB) ServerProt(145, 4, "UPDATE_DOB");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::UPDATE_DOB, 4294967296);
    }

    // 0x1004a92c0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.586
    void ___cxx_global_var_init_586() {
        new (&ServerProt::VORBIS_PRELOAD_SOUNDS) ServerProt(146, 4, "VORBIS_PRELOAD_SOUNDS");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VORBIS_PRELOAD_SOUNDS, 4294967296);
    }

    // 0x1004a9310, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.588
    void ___cxx_global_var_init_588() {
        new (&ServerProt::CLEAR_PLAYER_SNAPSHOT) ServerProt(147, 1, "CLEAR_PLAYER_SNAPSHOT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CLEAR_PLAYER_SNAPSHOT, 4294967296);
    }

    // 0x1004a9360, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.590
    void ___cxx_global_var_init_590() {
        new (&ServerProt::CHANGE_LOBBY) ServerProt(148, -1, "CHANGE_LOBBY");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CHANGE_LOBBY, 4294967296);
    }

    // 0x1004a93b0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.592
    void ___cxx_global_var_init_592() {
        new (&ServerProt::CREATE_ACCOUNT_REPLY) ServerProt(149, 1, "CREATE_ACCOUNT_REPLY");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CREATE_ACCOUNT_REPLY, 4294967296);
    }

    // 0x1004a9400, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.594
    void ___cxx_global_var_init_594() {
        new (&ServerProt::MAP_PROJANIM_HALFSQ) ServerProt(150, 21, "MAP_PROJANIM_HALFSQ");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MAP_PROJANIM_HALFSQ, 4294967296);
    }

    // 0x1004a9450, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.596
    void ___cxx_global_var_init_596() {
        new (&ServerProt::DO_CHEAT) ServerProt(151, -1, "DO_CHEAT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::DO_CHEAT, 4294967296);
    }

    // 0x1004a94a0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.598
    void ___cxx_global_var_init_598() {
        new (&ServerProt::SEND_PING) ServerProt(152, 8, "SEND_PING");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SEND_PING, 4294967296);
    }

    // 0x1004a94f0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.600
    void ___cxx_global_var_init_600() {
        new (&ServerProt::WORLDLIST_FETCH_REPLY) ServerProt(153, -2, "WORLDLIST_FETCH_REPLY");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::WORLDLIST_FETCH_REPLY, 4294967296);
    }

    // 0x1004a9540, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.602
    void ___cxx_global_var_init_602() {
        new (&ServerProt::CREATE_CHECK_EMAIL_REPLY) ServerProt(154, 1, "CREATE_CHECK_EMAIL_REPLY");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CREATE_CHECK_EMAIL_REPLY, 4294967296);
    }

    // 0x1004a9590, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.604
    void ___cxx_global_var_init_604() {
        new (&ServerProt::CREATE_CHECK_NAME_REPLY) ServerProt(155, 1, "CREATE_CHECK_NAME_REPLY");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CREATE_CHECK_NAME_REPLY, 4294967296);
    }

    // 0x1004a95e0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.606
    void ___cxx_global_var_init_606() {
        new (&ServerProt::JCOINS_UPDATE) ServerProt(156, 4, "JCOINS_UPDATE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::JCOINS_UPDATE, 4294967296);
    }

    // 0x1004a9630, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.608
    void ___cxx_global_var_init_608() {
        new (&ServerProt::ENVIRONMENT_OVERRIDE) ServerProt(157, -1, "ENVIRONMENT_OVERRIDE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::ENVIRONMENT_OVERRIDE, 4294967296);
    }

    // 0x1004a9680, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.610
    void ___cxx_global_var_init_610() {
        new (&ServerProt::TELEMETRY_GRID_SET_ROW_PINNED) ServerProt(158, 3, "TELEMETRY_GRID_SET_ROW_PINNED");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TELEMETRY_GRID_SET_ROW_PINNED, 4294967296);
    }

    // 0x1004a96d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.612
    void ___cxx_global_var_init_612() {
        new (&ServerProt::STORE_SERVERPERM_VARCS_ACK) ServerProt(159, 0, "STORE_SERVERPERM_VARCS_ACK");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::STORE_SERVERPERM_VARCS_ACK, 4294967296);
    }

    // 0x1004a9710, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.614
    void ___cxx_global_var_init_614() {
        new (&ServerProt::SOUND_MIXBUSS_SETLEVEL) ServerProt(160, 4, "SOUND_MIXBUSS_SETLEVEL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SOUND_MIXBUSS_SETLEVEL, 4294967296);
    }

    // 0x1004a9760, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.616
    void ___cxx_global_var_init_616() {
        new (&ServerProt::VORBIS_SOUND_GROUP_START) ServerProt(161, 2, "VORBIS_SOUND_GROUP_START");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VORBIS_SOUND_GROUP_START, 4294967296);
    }

    // 0x1004a97b0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.618
    void ___cxx_global_var_init_618() {
        new (&ServerProt::SONG_PRELOAD) ServerProt(162, 4, "SONG_PRELOAD");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SONG_PRELOAD, 4294967296);
    }

    // 0x1004a9800, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.620
    void ___cxx_global_var_init_620() {
        new (&ServerProt::TELEMETRY_GRID_VALUES_DELTA) ServerProt(163, -2, "TELEMETRY_GRID_VALUES_DELTA");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TELEMETRY_GRID_VALUES_DELTA, 4294967296);
    }

    // 0x1004a9850, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.622
    void ___cxx_global_var_init_622() {
        new (&ServerProt::SHOW_FACE_HERE) ServerProt(164, 1, "SHOW_FACE_HERE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SHOW_FACE_HERE, 4294967296);
    }

    // 0x1004a98a0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.624
    void ___cxx_global_var_init_624() {
        new (&ServerProt::VORBIS_SOUND_GROUP) ServerProt(165, 12, "VORBIS_SOUND_GROUP");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VORBIS_SOUND_GROUP, 4294967296);
    }

    // 0x1004a98f0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.626
    void ___cxx_global_var_init_626() {
        new (&ServerProt::SERVER_REPLY) ServerProt(166, -2, "SERVER_REPLY");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SERVER_REPLY, 4294967296);
    }

    // 0x1004a9940, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.628
    void ___cxx_global_var_init_628() {
        new (&ServerProt::POINTLIGHT_COLOUR) ServerProt(167, 8, "POINTLIGHT_COLOUR");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::POINTLIGHT_COLOUR, 4294967296);
    }

    // 0x1004a9990, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.630
    void ___cxx_global_var_init_630() {
        new (&ServerProt::MESSAGE_QUICKCHAT_PLAYER_GROUP) ServerProt(168, -1, "MESSAGE_QUICKCHAT_PLAYER_GROUP");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MESSAGE_QUICKCHAT_PLAYER_GROUP, 4294967296);
    }

    // 0x1004a99e0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.632
    void ___cxx_global_var_init_632() {
        new (&ServerProt::VORBIS_PRELOAD_SOUND_GROUP) ServerProt(169, 2, "VORBIS_PRELOAD_SOUND_GROUP");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VORBIS_PRELOAD_SOUND_GROUP, 4294967296);
    }

    // 0x1004a9a30, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.634
    void ___cxx_global_var_init_634() {
        new (&ServerProt::TELEMETRY_GRID_MOVE_ROW) ServerProt(170, 3, "TELEMETRY_GRID_MOVE_ROW");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TELEMETRY_GRID_MOVE_ROW, 4294967296);
    }

    // 0x1004a9a80, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.636
    void ___cxx_global_var_init_636() {
        new (&ServerProt::PLAYER_GROUP_DELTA) ServerProt(171, -2, "PLAYER_GROUP_DELTA");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::PLAYER_GROUP_DELTA, 4294967296);
    }

    // 0x1004a9ad0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.638
    void ___cxx_global_var_init_638() {
        new (&ServerProt::VORBIS_SOUND_GROUP_STOP) ServerProt(172, 2, "VORBIS_SOUND_GROUP_STOP");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VORBIS_SOUND_GROUP_STOP, 4294967296);
    }

    // 0x1004a9b20, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.640
    void ___cxx_global_var_init_640() {
        new (&ServerProt::PLAYER_SNAPSHOT) ServerProt(173, -2, "PLAYER_SNAPSHOT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::PLAYER_SNAPSHOT, 4294967296);
    }

    // 0x1004a9b70, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.642
    void ___cxx_global_var_init_642() {
        new (&ServerProt::PLAYER_GROUP_VARPS) ServerProt(174, -2, "PLAYER_GROUP_VARPS");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::PLAYER_GROUP_VARPS, 4294967296);
    }

    // 0x1004a9bc0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.644
    void ___cxx_global_var_init_644() {
        new (&ServerProt::CONSOLE_FEEDBACK) ServerProt(175, -2, "CONSOLE_FEEDBACK");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CONSOLE_FEEDBACK, 4294967296);
    }

    // 0x1004a9c10, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.646
    void ___cxx_global_var_init_646() {
        new (&ServerProt::JS5_RELOAD) ServerProt(176, 0, "JS5_RELOAD");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::JS5_RELOAD, 4294967296);
    }

    // 0x1004a9c50, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.648
    void ___cxx_global_var_init_648() {
        new (&ServerProt::IF_SETPLAYERMODEL_SNAPSHOT) ServerProt(177, 5, "IF_SETPLAYERMODEL_SNAPSHOT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETPLAYERMODEL_SNAPSHOT, 4294967296);
    }

    // 0x1004a9ca0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.650
    void ___cxx_global_var_init_650() {
        new (&ServerProt::TEXT_COORD) ServerProt(178, -1, "TEXT_COORD");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TEXT_COORD, 4294967296);
    }

    // 0x1004a9cf0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.652
    void ___cxx_global_var_init_652() {
        new (&ServerProt::TELEMETRY_GRID_ADD_COLUMN) ServerProt(179, 6, "TELEMETRY_GRID_ADD_COLUMN");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TELEMETRY_GRID_ADD_COLUMN, 4294967296);
    }

    // 0x1004a9d40, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.654
    void ___cxx_global_var_init_654() {
        new (&ServerProt::TELEMETRY_GRID_ADD_ROW) ServerProt(180, 6, "TELEMETRY_GRID_ADD_ROW");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TELEMETRY_GRID_ADD_ROW, 4294967296);
    }

    // 0x1004a9d90, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.656
    void ___cxx_global_var_init_656() {
        new (&ServerProt::PLAYER_GROUP_FULL) ServerProt(181, -2, "PLAYER_GROUP_FULL");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::PLAYER_GROUP_FULL, 4294967296);
    }

    // 0x1004a9de0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.658
    void ___cxx_global_var_init_658() {
        new (&ServerProt::LOBBY_APPEARANCE) ServerProt(182, -2, "LOBBY_APPEARANCE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::LOBBY_APPEARANCE, 4294967296);
    }

    // 0x1004a9e30, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.660
    void ___cxx_global_var_init_660() {
        new (&ServerProt::POINTLIGHT_INTENSITYSCALE) ServerProt(183, 5, "POINTLIGHT_INTENSITYSCALE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::POINTLIGHT_INTENSITYSCALE, 4294967296);
    }

    // 0x1004a9e80, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.662
    void ___cxx_global_var_init_662() {
        new (&ServerProt::SET_TARGET) ServerProt(184, 3, "SET_TARGET");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SET_TARGET, 4294967296);
    }

    // 0x1004a9ed0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.664
    void ___cxx_global_var_init_664() {
        new (&ServerProt::EXECUTE_CLIENT_CHEAT) ServerProt(185, 2, "EXECUTE_CLIENT_CHEAT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::EXECUTE_CLIENT_CHEAT, 4294967296);
    }

    // 0x1004a9f20, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.666
    void ___cxx_global_var_init_666() {
        new (&ServerProt::NPC_HEADICON_SPECIFIC) ServerProt(186, 9, "NPC_HEADICON_SPECIFIC");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::NPC_HEADICON_SPECIFIC, 4294967296);
    }

    // 0x1004a9f70, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.668
    void ___cxx_global_var_init_668() {
        new (&ServerProt::CREATE_SUGGEST_NAME_ERROR) ServerProt(187, 1, "CREATE_SUGGEST_NAME_ERROR");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CREATE_SUGGEST_NAME_ERROR, 4294967296);
    }

    // 0x1004a9fc0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.670
    void ___cxx_global_var_init_670() {
        new (&ServerProt::IF_SETRETEX) ServerProt(188, 9, "IF_SETRETEX");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETRETEX, 4294967296);
    }

    // 0x1004aa010, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.672
    void ___cxx_global_var_init_672() {
        new (&ServerProt::TELEMETRY_CLEAR_GRID_VALUE) ServerProt(189, 3, "TELEMETRY_CLEAR_GRID_VALUE");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TELEMETRY_CLEAR_GRID_VALUE, 4294967296);
    }

    // 0x1004aa060, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.674
    void ___cxx_global_var_init_674() {
        new (&ServerProt::SETDRAWORDER) ServerProt(190, 1, "SETDRAWORDER");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SETDRAWORDER, 4294967296);
    }

    // 0x1004aa0b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.676
    void ___cxx_global_var_init_676() {
        new (&ServerProt::SERVER_TICK_END) ServerProt(191, 0, "SERVER_TICK_END");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::SERVER_TICK_END, 4294967296);
    }

    // 0x1004aa0f0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.678
    void ___cxx_global_var_init_678() {
        new (&ServerProt::CUTSCENE2D_PLAY) ServerProt(192, 2, "CUTSCENE2D_PLAY");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CUTSCENE2D_PLAY, 4294967296);
    }

    // 0x1004aa140, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.680
    void ___cxx_global_var_init_680() {
        new (&ServerProt::CREATE_SUGGEST_NAME_REPLY) ServerProt(193, -1, "CREATE_SUGGEST_NAME_REPLY");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CREATE_SUGGEST_NAME_REPLY, 4294967296);
    }

    // 0x1004aa190, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.682
    void ___cxx_global_var_init_682() {
        new (&ServerProt::TELEMETRY_GRID_REMOVE_GROUP) ServerProt(194, 1, "TELEMETRY_GRID_REMOVE_GROUP");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::TELEMETRY_GRID_REMOVE_GROUP, 4294967296);
    }

    // 0x1004aa1e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.684
    void ___cxx_global_var_init_684() {
        new (&ServerProt::MIDI_SONG_STOP) ServerProt(195, 0, "MIDI_SONG_STOP");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::MIDI_SONG_STOP, 4294967296);
    }

    // 0x1004aa220, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.686
    void ___cxx_global_var_init_686() {
        new (&ServerProt::IF_SETPLAYERHEAD_SNAPSHOT) ServerProt(196, 5, "IF_SETPLAYERHEAD_SNAPSHOT");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETPLAYERHEAD_SNAPSHOT, 4294967296);
    }

    // 0x1004aa270, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.688
    void ___cxx_global_var_init_688() {
        new (&ServerProt::IF_SETOBJECT_LONG) ServerProt(197, 14, "IF_SETOBJECT_LONG");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::IF_SETOBJECT_LONG, 4294967296);
    }

    // 0x1004aa2c0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.690
    void ___cxx_global_var_init_690() {
        new (&ServerProt::VARP_LONG) ServerProt(198, 10, "VARP_LONG");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::VARP_LONG, 4294967296);
    }

    // 0x1004aa310, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.692
    void ___cxx_global_var_init_692() {
        new (&ServerProt::CLIENT_SETVARC_LONG) ServerProt(199, 10, "CLIENT_SETVARC_LONG");
        ___cxa_atexit(PTR__ServerProt_100ee5148, &ServerProt::CLIENT_SETVARC_LONG, 4294967296);
    }

} // namespace jag
