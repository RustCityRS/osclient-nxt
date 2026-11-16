// projects/osclient/titlescreen.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "titlescreen.h"

namespace jag::oldscape {
    // 0x100d3d7d0
    int32_t TitleScreen::m_clippingSaver[30] = {
        0, 0,           0,          0,          1008,       1009,       1010, 1011,       1012,       0,
        0, 0,           1088421888, 1071877708, 1413754136, 1060708859, 0,    1087373312, 1610612736, 1084514096,
        0, -1063518208, 0,          0,          0,          1,          2,    3,          4,          5,
    };

    // 0x100f36fb0
    int32_t TitleScreen::m_loadPos = 10;

    // 0x100f36fb4
    int32_t TitleScreen::m_loginHelp = 1;

    // 0x100f36fc0
    int32_t TitleScreen::m_loginTotpRememberUser = 1;

    // 0x100f36fe8
    int32_t TitleScreen::m_sy = 171;

    // 0x100f36fec
    int32_t TitleScreen::m_postAction = -1;

    // 0x100f36ff0
    int64_t TitleScreen::m_precacheStartTime = -1;

    // 0x100f36ff8
    int64_t TitleScreen::m_precacheCompleteTime = -1;

    // 0x100f37000
    int32_t TitleScreen::m_lastVisibleAppHeight = -1;

    // 0x100f37004
    int32_t TitleScreen::m_lastVisibleAppHeightChangeTic = -1;

    // 0x100f37008
    int32_t TitleScreen::m_steamLinkHint = 1;

    // 0x100f37010
    int64_t TitleScreen::m_pendingTransactionLoginDelayStart = -1;

    // 0x100f37018
    int64_t TitleScreen::m_initialOpenAnimFinishTime = -1;

    // 0x100f37020
    int64_t TitleScreen::m_initialOpenAnimStartTime = -1;

    // 0x100f37028
    int32_t TitleScreen::m_slLastWorld = -1;

    // 0x100f37030
    int32_t TitleScreen::m_initialOpenAnim[4] = {15679664, 1, 0, 0};

    // 0x100f37138, set at startup by ___cxx_global_var_init.102
    eastl::vector<eastl::string> TitleScreen::m_spriteNamesInBinary;

    // 0x100f37160, set at startup by ___cxx_global_var_init.104
    eastl::vector<eastl::string> TitleScreen::m_spriteNames;

    // 0x100f37188, set at startup by ___cxx_global_var_init.126
    eastl::vector<eastl::string> TitleScreen::m_spriteNamesOptional;

    // 0x100f8a7a8, set at startup by ___cxx_global_var_init.494
    eastl::string TitleScreen::m_loadString = "";

    // 0x100f8a7c8
    int64_t TitleScreen::m_loginscreen;

    // 0x100f8a818
    int32_t TitleScreen::m_dobSubmitted;

    // 0x100f8a81c
    int32_t TitleScreen::m_dobInput;

    // 0x100f8a820
    int64_t TitleScreen::m_loginTotpPin;

    // 0x100f8a828, set at startup by ___cxx_global_var_init.498
    eastl::string TitleScreen::m_loginUser = "";

    // 0x100f8a848, set at startup by ___cxx_global_var_init.501
    eastl::string TitleScreen::m_lastLoginUser = "";

    // 0x100f8a868, set at startup by ___cxx_global_var_init.500
    eastl::string TitleScreen::m_displayName = "";

    // 0x100f8a888, set at startup by ___cxx_global_var_init.502
    eastl::string TitleScreen::m_lastDisplayName = "";

    // 0x100f8a8a8, set at startup by ___cxx_global_var_init.499
    eastl::string TitleScreen::m_loginPass = "";

    // 0x100f8a8f0
    bool TitleScreen::m_open;

    // 0x100f8a8f1
    bool TitleScreen::m_backgroundMode;

    // 0x100f8a8f8, set at startup by ___cxx_global_var_init.518
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_titleBack =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f8a908, set at startup by ___cxx_global_var_init.557
    TitlescreenInputHandler TitleScreen::m_inputHandler = TitlescreenInputHandler();

    // 0x100f8a930
    bool TitleScreen::m_loadingFlamesTriggerSent;

    // 0x100f8a931
    bool TitleScreen::m_errorTriggerSent;

    // 0x100f8a938, set at startup by ___cxx_global_var_init.519
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_titleBack2 =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f8a948
    int64_t TitleScreen::m_titleBoxHeight;

    // 0x100f8a950, set at startup by ___cxx_global_var_init.517
    Array<graphics::Pix8> TitleScreen::m_loginIcon = Array<graphics::Pix8>();

    // 0x100f8a968, set at startup by ___cxx_global_var_init.522
    Array<graphics::Pix8> TitleScreen::m_titleMute = Array<graphics::Pix8>();

    // 0x100f8a980
    int32_t TitleScreen::m_loginCheckboxWidth;

    // 0x100f8a984
    int32_t TitleScreen::m_loginCheckboxHeight;

    // 0x100f8a988
    int32_t TitleScreen::m_defaultWorldCheckboxWidth;

    // 0x100f8a98c
    int32_t TitleScreen::m_defaultWorldCheckboxHeight;

    // 0x100f8a990, set at startup by ___cxx_global_var_init.503
    Array<eastl::string> TitleScreen::m_dobCharacters = Array<eastl::string>(8);

    // 0x100f8a9a8
    int64_t TitleScreen::m_currentDobCharacter;

    // 0x100f8a9b0, set at startup by ___cxx_global_var_init.504
    eastl::string TitleScreen::m_loginTotpPinString = "";

    // 0x100f8a9d0
    int32_t TitleScreen::m_switchScreen;

    // 0x100f8a9d4, set at startup by ___cxx_global_var_init.533
    int32_t TitleScreen::m_targetSY = TitleScreen::m_sy;

    // 0x100f8a9d8, set at startup by ___cxx_global_var_init.532
    int32_t TitleScreen::m_preciseSY = (float)TitleScreen::m_sy;

    // 0x100f8a9dc
    int32_t TitleScreen::m_xOf;

    // 0x100f8a9e0, set at startup by ___cxx_global_var_init.534
    int32_t TitleScreen::m_sXOf = TitleScreen::m_xOf + 202;

    // 0x100f8a9e4
    int32_t TitleScreen::m_sXOfCentre;

    // 0x100f8a9e8, set at startup by ___cxx_global_var_init.523
    Array<graphics::Pix8> TitleScreen::m_volumeOptionsBobbleSlider = Array<graphics::Pix8>();

    // 0x100f8aa00, set at startup by ___cxx_global_var_init.546
    Array<graphics::Pix32> TitleScreen::m_slBack = Array<graphics::Pix32>();

    // 0x100f8aa18, set at startup by ___cxx_global_var_init.547
    Array<graphics::Pix8> TitleScreen::m_slFlags = Array<graphics::Pix8>();

    // 0x100f8aa30, set at startup by ___cxx_global_var_init.548
    Array<graphics::Pix8> TitleScreen::m_slArrows = Array<graphics::Pix8>();

    // 0x100f8aa48, set at startup by ___cxx_global_var_init.549
    Array<graphics::Pix8> TitleScreen::m_slStars = Array<graphics::Pix8>();

    // 0x100f8aa60
    int32_t TitleScreen::m_worldWarningAccepted;

    // 0x100f8aa64
    int32_t TitleScreen::m_loginSelect;

    // 0x100f8aa68, set at startup by ___cxx_global_var_init.544
    eastl::string TitleScreen::m_pinCharList = "1234567890";

    // 0x100f8aa88
    bool TitleScreen::m_defaultWorldCheckboxHighlighted;

    // 0x100f8aa89
    bool TitleScreen::m_defaultWorldCheckboxTicked;

    // 0x100f8aa8a
    bool TitleScreen::m_toggleFullscreenCheckboxHighlighted;

    // 0x100f8aa8b
    bool TitleScreen::m_toggleFullscreenCheckboxTicked;

    // 0x100f8aa8c, set at startup by ___cxx_global_var_init.558
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_termsAndConditionsLinkDimensions =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f8aa9c, set at startup by ___cxx_global_var_init.559
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_privacyPolicyLinkDimensions =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f8aaac, set at startup by ___cxx_global_var_init.560
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_softwareLicenceLinkDimensionsMobile =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f8aabc, set at startup by ___cxx_global_var_init.539
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_steamLinkYesBtn =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f8aacc, set at startup by ___cxx_global_var_init.540
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_steamLinkNoBtn =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f8aadc
    int32_t TitleScreen::m_previousLoginFlow;

    // 0x100f8aae0
    int32_t TitleScreen::m_loginDimsInit;

    // 0x100f8aae4, set at startup by ___cxx_global_var_init.496
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_loginHelpTextDimensions =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f8aaf4
    bool TitleScreen::m_loginRememberUserCheckboxHighlighted;

    // 0x100f8aaf5
    bool TitleScreen::m_loginHideUserCheckboxHighlighted;

    // 0x100f8aaf8, set at startup by ___cxx_global_var_init.497
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_cantLoginOtherTextDimensions =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f8ab08
    int64_t TitleScreen::m_currentSupportReason;

    // 0x100f8ab10
    int64_t TitleScreen::m_lastJagexWebFlowRequest;

    // 0x100f8ab18, set at startup by ___cxx_global_var_init.541
    Array<jag::math::Rect<int>> TitleScreen::m_volumeSliderPositions = Array<jag::math::Rect<int>>();

    // 0x100f8ab30, set at startup by ___cxx_global_var_init.536
    eastl::string TitleScreen::m_loginMes1 = "";

    // 0x100f8ab50, set at startup by ___cxx_global_var_init.537
    eastl::string TitleScreen::m_loginMes2 = "";

    // 0x100f8ab70, set at startup by ___cxx_global_var_init.538
    eastl::string TitleScreen::m_loginMes3 = "";

    // 0x100f8ab90, set at startup by ___cxx_global_var_init.535
    eastl::string TitleScreen::m_loginTitle = "";

    // 0x100f8abb0, set at startup by ___cxx_global_var_init.495
    eastl::string TitleScreen::m_loginHelpText = "";

    // 0x100f8abd0, set at startup by ___cxx_global_var_init.542
    eastl::string TitleScreen::m_charList = eastl::string(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100dab3f1);

    // 0x100f8abf0, set at startup by ___cxx_global_var_init.556
    WorldSwitcherStructure TitleScreen::m_worldSwitcherStructure = WorldSwitcherStructure();

    // 0x100f8ac18
    int32_t TitleScreen::m_slMaxScroll;

    // 0x100f8ac1c
    int32_t TitleScreen::m_slStartColumn;

    // 0x100f8ac20
    unique_ptr<TitleFlames> TitleScreen::m_titleFlames;

    // 0x100f8ac28
    unique_ptr<LoadingScreenScript> TitleScreen::m_loading;

    // 0x100f8ac30
    unique_ptr<graphics::Pix8> TitleScreen::m_titleBox;

    // 0x100f8ac38
    unique_ptr<graphics::Pix8> TitleScreen::m_titleBut;

    // 0x100f8ac40
    unique_ptr<graphics::Pix8> TitleScreen::m_titleButLarge;

    // 0x100f8ac48
    unique_ptr<graphics::Pix8> TitleScreen::m_textPlayNow;

    // 0x100f8ac50
    unique_ptr<graphics::Pix8> TitleScreen::m_titleButWide;

    // 0x100f8ac58
    unique_ptr<graphics::Pix8> TitleScreen::m_logo;

    // 0x100f8ac60
    unique_ptr<graphics::Pix8> TitleScreen::m_optionsRadioButtonNone;

    // 0x100f8ac68
    unique_ptr<graphics::Pix8> TitleScreen::m_optionsRadioButtonNoneHighlight;

    // 0x100f8ac70
    unique_ptr<graphics::Pix8> TitleScreen::m_optionsRadioButtonYes;

    // 0x100f8ac78
    unique_ptr<graphics::Pix8> TitleScreen::m_optionsRadioButtonYesHighlight;

    // 0x100f8ac80
    unique_ptr<graphics::Pix8> TitleScreen::m_slButton;

    // 0x100f8ac88
    unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8> _> TitleScreen::m_slLeftArrow;

    // 0x100f8ac90
    unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8> _> TitleScreen::m_slRightArrow;

    // 0x100f8ac98
    int64_t TitleScreen::m_verbose;

    // 0x1000596e0
    void ___cxx_global_var_init_102(void) {
        eastl::string local_38;

        if (*PTR_m_spriteNamesInBinary_100ee4950 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNamesInBinary_100ee4950) != 0) {
                local_38 = eastl::string("titlewide.png");
                new (PTR_m_spriteNamesInBinary_100ee6aa0) eastl::vector<eastl::string>(&local_38, DAT_00000001);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNamesInBinary_100ee6aa0, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNamesInBinary_100ee4950);
            }
        }
    }

    // 0x1000597e0
    void ___cxx_global_var_init_104(void) {
        long lVar2;
        eastl::string local_2c8;
        eastl::string local_2a8;
        eastl::string local_288;
        eastl::string local_268;
        eastl::string local_248;
        eastl::string local_228;
        eastl::string local_208;
        eastl::string local_1e8;
        eastl::string local_1c8;
        eastl::string local_1a8;
        eastl::string local_188;
        eastl::string local_168;
        eastl::string local_148;
        eastl::string local_128;
        eastl::string local_108;
        eastl::string local_e8;
        eastl::string local_c8;
        eastl::string local_a8;
        eastl::string local_88;
        eastl::string local_68;
        eastl::string local_48;

        if (*PTR_m_spriteNames_100ee4948 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNames_100ee4948) != 0) {
                local_2c8 = eastl::string("logo_osrs");
                local_2a8 = eastl::string("logo_deadman_mode");
                local_288 = eastl::string("logo_seasonal_mode");
                local_268 = eastl::string("titlebox");
                local_248 = eastl::string("titlebutton");
                local_228 = eastl::string("titlebutton_large");
                local_208 = eastl::string("play_now_text");
                local_1e8 = eastl::string("titlebutton_wide42,1");
                local_1c8 = eastl::string("runes");
                local_1a8 = eastl::string("title_mute");
                local_188 = eastl::string("volume_options_bobble_slider");
                local_168 = eastl::string("options_radio_buttons,0");
                local_148 = eastl::string("options_radio_buttons,2");
                local_128 = eastl::string("options_radio_buttons,4");
                local_108 = eastl::string("options_radio_buttons,6");
                local_e8 = eastl::string("login_icons");
                local_c8 = eastl::string("sl_back");
                local_a8 = eastl::string("sl_flags");
                local_88 = eastl::string("sl_arrows");
                local_68 = eastl::string("sl_stars");
                local_48 = eastl::string("sl_button");
                new (PTR_m_spriteNames_100ee6a98) eastl::vector<eastl::string>(&local_2c8, *21);
                lVar2 = 640;
                do {
                    (&local_2c8 + lVar2)->~basic_string();
                    lVar2 = lVar2 - 32;
                } while (lVar2 != -32);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNames_100ee6a98, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNames_100ee4948);
            }
        }
    }

    // 0x100059e00
    void ___cxx_global_var_init_126(void) {
        eastl::string local_38;

        if (*PTR_m_spriteNamesOptional_100ee4958 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNamesOptional_100ee4958) != 0) {
                local_38 = eastl::string("logo_speedrunning");
                new (PTR_m_spriteNamesOptional_100ee6aa8) eastl::vector<eastl::string>(&local_38, DAT_00000001);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNamesOptional_100ee6aa8, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNamesOptional_100ee4958);
            }
        }
    }

    // 0x1000bf410
    void TitleScreen::DeleteCharacter() {
        long lVar2;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* basic_string;
        eastl::string* this_00;
        ReturnValue local_38;

        switch (m_loginscreen) {
        case 2:
            if (m_loginSelect == 1) {
                lVar2 = m_loginPass.size();
                if (lVar2 == 0) {
                    return;
                }
                lVar2 = m_loginPass.size();
                local_38 = m_loginPass.substr(0, lVar2 - 1);
                m_loginPass = &local_38;
            } else {
                if (m_loginSelect != 0) {
                    return;
                }
                lVar2 = m_loginUser.size();
                if (lVar2 == 0) {
                    return;
                }
                lVar2 = m_loginUser.size();
                local_38 = m_loginUser.substr(0, lVar2 - 1);
                m_loginUser = &local_38;
            }
            break;
        default:
            goto switchD_1000bf43b_caseD_3;
        case 4:
            lVar2 = m_loginTotpPinString.size();
            if (lVar2 == 0) {
                return;
            }
            lVar2 = m_loginTotpPinString.size();
            local_38 = m_loginTotpPinString.substr(0, lVar2 - 1);
            m_loginTotpPinString = &local_38;
            break;
        case 5:
            lVar2 = m_loginUser.size();
            if (lVar2 == 0) {
                return;
            }
            lVar2 = m_loginUser.size();
            local_38 = m_loginUser.substr(0, lVar2 - 1);
            m_loginUser = &local_38;
            break;
        case 7:
            basic_string = &m_dobCharacters[(long)m_currentDobCharacter];
            if ((basic_string->empty() != '\0') && (0 < m_currentDobCharacter)) {
                m_currentDobCharacter = m_currentDobCharacter - 1;
            }
            this_00 = &m_dobCharacters[(long)m_currentDobCharacter];
            *this_00 = ((eastl::string*)&eastl::EMPTY_STRING);
            goto switchD_1000bf43b_caseD_3;
        }
    switchD_1000bf43b_caseD_3:
    }

    // 0x1000bf760
    void TitleScreen::TypeCharacter(char16_t arg1) {
        bool cVar1;
        char* pcVar3;
        unsigned long uVar4;
        unsigned long uVar5;
        eastl::string local_48;

        char arg1_00 = (char)((unsigned long)this & 4294967295);
        if (m_loginscreen == 2) {
            if (m_loginSelect == 1) {
                cVar1 = ((CP1252Tools*)((unsigned long)this & 65535))->IsPrintableCP1252Char(arg1);
                if (!cVar1) {
                    return;
                }
                uVar5 = m_loginPass.size();
                if (uVar5 < 20) {
                    m_loginPass.push_back(arg1_00);
                    return;
                }
                return;
            }
            if (m_loginSelect != 0) {
                return;
            }
        } else if (m_loginscreen != 5) {
            if (m_loginscreen != 4) {
                return;
            }
            if (m_pinCharList.size() == 0) {
                return;
            }
            uVar5 = 0;
            do {
                pcVar3 = (char*)m_pinCharList.at(uVar5);
                if (((unsigned int)this & 65535) == (int)*pcVar3) {
                    uVar5 = m_loginTotpPinString.size();
                    if (uVar5 < 6) {
                        local_48 + m_loginTotpPinString;
                        m_loginTotpPinString = &local_48;
                        return;
                    }
                    return;
                }
                uVar5 = uVar5 + 1;
                uVar4 = m_pinCharList.size();
            } while (uVar5 < uVar4);
            return;
        }
        cVar1 = IsValidUsernameChar((char16_t)((unsigned long)this & 4294967295));
        if ((cVar1) && (uVar5 = m_loginUser.size(), uVar5 < 320)) {
            m_loginUser.push_back(arg1_00);
        }
    }

    // 0x1000bfb20
    void TitleScreen::SetLoginSelect(int arg1) {
        if (m_loginscreen == 2) {
            m_loginSelect = arg1;
        }
    }

    // 0x1000c9600
    void TitleScreen::Loop(javapal::GameShell& gameShell, graphics::Pix2D& pix2D,
                           jstring::PixfontGeneric& pixfontGeneric1, jstring::PixfontGeneric& pixfontGeneric2) {
        unsigned int arg1;
        bool bVar1;
        bool cVar2;
        int iVar4;
        TokenAuthLoginState TVar5;
        int iVar7;
        Logger* pLVar8;
        long lVar12;
        Client* pCVar13;
        int* piVar14;
        LoginManager* pLVar15;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar16;
        shared_ptr<dash3d::GroundDecor>* psVar17;
        InputForm* pIVar18;
        AuthLibWrapper* authLibWrapper;
        char* pcVar19;
        DeviceOptions* pDVar20;
        eastl* this_00;
        eastl::string* pbVar21;
        ApplicationContext* pAVar22;
        GraphicsApp* pGVar23;
        eastl::string* pbVar24;
        uint8_t extraout_DL;
        uint8_t extraout_DL_00;
        uint8_t extraout_DL_01;
        uint8_t extraout_DL_02;
        uint8_t extraout_DL_03;
        uint8_t uVar25;
        uint8_t extraout_DL_04;
        uint8_t extraout_DL_05;
        uint8_t extraout_DL_06;
        bool arg2;
        uint8_t extraout_DL_07;
        uint8_t extraout_DL_08;
        bool arg2_00;
        uint8_t extraout_DL_09;
        uint8_t extraout_DL_10;
        bool arg2_01;
        bool arg2_02;
        bool arg2_03;
        bool arg2_04;
        Web* this_02;
        uint8_t* puVar29;
        eastl::string* pbVar30;
        Client* pCVar31;
        TitleScreen* this_04;
        UpdateUserDetailsV2* this_05;
        eastl::string* str1;
        float fVar33;
        eastl::string local_268;
        eastl::string local_248;
        eastl::string local_228;
        eastl::string local_208;
        Client* local_1d8;
        uint8_t local_1d0[16];
        Margin local_1a0;
        long* local_178;
        Margin local_160;

        if ((m_backgroundMode != '\0') && (traceBackgroundModeLoginFlow != '\0')) {
            pLVar8 = logger::default_logger();
            pLVar8->Log(
                true, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/titlescreen.cpp",
                454, "Using the TitleScreen in background mode to perform a logout transfer");
        }
        auto pCVar9 = Client::Instance();
        shared_ptr<ApplicationContext>* psVar10 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
        GameShell* gameShell_00 = (GameShell*)(*psVar10).operator->();
        long* plVar11 = (long*)(*(void (*)(...))gameShell_00->field_0[9])();
        if (plVar11 != nullptr) {
            (**(void (**)(...))(*plVar11 + 504))(plVar11);
        }
        if (m_switchScreen != '\0') {
            WorldSwitchLoop(gameShell_00, pix2D);
            goto switchD_1000cad29_caseD_10;
        }
        int local_170 = m_inputHandler.field_16.GetX();
        int local_168 = m_inputHandler.field_20.GetX();
        bool bVar32 = m_backgroundMode == '\0';
        char local_17e = !bVar32;
        uint8_t bVar26 = m_inputHandler.field_24 & bVar32;
        uint8_t local_169 = m_inputHandler.field_25 & bVar32;
        uint8_t local_180 = m_inputHandler.field_26 & bVar32;
        local_178 = (long*)(((uint64_t)local_178._1_7_ << 8) | (uint8_t)(m_inputHandler.field_27 & bVar32));
        uint8_t local_179 = m_inputHandler.field_28 & bVar32;
        char local_17b = m_inputHandler.field_31;
        uint8_t local_17f = m_inputHandler.field_31 != -1;
        char local_17d = (m_inputHandler.field_32 & 1) == 0;
        uint8_t local_17c = m_inputHandler.field_33;
        uint8_t local_17a = m_inputHandler.field_34;
        GameWorld* this_03 = (GameWorld*)&m_inputHandler;
        m_inputHandler.ResetInteractionState();
        if (pCVar9->field_8448 == 5) {
            if (bVar26 != 0) {
                HandleAudioButtons(local_170, local_168);
            }
            goto switchD_1000cad29_caseD_10;
        }
        if (m_precacheStartTime == -1) {
            lVar12 = core::SafeTime::CurrentTimeMillis();
            m_precacheStartTime = lVar12 + 1000;
        }
        uint8_t local_161 = bVar26;
        lVar12 = core::SafeTime::CurrentTimeMillis();
        int iVar27 = local_170;
        if (m_precacheCompleteTime == 0) {
            m_precacheCompleteTime = lVar12;
            if (m_precacheStartTime < lVar12) {
                m_precacheStartTime = lVar12;
            }
        }
        if ((45 < (unsigned long)pCVar9->field_8448) ||
            ((35184372091904U >> ((unsigned long)pCVar9->field_8448 & 63) & 1) == 0))
            goto switchD_1000cad29_caseD_10;
        if (pCVar9->field_8432 == (Language*)Language::EN) {
            if (local_161 == 0)
                goto LAB_1000cc119;
            local_1d8 = pCVar9;
            lVar12 = m_titleBack.operator->();
            this_04 = (TitleScreen*)(lVar12 + 28);
            pCVar9 = Client::Instance();
            local_160 = pCVar9->GetUISafeArea();
            local_1a0._0_4_ = local_160.GetLevel();
            piVar14 = std::min<int>(*this_04, local_1a0);
            pCVar9 = local_1d8;
            iVar4 = *piVar14;
            if ((((m_xOf + 20 <= iVar27) && (local_170 <= m_xOf + 120)) && (iVar4 - 55 <= local_168)) &&
                (local_168 <= iVar4 - 20)) {
                WorldSwitchEnter(this_04);
                goto switchD_1000cad29_caseD_10;
            }
            iVar27 = m_sXOfCentre - 270;
            if (local_170 < iVar27) {
                m_defaultWorldCheckboxHighlighted = false;
            } else {
                m_defaultWorldCheckboxHighlighted = false;
                if ((local_170 < m_defaultWorldCheckboxWidth + iVar27) && (iVar4 - 82 <= local_168)) {
                    m_defaultWorldCheckboxHighlighted = local_168 < iVar4 - 82 + m_defaultWorldCheckboxHeight;
                }
            }
            if (m_defaultWorldCheckboxHighlighted != false) {
                m_defaultWorldCheckboxTicked = m_defaultWorldCheckboxTicked ^ 1;
                SaveDefaultWorld();
            }
            if (pCVar9->field_8425 == false) {
                if (local_170 < iVar27) {
                    m_toggleFullscreenCheckboxHighlighted = false;
                } else {
                    m_toggleFullscreenCheckboxHighlighted = false;
                    if ((local_170 < iVar27 + m_defaultWorldCheckboxWidth) && (iVar4 - 107 <= local_168)) {
                        m_toggleFullscreenCheckboxHighlighted = local_168 < iVar4 - 107 + m_defaultWorldCheckboxHeight;
                    }
                }
                if (m_toggleFullscreenCheckboxHighlighted != false) {
                    m_toggleFullscreenCheckboxTicked = m_toggleFullscreenCheckboxTicked ^ 1;
                    pDVar20 = (DeviceOptions*)pCVar9->field_8376.operator->();
                    pDVar20->ToggleFullscreen();
                }
            }
            cVar2 = HandleAudioButtons(local_170, local_168);
            if (cVar2)
                goto switchD_1000cad29_caseD_10;
            this_03 = (GameWorld*)&m_termsAndConditionsLinkDimensions;
            piVar14 = (int*)m_termsAndConditionsLinkDimensions.y();
            iVar27 = local_170;
            if (*piVar14 - 30 <= local_168) {
                piVar14 = (int*)m_termsAndConditionsLinkDimensions.y();
                iVar27 = local_170;
                iVar4 = *piVar14;
                this_03 = (GameWorld*)&m_termsAndConditionsLinkDimensions;
                piVar14 = (int*)m_termsAndConditionsLinkDimensions.qw();
                if (local_168 <= *piVar14 + iVar4 + 30) {
                    piVar14 = (int*)m_termsAndConditionsLinkDimensions.SSOBeginPtr();
                    if (iVar27 < *piVar14) {
                    LAB_1000caee0:
                        this_03 = (GameWorld*)&m_privacyPolicyLinkDimensions;
                        piVar14 = (int*)m_privacyPolicyLinkDimensions.SSOBeginPtr();
                        if (*piVar14 <= iVar27) {
                            piVar14 = (int*)m_privacyPolicyLinkDimensions.SSOBeginPtr();
                            iVar27 = local_170;
                            iVar4 = *piVar14;
                            this_03 = (GameWorld*)&m_privacyPolicyLinkDimensions;
                            piVar14 = (int*)m_privacyPolicyLinkDimensions.second();
                            if (iVar27 <= iVar4 + *piVar14) {
                                this_03 = (GameWorld*)&constants::text::privacyPolicyUrl;
                                uVar25 = extraout_DL_05;
                                goto LAB_1000cc10f;
                            }
                        }
                        pCVar31 = Client::Instance();
                        if (pCVar31->field_8425 != false) {
                            this_03 = (GameWorld*)&m_softwareLicenceLinkDimensionsMobile;
                            piVar14 = (int*)m_softwareLicenceLinkDimensionsMobile.SSOBeginPtr();
                            if (*piVar14 <= iVar27) {
                                piVar14 = (int*)m_softwareLicenceLinkDimensionsMobile.SSOBeginPtr();
                                iVar27 = local_170;
                                iVar4 = *piVar14;
                                this_03 = (GameWorld*)&m_softwareLicenceLinkDimensionsMobile;
                                piVar14 = (int*)m_softwareLicenceLinkDimensionsMobile.second();
                                if (iVar27 <= iVar4 + *piVar14) {
                                    this_03 = (GameWorld*)&constants::text::eulaUrl;
                                    uVar25 = extraout_DL_06;
                                    goto LAB_1000cc10f;
                                }
                            }
                        }
                    } else {
                        piVar14 = (int*)m_termsAndConditionsLinkDimensions.SSOBeginPtr();
                        iVar27 = local_170;
                        iVar4 = *piVar14;
                        piVar14 = (int*)m_termsAndConditionsLinkDimensions.second();
                        if (iVar4 + *piVar14 < iVar27)
                            goto LAB_1000caee0;
                        this_03 = (GameWorld*)&constants::text::termsAndConditionsUrl;
                        uVar25 = extraout_DL_04;
                    LAB_1000cc10f:
                        this_03->OpenURL(DAT_00000001, (bool)uVar25);
                    }
                }
            }
        LAB_1000cc119:
            cVar2 = this_03->HasWorldListDownloadStarted();
            if (cVar2) {
                WorldSwitchEnter((TitleScreen*)this_03);
            }
        }
        pCVar31 = pCVar9;
        int iVar3 = pCVar9->GetOSVersion();
        iVar4 = m_sXOfCentre;
        if (iVar3 != m_lastVisibleAppHeight) {
            m_lastVisibleAppHeightChangeTic = pCVar9->field_8488;
            m_lastVisibleAppHeight = iVar3;
        }
        if (((m_lastVisibleAppHeightChangeTic + 8 <= pCVar9->field_8488) &&
             (m_targetSY = 171, m_lastVisibleAppHeight != -1)) &&
            (iVar3 < m_titleBoxHeight + 171)) {
            m_targetSY = (iVar3 - m_titleBoxHeight) / 2;
            if (m_targetSY < 0) {
                m_targetSY = 0;
            }
        }
        if (m_targetSY - m_sy != 0) {
            fVar33 = ((float)m_targetSY - m_preciseSY) * 0.25;
            m_preciseSY = (float)(~-(unsigned int)(-0.5 < fVar33) & (unsigned int)fVar33 |
                                  (~-(unsigned int)(fVar33 < 0.5) & (unsigned int)fVar33 |
                                   (unsigned int)(float)(m_targetSY - m_sy) & -(unsigned int)(fVar33 < 0.5)) &
                                      -(unsigned int)(-0.5 < fVar33)) +
                          m_preciseSY;
            m_sy = (int)m_preciseSY;
        }
        if (local_161 != 0) {
            pCVar31 = (Client*)&m_titleBox;
            lVar12 = m_titleBox.operator->();
            iVar3 = *(int*)(lVar12 + 48) / 2;
            if (((iVar27 < iVar4 - iVar3) || (iVar3 + iVar4 < iVar27)) ||
                ((local_168 < m_sy || (m_sy + *(int*)(lVar12 + 52) < local_168)))) {
                psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                pCVar31 = (Client*)(*psVar10).operator->();
                pCVar31->CloseActiveInputForm();
            }
        }
        iVar4 = local_168;
        switch (m_loginscreen) {
        case 25:
            if ((m_backgroundMode != '\0') && (traceBackgroundModeLoginFlow != '\0')) {
                pLVar8 = logger::default_logger();
                pLVar8->Log(true, 5,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "titlescreen.cpp",
                            659, "Background mode login flow: LOGINSCREEN_STEAM_ACCOUNT_CHECK (first time)");
            }
            psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
            plVar11 = (long*)(*psVar10).operator->();
            pCVar31 = (Client*)(**(void (**)(...))(*plVar11 + 72))(plVar11);
            iVar4 = (**(void (**)(...))(*(long*)pCVar31 + 512))(pCVar31);
            if (iVar4 == 0) {
                (**(void (**)(...))(*(long*)pCVar31 + 80))(pCVar31, 0, 10);
            } else {
                pCVar13 = pCVar31;
                iVar4 = (**(void (**)(...))(*(long*)pCVar31 + 512))();
                if (iVar4 == 20) {
                    if ((m_backgroundMode != '\0') && (traceBackgroundModeLoginFlow != '\0')) {
                        pCVar13 = (Client*)logger::default_logger();
                        pCVar13->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/titlescreen.cpp",
                                     674, "Background mode login flow: Advancing to NEW_EXISTING_USER");
                    }
                } else {
                    pCVar13 = pCVar31;
                    iVar4 = (**(void (**)(...))(*(long*)pCVar31 + 512))();
                    if (iVar4 < 21) {
                        TVar5 = (**(void (**)(...))(*(long*)pCVar31 + 512))(pCVar31);
                        pCVar31 = (Client*)(unsigned long)TVar5;
                        cVar2 = jag::auth::TokenAuthLoginHandler::IsFinished(TVar5);
                        if (cVar2) {
                            if (m_backgroundMode != '\0') {
                                LogAssert("m_backgroundMode == false",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                          "osclient/titlescreen.cpp",
                                          688,
                                          "Account linking should have happened when the player logged in while in "
                                          "foreground mode");
                            }
                            goto LAB_1000c9d43;
                        }
                        if (m_backgroundMode == '\0') {
                            pCVar31 = (Client*)&constants::text::steamAccountCheck1;
                            ThrobMessage((eastl::string*)&constants::text::steamAccountCheck1);
                        }
                        break;
                    }
                }
                pCVar31 = pCVar13;
                m_loginscreen = 0;
            }
            break;
        case 26:
            if (m_backgroundMode != '\0') {
                ResumeInForeground();
            }
            iVar4 = local_168;
            if (local_161 != 0) {
                pCVar31 = (Client*)&m_steamLinkYesBtn;
                cVar2 = m_steamLinkYesBtn.IsInside(iVar27, local_168);
                if (!cVar2) {
                    pCVar31 = (Client*)&m_steamLinkNoBtn;
                    cVar2 = m_steamLinkNoBtn.IsInside(iVar27, iVar4);
                    if (cVar2) {
                        m_steamLinkHint = 1;
                        m_loginscreen = 28;
                    }
                } else {
                    m_steamLinkHint = 2;
                    m_loginscreen = 28;
                }
            }
            break;
        case 28:
            if (local_161 != 0) {
                cVar2 = m_steamLinkYesBtn.IsInside(iVar27, local_168);
                if (!cVar2) {
                    pCVar31 = (Client*)&m_steamLinkNoBtn;
                    cVar2 = m_steamLinkNoBtn.IsInside(iVar27, iVar4);
                    if (cVar2) {
                    LAB_1000c9d43:
                        m_loginscreen = 26;
                    }
                } else {
                    pCVar31 = (Client*)(unsigned long)m_steamLinkHint;
                    MoveToSteamLoginFlow(m_steamLinkHint);
                }
            }
            break;
        case 29:
            if (m_backgroundMode != '\0') {
                ResumeInForeground();
            }
            pCVar31 = (Client*)&constants::text::steamRequired1;
            LoginMes((eastl::string*)&constants::text::steamRequired1, (eastl::string*)&constants::text::steamRequired2,
                     (eastl::string*)&constants::text::steamRequired3);
        }
        int iVar6 = local_168;
        int iVar28 = local_170;
        iVar3 = m_sXOfCentre;
        iVar4 = m_sy;
        switch (m_loginscreen) {
        case 0:
            if ((m_backgroundMode != '\0') && (traceBackgroundModeLoginFlow != '\0')) {
                pLVar8 = logger::default_logger();
                pLVar8->Log(false, 5,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "titlescreen.cpp",
                            741, "Background mode login flow: NEW_EXISTING_USER");
            }
            if ((uint8_t)local_178 != '\0') {
                puVar29 = &pCVar9->field_8376;
                pDVar20 = (DeviceOptions*)(*puVar29).operator->();
                cVar2 = pDVar20->GetFullscreen();
                if ((!cVar2) || (pCVar9->field_8425 != false)) {
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                    plVar11 = (long*)(*psVar10).operator->();
                    (**(void (**)(...))(*plVar11 + 112))(plVar11);
                } else {
                    pDVar20 = (DeviceOptions*)(*puVar29).operator->();
                    pDVar20->ToggleFullscreen();
                    pDVar20 = (DeviceOptions*)(*puVar29).operator->();
                    m_toggleFullscreenCheckboxTicked = pDVar20->GetFullscreen();
                }
                break;
            }
            pCVar31 = Client::Instance();
            psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar31)(pCVar31);
            plVar11 = (long*)(*psVar10).operator->();
            plVar11 = (long*)(**(void (**)(...))(*plVar11 + 72))();
            local_178 = plVar11;
            if ((plVar11 == nullptr) || (((cVar2 = (**(void (**)(...))(*plVar11 + 104))(plVar11),
                                           !cVar2 && (cVar2 = (**(void (**)(...))(*plVar11 + 112))(plVar11), !cVar2)) &&
                                          (cVar2 = (**(void (**)(...))(*plVar11 + 120))(), !cVar2)))) {
                iVar4 = m_sy + 100;
                bVar26 = local_161 ^ 1;
                iVar3 = m_sy + 140;
                if ((((bVar26 == 0) && (m_sXOfCentre - 155 <= iVar27)) && (iVar27 <= m_sXOfCentre - 5)) &&
                    ((iVar4 <= local_168 && (local_168 <= iVar3)))) {
                    cVar2 = OpenTermsAndPrivacyScreen(0);
                    if ((cVar2) || (cVar2 = OpenDataDownloadPrompt(0), cVar2))
                        break;
                    LaunchAccountCreationFlow();
                    iVar27 = local_170;
                }
                if ((uint8_t)((((iVar27 <= m_sXOfCentre + 155 && m_sXOfCentre + 5 <= iVar27) && iVar4 <= local_168) &&
                               local_168 <= iVar3) &
                                  ~bVar26 |
                              local_169) == 1) {
                    cVar2 = OpenTermsAndPrivacyScreen(1);
                    if (((cVar2) || (cVar2 = OpenDataDownloadPrompt(1), cVar2)) ||
                        (cVar2 = ShowWorldWarningScreen(1), cVar2))
                        break;
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                    pAVar22 = (ApplicationContext*)(*psVar10).operator->();
                    pAVar22->SendAttributionEvent(*((eastl::string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT));
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                    pAVar22 = (ApplicationContext*)(*psVar10).operator->();
                    pAVar22->SendAnalyticsEvent(*((eastl::string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT));
                    if (local_178 != nullptr)
                        goto LAB_1000cc89b;
                LAB_1000cc9c7:
                    MoveToUserPassEntryScreen(false);
                }
            } else {
                iVar6 = m_sXOf;
                iVar28 = m_sy;
                iVar4 = m_sXOf + 180;
                lVar12 = m_titleButWide.operator->();
                plVar11 = local_178;
                iVar3 = *(int*)(lVar12 + 52);
                iVar7 = *(int*)(lVar12 + 48) / 2;
                bVar26 = iVar7 + iVar6 + 180 < iVar27 | iVar27 < iVar4 - iVar7 | local_161 ^ 1;
                iVar27 = iVar3 + 58 + iVar28;
                if (((bVar26 == 0) && (iVar28 + 58 <= local_168)) && (local_168 <= iVar27)) {
                    cVar2 = (**(void (**)(...))(*local_178 + 104))(local_178);
                    if (!cVar2) {
                        cVar2 = (**(void (**)(...))(*plVar11 + 112))(plVar11);
                        if (!cVar2) {
                            cVar2 = (**(void (**)(...))(*plVar11 + 120))();
                            if (cVar2) {
                                cVar2 = OpenTermsAndPrivacyScreen(5);
                                if (((cVar2) || (cVar2 = OpenDataDownloadPrompt(5), cVar2)) ||
                                    (cVar2 = ShowWorldWarningScreen(5), cVar2))
                                    break;
                                MoveToSteamLoginFlow(0);
                            }
                        } else {
                            cVar2 = OpenTermsAndPrivacyScreen(3);
                            if (((cVar2) || (cVar2 = OpenDataDownloadPrompt(3), cVar2)) ||
                                (cVar2 = ShowWorldWarningScreen(3), cVar2))
                                break;
                            MoveToGoogleLoginFlow();
                        }
                    } else {
                        cVar2 = OpenTermsAndPrivacyScreen(2);
                        if (((cVar2) || (cVar2 = OpenDataDownloadPrompt(2), cVar2)) ||
                            (cVar2 = ShowWorldWarningScreen(2), cVar2))
                            break;
                        MoveToGameCenterFlow();
                    }
                }
                if ((uint8_t)((local_168 <= iVar3 + iVar27 + 6 && iVar27 + 6 <= local_168) & ~bVar26 | local_169) ==
                    1) {
                    cVar2 = OpenTermsAndPrivacyScreen(1);
                    if (((cVar2) || (cVar2 = OpenDataDownloadPrompt(1), cVar2)) ||
                        (cVar2 = ShowWorldWarningScreen(1), cVar2))
                        break;
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                    pAVar22 = (ApplicationContext*)(*psVar10).operator->();
                    pAVar22->SendAttributionEvent(*((eastl::string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT));
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                    pAVar22 = (ApplicationContext*)(*psVar10).operator->();
                    pAVar22->SendAnalyticsEvent(*((eastl::string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT));
                LAB_1000cc89b:
                    cVar2 = (**(void (**)(...))(*local_178 + 96))();
                    if (!cVar2)
                        goto LAB_1000cc9c7;
                    MoveToJagexWebFlow();
                }
            }
            if (m_backgroundMode == '\0')
                break;
            switch (m_previousLoginFlow) {
            case 2:
                cVar2 = (**(void (**)(...))(*local_178 + 120))();
                if (!cVar2) {
                    LogAssert("pAuthLibWrapper->SupportsSteamLogin()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "titlescreen.cpp",
                              897, nullptr);
                }
                MoveToSteamLoginFlow(0);
                break;
            case 3:
                cVar2 = (**(void (**)(...))(*local_178 + 112))();
                if (!cVar2) {
                    LogAssert("pAuthLibWrapper->SupportsGoogleLogin()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "titlescreen.cpp",
                              892, nullptr);
                }
                MoveToGoogleLoginFlow();
                break;
            case 4:
                cVar2 = (**(void (**)(...))(*local_178 + 104))();
                if (!cVar2) {
                    LogAssert("pAuthLibWrapper->SupportsGameCenter()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "titlescreen.cpp",
                              887, nullptr);
                }
                MoveToGameCenterFlow();
                break;
            case 5:
                cVar2 = (**(void (**)(...))(*local_178 + 96))();
                if (!cVar2) {
                    LogAssert("pAuthLibWrapper->SupportsJagexWebLogin()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "titlescreen.cpp",
                              902, nullptr);
                }
                MoveToJagexWebFlow();
                break;
            default:
                bVar32 = false;
                goto LAB_1000cb8a2;
            }
            break;
        case 1:
            if ((local_169 != 0) ||
                ((((local_161 != 0 && (m_sXOfCentre - 155 <= iVar27)) && (iVar27 <= m_sXOfCentre - 5)) &&
                  ((m_sy + 130 <= local_168 && (local_168 <= m_sy + 170)))))) {
                m_worldWarningAccepted = 1;
                ApplyPostAction();
            }
            if (((uint8_t)local_178 == '\0') &&
                (((local_161 == 0 || (local_170 < m_sXOfCentre + 5)) ||
                  ((m_sXOfCentre + 155 < local_170 || ((local_168 < iVar4 + 130 || (iVar4 + 170 < local_168))))))))
                break;
            goto LAB_1000cbb72;
        case 2:
            if (m_backgroundMode != '\0') {
            LAB_1000cab53:
                bVar32 = (bool)ShouldRequestTokens();
                PreparePasswordLogin((eastl::string*)&m_loginPass, bVar32);
                break;
            }
            psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
            pcVar16 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar10).operator->();
            psVar17 = (shared_ptr<dash3d::GroundDecor>*)pcVar16->second();
            local_1a0 = shared_ptr(psVar17);
            bVar32 = local_1a0 != nullptr;
            iVar4 = local_168;
            if (bVar32) {
                pIVar18 = (InputForm*)local_1a0.operator->();
                iVar3 = pIVar18->GetFocusedFieldIndex();
                if (-1 < iVar3) {
                    m_loginSelect = iVar3;
                }
            }
            iVar28 = m_sXOfCentre;
            iVar3 = m_sy;
            if (local_161 != 0) {
                lVar12 = m_titleBox.operator->();
                iVar6 = *(int*)(lVar12 + 48) / 2;
                if (((iVar28 - iVar6 <= iVar27) && (iVar27 <= iVar6 + iVar28)) &&
                    ((iVar3 + 70 <= iVar4 && (iVar4 < iVar3 + 84)))) {
                    SelectUsernameField();
                }
                iVar28 = m_sXOfCentre;
                lVar12 = m_titleBox.operator->();
                iVar6 = *(int*)(lVar12 + 48) / 2;
                if ((((iVar28 - iVar6 <= iVar27) && (iVar27 <= iVar6 + iVar28)) && (iVar3 + 85 <= iVar4)) &&
                    (iVar4 < iVar3 + 99)) {
                    SelectPasswordField();
                }
            }
            iVar3 = m_sy;
            if (m_loginDimsInit == '\0') {
            LAB_1000ca6b8:
                if ((((local_161 ^ 1) == 0) && (m_sXOfCentre - 155 <= iVar27)) &&
                    ((iVar27 <= m_sXOfCentre - 5 && ((m_sy + 130 <= iVar4 && (iVar4 <= m_sy + 170)))))) {
                    m_loginUser.trim();
                    lVar12 = m_loginUser.size();
                    if (lVar12 == 0) {
                        SelectUsernameField();
                        LoginMes((eastl::string*)&constants::text::login28_a,
                                 (eastl::string*)&constants::text::login28_b,
                                 (eastl::string*)&constants::text::login28_c);
                    } else {
                        lVar12 = m_loginPass.size();
                        if (lVar12 == 0) {
                            SelectPasswordField();
                            LoginMes((eastl::string*)&constants::text::login29_a,
                                     (eastl::string*)&constants::text::login29_b,
                                     (eastl::string*)&constants::text::login29_c);
                        } else {
                            psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                            pAVar22 = (ApplicationContext*)(*psVar10).operator->();
                            pAVar22->CloseActiveInputForm();
                            LoginMes((eastl::string*)&constants::text::connecting1,
                                     (eastl::string*)&constants::text::connecting2,
                                     (eastl::string*)&constants::text::connecting3);
                            bVar32 = (bool)ShouldRequestTokens();
                            PreparePasswordLogin((eastl::string*)&m_loginPass, bVar32);
                        }
                    }
                } else {
                    this_05 = (UpdateUserDetailsV2*)(unsigned long)(m_sXOf + 185U);
                    if (((((local_161 ^ 1) == 0 && (int)(m_sXOf + 185U) <= iVar27) && (iVar27 <= m_sXOf + 335)) &&
                         (m_sy + 130 <= iVar4)) &&
                        (iVar4 <= m_sy + 170)) {
                        this_05 = (UpdateUserDetailsV2*)&DAT_00000001;
                        MoveToInitialScreen(true, false);
                        m_loginTotpRememberUser = 1;
                    }
                    if (iVar27 < m_sXOfCentre - 117) {
                        m_loginRememberUserCheckboxHighlighted = false;
                    } else {
                        m_loginRememberUserCheckboxHighlighted = false;
                        if ((iVar27 < m_sXOfCentre - 117 + m_loginCheckboxWidth) && (m_sy + 106 <= iVar4)) {
                            m_loginRememberUserCheckboxHighlighted = iVar4 < m_sy + 106 + m_loginCheckboxHeight;
                        }
                    }
                    if (((m_loginRememberUserCheckboxHighlighted & local_161) == 1) &&
                        (bVar26 = pCVar9->field_19104, pCVar9->field_19104 = bVar26 ^ 1, bVar26 != 0)) {
                        pDVar20 = (DeviceOptions*)pCVar9->field_8376.operator->();
                        local_160 = eastl::fixed_string<char, 256>("");
                        pDVar20->SetCachedUserName(local_160);
                    }
                    iVar3 = this_05->GetID();
                    if (((iVar3 == 8) || (iVar3 = this_05->GetID(), iVar3 == 7)) &&
                        (iVar3 = m_sXOfCentre, local_161 != 0)) {
                        iVar6 = m_sy + 210;
                        lVar12 = m_titleButWide.operator->();
                        iVar28 = *(int*)(lVar12 + 48) / 2;
                        if (((iVar3 - iVar28 <= iVar27) && (iVar27 <= iVar28 + iVar3)) &&
                            ((iVar6 <= iVar4 && (iVar4 <= iVar6 + *(int*)(lVar12 + 52))))) {
                            LaunchAccountCreationFlow();
                        }
                    }
                    if ((iVar27 < m_sXOfCentre + 24) || (m_loginHideUserCheckboxHighlighted = false,
                                                         m_sXOfCentre + 24 + m_loginCheckboxWidth <= iVar27)) {
                        m_loginHideUserCheckboxHighlighted = false;
                    } else if (m_sy + 106 <= iVar4) {
                        m_loginHideUserCheckboxHighlighted = iVar4 < m_sy + 106 + m_loginCheckboxHeight;
                    }
                    if ((local_161 & m_loginHideUserCheckboxHighlighted) == 1) {
                        puVar29 = &pCVar9->field_8376;
                        pDVar20 = (DeviceOptions*)(*puVar29).operator->();
                        pDVar20->ToggleHideUserName();
                        pDVar20 = (DeviceOptions*)(*puVar29).operator->();
                        cVar2 = pDVar20->GetHideUserName();
                        if (!cVar2) {
                            m_loginUser.assign("");
                            pDVar20 = (DeviceOptions*)(*puVar29).operator->();
                            local_160 = eastl::fixed_string<char, 256>("");
                            pDVar20->SetCachedUserName(local_160);
                        }
                    }
                    if ((uint8_t)local_178 == '\0') {
                        if ((((local_17c & 1) == 0 || (local_17d != '\0' || local_17e != '\0')) || local_17e != '\0') ||
                            (local_17a = local_17a & 1, local_17a == 0)) {
                            if (local_169 == 0) {
                                if (local_179 != 0) {
                                    if (m_loginSelect == 0) {
                                        SelectPasswordField();
                                    } else {
                                        SelectUsernameField();
                                    }
                                }
                            } else if (m_loginSelect == 0) {
                                SelectPasswordField();
                            } else {
                                m_loginUser.trim();
                                lVar12 = m_loginUser.size();
                                if (lVar12 == 0) {
                                    LoginMes((eastl::string*)&constants::text::login28_a,
                                             (eastl::string*)&constants::text::login28_b,
                                             (eastl::string*)&constants::text::login28_c);
                                    SelectUsernameField();
                                } else {
                                    lVar12 = m_loginPass.size();
                                    if (lVar12 == 0) {
                                        LoginMes((eastl::string*)&constants::text::login29_a,
                                                 (eastl::string*)&constants::text::login29_b,
                                                 (eastl::string*)&constants::text::login29_c);
                                        SelectPasswordField();
                                    } else {
                                        pCVar9 = Client::Instance();
                                        psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) *
                                                                                    *(uint64_t**)pCVar9)(pCVar9);
                                        pAVar22 = (ApplicationContext*)(*psVar10).operator->();
                                        pAVar22->CloseActiveInputForm();
                                        LoginMes((eastl::string*)&constants::text::connecting1,
                                                 (eastl::string*)&constants::text::connecting2,
                                                 (eastl::string*)&constants::text::connecting3);
                                        bVar32 = (bool)ShouldRequestTokens();
                                        PreparePasswordLogin((eastl::string*)&m_loginPass, bVar32);
                                    }
                                }
                            }
                        } else {
                            LoadDevCredentialsFromFile();
                        }
                    } else {
                        MoveToInitialScreen(true, false);
                        m_loginTotpRememberUser = 1;
                    }
                }
            } else {
                piVar14 = (int*)m_loginHelpTextDimensions.second();
                if (local_161 == 0)
                    goto LAB_1000ca6b8;
                iVar28 = *piVar14;
                piVar14 = (int*)m_loginHelpTextDimensions.SSOBeginPtr();
                if (iVar27 < *piVar14 - iVar28 / 2)
                    goto LAB_1000ca6b8;
                piVar14 = (int*)m_loginHelpTextDimensions.SSOBeginPtr();
                if (iVar28 / 2 + *piVar14 < iVar27)
                    goto LAB_1000ca6b8;
                if (iVar4 < iVar3 + 175)
                    goto LAB_1000ca6b8;
                if (iVar3 + 190 <= iVar4)
                    goto LAB_1000ca6b8;
                if (m_loginHelp != 1) {
                    if (m_loginHelp == 2) {
                        new ((local_1d0 + 16)) eastl::allocator("EASTL basic_string");
                        local_160 = eastl::string("https://support.runescape.com/hc/en-gb", (local_1d0 + 16));
                        local_160.OpenURL(DAT_00000001, arg2_03);
                        iVar27 = local_170;
                        iVar4 = local_168;
                    }
                    goto LAB_1000ca6b8;
                }
                ((Web*)&constants::text::cantLoginArticleUrl)->OpenURL(DAT_00000001, arg2_02);
            }
            break;
        case 3:
            iVar3 = m_sXOf + 180;
            iVar4 = ((basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)&constants::text::
                         invalidusername_c)
                        ->size();
            local_160 = jstring::PixfontGeneric::GetCentreStringSubStringRect(
                (int)pixfontGeneric1, 25, *((eastl::string*)(unsigned long)(iVar4 - 34)), 23802544, iVar3);
            iVar4 = local_168;
            uVar25 = extraout_DL_00;
            if (local_161 != 0) {
                cVar2 = local_160.IsInside(iVar27, local_168);
                uVar25 = extraout_DL_01;
                if (cVar2) {
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                    plVar11 = (long*)(*psVar10).operator->();
                    (**(void (**)(...))(*plVar11 + 192))(plVar11, &constants::text::jagexLauncherUrl, 1);
                    uVar25 = extraout_DL_02;
                }
            }
            local_169 = local_169 | (uint8_t)local_178;
            if ((local_169 != 0) || (((local_161 != 0 && (m_sXOf + 105 <= iVar27)) &&
                                      ((iVar27 <= m_sXOf + 255 && ((m_sy + 85 <= iVar4 && (iVar4 <= m_sy + 125)))))))) {
                MoveToUserPassEntryScreen(false);
                uVar25 = extraout_DL_03;
            }
            if ((((local_161 != 0) && (m_sXOf + 105 <= iVar27)) && (iVar27 <= m_sXOf + 255)) &&
                ((m_sy + 135 <= iVar4 && (iVar4 <= m_sy + 175)))) {
                ((Web*)&constants::text::cantLoginArticleUrl)->OpenURL(DAT_00000001, (bool)uVar25);
            }
            break;
        case 4:
            if (local_169 == 0) {
                bVar26 = local_161 ^ 1;
                iVar27 = m_sy + 130;
                iVar4 = m_sy + 170;
                if (((bVar26 != 0) || (local_170 < m_sXOf + 25)) ||
                    ((m_sXOf + 175 < local_170 || ((local_168 < iVar27 || (iVar4 < local_168)))))) {
                    if (local_161 != 0) {
                        uVar25 = (uint8_t)(m_sXOf + 50);
                        if ((((m_sXOf + 50 <= local_170) && (local_170 <= m_sXOf + 170)) && (m_sy + 92 <= local_168)) &&
                            (local_168 <= m_sy + 125)) {
                            psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                            pcVar16 =
                                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar10)
                                    .operator->();
                            psVar17 = (shared_ptr<dash3d::GroundDecor>*)pcVar16->second();
                            local_160 = shared_ptr(psVar17);
                            bVar32 = local_160 == nullptr;
                            if (bVar32) {
                                SetupAuthenticatorInputForm((ReturnValue*)&local_1a0);
                                local_160 = local_1a0;
                            }
                            bVar32 = local_160 != nullptr;
                            if (bVar32) {
                                pIVar18 = (InputForm*)local_160.operator->();
                                pIVar18->ShowKeyboard();
                            }
                            uVar25 = extraout_DL_07;
                        }
                        if (((m_sXOf + 171 <= local_170) && (local_170 <= m_sXOf + 310)) &&
                            ((uVar25 = (uint8_t)(m_sy + 92), m_sy + 92 <= local_168 && (local_168 <= m_sy + 125)))) {
                            m_loginTotpRememberUser = m_loginTotpRememberUser ^ 1;
                        }
                        if (((m_sXOf + 146 <= local_170) && (local_170 <= m_sXOf + 214)) &&
                            ((m_sy + 180 <= local_168 && (local_168 <= m_sy + 192)))) {
                            ((Web*)&constants::text::cantLoginArticleUrl)->OpenURL(DAT_00000001, (bool)uVar25);
                        }
                    }
                    if (((uint8_t)local_178 == '\0') &&
                        ((((bVar26 != 0 || local_170 < m_sXOf + 185 || (m_sXOf + 335 < local_170)) ||
                           (local_168 < iVar27)) ||
                          (iVar4 < local_168))))
                        break;
                    pCVar9->DeriveTOTPMode(false);
                    bVar32 = true;
                    goto LAB_1000cbb74;
                }
            }
            m_loginTotpPinString.trim();
            lVar12 = m_loginTotpPinString.size();
            if (lVar12 != 6) {
                LoginMes((eastl::string*)&constants::text::login_totp_length_a,
                         (eastl::string*)&constants::text::login_totp_length_b,
                         (eastl::string*)&constants::text::login_totp_length_c);
                break;
            }
            m_loginTotpPin = eastl::stoi<eastl::string>(m_loginTotpPinString, 10);
            m_loginTotpPinString.assign("");
            LoginMes((eastl::string*)&constants::text::connecting1, (eastl::string*)&constants::text::connecting2,
                     (eastl::string*)&constants::text::connecting3);
            pLVar15 = pCVar9->GetLoginManager();
            cVar2 = pLVar15->IsRefreshTokenAvailable();
            if (cVar2) {
                pLVar15 = pCVar9->GetLoginManager();
                pLVar15->PrepareGameTokenLogin(true);
            }
            pCVar9->DeriveTOTPMode(true);
            goto LAB_1000ca99b;
        case 5:
            bVar26 = local_161 ^ 1;
            if (((bVar26 == 0) &&
                 (((m_sXOf + 40 <= local_170 && (local_170 <= m_sXOf + 320)) && (m_sy + 89 <= local_168)))) &&
                (local_168 <= m_sy + 129)) {
                psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                pcVar16 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar10)
                              .operator->();
                psVar17 = (shared_ptr<dash3d::GroundDecor>*)pcVar16->second();
                local_160 = shared_ptr(psVar17);
                bVar32 = local_160 == nullptr;
                if (bVar32) {
                    SetupAccountAppealInputForm((ReturnValue*)&local_1a0);
                    local_160 = local_1a0;
                }
                bVar32 = local_160 != nullptr;
                if (bVar32) {
                    pIVar18 = (InputForm*)local_160.operator->();
                    pIVar18->ShowKeyboard();
                }
                break;
            }
            if (((local_170 < m_sXOf + 25 || bVar26 != 0) || (m_sXOf + 175 < local_170)) ||
                ((local_168 < m_sy + 130 || (m_sy + 170 < local_168)))) {
                if (((m_sXOf + 185 <= local_170 && bVar26 == 0) && (local_170 <= m_sXOf + 335)) &&
                    ((m_sy + 130 <= local_168 && (local_168 <= m_sy + 170)))) {
                    MoveToUserPassEntryScreen(true);
                }
                iVar27 = m_sy;
                if ((m_loginDimsInit != '\0') &&
                    (piVar14 = (int*)m_cantLoginOtherTextDimensions.second(), local_161 != 0)) {
                    iVar4 = *piVar14;
                    piVar14 = (int*)m_cantLoginOtherTextDimensions.SSOBeginPtr();
                    if ((*piVar14 - iVar4 / 2 <= local_170) &&
                        (((piVar14 = (int*)m_cantLoginOtherTextDimensions.SSOBeginPtr(),
                           local_170 <= iVar4 / 2 + *piVar14 && (iVar27 + 175 <= local_168)) &&
                          (local_168 < iVar27 + 190)))) {
                        new (local_1d0) eastl::allocator("EASTL basic_string");
                        new ((local_1d0 + 16)) eastl::string("secure", local_1d0);
                        local_1a0 = pCVar9->GetBaseUrl(*((local_1d0 + 16)), true);
                        local_160 + local_1a0;
                        local_160.OpenURL(DAT_00000001, arg2_00);
                        ((local_1d0 + 16))->~basic_string();
                    }
                }
                if ((uint8_t)local_178 == '\0') {
                    if (local_169 != 0)
                        goto LAB_1000cad05;
                } else {
                    MoveToUserPassEntryScreen(true);
                }
                if (((bVar26 == 0 && m_sXOf + 80 <= local_170) && (local_170 <= m_sXOf + 280)) &&
                    ((m_sy + 170 <= local_168 && (local_168 <= m_sy + 200)))) {
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                    pAVar22 = (ApplicationContext*)**psVar10;
                    pAVar22->SendAttributionEvent(*((eastl::string*)&auth::AppsFlyerEvent::FORGOT_LOGIN));
                    pAVar22->SendAnalyticsEvent(*((eastl::string*)&auth::AppsFlyerEvent::FORGOT_LOGIN));
                    new (local_1d0) eastl::allocator("EASTL basic_string");
                    new ((local_1d0 + 16)) eastl::string("secure", local_1d0);
                    local_1a0 = pCVar9->GetBaseUrl(*((local_1d0 + 16)), true);
                    local_160 + local_1a0;
                    local_160.OpenURL(DAT_00000001, arg2_01);
                    ((local_1d0 + 16))->~basic_string();
                }
            } else {
            LAB_1000cad05:
                AccountAppealLogin();
            }
            break;
        case 6:
            if ((local_169 | (uint8_t)local_178) == 1) {
                MoveToInitialScreen(false, false);
            }
            if (local_161 == 0)
                break;
        LAB_1000ca7b5:
            if ((local_168 < m_sy + 130) || (m_sy + 170 < local_168))
                break;
            goto LAB_1000cbb72;
        case 7:
            pCVar13 = Client::Instance();
            if (pCVar13->field_52032 == '\0') {
                iVar4 = m_sy + 130;
                iVar3 = m_sy + 170;
                if ((((local_161 ^ 1) == 0) && (m_sXOf + 25 <= iVar27)) &&
                    ((iVar27 <= m_sXOf + 175 && ((iVar4 <= local_168 && (local_168 <= iVar3)))))) {
                    new (local_1d0) eastl::allocator("EASTL basic_string");
                    new ((local_1d0 + 16)) eastl::string("secure", local_1d0);
                    local_1a0 = pCVar9->GetBaseUrl(*((local_1d0 + 16)), true);
                    local_160 + local_1a0;
                    local_160.OpenURL(DAT_00000001, arg2);
                LAB_1000cb1a6:
                    ((local_1d0 + 16))->~basic_string();
                LAB_1000cb267:
                    LoginMes((eastl::string*)&constants::text::redirect1, (eastl::string*)&constants::text::redirect2,
                             (eastl::string*)&constants::text::redirect3);
                    m_loginscreen = 6;
                    break;
                }
                if ((local_161 ^ 1) != 0 || iVar27 < m_sXOf + 185)
                    break;
            LAB_1000cb872:
                if (((m_sXOf + 335 < local_170) || (local_168 < iVar4)) || (iVar3 < local_168))
                    break;
            LAB_1000cb89d:
                bVar32 = true;
            LAB_1000cb8a2:
                MoveToUserPassEntryScreen(bVar32);
                break;
            }
            local_161 = local_161 ^ 1;
            if (local_161 == 0) {
                arg1 = m_sXOfCentre - 150;
                pCVar31 = (Client*)(unsigned long)arg1;
                if ((((int)arg1 <= iVar27) && (iVar27 <= m_sXOfCentre + 155)) &&
                    ((m_sy + 60 <= local_168 && (local_168 <= m_sy + 100)))) {
                    m_currentDobCharacter = GetCurrentDobInputBoxFromCoordinates(arg1, iVar27);
                    pCVar31 = Client::Instance();
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar31)(pCVar31);
                    pcVar16 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar10)
                                  .operator->();
                    psVar17 = (shared_ptr<dash3d::GroundDecor>*)pcVar16->second();
                    local_160 = shared_ptr(psVar17);
                    bVar1 = local_160 == nullptr;
                    if (bVar1) {
                        SetupDobInputForm((ReturnValue*)&local_1a0);
                        local_160 = local_1a0;
                    }
                    bVar1 = local_160 != nullptr;
                    if (bVar1) {
                        pIVar18 = (InputForm*)local_160.operator->();
                        pIVar18->ShowKeyboard();
                    }
                    pCVar31 = &local_160;
                    pCVar31->~shared_ptr();
                }
            }
            if (local_169 == 0) {
                if (((iVar27 < m_sXOf + 25 || local_161 != 0) || (m_sXOf + 175 < iVar27)) ||
                    ((local_168 < m_sy + 130 || (m_sy + 170 < local_168)))) {
                    local_161 = local_161 | iVar27 < m_sXOf + 185;
                    if ((((local_161 == 0) && (iVar27 <= m_sXOf + 335)) && (m_sy + 130 <= local_168)) &&
                        (local_168 <= m_sy + 170)) {
                        local_160 = Array<eastl::string>(8);
                        m_dobCharacters = local_160;
                        MoveToUserPassEntryScreen(true);
                    }
                    bVar26 = bVar32 & local_17f;
                    if (local_180 != 0) {
                        this_00 = &m_dobCharacters[(long)m_currentDobCharacter];
                        cVar2 = *this_00 == "";
                        if ((cVar2) && (0 < m_currentDobCharacter)) {
                            m_currentDobCharacter = m_currentDobCharacter - 1;
                        }
                        pbVar21 = &m_dobCharacters[(long)m_currentDobCharacter];
                        eastl::string::assign(pbVar21, "");
                    }
                    if (bVar26 != 0) {
                        pbVar21 = &m_dobCharacters[(long)m_currentDobCharacter];
                        *pbVar21 = local_17b;
                        iVar27 = m_currentDobCharacter;
                        iVar4 = m_dobCharacters.end();
                        if (iVar27 < iVar4 - 1) {
                            m_currentDobCharacter = m_currentDobCharacter + 1;
                        }
                    }
                    break;
                }
            }
            cVar2 = CheckAndSetDobInput((TitleScreen*)pCVar31);
            if (!cVar2)
                break;
            m_dobSubmitted = 1;
            LoginMes((eastl::string*)&constants::text::connecting1, (eastl::string*)&constants::text::connecting2,
                     (eastl::string*)&constants::text::connecting3);
        LAB_1000ca99b:
            pCVar9->SetMainState(20);
            break;
        case 8:
            if (m_backgroundMode != '\0') {
                ResumeInForeground();
                break;
            }
            if ((((local_161 ^ 1) == 0) && (m_sXOf + 25 <= iVar27)) &&
                ((iVar27 <= m_sXOf + 175 && ((m_sy + 130 <= local_168 && (local_168 <= m_sy + 170)))))) {
                ((Web*)&constants::text::termsAndConditionsUrl)->OpenURL(DAT_00000001, false);
                goto LAB_1000cb267;
            }
            if (((((local_161 ^ 1) != 0 || iVar27 < m_sXOf + 185) || (m_sXOf + 335 < local_170)) ||
                 (local_168 < m_sy + 130)) ||
                (m_sy + 170 < local_168))
                break;
            bVar32 = true;
            goto LAB_1000cbb74;
        case 9:
            if (m_backgroundMode != '\0') {
                ResumeInForeground();
            }
            local_169 = local_169 | (uint8_t)local_178;
            if ((local_169 == 0) && ((((local_161 == 0 || (local_170 < m_sXOf + 105)) || (m_sXOf + 255 < local_170)) ||
                                      ((local_168 < m_sy + 120 || (m_sy + 160 < local_168))))))
                break;
        LAB_1000caa8d:
            pLVar15 = pCVar9->GetLoginManager();
            pLVar15->ClearFederatedSignInResult();
            goto LAB_1000cbb72;
        case 10:
            if (m_backgroundMode == '\0') {
                if ((uint8_t)local_178 != 0) {
                    puVar29 = &pCVar9->field_8376;
                    pDVar20 = (DeviceOptions*)(*puVar29).operator->();
                    cVar2 = pDVar20->GetFullscreen();
                    if ((cVar2) && (pCVar9->field_8425 == false)) {
                        pDVar20 = (DeviceOptions*)(*puVar29).operator->();
                        pDVar20->ToggleFullscreen();
                        pDVar20 = (DeviceOptions*)(*puVar29).operator->();
                        m_toggleFullscreenCheckboxTicked = pDVar20->GetFullscreen();
                    }
                }
                iVar4 = m_sXOf;
                if (((local_169 != 0) || ((((local_161 != 0 && (m_sXOf + 71 <= iVar27)) && (iVar27 <= m_sXOf + 289)) &&
                                           ((m_sy + 38 <= iVar6 && (iVar6 <= m_sy + 106)))))) &&
                    (cVar2 = ShowWorldWarningScreen(4), !cVar2)) {
                    InitiateGameTokenLogin(false, false);
                }
                pLVar15 = pCVar9->GetLoginManager();
                cVar2 = pLVar15->IsUsingJagexLauncher();
                if ((!cVar2) &&
                    (((uint8_t)local_178 != '\0' ||
                      (((local_161 != 0 && (iVar4 + 105 <= local_170)) &&
                        ((local_170 <= iVar4 + 255 && ((m_sy + 140 <= local_168 && (local_168 <= m_sy + 180)))))))))) {
                    m_loginscreen = 11;
                }
                break;
            }
            bVar32 = false;
            goto LAB_1000c9eba;
        case 11:
            iVar4 = m_sy + 100;
            local_161 = local_161 ^ 1;
            iVar3 = m_sy + 140;
            if ((((local_161 == 0) && (m_sXOfCentre - 155 <= iVar27)) && (iVar27 <= m_sXOfCentre - 5)) &&
                ((iVar4 <= local_168 && (local_168 <= iVar3)))) {
                pLVar15 = pCVar9->GetLoginManager();
                pLVar15->InvalidateRefreshToken();
                psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                plVar11 = (long*)(*psVar10).operator->();
                (**(void (**)(...))(*plVar11 + 176))(plVar11, &ApplicationContext::AUTHENTICATOR_HASH);
                psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                plVar11 = (long*)(*psVar10).operator->();
                (**(void (**)(...))(*plVar11 + 176))(plVar11, &ApplicationContext::DISPLAYNAME_KEY);
                MoveToInitialScreen(true, true);
            }
            if ((uint8_t)((((iVar27 <= m_sXOfCentre + 155 && m_sXOfCentre + 5 <= iVar27) && iVar4 <= iVar6) &&
                           iVar6 <= iVar3) &
                              ~local_161 |
                          local_169) == 1) {
                m_loginscreen = 10;
            }
            break;
        case 12:
            iVar4 = (int)pixfontGeneric2;
            local_160 = jstring::PixfontGeneric::GetCentreStringSubStringRect(iVar4, 0, *30, 23805136, m_sXOfCentre);
            local_1a0 = jstring::PixfontGeneric::GetCentreStringSubStringRect(iVar4, 32, *32, 23805136, iVar3);
            *((local_1d0 + 16)) =
                jstring::PixfontGeneric::GetCentreStringSubStringRect(iVar4, 70, *34, 23805136, iVar3);
            iVar27 = local_170;
            *local_1d0 = jstring::PixfontGeneric::GetCentreStringSubStringRect(iVar4, 0, *34, 23805168, iVar3);
            iVar4 = local_168;
            if (local_161 != 0) {
                cVar2 = local_160.IsInside(iVar27, local_168);
                if (!cVar2) {
                    cVar2 = local_1a0.IsInside(iVar27, iVar4);
                    if (!cVar2) {
                        cVar2 = ((local_1d0 + 16))->IsInside(iVar27, iVar4);
                        this_02 = (Web*)&constants::text::eulaUrl;
                        uVar25 = extraout_DL_09;
                        if (!cVar2) {
                            cVar2 = local_1d0->IsInside(iVar27, iVar4);
                            uVar25 = extraout_DL_10;
                            if (!cVar2)
                                goto LAB_1000cbab1;
                        }
                    } else {
                        this_02 = (Web*)&constants::text::privacyPolicyUrl;
                        uVar25 = extraout_DL_08;
                    }
                } else {
                    this_02 = (Web*)&constants::text::termsAndConditionsUrl;
                    uVar25 = extraout_DL;
                }
                this_02->OpenURL(DAT_00000001, (bool)uVar25);
            }
        LAB_1000cbab1:
            local_161 = local_161 ^ 1;
            iVar3 = m_sy + 120;
            iVar28 = m_sy + 160;
            if (((local_161 == 0) && (m_sXOfCentre - 155 <= iVar27)) &&
                ((iVar27 <= m_sXOfCentre - 5 && ((iVar3 <= iVar4 && (iVar4 <= iVar28)))))) {
                pCVar9->AcceptTermsAndPrivacy();
                ApplyPostAction();
            }
            if ((uint8_t)((((iVar27 <= m_sXOfCentre + 155 && m_sXOfCentre + 5 <= iVar27) && iVar3 <= iVar4) &&
                           iVar4 <= iVar28) &
                              ~local_161 |
                          local_169) == 1) {
                m_postAction = 4294967295;
                m_loginscreen = 13;
            }
            if ((uint8_t)local_178 == '\0')
                break;
        LAB_1000cbb68:
            m_postAction = 4294967295;
            goto LAB_1000cbb72;
        case 13:
            if ((uint8_t)local_178 == 0) {
                if (((local_161 == 0) || (local_170 < m_sXOfCentre - 75)) || (m_sXOfCentre + 75 < local_170))
                    break;
                goto LAB_1000ca7b5;
            }
        LAB_1000cbb72:
            bVar32 = false;
        LAB_1000cbb74:
            MoveToInitialScreen(bVar32, false);
            break;
        case 14:
            local_160 = eastl::string("");
            iVar4 = local_168;
            if (m_currentSupportReason == 2) {
                eastl::string::assign(
                    &local_160, "https://support.runescape.com/hc/en-gb/articles/207256855-Settle-an-Unpaid-Balance");
                iVar4 = local_168;
            } else if (m_currentSupportReason == 1) {
                eastl::string::assign(&local_160, "https://secure.runescape.com/m=accountappeal/passwordrecovery");
                iVar4 = local_168;
            } else if (m_currentSupportReason == 0) {
                eastl::string::assign(&local_160, "https://secure.runescape.com/m=offence-appeal/account-history");
            } else {
                MoveToInitialScreen(false, false);
            }
            bVar32 = iVar27 < m_sXOf + 105;
            bVar1 = m_sXOf + 255 < iVar27;
            if ((((bVar1 || bVar32) || (local_161 ^ 1) != 0) || (iVar4 < m_sy + 85)) || (m_sy + 125 < iVar4)) {
                if ((((!bVar1 && !bVar32) && (local_161 ^ 1) == 0) && m_sy + 135 <= iVar4) && (iVar4 <= m_sy + 175)) {
                    MoveToInitialScreen(false, false);
                }
            } else {
                local_160.OpenURL(DAT_00000001, (uint8_t)(m_sy + 125));
                LoginMes((eastl::string*)&constants::text::redirect1, (eastl::string*)&constants::text::redirect2,
                         (eastl::string*)&constants::text::redirect3);
                m_loginscreen = 6;
            }
            break;
        default:
            if ((m_backgroundMode != '\0') && (m_loginscreen == 20))
                goto LAB_1000cab53;
            switch (m_loginscreen) {
            case 15:
                pLVar15 = pCVar9->GetLoginManager();
                iVar27 = pLVar15->GetThirdPartySignInResult();
                psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                pAVar22 = (ApplicationContext*)**psVar10;
                if (iVar27 == 0)
                    break;
                if (iVar27 < 1) {
                    if (iVar27 == -4) {
                        pAVar22->SendAttributionEvent(
                            *((eastl::string*)&auth::AppsFlyerEvent::GAME_CENTER_ERROR_UNAVAILABLE));
                        pAVar22->SendAnalyticsEvent(
                            *((eastl::string*)&auth::AppsFlyerEvent::GAME_CENTER_ERROR_UNAVAILABLE));
                        str1 = (eastl::string*)&constants::text::gamecenterDisabled1;
                        pbVar30 = (eastl::string*)&constants::text::gamecenterDisabled2;
                        pbVar24 = (eastl::string*)&constants::text::gamecenterDisabled3;
                    } else {
                        if (iVar27 == -3) {
                            pAVar22->SendAttributionEvent(
                                *((eastl::string*)&auth::AppsFlyerEvent::GAME_CENTER_ERROR_UNDERAGE));
                            pAVar22->SendAnalyticsEvent(
                                *((eastl::string*)&auth::AppsFlyerEvent::GAME_CENTER_ERROR_UNDERAGE));
                            LoginMes((eastl::string*)&constants::text::gamecenterUnderage1,
                                     (eastl::string*)&constants::text::gamecenterUnderage2,
                                     (eastl::string*)&constants::text::gamecenterUnderage3);
                            m_loginscreen = 8;
                            break;
                        }
                        pAVar22->SendAttributionEvent(
                            *((eastl::string*)&auth::AppsFlyerEvent::GAME_CENTER_ERROR_UNAVAILABLE));
                        pAVar22->SendAnalyticsEvent(
                            *((eastl::string*)&auth::AppsFlyerEvent::GAME_CENTER_ERROR_UNAVAILABLE));
                        str1 = (eastl::string*)&constants::text::gamecenterAccessError1;
                        pbVar30 = (eastl::string*)&constants::text::gamecenterAccessError2;
                        pbVar24 = (eastl::string*)&constants::text::gamecenterAccessError3;
                    }
                LAB_1000ccc7a:
                    LoginMes(str1, pbVar30, pbVar24);
                    m_loginscreen = 9;
                    break;
                }
                m_loginscreen = 10;
                LoginMes((eastl::string*)&constants::text::connecting1, (eastl::string*)&constants::text::connecting2,
                         (eastl::string*)&constants::text::connecting3);
                pLVar15->SetEndPosition(-1000);
                iVar27 = pLVar15->GetAuthenticatorUserHash();
                local_268 = eastl::string("");
                SetLoginCredentials(iVar27, &local_268);
                goto LAB_1000cc5b0;
            case 21:
                local_161 = local_161 ^ 1;
                iVar27 = m_sy + 120;
                iVar4 = m_sy + 160;
                if ((((local_161 == 0) && (m_sXOfCentre - 155 <= local_170)) && (local_170 <= m_sXOfCentre - 5)) &&
                    ((iVar27 <= local_168 && (local_168 <= iVar4)))) {
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                    ((AutoSingleton<ShaderThreadPoolSingleton>*)(*psVar10).operator->())->~AutoSingleton();
                    ApplyPostAction();
                }
                if ((uint8_t)((((iVar28 <= m_sXOfCentre + 155 && m_sXOfCentre + 5 <= iVar28) && iVar27 <= iVar6) &&
                               iVar6 <= iVar4) &
                                  ~local_161 |
                              local_169) != 1)
                    break;
                goto LAB_1000cbb68;
            case 22:
                if ((local_169 != 0) ||
                    (((local_161 != 0 && (m_sXOf + 105 <= local_170)) &&
                      ((local_170 <= m_sXOf + 255 && ((m_sy + 110 <= local_168 && (local_168 <= m_sy + 150)))))))) {
                    LoginMes((eastl::string*)&constants::text::open_store1,
                             (eastl::string*)&constants::text::open_store2,
                             (eastl::string*)&constants::text::open_store3);
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                    plVar11 = (long*)(*psVar10).operator->();
                    (**(void (**)(...))(*plVar11 + 104))(plVar11);
                }
                break;
            case 23:
                pLVar15 = pCVar9->GetLoginManager();
                iVar27 = pLVar15->GetThirdPartySignInResult();
                if (iVar27 == 0)
                    break;
                if (iVar27 < 1) {
                    if (iVar27 == -2) {
                        m_loginscreen = 0;
                        break;
                    }
                    str1 = (eastl::string*)&constants::text::googleloginAccessError1;
                    pbVar30 = (eastl::string*)&constants::text::googleloginAccessError2;
                    pbVar24 = (eastl::string*)&constants::text::googleloginAccessError3;
                    goto LAB_1000ccc7a;
                }
                m_loginscreen = 10;
                LoginMes((eastl::string*)&constants::text::connecting1, (eastl::string*)&constants::text::connecting2,
                         (eastl::string*)&constants::text::connecting3);
                pLVar15->SetEndPosition(-1000);
                iVar27 = pLVar15->GetAuthenticatorUserHash();
                local_248 = eastl::string("");
                SetLoginCredentials(iVar27, &local_248);
            LAB_1000cc5b0:
                pLVar15->PrepareFederatedLogin();
            LAB_1000cc5b5:
                pCVar9->DeriveTOTPMode(false);
                if (pCVar9->field_8448 == 45) {
                    pCVar9->SetMainState(50);
                    break;
                }
                goto LAB_1000ca99b;
            case 24:
                if ((local_169 == 0) &&
                    ((((local_161 == 0 || (local_170 < m_sXOf + 105)) || (m_sXOf + 255 < local_170)) ||
                      ((local_168 < m_sy + 120 || (m_sy + 160 < local_168))))))
                    break;
                goto LAB_1000cbb72;
            case 27:
                pLVar15 = pCVar9->GetLoginManager();
                TVar5 = pLVar15->GetFederatedSignInResult();
                cVar2 = jag::auth::TokenAuthLoginHandler::IsFinished(TVar5);
                if (!cVar2) {
                    if (TVar5 == 3) {
                        pGVar23 = (GraphicsApp*)GraphicsApp::Instance();
                        cVar2 = pGVar23->HasFocus();
                        if (!cVar2) {
                            m_loginscreen = 31;
                        }
                    }
                    break;
                }
                if (TVar5 == 22) {
                    m_loginscreen = 26;
                    break;
                }
                if (TVar5 != 20) {
                    pLVar8 = logger::default_logger();
                    pLVar8->Log(false, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "titlescreen.cpp",
                                1835, "Steam Login Failed, error %i", TVar5);
                    str1 = (eastl::string*)&constants::text::steamloginAccessError1;
                    pbVar30 = (eastl::string*)&constants::text::steamloginAccessError2;
                    pbVar24 = (eastl::string*)&constants::text::steamloginAccessError3;
                    goto LAB_1000ccc7a;
                }
                m_loginscreen = 24;
                LoginMes((eastl::string*)&constants::text::connecting1, (eastl::string*)&constants::text::connecting2,
                         (eastl::string*)&constants::text::connecting3);
                pLVar15->SetEndPosition(-1000);
                iVar27 = pLVar15->GetAuthenticatorUserHash();
                local_208 = eastl::string("");
                SetLoginCredentials(iVar27, &local_208);
                pLVar15->PrepareFederatedLogin();
                goto LAB_1000cc5b5;
            case 30:
                pLVar15 = pCVar9->GetLoginManager();
                psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
                pAVar22 = (ApplicationContext*)**psVar10;
                iVar27 = pLVar15->GetJagexWebAuthResult();
                if (iVar27 == -3) {
                    lVar12 = core::SafeTime::CurrentTimeMillis();
                    if (300000 < lVar12 - m_lastJagexWebFlowRequest) {
                        pAVar22->SendAttributionEvent(*((eastl::string*)&auth::AppsFlyerEvent::JAGEX_WEB_AUTH_FAILURE));
                        pAVar22->SendAnalyticsEvent(*((eastl::string*)&auth::AppsFlyerEvent::JAGEX_WEB_AUTH_FAILURE));
                        bVar32 = true;
                        goto LAB_1000cbb74;
                    }
                } else if ((iVar27 == 1407) || (iVar27 == 0)) {
                    pLVar15->SetEndPosition(-1000);
                    iVar27 = pLVar15->GetAuthenticatorUserHash();
                    local_228 = eastl::string("");
                    SetLoginCredentials(iVar27, &local_228);
                    m_loginscreen = 10;
                    goto LAB_1000cc5b0;
                }
                if (1 < iVar27 + 3U) {
                    pbVar24 = (eastl::string*)&auth::AppsFlyerEvent::JAGEX_WEB_AUTH_FAILURE;
                    if (iVar27 == 1404) {
                        pbVar24 = (eastl::string*)&auth::AppsFlyerEvent::JAGEX_WEB_AUTH_NOT_AUTHORISED;
                    }
                    pbVar30 = (eastl::string*)&auth::AppsFlyerEvent::JAGEX_WEB_AUTH_CANCELLED;
                    if (iVar27 != 1402) {
                        pbVar30 = pbVar24;
                    }
                    pAVar22->SendAttributionEvent(*pbVar30);
                    pAVar22->SendAnalyticsEvent(*pbVar30);
                    MoveToInitialScreen(true, false);
                    pLVar15->SetJagexWebAuthResult(4294967294);
                }
                break;
            case 31:
                pGVar23 = (GraphicsApp*)GraphicsApp::Instance();
                cVar2 = pGVar23->HasFocus();
                if (!cVar2)
                    break;
                goto LAB_1000caa8d;
            case 32:
                iVar4 = m_sy + 130;
                iVar3 = m_sy + 170;
                if (((((local_161 ^ 1) == 0) && (m_sXOf + 25 <= local_170)) && (local_170 <= m_sXOf + 175)) &&
                    ((iVar4 <= local_168 && (local_168 <= iVar3)))) {
                    new (local_1d0) eastl::allocator("EASTL basic_string");
                    new ((local_1d0 + 16)) eastl::string("secure", local_1d0);
                    local_1a0 = pCVar9->GetBaseUrl(*((local_1d0 + 16)), true);
                    local_160 + local_1a0;
                    local_160.OpenURL(DAT_00000001, arg2_04);
                    goto LAB_1000cb1a6;
                }
                if ((local_161 ^ 1) != 0 || local_170 < m_sXOf + 185)
                    break;
                goto LAB_1000cb872;
            case 33:
                bVar26 = local_161 ^ 1;
                if ((((bVar26 == 0) && (m_sXOf + 105 <= local_170)) && (local_170 <= m_sXOf + 255)) &&
                    ((m_sy + 85 <= local_168 && (local_168 <= m_sy + 125)))) {
                    ((Web*)&constants::text::jagexLauncherUrl)->OpenURL(DAT_00000001, (uint8_t)local_168);
                }
                if (((bVar26 != 0 || iVar28 < m_sXOf + 105) || (m_sXOf + 255 < local_170)) ||
                    ((local_168 < m_sy + 135 || (m_sy + 175 < local_168))))
                    break;
                goto LAB_1000cb89d;
            }
            break;
        case 16:
        case 19:
            if (((((local_161 ^ 1) == 0) && (m_sXOfCentre - 155 <= iVar27)) && (iVar27 <= m_sXOfCentre - 5)) &&
                ((m_sy + 100 <= local_168 && (local_168 <= m_sy + 140)))) {
                ApplyPendingTransactions();
                LoginMes((eastl::string*)&constants::text::applying_pending1,
                         (eastl::string*)&constants::text::applying_pending2,
                         (eastl::string*)&constants::text::applying_pending3);
                m_loginscreen = 17;
                break;
            }
            if ((((local_161 ^ 1) != 0 || iVar27 < m_sXOfCentre + 5) || (m_sXOfCentre + 155 < iVar27)) ||
                ((local_168 < m_sy + 100 || (m_sy + 140 < local_168)))) {
                if ((uint8_t)local_178 != 0) {
                    m_loginscreen = DetermineInitialScreen(false);
                }
                break;
            }
            goto LAB_1000c9eb5;
        case 17:
            psVar10 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar9)(pCVar9);
            plVar11 = (long*)(*psVar10).operator->();
            authLibWrapper = (AuthLibWrapper*)(**(void (**)(...))(*plVar11 + 72))(plVar11);
            if (authLibWrapper == nullptr) {
                LoginMes((eastl::string*)&constants::text::applying_pending_failed1,
                         (eastl::string*)&constants::text::applying_pending_failed2,
                         (eastl::string*)&constants::text::applying_pending_failed3);
                m_loginscreen = 19;
            } else {
                local_160 = authLibWrapper->GetApplyPendingTransactionResult();
                cVar2 = local_160.IsNull();
                if (!cVar2) {
                    pcVar19 = (char*)local_160.SSOBeginPtr();
                    if (*pcVar19 == '\0') {
                        LoginMes((eastl::string*)&constants::text::applying_pending_failed1,
                                 (eastl::string*)&constants::text::applying_pending_failed2,
                                 (eastl::string*)&constants::text::applying_pending_failed3);
                        m_loginscreen = 19;
                    } else {
                        LoginMes((eastl::string*)&constants::text::applying_pending_success1,
                                 (eastl::string*)&constants::text::applying_pending_success2,
                                 (eastl::string*)&constants::text::applying_pending_success3);
                        m_loginscreen = 18;
                    }
                }
            }
            break;
        case 18:
            lVar12 = core::SafeTime::CurrentTimeMillis();
            if (m_pendingTransactionLoginDelayStart == 0) {
                m_pendingTransactionLoginDelayStart = lVar12;
            }
            if (lVar12 - m_pendingTransactionLoginDelayStart < 2001)
                break;
            m_pendingTransactionLoginDelayStart = -1;
        LAB_1000c9eb5:
            bVar32 = true;
        LAB_1000c9eba:
            InitiateGameTokenLogin(bVar32, false);
        }
    switchD_1000cad29_caseD_10:
    }

    // 0x1000d2960
    void TitleScreen::Draw(const shared_ptr<jstring::PixfontGeneric>& pixfontGeneric1,
                           const shared_ptr<jstring::PixfontGeneric>& pixfontGeneric2,
                           const shared_ptr<jstring::PixfontGeneric>& pixfontGeneric3, bool arg4,
                           graphics::Pix2D& pix2D) {
        shared_ptr<jstring::PixfontGeneric>* psVar1;
        bool cVar3;
        int iVar5;
        int iVar6;
        uint32_t uVar7;
        uint32_t uVar8;
        int iVar9;
        Js5* pJVar11;
        long lVar12;
        int* piVar13;
        GridRect* pGVar14;
        PixfontGeneric* pPVar15;
        unique_ptr<LoadingScreenScript>* puVar16;
        long* plVar17;
        uint64_t uVar18;
        shared_ptr<ApplicationContext>* shared_ptr;
        Client* pCVar19;
        unsigned long uVar20;
        TitleFlames* pTVar21;
        DeviceOptions* pDVar23;
        char* pcVar25;
        int iVar26;
        unsigned long uVar27;
        ReturnValue result;
        eastl::string* pbVar28;
        unique_ptr<graphics::Pix8>* this_01;
        int iVar30;
        unsigned int arg3;
        unsigned int uVar31;
        bool bVar32;
        float fVar33;
        ReturnValue local_158;
        ReturnValue local_130;
        time_t local_110;
        int local_f0;
        int local_ec;
        ReturnValue local_e8;
        ReturnValue local_c8;
        ReturnValue local_80;
        PixfontGeneric* local_60;
        PixfontGeneric* local_58;
        PixfontGeneric* local_50;
        shared_ptr<jstring::PixfontGeneric>* local_40;
        PixfontGeneric* local_38;

        if (m_backgroundMode != '\0') {
            LogAssert(
                "m_backgroundMode == false",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/titlescreen.cpp",
                2126, "TitleScreen is in background mode. Don\'t call TitleScreen::Draw()");
        }
        auto pCVar10 = Client::Instance();
        (**(void (**)(...))(pix2D.field_0 + 8))(pix2D);
        ComputeSafeOffset(&m_xOf, pCVar10);
        m_sXOf = m_xOf + 202;
        m_sXOfCentre = m_xOf + 382;
        unsigned long local_a8 = core::SafeTime::CurrentTimeMillis();
        PixfontGeneric* pPVar29 = (PixfontGeneric*)&m_titleBack;
        &result = nullptr;
        bool bVar2 = m_titleBack != nullptr;
        Client* local_48 = pCVar10;
        if (bVar2) {
            local_60 = (PixfontGeneric*)pixfontGeneric2;
            local_40 = pixfontGeneric1;
            cVar3 = m_volumeOptionsBobbleSlider.empty();
            if (cVar3) {
                pJVar11 = pCVar10->GetSprites();
                &result = &local_a0;
                result = graphics::pixloader::Makepix8Array(*pJVar11, "volume_options_bobble_slider", "");
                m_volumeOptionsBobbleSlider = result;
                cVar3 = m_volumeOptionsBobbleSlider.empty();
                if (!cVar3) {
                    lVar12 = m_volumeOptionsBobbleSlider.end();
                    &result = &local_a0;
                    void result(lVar12 - 1);
                    m_volumeSliderPositions = result;
                }
            }
            local_58 = (PixfontGeneric*)pixfontGeneric3;
            local_50 = (PixfontGeneric*)pix2D;
            iVar5 = m_volumeSliderPositions.end();
            if (0 < iVar5) {
                iVar5 = 616;
                pPVar29 = (PixfontGeneric*)0;
                do {
                    local_38 = (PixfontGeneric*)((long)pPVar29 + 1);
                    uVar31 = m_xOf + iVar5;
                    lVar12 = m_titleBack.operator->();
                    local_a0 = pCVar10->GetUISafeArea();
                    local_80[0]._0_4_ = local_a0.GetLevel();
                    piVar13 = std::min<int>(*((lVar12 + 28)), local_80);
                    iVar6 = *piVar13;
                    pGVar14 = &m_volumeSliderPositions[(unsigned long)pPVar29];
                    lVar12 = m_volumeOptionsBobbleSlider[1];
                    iVar26 = *(int*)(lVar12 + 48);
                    lVar12 = m_volumeOptionsBobbleSlider[1];
                    pCVar10 = local_48;
                    &result = (ReturnValue*)(unsigned long)uVar31;
                    new (pGVar14) dash3d::GridRect(uVar31, iVar6 - 82, iVar26, *(int*)(lVar12 + 52));
                    iVar6 = m_volumeSliderPositions.end();
                    iVar5 = iVar5 + 26;
                    pPVar29 = local_38;
                } while ((long)local_38 < (long)iVar6);
            }
            pixfontGeneric1 = local_40;
            pCVar10 = local_48;
            pix2D = (Pix2D*)local_50;
            pixfontGeneric3 = (shared_ptr<jstring::PixfontGeneric>*)local_58;
            pixfontGeneric2 = (shared_ptr<jstring::PixfontGeneric>*)local_60;
            if (m_switchScreen != '\0') {
                pPVar29 = (PixfontGeneric*)**local_40;
                pPVar15 = (PixfontGeneric*)**local_60;
                WorldSwitchRender(pPVar29, pPVar15, (Pix2D*)local_50);
                return;
            }
            if (m_initialOpenAnimFinishTime == -1) {
                m_initialOpenAnimStartTime = local_a8 + 300;
                m_initialOpenAnimFinishTime = local_a8 + 900;
            }
            if ((long)local_a8 < m_initialOpenAnimStartTime) {
                return;
            }
            if (m_initialOpenAnimFinishTime - local_a8 != 0 && (long)local_a8 <= m_initialOpenAnimFinishTime) {
                local_38 =
                    (PixfontGeneric*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((float)(local_50->field_8 / 2)));
                fVar33 = (float)m_initialOpenAnim.GetInterpolation(
                    (float)(long)(m_initialOpenAnimFinishTime - local_a8) * -0.0016666667 + 1.0);
                uVar31 = m_sXOfCentre - (int)(fVar33 * local_38._0_4_);
                &result = (ReturnValue*)(unsigned long)uVar31;
                pix2D.SetClipping(uVar31, 0, m_sXOfCentre + (int)(fVar33 * local_38._0_4_), 503);
            }
            pPVar29 = (PixfontGeneric*)pix2D;
            PlotTitle(pix2D);
        }
        bVar2 = pPVar29 != &result;
        if (bVar2) {
            puVar16 = (unique_ptr<LoadingScreenScript>*)(*pPVar29).operator->();
            (**(void (**)(...))(*(long*)puVar16 + 32))(puVar16, m_loadPos);
            puVar16 = (unique_ptr<LoadingScreenScript>*)(*puVar16).operator->();
            (**(void (**)(...))(*(long*)puVar16 + 48))(puVar16, &m_loadString);
            plVar17 = (long*)(*puVar16).operator->();
            local_60 = (PixfontGeneric*)pixfontGeneric2;
            (**(void (**)(...))(*plVar17 + 40))(plVar17, pix2D, m_xOf, 0);
            pixfontGeneric2 = (shared_ptr<jstring::PixfontGeneric>*)local_60;
        }
        bVar2 = m_titleBack == nullptr;
        if (bVar2) {
            return;
        }
        local_38 = (PixfontGeneric*)pixfontGeneric1;
        local_60 = (PixfontGeneric*)pixfontGeneric2;
        pPVar29 = (PixfontGeneric*)pixfontGeneric3;
        if ((pCVar10->field_8448 == 5) || (pCVar10->field_8448 == 2)) {
            pPVar15 = (PixfontGeneric*)pix2D;
            jstring::PixfontGeneric::CentreString(*local_38, 23799216, m_sXOf + 180, m_sy + 54, 16777215, *4294967295);
            uVar31 = m_sy;
            pix2D.DrawRect(m_sXOf + 28, m_sy + 62, 304, 34, 9179409);
            pix2D.DrawRect(m_sXOf + 29, uVar31 + 63, 302, 32, 0);
            iVar5 = uVar31 + 64;
            (**(void (**)(...))(*(long*)pix2D + 32))(pix2D, m_sXOf + 30, iVar5, m_loadPos * 3, 30, 9179409, pPVar15);
            pPVar15 = (PixfontGeneric*)pix2D;
            (**(void (**)(...))(*(long*)pix2D + 32))(pix2D, m_sXOf + m_loadPos * 3 + 30, iVar5, m_loadPos * -3 + 300,
                                                     30, 0);
            iVar5 = pPVar15->GetID();
            if (iVar5 == 8) {
                m_loadString.assign("Initialising game");
            }
            pixfontGeneric3 = (shared_ptr<jstring::PixfontGeneric>*)local_38;
            jstring::PixfontGeneric::CentreString(*local_38, 16295848, m_sXOf + 180, m_sy + 85, 16777215, *4294967295);
        }
        if ((pCVar10->field_8448 == 20) || (m_loginscreen == 20)) {
            uVar18 = *m_titleBox;
            iVar5 = m_sXOf;
            lVar12 = m_titleBox.operator->();
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, (iVar5 - *(int*)(lVar12 + 48) / 2) + 180,
                                                      (m_sy - *(int*)(lVar12 + 52) / 2) + 100);
            pPVar15 = local_38;
            uVar31 = m_sy;
            jstring::PixfontGeneric::CentreString(*local_38, 16296752, m_sXOf + 180, m_sy + 30, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296784, m_sXOf + 180, uVar31 + 45, 16776960, nullptr);
            pixfontGeneric3 = (shared_ptr<jstring::PixfontGeneric>*)pPVar15;
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296816, m_sXOf + 180, uVar31 + 60, 16776960, nullptr);
            if ((24 < m_loginscreen) || ((18154643U >> (m_loginscreen & 31) & 1) == 0)) {
                local_50 = (PixfontGeneric*)pix2D;
                jstring::PixfontGeneric::DrawString(*pPVar15, 23801936, m_sXOf + 70, uVar31 + 82, 16777215, nullptr);
                GetRenderUsername(&local_a0);
                while (iVar5 = local_38->StringWid(local_a0), 200 < iVar5) {
                    lVar12 = local_a0.size();
                    local_80 = local_a0.substr(0, lVar12 - 1);
                    local_a0 = &local_80;
                }
                pcVar25 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar27 = local_a0.size();
                local_80 = jstring::PixfontGeneric::Escape(pcVar25, uVar27);
                pPVar15 = local_38;
                jstring::PixfontGeneric::DrawString(*local_38, (int)&local_80, m_sXOf + 110, uVar31 + 82, 16777215,
                                                    nullptr);
                local_80 = core::stringtools::general::StringTools::MaskPassword(m_loginPass);
                pix2D = (Pix2D*)local_50;
                while (iVar5 = pPVar15->StringWid(local_80), 200 < iVar5) {
                    local_80.pop_back();
                }
                local_e8 + (*((eastl::string*)&constants::text::passwordprompt));
                jstring::PixfontGeneric::DrawString(*pPVar15, (int)&local_e8, m_sXOf + 72, uVar31 + 97, 16777215,
                                                    nullptr);
                pixfontGeneric3 = &local_a0;
                pixfontGeneric3.~basic_string();
            }
            pCVar10 = local_48;
            if (m_loginscreen == 20) {
                bVar2 = (bool)ShouldRequestTokens();
                pixfontGeneric3 = (shared_ptr<jstring::PixfontGeneric>*)&m_loginPass;
                PreparePasswordLogin((eastl::string*)&m_loginPass, bVar2);
            }
        }
        if ((pCVar10->field_8448 & 4294967294) != 10)
            goto switchD_1000d47e4_caseD_10;
        uVar18 = *m_titleBox;
        pixfontGeneric3 = (shared_ptr<jstring::PixfontGeneric>*)pix2D;
        (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, m_sXOf, m_sy);
        pPVar15 = local_38;
        iVar6 = m_sXOfCentre;
        iVar5 = m_sXOf;
        uVar31 = m_sy;
        switch (m_loginscreen) {
        case 0:
            pCVar10 = Client::Instance();
            shared_ptr = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar10)(pCVar10);
            plVar17 = (long*)(*shared_ptr).operator->();
            plVar17 = (long*)(**(void (**)(...))(*plVar17 + 72))(plVar17);
            if ((plVar17 == nullptr) || (((cVar3 = (**(void (**)(...))(*plVar17 + 104))(plVar17),
                                           !cVar3 && (cVar3 = (**(void (**)(...))(*plVar17 + 112))(plVar17), !cVar3)) &&
                                          (cVar3 = (**(void (**)(...))(*plVar17 + 120))(plVar17), !cVar3)))) {
                pixfontGeneric3 = (shared_ptr<jstring::PixfontGeneric>*)local_38;
                jstring::PixfontGeneric::CentreString(*local_38, 23802032, m_sXOf + 180, uVar31 + 80, 16776960,
                                                      nullptr);
                iVar6 = m_sy + 100;
                uVar18 = *m_titleBut;
                (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 27, iVar6);
                pixfontGeneric3.DrawStringMultiline(*((eastl::string*)&constants::text::newuser), iVar5 + 27, iVar6,
                                                    144, 40, 16777215, 0, 1, 1, 0, pix2D);
                iVar5 = m_sXOf + 187;
                uVar18 = *m_titleBut;
                (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5, iVar6);
                pCVar10 = local_48;
                pixfontGeneric3.DrawStringMultiline(*((eastl::string*)&constants::text::existinguser), iVar5, iVar6,
                                                    144, 40, 16777215, 0, 1, 1, 0, pix2D);
                Client::Instance();
                pixfontGeneric3.GetID();
                goto switchD_1000d47e4_caseD_10;
            }
            local_a0 = eastl::string("");
            cVar3 = (**(void (**)(...))(*plVar17 + 104))(plVar17);
            pPVar29 = local_38;
            if (!cVar3) {
                cVar3 = (**(void (**)(...))(*plVar17 + 112))(plVar17);
                if (!cVar3) {
                    cVar3 = (**(void (**)(...))(*plVar17 + 120))(plVar17);
                    if (!cVar3) {
                        local_40 = nullptr;
                    } else {
                        local_40 = (shared_ptr<jstring::PixfontGeneric>*)3;
                        local_a0 = ((eastl::string*)&constants::text::loginSteam);
                    }
                } else {
                    local_40 = (shared_ptr<jstring::PixfontGeneric>*)2;
                    local_a0 = ((eastl::string*)&constants::text::loginGooglePlay);
                }
            } else {
                local_40 = (shared_ptr<jstring::PixfontGeneric>*)1;
                local_a0 = ((eastl::string*)&constants::text::loginGameCenter);
            }
            jstring::PixfontGeneric::CentreString(*pPVar29, 23802032, m_sXOf + 180, m_sy + 44, 16776960, nullptr);
            uVar31 = m_sy;
            iVar6 = m_sy + 58;
            local_50 = (PixfontGeneric*)pix2D;
            lVar12 = m_titleButWide.operator->();
            local_58 = (PixfontGeneric*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(iVar5 + 180));
            iVar26 = (iVar5 + 180) - *(int*)(lVar12 + 48) / 2;
            uVar18 = *m_titleButWide;
            pPVar29 = local_50;
            (**(void (**)(...))(*(long*)local_50 + 184))(local_50, uVar18, iVar26, iVar6);
            psVar1 = local_40;
            uVar18 = m_loginIcon[(unsigned long)local_40];
            (**(void (**)(...))(*(long*)pPVar29 + 184))(pPVar29, uVar18, iVar26 + 4, uVar31 + 62);
            iVar5 = m_sXOfCentre;
            lVar12 = m_loginIcon[(unsigned long)psVar1];
            iVar5 = iVar5 + *(int*)(lVar12 + 48) / 2 + 3;
            local_40 = (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)iVar5);
            jstring::PixfontGeneric::CentreString(*local_38, (int)&local_a0, iVar5, uVar31 + 84, 16777215, nullptr);
            lVar12 = m_titleButWide.operator->();
            iVar5 = uVar31 + *(int*)(lVar12 + 52);
            uVar18 = *m_titleButWide;
            pix2D = (Pix2D*)local_50;
            (**(void (**)(...))(*(long*)local_50 + 184))(local_50, uVar18, (int)local_58 - *(int*)(lVar12 + 48) / 2,
                                                         iVar5 + 64);
            uVar18 = m_loginIcon[0];
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar26 + 5, iVar5 + 68);
            jstring::PixfontGeneric::CentreString(*local_38, 23802224, (int)local_40, iVar5 + 90, 16777215, nullptr);
            goto LAB_1000d56b8;
        case 1:
            jstring::PixfontGeneric::CentreString(*local_38, 16296848, m_sXOf + 180, m_sy + 30, 16776960, nullptr);
            uVar31 = m_sy;
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296752, m_sXOf + 180, m_sy + 65, 16777215, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296784, m_sXOf + 180, uVar31 + 80, 16777215, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296816, m_sXOf + 180, uVar31 + 95, 16777215, nullptr);
            iVar6 = m_sXOf;
            uVar31 = m_sy;
            local_40._0_4_ = m_sXOf + 100;
            uVar18 = *m_titleBut;
            iVar5 = uVar31 + 130;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 27, iVar5);
            iVar26 = uVar31 + 155;
            jstring::PixfontGeneric::CentreString(*pPVar15, 23788336, (int)local_40, iVar26, 16777215, nullptr);
            iVar6 = m_sXOf;
            local_40 =
                (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(m_sXOf + 260));
            uVar18 = *m_titleBut;
            iVar6 = iVar6 + 187;
        LAB_1000d3456:
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6, iVar5);
            iVar6 = 23802352;
            pPVar29 = pPVar15;
            goto LAB_1000d4206;
        case 2:
            jstring::PixfontGeneric::CentreString(*local_38, 16296752, m_sXOfCentre, m_sy + 30, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296784, m_sXOfCentre, uVar31 + 45, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296816, m_sXOfCentre, uVar31 + 60, 16776960, nullptr);
            jstring::PixfontGeneric::DrawString(*pPVar15, 23801936, m_sXOfCentre - 110, uVar31 + 82, 16777215, nullptr);
            GetRenderUsername(&local_a0);
            while (iVar5 = pPVar15->StringWid(local_a0), 200 < iVar5) {
                local_a0.pop_back();
            }
            pcVar25 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar27 = local_a0.size();
            local_e8 = jstring::PixfontGeneric::Escape(pcVar25, uVar27);
            pCVar10 = local_48;
            bVar32 = m_loginSelect != 0;
            bVar2 = 19 < local_48->field_8488 % 40;
            if (bVar2 || bVar32) {
                local_c8 = eastl::string("");
            } else {
                local_130 = StringConstants::TAG_COLOUR(16776960);
                local_c8 + local_130;
            }
            local_80 + local_e8;
            jstring::PixfontGeneric::DrawString(*local_38, (int)&local_80, m_sXOfCentre - 70, uVar31 + 82, 16777215,
                                                nullptr);
            if (!bVar2 && !bVar32) {
            }
            local_80 = core::stringtools::general::StringTools::MaskPassword(m_loginPass);
            while (iVar5 = local_38->StringWid(local_80), 200 < iVar5) {
                local_80.pop_back();
            }
            local_c8 + (*((eastl::string*)&constants::text::passwordprompt));
            bVar32 = m_loginSelect != 1;
            bVar2 = 19 < pCVar10->field_8488 % 40;
            if (bVar2 || bVar32) {
                pPVar29 = local_38;
                local_110 = eastl::string("");
            } else {
                local_158 = StringConstants::TAG_COLOUR(16776960);
                pPVar29 = local_38;
                local_110 + local_158;
            }
            local_e8 + local_c8;
            jstring::PixfontGeneric::DrawString(*pPVar29, (int)&local_e8, m_sXOfCentre - 108, uVar31 + 97, 16777215,
                                                nullptr);
            if (!bVar2 && !bVar32) {
            }
            iVar6 = m_sXOfCentre;
            uVar31 = m_sy;
            iVar5 = m_sy + 106;
            local_40 = (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) |
                                                              (uint32_t)(m_sXOfCentre - 117));
            lVar12 = GetRadioButton((bool)local_48->field_19104, (bool)m_loginRememberUserCheckboxHighlighted);
            uVar27 = (unsigned long)local_40 & 4294967295;
            local_40 = (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)iVar5);
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, lVar12, uVar27, iVar5);
            jstring::PixfontGeneric::DrawString(*local_60, 23802384, iVar6 + *(int*)(lVar12 + 48) - 112, uVar31 + 119,
                                                16776960, nullptr);
            iVar5 = m_sXOfCentre;
            pDVar23 = (DeviceOptions*)local_48->field_8376.operator->();
            bVar2 = (bool)pDVar23->GetHideUserName();
            lVar12 = GetRadioButton(bVar2, (bool)m_loginHideUserCheckboxHighlighted);
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, lVar12, iVar5 + 24, (unsigned long)local_40 & 4294967295);
            jstring::PixfontGeneric::DrawString(*local_60, 23802416, iVar5 + *(int*)(lVar12 + 48) + 29, uVar31 + 119,
                                                16776960, nullptr);
            iVar6 = m_sXOfCentre;
            uVar31 = m_sy;
            uVar18 = *m_titleBut;
            iVar5 = uVar31 + 130;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 - 153, iVar5);
            pCVar10 = local_48;
            iVar26 = uVar31 + 155;
            jstring::PixfontGeneric::CentreString(*local_38, 23802288, iVar6 - 80, iVar26, 16777215, nullptr);
            iVar6 = m_sXOfCentre;
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 7, iVar5);
            jstring::PixfontGeneric::CentreString(*local_38, 23802352, iVar6 + 80, iVar26, 16777215, nullptr);
            iVar5 = m_sy + 186;
            if (m_loginHelp == 2) {
                m_loginHelpText = ((eastl::string*)&constants::text::loginhelp_generic);
            } else {
                m_loginHelpText = ((eastl::string*)&constants::text::loginhelp_password);
            }
            iVar6 = m_sXOfCentre;
            if (m_loginDimsInit == '\0') {
                m_loginDimsInit = '\x01';
                iVar26 = local_60->StringWid(m_loginHelpText);
                new (&m_loginHelpTextDimensions) dash3d::GridRect(iVar6, iVar5, iVar26, 11);
                iVar6 = m_sXOfCentre;
                iVar26 = local_60->StringWid(*((eastl::string*)&constants::text::loginhelp_other));
                new (&m_cantLoginOtherTextDimensions) dash3d::GridRect(iVar6, iVar5, iVar26, 11);
            }
            pPVar29 = local_60;
            jstring::PixfontGeneric::CentreString(*local_60, 16296880, m_sXOfCentre, iVar5, 16777215, nullptr);
            iVar5 = pPVar29->GetID();
            if ((iVar5 == 8) || (iVar5 = pPVar29->GetID(), iVar5 == 7)) {
                iVar6 = m_sXOfCentre;
                uVar31 = m_sy;
                iVar5 = m_sy + 210;
                lVar12 = m_titleButWide.operator->();
                pCVar10 = local_48;
                iVar6 = iVar6 - *(int*)(lVar12 + 48) / 2;
                uVar18 = *m_titleButWide;
                (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6, iVar5);
                uVar18 = m_loginIcon[0];
                (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 5, uVar31 + 214);
                iVar5 = m_sXOfCentre;
                lVar12 = m_loginIcon[1];
                jstring::PixfontGeneric::CentreString(*local_38, 23802256, iVar5 + *(int*)(lVar12 + 48) / 2 + 3,
                                                      uVar31 + 236, 16777215, nullptr);
            }
            break;
        case 3:
            jstring::PixfontGeneric::CentreString(*local_38, 23802480, m_sXOf + 180, m_sy + 30, 16776960, nullptr);
            pPVar15 = local_60;
            jstring::PixfontGeneric::CentreString(*local_60, 23802512, m_sXOf + 180, uVar31 + 50, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 23802544, m_sXOf + 180, uVar31 + 70, 16776960, nullptr);
            iVar6 = m_sXOf;
            uVar31 = m_sy;
            iVar5 = m_sXOf + 180;
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 107, uVar31 + 85);
            jstring::PixfontGeneric::CentreString(*pPVar29, 23802576, iVar5, uVar31 + 110, 16777215, nullptr);
            iVar5 = m_sXOf;
            uVar31 = m_sy;
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 107, uVar31 + 135);
            iVar6 = 23802608;
        LAB_1000d369c:
            iVar5 = iVar5 + 180;
            iVar26 = uVar31 + 160;
            pCVar10 = local_48;
            goto LAB_1000d5daf;
        case 4:
            jstring::PixfontGeneric::CentreString(*local_38, 23799760, m_sXOf + 180, m_sy + 30, 16776960, nullptr);
            uVar31 = m_sy;
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296752, m_sXOf + 180, m_sy + 65, 16777215, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296784, m_sXOf + 180, uVar31 + 80, 16777215, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296816, m_sXOf + 180, uVar31 + 95, 16777215, nullptr);
            local_e8 = core::stringtools::general::StringTools::MaskPassword(m_loginTotpPinString);
            local_80 + (*((eastl::string*)&constants::text::pinprompt));
            iVar5 = pCVar10->field_8488 % 40;
            if (iVar5 < 20) {
                local_130 = StringConstants::TAG_COLOUR(16776960);
                pPVar29 = local_38;
                local_c8 + local_130;
            } else {
                pPVar29 = local_38;
                local_c8 = eastl::string("");
            }
            local_a0 + local_80;
            jstring::PixfontGeneric::DrawString(*pPVar29, (int)&local_a0, m_sXOf + 72, uVar31 + 110, 16777215, nullptr);
            if (iVar5 < 20) {
            }
            jstring::PixfontGeneric::DrawString(*pPVar29, 23788432, m_sXOf + 171, uVar31 + 102, 16776960, nullptr);
            jstring::PixfontGeneric::DrawString(*pPVar29, 23788464, m_sXOf + 171, uVar31 + 117, 16776960, nullptr);
            iVar6 = m_sXOf;
            iVar26 = pPVar29->StringWid(*((eastl::string*)&constants::text::donotremember2));
            iVar5 = pPVar29->field_0;
            this_01 = (unique_ptr<graphics::Pix8>*)&m_optionsRadioButtonYes;
            if (m_loginTotpRememberUser == '\0') {
                this_01 = (unique_ptr<graphics::Pix8>*)&m_optionsRadioButtonNone;
            }
            uVar18 = **this_01;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + iVar26 + 186, (uVar31 + 117) - iVar5);
            iVar5 = m_sXOf;
            uVar31 = m_sy;
            local_58._0_4_ = m_sXOf + 100;
            uVar18 = *m_titleBut;
            local_40 =
                (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(uVar31 + 130));
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 27);
            jstring::PixfontGeneric::CentreString(*pPVar29, 23788336, (int)local_58, uVar31 + 155, 16777215, nullptr);
            iVar5 = m_sXOf;
            local_58 = (PixfontGeneric*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(m_sXOf + 260));
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 187, (unsigned long)local_40 & 4294967295);
            jstring::PixfontGeneric::CentreString(*pPVar29, 23802352, (int)local_58, uVar31 + 155, 16777215, nullptr);
            iVar5 = m_sXOf + 180;
            iVar26 = uVar31 + 186;
            iVar6 = 23802768;
            pixfontGeneric3 = (shared_ptr<jstring::PixfontGeneric>*)local_60;
            goto LAB_1000d54c9;
        case 5:
            jstring::PixfontGeneric::CentreString(*local_38, 23802640, m_sXOf + 180, m_sy + 30, 16776960, nullptr);
            uVar31 = m_sy;
            jstring::PixfontGeneric::CentreString(*pPVar29, 16296752, m_sXOf + 180, m_sy + 50, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar29, 16296784, m_sXOf + 180, uVar31 + 65, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar29, 16296816, m_sXOf + 180, uVar31 + 80, 16776960, nullptr);
            jstring::PixfontGeneric::DrawString(*local_38, 23802672, m_sXOf + 35, uVar31 + 109, 16777215, nullptr);
            GetRenderUsername(&local_a0);
            while (iVar5 = local_38->StringWid(local_a0), 174 < iVar5) {
                local_80 = local_a0.substr(1, 18446744073709551615);
                local_a0 = &local_80;
            }
            pcVar25 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar27 = local_a0.size();
            local_e8 = jstring::PixfontGeneric::Escape(pcVar25, uVar27);
            iVar5 = pCVar10->field_8488 % 40;
            if (iVar5 < 20) {
                local_130 = StringConstants::TAG_COLOUR(16776960);
                local_c8 + local_130;
            } else {
                local_c8 = eastl::string("");
            }
            local_80 + local_e8;
            jstring::PixfontGeneric::DrawString(*local_38, (int)&local_80, m_sXOf + 146, uVar31 + 109, 16777215,
                                                nullptr);
            if (iVar5 < 20) {
            }
            iVar6 = m_sXOf;
            uVar31 = m_sy;
            uVar18 = *m_titleBut;
            iVar5 = uVar31 + 130;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 27, iVar5);
            pCVar10 = local_48;
            iVar26 = uVar31 + 155;
            jstring::PixfontGeneric::CentreString(*local_38, 23802704, iVar6 + 100, iVar26, 16777215, nullptr);
            iVar6 = m_sXOf;
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 187, iVar5);
            jstring::PixfontGeneric::CentreString(*local_38, 23802736, iVar6 + 260, iVar26, 16777215, nullptr);
            jstring::PixfontGeneric::CentreString(*local_60, 23802800, m_sXOfCentre, m_sy + 185, 16777215, nullptr);
            break;
        case 6:
            jstring::PixfontGeneric::CentreString(*local_38, 16296752, m_sXOf + 180, m_sy + 30, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296784, m_sXOf + 180, uVar31 + 45, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296816, m_sXOf + 180, uVar31 + 60, 16776960, nullptr);
            iVar5 = m_sXOf;
            uVar31 = m_sy;
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 107, uVar31 + 130);
            iVar26 = uVar31 + 155;
            goto LAB_1000d42b8;
        case 7:
            pCVar19 = Client::Instance();
            pPVar15 = local_38;
            uVar31 = m_sy;
            if (pCVar19->field_52032 != '\0') {
                uVar27 = 0;
                jstring::PixfontGeneric::CentreString(*local_38, 16296752, m_sXOfCentre, m_sy + 30, 16776960, nullptr);
                jstring::PixfontGeneric::CentreString(*pPVar15, 16296784, m_sXOfCentre, uVar31 + 45, 16776960, nullptr);
                pPVar29 = (PixfontGeneric*)pix2D;
                jstring::PixfontGeneric::CentreString(*pPVar15, 16296816, m_sXOfCentre, uVar31 + 60, 16776960, nullptr);
                local_40 = (shared_ptr<jstring::PixfontGeneric>*)(unsigned long)(m_sXOfCentre - 150);
                local_ec = uVar31 + 70;
                local_58 = (PixfontGeneric*)(unsigned long)(uVar31 + 97);
                local_50 = (PixfontGeneric*)pix2D;
                do {
                    uVar18 = *m_titleBut;
                    psVar1 = local_40;
                    (**(void (**)(...))(*(long*)pix2D + 216))(pix2D, uVar18, (unsigned long)local_40 & 4294967295,
                                                              local_ec, 30, 40, pPVar29);
                    iVar5 = m_dobCharacters[uVar27];
                    local_f0 = (int)psVar1 + 10;
                    jstring::PixfontGeneric::DrawString(*local_38, iVar5, local_f0, (int)local_58, 16777215, nullptr);
                    uVar20 = (unsigned long)m_currentDobCharacter;
                    bVar2 = 19 < pCVar10->field_8488 % 40;
                    pbVar28 = &m_dobCharacters[uVar27];
                    if (bVar2 || uVar27 != uVar20) {
                        local_80 = eastl::string("");
                    } else {
                        local_e8 = StringConstants::TAG_COLOUR(16776960);
                        local_80 + local_e8;
                    }
                    local_a0 + *pbVar28;
                    iVar5 = (int)&local_a0;
                    pPVar29 = local_50;
                    jstring::PixfontGeneric::DrawString(*local_38, iVar5, local_f0, (int)local_58, 16777215, nullptr);
                    if (!bVar2 && uVar27 == uVar20) {
                    }
                    pCVar10 = local_48;
                    pix2D = (Pix2D*)local_50;
                    if (((unsigned int)uVar27 & 2147483645) == 1) {
                        local_a0 = eastl::string("/");
                        iVar6 = (int)local_40;
                        pPVar29 = (PixfontGeneric*)pix2D;
                        jstring::PixfontGeneric::DrawString(*local_38, iVar5, iVar6 + 37, (int)local_58, 16777215,
                                                            nullptr);
                        local_40 = (shared_ptr<jstring::PixfontGeneric>*)(unsigned long)(iVar6 + 50);
                    } else {
                        local_40 = (shared_ptr<jstring::PixfontGeneric>*)(unsigned long)((int)local_40 + 35);
                    }
                    iVar5 = m_sXOfCentre;
                    uVar31 = m_sy;
                    uVar27 = uVar27 + 1;
                } while (uVar27 != 8);
                local_40 = (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) |
                                                                  (uint32_t)(m_sXOfCentre - 80));
                uVar18 = *m_titleBut;
                local_58 = (PixfontGeneric*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(uVar31 + 130));
                (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 - 153);
                local_a0 = eastl::string("Submit");
                pixfontGeneric3 = (shared_ptr<jstring::PixfontGeneric>*)local_38;
                iVar26 = uVar31 + 155;
                jstring::PixfontGeneric::CentreString(*local_38, (int)&local_a0, (int)local_40, iVar26, 16777215,
                                                      nullptr);
                iVar6 = m_sXOfCentre;
                iVar5 = m_sXOfCentre + 80;
                uVar18 = *m_titleBut;
                (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 7,
                                                          (unsigned long)local_58 & 4294967295);
                iVar6 = 23802352;
                goto LAB_1000d54c3;
            }
        LAB_1000d5c74:
            pPVar15 = local_38;
            uVar31 = m_sy;
            jstring::PixfontGeneric::CentreString(*local_38, 23803632, m_sXOf + 180, m_sy + 45, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar29, 23803664, m_sXOf + 180, uVar31 + 60, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar29, 23803696, m_sXOf + 180, uVar31 + 75, 16776960, nullptr);
            iVar6 = m_sXOf;
            uVar31 = m_sy;
            local_40 =
                (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(m_sXOf + 100));
            uVar18 = *m_titleBut;
            iVar5 = uVar31 + 130;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 27, iVar5);
            iVar6 = 23803728;
            goto LAB_1000d5d49;
        case 8:
            jstring::PixfontGeneric::CentreString(*local_38, 16296752, m_sXOf + 180, m_sy + 45, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar29, 16296784, m_sXOf + 180, uVar31 + 60, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar29, 16296816, m_sXOf + 180, uVar31 + 75, 16776960, nullptr);
            iVar6 = m_sXOf;
            uVar31 = m_sy;
            local_40 =
                (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(m_sXOf + 100));
            uVar18 = *m_titleBut;
            iVar5 = uVar31 + 130;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 27, iVar5);
            iVar6 = 23795376;
        LAB_1000d5d49:
            iVar26 = uVar31 + 155;
            jstring::PixfontGeneric::CentreString(*pPVar15, iVar6, (int)local_40, iVar26, 16777215, nullptr);
            iVar6 = m_sXOf;
            local_40 =
                (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(m_sXOf + 260));
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 187, iVar5);
            iVar6 = 23802736;
            pPVar29 = pPVar15;
            pCVar10 = local_48;
            iVar5 = (int)local_40;
            goto LAB_1000d5dac;
        case 9:
            local_40._0_4_ = m_sy + 100;
            jstring::PixfontGeneric::CentreString(*local_38, 16296752, m_sXOf + 180, m_sy + 50, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296784, m_sXOf + 180, uVar31 + 75, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296816, m_sXOf + 180, (int)local_40, 16776960, nullptr);
            iVar5 = m_sXOf;
            uVar31 = m_sy;
            local_40 =
                (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(m_sXOf + 180));
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 107, uVar31 + 120);
            iVar26 = uVar31 + 145;
            iVar6 = 23802576;
            pPVar29 = pPVar15;
            iVar5 = (int)local_40;
            goto LAB_1000d5dac;
        case 10:
            local_40 =
                (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(m_sXOf + 180));
            jstring::PixfontGeneric::CentreString(*local_38, 23802032, m_sXOf + 180, m_sy + 38, 16776960, nullptr);
            uVar18 = *m_titleButLarge;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 71, uVar31 + 58);
            local_a0 = rs2lib::social::DisplayNameTools::SanitiseUnknownDisplayName(m_displayName);
            cVar3 = local_a0.empty();
            uVar18 = *m_textPlayNow;
            if (!cVar3) {
                (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 132, uVar31 + 63);
                jstring::PixfontGeneric::CentreString(*local_38, 16296040, (int)local_40, uVar31 + 111, 16776960,
                                                      nullptr);
            } else {
                (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 132, uVar31 + 76);
            }
            pCVar10 = Client::Instance();
            cVar3 = pCVar10->GetLoginManager()->IsUsingJagexLauncher();
            uVar31 = m_sy;
            if (!cVar3) {
                iVar6 = m_sy + 140;
                uVar18 = *m_titleBut;
                (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 107, iVar6);
                local_80 = eastl::string("Sign out");
                jstring::PixfontGeneric::CentreString(*local_38, (int)&local_80, (int)local_40, uVar31 + 165, 16777215,
                                                      nullptr);
            }
            pixfontGeneric3 = &local_a0;
            pixfontGeneric3.~basic_string();
            pCVar10 = local_48;
            goto switchD_1000d47e4_caseD_10;
        case 11:
            iVar5 = m_sy + 80;
            local_a0 = eastl::string("Are you sure you want to sign out?");
            jstring::PixfontGeneric::CentreString(*local_38, (int)&local_a0, m_sXOf + 180, iVar5, 16776960, nullptr);
            iVar5 = m_sXOf;
            uVar31 = m_sy;
            local_40 =
                (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(m_sXOf + 100));
            iVar6 = m_sy + 100;
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 27, iVar6);
            local_a0 = eastl::string("Yes");
            jstring::PixfontGeneric::CentreString(*local_38, (int)&local_a0, (int)local_40, uVar31 + 125, 16777215,
                                                  nullptr);
            iVar26 = m_sXOf;
            iVar5 = m_sXOf + 260;
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar26 + 187, iVar6);
            local_a0 = eastl::string("No");
            jstring::PixfontGeneric::CentreString(*local_38, (int)&local_a0, iVar5, uVar31 + 125, 16777215, nullptr);
        LAB_1000d56b8:
            pixfontGeneric3 = &local_a0;
            pixfontGeneric3.~basic_string();
            pCVar10 = local_48;
            goto switchD_1000d47e4_caseD_10;
        case 12:
            jstring::PixfontGeneric::CentreString(*pPVar29, 23805104, m_sXOfCentre, m_sy + 45, 16777215, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar29, 23805136, iVar6, uVar31 + 62, 16777215, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar29, 23805168, iVar6, uVar31 + 79, 16777215, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar29, 23805200, iVar6, uVar31 + 96, 16777215, nullptr);
            iVar6 = m_sXOfCentre;
            uVar31 = m_sy;
            local_40._0_4_ = m_sXOfCentre - 80;
            uVar18 = *m_titleBut;
            iVar5 = uVar31 + 120;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 - 153, iVar5);
            pPVar29 = local_38;
            iVar26 = uVar31 + 145;
            jstring::PixfontGeneric::CentreString(*local_38, 23805520, (int)local_40, iVar26, 16777215, nullptr);
            iVar6 = m_sXOfCentre;
            local_40 = (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) |
                                                              (uint32_t)(m_sXOfCentre + 80));
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 7, iVar5);
            iVar6 = 23805552;
        LAB_1000d4206:
            pCVar10 = local_48;
            iVar5 = (int)local_40;
        LAB_1000d5daf:
            iVar9 = 16777215;
            pPVar15 = pPVar29;
        LAB_1000d5db5:
            jstring::PixfontGeneric::CentreString(*pPVar15, iVar6, iVar5, iVar26, iVar9, nullptr);
            pixfontGeneric3 = (shared_ptr<jstring::PixfontGeneric>*)pPVar15;
            goto switchD_1000d47e4_caseD_10;
        case 13:
            jstring::PixfontGeneric::CentreString(*pPVar29, 23805232, m_sXOf + 180, m_sy + 60, 16777215, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar29, 23805264, m_sXOf + 180, uVar31 + 80, 16777215, nullptr);
            iVar5 = m_sXOf;
            uVar31 = m_sy;
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 107, uVar31 + 120);
            iVar26 = uVar31 + 145;
        LAB_1000d42b8:
            iVar5 = iVar5 + 180;
            iVar6 = 23802736;
        LAB_1000d42c3:
            pPVar29 = local_38;
        LAB_1000d5dac:
            goto LAB_1000d5daf;
        case 14:
            iVar5 = m_sy + 30;
            if (m_currentSupportReason == 2) {
                LoginMes((eastl::string*)&constants::text::login32_a, (eastl::string*)&constants::text::login32_b,
                         (eastl::string*)&constants::text::login32_c);
                pPVar15 = local_38;
            } else if (m_currentSupportReason == 1) {
                LoginMes((eastl::string*)&constants::text::login18_a, (eastl::string*)&constants::text::login18_b,
                         (eastl::string*)&constants::text::login18_c);
            } else if (m_currentSupportReason == 0) {
                LoginMes((eastl::string*)&constants::text::login4_a, (eastl::string*)&constants::text::login4_b,
                         (eastl::string*)&constants::text::login4_c);
            } else {
                MoveToInitialScreen(false, false);
            }
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296752, m_sXOf + 180, iVar5, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296784, m_sXOf + 180, uVar31 + 50, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296816, m_sXOf + 180, uVar31 + 70, 16776960, nullptr);
            iVar6 = m_sXOf;
            uVar31 = m_sy;
            iVar5 = m_sXOf + 180;
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 107, uVar31 + 85);
            pixfontGeneric3 = (shared_ptr<jstring::PixfontGeneric>*)local_38;
            if (m_currentSupportReason == 1) {
                iVar6 = 23791888;
            } else {
                iVar6 = 23791920;
            }
            jstring::PixfontGeneric::CentreString(*local_38, iVar6, iVar5, uVar31 + 110, 16777215, nullptr);
            iVar6 = m_sXOf;
            uVar31 = m_sy;
            iVar5 = m_sXOf + 180;
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 107, uVar31 + 135);
            iVar26 = uVar31 + 160;
            iVar6 = 23802736;
        LAB_1000d54c3:
        LAB_1000d54c9:
            jstring::PixfontGeneric::CentreString(pixfontGeneric3, iVar6, iVar5, iVar26, 16777215, nullptr);
            pCVar10 = local_48;
            goto switchD_1000d47e4_caseD_10;
        default:
            if (1 < m_loginscreen - 17) {
                switch (m_loginscreen) {
                case 15:
                case 23:
                case 25:
                case 27:
                case 29:
                case 30:
                case 31:
                    jstring::PixfontGeneric::CentreString(*local_38, 16296752, m_sXOf + 180, m_sy + 30, 16776960,
                                                          nullptr);
                    jstring::PixfontGeneric::CentreString(*pPVar15, 16296784, m_sXOf + 180, uVar31 + 45, 16776960,
                                                          nullptr);
                    iVar26 = uVar31 + 60;
                    iVar5 = m_sXOf + 180;
                    iVar6 = 16296816;
                    iVar9 = 16776960;
                    goto LAB_1000d5db5;
                default:
                    goto switchD_1000d47e4_caseD_10;
                case 21:
                    jstring::PixfontGeneric::CentreString(*pPVar29, 23805392, m_sXOfCentre, m_sy + 45, 16777215,
                                                          nullptr);
                    jstring::PixfontGeneric::CentreString(*pPVar29, 23805424, iVar6, uVar31 + 62, 16777215, nullptr);
                    jstring::PixfontGeneric::CentreString(*pPVar29, 23805456, iVar6, uVar31 + 79, 16777215, nullptr);
                    jstring::PixfontGeneric::CentreString(*pPVar29, 23805488, iVar6, uVar31 + 96, 16777215, nullptr);
                    iVar6 = m_sXOfCentre;
                    uVar31 = m_sy;
                    local_40._0_4_ = m_sXOfCentre - 80;
                    uVar18 = *m_titleBut;
                    iVar5 = uVar31 + 120;
                    (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 - 153, iVar5);
                    pPVar15 = local_38;
                    iVar26 = uVar31 + 145;
                    jstring::PixfontGeneric::CentreString(*local_38, 23805520, (int)local_40, iVar26, 16777215,
                                                          nullptr);
                    iVar6 = m_sXOfCentre;
                    local_40 = (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) |
                                                                      (uint32_t)(m_sXOfCentre + 80));
                    uVar18 = *m_titleBut;
                    iVar6 = iVar6 + 7;
                    goto LAB_1000d3456;
                case 22:
                    iVar5 = m_sy + 100;
                    jstring::PixfontGeneric::CentreString(*local_38, 16296752, m_sXOf + 180, m_sy + 50, 16776960,
                                                          nullptr);
                    jstring::PixfontGeneric::CentreString(*pPVar29, 16296784, m_sXOf + 180, uVar31 + 75, 16776960,
                                                          nullptr);
                    pCVar10 = local_48;
                    jstring::PixfontGeneric::CentreString(*pPVar29, 16296816, m_sXOf + 180, iVar5, 16776960, nullptr);
                    iVar6 = m_sXOf;
                    uVar31 = m_sy;
                    iVar5 = m_sXOf + 180;
                    uVar18 = *m_titleBut;
                    (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 107, uVar31 + 110);
                    iVar26 = uVar31 + 135;
                    iVar6 = 23795984;
                    break;
                case 24:
                    iVar5 = m_sy + 100;
                    jstring::PixfontGeneric::CentreString(*local_38, 16296752, m_sXOf + 180, m_sy + 50, 16776960,
                                                          nullptr);
                    jstring::PixfontGeneric::CentreString(*pPVar29, 16296784, m_sXOf + 180, uVar31 + 75, 16776960,
                                                          nullptr);
                    pCVar10 = local_48;
                    jstring::PixfontGeneric::CentreString(*pPVar29, 16296816, m_sXOf + 180, iVar5, 16776960, nullptr);
                    iVar6 = m_sXOf;
                    uVar31 = m_sy;
                    iVar5 = m_sXOf + 180;
                    uVar18 = *m_titleBut;
                    (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 107, uVar31 + 120);
                    iVar26 = uVar31 + 145;
                    iVar6 = 23788272;
                    break;
                case 26:
                    jstring::PixfontGeneric::CentreString(*local_38, 23801136, m_sXOf + 180, m_sy + 50, 16776960,
                                                          nullptr);
                    iVar26 = m_sXOf;
                    local_58 = (PixfontGeneric*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(uVar31 + 60));
                    iVar5 = m_sXOf + 35;
                    uVar18 = *m_titleButWide;
                    (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5, uVar31 + 60);
                    uVar18 = m_loginIcon[0];
                    iVar6 = iVar26 + 42;
                    local_40 =
                        (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)iVar6);
                    (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6, uVar31 + 64);
                    new (&m_steamLinkYesBtn) dash3d::GridRect(iVar5, (int)local_58, 286, 40);
                    arg3 = iVar26 + 183;
                    local_58 = (PixfontGeneric*)(unsigned long)arg3;
                    jstring::PixfontGeneric::CentreString(*local_38, 23801264, arg3, uVar31 + 87, 16777215, nullptr);
                    uVar18 = *m_titleButWide;
                    (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5, uVar31 + 105);
                    uVar18 = m_loginIcon[3];
                    (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, (unsigned long)local_40 & 4294967295,
                                                              uVar31 + 111);
                    pCVar10 = local_48;
                    new (&m_steamLinkNoBtn) dash3d::GridRect(iVar5, uVar31 + 105, 286, 40);
                    iVar26 = uVar31 + 132;
                    iVar6 = 23801296;
                    iVar5 = (int)local_58;
                    pPVar29 = local_38;
                    goto LAB_1000d5dac;
                case 28:
                    pPVar29->DrawStringMultiline(*((eastl::string*)&constants::text::steamLinkConfirmCaption),
                                                 m_sXOf + 70, m_sy + 35, 220, 100, 16777215, 0, 1, 0, 16, pix2D);
                    iVar5 = m_sXOf;
                    uVar31 = m_sy;
                    iVar6 = m_sXOf + 29;
                    local_40 = (shared_ptr<jstring::PixfontGeneric>*)(unsigned long)m_sy;
                    uVar18 = *m_titleBut;
                    iVar26 = uVar31 + 120;
                    (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6, iVar26);
                    new (&m_steamLinkYesBtn) dash3d::GridRect(iVar6, iVar26, 147, 41);
                    pPVar29 = local_38;
                    uVar31 = (int)local_40 + 145;
                    local_40 = (shared_ptr<jstring::PixfontGeneric>*)(unsigned long)uVar31;
                    jstring::PixfontGeneric::CentreString(*local_38, 23788336, iVar5 + 102, uVar31, 16777215, nullptr);
                    uVar18 = *m_titleBut;
                    (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 191, iVar26);
                    new (&m_steamLinkNoBtn) dash3d::GridRect(iVar5 + 191, iVar26, 147, 41);
                    iVar5 = iVar5 + 264;
                    iVar6 = 23802352;
                    iVar26 = (int)local_40;
                    pCVar10 = local_48;
                    goto LAB_1000d5daf;
                case 32:
                    goto LAB_1000d5c74;
                case 33:
                    jstring::PixfontGeneric::CentreString(*local_38, 16296752, m_sXOf + 180, m_sy + 30, 16776960,
                                                          nullptr);
                    pPVar15 = local_60;
                    jstring::PixfontGeneric::CentreString(*local_60, 16296784, m_sXOf + 180, uVar31 + 50, 16776960,
                                                          nullptr);
                    jstring::PixfontGeneric::CentreString(*pPVar15, 16296816, m_sXOf + 180, uVar31 + 70, 16776960,
                                                          nullptr);
                    iVar6 = m_sXOf;
                    uVar31 = m_sy;
                    iVar5 = m_sXOf + 180;
                    uVar18 = *m_titleBut;
                    (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6 + 107, uVar31 + 85);
                    jstring::PixfontGeneric::CentreString(*pPVar29, 23805584, iVar5, uVar31 + 110, 16777215, nullptr);
                    iVar5 = m_sXOf;
                    uVar31 = m_sy;
                    uVar18 = *m_titleBut;
                    (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 107, uVar31 + 135);
                    iVar6 = 23802736;
                    goto LAB_1000d369c;
                }
                goto LAB_1000d42c3;
            }
            jstring::PixfontGeneric::CentreString(*local_38, 16296752, m_sXOfCentre, m_sy + 30, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296784, m_sXOfCentre, uVar31 + 45, 16776960, nullptr);
            iVar26 = uVar31 + 60;
            iVar6 = 16296816;
            iVar9 = 16776960;
            iVar5 = m_sXOfCentre;
            goto LAB_1000d5db5;
        case 16:
        case 19:
            jstring::PixfontGeneric::CentreString(*local_38, 16296752, m_sXOfCentre, m_sy + 30, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296784, m_sXOfCentre, uVar31 + 45, 16776960, nullptr);
            jstring::PixfontGeneric::CentreString(*pPVar15, 16296816, m_sXOfCentre, uVar31 + 60, 16776960, nullptr);
            if (m_loginscreen == 16) {
                pbVar28 = (eastl::string*)&constants::text::apply;
            } else {
                pbVar28 = (eastl::string*)&constants::text::retry;
            }
            local_a0 = eastl::string(*pbVar28);
            iVar5 = m_sXOf;
            iVar6 = m_sy + 100;
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5 + 27, iVar6);
            local_38->DrawStringMultiline(local_a0, iVar5 + 27, iVar6, 144, 40, 16777215, 0, 1, 1, 0, pix2D);
            iVar5 = m_sXOf + 187;
            uVar18 = *m_titleBut;
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar5, iVar6);
            local_38->DrawStringMultiline(*((eastl::string*)&constants::text::later), iVar5, iVar6, 144, 40, 16777215,
                                          0, 1, 1, 0, pix2D);
        }
        pixfontGeneric3 = &local_a0;
        pixfontGeneric3.~basic_string();
    switchD_1000d47e4_caseD_10:
        if (m_initialOpenAnimFinishTime <= (long)local_a8) {
            pTVar21 = (TitleFlames*)pixfontGeneric3.operator->();
            pTVar21->RenderFlames(m_xOf - 22, pCVar10->field_8488, pix2D);
            pTVar21 = (TitleFlames*)(*pTVar21).operator->();
            pTVar21->RenderFlames(m_xOf + 659, pCVar10->field_8488, pix2D);
        }
        lVar12 = m_titleBack.operator->();
        auto local_a0 = pCVar10->GetUISafeArea();
        local_80[0]._0_4_ = local_a0.GetLevel();
        auto puVar22 = std::min<int>(*((lVar12 + 28)), local_80);
        uVar31 = *puVar22;
        uint8_t* this_03 = &pCVar10->field_8376;
        pDVar23 = (DeviceOptions*)(*this_03).operator->();
        uint8_t bVar4 = pDVar23->GetMuteTitleScreen();
        void* arg2 = &m_titleMute[(unsigned long)bVar4];
        local_40 = (shared_ptr<jstring::PixfontGeneric>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(uVar31 - 55));
        local_a8 = (unsigned long)uVar31;
        (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, arg2, m_xOf + 710);
        cVar3 = m_volumeOptionsBobbleSlider.empty();
        if (!cVar3) {
            pDVar23 = (DeviceOptions*)(*this_03).operator->();
            cVar3 = pDVar23->GetMuteTitleScreen();
            pPVar29 = nullptr;
            if (!cVar3) {
                pDVar23 = (DeviceOptions*)(*this_03).operator->();
                iVar5 = pDVar23->GetTitleVolume();
                pPVar29 = (PixfontGeneric*)(unsigned long)(unsigned int)(iVar5 / 25);
            }
            iVar6 = (int)local_a8 - 82;
            local_58 = pPVar29;
            iVar5 = m_volumeOptionsBobbleSlider.end();
            local_50 = (PixfontGeneric*)pix2D;
            if (1 < iVar5) {
                uVar27 = 1;
                iVar5 = 616;
                do {
                    iVar26 = m_xOf + iVar5;
                    uVar18 = m_volumeOptionsBobbleSlider[uVar27];
                    (**(void (**)(...))(*(long*)local_50 + 184))(local_50, uVar18, iVar26, iVar6);
                    uVar27 = uVar27 + 1;
                    iVar26 = m_volumeOptionsBobbleSlider.end();
                    iVar5 = iVar5 + 26;
                } while ((long)uVar27 < (long)iVar26);
            }
            arg2 = &m_volumeOptionsBobbleSlider[0];
            pix2D = (Pix2D*)local_50;
            (**(void (**)(...))(*(long*)local_50 + 184))(local_50, arg2, (int)local_58 * 26 + m_xOf + 616, iVar6);
            pCVar10 = local_48;
        }
        if ((5 < (int)pCVar10->field_8448) && (pCVar10->field_8432 == (Language*)Language::EN)) {
            bVar2 = &m_slButton != arg2;
            iVar5 = m_xOf;
            if (bVar2) {
                iVar6 = m_xOf + 20;
                uVar18 = *m_slButton;
                (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, uVar18, iVar6, (unsigned long)local_40 & 4294967295);
                local_80 + (*((value_type*)&constants::text::world));
                pCVar10 = Client::Instance();
                iVar6 = pCVar10->GetWorldId();
                local_c8 = eastl::to_string(iVar6);
                local_a0 + local_80;
                pPVar29 = local_60;
                jstring::PixfontGeneric::CentreString(*local_38, (int)&local_a0, iVar5 + 70, (int)local_a8 - 40,
                                                      16777215, nullptr);
                cVar3 = &local_80->HasWorldListDownloadStarted();
                if (!cVar3) {
                    pCVar10 = Client::Instance();
                    if (pCVar10->field_8425 == false) {
                        iVar26 = 23804752;
                    } else {
                        iVar26 = 23805072;
                    }
                    iVar6 = (int)local_a8;
                } else {
                    iVar6 = (int)local_a8;
                    iVar26 = 23804720;
                }
                jstring::PixfontGeneric::CentreString(*pPVar29, iVar26, iVar5 + 70, iVar6 - 26, 16777215, nullptr);
            } else {
                pJVar11 = pCVar10->GetSprites();
                local_a0 = graphics::pixloader::Makepix8(*pJVar11, "sl_button", "");
                m_slButton = local_a0;
                iVar6 = (int)local_a8;
            }
            iVar26 = m_sXOfCentre;
            local_38 = (PixfontGeneric*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(iVar6 - 82));
            iVar5 = m_sXOfCentre - 270;
            lVar12 = GetRadioButton((bool)m_defaultWorldCheckboxTicked, (bool)m_defaultWorldCheckboxHighlighted);
            (**(void (**)(...))(*(long*)pix2D + 184))(pix2D, lVar12, iVar5, (unsigned long)local_38 & 4294967295);
            local_50 = (PixfontGeneric*)pix2D;
            jstring::PixfontGeneric::DrawString(*local_60, 23804784, iVar26 + *(int*)(lVar12 + 48) - 398, iVar6 - 69,
                                                16776960, nullptr);
            iVar5 = m_sXOfCentre;
            if (local_48->field_8425 == false) {
                iVar26 = m_sXOfCentre - 270;
                lVar12 =
                    GetRadioButton((bool)m_toggleFullscreenCheckboxTicked, (bool)m_toggleFullscreenCheckboxHighlighted);
                (**(void (**)(...))(*(long*)local_50 + 184))(local_50, lVar12, iVar26, iVar6 - 107);
                jstring::PixfontGeneric::DrawString(*local_60, 23802448, iVar5 + *(int*)(lVar12 + 48) - 347,
                                                    (int)local_a8 - 95, 16776960, nullptr);
            }
            local_38 = (PixfontGeneric*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)m_sXOfCentre);
            local_c8[0] = (ReturnValue)std::chrono::system_clock::now();
            local_110[0] = std::chrono::system_clock::to_time_t(&local_c8);
            iVar5 = _gmtimelocal_110.tm_year;
            local_a0 = eastl::string();
            pcVar25 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar27 = local_a8;
            local_a0.sprintf(pcVar25, (unsigned long)(iVar5 + 1900));
            pPVar29 = local_60;
            jstring::PixfontGeneric::CentreString(*local_60, (int)&local_a0, (int)local_38._0_4_, (int)uVar27 - 38,
                                                  16777215, nullptr);
            iVar5 = (int)uVar27 - 26;
            pCVar10 = Client::Instance();
            if (pCVar10->field_8425 == false) {
                jstring::PixfontGeneric::CentreString(*pPVar29, 23805040, (int)local_38._0_4_, iVar5, 16777215,
                                                      nullptr);
                uVar7 = pPVar29->StringWid(*((eastl::string*)&constants::text::gameSubjectToDesktop));
                uVar27 = ((eastl::string*)&constants::text::gameSubjectToDesktop)
                             ->find((eastl::string*)&constants::text::termsAndConditions, 0);
                local_80 = ((eastl::string*)&constants::text::gameSubjectToDesktop)->substr(0, uVar27);
                iVar26 = pPVar29->StringWid(local_80);
                uVar27 = ((eastl::string*)&constants::text::gameSubjectToDesktop)
                             ->find((eastl::string*)&constants::text::privacyPolicy, 0);
                local_80 = ((eastl::string*)&constants::text::gameSubjectToDesktop)->substr(0, uVar27);
                local_48 = (Client*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar7);
                iVar6 = pPVar29->StringWid(local_80);
                iVar9 = pPVar29->StringWid(*((eastl::string*)&constants::text::termsAndConditions));
                iVar30 = (int)local_38._0_4_ - (int)local_48 / 2;
                new (&m_termsAndConditionsLinkDimensions) dash3d::GridRect(iVar26 + iVar30, iVar5, iVar9, 11);
                iVar26 = pPVar29->StringWid(*((eastl::string*)&constants::text::privacyPolicy));
                iVar6 = iVar6 + iVar30;
                pGVar14 = (GridRect*)&m_privacyPolicyLinkDimensions;
            } else {
                jstring::PixfontGeneric::CentreString(*pPVar29, 23805008, (int)local_38._0_4_, iVar5, 16777215,
                                                      nullptr);
                iVar26 = pPVar29->StringWid(*((eastl::string*)&constants::text::gameSubjectToMobile));
                uVar27 = ((eastl::string*)&constants::text::gameSubjectToMobile)
                             ->find((eastl::string*)&constants::text::termsAndConditions, 0);
                local_80 = ((eastl::string*)&constants::text::gameSubjectToMobile)->substr(0, uVar27);
                uVar7 = pPVar29->StringWid(local_80);
                uVar27 = ((eastl::string*)&constants::text::gameSubjectToMobile)
                             ->find((eastl::string*)&constants::text::privacyPolicy, 0);
                local_80 = ((eastl::string*)&constants::text::gameSubjectToMobile)->substr(0, uVar27);
                uVar8 = pPVar29->StringWid(local_80);
                local_48 = (Client*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar8);
                uVar27 = ((eastl::string*)&constants::text::gameSubjectToMobile)
                             ->find((eastl::string*)&constants::text::softwareLicenceMobile, 0);
                local_80 = ((eastl::string*)&constants::text::gameSubjectToMobile)->substr(0, uVar27);
                pPVar29 = local_60;
                local_50 = (PixfontGeneric*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)uVar7);
                iVar6 = local_60->StringWid(local_80);
                iVar9 = pPVar29->StringWid(*((eastl::string*)&constants::text::termsAndConditions));
                iVar30 = (int)local_38._0_4_ - iVar26 / 2;
                new (&m_termsAndConditionsLinkDimensions) dash3d::GridRect((int)local_50 + iVar30, iVar5, iVar9, 11);
                iVar26 = pPVar29->StringWid(*((eastl::string*)&constants::text::privacyPolicy));
                new (&m_privacyPolicyLinkDimensions) dash3d::GridRect((int)local_48 + iVar30, iVar5, iVar26, 11);
                iVar26 = pPVar29->StringWid(*((eastl::string*)&constants::text::softwareLicenceMobile));
                iVar6 = iVar6 + iVar30;
                pGVar14 = (GridRect*)&m_softwareLicenceLinkDimensionsMobile;
            }
            new (pGVar14) dash3d::GridRect(iVar6, iVar5, iVar26, 11);
        }
    }

    // 0x1000d7890
    void TitleScreen::Close() {
        unique_ptr<TitleFlames>* this_01;
        eastl::string local_40;

        if (m_open != '\0') {
            m_titleBox.reset(nullptr);
            m_titleBut.reset(nullptr);
            m_titleButLarge.reset(nullptr);
            m_textPlayNow.reset(nullptr);
            m_titleBack.reset();
            m_titleBack2.reset();
            m_logo.reset(nullptr);
            m_titleMute.clear();
            m_volumeOptionsBobbleSlider.clear();
            m_optionsRadioButtonNone.reset(nullptr);
            m_optionsRadioButtonYes.reset(nullptr);
            m_slBack.clear();
            m_slFlags.clear();
            m_slArrows.clear();
            m_slStars.clear();
            this_01 = (unique_ptr<TitleFlames>*)&m_slButton;
            m_slButton.reset(nullptr);
            ((TitleFlames*)(*this_01).operator->())->Close();
            m_loading.reset(nullptr);
            if (m_backgroundMode == '\0') {
                midi2::MidiManager::Stop(0, 100);
            }
            local_40 = eastl::string("");
            SetDisplayName(&local_40);
            m_postAction = 4294967295;
            m_worldWarningAccepted = 0;
            m_open = '\0';
            m_backgroundMode = '\0';
            m_inputHandler.ResetState();
            Client::Instance()->UnregisterInputHandler('\x02');
        }
    }

    // 0x1000d8ef0
    void TitleScreen::Open(jagex3::Js5& js51, jagex3::Js5& js52, bool arg3, int arg4) {
        void result;
        bool bVar1;
        PacketJ<Array<unsigned char> _>* packetJ;
        TitleFlames* this_05;
        DeviceOptions* pDVar5;
        unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence> _>* this_07;
        uint64_t in_register_00000011;
        unique_ptr<OsrsLoadingScript, std::default_delete<OsrsLoadingScript> _>* osrsLoadingScript;
        ReturnValue result;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_98;
        ReturnValue local_88;
        int local_70;
        ReturnValue local_68;
        shared_ptr<dash3d::Decor> local_48;

        uint32_t local_6c = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3);
        if (arg4 == 4) {
            SetupAuthenticatorInputForm(&local_68);
            ((InputForm*)local_68.operator->())->ShowKeyboard();
            m_loginscreen = 4;
        }
        if ((m_open != '\0') && (m_backgroundMode == '\0')) {
            bVar1 = m_titleBack != nullptr;
            if (bVar1)
                goto LAB_1000d96cd;
        }
        auto this_00 = Client::Instance();
        auto plVar3 = OSRenderCore_AudioThread::Instance();
        long lVar4 = ((Layout*)((long)plVar3 + *(long*)(*plVar3 - 24)))->HeapBeginPtr();
        if (!(((lVar4 + 19677552))->IsEmpty())) {
            this_00->ClearSideBars();
        }
        m_backgroundMode = '\0';
        m_inputHandler.ResetState();
        this_00->UnregisterInputHandler('\x02');
        this_00->RegisterInputHandler(&m_inputHandler, '\x02');
        shared_ptr<ApplicationContext>* this_01 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this_00)(this_00);
        plVar3 = (long*)(*this_01).operator->();
        (**(void (**)(...))(*plVar3 + 120))(plVar3, 0);
        osrsLoadingScript = (unique_ptr<OsrsLoadingScript, std::default_delete<OsrsLoadingScript> _>*)894;
        if (this_00->field_8425 == false) {
            osrsLoadingScript = (unique_ptr<OsrsLoadingScript, std::default_delete<OsrsLoadingScript> _>*)765;
        }
        this_00->SetMinimumCanvasSize((int)osrsLoadingScript, 503);
        m_inputHandler.field_8 = this_00->field_8425 ^ 1;
        ((NXTPixToolkit*)this_00->GetMemoryCache())->ZoomUI((float)this_00->GetDefaultUIZoom());
        auto this_03 = Client::Instance();
        this_03->OnWindowModeChanged();
        if (((int)this_00->field_8448 < 5) || (this_00->field_8448 == 1000)) {
            bVar1 = this_03 == osrsLoadingScript;
            if (bVar1) {
                &result = &local_68;
                result = std::make_unique<OsrsLoadingScript>();
                result.operator=(osrsLoadingScript);
                result.~unique_ptr();
                this_03 = (Client*)(result).operator->();
                (**(void (**)(...))(*(long*)this_03 + 16))();
                m_loadingFlamesTriggerSent = '\0';
                m_errorTriggerSent = '\0';
            }
            if (((this_00->field_8448 != 1000) && (4 < (int)this_00->field_8448)) &&
                (m_loadingFlamesTriggerSent == '\0')) {
                m_loadingFlamesTriggerSent = '\x01';
                this_03 = (Client*)(*this_03).operator->();
                (**(void (**)(...))(*(long*)this_03 + 56))(this_03, "BgLoaded");
            }
            if ((this_00->field_8448 == 1000) && (m_errorTriggerSent == '\0')) {
                m_errorTriggerSent = '\x01';
                plVar3 = (long*)(*this_03).operator->();
                (**(void (**)(...))(*plVar3 + 56))(plVar3, "Error");
            }
        } else {
            m_loading.reset(nullptr);
            bVar1 = (uint8_t)local_6c;
            if (arg4 == 0) {
                MoveToInitialScreen(bVar1, false);
            } else {
                m_loginscreen = arg4;
            }
            local_98 = shared_ptr();
            js51.GetFile(local_98, "titlewide.png", "", nullptr);
            packetJ = (PacketJ<Array<unsigned char> _>*)*local_98;
            local_68 = javapal::Pix32Tools::createPix32FromPNGData(*packetJ);
            m_titleBack = local_68;
            local_68 = ((Pix32*)m_titleBack.operator->())->CopyHFlip();
            m_titleBack2 = local_68;
            SetLogo(js52, this_00->field_52992);
            local_68 = graphics::pixloader::Makepix8(js52, "titlebox", "");
            m_titleBox = local_68;
            lVar4 = m_titleBox.operator->();
            m_titleBoxHeight = *(uint32_t*)(lVar4 + 52);
            local_68 = graphics::pixloader::Makepix8(js52, "titlebutton", "");
            m_titleBut = local_68;
            local_68 = graphics::pixloader::Makepix8(js52, "titlebutton_large", "");
            m_titleButLarge = local_68;
            local_68 = graphics::pixloader::Makepix8(js52, "play_now_text", "");
            m_textPlayNow = local_68;
            local_68 = graphics::pixloader::Makepix8(js52, "titlebutton_wide42,1", "");
            m_titleButWide = local_68;
            local_68 = graphics::pixloader::Makepix8Array(js52, "login_icons", "");
            m_loginIcon = local_68;
            local_68 = graphics::pixloader::Makepix8Array(js52, "title_mute", "");
            m_titleMute = local_68;
            local_68 = graphics::pixloader::Makepix8(js52, "options_radio_buttons,0", "");
            m_optionsRadioButtonNone = local_68;
            local_68 = graphics::pixloader::Makepix8(js52, "options_radio_buttons,4", "");
            m_optionsRadioButtonNoneHighlight = local_68;
            local_68 = graphics::pixloader::Makepix8(js52, "options_radio_buttons,2", "");
            m_optionsRadioButtonYes = local_68;
            local_68 = graphics::pixloader::Makepix8(js52, "options_radio_buttons,6", "");
            m_optionsRadioButtonYesHighlight = local_68;
            lVar4 = m_optionsRadioButtonNone.operator->();
            m_loginCheckboxWidth = *(uint32_t*)(lVar4 + 48);
            lVar4 = m_optionsRadioButtonNone.operator->();
            m_loginCheckboxHeight = *(uint32_t*)(lVar4 + 52);
            lVar4 = m_optionsRadioButtonNone.operator->();
            m_defaultWorldCheckboxWidth = *(uint32_t*)(lVar4 + 48);
            lVar4 = m_optionsRadioButtonNone.operator->();
            m_defaultWorldCheckboxHeight = *(uint32_t*)(lVar4 + 52);
            SetDefaultWorldCheckboxState();
            SetDefaultToggleFullscreenCheckboxState();
            this_05 = (TitleFlames*)operator new(529456);
            local_68 = graphics::pixloader::Makepix8Array(js52, "runes", "");
            new (this_05) TitleFlames(local_68);
            m_titleFlames.reset(this_05);
            if (bVar1 != false) {
                m_loginUser.assign("");
                m_loginPass.assign("");
                m_dobCharacters.set_max_size(8, 3);
                m_currentDobCharacter = 0;
            }
            m_loginTotpPin = 0;
            m_loginTotpPinString.assign("");
            m_loginTotpRememberUser = 1;
            m_switchScreen = 0;
            m_targetSY = 171;
            m_sy = 171;
            m_preciseSY = 1126891520;
            local_70 = 0;
            pDVar5 = (DeviceOptions*)this_00->field_8376.operator->();
            if (!(pDVar5->GetMuteTitleScreen())) {
                pDVar5 = (DeviceOptions*)this_00->field_8376.operator->();
                local_70 = pDVar5->GetTitleVolume();
            }
            local_68[0] = (ReturnValue)this_00->GetMidi();
            local_48[0] = (shared_ptr<dash3d::Decor>)1;
            make_shared<midi2::MidiRequest, jagex3::Js5*, char const(&)[11], char const(&)[1], int&, bool>(
                &local_88, (Js5**)&local_68, "scape main", "", &local_70, &local_48);
            local_48 = shared_ptr(&local_88);
            local_68 = eastl::vector<shared_ptr<midi2::MidiRequest>>(&local_48, DAT_00000001);
            midi2::MidiManager::Play(local_68, 0, 0, 0, 100, false);
            midi2::MidiManager::ResetPreviousSongs();
            m_open = '\x01';
            ComputeSafeOffset(&m_xOf, this_00);
            m_sXOf = m_xOf + 202;
            m_sXOfCentre = m_xOf + 382;
            this_00->field_8400.operator->();
            if (DiscordMain::GetIsDiscordInitialized()) {
                this_07 = ((DiscordMain*)this_00->field_8400.operator->())->GetDiscordRichPresenceModule();
                (*this_07).operator->();
                DiscordRichPresence::UnsetDiscordActivityDetails();
            }
        }
    LAB_1000d96cd:
    }

    // 0x1000d97b0
    void TitleScreen::OpenInBackgroundMode() {
        (logger::default_logger())
            ->Log(false, 5,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/titlescreen.cpp",
                  269, "Starting a logout transfer using the TitleScreen in background mode");
        m_backgroundMode = 1;
        m_open = 1;
        MoveToInitialScreen(false, false);
    }

    // 0x1000da0f0
    int TitleScreen::Ready(jagex3::Js5& js51, jagex3::Js5& js52) {
        uint8_t bVar2;
        char* pcVar5;

        uint8_t* puVar1 = PTR_m_spriteNamesInBinary_100ee6aa0;
        long lVar3 = PTR_m_spriteNamesInBinary_100ee6aa0->HeapBeginPtr();
        long lVar4 = puVar1->end();
        puVar1 = PTR_m_spriteNamesInBinary_100ee6aa0;
        int iVar6 = 0;
        if (lVar3 != lVar4) {
            do {
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                bVar2 = js51.RequestDownload(pcVar5, "");
                iVar6 = iVar6 + (unsigned int)bVar2;
                lVar3 = lVar3 + 32;
                lVar4 = puVar1->end();
            } while (lVar3 != lVar4);
        }
        puVar1 = PTR_m_spriteNames_100ee6a98;
        lVar3 = PTR_m_spriteNames_100ee6a98->HeapBeginPtr();
        lVar4 = puVar1->end();
        puVar1 = PTR_m_spriteNames_100ee6a98;
        if (lVar3 != lVar4) {
            do {
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                bVar2 = js52.RequestDownload(pcVar5, "");
                iVar6 = iVar6 + (unsigned int)bVar2;
                lVar3 = lVar3 + 32;
                lVar4 = puVar1->end();
            } while (lVar3 != lVar4);
        }
        puVar1 = PTR_m_spriteNamesOptional_100ee6aa8;
        lVar3 = PTR_m_spriteNamesOptional_100ee6aa8->HeapBeginPtr();
        lVar4 = puVar1->end();
        puVar1 = PTR_m_spriteNamesOptional_100ee6aa8;
        if (lVar3 != lVar4) {
            do {
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                bVar2 = js52.RequestDownload(pcVar5, "");
                iVar6 = iVar6 + (unsigned int)bVar2;
                lVar3 = lVar3 + 32;
                lVar4 = puVar1->end();
            } while (lVar3 != lVar4);
        }
        return iVar6;
    }

    // 0x1000da230
    int TitleScreen::ReadyMax(jagex3::Js5& js5) {
        int iVar2 = PTR_m_spriteNamesInBinary_100ee6aa0->size();
        int iVar3 = PTR_m_spriteNames_100ee6a98->size();
        uint8_t* puVar1 = PTR_m_spriteNamesOptional_100ee6aa8;
        iVar3 = iVar3 + iVar2;
        long lVar4 = PTR_m_spriteNamesOptional_100ee6aa8->HeapBeginPtr();
        long lVar5 = puVar1->end();
        puVar1 = PTR_m_spriteNamesOptional_100ee6aa8;
        if (lVar4 != lVar5) {
            do {
                iVar2 = js5.GetGroupId((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
                iVar3 = iVar3 + (unsigned int)(iVar2 != -1);
                lVar4 = lVar4 + 32;
                lVar5 = puVar1->end();
            } while (lVar4 != lVar5);
        }
        return iVar3;
    }

    // 0x1000db050
    void TitleScreen::SwitchToWorld(const GameWorld& gameWorld) {
        int iVar1;
        uint8_t uVar3;
        shared_ptr<ApplicationContext>* this_00;
        long* plVar5;

        auto client = Client::Instance();
        bool bVar2 = (bool)gameWorld.IsMembers();
        if (client->field_8424 != bVar2) {
            client->field_8424 = bVar2;
            bVar2 = (bool)gameWorld.IsMembers();
            configdecoder::ObjType::SwitchMembers(bVar2);
            this_00 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)client)(client);
            plVar5 = (long*)(*this_00).operator->();
            uVar3 = gameWorld.IsMembers();
            (**(void (**)(...))(*plVar5 + 128))(plVar5, &ApplicationContext::MEMBERS_PREFERENCE_KEY, uVar3);
        }
        iVar1._0_1_ = gameWorld.field_4;
        iVar1._1_1_ = gameWorld.field_5;
        iVar1._2_1_ = gameWorld.field_6;
        iVar1._3_1_ = gameWorld.field_7;
        if (iVar1 != client->field_52992) {
            SetLogo((Js5*)client->m_pSprites, iVar1);
        }
        client->field_54224 = &gameWorld.field_16;
        client->SetWorldId(*(int*)gameWorld);
        client->field_52992 = *(int*)&gameWorld.field_4;
        client->field_8456 = &gameWorld.field_88;
        iVar1 = *(int*)(ModeWhere::LIVE + 8);
        unsigned int uVar6 = 43594;
        if (client->field_54168 != iVar1) {
            uVar6 = *(int*)gameWorld + 40000;
        }
        client->field_54256 = uVar6;
        unsigned int uVar4 = 443;
        if (client->field_54168 != iVar1) {
            uVar4 = *(int*)gameWorld + 50000;
        }
        client->field_54260 = uVar4;
        client->field_54264 = uVar6;
        m_worldWarningAccepted = 0;
        SetDefaultWorldCheckboxState();
    }

    // 0x1000db950
    void TitleScreen::LoginMes(const eastl::string& str1, const eastl::string& str2, const eastl::string& str3) {
        m_loginMes1 = str1;
        m_loginMes2 = str2;
        m_loginMes3 = str3;
    }

    // 0x1000db990
    void TitleScreen::SwitchToLoginSupport(int arg1) {
        m_loginscreen = 14;
        m_currentSupportReason = arg1;
    }

    // 0x1000dba20
    void TitleScreen::MoveToInitialScreen(bool arg1, bool arg2) {
        shared_ptr<ApplicationContext>* shared_ptr;
        Array<eastl::string>* strs;
        uint64_t in_register_00000039;
        Array<eastl::string> local_30;

        m_loginscreen = DetermineInitialScreen(arg2);
        m_loginMes1.assign("");
        m_loginMes2.assign("");
        m_loginMes3.assign("");
        auto pCVar1 = Client::Instance();
        shared_ptr = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        ((ApplicationContext*)(*shared_ptr).operator->())->CloseActiveInputForm();
        if ((int)(((uint64_t)in_register_00000039 << 8) | (uint8_t)arg1) != 0) {
            m_loginUser.assign("");
            m_loginPass.assign("");
            m_loginTotpPin = 0;
            m_loginTotpPinString.assign("");
            local_30 = Array<eastl::string>(8);
            strs = (Array<eastl::string>*)m_dobCharacters = local_30;
            m_dobCharacters = *strs;
            m_currentDobCharacter = 0;
        }
    }

    // 0x1001113e0
    void TitleScreen::SwitchToPendingTransactions() {
        char* pcVar2;
        uint64_t uVar3;

        Client::Instance()->SetMainState(10);
        m_loginscreen = 16;
        eastl::string local_860("");
        if (m_displayName.empty() == '\0') {
            local_840 = eastl::fixed_string<char, 2048>();
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_840.sprintf(pcVar2, uVar3);
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::assign(&local_860, pcVar2);
        }
        local_860 = ((eastl::string*)&constants::text::pending_transactions3_default);
        LoginMes((eastl::string*)&constants::text::pending_transactions1,
                 (eastl::string*)&constants::text::pending_transactions2, &local_860);
    }

    // 0x1001123d0
    void TitleScreen::SetLoginCredentials(int arg1, eastl::string str) {
        auto pCVar1 = Client::Instance();
        shared_ptr<ApplicationContext>* psVar2 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        long* plVar3 = (long*)(*psVar2).operator->();
        (**(void (**)(...))(*plVar3 + 144))(plVar3, &ApplicationContext::AUTHENTICATOR_HASH, arg1);
        SetDisplayName(str);
        psVar2 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        plVar3 = (long*)(*psVar2).operator->();
        (**(void (**)(...))(*plVar3 + 136))(plVar3, &ApplicationContext::DISPLAYNAME_KEY, &m_displayName);
        OldscapeClientError::SetUserName(m_displayName);
    }

    // 0x100112bc0
    void TitleScreen::ShowServerRebootedScreen() {
        m_loginscreen = 24;
        LoginMes((eastl::string*)&constants::text::server_rebooted1, (eastl::string*)&constants::text::server_rebooted2,
                 (eastl::string*)&constants::text::server_rebooted3);
    }

    // 0x100112bf0
    void TitleScreen::ShowServerLogoffScreen() {
        m_loginscreen = 24;
        LoginMes((eastl::string*)&constants::text::server_logoff1, (eastl::string*)&constants::text::server_logoff2,
                 (eastl::string*)&constants::text::server_logoff3);
    }

    // 0x10011f240
    TitleScreen::TitleScreen() {}

    // 0x10011f330
    auto TitleScreen::SetupAuthenticatorInputForm() {
        shared_ptr<ApplicationContext>* shared_ptr;

        auto pCVar1 = Client::Instance();
        shared_ptr = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        long* plVar2 = (long*)(*shared_ptr).operator->();
        shared_ptr<dash3d::GroundDecor>* groundDecor =
            (shared_ptr<dash3d::GroundDecor>*)(**(void (**)(...))(*plVar2 + 80))(plVar2, 1);
        auto result(groundDecor);
        ((result).operator->())->SetText(&m_loginTotpPinString);
        return result;
    }

    // 0x10011f690
    void TitleScreen::SetLogo(jagex3::Js5& js5, int arg2) {
        char* str1;

        if ((arg2 & 536870912U) == 0) {
            if ((arg2 & 1073741824U) == 0) {
                if ((arg2 & 256U) == 0) {
                    str1 = "logo_osrs";
                } else {
                    str1 = "logo_speedrunning";
                }
            } else {
                str1 = "logo_seasonal_mode";
            }
        } else {
            str1 = "logo_deadman_mode";
        }
        auto local_18 = graphics::pixloader::Makepix8(js5, str1, "");
        m_logo = local_18;
    }

    // 0x10011f760
    void TitleScreen::SetDefaultWorldCheckboxState() {
        auto client = Client::Instance();
        int iVar1 = ((DeviceOptions*)client->field_8376.operator->())->GetDefaultWorldId();
        int iVar2 = client->GetWorldId();
        m_defaultWorldCheckboxTicked = iVar1 == iVar2;
    }

    // 0x10011f7a0
    void TitleScreen::SetDefaultToggleFullscreenCheckboxState() {
        auto pCVar1 = Client::Instance();
        if (pCVar1->field_8425 == false) {
            m_toggleFullscreenCheckboxTicked = ((DeviceOptions*)pCVar1->field_8376.operator->())->GetFullscreen();
            return;
        }
    }

    // 0x10011f9a0
    void TitleScreen::SelectUsernameField() {
        m_loginSelect = 0;
        SelectLoginFormField(0);
        ShowKeyboard(m_loginSelect);
    }

    // 0x10011f9d0
    void TitleScreen::SelectLoginFormField(int arg1) {
        shared_ptr<ApplicationContext>* shared_ptr;
        ReturnValue local_38;

        auto pCVar2 = Client::Instance();
        shared_ptr = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar2)(pCVar2);
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_00 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*shared_ptr).operator->();
        auto groundDecor = this_00->second();
        shared_ptr<dash3d::Decor> local_28(groundDecor);
        if (local_28 == nullptr) {
            SetupUserPassInputForm(&local_38);
            local_28 = local_38;
        }
        if (local_28 != nullptr) {
            ((InputForm*)local_28.operator->())->ShowKeyboard(arg1);
        }
    }

    // 0x10011fa90
    void TitleScreen::ShowKeyboard(int arg1) {
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_00;
        shared_ptr<input::InputForm>* this_01;

        auto pCVar2 = Client::Instance();
        shared_ptr<ApplicationContext>* psVar3 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar2)(pCVar2);
        if (((ApplicationContext*)(*psVar3).operator->())->HasInputForm() != '\0') {
            pCVar2 = Client::Instance();
            psVar3 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar2)(pCVar2);
            this_00 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar3).operator->();
            this_01 = (shared_ptr<input::InputForm>*)this_00->second();
            ((InputForm*)(*this_01).operator->())->ShowKeyboard(arg1);
        }
    }

    // 0x10011faf0
    void TitleScreen::SelectPasswordField() {
        m_loginSelect = 1;
        SelectLoginFormField(1);
        ShowKeyboard(m_loginSelect);
    }

    // 0x10011fb20
    unsigned long TitleScreen::IsValidUsernameChar(char16_t arg1) {
        char* pcVar2;
        unsigned long uVar3;
        unsigned long arg1_00;
        uint64_t in_register_0000003a;
        int iVar4;
        uint64_t unaff_R15;

        long lVar1 = m_charList.size();
        unsigned long uVar5 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)(lVar1 != 0));
        if (lVar1 != 0) {
            pcVar2 = (char*)m_charList.at(0);
            iVar4 = (int)(((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1);
            if (iVar4 != *pcVar2) {
                arg1_00 = 1;
                do {
                    uVar3 = m_charList.size();
                    uVar5 = (((uint64_t)((int64_t)(uVar5 >> 8)) << 8) | (uint8_t)(arg1_00 < uVar3));
                    if (arg1_00 >= uVar3)
                        break;
                    pcVar2 = (char*)m_charList.at(arg1_00);
                    arg1_00 = arg1_00 + 1;
                } while (iVar4 != *pcVar2);
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x10011fd30
    void TitleScreen::WorldSwitchLoop(javapal::GameShell& gameShell, graphics::Pix2D& pix2D) {
        unsigned int uVar1;
        unsigned int uVar2;
        Pix2D pix2D;
        bool bVar7;
        uint8_t bVar9;
        int iVar10;
        int iVar11;
        unique_ptr<GameWorld>* this_00;
        GameWorld* this_01;
        Client* pCVar12;
        uint8_t local_50[16];

        Pix2D* pPVar13 = pix2D;
        unsigned int local_34 = m_inputHandler.field_16.GetX();
        int local_38 = m_inputHandler.field_20.GetX();
        bool cVar5 = m_inputHandler.field_30;
        bool cVar4 = m_inputHandler.field_29;
        bool cVar3 = m_inputHandler.field_27;
        bool cVar8 = m_inputHandler.field_24;
        m_inputHandler.ResetInteractionState();
        int iVar6 = local_38;
        int iVar14 = m_slStartColumn;
        if (cVar3) {
        LAB_10011fd92:
            WorldSwitchExit((TitleScreen*)pix2D, pPVar13);
            return;
        }
        Pix2D* local_40 = pix2D;
        if (((cVar4) && (0 < m_slStartColumn)) && (bVar7 = &m_slLeftArrow != pPVar13, bVar7)) {
            m_slStartColumn = iVar14 - 1;
        }
        iVar14 = m_slStartColumn;
        if (((cVar5) && (m_slStartColumn < m_slMaxScroll)) && (bVar7 = &m_slRightArrow != pPVar13, bVar7)) {
            m_slStartColumn = iVar14 + 1;
        }
        iVar14 = m_slLastWorld;
        if (!cVar8) {
            return;
        }
        pPVar13 = (Pix2D*)(unsigned long)local_34;
        if ((((int)local_34 < m_xOf + 280) || (m_xOf + 294 < (int)local_34)) || ((iVar6 < 4 || (18 < iVar6)))) {
            if (((((int)local_34 < m_xOf + 295) || (m_xOf + 360 < (int)local_34)) || (iVar6 < 4)) || (18 < iVar6)) {
                if (((m_xOf + 390 <= (int)local_34) && ((int)local_34 <= m_xOf + 404)) &&
                    ((3 < iVar6 && (iVar6 < 19)))) {
                    iVar14 = 1;
                    goto LAB_10011ff13;
                }
                if ((((int)local_34 < m_xOf + 405) || (m_xOf + 470 < (int)local_34)) || ((iVar6 < 4 || (18 < iVar6)))) {
                    if ((((m_xOf + 500 <= (int)local_34) && ((int)local_34 <= m_xOf + 514)) && (3 < iVar6)) &&
                        (iVar6 < 19)) {
                        iVar14 = 2;
                        goto LAB_10011ff13;
                    }
                    if ((((int)local_34 < m_xOf + 515) || (m_xOf + 580 < (int)local_34)) ||
                        ((iVar6 < 4 || (18 < iVar6)))) {
                        if ((((m_xOf + 610 <= (int)local_34) && ((int)local_34 <= m_xOf + 624)) && (3 < iVar6)) &&
                            (iVar6 < 19)) {
                            iVar14 = 3;
                            goto LAB_10011ff13;
                        }
                        if (((((int)local_34 < m_xOf + 625) || (m_xOf + 690 < (int)local_34)) || (iVar6 < 4)) ||
                            (18 < iVar6)) {
                            if ((((int)local_34 < m_xOf + 708) || (iVar6 < 4)) ||
                                ((m_xOf + 758 < (int)local_34 || (20 < iVar6)))) {
                                if ((m_slLastWorld != -1) &&
                                    (iVar10 = WorldSwitchWorldUnderPointer(), iVar14 == iVar10)) {
                                    pPVar13 = (Pix2D*)(long)m_slLastWorld;
                                    this_00 = (unique_ptr<GameWorld>*)(*((
                                        Array<std::unique_ptr<GameWorld>>*)&GameWorld::m_list))[(unsigned long)pPVar13];
                                    this_01 = (GameWorld*)**this_00;
                                    cVar8 = this_01->IsBeta();
                                    if (cVar8) {
                                        pPVar13 = (Pix2D*)&Client::BETA_CACHE_DIR_SUFFIX;
                                        this_01->field_88 = ((eastl::string*)&Client::BETA_CACHE_DIR_SUFFIX);
                                    }
                                    pCVar12 = Client::Instance();
                                    pix2D = local_40;
                                    uVar1 = pCVar12->field_52992;
                                    uVar2._0_1_ = this_01->field_4;
                                    uVar2._1_1_ = this_01->field_5;
                                    uVar2._2_1_ = this_01->field_6;
                                    uVar2._3_1_ = this_01->field_7;
                                    if ((uVar2 == uVar1) ||
                                        (((bVar9 = this_01->IsBeta(), (uVar1 & 65536) == 0 || (bVar9 != 0)) &&
                                          (((uVar1 & 65536) == 0 & bVar9) != 1)))) {
                                        SwitchToWorld(this_01);
                                        WorldSwitchExit((TitleScreen*)pix2D, pPVar13);
                                        SetDefaultWorldCheckboxState();
                                        return;
                                    }
                                    SwitchToWorld(this_01);
                                    WorldSwitchExit((TitleScreen*)pix2D, pPVar13);
                                    pCVar12->ReloadConfigs();
                                    SetDefaultWorldCheckboxState();
                                    return;
                                }
                                if (m_worldSwitcherStructure.field_36 == '\0') {
                                    return;
                                }
                                pCVar12 = Client::Instance();
                                *local_50 = pCVar12->GetUISafeArea();
                                iVar10 = local_50->GetPos();
                                pCVar12 = Client::Instance();
                                *local_50 = pCVar12->GetUISafeArea();
                                iVar11 = local_50->GetLevel();
                                iVar14 = m_slStartColumn;
                                if ((((0 < m_slStartColumn) && (bVar7 = &m_slLeftArrow != pCVar12, bVar7)) &&
                                     ((-1 < (int)local_34 &&
                                       (((int)local_34 <=
                                             reinterpret_cast<const uint64_t*>(&m_worldSwitcherStructure)[3] + m_xOf +
                                                 reinterpret_cast<const uint64_t*>(&m_worldSwitcherStructure)[2] * -2 &&
                                         (iVar11 / 2 - 100 <= iVar6)))))) &&
                                    (iVar6 <= iVar11 / 2 + 100)) {
                                    m_slStartColumn = iVar14 - 1;
                                }
                                iVar14 = m_slStartColumn;
                                if (m_slMaxScroll <= m_slStartColumn) {
                                    return;
                                }
                                bVar7 = &m_slRightArrow != pCVar12;
                                if (!bVar7) {
                                    return;
                                }
                                if ((int)local_34 <
                                    (iVar10 -
                                     (m_xOf + reinterpret_cast<const uint64_t*>(&m_worldSwitcherStructure)[3])) +
                                        reinterpret_cast<const uint64_t*>(&m_worldSwitcherStructure)[2] * 2) {
                                    return;
                                }
                                if (iVar10 < (int)local_34) {
                                    return;
                                }
                                if (iVar6 < iVar11 / 2 - 100) {
                                    return;
                                }
                                if (iVar11 / 2 + 100 < iVar6) {
                                    return;
                                }
                                m_slStartColumn = iVar14 + 1;
                                return;
                            }
                            pix2D = local_40;
                            goto LAB_10011fd92;
                        }
                        iVar14 = 3;
                    } else {
                        iVar14 = 2;
                    }
                } else {
                    iVar14 = 1;
                }
            } else {
                iVar14 = 0;
            }
            GameWorld::ListReorder(iVar14, 1);
        } else {
            iVar14 = 0;
        LAB_10011ff13:
            GameWorld::ListReorder(iVar14, 0);
        }
    }

    // 0x1001201a0
    unsigned long TitleScreen::HandleAudioButtons(int arg1, int arg2) {
        DeviceOptions* deviceOptions;
        bool cVar5;
        int iVar6;
        int arg1_00;
        unsigned long arg1_01;
        uint8_t local_58[20];

        auto this_00 = Client::Instance();
        auto local_40 = this_00->field_8376.get();
        long lVar7 = m_titleBack.operator->();
        *local_58 = this_00->GetUISafeArea();
        int local_44 = local_58->GetLevel();
        auto piVar8 = std::min<int>(*((lVar7 + 28)), local_44);
        bool bVar3 = arg1 < m_xOf + 710;
        bool bVar1 = m_xOf + 745 < arg1;
        bool bVar4 = arg2 < *piVar8 - 55;
        bool bVar2 = *piVar8 - 20 < arg2;
        uint8_t local_31 = bVar2 || (bVar4 || (bVar1 || bVar3));
        if (bVar2 || (bVar4 || (bVar1 || bVar3))) {
            lVar7 = m_volumeSliderPositions.end();
            if (0 < (int)lVar7) {
                arg1_00 = 0;
                arg1_01 = 0;
                do {
                    cVar5 = ((Rect<int>*)m_volumeSliderPositions[arg1_01])->IsInside(arg1, arg2);
                    deviceOptions = local_40;
                    if (cVar5) {
                        if (arg1_01 == 0) {
                            local_40->ToggleMuteTitleScreen();
                        } else {
                            cVar5 = local_40->GetMuteTitleScreen();
                            if (cVar5) {
                                deviceOptions->ToggleMuteTitleScreen();
                            }
                            deviceOptions->SetTitleVolume(arg1_00);
                        }
                    }
                    arg1_01 = arg1_01 + 1;
                    iVar6 = m_volumeSliderPositions.end();
                    lVar7 = (long)iVar6;
                    arg1_00 = arg1_00 + 25;
                } while ((long)arg1_01 < lVar7);
            }
        } else {
            lVar7 = local_40->ToggleMuteTitleScreen();
        }
        return local_31 ^ 1;
    }

    // 0x100120310
    void TitleScreen::WorldSwitchEnter() {
        if (ListFetch() != '\0') {
            m_switchScreen = 1;
            m_slStartColumn = 0;
            m_slMaxScroll = 0;
            m_worldSwitcherStructure.field_36 = 0;
        }
    }

    // 0x100120350
    void TitleScreen::SaveDefaultWorld() {
        int iVar1;
        int iVar2;
        DeviceOptions* pDVar3;

        auto client = Client::Instance();
        if (m_defaultWorldCheckboxTicked == '\0') {
            pDVar3 = (DeviceOptions*)client->field_8376.operator->();
            iVar1 = pDVar3->GetDefaultWorldId();
            iVar2 = client->GetWorldId();
            if (iVar1 == iVar2) {
                pDVar3 = (DeviceOptions*)client->field_8376.operator->();
                iVar1 = -1;
                goto LAB_1001203cc;
            }
        }
        if (m_defaultWorldCheckboxTicked == '\0') {
            return;
        }
        pDVar3 = (DeviceOptions*)client->field_8376.operator->();
        iVar1 = client->GetWorldId();
    LAB_1001203cc:
        pDVar3->SetDefaultWorldId(iVar1);
    }

    // 0x100120440
    void TitleScreen::ThrobMessage(const eastl::string& str) {
        long lVar1 = core::SafeTime::CurrentTimeMillis();
        long lVar2 = -(lVar1 >> 63);
        lVar1 = lVar1 / 500 + (lVar1 >> 63);
        unsigned long uVar4 = lVar1 + lVar2;
        unsigned long uVar3 = lVar1 + lVar2 + 3;
        if (-1 < (long)uVar4) {
            uVar3 = uVar4;
        }
        uVar4 = uVar4 - (uVar3 & 18446744073709551612);
        eastl::string local_78("...", uVar4);
        local_78.append(str);
        eastl::string::append(&local_78, "...", uVar4);
        local_58 = eastl::string("");
        eastl::string local_98("");
        LoginMes(&local_58, &local_78, &local_98);
    }

    // 0x1001205a0
    void TitleScreen::ResumeInForeground() {
        uint32_t uVar1 = m_loginscreen;
        eastl::string local_70(m_loginMes1);
        eastl::string local_50(m_loginMes2);
        eastl::string local_30(m_loginMes3);
        Client::Instance()->SetMainState(10);
        m_loginscreen = uVar1;
        m_loginMes1 = &local_70;
        m_loginMes2 = &local_50;
        m_loginMes3 = &local_30;
    }

    // 0x1001206e0
    void TitleScreen::MoveToSteamLoginFlow(jag::auth::AuthAccountHint authAccountHint) {
        shared_ptr<ApplicationContext>* shared_ptr;

        m_previousLoginFlow = 2;
        m_loginscreen = 27;
        LoginMes((eastl::string*)&constants::text::steamlogin1, (eastl::string*)&constants::text::steamlogin2,
                 (eastl::string*)&constants::text::steamlogin3);
        auto pCVar1 = Client::Instance();
        shared_ptr = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        long* plVar2 = (long*)(*shared_ptr).operator->();
        plVar2 = (long*)(**(void (**)(...))(*plVar2 + 72))(plVar2);
        if (plVar2 != nullptr) {
            pCVar1 = Client::Instance();
            pCVar1->GetLoginManager()->ClearFederatedSignInResult();
            (**(void (**)(...))(*plVar2 + 80))(plVar2, authAccountHint, 10);
        }
    }

    // 0x100120790
    unsigned long TitleScreen::OpenTermsAndPrivacyScreen(int arg1) {
        unsigned long uVar1 = Client::Instance()->HasAcceptedTermsAndPrivacy();
        if ((char)uVar1 == '\0') {
            m_loginscreen = 12;
            m_postAction = arg1;
        }
        return uVar1 ^ 1;
    }

    // 0x1001207d0
    unsigned long TitleScreen::OpenDataDownloadPrompt(int arg1) {
        shared_ptr<ApplicationContext>* shared_ptr;

        auto pCVar1 = Client::Instance();
        shared_ptr = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        unsigned long uVar2 = ((Option<float>*)(*shared_ptr).operator->())->IsValidValue();
        if ((char)uVar2 == '\0') {
            m_loginscreen = 21;
            m_postAction = arg1;
        }
        return uVar2 ^ 1;
    }

    // 0x100120820
    void TitleScreen::ShowWorldWarningScreen(int arg1) {
        unsigned int uVar1;
        uint64_t uVar3;
        eastl::string* str;
        eastl::string* pbVar4;
        eastl::string* basic_string;
        eastl::string* str_00;
        bool bVar5;

        if (m_worldWarningAccepted == '\0') {
            uVar1 = Client::Instance()->field_52992;
            if ((uVar1 & 33554432) == 0) {
                if ((uVar1 & 4) == 0) {
                    if ((uVar1 & 1024) == 0)
                        goto LAB_100120833;
                    m_loginMes1 = ((eastl::string*)&constants::text::login_warning_high_risk1);
                    m_loginMes2 = ((eastl::string*)&constants::text::login_warning_high_risk2);
                    str = (eastl::string*)&constants::text::login_warning_high_risk3;
                } else {
                    bVar5 = (uVar1 & 1024) == 0;
                    pbVar4 = (eastl::string*)&constants::text::login_warning_high_risk_pvp1;
                    if (bVar5) {
                        pbVar4 = (eastl::string*)PTR_login_warning_pvp1_100ee6ba0;
                    }
                    str_00 = (eastl::string*)&constants::text::login_warning_high_risk_pvp2;
                    if (bVar5) {
                        str_00 = (eastl::string*)PTR_login_warning_pvp2_100ee6ba8;
                    }
                    str = (eastl::string*)&constants::text::login_warning_high_risk_pvp3;
                    if (bVar5) {
                        str = (eastl::string*)PTR_login_warning_pvp3_100ee6bb0;
                    }
                    m_loginMes1 = pbVar4;
                    m_loginMes2 = str_00;
                }
                m_loginMes3 = str;
                basic_string = (eastl::string*)&m_loginTitle;
                pbVar4 = (eastl::string*)&constants::text::login_warning_title;
            } else {
                m_loginTitle.assign("");
                m_loginMes1 = ((eastl::string*)&constants::text::login_notification_nosave1);
                m_loginMes2 = ((eastl::string*)&constants::text::login_notification_nosave2);
                basic_string = (eastl::string*)&m_loginMes3;
                pbVar4 = (eastl::string*)&constants::text::login_notification_nosave3;
            }
            *basic_string = pbVar4;
            m_loginscreen = 1;
            uVar3 = 1;
            m_postAction = arg1;
        } else {
        LAB_100120833:
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x100120970
    void TitleScreen::MoveToGameCenterFlow() {
        bool cVar2;
        uint64_t extraout_var;
        LoginManager* pLVar4;

        m_previousLoginFlow = 4;
        auto client = Client::Instance();
        shared_ptr<ApplicationContext>* this_00 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)client)(client);
        ApplicationContext* this_01 = (ApplicationContext*)**this_00;
        this_01->SendAttributionEvent(*((eastl::string*)&auth::AppsFlyerEvent::CONTINUE_WITH_GAME_CENTER));
        this_01->SendAnalyticsEvent(*((eastl::string*)&auth::AppsFlyerEvent::CONTINUE_WITH_GAME_CENTER));
        m_loginscreen = 15;
        LoginMes((eastl::string*)&constants::text::gamecenter1, (eastl::string*)&constants::text::gamecenter2,
                 (eastl::string*)&constants::text::gamecenter3);
        uint8_t uVar1 = this_01->GetAuthLibWrapper();
        long* plVar3 = (long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        if ((plVar3 == nullptr) || (cVar2 = (**(void (**)(...))(*plVar3 + 104))(plVar3), !cVar2)) {
            pLVar4 = client->GetLoginManager();
            pLVar4->SetThirdPartySignInResult(4294967295);
            return;
        }
        pLVar4 = client->GetLoginManager();
        pLVar4->SetThirdPartySignInResult(0);
        (**(void (**)(...))(*plVar3 + 64))(plVar3);
    }

    // 0x100120a40
    void TitleScreen::MoveToGoogleLoginFlow() {
        m_previousLoginFlow = 3;
        auto client = Client::Instance();
        shared_ptr<ApplicationContext>* this_00 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)client)(client);
        long* plVar1 = (long*)**this_00;
        m_loginscreen = 23;
        LoginMes((eastl::string*)&constants::text::googlelogin1, (eastl::string*)&constants::text::googlelogin2,
                 (eastl::string*)&constants::text::googlelogin3);
        plVar1 = (long*)(**(void (**)(...))(*plVar1 + 72))(plVar1);
        auto this_01 = client->GetLoginManager();
        if (plVar1 == nullptr) {
            this_01->SetThirdPartySignInResult(4294967295);
        } else {
            this_01->SetThirdPartySignInResult(0);
            (**(void (**)(...))(*plVar1 + 72))(plVar1);
        }
    }

    // 0x100120b60
    void TitleScreen::MoveToJagexWebFlow() {
        uint64_t extraout_var;

        m_previousLoginFlow = 5;
        auto client = Client::Instance();
        shared_ptr<ApplicationContext>* this_00 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)client)(client);
        ApplicationContext* this_01 = (ApplicationContext*)**this_00;
        this_01->SendAttributionEvent(*((eastl::string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT));
        this_01->SendAnalyticsEvent(*((eastl::string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT));
        m_loginscreen = 30;
        LoginMes((eastl::string*)&constants::text::jagexWeblogin1, (eastl::string*)&constants::text::jagexWeblogin2,
                 (eastl::string*)&constants::text::jagexWeblogin3);
        uint8_t uVar1 = this_01->GetAuthLibWrapper();
        long* plVar2 = (long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        auto this_02 = client->GetLoginManager();
        if (plVar2 == nullptr) {
            this_02->SetJagexWebAuthResult(4294967295);
            MoveToInitialScreen(true, false);
        } else {
            this_02->SetJagexWebAuthResult(4294967294);
            m_lastJagexWebFlowRequest = core::SafeTime::CurrentTimeMillis();
            (**(void (**)(...))(*plVar2 + 88))(plVar2);
        }
    }

    // 0x100120c30
    void TitleScreen::MoveToUserPassEntryScreen(bool arg1) {
        ReturnValue local_20;

        if (Client::Instance()->GetLoginManager()->IsRefreshTokenAvailable() == '\0') {
            m_previousLoginFlow = 1;
            m_loginMes1 = ((eastl::string*)&constants::text::pleaselogin1);
            m_loginMes2 = ((eastl::string*)&constants::text::pleaselogin2);
            m_loginMes3 = ((eastl::string*)&constants::text::pleaselogin3);
            m_loginscreen = 2;
            if (arg1) {
                m_loginPass.assign("");
            }
            RestoreLoginUserFromRememberedUsername();
            SetupUserPassInputForm(&local_20);
            SetDefaultLoginSelect();
        } else {
            m_loginscreen = 10;
        }
    }

    // 0x100120cf0
    void TitleScreen::LaunchAccountCreationFlow() {
        bool arg2;
        eastl::string local_88;
        eastl::string local_68;
        ReturnValue local_48;

        (logger::default_logger())
            ->Log(false, 5,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/titlescreen.cpp",
                  4187, "launchAccountCreationFlow");
        auto pCVar1 = Client::Instance();
        shared_ptr<ApplicationContext>* this_00 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        long* plVar2 = (long*)**this_00;
        plVar2 = (long*)(**(void (**)(...))(*plVar2 + 72))(plVar2);
        if (plVar2 == nullptr) {
            pCVar1 = Client::Instance();
            local_88 = eastl::string("secure");
            local_48 = pCVar1->GetBaseUrl(local_88, true);
            local_68 + local_48;
            local_68.OpenURL(DAT_00000001, arg2);
        } else {
            (**(void (**)(...))(*plVar2 + 232))(plVar2, &auth::AppsFlyerEvent::ACCOUNT_CREATION_INITIATED);
            (**(void (**)(...))(*plVar2 + 224))(plVar2, &auth::AppsFlyerEvent::ACCOUNT_CREATION_INITIATED);
            (**(void (**)(...))(*plVar2 + 128))(plVar2);
        }
    }

    // 0x100120e40
    void TitleScreen::ApplyPostAction() {
        Client* pCVar2;
        shared_ptr<ApplicationContext>* psVar3;
        ApplicationContext* pAVar4;
        long* plVar5;

        bool cVar1 = OpenTermsAndPrivacyScreen(m_postAction);
        if ((!cVar1) && (cVar1 = OpenDataDownloadPrompt(m_postAction), !cVar1)) {
            switch (m_postAction) {
            case 0:
                LaunchAccountCreationFlow();
                MoveToInitialScreen(false, false);
                break;
            default:
                cVar1 = ShowWorldWarningScreen(m_postAction);
                if (!cVar1) {
                    pCVar2 = Client::Instance();
                    psVar3 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar2)(pCVar2);
                    pAVar4 = (ApplicationContext*)(*psVar3).operator->();
                    pAVar4->SendAttributionEvent(*((eastl::string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT));
                    pCVar2 = Client::Instance();
                    psVar3 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar2)(pCVar2);
                    pAVar4 = (ApplicationContext*)(*psVar3).operator->();
                    pAVar4->SendAnalyticsEvent(*((eastl::string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT));
                    pCVar2 = Client::Instance();
                    psVar3 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar2)(pCVar2);
                    plVar5 = (long*)(*psVar3).operator->();
                    plVar5 = (long*)(**(void (**)(...))(*plVar5 + 72))();
                    if ((plVar5 == nullptr) || (cVar1 = (**(void (**)(...))(*plVar5 + 96))(), !cVar1)) {
                        MoveToUserPassEntryScreen(false);
                    } else {
                        MoveToJagexWebFlow();
                    }
                }
                break;
            case 2:
                cVar1 = ShowWorldWarningScreen(2);
                if (!cVar1) {
                    MoveToGameCenterFlow();
                }
                break;
            case 3:
                cVar1 = ShowWorldWarningScreen(3);
                if (!cVar1) {
                    MoveToGoogleLoginFlow();
                }
                break;
            case 4:
                cVar1 = ShowWorldWarningScreen(4);
                if (!cVar1) {
                    InitiateGameTokenLogin(false, false);
                }
                break;
            case 5:
                cVar1 = ShowWorldWarningScreen(5);
                if (!cVar1) {
                    MoveToSteamLoginFlow(0);
                }
            }
            m_postAction = -1;
        }
    }

    // 0x100120fb0
    void TitleScreen::PreparePasswordLogin(const eastl::string& str, bool arg2) {
        char* pcVar3;
        MainState mainState;
        Nullable<LocLayer> local_38;

        auto client = Client::Instance();
        shared_ptr<ApplicationContext>* this_00 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)client)(client);
        long* plVar2 = (long*)**this_00;
        plVar2 = (long*)(**(void (**)(...))(*plVar2 + 72))(plVar2);
        auto this_01 = client->GetLoginManager();
        if (plVar2 == nullptr) {
            this_01->PreparePasswordLogin(str, arg2);
        } else {
            if (m_loginscreen != 20) {
                m_loginscreen = 20;
                (**(void (**)(...))(*plVar2 + 248))(plVar2);
            }
            (**(void (**)(...))(*plVar2 + 240))(&local_38, plVar2);
            if (local_38.IsNull() != '\0') {
                return;
            }
            pcVar3 = (char*)local_38.SSOBeginPtr();
            if (*pcVar3 == '\0') {
                this_01->PreparePasswordLogin(str, arg2);
            } else {
                this_01->PreparePasswordLoginForTokenOnlyRequest(str);
            }
        }
        m_loginscreen = 2;
        client->DeriveTOTPMode(false);
        if (client->field_8448 == 45) {
            mainState = 50;
        } else {
            mainState = 20;
        }
        client->SetMainState(mainState);
    }

    // 0x100121290
    void TitleScreen::SetDefaultLoginSelect() {
        if (Client::Instance()->field_19104 != '\0') {
            if (m_loginUser.size() != 0) {
                SelectPasswordField();
                return;
            }
        }
        SelectUsernameField();
    }

    // 0x1001212d0
    void TitleScreen::LoadDevCredentialsFromFile() {
        Logger* this_03;
        char* pcVar2;
        uint64_t uVar3;
        eastl::string local_2d8;
        ReturnValue local_2b8;
        uint8_t local_298[320];
        ReturnValue local_158;

        auto client = Client::Instance();
        auto this_00 = client->GetLoginManager();
        auto this_01 = this_00->GetDevCredentialsOutputDirectory();
        auto this_02 = this_00->GetRenderTargets();
        if (!(*this_01 == "")) {
            if (!(*this_02 == "")) {
                local_158 = *this_01 / this_02;
                new (local_298) callstack::Callstack();
                new ((local_298 + 8)) File(&local_158, 2, local_298);
                if (!(local_298->IsValid())) {
                    ((local_298 + 8))->seek(0, 0, nullptr);
                    local_2b8 = ((local_298 + 8))->readline();
                    m_loginUser = &local_2b8;
                    local_2b8 = ((local_298 + 8))->readline();
                    stringtools::rot13<eastl::string, eastl::string>(&local_2d8);
                    m_loginPass = &local_2d8;
                    DirectLogin();
                } else {
                    this_03 = logger::default_logger();
                    pcVar2 = local_158.GetName();
                    local_2b8 = local_298->GetErrorString();
                    uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    this_03->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "titlescreen.cpp",
                                 4357, "Error opening dev credentials file %s: %s", pcVar2, uVar3);
                }
                ((local_298 + 8))->~File();
                local_158.~pair();
                goto LAB_1001214c5;
            }
        }
        LoginMes((eastl::string*)&constants::text::loginDevFileNotFound_a,
                 (eastl::string*)&constants::text::loginDevFileNotFound_b,
                 (eastl::string*)&constants::text::loginDevFileNotFound_c);
    LAB_1001214c5:
    }

    // 0x1001215a0
    auto TitleScreen::SetupAccountAppealInputForm() {
        shared_ptr<ApplicationContext>* shared_ptr;

        auto pCVar1 = Client::Instance();
        shared_ptr = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        long* plVar2 = (long*)(*shared_ptr).operator->();
        shared_ptr<dash3d::GroundDecor>* groundDecor =
            (shared_ptr<dash3d::GroundDecor>*)(**(void (**)(...))(*plVar2 + 80))(plVar2, 3);
        auto result(groundDecor);
        ((result).operator->())->SetText(&m_loginUser);
        return result;
    }

    // 0x100121610
    void TitleScreen::AccountAppealLogin() {
        uint32_t uVar1;
        unsigned long long arg1;
        Client* pCVar3;
        shared_ptr<ApplicationContext>* psVar4;
        ApplicationContext* pAVar5;
        eastl::string* str3;
        eastl::string* str2;
        eastl::string* str1;

        m_loginUser.trim();
        if (m_loginUser.size() == 0) {
            str1 = (eastl::string*)&constants::text::account_appeal_login_a;
            str2 = (eastl::string*)&constants::text::account_appeal_login_b;
            str3 = (eastl::string*)&constants::text::account_appeal_login_c;
        } else {
            arg1 = oldscape::AccountAppealLogin::GetChallengeId();
            if (arg1 == 0) {
                uVar1 = 5;
            } else {
                uVar1 = oldscape::AccountAppealLogin::DoAccountAppealLogin(arg1, m_loginUser);
            }
            switch (uVar1) {
            case 2:
                pCVar3 = Client::Instance();
                psVar4 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar3)(pCVar3);
                pAVar5 = (ApplicationContext*)(*psVar4).operator->();
                pAVar5->SendAttributionEvent(*((eastl::string*)&auth::AppsFlyerEvent::ACCOUNT_RECOVERY_INITIATED));
                pCVar3 = Client::Instance();
                psVar4 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar3)(pCVar3);
                pAVar5 = (ApplicationContext*)(*psVar4).operator->();
                pAVar5->SendAnalyticsEvent(*((eastl::string*)&auth::AppsFlyerEvent::ACCOUNT_RECOVERY_INITIATED));
                LoginMes((eastl::string*)&constants::text::accountappeal_m2_a,
                         (eastl::string*)&constants::text::accountappeal_m2_b,
                         (eastl::string*)&constants::text::accountappeal_m2_c);
                m_loginscreen = 6;
                return;
            case 3:
                str1 = (eastl::string*)&constants::text::accountappeal_m3_a;
                str2 = (eastl::string*)&constants::text::accountappeal_m3_b;
                str3 = (eastl::string*)&constants::text::accountappeal_m3_c;
                break;
            case 4:
                str1 = (eastl::string*)&constants::text::accountappeal_m4_a;
                str2 = (eastl::string*)&constants::text::accountappeal_m4_b;
                str3 = (eastl::string*)&constants::text::accountappeal_m4_c;
                break;
            case 5:
                str1 = (eastl::string*)&constants::text::accountappeal_m5_a;
                str2 = (eastl::string*)&constants::text::accountappeal_m5_b;
                str3 = (eastl::string*)&constants::text::accountappeal_m5_c;
                break;
            case 6:
                str1 = (eastl::string*)&constants::text::accountappeal_m6_a;
                str2 = (eastl::string*)&constants::text::accountappeal_m6_b;
                str3 = (eastl::string*)&constants::text::accountappeal_m6_c;
                break;
            case 7:
                str1 = (eastl::string*)&constants::text::accountappeal_m7_a;
                str2 = (eastl::string*)&constants::text::accountappeal_m7_b;
                str3 = (eastl::string*)&constants::text::accountappeal_m7_c;
                break;
            default:
                goto switchD_100121686_default;
            }
        }
        LoginMes(str1, str2, str3);
    switchD_100121686_default:
    }

    // 0x100121790
    unsigned int TitleScreen::GetCurrentDobInputBoxFromCoordinates(int arg1, int arg2) {
        int iVar1;

        unsigned int uVar2 = 0;
        do {
            if (arg2 <= arg1 + 30) {
                return uVar2;
            }
            iVar1 = arg1 + 35;
            arg1 = arg1 + 50;
            if ((uVar2 & 2147483645) != 1) {
                arg1 = iVar1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
        return 0;
    }

    // 0x1001217d0
    auto TitleScreen::SetupDobInputForm() {
        shared_ptr<ApplicationContext>* shared_ptr;

        auto pCVar1 = Client::Instance();
        shared_ptr = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        long* plVar2 = (long*)(*shared_ptr).operator->();
        shared_ptr<dash3d::GroundDecor>* groundDecor =
            (shared_ptr<dash3d::GroundDecor>*)(**(void (**)(...))(*plVar2 + 80))(plVar2, 4);
        auto result(groundDecor);
        ((result).operator->())->SetText(&m_loginUser);
        return result;
    }

    // 0x100121840
    uint64_t TitleScreen::CheckAndSetDobInput() {
        eastl::string* in_RCX;
        eastl::string* str2;
        eastl::string* str1;
        TitleScreen* this_00;

        long arg1 = GetDobFromUserInput();
        if (arg1 == -1) {
            this_00 = (TitleScreen*)&constants::text::dobDateFormatError1;
            str1 = (eastl::string*)&constants::text::dobDateFormatError2;
            str2 = (eastl::string*)&constants::text::dobDateFormatError3;
        } else {
            if (arg1 != -2) {
                if (CheckPlayerIsOver13(arg1) == '\0') {
                    m_dobInput = 8388607;
                } else {
                    m_dobInput = ((int)((uint64_t)(((__int128)arg1 * (__int128)1749024623285053783) >> 64) >> 13) -
                                  ((uint64_t)(((__int128)arg1 * (__int128)1749024623285053783) >> 96) >> 31)) -
                                 11745;
                }
                return 1;
            }
            this_00 = (TitleScreen*)&constants::text::dobDateCharactersMissingError1;
            str1 = (eastl::string*)&constants::text::dobDateCharactersMissingError2;
            str2 = (eastl::string*)&constants::text::dobDateCharactersMissingError3;
        }
        SendToDobScreenWithErrorMessage(this_00, str1, str2, in_RCX);
        return 0;
    }

    // 0x1001218e0
    void TitleScreen::Start3rdPartyLoginFlow(auth::AuthLibWrapper* authLibWrapper) {
        if (m_previousLoginFlow == 2) {
            (*authLibWrapper->_vptr[7]._x7e___2)();
        }
        InitiateGameTokenLogin(false, false);
    }

    // 0x100121960
    void TitleScreen::InitiateGameTokenLogin(bool arg1, bool arg2) {
        LoginMes((eastl::string*)&constants::text::connecting1, (eastl::string*)&constants::text::connecting2,
                 (eastl::string*)&constants::text::connecting3);
        auto client = Client::Instance();
        client->GetLoginManager()->PrepareGameTokenLogin(arg1);
        client->DeriveTOTPMode(arg2);
        MainState mainState = 20;
        if (client->field_8448 == 45) {
            mainState = 50;
        }
        client->SetMainState(mainState);
    }

    // 0x1001219e0
    void TitleScreen::ApplyPendingTransactions() {
        shared_ptr<ApplicationContext>* shared_ptr;

        auto pCVar1 = Client::Instance();
        shared_ptr = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        long* plVar2 = (long*)**shared_ptr;
        plVar2 = (long*)(**(void (**)(...))(*plVar2 + 72))(plVar2);
        if (plVar2 != nullptr) {
            (**(void (**)(...))(*plVar2 + 256))(plVar2);
        }
    }

    // 0x100121a20
    void TitleScreen::DetermineInitialScreen(bool arg1) {
        uint8_t uVar2;
        shared_ptr<ApplicationContext>* this_01;
        ApplicationContext* this_02;
        uint64_t extraout_var;
        uint64_t uVar4;
        ReturnValue local_48;

        auto client = Client::Instance();
        auto this_00 = client->GetLoginManager();
        bool cVar1 = this_00->IsRefreshTokenAvailable();
        if ((!cVar1) || (arg1)) {
            this_00->InvalidateRefreshToken();
            uVar4 = 0;
            this_00->SetEndPosition(0);
            local_48 = eastl::string("");
            SetDisplayName(&local_48);
        } else {
            cVar1 = this_00->IsUsingJagexLauncher();
            uVar4 = 10;
            if (!cVar1) {
                this_01 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)client)(client);
                this_02 = (ApplicationContext*)**this_01;
                uVar2 = this_02->LoadPreferenceFromDevice(60368656);
                this_00->SetEndPosition((int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2));
                local_48 = this_02->LoadPreferenceFromDevice((eastl::string*)&ApplicationContext::DISPLAYNAME_KEY, "");
                SetDisplayName(&local_48);
                if (this_00->GetAuthenticatorUserHash() == 0) {
                    local_48 = eastl::string("");
                    SetDisplayName(&local_48);
                    this_00->InvalidateRefreshToken();
                    this_02->AcceptDataDownloadPrompt(&ApplicationContext::DISPLAYNAME_KEY);
                    uVar4 = 0;
                }
            }
        }
        return uVar4;
    }

    // 0x100121d00
    time_t TitleScreen::GetDobFromUserInput() {
        basic_string<char, BucketAllocatorEASTL>* basic_string;
        unsigned long uVar4;
        time_t arg4;
        unsigned long arg1;
        long local_218[2];
        basic_ostream<char, std::char_traits<char> _> local_208;
        tm local_100;
        eastl::string local_c8;
        string local_a8;
        string local_88;
        eastl::string local_68;
        int local_48[8];
        int local_28;
        int local_24;

        new (local_218) std::stringstream();
        if (m_dobCharacters.end() != 0) {
            arg1 = 0;
            do {
                basic_string = &m_dobCharacters[arg1];
                if (basic_string->compare("") == 0) {
                    arg4 = -2;
                    goto LAB_10012203a;
                }
                arg1 = arg1 + 1;
                uVar4 = m_dobCharacters.end();
            } while (arg1 < uVar4);
        }
        eastl::string* pbVar5 = &m_dobCharacters[0];
        m_dobCharacters[1];
        local_c8 + *pbVar5;
        char* pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::operator<<(&local_208, pcVar6);
        *local_218 >> local_28;
        local_100.tm_mday = local_28;
        std::string::string<decltype(nullptr)>(&local_a8, "");
        std::stringstream::str((basic_string<char, std::char_traits<char>, std::allocator<char> _>*)local_218);
        std::string::~string(&local_a8);
        std::ios::clear((int)(basic_string<char, std::char_traits<char>, std::allocator<char> _>*)local_218 +
                        (int)*(uint64_t*)(local_218[0] - 24));
        pbVar5 = &m_dobCharacters[2];
        m_dobCharacters[3];
        local_a8 + *pbVar5;
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::operator<<(&local_208, pcVar6);
        *local_218 >> local_24;
        local_100.tm_mon = local_24 - 1;
        local_24 = local_100.tm_mon;
        std::string::string<decltype(nullptr)>(&local_88, "");
        std::stringstream::str((basic_string<char, std::char_traits<char>, std::allocator<char> _>*)local_218);
        std::string::~string(&local_88);
        std::ios::clear((int)(basic_string<char, std::char_traits<char>, std::allocator<char> _>*)local_218 +
                        (int)*(uint64_t*)(local_218[0] - 24));
        pbVar5 = &m_dobCharacters[4];
        m_dobCharacters[5];
        *local_48 + *pbVar5;
        m_dobCharacters[6];
        local_68 + *local_48;
        m_dobCharacters[7];
        local_88 + local_68;
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::operator<<(&local_208, pcVar6);
        *local_218 >> *local_48;
        local_100.tm_year = local_48[0] - 1900;
        local_48[0] = local_100.tm_year;
        std::string::string<decltype(nullptr)>(&local_68, "");
        std::stringstream::str((basic_string<char, std::char_traits<char>, std::allocator<char> _>*)local_218);
        std::string::~string(&local_68);
        std::ios::clear((int)(basic_string<char, std::char_traits<char>, std::allocator<char> _>*)local_218 +
                        (int)*(uint64_t*)(local_218[0] - 24));
        local_100.tm_hour = 12;
        local_100.tm_sec = 0;
        local_100.tm_min = 0;
        arg4 = _mktime(&local_100);
        if (arg4 != -1) {
            if (DateOfBirthIsValid(local_28, local_24, local_48[0], arg4) != '\0')
                goto LAB_100122010;
        }
        arg4 = -1;
    LAB_100122010:
    LAB_10012203a:
        return arg4;
    }

    // 0x100122100
    void TitleScreen::SendToDobScreenWithErrorMessage(const eastl::string& str1, const eastl::string& str2,
                                                      const eastl::string& str3) {
        LoginMes((eastl::string*)this, str1, str2);
    }

    // 0x100122110
    bool TitleScreen::CheckPlayerIsOver13(long arg1) {
        long lVar1 = GetDate13YearsAgo();
        return arg1 <= lVar1;
    }

    // 0x100122130
    void TitleScreen::GetDate13YearsAgo() {
        time_t local_18;

        _time(&local_18);
        auto ptVar1 = _localtime(&local_18);
        ptVar1->tm_year = ptVar1->tm_year - 13;
        ptVar1->tm_mday = ptVar1->tm_mday + 1;
        ptVar1->tm_hour = 0;
        ptVar1->tm_sec = 0;
        ptVar1->tm_min = 0;
        _mktime(ptVar1);
    }

    // 0x100122170
    void TitleScreen::GetReallyOldDate() {
        tm local_40;

        local_40.tm_mon = 0;
        local_40.tm_year = 0;
        local_40.tm_hour = 0;
        local_40.tm_mday = 1;
        local_40.tm_sec = 0;
        local_40.tm_min = 0;
        _mktime(&local_40);
    }

    // 0x1001221c0
    bool TitleScreen::DateOfBirthIsValid(int arg1, int arg2, int arg3, long arg4) {
        bool bVar2;

        long local_28 = arg4;
        auto ptVar1 = _localtime(&local_28);
        if ((ptVar1->tm_mday == arg1) && (ptVar1->tm_mon == arg2)) {
            bVar2 = ptVar1->tm_year == arg3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x100122200
    void TitleScreen::SetLoginScreen(int arg1) {}

    // 0x1001222e0
    void TitleScreen::WorldSwitchRender(jstring::PixfontGeneric& pixfontGeneric1,
                                        jstring::PixfontGeneric& pixfontGeneric2, graphics::Pix2D& pix2D) {
        uint8_t bVar3;
        int iVar5;
        int iVar6;
        uint64_t uVar8;
        int* piVar9;
        long lVar11;
        unique_ptr<GameWorld>* puVar12;
        GameWorld* gameWorld;
        unsigned int uVar13;
        int iVar14;
        int arg3;
        Pix2D* pPVar16;
        unsigned long uVar17;
        unsigned long uVar18;
        bool bVar19;
        ReturnValue local_c0;
        int local_9c;
        Client* local_90;
        ReturnValue local_80;
        int local_5c;
        unsigned int local_50;
        int* local_40;
        int local_34;

        PixfontGeneric* pPVar15 = pixfontGeneric2;
        int local_4c = m_inputHandler.field_16.GetX();
        uint64_t local_98 = m_inputHandler.field_20.GetX();
        auto pCVar7 = Client::Instance();
        auto js5 = pCVar7->GetSprites();
        bool cVar1 = m_slBack.empty();
        if (cVar1) {
            pPVar15 = &local_80;
            *pPVar15 = graphics::pixloader::Makepix32Array(*js5, "sl_back", "");
            m_slBack = *pPVar15;
        }
        cVar1 = m_slFlags.empty();
        if (cVar1) {
            pPVar15 = &local_80;
            *pPVar15 = graphics::pixloader::Makepix8Array(*js5, "sl_flags", "");
            m_slFlags = *pPVar15;
        }
        cVar1 = m_slArrows.empty();
        if (cVar1) {
            pPVar15 = &local_80;
            *pPVar15 = graphics::pixloader::Makepix8Array(*js5, "sl_arrows", "");
            m_slArrows = *pPVar15;
        }
        cVar1 = m_slStars.empty();
        if (cVar1) {
            pPVar15 = &local_80;
            *pPVar15 = graphics::pixloader::Makepix8Array(*js5, "sl_stars", "");
            m_slStars = *pPVar15;
        }
        bool bVar2 = &m_slLeftArrow == pPVar15;
        if (bVar2) {
            local_80 = graphics::pixloader::Makepix8(*js5, "leftarrow", "");
            pPVar15 = &local_80;
            m_slLeftArrow = local_80;
        }
        bVar2 = &m_slRightArrow == pPVar15;
        if (bVar2) {
            local_80 = graphics::pixloader::Makepix8(*js5, "rightarrow", "");
            m_slRightArrow = local_80;
        }
        (**(void (**)(...))(pix2D.field_0 + 32))(pix2D, m_xOf, 23, 765, 480, 0);
        graphics::Pix2D::FillRectVGrad((int)pix2D, m_xOf, 0, 125, 23, 12425273);
        graphics::Pix2D::FillRectVGrad((int)pix2D, m_xOf + 125, 0, 640, 23, 5197647);
        jstring::PixfontGeneric::CentreString(pixfontGeneric1, 23804432, m_xOf + 62, 15, 0, *4294967295);
        cVar1 = m_slStars.empty();
        Pix2D* local_48 = pix2D;
        if (!cVar1) {
            uVar8 = m_slStars[1];
            (**(void (**)(...))(local_48->field_0 + 184))(local_48, uVar8, m_xOf + 140, 1);
            jstring::PixfontGeneric::DrawString(pixfontGeneric2, 23804464, m_xOf + 152, 10, 16777215, *4294967295);
            pix2D = local_48;
            uVar8 = m_slStars[0];
            (**(void (**)(...))(pix2D.field_0 + 184))(pix2D, uVar8, m_xOf + 140, 12);
            jstring::PixfontGeneric::DrawString(pixfontGeneric2, 23804496, m_xOf + 152, 21, 16777215, *4294967295);
        }
        cVar1 = m_slArrows.empty();
        int iVar4 = m_xOf;
        if (!cVar1) {
            bVar2 = false;
            local_90 = pCVar7;
            local_40 = (int*)(*((array<int, 4ul>*)&GameWorld::m_ordering))[0];
            local_34 = iVar4 + 280;
            if (*local_40 == 0) {
                piVar9 = (int*)(*((array<int, 4ul>*)&GameWorld::m_dirs))[0];
                bVar2 = *piVar9 == 0;
                piVar9 = (int*)(*((array<int, 4ul>*)&GameWorld::m_dirs))[0];
                bVar19 = *piVar9 == 1;
            } else {
                bVar19 = false;
                local_34 = iVar4 + 280;
            }
            uVar8 = m_slArrows[(unsigned long)bVar2 * 2];
            pPVar16 = local_48;
            (**(void (**)(...))(local_48->field_0 + 184))(local_48, uVar8, local_34, 4);
            uVar8 = m_slArrows[(unsigned long)bVar19 * 2 + 1];
            (**(void (**)(...))(pPVar16->field_0 + 184))(pPVar16, uVar8, iVar4 + 295, 4);
            jstring::PixfontGeneric::DrawString(pixfontGeneric1, 23804528, iVar4 + 312, 17, 16777215, *4294967295);
            iVar14 = m_xOf;
            iVar4 = m_xOf + 390;
            if (*local_40 == 1) {
                piVar9 = (int*)(*((array<int, 4ul>*)&GameWorld::m_dirs))[0];
                bVar2 = *piVar9 == 0;
                local_34 = iVar4;
                piVar9 = (int*)(*((array<int, 4ul>*)&GameWorld::m_dirs))[0];
                bVar19 = *piVar9 == 1;
            } else {
                bVar2 = false;
                bVar19 = false;
                local_34 = m_xOf + 390;
            }
            uVar8 = m_slArrows[(unsigned long)bVar2 * 2];
            pPVar16 = local_48;
            (**(void (**)(...))(local_48->field_0 + 184))(local_48, uVar8, local_34, 4);
            uVar8 = m_slArrows[(unsigned long)bVar19 * 2 + 1];
            (**(void (**)(...))(pPVar16->field_0 + 184))(pPVar16, uVar8, iVar14 + 405, 4);
            jstring::PixfontGeneric::DrawString(pixfontGeneric1, 23804560, iVar14 + 422, 17, 16777215, *4294967295);
            iVar14 = m_xOf;
            iVar4 = *local_40;
            if (iVar4 == 2) {
                piVar9 = (int*)(*((array<int, 4ul>*)&GameWorld::m_dirs))[0];
                uVar17 = (unsigned long)(*piVar9 == 0) * 2;
            } else {
                uVar17 = 0;
            }
            local_34 = iVar14 + 500;
            uVar18 = 1;
            if (iVar4 == 2) {
                piVar9 = (int*)(*((array<int, 4ul>*)&GameWorld::m_dirs))[0];
                uVar18 = (unsigned long)(*piVar9 == 1) * 2 + 1;
            }
            uVar8 = m_slArrows[uVar17];
            pPVar16 = local_48;
            (**(void (**)(...))(local_48->field_0 + 184))(local_48, uVar8, local_34, 4);
            uVar8 = m_slArrows[uVar18];
            (**(void (**)(...))(pPVar16->field_0 + 184))(pPVar16, uVar8, iVar14 + 515, 4);
            jstring::PixfontGeneric::DrawString(pixfontGeneric1, 23804592, iVar14 + 532, 17, 16777215, *4294967295);
            iVar14 = m_xOf;
            iVar4 = *local_40;
            if (iVar4 == 3) {
                piVar9 = (int*)(*((array<int, 4ul>*)&GameWorld::m_dirs))[0];
                uVar17 = (unsigned long)(*piVar9 == 0) * 2;
            } else {
                uVar17 = 0;
            }
            local_40 = (int*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(iVar14 + 610));
            uVar18 = 1;
            if (iVar4 == 3) {
                piVar9 = (int*)(*((array<int, 4ul>*)&GameWorld::m_dirs))[0];
                uVar18 = (unsigned long)(*piVar9 == 1) * 2 + 1;
            }
            uVar8 = m_slArrows[uVar17];
            pix2D = local_48;
            (**(void (**)(...))(local_48->field_0 + 184))(local_48, uVar8, (unsigned long)local_40 & 4294967295, 4);
            uVar8 = m_slArrows[uVar18];
            (**(void (**)(...))(pix2D.field_0 + 184))(pix2D, uVar8, iVar14 + 625, 4);
            jstring::PixfontGeneric::DrawString(pixfontGeneric1, 23804624, iVar14 + 642, 17, 16777215, *4294967295);
            pCVar7 = local_90;
        }
        pPVar15 = pixfontGeneric2;
        iVar14 = m_xOf + 280;
        auto pDVar10 = pCVar7->field_8376.operator->();
        iVar4 = pDVar10->GetDefaultWorldId();
        pPVar16 = pix2D;
        if (iVar4 < 1) {
            jstring::PixfontGeneric::DrawString(*pPVar15, 23804848, iVar14, 525, 16777215, *4294967295);
        } else {
            pDVar10 = (DeviceOptions*)pCVar7->field_8376.operator->();
            iVar4 = pDVar10->GetDefaultWorldId();
            local_c0 = eastl::to_string(iVar4);
            local_80 + (*((eastl::string*)&constants::text::currentDefaultWorld));
            jstring::PixfontGeneric::DrawString(*pPVar15, (int)&local_80, iVar14, 525, 16777215, *4294967295);
        }
        (**(void (**)(...))(pix2D.field_0 + 32))(pix2D, m_xOf + 708, 4, 50, 16, 0, pPVar16);
        jstring::PixfontGeneric::CentreString(*pPVar15, 23802352, m_xOf + 733, 16, 16777215, *4294967295);
        m_slLastWorld = -1;
        cVar1 = m_slBack.empty();
        if (!cVar1) {
            CalculateWorldSwitcherStructure((WorldSwitcherStructure*)&m_worldSwitcherStructure);
            m_slMaxScroll = (GameWorld::m_num + DAT_100f8abfc - 1) / DAT_100f8abfc -
                            reinterpret_cast<const uint64_t*>(&m_worldSwitcherStructure)[1];
            pCVar7 = Client::Instance();
            local_80 = pCVar7->GetUISafeArea();
            iVar4 = local_80.GetLevel();
            bVar2 = &m_slLeftArrow != pCVar7;
            if ((bVar2) && (0 < m_slStartColumn)) {
                pCVar7 = (Client*)*m_slLeftArrow;
                iVar14 = reinterpret_cast<const uint64_t*>(&m_worldSwitcherStructure)[3] + m_xOf;
                lVar11 = m_slLeftArrow.operator->();
                (**(void (**)(...))(local_48->field_0 + 184))(
                    local_48, pCVar7,
                    (iVar14 - *(int*)(lVar11 + 48)) +
                        reinterpret_cast<const uint64_t*>(&m_worldSwitcherStructure)[2] * -2,
                    iVar4 / 2 - *(int*)(lVar11 + 52) / 2);
            }
            bVar2 = &m_slRightArrow != pCVar7;
            if ((bVar2) && (m_slStartColumn < m_slMaxScroll)) {
                uVar8 = *m_slRightArrow;
                iVar5 = DAT_100f8ac0c + m_xOf;
                iVar14 = reinterpret_cast<const uint64_t*>(&m_worldSwitcherStructure)[2] * 2;
                lVar11 = m_slRightArrow.operator->();
                (**(void (**)(...))(local_48->field_0 + 184))(local_48, uVar8, iVar5 + iVar14,
                                                              iVar4 / 2 - *(int*)(lVar11 + 52) / 2);
            }
            local_5c = m_slStartColumn;
            uVar13 = DAT_100f8abfc * m_slStartColumn;
            iVar4 = 0;
            local_50 = 0;
            pPVar16 = local_48;
            if ((int)uVar13 < GameWorld::m_num) {
                piVar9 = (int*)(unsigned long)(unsigned int)(reinterpret_cast<const uint64_t*>(
                                                                 &m_worldSwitcherStructure)[3] +
                                                             m_xOf);
                iVar14 = reinterpret_cast<const uint64_t*>(&m_worldSwitcherStructure)[4] + 23;
                uVar17 = (unsigned long)(int)uVar13;
                local_50 = 0;
                do {
                    uVar18 = (unsigned long)uVar13;
                    if (reinterpret_cast<const uint64_t*>(&m_worldSwitcherStructure)[1] <= local_5c - m_slStartColumn)
                        break;
                    local_90 = (Client*)(((uint64_t)local_90._4_4_ << 32) | (uint32_t)uVar13);
                    local_9c = iVar4;
                    local_40 = piVar9;
                    puVar12 =
                        (unique_ptr<GameWorld>*)(*((Array<std::unique_ptr<GameWorld>>*)&GameWorld::m_list))[uVar17];
                    gameWorld = (GameWorld*)**puVar12;
                    local_80 = eastl::to_string(gameWorld->field_8);
                    if (gameWorld->field_8 == -1) {
                        bVar2 = true;
                        local_80 = ((eastl::string*)&constants::text::offlineworld);
                    } else if ((int)gameWorld->field_8 < 1981) {
                        bVar2 = false;
                    } else {
                        bVar2 = true;
                        local_80 = ((eastl::string*)&constants::text::fullworld);
                    }
                    cVar1 = gameWorld->IsNoSave();
                    if (!cVar1) {
                        cVar1 = gameWorld->IsBeta();
                        if (!cVar1) {
                            cVar1 = gameWorld->IsDeadman();
                            if (!cVar1) {
                                cVar1 = gameWorld->IsSeasonal();
                                if (!cVar1) {
                                    cVar1 = gameWorld->IsPVP();
                                    if (!cVar1) {
                                        cVar1 = gameWorld->IsSpeedrunWorld();
                                        if (!cVar1) {
                                            cVar1 = gameWorld->IsFreshStart();
                                            local_34 = 0;
                                            uVar13 = 4294967295;
                                            if (cVar1) {
                                                bVar3 = gameWorld->IsMembers();
                                                uVar13 = bVar3 | 12;
                                            }
                                        } else {
                                            bVar3 = gameWorld->IsMembers();
                                            uVar13 = bVar3 | 10;
                                            local_34 = 0;
                                        }
                                    } else {
                                        bVar3 = gameWorld->IsMembers();
                                        uVar13 = bVar3 | 2;
                                        local_34 = 0;
                                    }
                                } else {
                                    bVar3 = gameWorld->IsMembers();
                                    uVar13 = bVar3 | 8;
                                    local_34 = 0;
                                }
                            } else {
                                bVar3 = gameWorld->IsMembers();
                                uVar13 = bVar3 | 4;
                                local_34 = 16711680;
                            }
                        } else {
                            bVar3 = gameWorld->IsMembers();
                            uVar13 = bVar3 | 14;
                            local_34 = 0;
                        }
                    } else {
                        bVar3 = gameWorld->IsMembers();
                        uVar13 = bVar3 | 6;
                        local_34 = 0;
                    }
                    if ((uVar13 == 4294967295) || (iVar4 = m_slBack.end(), iVar4 <= (int)uVar13)) {
                        bVar3 = gameWorld->IsMembers();
                        uVar13 = (unsigned int)bVar3;
                    }
                    if ((((local_4c < (int)local_40) || ((int)local_98 < iVar14)) ||
                         (m_worldSwitcherStructure + (int)local_40 <= local_4c)) ||
                        (bVar2 || DAT_100f8abf4 + iVar14 <= (int)local_98)) {
                        uVar8 = m_slBack[(long)(int)uVar13];
                        pPVar16 = local_48;
                        (**(void (**)(...))(local_48->field_0 + 168))(local_48, uVar8, local_40, iVar14);
                    } else {
                        m_slLastWorld = (int)local_90;
                        uVar8 = m_slBack[(long)(int)uVar13];
                        pPVar16 = local_48;
                        local_50 = (unsigned int)(((uint64_t)((int64_t)(uVar18 >> 8)) << 8) | (uint8_t)1);
                        (**(void (**)(...))(local_48->field_0 + 224))(local_48, uVar8, local_40, iVar14, 128, 16777215);
                    }
                    cVar1 = m_slFlags.empty();
                    if (!cVar1) {
                        bVar3 = gameWorld->IsMembers();
                        uVar8 = m_slFlags[(long)(int)gameWorld->field_80 + (unsigned long)bVar3 * 8];
                        (**(void (**)(...))(pPVar16->field_0 + 184))(pPVar16, uVar8, (int)local_40 + 29, iVar14);
                    }
                    local_c0 = eastl::to_string(*(int*)gameWorld);
                    iVar4 = (int)local_40;
                    jstring::PixfontGeneric::CentreString(pixfontGeneric1, (int)&local_c0, iVar4 + 15,
                                                          DAT_100f8abf4 / 2 + iVar14 + 5, local_34, *4294967295);
                    jstring::PixfontGeneric::CentreString(pixfontGeneric2, (int)&local_80, iVar4 + 60,
                                                          DAT_100f8abf4 / 2 + iVar14 + 5, 268435455, *4294967295);
                    iVar4 = local_9c + 1;
                    if (iVar4 < DAT_100f8abfc) {
                        iVar14 = iVar14 + _DAT_100f8ac04 + DAT_100f8abf4;
                        piVar9 = local_40;
                    } else {
                        iVar14 = reinterpret_cast<const uint64_t*>(&m_worldSwitcherStructure)[4] + 23;
                        piVar9 = (int*)(unsigned long)(unsigned int)((int)local_40 +
                                                                     reinterpret_cast<const uint64_t*>(
                                                                         &m_worldSwitcherStructure)[2] +
                                                                     m_worldSwitcherStructure);
                        local_5c = local_5c + 1;
                        iVar4 = 0;
                    }
                    uVar17 = uVar17 + 1;
                    uVar13 = (int)local_90 + 1;
                } while ((long)uVar17 < (long)GameWorld::m_num);
            }
            pPVar15 = pixfontGeneric2;
            if ((local_50 & 1) != 0) {
                puVar12 = (unique_ptr<GameWorld>*)(*(
                    (Array<std::unique_ptr<GameWorld>>*)&GameWorld::m_list))[(long)m_slLastWorld];
                lVar11 = (*puVar12).operator->();
                iVar6 = pPVar15->StringWid(*((lVar11 + 48)));
                arg3 = iVar6 + 6;
                iVar4 = pPVar15->field_0;
                iVar14 = (int)local_98;
                iVar5 = (iVar14 - iVar4) - 33;
                if (iVar4 + iVar14 + 33 < 481) {
                    iVar5 = iVar14 + 25;
                }
                iVar14 = local_4c - ((iVar6 - (arg3 >> 31)) + 6 >> 1);
                (**(void (**)(...))(pPVar16->field_0 + 32))(pPVar16, iVar14, iVar5, arg3, iVar4 + 8);
                pPVar16->DrawRect(iVar14, iVar5, arg3, iVar4 + 8, 0);
                puVar12 = (unique_ptr<GameWorld>*)(*(
                    (Array<std::unique_ptr<GameWorld>>*)&GameWorld::m_list))[(long)m_slLastWorld];
                iVar4 = (*puVar12).operator->();
                jstring::PixfontGeneric::CentreString(pixfontGeneric2, iVar4 + 48, local_4c,
                                                      iVar5 + pixfontGeneric2.field_0 + 4, 0, *4294967295);
            }
        }
    }

    // 0x100123250
    void TitleScreen::PlotTitle(graphics::Pix2D& pix2D) {
        int iVar2 = m_xOf;
        long lVar3 = m_titleBack.operator->();
        int iVar1 = *(int*)(lVar3 + 24);
        uint64_t uVar4 = *m_titleBack;
        (**(void (**)(...))(pix2D.field_0 + 168))(pix2D, uVar4, (iVar2 - iVar1) + 383, 0);
        uVar4 = *m_titleBack2;
        (**(void (**)(...))(pix2D.field_0 + 168))(pix2D, uVar4, m_xOf + 382, 0);
        uVar4 = *m_logo;
        iVar1 = m_xOf;
        lVar3 = m_logo.operator->();
        (**(void (**)(...))(pix2D.field_0 + 184))(pix2D, uVar4,
                                                  ((iVar1 - *(int*)(lVar3 + 48) / 2) - *(int*)(lVar3 + 60)) + 382,
                                                  89 - *(int*)(lVar3 + 52) / 2);
    }

    // 0x100123350
    auto TitleScreen::GetRenderUsername() {
        auto pCVar2 = Client::Instance();
        if (((DeviceOptions*)pCVar2->field_8376.operator->())->GetHideUserName() == '\0') {
            auto result(m_loginUser);
        } else {
            result = core::stringtools::general::StringTools::MaskPassword(m_loginUser);
        }
        return result;
    }

    // 0x1001233d0
    void TitleScreen::GetRadioButton(bool arg1, bool arg2) {
        unique_ptr<graphics::Pix8>* this;
        uint32_t in_register_00000031;
        uint64_t in_register_00000039;

        unique_ptr<graphics::Pix8>* puVar1 = (unique_ptr<graphics::Pix8>*)&m_optionsRadioButtonYes;
        bool bVar2 = (((uint32_t)in_register_00000031 << 8) | (uint8_t)arg2) != 0;
        if (bVar2) {
            puVar1 = (unique_ptr<graphics::Pix8>*)&m_optionsRadioButtonYesHighlight;
        }
        this = (unique_ptr<graphics::Pix8>*)&m_optionsRadioButtonNone;
        if (bVar2) {
            this = (unique_ptr<graphics::Pix8>*)&m_optionsRadioButtonNoneHighlight;
        }
        if ((int)(((uint64_t)in_register_00000039 << 8) | (uint8_t)arg1) != 0) {
            this = puVar1;
        }
        **this;
    }

    // 0x100123420
    void TitleScreen::RestoreLoginUserFromRememberedUsername() {
        Client* pCVar2;
        ReturnValue local_158;

        if (m_loginUser.size() == 0) {
            pCVar2 = Client::Instance();
            local_158 = ((DeviceOptions*)pCVar2->field_8376.operator->())->GetCachedUserName();
            local_158.empty();
        }
    }

    // 0x100123550
    auto TitleScreen::SetupUserPassInputForm() {
        shared_ptr<ApplicationContext>* shared_ptr;

        auto pCVar1 = Client::Instance();
        shared_ptr = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        long* plVar2 = (long*)(*shared_ptr).operator->();
        shared_ptr<dash3d::GroundDecor>* groundDecor =
            (shared_ptr<dash3d::GroundDecor>*)(**(void (**)(...))(*plVar2 + 80))(plVar2, 0);
        auto result(groundDecor);
        eastl::string* pbVar3 = (eastl::string*)(result).operator->();
        pbVar3->SetText(16295976);
        pbVar3 = (eastl::string*)(result).operator->();
        pbVar3->SetText(16296104);
        return result;
    }

    // 0x100123880
    bool TitleScreen::IsValidChar(char arg1) {
        return m_charList.find(arg1, 0) != -1;
    }

    // 0x1001238a0
    void TitleScreen::OnMuteTitleScreenChanged() {
        auto pCVar2 = Client::Instance();
        auto pDVar3 = pCVar2->field_8376.operator->();
        bool cVar1 = pDVar3->GetMuteTitleScreen();
        int arg1 = 0;
        if (!cVar1) {
            pDVar3 = (DeviceOptions*)pCVar2->field_8376.operator->();
            arg1 = pDVar3->GetTitleVolume();
        }
        midi2::MidiManager::SetVolume(arg1);
    }

    // 0x1001238f0
    void TitleScreen::OnMidiVolumeChanged() {
        Client* pCVar2;

        if (midi2::MidiManager::IsInitialised() != '\0') {
            pCVar2 = Client::Instance();
            midi2::MidiManager::SetVolume(((DeviceOptions*)pCVar2->field_8376.operator->())->GetTitleVolume());
        }
    }

    // 0x100123920
    eastl::string* TitleScreen::LoginScreenToString(int arg1) {
        uint32_t in_register_0000003c;

        new ((eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) eastl::string("");
        return (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x100123960
    void TitleScreen::MoveToAccountAppealScreen() {
        ReturnValue local_20;

        auto pCVar1 = Client::Instance();
        shared_ptr<ApplicationContext>* psVar2 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        ApplicationContext* pAVar3 = (ApplicationContext*)(*psVar2).operator->();
        pAVar3->SendAnalyticsEvent(*((eastl::string*)&auth::AppsFlyerEvent::FORGOT_PASSWORD));
        pCVar1 = Client::Instance();
        psVar2 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        pAVar3 = (ApplicationContext*)(*psVar2).operator->();
        pAVar3->SendAttributionEvent(*((eastl::string*)&auth::AppsFlyerEvent::FORGOT_PASSWORD));
        LoginMes((eastl::string*)&constants::text::account_appeal_login_a,
                 (eastl::string*)&constants::text::account_appeal_login_b,
                 (eastl::string*)&constants::text::account_appeal_login_c);
        m_loginscreen = 5;
        SetupAccountAppealInputForm(&local_20);
        ((InputForm*)local_20.operator->())->ShowKeyboard();
    }

    // 0x100123a30
    void TitleScreen::CalculateWorldSwitcherStructure(WorldSwitcherStructure& worldSwitcherStructure) {
        int iVar1;
        int iVar3;
        int iVar4;
        int iVar5;

        worldSwitcherStructure.field_36 = 1;
        *(uint64_t*)worldSwitcherStructure = 81604378712;
        *(uint64_t*)&worldSwitcherStructure.field_8 = 103079215111;
        int iVar2 = GameWorld::m_num;
        do {
            iVar5 = *(int*)&worldSwitcherStructure.field_8;
            iVar3 = *(int*)&worldSwitcherStructure.field_12;
            iVar1 = iVar5 - 1;
            if (iVar2 <= iVar1 * iVar3) {
                *(int*)&worldSwitcherStructure.field_8 = iVar1;
            }
            iVar1 = *(int*)&worldSwitcherStructure.field_8;
            if (iVar2 <= iVar1 * (iVar3 - 1)) {
                *(int*)&worldSwitcherStructure.field_12 = iVar3 - 1;
            }
            iVar4 = *(int*)&worldSwitcherStructure.field_12 - 1;
            if (iVar2 <= iVar4 * iVar1) {
                *(int*)&worldSwitcherStructure.field_12 = iVar4;
            }
            iVar4 = *(int*)&worldSwitcherStructure.field_12;
        } while ((iVar4 != iVar3) || (iVar1 != iVar5));
        iVar2 = (iVar1 * -88 + 765) / (iVar1 + 1);
        if (4 < iVar2) {
            iVar2 = 5;
        }
        *(int*)&worldSwitcherStructure.field_16 = iVar2;
        iVar3 = (iVar4 * -19 + 480) / (iVar4 + 1);
        iVar5 = 5;
        if (iVar3 < 5) {
            iVar5 = iVar3;
        }
        *(int*)&worldSwitcherStructure.field_20 = iVar5;
        iVar3 = ((1 - iVar1) * iVar2 + iVar1 * -88 + 765) / 2;
        *(int*)&worldSwitcherStructure.field_24 = iVar3;
        *(int*)&worldSwitcherStructure.field_28 = ((iVar2 + 88) * iVar1 - iVar2) + iVar3;
        *(int*)&worldSwitcherStructure.field_32 = ((1 - iVar4) * iVar5 + iVar4 * -19 + 480) / 2;
    }

    // 0x100123bc0
    int TitleScreen::WorldSwitchWorldUnderPointer() {
        int iVar1;
        int iVar5;
        int iVar6;
        int iVar7;

        int iVar2 = m_inputHandler.field_16.GetX();
        int iVar3 = m_inputHandler.field_20.GetX();
        WorldSwitcherStructure local_60;
        CalculateWorldSwitcherStructure(&local_60);
        int iVar4 = m_slStartColumn * local_60._12_4_;
        if (iVar4 < GameWorld::m_num) {
            iVar6 = local_60._24_4_ + m_xOf;
            iVar5 = 0;
            iVar7 = local_60._32_4_ + 23;
            do {
                if ((((iVar6 <= iVar2) && (iVar7 <= iVar3)) && (iVar2 < local_60._0_4_ + iVar6)) &&
                    (iVar3 < local_60._4_4_ + iVar7)) {
                    return iVar4;
                }
                iVar5 = iVar5 + 1;
                if (iVar5 < (int)local_60._12_4_) {
                    iVar1 = 0;
                    iVar7 = iVar7 + local_60._20_4_ + local_60._4_4_;
                } else {
                    iVar5 = 0;
                    iVar1 = local_60._16_4_ + local_60._0_4_;
                    iVar7 = local_60._32_4_ + 23;
                }
                iVar6 = iVar6 + iVar1;
                iVar4 = iVar4 + 1;
            } while (GameWorld::m_num != iVar4);
        }
        return -1;
    }

    // 0x100123cd0
    void TitleScreen::WorldSwitchExit(graphics::Pix2D& pix2D) {
        m_switchScreen = 0;
        PlotTitle((Pix2D*)this);
    }

    // 0x100123db0
    void TitleScreen::DirectLogin() {
        shared_ptr<ApplicationContext>* shared_ptr;

        auto pCVar1 = Client::Instance();
        shared_ptr = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
        ((ApplicationContext*)(*shared_ptr).operator->())->CloseActiveInputForm();
        LoginMes((eastl::string*)&constants::text::connecting1, (eastl::string*)&constants::text::connecting2,
                 (eastl::string*)&constants::text::connecting3);
        bool arg2 = (bool)ShouldRequestTokens();
        PreparePasswordLogin((eastl::string*)&m_loginPass, arg2);
    }

} // namespace jag::oldscape
