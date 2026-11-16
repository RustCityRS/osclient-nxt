// libs/game/runetek5/network/protocol/ClientProt.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class ClientProt {
    public:
        ClientProt(int arg1, int arg2, const char* str);
        static eastl::fixed_vector<ClientProt const*, 130ul> m_typeLookup; // = fixed_vector<ClientProt const*, 130ul>()
        static ClientProt EVENT_NATIVE_MOUSE_CLICK; // = ClientProt(0, 7, "EVENT_NATIVE_MOUSE_CLICK")
        static ClientProt OPPLAYER5;                // = ClientProt(1, 3, "OPPLAYER5")
        static ClientProt RESUME_P_STRINGDIALOG;    // = ClientProt(2, -1, "RESUME_P_STRINGDIALOG")
        static ClientProt NATIVE_LIBRARY_FAILURE;   // = ClientProt(3, -1, "NATIVE_LIBRARY_FAILURE")
        static ClientProt
            AFFINEDCLANSETTINGS_ADDBANNED_FROMCHANNEL; // = ClientProt(4, -1, "AFFINEDCLANSETTINGS_ADDBANNED_FROMCHANNEL")
        static ClientProt SEND_SNAPSHOT;               // = ClientProt(5, -1, "SEND_SNAPSHOT")
        static ClientProt MOVE_MINIMAPCLICK;           // = ClientProt(6, 18, "MOVE_MINIMAPCLICK")
        static ClientProt EVENT_NATIVE_MOUSE_MOVE;     // = ClientProt(7, -1, "EVENT_NATIVE_MOUSE_MOVE")
        static ClientProt SEND_EMAIL_VALIDATION_CODE;    // = ClientProt(8, -1, "SEND_EMAIL_VALIDATION_CODE")
        static ClientProt MESSAGE_PRIVATE;               // = ClientProt(9, -2, "MESSAGE_PRIVATE")
        static ClientProt CLIENT_DETAILOPTIONS_STATUS;   // = ClientProt(10, -1, "CLIENT_DETAILOPTIONS_STATUS")
        static ClientProt OPNPCT;                        // = ClientProt(11, 11, "OPNPCT")
        static ClientProt OPPLAYER7;                     // = ClientProt(12, 3, "OPPLAYER7")
        static ClientProt SIMPLE_TOOLKIT_CHANGE;         // = ClientProt(13, 1, "SIMPLE_TOOLKIT_CHANGE")
        static ClientProt OPPLAYER4;                     // = ClientProt(14, 3, "OPPLAYER4")
        static ClientProt OPPLAYER10;                    // = ClientProt(15, 3, "OPPLAYER10")
        static ClientProt IF_BUTTON3;                    // = ClientProt(16, 8, "IF_BUTTON3")
        static ClientProt URL_REQUEST;                   // = ClientProt(17, -2, "URL_REQUEST")
        static ClientProt OPOBJT;                        // = ClientProt(18, 15, "OPOBJT")
        static ClientProt OPOBJ6;                        // = ClientProt(19, 7, "OPOBJ6")
        static ClientProt OPOBJ1;                        // = ClientProt(20, 7, "OPOBJ1")
        static ClientProt IF_BUTTON8;                    // = ClientProt(21, 8, "IF_BUTTON8")
        static ClientProt IF_BUTTON9;                    // = ClientProt(22, 8, "IF_BUTTON9")
        static ClientProt CREATE_ACCOUNT;                // = ClientProt(23, -2, "CREATE_ACCOUNT")
        static ClientProt TELEMETRY_REQUEST_FULL_RESYNC; // = ClientProt(24, 0, "TELEMETRY_REQUEST_FULL_RESYNC")
        static ClientProt STORE_SERVERPERM_VARCS;        // = ClientProt(25, -2, "STORE_SERVERPERM_VARCS")
        static ClientProt OPPLAYER9;                     // = ClientProt(26, 3, "OPPLAYER9")
        static ClientProt OPOBJ5;                        // = ClientProt(27, 7, "OPOBJ5")
        static ClientProt MAP_BUILD_STUCK;               // = ClientProt(28, 15, "MAP_BUILD_STUCK")
        static ClientProt OPPLAYER1;                     // = ClientProt(29, 3, "OPPLAYER1")
        static ClientProt CREATE_SUGGEST_NAMES;          // = ClientProt(30, 0, "CREATE_SUGGEST_NAMES")
        static ClientProt OPNPC2;                        // = ClientProt(31, 3, "OPNPC2")
        static ClientProt EVENT_KEYBOARD;                // = ClientProt(32, -2, "EVENT_KEYBOARD")
        static ClientProt EVENT_CAMERA_POSITION;         // = ClientProt(33, 4, "EVENT_CAMERA_POSITION")
        static ClientProt MAP_BUILD_COMPLETE;            // = ClientProt(34, 4, "MAP_BUILD_COMPLETE")
        static ClientProt FRIEND_SETNOTES;               // = ClientProt(35, -1, "FRIEND_SETNOTES")
        static ClientProt RESUME_PAUSEBUTTON;            // = ClientProt(36, 6, "RESUME_PAUSEBUTTON")
        static ClientProt IGNORELIST_ADD;                // = ClientProt(37, -1, "IGNORELIST_ADD")
        static ClientProt PING_STATISTICS;               // = ClientProt(38, 4, "PING_STATISTICS")
        static ClientProt EVENT_MOUSE_CLICK;             // = ClientProt(39, 6, "EVENT_MOUSE_CLICK")
        static ClientProt OPNPC3;                        // = ClientProt(40, 3, "OPNPC3")
        static ClientProt IF_VALUE_CHANGE_32;            // = ClientProt(41, 11, "IF_VALUE_CHANGE_32")
        static ClientProt IF_BUTTOND;                    // = ClientProt(42, 16, "IF_BUTTOND")
        static ClientProt SOUND_SONGEND;                 // = ClientProt(43, 4, "SOUND_SONGEND")
        static ClientProt IF_CRMVIEW_OP;                 // = ClientProt(44, 22, "IF_CRMVIEW_OP")
        static ClientProt OPLOC2;                        // = ClientProt(45, 9, "OPLOC2")
        static ClientProt API_CALL;                      // = ClientProt(46, -2, "API_CALL")
        static ClientProt CLIENT_CHEAT;                  // = ClientProt(47, -1, "CLIENT_CHEAT")
        static ClientProt IF_VALUE_CHANGE;               // = ClientProt(48, 9, "IF_VALUE_CHANGE")
        static ClientProt RESUME_P_COUNTDIALOG;          // = ClientProt(49, 4, "RESUME_P_COUNTDIALOG")
        static ClientProt CLOSE_MODAL;                   // = ClientProt(50, 0, "CLOSE_MODAL")
        static ClientProt OPPLAYER8;                     // = ClientProt(51, 3, "OPPLAYER8")
        static ClientProt IGNORELIST_DEL;                // = ClientProt(52, -1, "IGNORELIST_DEL")
        static ClientProt IF_BUTTON6;                    // = ClientProt(53, 8, "IF_BUTTON6")
        static ClientProt OPPLAYERT;                     // = ClientProt(54, 11, "OPPLAYERT")
        static ClientProt
            CLIENT_COMPRESSEDTEXTUREFORMAT_SUPPORT; // = ClientProt(55, -2, "CLIENT_COMPRESSEDTEXTUREFORMAT_SUPPORT")
        static ClientProt OPOBJ2;                   // = ClientProt(56, 7, "OPOBJ2")
        static ClientProt CREATE_CHECK_EMAIL;       // = ClientProt(57, -2, "CREATE_CHECK_EMAIL")
        static ClientProt SOUND_SONGPRELOADED;      // = ClientProt(58, 4, "SOUND_SONGPRELOADED")
        static ClientProt CLAN_JOINCHAT_LEAVECHAT;  // = ClientProt(59, -1, "CLAN_JOINCHAT_LEAVECHAT")
        static ClientProt REGISTER_DEVICE;          // = ClientProt(60, -2, "REGISTER_DEVICE")
        static ClientProt APCOORDT;                 // = ClientProt(61, 12, "APCOORDT")
        static ClientProt NOTIFY_MOBILE_BILLING_ELIGIBILITY; // = ClientProt(62, 1, "NOTIFY_MOBILE_BILLING_ELIGIBILITY")
        static ClientProt MESSAGE_PUBLIC;                    // = ClientProt(63, -1, "MESSAGE_PUBLIC")
        static ClientProt CLICKWORLDMAP;                     // = ClientProt(64, 4, "CLICKWORLDMAP")
        static ClientProt BUG_REPORT;                        // = ClientProt(65, -2, "BUG_REPORT")
        static ClientProt MESSAGE_QUICKCHAT_PRIVATE;         // = ClientProt(66, -1, "MESSAGE_QUICKCHAT_PRIVATE")
        static ClientProt EVENT_MOUSE_MOVE;                  // = ClientProt(67, -1, "EVENT_MOUSE_MOVE")
        static ClientProt OPLOC4;                            // = ClientProt(68, 9, "OPLOC4")
        static ClientProt OPLOCT;                            // = ClientProt(69, 17, "OPLOCT")
        static ClientProt IF_PLAYER;                         // = ClientProt(70, -1, "IF_PLAYER")
        static ClientProt IF_BUTTON7;                        // = ClientProt(71, 8, "IF_BUTTON7")
        static ClientProt TRANSMITVAR_VERIFYID;              // = ClientProt(72, 4, "TRANSMITVAR_VERIFYID")
        static ClientProt OPNPC6;                            // = ClientProt(73, 3, "OPNPC6")
        static ClientProt OPPLAYER3;                         // = ClientProt(74, 3, "OPPLAYER3")
        static ClientProt ADD_NEW_EMAIL_ADDRESS;             // = ClientProt(75, -2, "ADD_NEW_EMAIL_ADDRESS")
        static ClientProt OPOBJ4;                            // = ClientProt(76, 7, "OPOBJ4")
        static ClientProt REFLECTION_CHECK_REPLY;            // = ClientProt(77, -1, "REFLECTION_CHECK_REPLY")
        static ClientProt MOVE_SCRIPTED;                     // = ClientProt(78, 5, "MOVE_SCRIPTED")
        static ClientProt SET_CHATFILTERSETTINGS;            // = ClientProt(79, 3, "SET_CHATFILTERSETTINGS")
        static ClientProt OPOBJ3;                            // = ClientProt(80, 7, "OPOBJ3")
        static ClientProt IGNORE_SETNOTES;                   // = ClientProt(81, -1, "IGNORE_SETNOTES")
        static ClientProt IF_BUTTON10;                       // = ClientProt(82, 8, "IF_BUTTON10")
        static ClientProt FRIEND_SETRANK;                    // = ClientProt(83, -1, "FRIEND_SETRANK")
        static ClientProt FRIENDLIST_ADD;                    // = ClientProt(84, -1, "FRIENDLIST_ADD")
        static ClientProt CREATE_LOG_PROGRESS;               // = ClientProt(85, 1, "CREATE_LOG_PROGRESS")
        static ClientProt UID_PASSPORT_RESEND_REQUEST;       // = ClientProt(86, 0, "UID_PASSPORT_RESEND_REQUEST")
        static ClientProt IF_BUTTON5;                        // = ClientProt(87, 8, "IF_BUTTON5")
        static ClientProt IF_TEXT_CHANGE;                    // = ClientProt(88, -2, "IF_TEXT_CHANGE")
        static ClientProt OPPLAYER6;                         // = ClientProt(89, 3, "OPPLAYER6")
        static ClientProt IF_BUTTON2;                        // = ClientProt(90, 8, "IF_BUTTON2")
        static ClientProt CUTSCENE_FINISHED;                 // = ClientProt(91, 1, "CUTSCENE_FINISHED")
        static ClientProt RESUME_P_HSLDIALOG;                // = ClientProt(92, 2, "RESUME_P_HSLDIALOG")
        static ClientProt CLANCHANNEL_KICKUSER;              // = ClientProt(93, -1, "CLANCHANNEL_KICKUSER")
        static ClientProt WINDOW_STATUS;                     // = ClientProt(94, 6, "WINDOW_STATUS")
        static ClientProt
            AFFINEDCLANSETTINGS_SETMUTED_FROMCHANNEL; // = ClientProt(95, -1, "AFFINEDCLANSETTINGS_SETMUTED_FROMCHANNEL")
        static ClientProt CLAN_KICKUSER;              // = ClientProt(96, -1, "CLAN_KICKUSER")
        static ClientProt ABORT_P_DIALOG;             // = ClientProt(97, 0, "ABORT_P_DIALOG")
        static ClientProt AUTO_SETUP_RESULT;          // = ClientProt(98, 18, "AUTO_SETUP_RESULT")
        static ClientProt OPLOC5;                     // = ClientProt(99, 9, "OPLOC5")
        static ClientProt AUTO_SETUP_HTML5_RESULT;    // = ClientProt(100, 9, "AUTO_SETUP_HTML5_RESULT")
        static ClientProt OPPLAYER2;                  // = ClientProt(101, 3, "OPPLAYER2")
        static ClientProt CREATE_CHECK_NAME;          // = ClientProt(102, -1, "CREATE_CHECK_NAME")
        static ClientProt DETECT_MODIFIED_CLIENT;     // = ClientProt(103, 4, "DETECT_MODIFIED_CLIENT")
        static ClientProt RESUME_P_NAMEDIALOG;        // = ClientProt(104, -1, "RESUME_P_NAMEDIALOG")
        static ClientProt SEND_PING_REPLY;            // = ClientProt(105, 9, "SEND_PING_REPLY")
        static ClientProt WORLDLIST_FETCH;            // = ClientProt(106, 4, "WORLDLIST_FETCH")
        static ClientProt MOVE_GAMECLICK;             // = ClientProt(107, 5, "MOVE_GAMECLICK")
        static ClientProt OPLOC3;                     // = ClientProt(108, 9, "OPLOC3")
        static ClientProt OPLOC6;                     // = ClientProt(109, 9, "OPLOC6")
        static ClientProt FRIENDLIST_DEL;             // = ClientProt(110, -1, "FRIENDLIST_DEL")
        static ClientProt OPNPC4;                     // = ClientProt(111, 3, "OPNPC4")
        static ClientProt OPNPC1;                     // = ClientProt(112, 3, "OPNPC1")
        static ClientProt CHAT_SETMODE;               // = ClientProt(113, 1, "CHAT_SETMODE")
        static ClientProt CUTSCENE2D_FINISHED;        // = ClientProt(114, 3, "CUTSCENE2D_FINISHED")
        static ClientProt FACE_SQUARE;                // = ClientProt(115, 4, "FACE_SQUARE")
        static ClientProt MESSAGE_QUICKCHAT_PUBLIC;   // = ClientProt(116, -1, "MESSAGE_QUICKCHAT_PUBLIC")
        static ClientProt IF_BUTTON4;                 // = ClientProt(117, 8, "IF_BUTTON4")
        static ClientProt OPNPC5;                     // = ClientProt(118, 3, "OPNPC5")
        static ClientProt RESUME_P_CLANFORUMQFCDIALOG; // = ClientProt(119, -1, "RESUME_P_CLANFORUMQFCDIALOG")
        static ClientProt EVENT_APPLET_FOCUS;          // = ClientProt(120, 1, "EVENT_APPLET_FOCUS")
        static ClientProt IF_BUTTONT;                  // = ClientProt(121, 16, "IF_BUTTONT")
        static ClientProt OPENGLX_SUCCESS;             // = ClientProt(122, 1, "OPENGLX_SUCCESS")
        static ClientProt OPLOC1;                      // = ClientProt(123, 9, "OPLOC1")
        static ClientProt RESUME_P_OBJDIALOG;          // = ClientProt(124, 2, "RESUME_P_OBJDIALOG")
        static ClientProt DIRECTX_FAILURE;             // = ClientProt(125, 2, "DIRECTX_FAILURE")
        static ClientProt NO_TIMEOUT;                  // = ClientProt(126, 0, "NO_TIMEOUT")
        static ClientProt CHANGE_EMAIL_ADDRESS;        // = ClientProt(127, -2, "CHANGE_EMAIL_ADDRESS")
        static ClientProt IF_BUTTON1;                  // = ClientProt(128, 8, "IF_BUTTON1")
        static ClientProt RESUME_P_LONGDIALOG;         // = ClientProt(129, 8, "RESUME_P_LONGDIALOG")

    private:
        int field_0;
        int field_4;
        char* field_8;
    };

    // 0x1039b55d0, set at startup by ___cxx_global_var_init.19
    eastl::fixed_vector<ClientProt const*, 130ul> ClientProt::m_typeLookup = fixed_vector<ClientProt const*, 130ul>();

    // 0x1039b5a08, set at startup by ___cxx_global_var_init.20
    ClientProt ClientProt::EVENT_NATIVE_MOUSE_CLICK = ClientProt(0, 7, "EVENT_NATIVE_MOUSE_CLICK");

    // 0x1039b5a18, set at startup by ___cxx_global_var_init.22
    ClientProt ClientProt::OPPLAYER5 = ClientProt(1, 3, "OPPLAYER5");

    // 0x1039b5a28, set at startup by ___cxx_global_var_init.24
    ClientProt ClientProt::RESUME_P_STRINGDIALOG = ClientProt(2, -1, "RESUME_P_STRINGDIALOG");

    // 0x1039b5a38, set at startup by ___cxx_global_var_init.26
    ClientProt ClientProt::NATIVE_LIBRARY_FAILURE = ClientProt(3, -1, "NATIVE_LIBRARY_FAILURE");

    // 0x1039b5a48, set at startup by ___cxx_global_var_init.28
    ClientProt ClientProt::AFFINEDCLANSETTINGS_ADDBANNED_FROMCHANNEL =
        ClientProt(4, -1, "AFFINEDCLANSETTINGS_ADDBANNED_FROMCHANNEL");

    // 0x1039b5a58, set at startup by ___cxx_global_var_init.30
    ClientProt ClientProt::SEND_SNAPSHOT = ClientProt(5, -1, "SEND_SNAPSHOT");

    // 0x1039b5a68, set at startup by ___cxx_global_var_init.32
    ClientProt ClientProt::MOVE_MINIMAPCLICK = ClientProt(6, 18, "MOVE_MINIMAPCLICK");

    // 0x1039b5a78, set at startup by ___cxx_global_var_init.34
    ClientProt ClientProt::EVENT_NATIVE_MOUSE_MOVE = ClientProt(7, -1, "EVENT_NATIVE_MOUSE_MOVE");

    // 0x1039b5a88, set at startup by ___cxx_global_var_init.36
    ClientProt ClientProt::SEND_EMAIL_VALIDATION_CODE = ClientProt(8, -1, "SEND_EMAIL_VALIDATION_CODE");

    // 0x1039b5a98, set at startup by ___cxx_global_var_init.38
    ClientProt ClientProt::MESSAGE_PRIVATE = ClientProt(9, -2, "MESSAGE_PRIVATE");

    // 0x1039b5aa8, set at startup by ___cxx_global_var_init.40
    ClientProt ClientProt::CLIENT_DETAILOPTIONS_STATUS = ClientProt(10, -1, "CLIENT_DETAILOPTIONS_STATUS");

    // 0x1039b5ab8, set at startup by ___cxx_global_var_init.42
    ClientProt ClientProt::OPNPCT = ClientProt(11, 11, "OPNPCT");

    // 0x1039b5ac8, set at startup by ___cxx_global_var_init.44
    ClientProt ClientProt::OPPLAYER7 = ClientProt(12, 3, "OPPLAYER7");

    // 0x1039b5ad8, set at startup by ___cxx_global_var_init.46
    ClientProt ClientProt::SIMPLE_TOOLKIT_CHANGE = ClientProt(13, 1, "SIMPLE_TOOLKIT_CHANGE");

    // 0x1039b5ae8, set at startup by ___cxx_global_var_init.48
    ClientProt ClientProt::OPPLAYER4 = ClientProt(14, 3, "OPPLAYER4");

    // 0x1039b5af8, set at startup by ___cxx_global_var_init.50
    ClientProt ClientProt::OPPLAYER10 = ClientProt(15, 3, "OPPLAYER10");

    // 0x1039b5b08, set at startup by ___cxx_global_var_init.52
    ClientProt ClientProt::IF_BUTTON3 = ClientProt(16, 8, "IF_BUTTON3");

    // 0x1039b5b18, set at startup by ___cxx_global_var_init.54
    ClientProt ClientProt::URL_REQUEST = ClientProt(17, -2, "URL_REQUEST");

    // 0x1039b5b28, set at startup by ___cxx_global_var_init.56
    ClientProt ClientProt::OPOBJT = ClientProt(18, 15, "OPOBJT");

    // 0x1039b5b38, set at startup by ___cxx_global_var_init.58
    ClientProt ClientProt::OPOBJ6 = ClientProt(19, 7, "OPOBJ6");

    // 0x1039b5b48, set at startup by ___cxx_global_var_init.60
    ClientProt ClientProt::OPOBJ1 = ClientProt(20, 7, "OPOBJ1");

    // 0x1039b5b58, set at startup by ___cxx_global_var_init.62
    ClientProt ClientProt::IF_BUTTON8 = ClientProt(21, 8, "IF_BUTTON8");

    // 0x1039b5b68, set at startup by ___cxx_global_var_init.64
    ClientProt ClientProt::IF_BUTTON9 = ClientProt(22, 8, "IF_BUTTON9");

    // 0x1039b5b78, set at startup by ___cxx_global_var_init.66
    ClientProt ClientProt::CREATE_ACCOUNT = ClientProt(23, -2, "CREATE_ACCOUNT");

    // 0x1039b5b88, set at startup by ___cxx_global_var_init.68
    ClientProt ClientProt::TELEMETRY_REQUEST_FULL_RESYNC = ClientProt(24, 0, "TELEMETRY_REQUEST_FULL_RESYNC");

    // 0x1039b5b98, set at startup by ___cxx_global_var_init.70
    ClientProt ClientProt::STORE_SERVERPERM_VARCS = ClientProt(25, -2, "STORE_SERVERPERM_VARCS");

    // 0x1039b5ba8, set at startup by ___cxx_global_var_init.72
    ClientProt ClientProt::OPPLAYER9 = ClientProt(26, 3, "OPPLAYER9");

    // 0x1039b5bb8, set at startup by ___cxx_global_var_init.74
    ClientProt ClientProt::OPOBJ5 = ClientProt(27, 7, "OPOBJ5");

    // 0x1039b5bc8, set at startup by ___cxx_global_var_init.76
    ClientProt ClientProt::MAP_BUILD_STUCK = ClientProt(28, 15, "MAP_BUILD_STUCK");

    // 0x1039b5bd8, set at startup by ___cxx_global_var_init.78
    ClientProt ClientProt::OPPLAYER1 = ClientProt(29, 3, "OPPLAYER1");

    // 0x1039b5be8, set at startup by ___cxx_global_var_init.80
    ClientProt ClientProt::CREATE_SUGGEST_NAMES = ClientProt(30, 0, "CREATE_SUGGEST_NAMES");

    // 0x1039b5bf8, set at startup by ___cxx_global_var_init.82
    ClientProt ClientProt::OPNPC2 = ClientProt(31, 3, "OPNPC2");

    // 0x1039b5c08, set at startup by ___cxx_global_var_init.84
    ClientProt ClientProt::EVENT_KEYBOARD = ClientProt(32, -2, "EVENT_KEYBOARD");

    // 0x1039b5c18, set at startup by ___cxx_global_var_init.86
    ClientProt ClientProt::EVENT_CAMERA_POSITION = ClientProt(33, 4, "EVENT_CAMERA_POSITION");

    // 0x1039b5c28, set at startup by ___cxx_global_var_init.88
    ClientProt ClientProt::MAP_BUILD_COMPLETE = ClientProt(34, 4, "MAP_BUILD_COMPLETE");

    // 0x1039b5c38, set at startup by ___cxx_global_var_init.90
    ClientProt ClientProt::FRIEND_SETNOTES = ClientProt(35, -1, "FRIEND_SETNOTES");

    // 0x1039b5c48, set at startup by ___cxx_global_var_init.92
    ClientProt ClientProt::RESUME_PAUSEBUTTON = ClientProt(36, 6, "RESUME_PAUSEBUTTON");

    // 0x1039b5c58, set at startup by ___cxx_global_var_init.94
    ClientProt ClientProt::IGNORELIST_ADD = ClientProt(37, -1, "IGNORELIST_ADD");

    // 0x1039b5c68, set at startup by ___cxx_global_var_init.96
    ClientProt ClientProt::PING_STATISTICS = ClientProt(38, 4, "PING_STATISTICS");

    // 0x1039b5c78, set at startup by ___cxx_global_var_init.98
    ClientProt ClientProt::EVENT_MOUSE_CLICK = ClientProt(39, 6, "EVENT_MOUSE_CLICK");

    // 0x1039b5c88, set at startup by ___cxx_global_var_init.100
    ClientProt ClientProt::OPNPC3 = ClientProt(40, 3, "OPNPC3");

    // 0x1039b5c98, set at startup by ___cxx_global_var_init.102
    ClientProt ClientProt::IF_VALUE_CHANGE_32 = ClientProt(41, 11, "IF_VALUE_CHANGE_32");

    // 0x1039b5ca8, set at startup by ___cxx_global_var_init.104
    ClientProt ClientProt::IF_BUTTOND = ClientProt(42, 16, "IF_BUTTOND");

    // 0x1039b5cb8, set at startup by ___cxx_global_var_init.106
    ClientProt ClientProt::SOUND_SONGEND = ClientProt(43, 4, "SOUND_SONGEND");

    // 0x1039b5cc8, set at startup by ___cxx_global_var_init.108
    ClientProt ClientProt::IF_CRMVIEW_OP = ClientProt(44, 22, "IF_CRMVIEW_OP");

    // 0x1039b5cd8, set at startup by ___cxx_global_var_init.110
    ClientProt ClientProt::OPLOC2 = ClientProt(45, 9, "OPLOC2");

    // 0x1039b5ce8, set at startup by ___cxx_global_var_init.112
    ClientProt ClientProt::API_CALL = ClientProt(46, -2, "API_CALL");

    // 0x1039b5cf8, set at startup by ___cxx_global_var_init.114
    ClientProt ClientProt::CLIENT_CHEAT = ClientProt(47, -1, "CLIENT_CHEAT");

    // 0x1039b5d08, set at startup by ___cxx_global_var_init.116
    ClientProt ClientProt::IF_VALUE_CHANGE = ClientProt(48, 9, "IF_VALUE_CHANGE");

    // 0x1039b5d18, set at startup by ___cxx_global_var_init.118
    ClientProt ClientProt::RESUME_P_COUNTDIALOG = ClientProt(49, 4, "RESUME_P_COUNTDIALOG");

    // 0x1039b5d28, set at startup by ___cxx_global_var_init.120
    ClientProt ClientProt::CLOSE_MODAL = ClientProt(50, 0, "CLOSE_MODAL");

    // 0x1039b5d38, set at startup by ___cxx_global_var_init.122
    ClientProt ClientProt::OPPLAYER8 = ClientProt(51, 3, "OPPLAYER8");

    // 0x1039b5d48, set at startup by ___cxx_global_var_init.124
    ClientProt ClientProt::IGNORELIST_DEL = ClientProt(52, -1, "IGNORELIST_DEL");

    // 0x1039b5d58, set at startup by ___cxx_global_var_init.126
    ClientProt ClientProt::IF_BUTTON6 = ClientProt(53, 8, "IF_BUTTON6");

    // 0x1039b5d68, set at startup by ___cxx_global_var_init.128
    ClientProt ClientProt::OPPLAYERT = ClientProt(54, 11, "OPPLAYERT");

    // 0x1039b5d78, set at startup by ___cxx_global_var_init.130
    ClientProt ClientProt::CLIENT_COMPRESSEDTEXTUREFORMAT_SUPPORT =
        ClientProt(55, -2, "CLIENT_COMPRESSEDTEXTUREFORMAT_SUPPORT");

    // 0x1039b5d88, set at startup by ___cxx_global_var_init.132
    ClientProt ClientProt::OPOBJ2 = ClientProt(56, 7, "OPOBJ2");

    // 0x1039b5d98, set at startup by ___cxx_global_var_init.134
    ClientProt ClientProt::CREATE_CHECK_EMAIL = ClientProt(57, -2, "CREATE_CHECK_EMAIL");

    // 0x1039b5da8, set at startup by ___cxx_global_var_init.136
    ClientProt ClientProt::SOUND_SONGPRELOADED = ClientProt(58, 4, "SOUND_SONGPRELOADED");

    // 0x1039b5db8, set at startup by ___cxx_global_var_init.138
    ClientProt ClientProt::CLAN_JOINCHAT_LEAVECHAT = ClientProt(59, -1, "CLAN_JOINCHAT_LEAVECHAT");

    // 0x1039b5dc8, set at startup by ___cxx_global_var_init.140
    ClientProt ClientProt::REGISTER_DEVICE = ClientProt(60, -2, "REGISTER_DEVICE");

    // 0x1039b5dd8, set at startup by ___cxx_global_var_init.142
    ClientProt ClientProt::APCOORDT = ClientProt(61, 12, "APCOORDT");

    // 0x1039b5de8, set at startup by ___cxx_global_var_init.144
    ClientProt ClientProt::NOTIFY_MOBILE_BILLING_ELIGIBILITY = ClientProt(62, 1, "NOTIFY_MOBILE_BILLING_ELIGIBILITY");

    // 0x1039b5df8, set at startup by ___cxx_global_var_init.146
    ClientProt ClientProt::MESSAGE_PUBLIC = ClientProt(63, -1, "MESSAGE_PUBLIC");

    // 0x1039b5e08, set at startup by ___cxx_global_var_init.148
    ClientProt ClientProt::CLICKWORLDMAP = ClientProt(64, 4, "CLICKWORLDMAP");

    // 0x1039b5e18, set at startup by ___cxx_global_var_init.150
    ClientProt ClientProt::BUG_REPORT = ClientProt(65, -2, "BUG_REPORT");

    // 0x1039b5e28, set at startup by ___cxx_global_var_init.152
    ClientProt ClientProt::MESSAGE_QUICKCHAT_PRIVATE = ClientProt(66, -1, "MESSAGE_QUICKCHAT_PRIVATE");

    // 0x1039b5e38, set at startup by ___cxx_global_var_init.154
    ClientProt ClientProt::EVENT_MOUSE_MOVE = ClientProt(67, -1, "EVENT_MOUSE_MOVE");

    // 0x1039b5e48, set at startup by ___cxx_global_var_init.156
    ClientProt ClientProt::OPLOC4 = ClientProt(68, 9, "OPLOC4");

    // 0x1039b5e58, set at startup by ___cxx_global_var_init.158
    ClientProt ClientProt::OPLOCT = ClientProt(69, 17, "OPLOCT");

    // 0x1039b5e68, set at startup by ___cxx_global_var_init.160
    ClientProt ClientProt::IF_PLAYER = ClientProt(70, -1, "IF_PLAYER");

    // 0x1039b5e78, set at startup by ___cxx_global_var_init.162
    ClientProt ClientProt::IF_BUTTON7 = ClientProt(71, 8, "IF_BUTTON7");

    // 0x1039b5e88, set at startup by ___cxx_global_var_init.164
    ClientProt ClientProt::TRANSMITVAR_VERIFYID = ClientProt(72, 4, "TRANSMITVAR_VERIFYID");

    // 0x1039b5e98, set at startup by ___cxx_global_var_init.166
    ClientProt ClientProt::OPNPC6 = ClientProt(73, 3, "OPNPC6");

    // 0x1039b5ea8, set at startup by ___cxx_global_var_init.168
    ClientProt ClientProt::OPPLAYER3 = ClientProt(74, 3, "OPPLAYER3");

    // 0x1039b5eb8, set at startup by ___cxx_global_var_init.170
    ClientProt ClientProt::ADD_NEW_EMAIL_ADDRESS = ClientProt(75, -2, "ADD_NEW_EMAIL_ADDRESS");

    // 0x1039b5ec8, set at startup by ___cxx_global_var_init.172
    ClientProt ClientProt::OPOBJ4 = ClientProt(76, 7, "OPOBJ4");

    // 0x1039b5ed8, set at startup by ___cxx_global_var_init.174
    ClientProt ClientProt::REFLECTION_CHECK_REPLY = ClientProt(77, -1, "REFLECTION_CHECK_REPLY");

    // 0x1039b5ee8, set at startup by ___cxx_global_var_init.176
    ClientProt ClientProt::MOVE_SCRIPTED = ClientProt(78, 5, "MOVE_SCRIPTED");

    // 0x1039b5ef8, set at startup by ___cxx_global_var_init.178
    ClientProt ClientProt::SET_CHATFILTERSETTINGS = ClientProt(79, 3, "SET_CHATFILTERSETTINGS");

    // 0x1039b5f08, set at startup by ___cxx_global_var_init.180
    ClientProt ClientProt::OPOBJ3 = ClientProt(80, 7, "OPOBJ3");

    // 0x1039b5f18, set at startup by ___cxx_global_var_init.182
    ClientProt ClientProt::IGNORE_SETNOTES = ClientProt(81, -1, "IGNORE_SETNOTES");

    // 0x1039b5f28, set at startup by ___cxx_global_var_init.184
    ClientProt ClientProt::IF_BUTTON10 = ClientProt(82, 8, "IF_BUTTON10");

    // 0x1039b5f38, set at startup by ___cxx_global_var_init.186
    ClientProt ClientProt::FRIEND_SETRANK = ClientProt(83, -1, "FRIEND_SETRANK");

    // 0x1039b5f48, set at startup by ___cxx_global_var_init.188
    ClientProt ClientProt::FRIENDLIST_ADD = ClientProt(84, -1, "FRIENDLIST_ADD");

    // 0x1039b5f58, set at startup by ___cxx_global_var_init.190
    ClientProt ClientProt::CREATE_LOG_PROGRESS = ClientProt(85, 1, "CREATE_LOG_PROGRESS");

    // 0x1039b5f68, set at startup by ___cxx_global_var_init.192
    ClientProt ClientProt::UID_PASSPORT_RESEND_REQUEST = ClientProt(86, 0, "UID_PASSPORT_RESEND_REQUEST");

    // 0x1039b5f78, set at startup by ___cxx_global_var_init.194
    ClientProt ClientProt::IF_BUTTON5 = ClientProt(87, 8, "IF_BUTTON5");

    // 0x1039b5f88, set at startup by ___cxx_global_var_init.196
    ClientProt ClientProt::IF_TEXT_CHANGE = ClientProt(88, -2, "IF_TEXT_CHANGE");

    // 0x1039b5f98, set at startup by ___cxx_global_var_init.198
    ClientProt ClientProt::OPPLAYER6 = ClientProt(89, 3, "OPPLAYER6");

    // 0x1039b5fa8, set at startup by ___cxx_global_var_init.200
    ClientProt ClientProt::IF_BUTTON2 = ClientProt(90, 8, "IF_BUTTON2");

    // 0x1039b5fb8, set at startup by ___cxx_global_var_init.202
    ClientProt ClientProt::CUTSCENE_FINISHED = ClientProt(91, 1, "CUTSCENE_FINISHED");

    // 0x1039b5fc8, set at startup by ___cxx_global_var_init.204
    ClientProt ClientProt::RESUME_P_HSLDIALOG = ClientProt(92, 2, "RESUME_P_HSLDIALOG");

    // 0x1039b5fd8, set at startup by ___cxx_global_var_init.206
    ClientProt ClientProt::CLANCHANNEL_KICKUSER = ClientProt(93, -1, "CLANCHANNEL_KICKUSER");

    // 0x1039b5fe8, set at startup by ___cxx_global_var_init.208
    ClientProt ClientProt::WINDOW_STATUS = ClientProt(94, 6, "WINDOW_STATUS");

    // 0x1039b5ff8, set at startup by ___cxx_global_var_init.210
    ClientProt ClientProt::AFFINEDCLANSETTINGS_SETMUTED_FROMCHANNEL =
        ClientProt(95, -1, "AFFINEDCLANSETTINGS_SETMUTED_FROMCHANNEL");

    // 0x1039b6008, set at startup by ___cxx_global_var_init.212
    ClientProt ClientProt::CLAN_KICKUSER = ClientProt(96, -1, "CLAN_KICKUSER");

    // 0x1039b6018, set at startup by ___cxx_global_var_init.214
    ClientProt ClientProt::ABORT_P_DIALOG = ClientProt(97, 0, "ABORT_P_DIALOG");

    // 0x1039b6028, set at startup by ___cxx_global_var_init.216
    ClientProt ClientProt::AUTO_SETUP_RESULT = ClientProt(98, 18, "AUTO_SETUP_RESULT");

    // 0x1039b6038, set at startup by ___cxx_global_var_init.218
    ClientProt ClientProt::OPLOC5 = ClientProt(99, 9, "OPLOC5");

    // 0x1039b6048, set at startup by ___cxx_global_var_init.220
    ClientProt ClientProt::AUTO_SETUP_HTML5_RESULT = ClientProt(100, 9, "AUTO_SETUP_HTML5_RESULT");

    // 0x1039b6058, set at startup by ___cxx_global_var_init.222
    ClientProt ClientProt::OPPLAYER2 = ClientProt(101, 3, "OPPLAYER2");

    // 0x1039b6068, set at startup by ___cxx_global_var_init.224
    ClientProt ClientProt::CREATE_CHECK_NAME = ClientProt(102, -1, "CREATE_CHECK_NAME");

    // 0x1039b6078, set at startup by ___cxx_global_var_init.226
    ClientProt ClientProt::DETECT_MODIFIED_CLIENT = ClientProt(103, 4, "DETECT_MODIFIED_CLIENT");

    // 0x1039b6088, set at startup by ___cxx_global_var_init.228
    ClientProt ClientProt::RESUME_P_NAMEDIALOG = ClientProt(104, -1, "RESUME_P_NAMEDIALOG");

    // 0x1039b6098, set at startup by ___cxx_global_var_init.230
    ClientProt ClientProt::SEND_PING_REPLY = ClientProt(105, 9, "SEND_PING_REPLY");

    // 0x1039b60a8, set at startup by ___cxx_global_var_init.232
    ClientProt ClientProt::WORLDLIST_FETCH = ClientProt(106, 4, "WORLDLIST_FETCH");

    // 0x1039b60b8, set at startup by ___cxx_global_var_init.234
    ClientProt ClientProt::MOVE_GAMECLICK = ClientProt(107, 5, "MOVE_GAMECLICK");

    // 0x1039b60c8, set at startup by ___cxx_global_var_init.236
    ClientProt ClientProt::OPLOC3 = ClientProt(108, 9, "OPLOC3");

    // 0x1039b60d8, set at startup by ___cxx_global_var_init.238
    ClientProt ClientProt::OPLOC6 = ClientProt(109, 9, "OPLOC6");

    // 0x1039b60e8, set at startup by ___cxx_global_var_init.240
    ClientProt ClientProt::FRIENDLIST_DEL = ClientProt(110, -1, "FRIENDLIST_DEL");

    // 0x1039b60f8, set at startup by ___cxx_global_var_init.242
    ClientProt ClientProt::OPNPC4 = ClientProt(111, 3, "OPNPC4");

    // 0x1039b6108, set at startup by ___cxx_global_var_init.244
    ClientProt ClientProt::OPNPC1 = ClientProt(112, 3, "OPNPC1");

    // 0x1039b6118, set at startup by ___cxx_global_var_init.246
    ClientProt ClientProt::CHAT_SETMODE = ClientProt(113, 1, "CHAT_SETMODE");

    // 0x1039b6128, set at startup by ___cxx_global_var_init.248
    ClientProt ClientProt::CUTSCENE2D_FINISHED = ClientProt(114, 3, "CUTSCENE2D_FINISHED");

    // 0x1039b6138, set at startup by ___cxx_global_var_init.250
    ClientProt ClientProt::FACE_SQUARE = ClientProt(115, 4, "FACE_SQUARE");

    // 0x1039b6148, set at startup by ___cxx_global_var_init.252
    ClientProt ClientProt::MESSAGE_QUICKCHAT_PUBLIC = ClientProt(116, -1, "MESSAGE_QUICKCHAT_PUBLIC");

    // 0x1039b6158, set at startup by ___cxx_global_var_init.254
    ClientProt ClientProt::IF_BUTTON4 = ClientProt(117, 8, "IF_BUTTON4");

    // 0x1039b6168, set at startup by ___cxx_global_var_init.256
    ClientProt ClientProt::OPNPC5 = ClientProt(118, 3, "OPNPC5");

    // 0x1039b6178, set at startup by ___cxx_global_var_init.258
    ClientProt ClientProt::RESUME_P_CLANFORUMQFCDIALOG = ClientProt(119, -1, "RESUME_P_CLANFORUMQFCDIALOG");

    // 0x1039b6188, set at startup by ___cxx_global_var_init.260
    ClientProt ClientProt::EVENT_APPLET_FOCUS = ClientProt(120, 1, "EVENT_APPLET_FOCUS");

    // 0x1039b6198, set at startup by ___cxx_global_var_init.262
    ClientProt ClientProt::IF_BUTTONT = ClientProt(121, 16, "IF_BUTTONT");

    // 0x1039b61a8, set at startup by ___cxx_global_var_init.264
    ClientProt ClientProt::OPENGLX_SUCCESS = ClientProt(122, 1, "OPENGLX_SUCCESS");

    // 0x1039b61b8, set at startup by ___cxx_global_var_init.266
    ClientProt ClientProt::OPLOC1 = ClientProt(123, 9, "OPLOC1");

    // 0x1039b61c8, set at startup by ___cxx_global_var_init.268
    ClientProt ClientProt::RESUME_P_OBJDIALOG = ClientProt(124, 2, "RESUME_P_OBJDIALOG");

    // 0x1039b61d8, set at startup by ___cxx_global_var_init.270
    ClientProt ClientProt::DIRECTX_FAILURE = ClientProt(125, 2, "DIRECTX_FAILURE");

    // 0x1039b61e8, set at startup by ___cxx_global_var_init.272
    ClientProt ClientProt::NO_TIMEOUT = ClientProt(126, 0, "NO_TIMEOUT");

    // 0x1039b61f8, set at startup by ___cxx_global_var_init.274
    ClientProt ClientProt::CHANGE_EMAIL_ADDRESS = ClientProt(127, -2, "CHANGE_EMAIL_ADDRESS");

    // 0x1039b6208, set at startup by ___cxx_global_var_init.276
    ClientProt ClientProt::IF_BUTTON1 = ClientProt(128, 8, "IF_BUTTON1");

    // 0x1039b6218, set at startup by ___cxx_global_var_init.278
    ClientProt ClientProt::RESUME_P_LONGDIALOG = ClientProt(129, 8, "RESUME_P_LONGDIALOG");

    // 0x1004a2ed0
    ClientProt::ClientProt(int arg1, int arg2, const char* str) : field_0(arg1), field_4(arg2), field_8(str) {
        if (m_typeLookup.size() != arg1) {
            LogAssert("pType == (int)m_typeLookup.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/network/"
                      "protocol/ClientProt.h",
                      30, "ClientProt creation error");
        }
        m_typeLookup.push_back(this);
    }

} // namespace jag
