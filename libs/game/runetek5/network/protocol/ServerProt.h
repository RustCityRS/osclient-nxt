// libs/game/runetek5/network/protocol/ServerProt.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class ServerProt {
    public:
        ~ServerProt();
        ServerProt(int arg1, int arg2, const char* str);
        static eastl::fixed_vector<ServerProt const*, 200ul> m_typeLookup; // = fixed_vector<ServerProt const*, 200ul>()
        static ServerProt UPDATE_RUNWEIGHT;                                // = ServerProt(0, 2, "UPDATE_RUNWEIGHT")
        static ServerProt MESSAGE_QUICKCHAT_FRIENDCHAT; // = ServerProt(1, -1, "MESSAGE_QUICKCHAT_FRIENDCHAT")
        static ServerProt CLANCHANNEL_DELTA;            // = ServerProt(2, -2, "CLANCHANNEL_DELTA")
        static ServerProt OBJ_ADD;                      // = ServerProt(3, 5, "OBJ_ADD")
        static ServerProt UPDATE_STAT;                  // = ServerProt(4, 6, "UPDATE_STAT")
        static ServerProt IF_OPENSUB_ACTIVE_LOC;        // = ServerProt(5, 32, "IF_OPENSUB_ACTIVE_LOC")
        static ServerProt DEBUG_SERVER_TRIGGERS;        // = ServerProt(6, -1, "DEBUG_SERVER_TRIGGERS")
        static ServerProt HINT_ARROW;                   // = ServerProt(7, 14, "HINT_ARROW")
        static ServerProt NPC_ANIM_SPECIFIC;            // = ServerProt(8, 19, "NPC_ANIM_SPECIFIC")
        static ServerProt PLAYER_INFO;                  // = ServerProt(9, -2, "PLAYER_INFO")
        static ServerProt CHAT_FILTER_SETTINGS;         // = ServerProt(10, 2, "CHAT_FILTER_SETTINGS")
        static ServerProt REFLECTION_CHECKER;           // = ServerProt(11, -2, "REFLECTION_CHECKER")
        static ServerProt MESSAGE_CLANCHANNEL_SYSTEM;   // = ServerProt(12, -1, "MESSAGE_CLANCHANNEL_SYSTEM")
        static ServerProt UPDATE_RUNENERGY;             // = ServerProt(13, 1, "UPDATE_RUNENERGY")
        static ServerProt CLANCHANNEL_FULL;             // = ServerProt(14, -2, "CLANCHANNEL_FULL")
        static ServerProt FRIENDLIST_LOADED;            // = ServerProt(15, 0, "FRIENDLIST_LOADED")
        static ServerProt RESET_ANIMS;                  // = ServerProt(16, 0, "RESET_ANIMS")
        static ServerProt IF_SETSCROLLPOS;              // = ServerProt(17, 6, "IF_SETSCROLLPOS")
        static ServerProt IF_SETEVENTS;                 // = ServerProt(18, 12, "IF_SETEVENTS")
        static ServerProt MIDI_SONG_LOCATION;           // = ServerProt(19, 11, "MIDI_SONG_LOCATION")
        static ServerProt IF_SETOBJECT;                 // = ServerProt(20, 10, "IF_SETOBJECT")
        static ServerProt UPDATE_ZONE_FULL_FOLLOWS;     // = ServerProt(21, 3, "UPDATE_ZONE_FULL_FOLLOWS")
        static ServerProt UPDATE_ZONE_PARTIAL_ENCLOSED; // = ServerProt(22, -2, "UPDATE_ZONE_PARTIAL_ENCLOSED")
        static ServerProt CLIENT_SETVARC_LARGE;         // = ServerProt(23, 6, "CLIENT_SETVARC_LARGE")
        static ServerProt MESSAGE_FRIENDCHANNEL;        // = ServerProt(24, -1, "MESSAGE_FRIENDCHANNEL")
        static ServerProt CAM_MOVETO;                   // = ServerProt(25, 6, "CAM_MOVETO")
        static ServerProt VARBIT_SMALL;                 // = ServerProt(26, 3, "VARBIT_SMALL")
        static ServerProt IF_SETANIM;                   // = ServerProt(27, 8, "IF_SETANIM")
        static ServerProt CLIENT_SETVARCBIT_LARGE;      // = ServerProt(28, 6, "CLIENT_SETVARCBIT_LARGE")
        static ServerProt CAM_FORCEANGLE;               // = ServerProt(29, 4, "CAM_FORCEANGLE")
        static ServerProt CLIENT_SETVARCBIT_SMALL;      // = ServerProt(30, 3, "CLIENT_SETVARCBIT_SMALL")
        static ServerProt CLANSETTINGS_FULL;            // = ServerProt(31, -2, "CLANSETTINGS_FULL")
        static ServerProt CLIENT_SETVARCSTR_SMALL;      // = ServerProt(32, -1, "CLIENT_SETVARCSTR_SMALL")
        static ServerProt MIDI_SONG;                    // = ServerProt(33, 5, "MIDI_SONG")
        static ServerProt SOUND_AREA;                   // = ServerProt(34, 10, "SOUND_AREA")
        static ServerProt VARP_SMALL;                   // = ServerProt(35, 3, "VARP_SMALL")
        static ServerProt MESSAGE_PRIVATE_ECHO;         // = ServerProt(36, -2, "MESSAGE_PRIVATE_ECHO")
        static ServerProt IF_OPENTOP;                   // = ServerProt(37, 19, "IF_OPENTOP")
        static ServerProt CLANSETTINGS_DELTA;           // = ServerProt(38, -2, "CLANSETTINGS_DELTA")
        static ServerProt IF_OPENSUB_ACTIVE_OBJ;        // = ServerProt(39, 29, "IF_OPENSUB_ACTIVE_OBJ")
        static ServerProt VARCLAN;                      // = ServerProt(40, -1, "VARCLAN")
        static ServerProt UPDATE_ZONE_PARTIAL_FOLLOWS;  // = ServerProt(41, 3, "UPDATE_ZONE_PARTIAL_FOLLOWS")
        static ServerProt TRIGGER_ONDIALOGABORT;        // = ServerProt(42, 0, "TRIGGER_ONDIALOGABORT")
        static ServerProt MESSAGE_CLANCHANNEL;          // = ServerProt(43, -1, "MESSAGE_CLANCHANNEL")
        static ServerProt UPDATE_IGNORELIST;            // = ServerProt(44, -2, "UPDATE_IGNORELIST")
        static ServerProt LOC_DEL;                      // = ServerProt(45, 2, "LOC_DEL")
        static ServerProt CAM_RESET;                    // = ServerProt(46, 0, "CAM_RESET")
        static ServerProt IF_SETTEXT;                   // = ServerProt(47, -2, "IF_SETTEXT")
        static ServerProt OBJ_REVEAL;                   // = ServerProt(48, 7, "OBJ_REVEAL")
        static ServerProt SET_MAP_FLAG;                 // = ServerProt(49, 10, "SET_MAP_FLAG")
        static ServerProt IF_SET_HTTP_IMAGE;            // = ServerProt(50, 8, "IF_SET_HTTP_IMAGE")
        static ServerProt VARBIT_LARGE;                 // = ServerProt(51, 6, "VARBIT_LARGE")
        static ServerProt MAP_PROJANIM;                 // = ServerProt(52, 20, "MAP_PROJANIM")
        static ServerProt LOC_ANIM;                     // = ServerProt(53, 7, "LOC_ANIM")
        static ServerProt MAP_ANIM;                     // = ServerProt(54, 11, "MAP_ANIM")
        static ServerProt UPDATE_INV_STOP_TRANSMIT;     // = ServerProt(55, 3, "UPDATE_INV_STOP_TRANSMIT")
        static ServerProt VORBIS_SOUND;                 // = ServerProt(56, 10, "VORBIS_SOUND")
        static ServerProt SET_PLAYER_OP;                // = ServerProt(57, -1, "SET_PLAYER_OP")
        static ServerProt MESSAGE_GAME;                 // = ServerProt(58, -1, "MESSAGE_GAME")
        static ServerProt LOGOUT;                       // = ServerProt(59, 1, "LOGOUT")
        static ServerProt LOC_CUSTOMISE;                // = ServerProt(60, -1, "LOC_CUSTOMISE")
        static ServerProt CAM_REMOVEROOF;               // = ServerProt(61, 4, "CAM_REMOVEROOF")
        static ServerProt IF_SETCOLOUR;                 // = ServerProt(62, 6, "IF_SETCOLOUR")
        static ServerProt IF_SETPOSITION;               // = ServerProt(63, 8, "IF_SETPOSITION")
        static ServerProt IF_SETPLAYERHEAD;             // = ServerProt(64, 4, "IF_SETPLAYERHEAD")
        static ServerProt VARCLAN_ENABLE;               // = ServerProt(65, 0, "VARCLAN_ENABLE")
        static ServerProt LAST_LOGIN_INFO;              // = ServerProt(66, 4, "LAST_LOGIN_INFO")
        static ServerProt CAM2_ENABLE;                  // = ServerProt(67, 1, "CAM2_ENABLE")
        static ServerProt IF_SETPLAYERHEAD_IGNOREWORN;  // = ServerProt(68, 10, "IF_SETPLAYERHEAD_IGNOREWORN")
        static ServerProt IF_SETHIDE;                   // = ServerProt(69, 5, "IF_SETHIDE")
        static ServerProt MESSAGE_PUBLIC;               // = ServerProt(70, -1, "MESSAGE_PUBLIC")
        static ServerProt IF_SETPLAYERMODEL_SELF;       // = ServerProt(71, 4, "IF_SETPLAYERMODEL_SELF")
        static ServerProt SYNTH_SOUND;                  // = ServerProt(72, 10, "SYNTH_SOUND")
        static ServerProt IF_SETNPCHEAD;                // = ServerProt(73, 8, "IF_SETNPCHEAD")
        static ServerProt MESSAGE_QUICKCHAT_PRIVATE;    // = ServerProt(74, -1, "MESSAGE_QUICKCHAT_PRIVATE")
        static ServerProt CAM_SHAKE;                    // = ServerProt(75, 6, "CAM_SHAKE")
        static ServerProt LOC_ANIM_SPECIFIC;            // = ServerProt(76, 10, "LOC_ANIM_SPECIFIC")
        static ServerProt IF_SETTEXTFONT;               // = ServerProt(77, 8, "IF_SETTEXTFONT")
        static ServerProt HINT_TRAIL;                   // = ServerProt(78, -2, "HINT_TRAIL")
        static ServerProt MINIMAP_TOGGLE;               // = ServerProt(79, 1, "MINIMAP_TOGGLE")
        static ServerProt UPDATE_INV_PARTIAL;           // = ServerProt(80, -2, "UPDATE_INV_PARTIAL")
        static ServerProt RESET_CLIENT_VARCACHE;        // = ServerProt(81, 0, "RESET_CLIENT_VARCACHE")
        static ServerProt
            UPDATE_FRIENDCHAT_CHANNEL_SINGLEUSER;  // = ServerProt(82, -1, "UPDATE_FRIENDCHAT_CHANNEL_SINGLEUSER")
        static ServerProt IF_MOVESUB;              // = ServerProt(83, 8, "IF_MOVESUB")
        static ServerProt IF_OPENSUB;              // = ServerProt(84, 23, "IF_OPENSUB")
        static ServerProt CLIENT_SETVARCSTR_LARGE; // = ServerProt(85, -2, "CLIENT_SETVARCSTR_LARGE")
        static ServerProt CHAT_FILTER_SETTINGS_PRIVATECHAT; // = ServerProt(86, 1, "CHAT_FILTER_SETTINGS_PRIVATECHAT")
        static ServerProt UPDATE_INV_FULL;                  // = ServerProt(87, -2, "UPDATE_INV_FULL")
        static ServerProt OBJ_DEL;                          // = ServerProt(88, 3, "OBJ_DEL")
        static ServerProt UPDATE_STOCKMARKET_SLOT;          // = ServerProt(89, 35, "UPDATE_STOCKMARKET_SLOT")
        static ServerProt UPDATE_UID192;                    // = ServerProt(90, 28, "UPDATE_UID192")
        static ServerProt CAM_SMOOTHRESET;                  // = ServerProt(91, 0, "CAM_SMOOTHRESET")
        static ServerProt VARP_LARGE;                       // = ServerProt(92, 6, "VARP_LARGE")
        static ServerProt IF_CLOSESUB;                      // = ServerProt(93, 4, "IF_CLOSESUB")
        static ServerProt IF_SETANGLE;                      // = ServerProt(94, 10, "IF_SETANGLE")
        static ServerProt UPDATE_FRIENDLIST;                // = ServerProt(95, -2, "UPDATE_FRIENDLIST")
        static ServerProt CAM_LOOKAT;                       // = ServerProt(96, 6, "CAM_LOOKAT")
        static ServerProt PROJANIM_SPECIFIC;                // = ServerProt(97, 25, "PROJANIM_SPECIFIC")
        static ServerProt REBUILD_REGION;                   // = ServerProt(98, -2, "REBUILD_REGION")
        static ServerProt MIDI_JINGLE;                      // = ServerProt(99, 5, "MIDI_JINGLE")
        static ServerProt UPDATE_FRIENDCHAT_CHANNEL_FULL;   // = ServerProt(100, -2, "UPDATE_FRIENDCHAT_CHANNEL_FULL")
        static ServerProt IF_SETTARGETPARAM;                // = ServerProt(101, 10, "IF_SETTARGETPARAM")
        static ServerProt IF_SETMODEL;                      // = ServerProt(102, 8, "IF_SETMODEL")
        static ServerProt LOGOUT_FULL;                      // = ServerProt(103, 1, "LOGOUT_FULL")
        static ServerProt LOC_ADD_CHANGE;                   // = ServerProt(104, -1, "LOC_ADD_CHANGE")
        static ServerProt IF_SETGRAPHIC;                    // = ServerProt(105, 8, "IF_SETGRAPHIC")
        static ServerProt IF_SETPLAYERHEAD_OTHER;           // = ServerProt(106, 10, "IF_SETPLAYERHEAD_OTHER")
        static ServerProt NPC_INFO;                         // = ServerProt(107, -2, "NPC_INFO")
        static ServerProt SET_MOVEACTION;                   // = ServerProt(108, -1, "SET_MOVEACTION")
        static ServerProt MESSAGE_QUICKCHAT_PRIVATE_ECHO;   // = ServerProt(109, -1, "MESSAGE_QUICKCHAT_PRIVATE_ECHO")
        static ServerProt IF_SETPLAYERMODEL_OTHER;          // = ServerProt(110, 10, "IF_SETPLAYERMODEL_OTHER")
        static ServerProt OBJ_COUNT;                        // = ServerProt(111, 7, "OBJ_COUNT")
        static ServerProt SPOTANIM_SPECIFIC;                // = ServerProt(112, 12, "SPOTANIM_SPECIFIC")
        static ServerProt UPDATE_REBOOT_TIMER;              // = ServerProt(113, 2, "UPDATE_REBOOT_TIMER")
        static ServerProt MESSAGE_QUICKCHAT_CLANCHANNEL;    // = ServerProt(114, -1, "MESSAGE_QUICKCHAT_CLANCHANNEL")
        static ServerProt IF_OPENSUB_ACTIVE_PLAYER;         // = ServerProt(115, 25, "IF_OPENSUB_ACTIVE_PLAYER")
        static ServerProt IF_OPENSUB_ACTIVE_NPC;            // = ServerProt(116, 25, "IF_OPENSUB_ACTIVE_NPC")
        static ServerProt MESSAGE_PRIVATE;                  // = ServerProt(117, -2, "MESSAGE_PRIVATE")
        static ServerProt CAMERA_UPDATE;                    // = ServerProt(118, -2, "CAMERA_UPDATE")
        static ServerProt VORBIS_SPEECH_STOP;               // = ServerProt(119, 0, "VORBIS_SPEECH_STOP")
        static ServerProt VARCLAN_DISABLE;                  // = ServerProt(120, 0, "VARCLAN_DISABLE")
        static ServerProt IF_SETTEXTANTIMACRO;              // = ServerProt(121, 5, "IF_SETTEXTANTIMACRO")
        static ServerProt REBUILD_NORMAL;                   // = ServerProt(122, -2, "REBUILD_NORMAL")
        static ServerProt CLIENT_SETVARC_SMALL;             // = ServerProt(123, 3, "CLIENT_SETVARC_SMALL")
        static ServerProt URL_OPEN;                         // = ServerProt(124, -2, "URL_OPEN")
        static ServerProt UPDATE_SITESETTINGS;              // = ServerProt(125, -1, "UPDATE_SITESETTINGS")
        static ServerProt VORBIS_SPEECH_SOUND;              // = ServerProt(126, 8, "VORBIS_SPEECH_SOUND")
        static ServerProt RUNCLIENTSCRIPT;                  // = ServerProt(127, -2, "RUNCLIENTSCRIPT")
        static ServerProt TELEMETRY_GRID_REMOVE_ROW;        // = ServerProt(128, 2, "TELEMETRY_GRID_REMOVE_ROW")
        static ServerProt LOC_PREFETCH;                     // = ServerProt(129, 5, "LOC_PREFETCH")
        static ServerProt CUTSCENE;                         // = ServerProt(130, -2, "CUTSCENE")
        static ServerProt IF_SETCLICKMASK;                  // = ServerProt(131, 5, "IF_SETCLICKMASK")
        static ServerProt SOUND_MIXBUSS_ADD;                // = ServerProt(132, 6, "SOUND_MIXBUSS_ADD")
        static ServerProt TELEMETRY_GRID_REMOVE_COLUMN;     // = ServerProt(133, 2, "TELEMETRY_GRID_REMOVE_COLUMN")
        static ServerProt NO_TIMEOUT;                       // = ServerProt(134, 0, "NO_TIMEOUT")
        static ServerProt TELEMETRY_GRID_MOVE_COLUMN;       // = ServerProt(135, 3, "TELEMETRY_GRID_MOVE_COLUMN")
        static ServerProt MESSAGE_PLAYER_GROUP;             // = ServerProt(136, -1, "MESSAGE_PLAYER_GROUP")
        static ServerProt SET_NPC_ATTACK_PRIORITY;          // = ServerProt(137, 1, "SET_NPC_ATTACK_PRIORITY")
        static ServerProt TELEMETRY_GRID_FULL;              // = ServerProt(138, -2, "TELEMETRY_GRID_FULL")
        static ServerProt SET_PLAYER_ATTACK_PRIORITY;       // = ServerProt(139, 1, "SET_PLAYER_ATTACK_PRIORITY")
        static ServerProt IF_SETRECOL;                      // = ServerProt(140, 9, "IF_SETRECOL")
        static ServerProt SOCIAL_NETWORK_LOGOUT;            // = ServerProt(141, -2, "SOCIAL_NETWORK_LOGOUT")
        static ServerProt LOYALTY_UPDATE;                   // = ServerProt(142, 4, "LOYALTY_UPDATE")
        static ServerProt TELEMETRY_GRID_ADD_GROUP;         // = ServerProt(143, 5, "TELEMETRY_GRID_ADD_GROUP")
        static ServerProt LOGOUT_TRANSFER;                  // = ServerProt(144, -1, "LOGOUT_TRANSFER")
        static ServerProt UPDATE_DOB;                       // = ServerProt(145, 4, "UPDATE_DOB")
        static ServerProt VORBIS_PRELOAD_SOUNDS;            // = ServerProt(146, 4, "VORBIS_PRELOAD_SOUNDS")
        static ServerProt CLEAR_PLAYER_SNAPSHOT;            // = ServerProt(147, 1, "CLEAR_PLAYER_SNAPSHOT")
        static ServerProt CHANGE_LOBBY;                     // = ServerProt(148, -1, "CHANGE_LOBBY")
        static ServerProt CREATE_ACCOUNT_REPLY;             // = ServerProt(149, 1, "CREATE_ACCOUNT_REPLY")
        static ServerProt MAP_PROJANIM_HALFSQ;              // = ServerProt(150, 21, "MAP_PROJANIM_HALFSQ")
        static ServerProt DO_CHEAT;                         // = ServerProt(151, -1, "DO_CHEAT")
        static ServerProt SEND_PING;                        // = ServerProt(152, 8, "SEND_PING")
        static ServerProt WORLDLIST_FETCH_REPLY;            // = ServerProt(153, -2, "WORLDLIST_FETCH_REPLY")
        static ServerProt CREATE_CHECK_EMAIL_REPLY;         // = ServerProt(154, 1, "CREATE_CHECK_EMAIL_REPLY")
        static ServerProt CREATE_CHECK_NAME_REPLY;          // = ServerProt(155, 1, "CREATE_CHECK_NAME_REPLY")
        static ServerProt JCOINS_UPDATE;                    // = ServerProt(156, 4, "JCOINS_UPDATE")
        static ServerProt ENVIRONMENT_OVERRIDE;             // = ServerProt(157, -1, "ENVIRONMENT_OVERRIDE")
        static ServerProt TELEMETRY_GRID_SET_ROW_PINNED;    // = ServerProt(158, 3, "TELEMETRY_GRID_SET_ROW_PINNED")
        static ServerProt STORE_SERVERPERM_VARCS_ACK;       // = ServerProt(159, 0, "STORE_SERVERPERM_VARCS_ACK")
        static ServerProt SOUND_MIXBUSS_SETLEVEL;           // = ServerProt(160, 4, "SOUND_MIXBUSS_SETLEVEL")
        static ServerProt VORBIS_SOUND_GROUP_START;         // = ServerProt(161, 2, "VORBIS_SOUND_GROUP_START")
        static ServerProt SONG_PRELOAD;                     // = ServerProt(162, 4, "SONG_PRELOAD")
        static ServerProt TELEMETRY_GRID_VALUES_DELTA;      // = ServerProt(163, -2, "TELEMETRY_GRID_VALUES_DELTA")
        static ServerProt SHOW_FACE_HERE;                   // = ServerProt(164, 1, "SHOW_FACE_HERE")
        static ServerProt VORBIS_SOUND_GROUP;               // = ServerProt(165, 12, "VORBIS_SOUND_GROUP")
        static ServerProt SERVER_REPLY;                     // = ServerProt(166, -2, "SERVER_REPLY")
        static ServerProt POINTLIGHT_COLOUR;                // = ServerProt(167, 8, "POINTLIGHT_COLOUR")
        static ServerProt MESSAGE_QUICKCHAT_PLAYER_GROUP;   // = ServerProt(168, -1, "MESSAGE_QUICKCHAT_PLAYER_GROUP")
        static ServerProt VORBIS_PRELOAD_SOUND_GROUP;       // = ServerProt(169, 2, "VORBIS_PRELOAD_SOUND_GROUP")
        static ServerProt TELEMETRY_GRID_MOVE_ROW;          // = ServerProt(170, 3, "TELEMETRY_GRID_MOVE_ROW")
        static ServerProt PLAYER_GROUP_DELTA;               // = ServerProt(171, -2, "PLAYER_GROUP_DELTA")
        static ServerProt VORBIS_SOUND_GROUP_STOP;          // = ServerProt(172, 2, "VORBIS_SOUND_GROUP_STOP")
        static ServerProt PLAYER_SNAPSHOT;                  // = ServerProt(173, -2, "PLAYER_SNAPSHOT")
        static ServerProt PLAYER_GROUP_VARPS;               // = ServerProt(174, -2, "PLAYER_GROUP_VARPS")
        static ServerProt CONSOLE_FEEDBACK;                 // = ServerProt(175, -2, "CONSOLE_FEEDBACK")
        static ServerProt JS5_RELOAD;                       // = ServerProt(176, 0, "JS5_RELOAD")
        static ServerProt IF_SETPLAYERMODEL_SNAPSHOT;       // = ServerProt(177, 5, "IF_SETPLAYERMODEL_SNAPSHOT")
        static ServerProt TEXT_COORD;                       // = ServerProt(178, -1, "TEXT_COORD")
        static ServerProt TELEMETRY_GRID_ADD_COLUMN;        // = ServerProt(179, 6, "TELEMETRY_GRID_ADD_COLUMN")
        static ServerProt TELEMETRY_GRID_ADD_ROW;           // = ServerProt(180, 6, "TELEMETRY_GRID_ADD_ROW")
        static ServerProt PLAYER_GROUP_FULL;                // = ServerProt(181, -2, "PLAYER_GROUP_FULL")
        static ServerProt LOBBY_APPEARANCE;                 // = ServerProt(182, -2, "LOBBY_APPEARANCE")
        static ServerProt POINTLIGHT_INTENSITYSCALE;        // = ServerProt(183, 5, "POINTLIGHT_INTENSITYSCALE")
        static ServerProt SET_TARGET;                       // = ServerProt(184, 3, "SET_TARGET")
        static ServerProt EXECUTE_CLIENT_CHEAT;             // = ServerProt(185, 2, "EXECUTE_CLIENT_CHEAT")
        static ServerProt NPC_HEADICON_SPECIFIC;            // = ServerProt(186, 9, "NPC_HEADICON_SPECIFIC")
        static ServerProt CREATE_SUGGEST_NAME_ERROR;        // = ServerProt(187, 1, "CREATE_SUGGEST_NAME_ERROR")
        static ServerProt IF_SETRETEX;                      // = ServerProt(188, 9, "IF_SETRETEX")
        static ServerProt TELEMETRY_CLEAR_GRID_VALUE;       // = ServerProt(189, 3, "TELEMETRY_CLEAR_GRID_VALUE")
        static ServerProt SETDRAWORDER;                     // = ServerProt(190, 1, "SETDRAWORDER")
        static ServerProt SERVER_TICK_END;                  // = ServerProt(191, 0, "SERVER_TICK_END")
        static ServerProt CUTSCENE2D_PLAY;                  // = ServerProt(192, 2, "CUTSCENE2D_PLAY")
        static ServerProt CREATE_SUGGEST_NAME_REPLY;        // = ServerProt(193, -1, "CREATE_SUGGEST_NAME_REPLY")
        static ServerProt TELEMETRY_GRID_REMOVE_GROUP;      // = ServerProt(194, 1, "TELEMETRY_GRID_REMOVE_GROUP")
        static ServerProt MIDI_SONG_STOP;                   // = ServerProt(195, 0, "MIDI_SONG_STOP")
        static ServerProt IF_SETPLAYERHEAD_SNAPSHOT;        // = ServerProt(196, 5, "IF_SETPLAYERHEAD_SNAPSHOT")
        static ServerProt IF_SETOBJECT_LONG;                // = ServerProt(197, 14, "IF_SETOBJECT_LONG")
        static ServerProt VARP_LONG;                        // = ServerProt(198, 10, "VARP_LONG")
        static ServerProt CLIENT_SETVARC_LONG;              // = ServerProt(199, 10, "CLIENT_SETVARC_LONG")

    private:
        int field_0;
        int field_4;
        char* field_8;
        uint8_t _unknown_16[48];
        uint32_t field_64;
        uint8_t _unknown_68[4];
        uint64_t field_72;
        uint64_t field_80;
        uint32_t field_88;
        uint8_t _unknown_92[4];
    };

    // 0x1039b6540, set at startup by ___cxx_global_var_init.297
    eastl::fixed_vector<ServerProt const*, 200ul> ServerProt::m_typeLookup = fixed_vector<ServerProt const*, 200ul>();

    // 0x1039b6bb0, set at startup by ___cxx_global_var_init.298
    ServerProt ServerProt::UPDATE_RUNWEIGHT = ServerProt(0, 2, "UPDATE_RUNWEIGHT");

    // 0x1039b6c10, set at startup by ___cxx_global_var_init.300
    ServerProt ServerProt::MESSAGE_QUICKCHAT_FRIENDCHAT = ServerProt(1, -1, "MESSAGE_QUICKCHAT_FRIENDCHAT");

    // 0x1039b6c70, set at startup by ___cxx_global_var_init.302
    ServerProt ServerProt::CLANCHANNEL_DELTA = ServerProt(2, -2, "CLANCHANNEL_DELTA");

    // 0x1039b6cd0, set at startup by ___cxx_global_var_init.304
    ServerProt ServerProt::OBJ_ADD = ServerProt(3, 5, "OBJ_ADD");

    // 0x1039b6d30, set at startup by ___cxx_global_var_init.306
    ServerProt ServerProt::UPDATE_STAT = ServerProt(4, 6, "UPDATE_STAT");

    // 0x1039b6d90, set at startup by ___cxx_global_var_init.308
    ServerProt ServerProt::IF_OPENSUB_ACTIVE_LOC = ServerProt(5, 32, "IF_OPENSUB_ACTIVE_LOC");

    // 0x1039b6df0, set at startup by ___cxx_global_var_init.310
    ServerProt ServerProt::DEBUG_SERVER_TRIGGERS = ServerProt(6, -1, "DEBUG_SERVER_TRIGGERS");

    // 0x1039b6e50, set at startup by ___cxx_global_var_init.312
    ServerProt ServerProt::HINT_ARROW = ServerProt(7, 14, "HINT_ARROW");

    // 0x1039b6eb0, set at startup by ___cxx_global_var_init.314
    ServerProt ServerProt::NPC_ANIM_SPECIFIC = ServerProt(8, 19, "NPC_ANIM_SPECIFIC");

    // 0x1039b6f10, set at startup by ___cxx_global_var_init.316
    ServerProt ServerProt::PLAYER_INFO = ServerProt(9, -2, "PLAYER_INFO");

    // 0x1039b6f70, set at startup by ___cxx_global_var_init.318
    ServerProt ServerProt::CHAT_FILTER_SETTINGS = ServerProt(10, 2, "CHAT_FILTER_SETTINGS");

    // 0x1039b6fd0, set at startup by ___cxx_global_var_init.320
    ServerProt ServerProt::REFLECTION_CHECKER = ServerProt(11, -2, "REFLECTION_CHECKER");

    // 0x1039b7030, set at startup by ___cxx_global_var_init.322
    ServerProt ServerProt::MESSAGE_CLANCHANNEL_SYSTEM = ServerProt(12, -1, "MESSAGE_CLANCHANNEL_SYSTEM");

    // 0x1039b7090, set at startup by ___cxx_global_var_init.324
    ServerProt ServerProt::UPDATE_RUNENERGY = ServerProt(13, 1, "UPDATE_RUNENERGY");

    // 0x1039b70f0, set at startup by ___cxx_global_var_init.326
    ServerProt ServerProt::CLANCHANNEL_FULL = ServerProt(14, -2, "CLANCHANNEL_FULL");

    // 0x1039b7150, set at startup by ___cxx_global_var_init.328
    ServerProt ServerProt::FRIENDLIST_LOADED = ServerProt(15, 0, "FRIENDLIST_LOADED");

    // 0x1039b71b0, set at startup by ___cxx_global_var_init.330
    ServerProt ServerProt::RESET_ANIMS = ServerProt(16, 0, "RESET_ANIMS");

    // 0x1039b7210, set at startup by ___cxx_global_var_init.332
    ServerProt ServerProt::IF_SETSCROLLPOS = ServerProt(17, 6, "IF_SETSCROLLPOS");

    // 0x1039b7270, set at startup by ___cxx_global_var_init.334
    ServerProt ServerProt::IF_SETEVENTS = ServerProt(18, 12, "IF_SETEVENTS");

    // 0x1039b72d0, set at startup by ___cxx_global_var_init.336
    ServerProt ServerProt::MIDI_SONG_LOCATION = ServerProt(19, 11, "MIDI_SONG_LOCATION");

    // 0x1039b7330, set at startup by ___cxx_global_var_init.338
    ServerProt ServerProt::IF_SETOBJECT = ServerProt(20, 10, "IF_SETOBJECT");

    // 0x1039b7390, set at startup by ___cxx_global_var_init.340
    ServerProt ServerProt::UPDATE_ZONE_FULL_FOLLOWS = ServerProt(21, 3, "UPDATE_ZONE_FULL_FOLLOWS");

    // 0x1039b73f0, set at startup by ___cxx_global_var_init.342
    ServerProt ServerProt::UPDATE_ZONE_PARTIAL_ENCLOSED = ServerProt(22, -2, "UPDATE_ZONE_PARTIAL_ENCLOSED");

    // 0x1039b7450, set at startup by ___cxx_global_var_init.344
    ServerProt ServerProt::CLIENT_SETVARC_LARGE = ServerProt(23, 6, "CLIENT_SETVARC_LARGE");

    // 0x1039b74b0, set at startup by ___cxx_global_var_init.346
    ServerProt ServerProt::MESSAGE_FRIENDCHANNEL = ServerProt(24, -1, "MESSAGE_FRIENDCHANNEL");

    // 0x1039b7510, set at startup by ___cxx_global_var_init.348
    ServerProt ServerProt::CAM_MOVETO = ServerProt(25, 6, "CAM_MOVETO");

    // 0x1039b7570, set at startup by ___cxx_global_var_init.350
    ServerProt ServerProt::VARBIT_SMALL = ServerProt(26, 3, "VARBIT_SMALL");

    // 0x1039b75d0, set at startup by ___cxx_global_var_init.352
    ServerProt ServerProt::IF_SETANIM = ServerProt(27, 8, "IF_SETANIM");

    // 0x1039b7630, set at startup by ___cxx_global_var_init.354
    ServerProt ServerProt::CLIENT_SETVARCBIT_LARGE = ServerProt(28, 6, "CLIENT_SETVARCBIT_LARGE");

    // 0x1039b7690, set at startup by ___cxx_global_var_init.356
    ServerProt ServerProt::CAM_FORCEANGLE = ServerProt(29, 4, "CAM_FORCEANGLE");

    // 0x1039b76f0, set at startup by ___cxx_global_var_init.358
    ServerProt ServerProt::CLIENT_SETVARCBIT_SMALL = ServerProt(30, 3, "CLIENT_SETVARCBIT_SMALL");

    // 0x1039b7750, set at startup by ___cxx_global_var_init.360
    ServerProt ServerProt::CLANSETTINGS_FULL = ServerProt(31, -2, "CLANSETTINGS_FULL");

    // 0x1039b77b0, set at startup by ___cxx_global_var_init.362
    ServerProt ServerProt::CLIENT_SETVARCSTR_SMALL = ServerProt(32, -1, "CLIENT_SETVARCSTR_SMALL");

    // 0x1039b7810, set at startup by ___cxx_global_var_init.364
    ServerProt ServerProt::MIDI_SONG = ServerProt(33, 5, "MIDI_SONG");

    // 0x1039b7870, set at startup by ___cxx_global_var_init.366
    ServerProt ServerProt::SOUND_AREA = ServerProt(34, 10, "SOUND_AREA");

    // 0x1039b78d0, set at startup by ___cxx_global_var_init.368
    ServerProt ServerProt::VARP_SMALL = ServerProt(35, 3, "VARP_SMALL");

    // 0x1039b7930, set at startup by ___cxx_global_var_init.370
    ServerProt ServerProt::MESSAGE_PRIVATE_ECHO = ServerProt(36, -2, "MESSAGE_PRIVATE_ECHO");

    // 0x1039b7990, set at startup by ___cxx_global_var_init.372
    ServerProt ServerProt::IF_OPENTOP = ServerProt(37, 19, "IF_OPENTOP");

    // 0x1039b79f0, set at startup by ___cxx_global_var_init.374
    ServerProt ServerProt::CLANSETTINGS_DELTA = ServerProt(38, -2, "CLANSETTINGS_DELTA");

    // 0x1039b7a50, set at startup by ___cxx_global_var_init.376
    ServerProt ServerProt::IF_OPENSUB_ACTIVE_OBJ = ServerProt(39, 29, "IF_OPENSUB_ACTIVE_OBJ");

    // 0x1039b7ab0, set at startup by ___cxx_global_var_init.378
    ServerProt ServerProt::VARCLAN = ServerProt(40, -1, "VARCLAN");

    // 0x1039b7b10, set at startup by ___cxx_global_var_init.380
    ServerProt ServerProt::UPDATE_ZONE_PARTIAL_FOLLOWS = ServerProt(41, 3, "UPDATE_ZONE_PARTIAL_FOLLOWS");

    // 0x1039b7b70, set at startup by ___cxx_global_var_init.382
    ServerProt ServerProt::TRIGGER_ONDIALOGABORT = ServerProt(42, 0, "TRIGGER_ONDIALOGABORT");

    // 0x1039b7bd0, set at startup by ___cxx_global_var_init.384
    ServerProt ServerProt::MESSAGE_CLANCHANNEL = ServerProt(43, -1, "MESSAGE_CLANCHANNEL");

    // 0x1039b7c30, set at startup by ___cxx_global_var_init.386
    ServerProt ServerProt::UPDATE_IGNORELIST = ServerProt(44, -2, "UPDATE_IGNORELIST");

    // 0x1039b7c90, set at startup by ___cxx_global_var_init.388
    ServerProt ServerProt::LOC_DEL = ServerProt(45, 2, "LOC_DEL");

    // 0x1039b7cf0, set at startup by ___cxx_global_var_init.390
    ServerProt ServerProt::CAM_RESET = ServerProt(46, 0, "CAM_RESET");

    // 0x1039b7d50, set at startup by ___cxx_global_var_init.392
    ServerProt ServerProt::IF_SETTEXT = ServerProt(47, -2, "IF_SETTEXT");

    // 0x1039b7db0, set at startup by ___cxx_global_var_init.394
    ServerProt ServerProt::OBJ_REVEAL = ServerProt(48, 7, "OBJ_REVEAL");

    // 0x1039b7e10, set at startup by ___cxx_global_var_init.396
    ServerProt ServerProt::SET_MAP_FLAG = ServerProt(49, 10, "SET_MAP_FLAG");

    // 0x1039b7e70, set at startup by ___cxx_global_var_init.398
    ServerProt ServerProt::IF_SET_HTTP_IMAGE = ServerProt(50, 8, "IF_SET_HTTP_IMAGE");

    // 0x1039b7ed0, set at startup by ___cxx_global_var_init.400
    ServerProt ServerProt::VARBIT_LARGE = ServerProt(51, 6, "VARBIT_LARGE");

    // 0x1039b7f30, set at startup by ___cxx_global_var_init.402
    ServerProt ServerProt::MAP_PROJANIM = ServerProt(52, 20, "MAP_PROJANIM");

    // 0x1039b7f90, set at startup by ___cxx_global_var_init.404
    ServerProt ServerProt::LOC_ANIM = ServerProt(53, 7, "LOC_ANIM");

    // 0x1039b7ff0, set at startup by ___cxx_global_var_init.406
    ServerProt ServerProt::MAP_ANIM = ServerProt(54, 11, "MAP_ANIM");

    // 0x1039b8050, set at startup by ___cxx_global_var_init.408
    ServerProt ServerProt::UPDATE_INV_STOP_TRANSMIT = ServerProt(55, 3, "UPDATE_INV_STOP_TRANSMIT");

    // 0x1039b80b0, set at startup by ___cxx_global_var_init.410
    ServerProt ServerProt::VORBIS_SOUND = ServerProt(56, 10, "VORBIS_SOUND");

    // 0x1039b8110, set at startup by ___cxx_global_var_init.412
    ServerProt ServerProt::SET_PLAYER_OP = ServerProt(57, -1, "SET_PLAYER_OP");

    // 0x1039b8170, set at startup by ___cxx_global_var_init.414
    ServerProt ServerProt::MESSAGE_GAME = ServerProt(58, -1, "MESSAGE_GAME");

    // 0x1039b81d0, set at startup by ___cxx_global_var_init.416
    ServerProt ServerProt::LOGOUT = ServerProt(59, 1, "LOGOUT");

    // 0x1039b8230, set at startup by ___cxx_global_var_init.418
    ServerProt ServerProt::LOC_CUSTOMISE = ServerProt(60, -1, "LOC_CUSTOMISE");

    // 0x1039b8290, set at startup by ___cxx_global_var_init.420
    ServerProt ServerProt::CAM_REMOVEROOF = ServerProt(61, 4, "CAM_REMOVEROOF");

    // 0x1039b82f0, set at startup by ___cxx_global_var_init.422
    ServerProt ServerProt::IF_SETCOLOUR = ServerProt(62, 6, "IF_SETCOLOUR");

    // 0x1039b8350, set at startup by ___cxx_global_var_init.424
    ServerProt ServerProt::IF_SETPOSITION = ServerProt(63, 8, "IF_SETPOSITION");

    // 0x1039b83b0, set at startup by ___cxx_global_var_init.426
    ServerProt ServerProt::IF_SETPLAYERHEAD = ServerProt(64, 4, "IF_SETPLAYERHEAD");

    // 0x1039b8410, set at startup by ___cxx_global_var_init.428
    ServerProt ServerProt::VARCLAN_ENABLE = ServerProt(65, 0, "VARCLAN_ENABLE");

    // 0x1039b8470, set at startup by ___cxx_global_var_init.430
    ServerProt ServerProt::LAST_LOGIN_INFO = ServerProt(66, 4, "LAST_LOGIN_INFO");

    // 0x1039b84d0, set at startup by ___cxx_global_var_init.432
    ServerProt ServerProt::CAM2_ENABLE = ServerProt(67, 1, "CAM2_ENABLE");

    // 0x1039b8530, set at startup by ___cxx_global_var_init.434
    ServerProt ServerProt::IF_SETPLAYERHEAD_IGNOREWORN = ServerProt(68, 10, "IF_SETPLAYERHEAD_IGNOREWORN");

    // 0x1039b8590, set at startup by ___cxx_global_var_init.436
    ServerProt ServerProt::IF_SETHIDE = ServerProt(69, 5, "IF_SETHIDE");

    // 0x1039b85f0, set at startup by ___cxx_global_var_init.438
    ServerProt ServerProt::MESSAGE_PUBLIC = ServerProt(70, -1, "MESSAGE_PUBLIC");

    // 0x1039b8650, set at startup by ___cxx_global_var_init.439
    ServerProt ServerProt::IF_SETPLAYERMODEL_SELF = ServerProt(71, 4, "IF_SETPLAYERMODEL_SELF");

    // 0x1039b86b0, set at startup by ___cxx_global_var_init.441
    ServerProt ServerProt::SYNTH_SOUND = ServerProt(72, 10, "SYNTH_SOUND");

    // 0x1039b8710, set at startup by ___cxx_global_var_init.443
    ServerProt ServerProt::IF_SETNPCHEAD = ServerProt(73, 8, "IF_SETNPCHEAD");

    // 0x1039b8770, set at startup by ___cxx_global_var_init.445
    ServerProt ServerProt::MESSAGE_QUICKCHAT_PRIVATE = ServerProt(74, -1, "MESSAGE_QUICKCHAT_PRIVATE");

    // 0x1039b87d0, set at startup by ___cxx_global_var_init.446
    ServerProt ServerProt::CAM_SHAKE = ServerProt(75, 6, "CAM_SHAKE");

    // 0x1039b8830, set at startup by ___cxx_global_var_init.448
    ServerProt ServerProt::LOC_ANIM_SPECIFIC = ServerProt(76, 10, "LOC_ANIM_SPECIFIC");

    // 0x1039b8890, set at startup by ___cxx_global_var_init.450
    ServerProt ServerProt::IF_SETTEXTFONT = ServerProt(77, 8, "IF_SETTEXTFONT");

    // 0x1039b88f0, set at startup by ___cxx_global_var_init.452
    ServerProt ServerProt::HINT_TRAIL = ServerProt(78, -2, "HINT_TRAIL");

    // 0x1039b8950, set at startup by ___cxx_global_var_init.454
    ServerProt ServerProt::MINIMAP_TOGGLE = ServerProt(79, 1, "MINIMAP_TOGGLE");

    // 0x1039b89b0, set at startup by ___cxx_global_var_init.456
    ServerProt ServerProt::UPDATE_INV_PARTIAL = ServerProt(80, -2, "UPDATE_INV_PARTIAL");

    // 0x1039b8a10, set at startup by ___cxx_global_var_init.458
    ServerProt ServerProt::RESET_CLIENT_VARCACHE = ServerProt(81, 0, "RESET_CLIENT_VARCACHE");

    // 0x1039b8a70, set at startup by ___cxx_global_var_init.460
    ServerProt ServerProt::UPDATE_FRIENDCHAT_CHANNEL_SINGLEUSER =
        ServerProt(82, -1, "UPDATE_FRIENDCHAT_CHANNEL_SINGLEUSER");

    // 0x1039b8ad0, set at startup by ___cxx_global_var_init.462
    ServerProt ServerProt::IF_MOVESUB = ServerProt(83, 8, "IF_MOVESUB");

    // 0x1039b8b30, set at startup by ___cxx_global_var_init.464
    ServerProt ServerProt::IF_OPENSUB = ServerProt(84, 23, "IF_OPENSUB");

    // 0x1039b8b90, set at startup by ___cxx_global_var_init.466
    ServerProt ServerProt::CLIENT_SETVARCSTR_LARGE = ServerProt(85, -2, "CLIENT_SETVARCSTR_LARGE");

    // 0x1039b8bf0, set at startup by ___cxx_global_var_init.468
    ServerProt ServerProt::CHAT_FILTER_SETTINGS_PRIVATECHAT = ServerProt(86, 1, "CHAT_FILTER_SETTINGS_PRIVATECHAT");

    // 0x1039b8c50, set at startup by ___cxx_global_var_init.470
    ServerProt ServerProt::UPDATE_INV_FULL = ServerProt(87, -2, "UPDATE_INV_FULL");

    // 0x1039b8cb0, set at startup by ___cxx_global_var_init.472
    ServerProt ServerProt::OBJ_DEL = ServerProt(88, 3, "OBJ_DEL");

    // 0x1039b8d10, set at startup by ___cxx_global_var_init.474
    ServerProt ServerProt::UPDATE_STOCKMARKET_SLOT = ServerProt(89, 35, "UPDATE_STOCKMARKET_SLOT");

    // 0x1039b8d70, set at startup by ___cxx_global_var_init.476
    ServerProt ServerProt::UPDATE_UID192 = ServerProt(90, 28, "UPDATE_UID192");

    // 0x1039b8dd0, set at startup by ___cxx_global_var_init.478
    ServerProt ServerProt::CAM_SMOOTHRESET = ServerProt(91, 0, "CAM_SMOOTHRESET");

    // 0x1039b8e30, set at startup by ___cxx_global_var_init.480
    ServerProt ServerProt::VARP_LARGE = ServerProt(92, 6, "VARP_LARGE");

    // 0x1039b8e90, set at startup by ___cxx_global_var_init.482
    ServerProt ServerProt::IF_CLOSESUB = ServerProt(93, 4, "IF_CLOSESUB");

    // 0x1039b8ef0, set at startup by ___cxx_global_var_init.484
    ServerProt ServerProt::IF_SETANGLE = ServerProt(94, 10, "IF_SETANGLE");

    // 0x1039b8f50, set at startup by ___cxx_global_var_init.486
    ServerProt ServerProt::UPDATE_FRIENDLIST = ServerProt(95, -2, "UPDATE_FRIENDLIST");

    // 0x1039b8fb0, set at startup by ___cxx_global_var_init.488
    ServerProt ServerProt::CAM_LOOKAT = ServerProt(96, 6, "CAM_LOOKAT");

    // 0x1039b9010, set at startup by ___cxx_global_var_init.490
    ServerProt ServerProt::PROJANIM_SPECIFIC = ServerProt(97, 25, "PROJANIM_SPECIFIC");

    // 0x1039b9070, set at startup by ___cxx_global_var_init.492
    ServerProt ServerProt::REBUILD_REGION = ServerProt(98, -2, "REBUILD_REGION");

    // 0x1039b90d0, set at startup by ___cxx_global_var_init.494
    ServerProt ServerProt::MIDI_JINGLE = ServerProt(99, 5, "MIDI_JINGLE");

    // 0x1039b9130, set at startup by ___cxx_global_var_init.496
    ServerProt ServerProt::UPDATE_FRIENDCHAT_CHANNEL_FULL = ServerProt(100, -2, "UPDATE_FRIENDCHAT_CHANNEL_FULL");

    // 0x1039b9190, set at startup by ___cxx_global_var_init.498
    ServerProt ServerProt::IF_SETTARGETPARAM = ServerProt(101, 10, "IF_SETTARGETPARAM");

    // 0x1039b91f0, set at startup by ___cxx_global_var_init.500
    ServerProt ServerProt::IF_SETMODEL = ServerProt(102, 8, "IF_SETMODEL");

    // 0x1039b9250, set at startup by ___cxx_global_var_init.502
    ServerProt ServerProt::LOGOUT_FULL = ServerProt(103, 1, "LOGOUT_FULL");

    // 0x1039b92b0, set at startup by ___cxx_global_var_init.504
    ServerProt ServerProt::LOC_ADD_CHANGE = ServerProt(104, -1, "LOC_ADD_CHANGE");

    // 0x1039b9310, set at startup by ___cxx_global_var_init.506
    ServerProt ServerProt::IF_SETGRAPHIC = ServerProt(105, 8, "IF_SETGRAPHIC");

    // 0x1039b9370, set at startup by ___cxx_global_var_init.508
    ServerProt ServerProt::IF_SETPLAYERHEAD_OTHER = ServerProt(106, 10, "IF_SETPLAYERHEAD_OTHER");

    // 0x1039b93d0, set at startup by ___cxx_global_var_init.510
    ServerProt ServerProt::NPC_INFO = ServerProt(107, -2, "NPC_INFO");

    // 0x1039b9430, set at startup by ___cxx_global_var_init.512
    ServerProt ServerProt::SET_MOVEACTION = ServerProt(108, -1, "SET_MOVEACTION");

    // 0x1039b9490, set at startup by ___cxx_global_var_init.514
    ServerProt ServerProt::MESSAGE_QUICKCHAT_PRIVATE_ECHO = ServerProt(109, -1, "MESSAGE_QUICKCHAT_PRIVATE_ECHO");

    // 0x1039b94f0, set at startup by ___cxx_global_var_init.516
    ServerProt ServerProt::IF_SETPLAYERMODEL_OTHER = ServerProt(110, 10, "IF_SETPLAYERMODEL_OTHER");

    // 0x1039b9550, set at startup by ___cxx_global_var_init.518
    ServerProt ServerProt::OBJ_COUNT = ServerProt(111, 7, "OBJ_COUNT");

    // 0x1039b95b0, set at startup by ___cxx_global_var_init.520
    ServerProt ServerProt::SPOTANIM_SPECIFIC = ServerProt(112, 12, "SPOTANIM_SPECIFIC");

    // 0x1039b9610, set at startup by ___cxx_global_var_init.522
    ServerProt ServerProt::UPDATE_REBOOT_TIMER = ServerProt(113, 2, "UPDATE_REBOOT_TIMER");

    // 0x1039b9670, set at startup by ___cxx_global_var_init.524
    ServerProt ServerProt::MESSAGE_QUICKCHAT_CLANCHANNEL = ServerProt(114, -1, "MESSAGE_QUICKCHAT_CLANCHANNEL");

    // 0x1039b96d0, set at startup by ___cxx_global_var_init.526
    ServerProt ServerProt::IF_OPENSUB_ACTIVE_PLAYER = ServerProt(115, 25, "IF_OPENSUB_ACTIVE_PLAYER");

    // 0x1039b9730, set at startup by ___cxx_global_var_init.528
    ServerProt ServerProt::IF_OPENSUB_ACTIVE_NPC = ServerProt(116, 25, "IF_OPENSUB_ACTIVE_NPC");

    // 0x1039b9790, set at startup by ___cxx_global_var_init.530
    ServerProt ServerProt::MESSAGE_PRIVATE = ServerProt(117, -2, "MESSAGE_PRIVATE");

    // 0x1039b97f0, set at startup by ___cxx_global_var_init.531
    ServerProt ServerProt::CAMERA_UPDATE = ServerProt(118, -2, "CAMERA_UPDATE");

    // 0x1039b9850, set at startup by ___cxx_global_var_init.533
    ServerProt ServerProt::VORBIS_SPEECH_STOP = ServerProt(119, 0, "VORBIS_SPEECH_STOP");

    // 0x1039b98b0, set at startup by ___cxx_global_var_init.535
    ServerProt ServerProt::VARCLAN_DISABLE = ServerProt(120, 0, "VARCLAN_DISABLE");

    // 0x1039b9910, set at startup by ___cxx_global_var_init.537
    ServerProt ServerProt::IF_SETTEXTANTIMACRO = ServerProt(121, 5, "IF_SETTEXTANTIMACRO");

    // 0x1039b9970, set at startup by ___cxx_global_var_init.539
    ServerProt ServerProt::REBUILD_NORMAL = ServerProt(122, -2, "REBUILD_NORMAL");

    // 0x1039b99d0, set at startup by ___cxx_global_var_init.541
    ServerProt ServerProt::CLIENT_SETVARC_SMALL = ServerProt(123, 3, "CLIENT_SETVARC_SMALL");

    // 0x1039b9a30, set at startup by ___cxx_global_var_init.543
    ServerProt ServerProt::URL_OPEN = ServerProt(124, -2, "URL_OPEN");

    // 0x1039b9a90, set at startup by ___cxx_global_var_init.545
    ServerProt ServerProt::UPDATE_SITESETTINGS = ServerProt(125, -1, "UPDATE_SITESETTINGS");

    // 0x1039b9af0, set at startup by ___cxx_global_var_init.547
    ServerProt ServerProt::VORBIS_SPEECH_SOUND = ServerProt(126, 8, "VORBIS_SPEECH_SOUND");

    // 0x1039b9b50, set at startup by ___cxx_global_var_init.549
    ServerProt ServerProt::RUNCLIENTSCRIPT = ServerProt(127, -2, "RUNCLIENTSCRIPT");

    // 0x1039b9bb0, set at startup by ___cxx_global_var_init.551
    ServerProt ServerProt::TELEMETRY_GRID_REMOVE_ROW = ServerProt(128, 2, "TELEMETRY_GRID_REMOVE_ROW");

    // 0x1039b9c10, set at startup by ___cxx_global_var_init.553
    ServerProt ServerProt::LOC_PREFETCH = ServerProt(129, 5, "LOC_PREFETCH");

    // 0x1039b9c70, set at startup by ___cxx_global_var_init.555
    ServerProt ServerProt::CUTSCENE = ServerProt(130, -2, "CUTSCENE");

    // 0x1039b9cd0, set at startup by ___cxx_global_var_init.557
    ServerProt ServerProt::IF_SETCLICKMASK = ServerProt(131, 5, "IF_SETCLICKMASK");

    // 0x1039b9d30, set at startup by ___cxx_global_var_init.559
    ServerProt ServerProt::SOUND_MIXBUSS_ADD = ServerProt(132, 6, "SOUND_MIXBUSS_ADD");

    // 0x1039b9d90, set at startup by ___cxx_global_var_init.561
    ServerProt ServerProt::TELEMETRY_GRID_REMOVE_COLUMN = ServerProt(133, 2, "TELEMETRY_GRID_REMOVE_COLUMN");

    // 0x1039b9df0, set at startup by ___cxx_global_var_init.563
    ServerProt ServerProt::NO_TIMEOUT = ServerProt(134, 0, "NO_TIMEOUT");

    // 0x1039b9e50, set at startup by ___cxx_global_var_init.564
    ServerProt ServerProt::TELEMETRY_GRID_MOVE_COLUMN = ServerProt(135, 3, "TELEMETRY_GRID_MOVE_COLUMN");

    // 0x1039b9eb0, set at startup by ___cxx_global_var_init.566
    ServerProt ServerProt::MESSAGE_PLAYER_GROUP = ServerProt(136, -1, "MESSAGE_PLAYER_GROUP");

    // 0x1039b9f10, set at startup by ___cxx_global_var_init.568
    ServerProt ServerProt::SET_NPC_ATTACK_PRIORITY = ServerProt(137, 1, "SET_NPC_ATTACK_PRIORITY");

    // 0x1039b9f70, set at startup by ___cxx_global_var_init.570
    ServerProt ServerProt::TELEMETRY_GRID_FULL = ServerProt(138, -2, "TELEMETRY_GRID_FULL");

    // 0x1039b9fd0, set at startup by ___cxx_global_var_init.572
    ServerProt ServerProt::SET_PLAYER_ATTACK_PRIORITY = ServerProt(139, 1, "SET_PLAYER_ATTACK_PRIORITY");

    // 0x1039ba030, set at startup by ___cxx_global_var_init.574
    ServerProt ServerProt::IF_SETRECOL = ServerProt(140, 9, "IF_SETRECOL");

    // 0x1039ba090, set at startup by ___cxx_global_var_init.576
    ServerProt ServerProt::SOCIAL_NETWORK_LOGOUT = ServerProt(141, -2, "SOCIAL_NETWORK_LOGOUT");

    // 0x1039ba0f0, set at startup by ___cxx_global_var_init.578
    ServerProt ServerProt::LOYALTY_UPDATE = ServerProt(142, 4, "LOYALTY_UPDATE");

    // 0x1039ba150, set at startup by ___cxx_global_var_init.580
    ServerProt ServerProt::TELEMETRY_GRID_ADD_GROUP = ServerProt(143, 5, "TELEMETRY_GRID_ADD_GROUP");

    // 0x1039ba1b0, set at startup by ___cxx_global_var_init.582
    ServerProt ServerProt::LOGOUT_TRANSFER = ServerProt(144, -1, "LOGOUT_TRANSFER");

    // 0x1039ba210, set at startup by ___cxx_global_var_init.584
    ServerProt ServerProt::UPDATE_DOB = ServerProt(145, 4, "UPDATE_DOB");

    // 0x1039ba270, set at startup by ___cxx_global_var_init.586
    ServerProt ServerProt::VORBIS_PRELOAD_SOUNDS = ServerProt(146, 4, "VORBIS_PRELOAD_SOUNDS");

    // 0x1039ba2d0, set at startup by ___cxx_global_var_init.588
    ServerProt ServerProt::CLEAR_PLAYER_SNAPSHOT = ServerProt(147, 1, "CLEAR_PLAYER_SNAPSHOT");

    // 0x1039ba330, set at startup by ___cxx_global_var_init.590
    ServerProt ServerProt::CHANGE_LOBBY = ServerProt(148, -1, "CHANGE_LOBBY");

    // 0x1039ba390, set at startup by ___cxx_global_var_init.592
    ServerProt ServerProt::CREATE_ACCOUNT_REPLY = ServerProt(149, 1, "CREATE_ACCOUNT_REPLY");

    // 0x1039ba3f0, set at startup by ___cxx_global_var_init.594
    ServerProt ServerProt::MAP_PROJANIM_HALFSQ = ServerProt(150, 21, "MAP_PROJANIM_HALFSQ");

    // 0x1039ba450, set at startup by ___cxx_global_var_init.596
    ServerProt ServerProt::DO_CHEAT = ServerProt(151, -1, "DO_CHEAT");

    // 0x1039ba4b0, set at startup by ___cxx_global_var_init.598
    ServerProt ServerProt::SEND_PING = ServerProt(152, 8, "SEND_PING");

    // 0x1039ba510, set at startup by ___cxx_global_var_init.600
    ServerProt ServerProt::WORLDLIST_FETCH_REPLY = ServerProt(153, -2, "WORLDLIST_FETCH_REPLY");

    // 0x1039ba570, set at startup by ___cxx_global_var_init.602
    ServerProt ServerProt::CREATE_CHECK_EMAIL_REPLY = ServerProt(154, 1, "CREATE_CHECK_EMAIL_REPLY");

    // 0x1039ba5d0, set at startup by ___cxx_global_var_init.604
    ServerProt ServerProt::CREATE_CHECK_NAME_REPLY = ServerProt(155, 1, "CREATE_CHECK_NAME_REPLY");

    // 0x1039ba630, set at startup by ___cxx_global_var_init.606
    ServerProt ServerProt::JCOINS_UPDATE = ServerProt(156, 4, "JCOINS_UPDATE");

    // 0x1039ba690, set at startup by ___cxx_global_var_init.608
    ServerProt ServerProt::ENVIRONMENT_OVERRIDE = ServerProt(157, -1, "ENVIRONMENT_OVERRIDE");

    // 0x1039ba6f0, set at startup by ___cxx_global_var_init.610
    ServerProt ServerProt::TELEMETRY_GRID_SET_ROW_PINNED = ServerProt(158, 3, "TELEMETRY_GRID_SET_ROW_PINNED");

    // 0x1039ba750, set at startup by ___cxx_global_var_init.612
    ServerProt ServerProt::STORE_SERVERPERM_VARCS_ACK = ServerProt(159, 0, "STORE_SERVERPERM_VARCS_ACK");

    // 0x1039ba7b0, set at startup by ___cxx_global_var_init.614
    ServerProt ServerProt::SOUND_MIXBUSS_SETLEVEL = ServerProt(160, 4, "SOUND_MIXBUSS_SETLEVEL");

    // 0x1039ba810, set at startup by ___cxx_global_var_init.616
    ServerProt ServerProt::VORBIS_SOUND_GROUP_START = ServerProt(161, 2, "VORBIS_SOUND_GROUP_START");

    // 0x1039ba870, set at startup by ___cxx_global_var_init.618
    ServerProt ServerProt::SONG_PRELOAD = ServerProt(162, 4, "SONG_PRELOAD");

    // 0x1039ba8d0, set at startup by ___cxx_global_var_init.620
    ServerProt ServerProt::TELEMETRY_GRID_VALUES_DELTA = ServerProt(163, -2, "TELEMETRY_GRID_VALUES_DELTA");

    // 0x1039ba930, set at startup by ___cxx_global_var_init.622
    ServerProt ServerProt::SHOW_FACE_HERE = ServerProt(164, 1, "SHOW_FACE_HERE");

    // 0x1039ba990, set at startup by ___cxx_global_var_init.624
    ServerProt ServerProt::VORBIS_SOUND_GROUP = ServerProt(165, 12, "VORBIS_SOUND_GROUP");

    // 0x1039ba9f0, set at startup by ___cxx_global_var_init.626
    ServerProt ServerProt::SERVER_REPLY = ServerProt(166, -2, "SERVER_REPLY");

    // 0x1039baa50, set at startup by ___cxx_global_var_init.628
    ServerProt ServerProt::POINTLIGHT_COLOUR = ServerProt(167, 8, "POINTLIGHT_COLOUR");

    // 0x1039baab0, set at startup by ___cxx_global_var_init.630
    ServerProt ServerProt::MESSAGE_QUICKCHAT_PLAYER_GROUP = ServerProt(168, -1, "MESSAGE_QUICKCHAT_PLAYER_GROUP");

    // 0x1039bab10, set at startup by ___cxx_global_var_init.632
    ServerProt ServerProt::VORBIS_PRELOAD_SOUND_GROUP = ServerProt(169, 2, "VORBIS_PRELOAD_SOUND_GROUP");

    // 0x1039bab70, set at startup by ___cxx_global_var_init.634
    ServerProt ServerProt::TELEMETRY_GRID_MOVE_ROW = ServerProt(170, 3, "TELEMETRY_GRID_MOVE_ROW");

    // 0x1039babd0, set at startup by ___cxx_global_var_init.636
    ServerProt ServerProt::PLAYER_GROUP_DELTA = ServerProt(171, -2, "PLAYER_GROUP_DELTA");

    // 0x1039bac30, set at startup by ___cxx_global_var_init.638
    ServerProt ServerProt::VORBIS_SOUND_GROUP_STOP = ServerProt(172, 2, "VORBIS_SOUND_GROUP_STOP");

    // 0x1039bac90, set at startup by ___cxx_global_var_init.640
    ServerProt ServerProt::PLAYER_SNAPSHOT = ServerProt(173, -2, "PLAYER_SNAPSHOT");

    // 0x1039bacf0, set at startup by ___cxx_global_var_init.642
    ServerProt ServerProt::PLAYER_GROUP_VARPS = ServerProt(174, -2, "PLAYER_GROUP_VARPS");

    // 0x1039bad50, set at startup by ___cxx_global_var_init.644
    ServerProt ServerProt::CONSOLE_FEEDBACK = ServerProt(175, -2, "CONSOLE_FEEDBACK");

    // 0x1039badb0, set at startup by ___cxx_global_var_init.646
    ServerProt ServerProt::JS5_RELOAD = ServerProt(176, 0, "JS5_RELOAD");

    // 0x1039bae10, set at startup by ___cxx_global_var_init.648
    ServerProt ServerProt::IF_SETPLAYERMODEL_SNAPSHOT = ServerProt(177, 5, "IF_SETPLAYERMODEL_SNAPSHOT");

    // 0x1039bae70, set at startup by ___cxx_global_var_init.650
    ServerProt ServerProt::TEXT_COORD = ServerProt(178, -1, "TEXT_COORD");

    // 0x1039baed0, set at startup by ___cxx_global_var_init.652
    ServerProt ServerProt::TELEMETRY_GRID_ADD_COLUMN = ServerProt(179, 6, "TELEMETRY_GRID_ADD_COLUMN");

    // 0x1039baf30, set at startup by ___cxx_global_var_init.654
    ServerProt ServerProt::TELEMETRY_GRID_ADD_ROW = ServerProt(180, 6, "TELEMETRY_GRID_ADD_ROW");

    // 0x1039baf90, set at startup by ___cxx_global_var_init.656
    ServerProt ServerProt::PLAYER_GROUP_FULL = ServerProt(181, -2, "PLAYER_GROUP_FULL");

    // 0x1039baff0, set at startup by ___cxx_global_var_init.658
    ServerProt ServerProt::LOBBY_APPEARANCE = ServerProt(182, -2, "LOBBY_APPEARANCE");

    // 0x1039bb050, set at startup by ___cxx_global_var_init.660
    ServerProt ServerProt::POINTLIGHT_INTENSITYSCALE = ServerProt(183, 5, "POINTLIGHT_INTENSITYSCALE");

    // 0x1039bb0b0, set at startup by ___cxx_global_var_init.662
    ServerProt ServerProt::SET_TARGET = ServerProt(184, 3, "SET_TARGET");

    // 0x1039bb110, set at startup by ___cxx_global_var_init.664
    ServerProt ServerProt::EXECUTE_CLIENT_CHEAT = ServerProt(185, 2, "EXECUTE_CLIENT_CHEAT");

    // 0x1039bb170, set at startup by ___cxx_global_var_init.666
    ServerProt ServerProt::NPC_HEADICON_SPECIFIC = ServerProt(186, 9, "NPC_HEADICON_SPECIFIC");

    // 0x1039bb1d0, set at startup by ___cxx_global_var_init.668
    ServerProt ServerProt::CREATE_SUGGEST_NAME_ERROR = ServerProt(187, 1, "CREATE_SUGGEST_NAME_ERROR");

    // 0x1039bb230, set at startup by ___cxx_global_var_init.670
    ServerProt ServerProt::IF_SETRETEX = ServerProt(188, 9, "IF_SETRETEX");

    // 0x1039bb290, set at startup by ___cxx_global_var_init.672
    ServerProt ServerProt::TELEMETRY_CLEAR_GRID_VALUE = ServerProt(189, 3, "TELEMETRY_CLEAR_GRID_VALUE");

    // 0x1039bb2f0, set at startup by ___cxx_global_var_init.674
    ServerProt ServerProt::SETDRAWORDER = ServerProt(190, 1, "SETDRAWORDER");

    // 0x1039bb350, set at startup by ___cxx_global_var_init.676
    ServerProt ServerProt::SERVER_TICK_END = ServerProt(191, 0, "SERVER_TICK_END");

    // 0x1039bb3b0, set at startup by ___cxx_global_var_init.678
    ServerProt ServerProt::CUTSCENE2D_PLAY = ServerProt(192, 2, "CUTSCENE2D_PLAY");

    // 0x1039bb410, set at startup by ___cxx_global_var_init.680
    ServerProt ServerProt::CREATE_SUGGEST_NAME_REPLY = ServerProt(193, -1, "CREATE_SUGGEST_NAME_REPLY");

    // 0x1039bb470, set at startup by ___cxx_global_var_init.682
    ServerProt ServerProt::TELEMETRY_GRID_REMOVE_GROUP = ServerProt(194, 1, "TELEMETRY_GRID_REMOVE_GROUP");

    // 0x1039bb4d0, set at startup by ___cxx_global_var_init.684
    ServerProt ServerProt::MIDI_SONG_STOP = ServerProt(195, 0, "MIDI_SONG_STOP");

    // 0x1039bb530, set at startup by ___cxx_global_var_init.686
    ServerProt ServerProt::IF_SETPLAYERHEAD_SNAPSHOT = ServerProt(196, 5, "IF_SETPLAYERHEAD_SNAPSHOT");

    // 0x1039bb590, set at startup by ___cxx_global_var_init.688
    ServerProt ServerProt::IF_SETOBJECT_LONG = ServerProt(197, 14, "IF_SETOBJECT_LONG");

    // 0x1039bb5f0, set at startup by ___cxx_global_var_init.690
    ServerProt ServerProt::VARP_LONG = ServerProt(198, 10, "VARP_LONG");

    // 0x1039bb650, set at startup by ___cxx_global_var_init.692
    ServerProt ServerProt::CLIENT_SETVARC_LONG = ServerProt(199, 10, "CLIENT_SETVARC_LONG");

    // 0x1004a09d0: ServerProt::~ServerProt() has the same machine code as ZoneProt::~ZoneProt()

    // 0x1004a3640
    PacketError::PacketError(PacketErrorType packetErrorType) : field_0(packetErrorType) {}

    // 0x1004a36b0
    ServerProt::ServerProt(int arg1, int arg2, const char* str)
        : field_0(arg1), field_4(arg2), field_8(str), field_64(0), field_72(0), field_80(0), field_88(0) {
        if (m_typeLookup.size() != arg1) {
            LogAssert("pType == (int)m_typeLookup.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/network/"
                      "protocol/ServerProt.h",
                      43, "ServerProt creation error");
        }
        m_typeLookup.push_back(this);
    }

    // 0x1004a41e0
    ClientStream* placement_new<ClientStream, char const*, int const&, int const&, int const&, int const&, bool>(
        void* arg1, const char*&& arg2, const int& arg3, const int& arg4, const int& arg5, const int& arg6,
        bool&& arg7) {
        new (arg1) ClientStream(arg2, arg3, arg4, arg5, arg6, arg7);
        return arg1;
    }

} // namespace jag
