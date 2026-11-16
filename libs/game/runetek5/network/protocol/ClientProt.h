// libs/game/runetek5/network/protocol/ClientProt.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class ClientProt {
    public:
        ClientProt(int, int, char const*);
        static eastl::fixed_vector<ClientProt_const*, 130ul, true, eastl::allocator> /* 1080 bytes */
            m_typeLookup; // = fixed_vector<ClientProt_const*,130ul,true,eastl::allocator>()
        static ClientProt /* 16 bytes */ EVENT_NATIVE_MOUSE_CLICK; // = ClientProt(0, 7, "EVENT_NATIVE_MOUSE_CLICK")
        static ClientProt /* 16 bytes */ OPPLAYER5;                // = ClientProt(1, 3, "OPPLAYER5")
        static ClientProt /* 16 bytes */ RESUME_P_STRINGDIALOG;    // = ClientProt(2, -1, "RESUME_P_STRINGDIALOG")
        static ClientProt /* 16 bytes */ NATIVE_LIBRARY_FAILURE;   // = ClientProt(3, -1, "NATIVE_LIBRARY_FAILURE")
        static ClientProt                                          /* 16 bytes */
            AFFINEDCLANSETTINGS_ADDBANNED_FROMCHANNEL; // = ClientProt(4, -1, "AFFINEDCLANSETTINGS_ADDBANNED_FROMCHANNEL")
        static ClientProt /* 16 bytes */ SEND_SNAPSHOT;           // = ClientProt(5, -1, "SEND_SNAPSHOT")
        static ClientProt /* 16 bytes */ MOVE_MINIMAPCLICK;       // = ClientProt(6, 18, "MOVE_MINIMAPCLICK")
        static ClientProt /* 16 bytes */ EVENT_NATIVE_MOUSE_MOVE; // = ClientProt(7, -1, "EVENT_NATIVE_MOUSE_MOVE")
        static ClientProt                                         /* 16 bytes */
            SEND_EMAIL_VALIDATION_CODE;                           // = ClientProt(8, -1, "SEND_EMAIL_VALIDATION_CODE")
        static ClientProt /* 16 bytes */ MESSAGE_PRIVATE;         // = ClientProt(9, -2, "MESSAGE_PRIVATE")
        static ClientProt                                         /* 16 bytes */
            CLIENT_DETAILOPTIONS_STATUS;                          // = ClientProt(10, -1, "CLIENT_DETAILOPTIONS_STATUS")
        static ClientProt /* 16 bytes */ OPNPCT;                  // = ClientProt(11, 11, "OPNPCT")
        static ClientProt /* 16 bytes */ OPPLAYER7;               // = ClientProt(12, 3, "OPPLAYER7")
        static ClientProt /* 16 bytes */ SIMPLE_TOOLKIT_CHANGE;   // = ClientProt(13, 1, "SIMPLE_TOOLKIT_CHANGE")
        static ClientProt /* 16 bytes */ OPPLAYER4;               // = ClientProt(14, 3, "OPPLAYER4")
        static ClientProt /* 16 bytes */ OPPLAYER10;              // = ClientProt(15, 3, "OPPLAYER10")
        static ClientProt /* 16 bytes */ IF_BUTTON3;              // = ClientProt(16, 8, "IF_BUTTON3")
        static ClientProt /* 16 bytes */ URL_REQUEST;             // = ClientProt(17, -2, "URL_REQUEST")
        static ClientProt /* 16 bytes */ OPOBJT;                  // = ClientProt(18, 15, "OPOBJT")
        static ClientProt /* 16 bytes */ OPOBJ6;                  // = ClientProt(19, 7, "OPOBJ6")
        static ClientProt /* 16 bytes */ OPOBJ1;                  // = ClientProt(20, 7, "OPOBJ1")
        static ClientProt /* 16 bytes */ IF_BUTTON8;              // = ClientProt(21, 8, "IF_BUTTON8")
        static ClientProt /* 16 bytes */ IF_BUTTON9;              // = ClientProt(22, 8, "IF_BUTTON9")
        static ClientProt /* 16 bytes */ CREATE_ACCOUNT;          // = ClientProt(23, -2, "CREATE_ACCOUNT")
        static ClientProt                                         /* 16 bytes */
            TELEMETRY_REQUEST_FULL_RESYNC;                       // = ClientProt(24, 0, "TELEMETRY_REQUEST_FULL_RESYNC")
        static ClientProt /* 16 bytes */ STORE_SERVERPERM_VARCS; // = ClientProt(25, -2, "STORE_SERVERPERM_VARCS")
        static ClientProt /* 16 bytes */ OPPLAYER9;              // = ClientProt(26, 3, "OPPLAYER9")
        static ClientProt /* 16 bytes */ OPOBJ5;                 // = ClientProt(27, 7, "OPOBJ5")
        static ClientProt /* 16 bytes */ MAP_BUILD_STUCK;        // = ClientProt(28, 15, "MAP_BUILD_STUCK")
        static ClientProt /* 16 bytes */ OPPLAYER1;              // = ClientProt(29, 3, "OPPLAYER1")
        static ClientProt /* 16 bytes */ CREATE_SUGGEST_NAMES;   // = ClientProt(30, 0, "CREATE_SUGGEST_NAMES")
        static ClientProt /* 16 bytes */ OPNPC2;                 // = ClientProt(31, 3, "OPNPC2")
        static ClientProt /* 16 bytes */ EVENT_KEYBOARD;         // = ClientProt(32, -2, "EVENT_KEYBOARD")
        static ClientProt /* 16 bytes */ EVENT_CAMERA_POSITION;  // = ClientProt(33, 4, "EVENT_CAMERA_POSITION")
        static ClientProt /* 16 bytes */ MAP_BUILD_COMPLETE;     // = ClientProt(34, 4, "MAP_BUILD_COMPLETE")
        static ClientProt /* 16 bytes */ FRIEND_SETNOTES;        // = ClientProt(35, -1, "FRIEND_SETNOTES")
        static ClientProt /* 16 bytes */ RESUME_PAUSEBUTTON;     // = ClientProt(36, 6, "RESUME_PAUSEBUTTON")
        static ClientProt /* 16 bytes */ IGNORELIST_ADD;         // = ClientProt(37, -1, "IGNORELIST_ADD")
        static ClientProt /* 16 bytes */ PING_STATISTICS;        // = ClientProt(38, 4, "PING_STATISTICS")
        static ClientProt /* 16 bytes */ EVENT_MOUSE_CLICK;      // = ClientProt(39, 6, "EVENT_MOUSE_CLICK")
        static ClientProt /* 16 bytes */ OPNPC3;                 // = ClientProt(40, 3, "OPNPC3")
        static ClientProt /* 16 bytes */ IF_VALUE_CHANGE_32;     // = ClientProt(41, 11, "IF_VALUE_CHANGE_32")
        static ClientProt /* 16 bytes */ IF_BUTTOND;             // = ClientProt(42, 16, "IF_BUTTOND")
        static ClientProt /* 16 bytes */ SOUND_SONGEND;          // = ClientProt(43, 4, "SOUND_SONGEND")
        static ClientProt /* 16 bytes */ IF_CRMVIEW_OP;          // = ClientProt(44, 22, "IF_CRMVIEW_OP")
        static ClientProt /* 16 bytes */ OPLOC2;                 // = ClientProt(45, 9, "OPLOC2")
        static ClientProt /* 16 bytes */ API_CALL;               // = ClientProt(46, -2, "API_CALL")
        static ClientProt /* 16 bytes */ CLIENT_CHEAT;           // = ClientProt(47, -1, "CLIENT_CHEAT")
        static ClientProt /* 16 bytes */ IF_VALUE_CHANGE;        // = ClientProt(48, 9, "IF_VALUE_CHANGE")
        static ClientProt /* 16 bytes */ RESUME_P_COUNTDIALOG;   // = ClientProt(49, 4, "RESUME_P_COUNTDIALOG")
        static ClientProt /* 16 bytes */ CLOSE_MODAL;            // = ClientProt(50, 0, "CLOSE_MODAL")
        static ClientProt /* 16 bytes */ OPPLAYER8;              // = ClientProt(51, 3, "OPPLAYER8")
        static ClientProt /* 16 bytes */ IGNORELIST_DEL;         // = ClientProt(52, -1, "IGNORELIST_DEL")
        static ClientProt /* 16 bytes */ IF_BUTTON6;             // = ClientProt(53, 8, "IF_BUTTON6")
        static ClientProt /* 16 bytes */ OPPLAYERT;              // = ClientProt(54, 11, "OPPLAYERT")
        static ClientProt                                        /* 16 bytes */
            CLIENT_COMPRESSEDTEXTUREFORMAT_SUPPORT; // = ClientProt(55, -2, "CLIENT_COMPRESSEDTEXTUREFORMAT_SUPPORT")
        static ClientProt /* 16 bytes */ OPOBJ2;    // = ClientProt(56, 7, "OPOBJ2")
        static ClientProt /* 16 bytes */ CREATE_CHECK_EMAIL;      // = ClientProt(57, -2, "CREATE_CHECK_EMAIL")
        static ClientProt /* 16 bytes */ SOUND_SONGPRELOADED;     // = ClientProt(58, 4, "SOUND_SONGPRELOADED")
        static ClientProt /* 16 bytes */ CLAN_JOINCHAT_LEAVECHAT; // = ClientProt(59, -1, "CLAN_JOINCHAT_LEAVECHAT")
        static ClientProt /* 16 bytes */ REGISTER_DEVICE;         // = ClientProt(60, -2, "REGISTER_DEVICE")
        static ClientProt /* 16 bytes */ APCOORDT;                // = ClientProt(61, 12, "APCOORDT")
        static ClientProt                                         /* 16 bytes */
            NOTIFY_MOBILE_BILLING_ELIGIBILITY;           // = ClientProt(62, 1, "NOTIFY_MOBILE_BILLING_ELIGIBILITY")
        static ClientProt /* 16 bytes */ MESSAGE_PUBLIC; // = ClientProt(63, -1, "MESSAGE_PUBLIC")
        static ClientProt /* 16 bytes */ CLICKWORLDMAP;  // = ClientProt(64, 4, "CLICKWORLDMAP")
        static ClientProt /* 16 bytes */ BUG_REPORT;     // = ClientProt(65, -2, "BUG_REPORT")
        static ClientProt /* 16 bytes */ MESSAGE_QUICKCHAT_PRIVATE; // = ClientProt(66, -1, "MESSAGE_QUICKCHAT_PRIVATE")
        static ClientProt /* 16 bytes */ EVENT_MOUSE_MOVE;          // = ClientProt(67, -1, "EVENT_MOUSE_MOVE")
        static ClientProt /* 16 bytes */ OPLOC4;                    // = ClientProt(68, 9, "OPLOC4")
        static ClientProt /* 16 bytes */ OPLOCT;                    // = ClientProt(69, 17, "OPLOCT")
        static ClientProt /* 16 bytes */ IF_PLAYER;                 // = ClientProt(70, -1, "IF_PLAYER")
        static ClientProt /* 16 bytes */ IF_BUTTON7;                // = ClientProt(71, 8, "IF_BUTTON7")
        static ClientProt /* 16 bytes */ TRANSMITVAR_VERIFYID;      // = ClientProt(72, 4, "TRANSMITVAR_VERIFYID")
        static ClientProt /* 16 bytes */ OPNPC6;                    // = ClientProt(73, 3, "OPNPC6")
        static ClientProt /* 16 bytes */ OPPLAYER3;                 // = ClientProt(74, 3, "OPPLAYER3")
        static ClientProt /* 16 bytes */ ADD_NEW_EMAIL_ADDRESS;     // = ClientProt(75, -2, "ADD_NEW_EMAIL_ADDRESS")
        static ClientProt /* 16 bytes */ OPOBJ4;                    // = ClientProt(76, 7, "OPOBJ4")
        static ClientProt /* 16 bytes */ REFLECTION_CHECK_REPLY;    // = ClientProt(77, -1, "REFLECTION_CHECK_REPLY")
        static ClientProt /* 16 bytes */ MOVE_SCRIPTED;             // = ClientProt(78, 5, "MOVE_SCRIPTED")
        static ClientProt /* 16 bytes */ SET_CHATFILTERSETTINGS;    // = ClientProt(79, 3, "SET_CHATFILTERSETTINGS")
        static ClientProt /* 16 bytes */ OPOBJ3;                    // = ClientProt(80, 7, "OPOBJ3")
        static ClientProt /* 16 bytes */ IGNORE_SETNOTES;           // = ClientProt(81, -1, "IGNORE_SETNOTES")
        static ClientProt /* 16 bytes */ IF_BUTTON10;               // = ClientProt(82, 8, "IF_BUTTON10")
        static ClientProt /* 16 bytes */ FRIEND_SETRANK;            // = ClientProt(83, -1, "FRIEND_SETRANK")
        static ClientProt /* 16 bytes */ FRIENDLIST_ADD;            // = ClientProt(84, -1, "FRIENDLIST_ADD")
        static ClientProt /* 16 bytes */ CREATE_LOG_PROGRESS;       // = ClientProt(85, 1, "CREATE_LOG_PROGRESS")
        static ClientProt                                           /* 16 bytes */
            UID_PASSPORT_RESEND_REQUEST;                       // = ClientProt(86, 0, "UID_PASSPORT_RESEND_REQUEST")
        static ClientProt /* 16 bytes */ IF_BUTTON5;           // = ClientProt(87, 8, "IF_BUTTON5")
        static ClientProt /* 16 bytes */ IF_TEXT_CHANGE;       // = ClientProt(88, -2, "IF_TEXT_CHANGE")
        static ClientProt /* 16 bytes */ OPPLAYER6;            // = ClientProt(89, 3, "OPPLAYER6")
        static ClientProt /* 16 bytes */ IF_BUTTON2;           // = ClientProt(90, 8, "IF_BUTTON2")
        static ClientProt /* 16 bytes */ CUTSCENE_FINISHED;    // = ClientProt(91, 1, "CUTSCENE_FINISHED")
        static ClientProt /* 16 bytes */ RESUME_P_HSLDIALOG;   // = ClientProt(92, 2, "RESUME_P_HSLDIALOG")
        static ClientProt /* 16 bytes */ CLANCHANNEL_KICKUSER; // = ClientProt(93, -1, "CLANCHANNEL_KICKUSER")
        static ClientProt /* 16 bytes */ WINDOW_STATUS;        // = ClientProt(94, 6, "WINDOW_STATUS")
        static ClientProt                                      /* 16 bytes */
            AFFINEDCLANSETTINGS_SETMUTED_FROMCHANNEL; // = ClientProt(95, -1, "AFFINEDCLANSETTINGS_SETMUTED_FROMCHANNEL")
        static ClientProt /* 16 bytes */ CLAN_KICKUSER;            // = ClientProt(96, -1, "CLAN_KICKUSER")
        static ClientProt /* 16 bytes */ ABORT_P_DIALOG;           // = ClientProt(97, 0, "ABORT_P_DIALOG")
        static ClientProt /* 16 bytes */ AUTO_SETUP_RESULT;        // = ClientProt(98, 18, "AUTO_SETUP_RESULT")
        static ClientProt /* 16 bytes */ OPLOC5;                   // = ClientProt(99, 9, "OPLOC5")
        static ClientProt /* 16 bytes */ AUTO_SETUP_HTML5_RESULT;  // = ClientProt(100, 9, "AUTO_SETUP_HTML5_RESULT")
        static ClientProt /* 16 bytes */ OPPLAYER2;                // = ClientProt(101, 3, "OPPLAYER2")
        static ClientProt /* 16 bytes */ CREATE_CHECK_NAME;        // = ClientProt(102, -1, "CREATE_CHECK_NAME")
        static ClientProt /* 16 bytes */ DETECT_MODIFIED_CLIENT;   // = ClientProt(103, 4, "DETECT_MODIFIED_CLIENT")
        static ClientProt /* 16 bytes */ RESUME_P_NAMEDIALOG;      // = ClientProt(104, -1, "RESUME_P_NAMEDIALOG")
        static ClientProt /* 16 bytes */ SEND_PING_REPLY;          // = ClientProt(105, 9, "SEND_PING_REPLY")
        static ClientProt /* 16 bytes */ WORLDLIST_FETCH;          // = ClientProt(106, 4, "WORLDLIST_FETCH")
        static ClientProt /* 16 bytes */ MOVE_GAMECLICK;           // = ClientProt(107, 5, "MOVE_GAMECLICK")
        static ClientProt /* 16 bytes */ OPLOC3;                   // = ClientProt(108, 9, "OPLOC3")
        static ClientProt /* 16 bytes */ OPLOC6;                   // = ClientProt(109, 9, "OPLOC6")
        static ClientProt /* 16 bytes */ FRIENDLIST_DEL;           // = ClientProt(110, -1, "FRIENDLIST_DEL")
        static ClientProt /* 16 bytes */ OPNPC4;                   // = ClientProt(111, 3, "OPNPC4")
        static ClientProt /* 16 bytes */ OPNPC1;                   // = ClientProt(112, 3, "OPNPC1")
        static ClientProt /* 16 bytes */ CHAT_SETMODE;             // = ClientProt(113, 1, "CHAT_SETMODE")
        static ClientProt /* 16 bytes */ CUTSCENE2D_FINISHED;      // = ClientProt(114, 3, "CUTSCENE2D_FINISHED")
        static ClientProt /* 16 bytes */ FACE_SQUARE;              // = ClientProt(115, 4, "FACE_SQUARE")
        static ClientProt /* 16 bytes */ MESSAGE_QUICKCHAT_PUBLIC; // = ClientProt(116, -1, "MESSAGE_QUICKCHAT_PUBLIC")
        static ClientProt /* 16 bytes */ IF_BUTTON4;               // = ClientProt(117, 8, "IF_BUTTON4")
        static ClientProt /* 16 bytes */ OPNPC5;                   // = ClientProt(118, 3, "OPNPC5")
        static ClientProt                                          /* 16 bytes */
            RESUME_P_CLANFORUMQFCDIALOG;                       // = ClientProt(119, -1, "RESUME_P_CLANFORUMQFCDIALOG")
        static ClientProt /* 16 bytes */ EVENT_APPLET_FOCUS;   // = ClientProt(120, 1, "EVENT_APPLET_FOCUS")
        static ClientProt /* 16 bytes */ IF_BUTTONT;           // = ClientProt(121, 16, "IF_BUTTONT")
        static ClientProt /* 16 bytes */ OPENGLX_SUCCESS;      // = ClientProt(122, 1, "OPENGLX_SUCCESS")
        static ClientProt /* 16 bytes */ OPLOC1;               // = ClientProt(123, 9, "OPLOC1")
        static ClientProt /* 16 bytes */ RESUME_P_OBJDIALOG;   // = ClientProt(124, 2, "RESUME_P_OBJDIALOG")
        static ClientProt /* 16 bytes */ DIRECTX_FAILURE;      // = ClientProt(125, 2, "DIRECTX_FAILURE")
        static ClientProt /* 16 bytes */ NO_TIMEOUT;           // = ClientProt(126, 0, "NO_TIMEOUT")
        static ClientProt /* 16 bytes */ CHANGE_EMAIL_ADDRESS; // = ClientProt(127, -2, "CHANGE_EMAIL_ADDRESS")
        static ClientProt /* 16 bytes */ IF_BUTTON1;           // = ClientProt(128, 8, "IF_BUTTON1")
        static ClientProt /* 16 bytes */ RESUME_P_LONGDIALOG;  // = ClientProt(129, 8, "RESUME_P_LONGDIALOG")

        // data members, from how the methods use this: 16 bytes
        int field_0;   // offset 0
        int field_4;   // offset 4
        char* field_8; // offset 8
    };

    // 0x1039b55d0, 1080 bytes, __common; set at startup by ___cxx_global_var_init.19
    eastl::fixed_vector<ClientProt_const*, 130ul, true, eastl::allocator> ClientProt::m_typeLookup =
        fixed_vector<ClientProt_const*, 130ul, true, eastl::allocator>();

    // 0x1039b5a08, 16 bytes, __common; set at startup by ___cxx_global_var_init.20
    ClientProt ClientProt::EVENT_NATIVE_MOUSE_CLICK = ClientProt(0, 7, "EVENT_NATIVE_MOUSE_CLICK");

    // 0x1039b5a18, 16 bytes, __common; set at startup by ___cxx_global_var_init.22
    ClientProt ClientProt::OPPLAYER5 = ClientProt(1, 3, "OPPLAYER5");

    // 0x1039b5a28, 16 bytes, __common; set at startup by ___cxx_global_var_init.24
    ClientProt ClientProt::RESUME_P_STRINGDIALOG = ClientProt(2, -1, "RESUME_P_STRINGDIALOG");

    // 0x1039b5a38, 16 bytes, __common; set at startup by ___cxx_global_var_init.26
    ClientProt ClientProt::NATIVE_LIBRARY_FAILURE = ClientProt(3, -1, "NATIVE_LIBRARY_FAILURE");

    // 0x1039b5a48, 16 bytes, __common; set at startup by ___cxx_global_var_init.28
    ClientProt ClientProt::AFFINEDCLANSETTINGS_ADDBANNED_FROMCHANNEL =
        ClientProt(4, -1, "AFFINEDCLANSETTINGS_ADDBANNED_FROMCHANNEL");

    // 0x1039b5a58, 16 bytes, __common; set at startup by ___cxx_global_var_init.30
    ClientProt ClientProt::SEND_SNAPSHOT = ClientProt(5, -1, "SEND_SNAPSHOT");

    // 0x1039b5a68, 16 bytes, __common; set at startup by ___cxx_global_var_init.32
    ClientProt ClientProt::MOVE_MINIMAPCLICK = ClientProt(6, 18, "MOVE_MINIMAPCLICK");

    // 0x1039b5a78, 16 bytes, __common; set at startup by ___cxx_global_var_init.34
    ClientProt ClientProt::EVENT_NATIVE_MOUSE_MOVE = ClientProt(7, -1, "EVENT_NATIVE_MOUSE_MOVE");

    // 0x1039b5a88, 16 bytes, __common; set at startup by ___cxx_global_var_init.36
    ClientProt ClientProt::SEND_EMAIL_VALIDATION_CODE = ClientProt(8, -1, "SEND_EMAIL_VALIDATION_CODE");

    // 0x1039b5a98, 16 bytes, __common; set at startup by ___cxx_global_var_init.38
    ClientProt ClientProt::MESSAGE_PRIVATE = ClientProt(9, -2, "MESSAGE_PRIVATE");

    // 0x1039b5aa8, 16 bytes, __common; set at startup by ___cxx_global_var_init.40
    ClientProt ClientProt::CLIENT_DETAILOPTIONS_STATUS = ClientProt(10, -1, "CLIENT_DETAILOPTIONS_STATUS");

    // 0x1039b5ab8, 16 bytes, __common; set at startup by ___cxx_global_var_init.42
    ClientProt ClientProt::OPNPCT = ClientProt(11, 11, "OPNPCT");

    // 0x1039b5ac8, 16 bytes, __common; set at startup by ___cxx_global_var_init.44
    ClientProt ClientProt::OPPLAYER7 = ClientProt(12, 3, "OPPLAYER7");

    // 0x1039b5ad8, 16 bytes, __common; set at startup by ___cxx_global_var_init.46
    ClientProt ClientProt::SIMPLE_TOOLKIT_CHANGE = ClientProt(13, 1, "SIMPLE_TOOLKIT_CHANGE");

    // 0x1039b5ae8, 16 bytes, __common; set at startup by ___cxx_global_var_init.48
    ClientProt ClientProt::OPPLAYER4 = ClientProt(14, 3, "OPPLAYER4");

    // 0x1039b5af8, 16 bytes, __common; set at startup by ___cxx_global_var_init.50
    ClientProt ClientProt::OPPLAYER10 = ClientProt(15, 3, "OPPLAYER10");

    // 0x1039b5b08, 16 bytes, __common; set at startup by ___cxx_global_var_init.52
    ClientProt ClientProt::IF_BUTTON3 = ClientProt(16, 8, "IF_BUTTON3");

    // 0x1039b5b18, 16 bytes, __common; set at startup by ___cxx_global_var_init.54
    ClientProt ClientProt::URL_REQUEST = ClientProt(17, -2, "URL_REQUEST");

    // 0x1039b5b28, 16 bytes, __common; set at startup by ___cxx_global_var_init.56
    ClientProt ClientProt::OPOBJT = ClientProt(18, 15, "OPOBJT");

    // 0x1039b5b38, 16 bytes, __common; set at startup by ___cxx_global_var_init.58
    ClientProt ClientProt::OPOBJ6 = ClientProt(19, 7, "OPOBJ6");

    // 0x1039b5b48, 16 bytes, __common; set at startup by ___cxx_global_var_init.60
    ClientProt ClientProt::OPOBJ1 = ClientProt(20, 7, "OPOBJ1");

    // 0x1039b5b58, 16 bytes, __common; set at startup by ___cxx_global_var_init.62
    ClientProt ClientProt::IF_BUTTON8 = ClientProt(21, 8, "IF_BUTTON8");

    // 0x1039b5b68, 16 bytes, __common; set at startup by ___cxx_global_var_init.64
    ClientProt ClientProt::IF_BUTTON9 = ClientProt(22, 8, "IF_BUTTON9");

    // 0x1039b5b78, 16 bytes, __common; set at startup by ___cxx_global_var_init.66
    ClientProt ClientProt::CREATE_ACCOUNT = ClientProt(23, -2, "CREATE_ACCOUNT");

    // 0x1039b5b88, 16 bytes, __common; set at startup by ___cxx_global_var_init.68
    ClientProt ClientProt::TELEMETRY_REQUEST_FULL_RESYNC = ClientProt(24, 0, "TELEMETRY_REQUEST_FULL_RESYNC");

    // 0x1039b5b98, 16 bytes, __common; set at startup by ___cxx_global_var_init.70
    ClientProt ClientProt::STORE_SERVERPERM_VARCS = ClientProt(25, -2, "STORE_SERVERPERM_VARCS");

    // 0x1039b5ba8, 16 bytes, __common; set at startup by ___cxx_global_var_init.72
    ClientProt ClientProt::OPPLAYER9 = ClientProt(26, 3, "OPPLAYER9");

    // 0x1039b5bb8, 16 bytes, __common; set at startup by ___cxx_global_var_init.74
    ClientProt ClientProt::OPOBJ5 = ClientProt(27, 7, "OPOBJ5");

    // 0x1039b5bc8, 16 bytes, __common; set at startup by ___cxx_global_var_init.76
    ClientProt ClientProt::MAP_BUILD_STUCK = ClientProt(28, 15, "MAP_BUILD_STUCK");

    // 0x1039b5bd8, 16 bytes, __common; set at startup by ___cxx_global_var_init.78
    ClientProt ClientProt::OPPLAYER1 = ClientProt(29, 3, "OPPLAYER1");

    // 0x1039b5be8, 16 bytes, __common; set at startup by ___cxx_global_var_init.80
    ClientProt ClientProt::CREATE_SUGGEST_NAMES = ClientProt(30, 0, "CREATE_SUGGEST_NAMES");

    // 0x1039b5bf8, 16 bytes, __common; set at startup by ___cxx_global_var_init.82
    ClientProt ClientProt::OPNPC2 = ClientProt(31, 3, "OPNPC2");

    // 0x1039b5c08, 16 bytes, __common; set at startup by ___cxx_global_var_init.84
    ClientProt ClientProt::EVENT_KEYBOARD = ClientProt(32, -2, "EVENT_KEYBOARD");

    // 0x1039b5c18, 16 bytes, __common; set at startup by ___cxx_global_var_init.86
    ClientProt ClientProt::EVENT_CAMERA_POSITION = ClientProt(33, 4, "EVENT_CAMERA_POSITION");

    // 0x1039b5c28, 16 bytes, __common; set at startup by ___cxx_global_var_init.88
    ClientProt ClientProt::MAP_BUILD_COMPLETE = ClientProt(34, 4, "MAP_BUILD_COMPLETE");

    // 0x1039b5c38, 16 bytes, __common; set at startup by ___cxx_global_var_init.90
    ClientProt ClientProt::FRIEND_SETNOTES = ClientProt(35, -1, "FRIEND_SETNOTES");

    // 0x1039b5c48, 16 bytes, __common; set at startup by ___cxx_global_var_init.92
    ClientProt ClientProt::RESUME_PAUSEBUTTON = ClientProt(36, 6, "RESUME_PAUSEBUTTON");

    // 0x1039b5c58, 16 bytes, __common; set at startup by ___cxx_global_var_init.94
    ClientProt ClientProt::IGNORELIST_ADD = ClientProt(37, -1, "IGNORELIST_ADD");

    // 0x1039b5c68, 16 bytes, __common; set at startup by ___cxx_global_var_init.96
    ClientProt ClientProt::PING_STATISTICS = ClientProt(38, 4, "PING_STATISTICS");

    // 0x1039b5c78, 16 bytes, __common; set at startup by ___cxx_global_var_init.98
    ClientProt ClientProt::EVENT_MOUSE_CLICK = ClientProt(39, 6, "EVENT_MOUSE_CLICK");

    // 0x1039b5c88, 16 bytes, __common; set at startup by ___cxx_global_var_init.100
    ClientProt ClientProt::OPNPC3 = ClientProt(40, 3, "OPNPC3");

    // 0x1039b5c98, 16 bytes, __common; set at startup by ___cxx_global_var_init.102
    ClientProt ClientProt::IF_VALUE_CHANGE_32 = ClientProt(41, 11, "IF_VALUE_CHANGE_32");

    // 0x1039b5ca8, 16 bytes, __common; set at startup by ___cxx_global_var_init.104
    ClientProt ClientProt::IF_BUTTOND = ClientProt(42, 16, "IF_BUTTOND");

    // 0x1039b5cb8, 16 bytes, __common; set at startup by ___cxx_global_var_init.106
    ClientProt ClientProt::SOUND_SONGEND = ClientProt(43, 4, "SOUND_SONGEND");

    // 0x1039b5cc8, 16 bytes, __common; set at startup by ___cxx_global_var_init.108
    ClientProt ClientProt::IF_CRMVIEW_OP = ClientProt(44, 22, "IF_CRMVIEW_OP");

    // 0x1039b5cd8, 16 bytes, __common; set at startup by ___cxx_global_var_init.110
    ClientProt ClientProt::OPLOC2 = ClientProt(45, 9, "OPLOC2");

    // 0x1039b5ce8, 16 bytes, __common; set at startup by ___cxx_global_var_init.112
    ClientProt ClientProt::API_CALL = ClientProt(46, -2, "API_CALL");

    // 0x1039b5cf8, 16 bytes, __common; set at startup by ___cxx_global_var_init.114
    ClientProt ClientProt::CLIENT_CHEAT = ClientProt(47, -1, "CLIENT_CHEAT");

    // 0x1039b5d08, 16 bytes, __common; set at startup by ___cxx_global_var_init.116
    ClientProt ClientProt::IF_VALUE_CHANGE = ClientProt(48, 9, "IF_VALUE_CHANGE");

    // 0x1039b5d18, 16 bytes, __common; set at startup by ___cxx_global_var_init.118
    ClientProt ClientProt::RESUME_P_COUNTDIALOG = ClientProt(49, 4, "RESUME_P_COUNTDIALOG");

    // 0x1039b5d28, 16 bytes, __common; set at startup by ___cxx_global_var_init.120
    ClientProt ClientProt::CLOSE_MODAL = ClientProt(50, 0, "CLOSE_MODAL");

    // 0x1039b5d38, 16 bytes, __common; set at startup by ___cxx_global_var_init.122
    ClientProt ClientProt::OPPLAYER8 = ClientProt(51, 3, "OPPLAYER8");

    // 0x1039b5d48, 16 bytes, __common; set at startup by ___cxx_global_var_init.124
    ClientProt ClientProt::IGNORELIST_DEL = ClientProt(52, -1, "IGNORELIST_DEL");

    // 0x1039b5d58, 16 bytes, __common; set at startup by ___cxx_global_var_init.126
    ClientProt ClientProt::IF_BUTTON6 = ClientProt(53, 8, "IF_BUTTON6");

    // 0x1039b5d68, 16 bytes, __common; set at startup by ___cxx_global_var_init.128
    ClientProt ClientProt::OPPLAYERT = ClientProt(54, 11, "OPPLAYERT");

    // 0x1039b5d78, 16 bytes, __common; set at startup by ___cxx_global_var_init.130
    ClientProt ClientProt::CLIENT_COMPRESSEDTEXTUREFORMAT_SUPPORT =
        ClientProt(55, -2, "CLIENT_COMPRESSEDTEXTUREFORMAT_SUPPORT");

    // 0x1039b5d88, 16 bytes, __common; set at startup by ___cxx_global_var_init.132
    ClientProt ClientProt::OPOBJ2 = ClientProt(56, 7, "OPOBJ2");

    // 0x1039b5d98, 16 bytes, __common; set at startup by ___cxx_global_var_init.134
    ClientProt ClientProt::CREATE_CHECK_EMAIL = ClientProt(57, -2, "CREATE_CHECK_EMAIL");

    // 0x1039b5da8, 16 bytes, __common; set at startup by ___cxx_global_var_init.136
    ClientProt ClientProt::SOUND_SONGPRELOADED = ClientProt(58, 4, "SOUND_SONGPRELOADED");

    // 0x1039b5db8, 16 bytes, __common; set at startup by ___cxx_global_var_init.138
    ClientProt ClientProt::CLAN_JOINCHAT_LEAVECHAT = ClientProt(59, -1, "CLAN_JOINCHAT_LEAVECHAT");

    // 0x1039b5dc8, 16 bytes, __common; set at startup by ___cxx_global_var_init.140
    ClientProt ClientProt::REGISTER_DEVICE = ClientProt(60, -2, "REGISTER_DEVICE");

    // 0x1039b5dd8, 16 bytes, __common; set at startup by ___cxx_global_var_init.142
    ClientProt ClientProt::APCOORDT = ClientProt(61, 12, "APCOORDT");

    // 0x1039b5de8, 16 bytes, __common; set at startup by ___cxx_global_var_init.144
    ClientProt ClientProt::NOTIFY_MOBILE_BILLING_ELIGIBILITY = ClientProt(62, 1, "NOTIFY_MOBILE_BILLING_ELIGIBILITY");

    // 0x1039b5df8, 16 bytes, __common; set at startup by ___cxx_global_var_init.146
    ClientProt ClientProt::MESSAGE_PUBLIC = ClientProt(63, -1, "MESSAGE_PUBLIC");

    // 0x1039b5e08, 16 bytes, __common; set at startup by ___cxx_global_var_init.148
    ClientProt ClientProt::CLICKWORLDMAP = ClientProt(64, 4, "CLICKWORLDMAP");

    // 0x1039b5e18, 16 bytes, __common; set at startup by ___cxx_global_var_init.150
    ClientProt ClientProt::BUG_REPORT = ClientProt(65, -2, "BUG_REPORT");

    // 0x1039b5e28, 16 bytes, __common; set at startup by ___cxx_global_var_init.152
    ClientProt ClientProt::MESSAGE_QUICKCHAT_PRIVATE = ClientProt(66, -1, "MESSAGE_QUICKCHAT_PRIVATE");

    // 0x1039b5e38, 16 bytes, __common; set at startup by ___cxx_global_var_init.154
    ClientProt ClientProt::EVENT_MOUSE_MOVE = ClientProt(67, -1, "EVENT_MOUSE_MOVE");

    // 0x1039b5e48, 16 bytes, __common; set at startup by ___cxx_global_var_init.156
    ClientProt ClientProt::OPLOC4 = ClientProt(68, 9, "OPLOC4");

    // 0x1039b5e58, 16 bytes, __common; set at startup by ___cxx_global_var_init.158
    ClientProt ClientProt::OPLOCT = ClientProt(69, 17, "OPLOCT");

    // 0x1039b5e68, 16 bytes, __common; set at startup by ___cxx_global_var_init.160
    ClientProt ClientProt::IF_PLAYER = ClientProt(70, -1, "IF_PLAYER");

    // 0x1039b5e78, 16 bytes, __common; set at startup by ___cxx_global_var_init.162
    ClientProt ClientProt::IF_BUTTON7 = ClientProt(71, 8, "IF_BUTTON7");

    // 0x1039b5e88, 16 bytes, __common; set at startup by ___cxx_global_var_init.164
    ClientProt ClientProt::TRANSMITVAR_VERIFYID = ClientProt(72, 4, "TRANSMITVAR_VERIFYID");

    // 0x1039b5e98, 16 bytes, __common; set at startup by ___cxx_global_var_init.166
    ClientProt ClientProt::OPNPC6 = ClientProt(73, 3, "OPNPC6");

    // 0x1039b5ea8, 16 bytes, __common; set at startup by ___cxx_global_var_init.168
    ClientProt ClientProt::OPPLAYER3 = ClientProt(74, 3, "OPPLAYER3");

    // 0x1039b5eb8, 16 bytes, __common; set at startup by ___cxx_global_var_init.170
    ClientProt ClientProt::ADD_NEW_EMAIL_ADDRESS = ClientProt(75, -2, "ADD_NEW_EMAIL_ADDRESS");

    // 0x1039b5ec8, 16 bytes, __common; set at startup by ___cxx_global_var_init.172
    ClientProt ClientProt::OPOBJ4 = ClientProt(76, 7, "OPOBJ4");

    // 0x1039b5ed8, 16 bytes, __common; set at startup by ___cxx_global_var_init.174
    ClientProt ClientProt::REFLECTION_CHECK_REPLY = ClientProt(77, -1, "REFLECTION_CHECK_REPLY");

    // 0x1039b5ee8, 16 bytes, __common; set at startup by ___cxx_global_var_init.176
    ClientProt ClientProt::MOVE_SCRIPTED = ClientProt(78, 5, "MOVE_SCRIPTED");

    // 0x1039b5ef8, 16 bytes, __common; set at startup by ___cxx_global_var_init.178
    ClientProt ClientProt::SET_CHATFILTERSETTINGS = ClientProt(79, 3, "SET_CHATFILTERSETTINGS");

    // 0x1039b5f08, 16 bytes, __common; set at startup by ___cxx_global_var_init.180
    ClientProt ClientProt::OPOBJ3 = ClientProt(80, 7, "OPOBJ3");

    // 0x1039b5f18, 16 bytes, __common; set at startup by ___cxx_global_var_init.182
    ClientProt ClientProt::IGNORE_SETNOTES = ClientProt(81, -1, "IGNORE_SETNOTES");

    // 0x1039b5f28, 16 bytes, __common; set at startup by ___cxx_global_var_init.184
    ClientProt ClientProt::IF_BUTTON10 = ClientProt(82, 8, "IF_BUTTON10");

    // 0x1039b5f38, 16 bytes, __common; set at startup by ___cxx_global_var_init.186
    ClientProt ClientProt::FRIEND_SETRANK = ClientProt(83, -1, "FRIEND_SETRANK");

    // 0x1039b5f48, 16 bytes, __common; set at startup by ___cxx_global_var_init.188
    ClientProt ClientProt::FRIENDLIST_ADD = ClientProt(84, -1, "FRIENDLIST_ADD");

    // 0x1039b5f58, 16 bytes, __common; set at startup by ___cxx_global_var_init.190
    ClientProt ClientProt::CREATE_LOG_PROGRESS = ClientProt(85, 1, "CREATE_LOG_PROGRESS");

    // 0x1039b5f68, 16 bytes, __common; set at startup by ___cxx_global_var_init.192
    ClientProt ClientProt::UID_PASSPORT_RESEND_REQUEST = ClientProt(86, 0, "UID_PASSPORT_RESEND_REQUEST");

    // 0x1039b5f78, 16 bytes, __common; set at startup by ___cxx_global_var_init.194
    ClientProt ClientProt::IF_BUTTON5 = ClientProt(87, 8, "IF_BUTTON5");

    // 0x1039b5f88, 16 bytes, __common; set at startup by ___cxx_global_var_init.196
    ClientProt ClientProt::IF_TEXT_CHANGE = ClientProt(88, -2, "IF_TEXT_CHANGE");

    // 0x1039b5f98, 16 bytes, __common; set at startup by ___cxx_global_var_init.198
    ClientProt ClientProt::OPPLAYER6 = ClientProt(89, 3, "OPPLAYER6");

    // 0x1039b5fa8, 16 bytes, __common; set at startup by ___cxx_global_var_init.200
    ClientProt ClientProt::IF_BUTTON2 = ClientProt(90, 8, "IF_BUTTON2");

    // 0x1039b5fb8, 16 bytes, __common; set at startup by ___cxx_global_var_init.202
    ClientProt ClientProt::CUTSCENE_FINISHED = ClientProt(91, 1, "CUTSCENE_FINISHED");

    // 0x1039b5fc8, 16 bytes, __common; set at startup by ___cxx_global_var_init.204
    ClientProt ClientProt::RESUME_P_HSLDIALOG = ClientProt(92, 2, "RESUME_P_HSLDIALOG");

    // 0x1039b5fd8, 16 bytes, __common; set at startup by ___cxx_global_var_init.206
    ClientProt ClientProt::CLANCHANNEL_KICKUSER = ClientProt(93, -1, "CLANCHANNEL_KICKUSER");

    // 0x1039b5fe8, 16 bytes, __common; set at startup by ___cxx_global_var_init.208
    ClientProt ClientProt::WINDOW_STATUS = ClientProt(94, 6, "WINDOW_STATUS");

    // 0x1039b5ff8, 16 bytes, __common; set at startup by ___cxx_global_var_init.210
    ClientProt ClientProt::AFFINEDCLANSETTINGS_SETMUTED_FROMCHANNEL =
        ClientProt(95, -1, "AFFINEDCLANSETTINGS_SETMUTED_FROMCHANNEL");

    // 0x1039b6008, 16 bytes, __common; set at startup by ___cxx_global_var_init.212
    ClientProt ClientProt::CLAN_KICKUSER = ClientProt(96, -1, "CLAN_KICKUSER");

    // 0x1039b6018, 16 bytes, __common; set at startup by ___cxx_global_var_init.214
    ClientProt ClientProt::ABORT_P_DIALOG = ClientProt(97, 0, "ABORT_P_DIALOG");

    // 0x1039b6028, 16 bytes, __common; set at startup by ___cxx_global_var_init.216
    ClientProt ClientProt::AUTO_SETUP_RESULT = ClientProt(98, 18, "AUTO_SETUP_RESULT");

    // 0x1039b6038, 16 bytes, __common; set at startup by ___cxx_global_var_init.218
    ClientProt ClientProt::OPLOC5 = ClientProt(99, 9, "OPLOC5");

    // 0x1039b6048, 16 bytes, __common; set at startup by ___cxx_global_var_init.220
    ClientProt ClientProt::AUTO_SETUP_HTML5_RESULT = ClientProt(100, 9, "AUTO_SETUP_HTML5_RESULT");

    // 0x1039b6058, 16 bytes, __common; set at startup by ___cxx_global_var_init.222
    ClientProt ClientProt::OPPLAYER2 = ClientProt(101, 3, "OPPLAYER2");

    // 0x1039b6068, 16 bytes, __common; set at startup by ___cxx_global_var_init.224
    ClientProt ClientProt::CREATE_CHECK_NAME = ClientProt(102, -1, "CREATE_CHECK_NAME");

    // 0x1039b6078, 16 bytes, __common; set at startup by ___cxx_global_var_init.226
    ClientProt ClientProt::DETECT_MODIFIED_CLIENT = ClientProt(103, 4, "DETECT_MODIFIED_CLIENT");

    // 0x1039b6088, 16 bytes, __common; set at startup by ___cxx_global_var_init.228
    ClientProt ClientProt::RESUME_P_NAMEDIALOG = ClientProt(104, -1, "RESUME_P_NAMEDIALOG");

    // 0x1039b6098, 16 bytes, __common; set at startup by ___cxx_global_var_init.230
    ClientProt ClientProt::SEND_PING_REPLY = ClientProt(105, 9, "SEND_PING_REPLY");

    // 0x1039b60a8, 16 bytes, __common; set at startup by ___cxx_global_var_init.232
    ClientProt ClientProt::WORLDLIST_FETCH = ClientProt(106, 4, "WORLDLIST_FETCH");

    // 0x1039b60b8, 16 bytes, __common; set at startup by ___cxx_global_var_init.234
    ClientProt ClientProt::MOVE_GAMECLICK = ClientProt(107, 5, "MOVE_GAMECLICK");

    // 0x1039b60c8, 16 bytes, __common; set at startup by ___cxx_global_var_init.236
    ClientProt ClientProt::OPLOC3 = ClientProt(108, 9, "OPLOC3");

    // 0x1039b60d8, 16 bytes, __common; set at startup by ___cxx_global_var_init.238
    ClientProt ClientProt::OPLOC6 = ClientProt(109, 9, "OPLOC6");

    // 0x1039b60e8, 16 bytes, __common; set at startup by ___cxx_global_var_init.240
    ClientProt ClientProt::FRIENDLIST_DEL = ClientProt(110, -1, "FRIENDLIST_DEL");

    // 0x1039b60f8, 16 bytes, __common; set at startup by ___cxx_global_var_init.242
    ClientProt ClientProt::OPNPC4 = ClientProt(111, 3, "OPNPC4");

    // 0x1039b6108, 16 bytes, __common; set at startup by ___cxx_global_var_init.244
    ClientProt ClientProt::OPNPC1 = ClientProt(112, 3, "OPNPC1");

    // 0x1039b6118, 16 bytes, __common; set at startup by ___cxx_global_var_init.246
    ClientProt ClientProt::CHAT_SETMODE = ClientProt(113, 1, "CHAT_SETMODE");

    // 0x1039b6128, 16 bytes, __common; set at startup by ___cxx_global_var_init.248
    ClientProt ClientProt::CUTSCENE2D_FINISHED = ClientProt(114, 3, "CUTSCENE2D_FINISHED");

    // 0x1039b6138, 16 bytes, __common; set at startup by ___cxx_global_var_init.250
    ClientProt ClientProt::FACE_SQUARE = ClientProt(115, 4, "FACE_SQUARE");

    // 0x1039b6148, 16 bytes, __common; set at startup by ___cxx_global_var_init.252
    ClientProt ClientProt::MESSAGE_QUICKCHAT_PUBLIC = ClientProt(116, -1, "MESSAGE_QUICKCHAT_PUBLIC");

    // 0x1039b6158, 16 bytes, __common; set at startup by ___cxx_global_var_init.254
    ClientProt ClientProt::IF_BUTTON4 = ClientProt(117, 8, "IF_BUTTON4");

    // 0x1039b6168, 16 bytes, __common; set at startup by ___cxx_global_var_init.256
    ClientProt ClientProt::OPNPC5 = ClientProt(118, 3, "OPNPC5");

    // 0x1039b6178, 16 bytes, __common; set at startup by ___cxx_global_var_init.258
    ClientProt ClientProt::RESUME_P_CLANFORUMQFCDIALOG = ClientProt(119, -1, "RESUME_P_CLANFORUMQFCDIALOG");

    // 0x1039b6188, 16 bytes, __common; set at startup by ___cxx_global_var_init.260
    ClientProt ClientProt::EVENT_APPLET_FOCUS = ClientProt(120, 1, "EVENT_APPLET_FOCUS");

    // 0x1039b6198, 16 bytes, __common; set at startup by ___cxx_global_var_init.262
    ClientProt ClientProt::IF_BUTTONT = ClientProt(121, 16, "IF_BUTTONT");

    // 0x1039b61a8, 16 bytes, __common; set at startup by ___cxx_global_var_init.264
    ClientProt ClientProt::OPENGLX_SUCCESS = ClientProt(122, 1, "OPENGLX_SUCCESS");

    // 0x1039b61b8, 16 bytes, __common; set at startup by ___cxx_global_var_init.266
    ClientProt ClientProt::OPLOC1 = ClientProt(123, 9, "OPLOC1");

    // 0x1039b61c8, 16 bytes, __common; set at startup by ___cxx_global_var_init.268
    ClientProt ClientProt::RESUME_P_OBJDIALOG = ClientProt(124, 2, "RESUME_P_OBJDIALOG");

    // 0x1039b61d8, 16 bytes, __common; set at startup by ___cxx_global_var_init.270
    ClientProt ClientProt::DIRECTX_FAILURE = ClientProt(125, 2, "DIRECTX_FAILURE");

    // 0x1039b61e8, 16 bytes, __common; set at startup by ___cxx_global_var_init.272
    ClientProt ClientProt::NO_TIMEOUT = ClientProt(126, 0, "NO_TIMEOUT");

    // 0x1039b61f8, 16 bytes, __common; set at startup by ___cxx_global_var_init.274
    ClientProt ClientProt::CHANGE_EMAIL_ADDRESS = ClientProt(127, -2, "CHANGE_EMAIL_ADDRESS");

    // 0x1039b6208, 16 bytes, __common; set at startup by ___cxx_global_var_init.276
    ClientProt ClientProt::IF_BUTTON1 = ClientProt(128, 8, "IF_BUTTON1");

    // 0x1039b6218, 16 bytes, __common; set at startup by ___cxx_global_var_init.278
    ClientProt ClientProt::RESUME_P_LONGDIALOG = ClientProt(129, 8, "RESUME_P_LONGDIALOG");

    // 0x1004a2bf0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ClientProt::ClientProt(int, int, char const*): jumps straight to the base-object constructor

    // 0x1004a2ed0, 112 bytes, base-object constructor, inline, placed by class name
    // ClientProt::ClientProt(int, int, char const*)
    void ClientProt::ClientProt(int param_1, int param_2, char* param_3) {
        int iVar1;
        ClientProt* local_20;

        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        iVar1 = m_typeLookup.size();
        if (iVar1 != param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("pType == (int)m_typeLookup.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/network/"
                      "protocol/ClientProt.h",
                      30, "ClientProt creation error");
        }
        local_20 = this;
        m_typeLookup.push_back(&local_20);
    }

    // 0x1004a4aa0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.19
    void ___cxx_global_var_init_19() {
        new (&ClientProt::m_typeLookup) eastl::fixed_vector<ClientProt_const*, 130ul, true, eastl::allocator>();
        ___cxa_atexit(PTR__fixed_vector_100ee6cb8, &ClientProt::m_typeLookup, 4294967296);
    }

    // 0x1004a4ae0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.20
    void ___cxx_global_var_init_20() {
        new (&ClientProt::EVENT_NATIVE_MOUSE_CLICK) ClientProt(0, 7, "EVENT_NATIVE_MOUSE_CLICK");
    }

    // 0x1004a4b00, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.22
    void ___cxx_global_var_init_22() {
        new (&ClientProt::OPPLAYER5) ClientProt(1, 3, "OPPLAYER5");
    }

    // 0x1004a4b30, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.24
    void ___cxx_global_var_init_24() {
        new (&ClientProt::RESUME_P_STRINGDIALOG) ClientProt(2, -1, "RESUME_P_STRINGDIALOG");
    }

    // 0x1004a4b60, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.26
    void ___cxx_global_var_init_26() {
        new (&ClientProt::NATIVE_LIBRARY_FAILURE) ClientProt(3, -1, "NATIVE_LIBRARY_FAILURE");
    }

    // 0x1004a4b90, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.28
    void ___cxx_global_var_init_28() {
        new (&ClientProt::AFFINEDCLANSETTINGS_ADDBANNED_FROMCHANNEL)
            ClientProt(4, -1, "AFFINEDCLANSETTINGS_ADDBANNED_FROMCHANNEL");
    }

    // 0x1004a4bc0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.30
    void ___cxx_global_var_init_30() {
        new (&ClientProt::SEND_SNAPSHOT) ClientProt(5, -1, "SEND_SNAPSHOT");
    }

    // 0x1004a4bf0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.32
    void ___cxx_global_var_init_32() {
        new (&ClientProt::MOVE_MINIMAPCLICK) ClientProt(6, 18, "MOVE_MINIMAPCLICK");
    }

    // 0x1004a4c20, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.34
    void ___cxx_global_var_init_34() {
        new (&ClientProt::EVENT_NATIVE_MOUSE_MOVE) ClientProt(7, -1, "EVENT_NATIVE_MOUSE_MOVE");
    }

    // 0x1004a4c50, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.36
    void ___cxx_global_var_init_36() {
        new (&ClientProt::SEND_EMAIL_VALIDATION_CODE) ClientProt(8, -1, "SEND_EMAIL_VALIDATION_CODE");
    }

    // 0x1004a4c80, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.38
    void ___cxx_global_var_init_38() {
        new (&ClientProt::MESSAGE_PRIVATE) ClientProt(9, -2, "MESSAGE_PRIVATE");
    }

    // 0x1004a4cb0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.40
    void ___cxx_global_var_init_40() {
        new (&ClientProt::CLIENT_DETAILOPTIONS_STATUS) ClientProt(10, -1, "CLIENT_DETAILOPTIONS_STATUS");
    }

    // 0x1004a4ce0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.42
    void ___cxx_global_var_init_42() {
        new (&ClientProt::OPNPCT) ClientProt(11, 11, "OPNPCT");
    }

    // 0x1004a4d10, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.44
    void ___cxx_global_var_init_44() {
        new (&ClientProt::OPPLAYER7) ClientProt(12, 3, "OPPLAYER7");
    }

    // 0x1004a4d40, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.46
    void ___cxx_global_var_init_46() {
        new (&ClientProt::SIMPLE_TOOLKIT_CHANGE) ClientProt(13, 1, "SIMPLE_TOOLKIT_CHANGE");
    }

    // 0x1004a4d70, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.48
    void ___cxx_global_var_init_48() {
        new (&ClientProt::OPPLAYER4) ClientProt(14, 3, "OPPLAYER4");
    }

    // 0x1004a4da0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.50
    void ___cxx_global_var_init_50() {
        new (&ClientProt::OPPLAYER10) ClientProt(15, 3, "OPPLAYER10");
    }

    // 0x1004a4dd0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.52
    void ___cxx_global_var_init_52() {
        new (&ClientProt::IF_BUTTON3) ClientProt(16, 8, "IF_BUTTON3");
    }

    // 0x1004a4e00, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.54
    void ___cxx_global_var_init_54() {
        new (&ClientProt::URL_REQUEST) ClientProt(17, -2, "URL_REQUEST");
    }

    // 0x1004a4e30, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.56
    void ___cxx_global_var_init_56() {
        new (&ClientProt::OPOBJT) ClientProt(18, 15, "OPOBJT");
    }

    // 0x1004a4e60, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.58
    void ___cxx_global_var_init_58() {
        new (&ClientProt::OPOBJ6) ClientProt(19, 7, "OPOBJ6");
    }

    // 0x1004a4e90, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.60
    void ___cxx_global_var_init_60() {
        new (&ClientProt::OPOBJ1) ClientProt(20, 7, "OPOBJ1");
    }

    // 0x1004a4ec0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62() {
        new (&ClientProt::IF_BUTTON8) ClientProt(21, 8, "IF_BUTTON8");
    }

    // 0x1004a4ef0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.64
    void ___cxx_global_var_init_64() {
        new (&ClientProt::IF_BUTTON9) ClientProt(22, 8, "IF_BUTTON9");
    }

    // 0x1004a4f20, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.66
    void ___cxx_global_var_init_66() {
        new (&ClientProt::CREATE_ACCOUNT) ClientProt(23, -2, "CREATE_ACCOUNT");
    }

    // 0x1004a4f50, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.68
    void ___cxx_global_var_init_68() {
        new (&ClientProt::TELEMETRY_REQUEST_FULL_RESYNC) ClientProt(24, 0, "TELEMETRY_REQUEST_FULL_RESYNC");
    }

    // 0x1004a4f70, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.70
    void ___cxx_global_var_init_70() {
        new (&ClientProt::STORE_SERVERPERM_VARCS) ClientProt(25, -2, "STORE_SERVERPERM_VARCS");
    }

    // 0x1004a4fa0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.72
    void ___cxx_global_var_init_72() {
        new (&ClientProt::OPPLAYER9) ClientProt(26, 3, "OPPLAYER9");
    }

    // 0x1004a4fd0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.74
    void ___cxx_global_var_init_74() {
        new (&ClientProt::OPOBJ5) ClientProt(27, 7, "OPOBJ5");
    }

    // 0x1004a5000, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.76
    void ___cxx_global_var_init_76() {
        new (&ClientProt::MAP_BUILD_STUCK) ClientProt(28, 15, "MAP_BUILD_STUCK");
    }

    // 0x1004a5030, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.78
    void ___cxx_global_var_init_78() {
        new (&ClientProt::OPPLAYER1) ClientProt(29, 3, "OPPLAYER1");
    }

    // 0x1004a5060, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.80
    void ___cxx_global_var_init_80() {
        new (&ClientProt::CREATE_SUGGEST_NAMES) ClientProt(30, 0, "CREATE_SUGGEST_NAMES");
    }

    // 0x1004a5080, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.82
    void ___cxx_global_var_init_82() {
        new (&ClientProt::OPNPC2) ClientProt(31, 3, "OPNPC2");
    }

    // 0x1004a50b0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.84
    void ___cxx_global_var_init_84() {
        new (&ClientProt::EVENT_KEYBOARD) ClientProt(32, -2, "EVENT_KEYBOARD");
    }

    // 0x1004a50e0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.86
    void ___cxx_global_var_init_86() {
        new (&ClientProt::EVENT_CAMERA_POSITION) ClientProt(33, 4, "EVENT_CAMERA_POSITION");
    }

    // 0x1004a5110, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.88
    void ___cxx_global_var_init_88() {
        new (&ClientProt::MAP_BUILD_COMPLETE) ClientProt(34, 4, "MAP_BUILD_COMPLETE");
    }

    // 0x1004a5140, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.90
    void ___cxx_global_var_init_90() {
        new (&ClientProt::FRIEND_SETNOTES) ClientProt(35, -1, "FRIEND_SETNOTES");
    }

    // 0x1004a5170, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.92
    void ___cxx_global_var_init_92() {
        new (&ClientProt::RESUME_PAUSEBUTTON) ClientProt(36, 6, "RESUME_PAUSEBUTTON");
    }

    // 0x1004a51a0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.94
    void ___cxx_global_var_init_94() {
        new (&ClientProt::IGNORELIST_ADD) ClientProt(37, -1, "IGNORELIST_ADD");
    }

    // 0x1004a51d0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.96
    void ___cxx_global_var_init_96() {
        new (&ClientProt::PING_STATISTICS) ClientProt(38, 4, "PING_STATISTICS");
    }

    // 0x1004a5200, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.98
    void ___cxx_global_var_init_98() {
        new (&ClientProt::EVENT_MOUSE_CLICK) ClientProt(39, 6, "EVENT_MOUSE_CLICK");
    }

    // 0x1004a5230, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.100
    void ___cxx_global_var_init_100() {
        new (&ClientProt::OPNPC3) ClientProt(40, 3, "OPNPC3");
    }

    // 0x1004a5260, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.102
    void ___cxx_global_var_init_102() {
        new (&ClientProt::IF_VALUE_CHANGE_32) ClientProt(41, 11, "IF_VALUE_CHANGE_32");
    }

    // 0x1004a5290, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.104
    void ___cxx_global_var_init_104() {
        new (&ClientProt::IF_BUTTOND) ClientProt(42, 16, "IF_BUTTOND");
    }

    // 0x1004a52c0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.106
    void ___cxx_global_var_init_106() {
        new (&ClientProt::SOUND_SONGEND) ClientProt(43, 4, "SOUND_SONGEND");
    }

    // 0x1004a52f0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.108
    void ___cxx_global_var_init_108() {
        new (&ClientProt::IF_CRMVIEW_OP) ClientProt(44, 22, "IF_CRMVIEW_OP");
    }

    // 0x1004a5320, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.110
    void ___cxx_global_var_init_110() {
        new (&ClientProt::OPLOC2) ClientProt(45, 9, "OPLOC2");
    }

    // 0x1004a5350, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.112
    void ___cxx_global_var_init_112() {
        new (&ClientProt::API_CALL) ClientProt(46, -2, "API_CALL");
    }

    // 0x1004a5380, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.114
    void ___cxx_global_var_init_114() {
        new (&ClientProt::CLIENT_CHEAT) ClientProt(47, -1, "CLIENT_CHEAT");
    }

    // 0x1004a53b0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.116
    void ___cxx_global_var_init_116() {
        new (&ClientProt::IF_VALUE_CHANGE) ClientProt(48, 9, "IF_VALUE_CHANGE");
    }

    // 0x1004a53e0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.118
    void ___cxx_global_var_init_118() {
        new (&ClientProt::RESUME_P_COUNTDIALOG) ClientProt(49, 4, "RESUME_P_COUNTDIALOG");
    }

    // 0x1004a5410, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.120
    void ___cxx_global_var_init_120() {
        new (&ClientProt::CLOSE_MODAL) ClientProt(50, 0, "CLOSE_MODAL");
    }

    // 0x1004a5430, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.122
    void ___cxx_global_var_init_122() {
        new (&ClientProt::OPPLAYER8) ClientProt(51, 3, "OPPLAYER8");
    }

    // 0x1004a5460, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.124
    void ___cxx_global_var_init_124() {
        new (&ClientProt::IGNORELIST_DEL) ClientProt(52, -1, "IGNORELIST_DEL");
    }

    // 0x1004a5490, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.126
    void ___cxx_global_var_init_126() {
        new (&ClientProt::IF_BUTTON6) ClientProt(53, 8, "IF_BUTTON6");
    }

    // 0x1004a54c0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.128
    void ___cxx_global_var_init_128() {
        new (&ClientProt::OPPLAYERT) ClientProt(54, 11, "OPPLAYERT");
    }

    // 0x1004a54f0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.130
    void ___cxx_global_var_init_130() {
        new (&ClientProt::CLIENT_COMPRESSEDTEXTUREFORMAT_SUPPORT)
            ClientProt(55, -2, "CLIENT_COMPRESSEDTEXTUREFORMAT_SUPPORT");
    }

    // 0x1004a5520, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.132
    void ___cxx_global_var_init_132() {
        new (&ClientProt::OPOBJ2) ClientProt(56, 7, "OPOBJ2");
    }

    // 0x1004a5550, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.134
    void ___cxx_global_var_init_134() {
        new (&ClientProt::CREATE_CHECK_EMAIL) ClientProt(57, -2, "CREATE_CHECK_EMAIL");
    }

    // 0x1004a5580, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.136
    void ___cxx_global_var_init_136() {
        new (&ClientProt::SOUND_SONGPRELOADED) ClientProt(58, 4, "SOUND_SONGPRELOADED");
    }

    // 0x1004a55b0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.138
    void ___cxx_global_var_init_138() {
        new (&ClientProt::CLAN_JOINCHAT_LEAVECHAT) ClientProt(59, -1, "CLAN_JOINCHAT_LEAVECHAT");
    }

    // 0x1004a55e0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.140
    void ___cxx_global_var_init_140() {
        new (&ClientProt::REGISTER_DEVICE) ClientProt(60, -2, "REGISTER_DEVICE");
    }

    // 0x1004a5610, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.142
    void ___cxx_global_var_init_142() {
        new (&ClientProt::APCOORDT) ClientProt(61, 12, "APCOORDT");
    }

    // 0x1004a5640, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.144
    void ___cxx_global_var_init_144() {
        new (&ClientProt::NOTIFY_MOBILE_BILLING_ELIGIBILITY) ClientProt(62, 1, "NOTIFY_MOBILE_BILLING_ELIGIBILITY");
    }

    // 0x1004a5670, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.146
    void ___cxx_global_var_init_146() {
        new (&ClientProt::MESSAGE_PUBLIC) ClientProt(63, -1, "MESSAGE_PUBLIC");
    }

    // 0x1004a56a0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.148
    void ___cxx_global_var_init_148() {
        new (&ClientProt::CLICKWORLDMAP) ClientProt(64, 4, "CLICKWORLDMAP");
    }

    // 0x1004a56d0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.150
    void ___cxx_global_var_init_150() {
        new (&ClientProt::BUG_REPORT) ClientProt(65, -2, "BUG_REPORT");
    }

    // 0x1004a5700, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.152
    void ___cxx_global_var_init_152() {
        new (&ClientProt::MESSAGE_QUICKCHAT_PRIVATE) ClientProt(66, -1, "MESSAGE_QUICKCHAT_PRIVATE");
    }

    // 0x1004a5730, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.154
    void ___cxx_global_var_init_154() {
        new (&ClientProt::EVENT_MOUSE_MOVE) ClientProt(67, -1, "EVENT_MOUSE_MOVE");
    }

    // 0x1004a5760, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.156
    void ___cxx_global_var_init_156() {
        new (&ClientProt::OPLOC4) ClientProt(68, 9, "OPLOC4");
    }

    // 0x1004a5790, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.158
    void ___cxx_global_var_init_158() {
        new (&ClientProt::OPLOCT) ClientProt(69, 17, "OPLOCT");
    }

    // 0x1004a57c0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.160
    void ___cxx_global_var_init_160() {
        new (&ClientProt::IF_PLAYER) ClientProt(70, -1, "IF_PLAYER");
    }

    // 0x1004a57f0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.162
    void ___cxx_global_var_init_162() {
        new (&ClientProt::IF_BUTTON7) ClientProt(71, 8, "IF_BUTTON7");
    }

    // 0x1004a5820, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.164
    void ___cxx_global_var_init_164() {
        new (&ClientProt::TRANSMITVAR_VERIFYID) ClientProt(72, 4, "TRANSMITVAR_VERIFYID");
    }

    // 0x1004a5850, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.166
    void ___cxx_global_var_init_166() {
        new (&ClientProt::OPNPC6) ClientProt(73, 3, "OPNPC6");
    }

    // 0x1004a5880, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.168
    void ___cxx_global_var_init_168() {
        new (&ClientProt::OPPLAYER3) ClientProt(74, 3, "OPPLAYER3");
    }

    // 0x1004a58b0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.170
    void ___cxx_global_var_init_170() {
        new (&ClientProt::ADD_NEW_EMAIL_ADDRESS) ClientProt(75, -2, "ADD_NEW_EMAIL_ADDRESS");
    }

    // 0x1004a58e0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.172
    void ___cxx_global_var_init_172() {
        new (&ClientProt::OPOBJ4) ClientProt(76, 7, "OPOBJ4");
    }

    // 0x1004a5910, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.174
    void ___cxx_global_var_init_174() {
        new (&ClientProt::REFLECTION_CHECK_REPLY) ClientProt(77, -1, "REFLECTION_CHECK_REPLY");
    }

    // 0x1004a5940, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.176
    void ___cxx_global_var_init_176() {
        new (&ClientProt::MOVE_SCRIPTED) ClientProt(78, 5, "MOVE_SCRIPTED");
    }

    // 0x1004a5970, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.178
    void ___cxx_global_var_init_178() {
        new (&ClientProt::SET_CHATFILTERSETTINGS) ClientProt(79, 3, "SET_CHATFILTERSETTINGS");
    }

    // 0x1004a59a0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.180
    void ___cxx_global_var_init_180() {
        new (&ClientProt::OPOBJ3) ClientProt(80, 7, "OPOBJ3");
    }

    // 0x1004a59d0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.182
    void ___cxx_global_var_init_182() {
        new (&ClientProt::IGNORE_SETNOTES) ClientProt(81, -1, "IGNORE_SETNOTES");
    }

    // 0x1004a5a00, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.184
    void ___cxx_global_var_init_184() {
        new (&ClientProt::IF_BUTTON10) ClientProt(82, 8, "IF_BUTTON10");
    }

    // 0x1004a5a30, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.186
    void ___cxx_global_var_init_186() {
        new (&ClientProt::FRIEND_SETRANK) ClientProt(83, -1, "FRIEND_SETRANK");
    }

    // 0x1004a5a60, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.188
    void ___cxx_global_var_init_188() {
        new (&ClientProt::FRIENDLIST_ADD) ClientProt(84, -1, "FRIENDLIST_ADD");
    }

    // 0x1004a5a90, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.190
    void ___cxx_global_var_init_190() {
        new (&ClientProt::CREATE_LOG_PROGRESS) ClientProt(85, 1, "CREATE_LOG_PROGRESS");
    }

    // 0x1004a5ac0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.192
    void ___cxx_global_var_init_192() {
        new (&ClientProt::UID_PASSPORT_RESEND_REQUEST) ClientProt(86, 0, "UID_PASSPORT_RESEND_REQUEST");
    }

    // 0x1004a5ae0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.194
    void ___cxx_global_var_init_194() {
        new (&ClientProt::IF_BUTTON5) ClientProt(87, 8, "IF_BUTTON5");
    }

    // 0x1004a5b10, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.196
    void ___cxx_global_var_init_196() {
        new (&ClientProt::IF_TEXT_CHANGE) ClientProt(88, -2, "IF_TEXT_CHANGE");
    }

    // 0x1004a5b40, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.198
    void ___cxx_global_var_init_198() {
        new (&ClientProt::OPPLAYER6) ClientProt(89, 3, "OPPLAYER6");
    }

    // 0x1004a5b70, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.200
    void ___cxx_global_var_init_200() {
        new (&ClientProt::IF_BUTTON2) ClientProt(90, 8, "IF_BUTTON2");
    }

    // 0x1004a5ba0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.202
    void ___cxx_global_var_init_202() {
        new (&ClientProt::CUTSCENE_FINISHED) ClientProt(91, 1, "CUTSCENE_FINISHED");
    }

    // 0x1004a5bd0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.204
    void ___cxx_global_var_init_204() {
        new (&ClientProt::RESUME_P_HSLDIALOG) ClientProt(92, 2, "RESUME_P_HSLDIALOG");
    }

    // 0x1004a5c00, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.206
    void ___cxx_global_var_init_206() {
        new (&ClientProt::CLANCHANNEL_KICKUSER) ClientProt(93, -1, "CLANCHANNEL_KICKUSER");
    }

    // 0x1004a5c30, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.208
    void ___cxx_global_var_init_208() {
        new (&ClientProt::WINDOW_STATUS) ClientProt(94, 6, "WINDOW_STATUS");
    }

    // 0x1004a5c60, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.210
    void ___cxx_global_var_init_210() {
        new (&ClientProt::AFFINEDCLANSETTINGS_SETMUTED_FROMCHANNEL)
            ClientProt(95, -1, "AFFINEDCLANSETTINGS_SETMUTED_FROMCHANNEL");
    }

    // 0x1004a5c90, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.212
    void ___cxx_global_var_init_212() {
        new (&ClientProt::CLAN_KICKUSER) ClientProt(96, -1, "CLAN_KICKUSER");
    }

    // 0x1004a5cc0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.214
    void ___cxx_global_var_init_214() {
        new (&ClientProt::ABORT_P_DIALOG) ClientProt(97, 0, "ABORT_P_DIALOG");
    }

    // 0x1004a5ce0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.216
    void ___cxx_global_var_init_216() {
        new (&ClientProt::AUTO_SETUP_RESULT) ClientProt(98, 18, "AUTO_SETUP_RESULT");
    }

    // 0x1004a5d10, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.218
    void ___cxx_global_var_init_218() {
        new (&ClientProt::OPLOC5) ClientProt(99, 9, "OPLOC5");
    }

    // 0x1004a5d40, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.220
    void ___cxx_global_var_init_220() {
        new (&ClientProt::AUTO_SETUP_HTML5_RESULT) ClientProt(100, 9, "AUTO_SETUP_HTML5_RESULT");
    }

    // 0x1004a5d70, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.222
    void ___cxx_global_var_init_222() {
        new (&ClientProt::OPPLAYER2) ClientProt(101, 3, "OPPLAYER2");
    }

    // 0x1004a5da0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.224
    void ___cxx_global_var_init_224() {
        new (&ClientProt::CREATE_CHECK_NAME) ClientProt(102, -1, "CREATE_CHECK_NAME");
    }

    // 0x1004a5dd0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.226
    void ___cxx_global_var_init_226() {
        new (&ClientProt::DETECT_MODIFIED_CLIENT) ClientProt(103, 4, "DETECT_MODIFIED_CLIENT");
    }

    // 0x1004a5e00, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.228
    void ___cxx_global_var_init_228() {
        new (&ClientProt::RESUME_P_NAMEDIALOG) ClientProt(104, -1, "RESUME_P_NAMEDIALOG");
    }

    // 0x1004a5e30, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.230
    void ___cxx_global_var_init_230() {
        new (&ClientProt::SEND_PING_REPLY) ClientProt(105, 9, "SEND_PING_REPLY");
    }

    // 0x1004a5e60, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.232
    void ___cxx_global_var_init_232() {
        new (&ClientProt::WORLDLIST_FETCH) ClientProt(106, 4, "WORLDLIST_FETCH");
    }

    // 0x1004a5e90, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.234
    void ___cxx_global_var_init_234() {
        new (&ClientProt::MOVE_GAMECLICK) ClientProt(107, 5, "MOVE_GAMECLICK");
    }

    // 0x1004a5ec0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.236
    void ___cxx_global_var_init_236() {
        new (&ClientProt::OPLOC3) ClientProt(108, 9, "OPLOC3");
    }

    // 0x1004a5ef0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.238
    void ___cxx_global_var_init_238() {
        new (&ClientProt::OPLOC6) ClientProt(109, 9, "OPLOC6");
    }

    // 0x1004a5f20, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.240
    void ___cxx_global_var_init_240() {
        new (&ClientProt::FRIENDLIST_DEL) ClientProt(110, -1, "FRIENDLIST_DEL");
    }

    // 0x1004a5f50, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.242
    void ___cxx_global_var_init_242() {
        new (&ClientProt::OPNPC4) ClientProt(111, 3, "OPNPC4");
    }

    // 0x1004a5f80, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.244
    void ___cxx_global_var_init_244() {
        new (&ClientProt::OPNPC1) ClientProt(112, 3, "OPNPC1");
    }

    // 0x1004a5fb0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.246
    void ___cxx_global_var_init_246() {
        new (&ClientProt::CHAT_SETMODE) ClientProt(113, 1, "CHAT_SETMODE");
    }

    // 0x1004a5fe0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.248
    void ___cxx_global_var_init_248() {
        new (&ClientProt::CUTSCENE2D_FINISHED) ClientProt(114, 3, "CUTSCENE2D_FINISHED");
    }

    // 0x1004a6010, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.250
    void ___cxx_global_var_init_250() {
        new (&ClientProt::FACE_SQUARE) ClientProt(115, 4, "FACE_SQUARE");
    }

    // 0x1004a6040, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.252
    void ___cxx_global_var_init_252() {
        new (&ClientProt::MESSAGE_QUICKCHAT_PUBLIC) ClientProt(116, -1, "MESSAGE_QUICKCHAT_PUBLIC");
    }

    // 0x1004a6070, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.254
    void ___cxx_global_var_init_254() {
        new (&ClientProt::IF_BUTTON4) ClientProt(117, 8, "IF_BUTTON4");
    }

    // 0x1004a60a0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.256
    void ___cxx_global_var_init_256() {
        new (&ClientProt::OPNPC5) ClientProt(118, 3, "OPNPC5");
    }

    // 0x1004a60d0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.258
    void ___cxx_global_var_init_258() {
        new (&ClientProt::RESUME_P_CLANFORUMQFCDIALOG) ClientProt(119, -1, "RESUME_P_CLANFORUMQFCDIALOG");
    }

    // 0x1004a6100, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.260
    void ___cxx_global_var_init_260() {
        new (&ClientProt::EVENT_APPLET_FOCUS) ClientProt(120, 1, "EVENT_APPLET_FOCUS");
    }

    // 0x1004a6130, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.262
    void ___cxx_global_var_init_262() {
        new (&ClientProt::IF_BUTTONT) ClientProt(121, 16, "IF_BUTTONT");
    }

    // 0x1004a6160, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.264
    void ___cxx_global_var_init_264() {
        new (&ClientProt::OPENGLX_SUCCESS) ClientProt(122, 1, "OPENGLX_SUCCESS");
    }

    // 0x1004a6190, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.266
    void ___cxx_global_var_init_266() {
        new (&ClientProt::OPLOC1) ClientProt(123, 9, "OPLOC1");
    }

    // 0x1004a61c0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.268
    void ___cxx_global_var_init_268() {
        new (&ClientProt::RESUME_P_OBJDIALOG) ClientProt(124, 2, "RESUME_P_OBJDIALOG");
    }

    // 0x1004a61f0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.270
    void ___cxx_global_var_init_270() {
        new (&ClientProt::DIRECTX_FAILURE) ClientProt(125, 2, "DIRECTX_FAILURE");
    }

    // 0x1004a6220, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.272
    void ___cxx_global_var_init_272() {
        new (&ClientProt::NO_TIMEOUT) ClientProt(126, 0, "NO_TIMEOUT");
    }

    // 0x1004a6240, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.274
    void ___cxx_global_var_init_274() {
        new (&ClientProt::CHANGE_EMAIL_ADDRESS) ClientProt(127, -2, "CHANGE_EMAIL_ADDRESS");
    }

    // 0x1004a6270, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.276
    void ___cxx_global_var_init_276() {
        new (&ClientProt::IF_BUTTON1) ClientProt(128, 8, "IF_BUTTON1");
    }

    // 0x1004a62a0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.278
    void ___cxx_global_var_init_278() {
        new (&ClientProt::RESUME_P_LONGDIALOG) ClientProt(129, 8, "RESUME_P_LONGDIALOG");
    }

} // namespace jag
