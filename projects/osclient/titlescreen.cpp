// projects/osclient/titlescreen.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "titlescreen.h"

namespace jag::oldscape {
    // 0x100d3d7d0, 120 bytes, __const
    TitleScreen::m_clippingSaver = {
        0, 0,           0,          0,          1008,       1009,       1010, 1011,       1012,       0,
        0, 0,           1088421888, 1071877708, 1413754136, 1060708859, 0,    1087373312, 1610612736, 1084514096,
        0, -1063518208, 0,          0,          0,          1,          2,    3,          4,          5,
    };

    // 0x100f36fb0, 4 bytes, __data
    TitleScreen::m_loadPos = 10;

    // 0x100f36fb4, 4 bytes, __data
    TitleScreen::m_loginHelp = 1;

    // 0x100f36fc0, 4 bytes, __data
    TitleScreen::m_loginTotpRememberUser = 1;

    // 0x100f36fe8, 4 bytes, __data
    TitleScreen::m_sy = 171;

    // 0x100f36fec, 4 bytes, __data
    TitleScreen::m_postAction = -1;

    // 0x100f36ff0, 8 bytes, __data
    TitleScreen::m_precacheStartTime = -1;

    // 0x100f36ff8, 8 bytes, __data
    TitleScreen::m_precacheCompleteTime = -1;

    // 0x100f37000, 4 bytes, __data
    TitleScreen::m_lastVisibleAppHeight = -1;

    // 0x100f37004, 4 bytes, __data
    TitleScreen::m_lastVisibleAppHeightChangeTic = -1;

    // 0x100f37008, 4 bytes, __data
    TitleScreen::m_steamLinkHint = 1;

    // 0x100f37010, 8 bytes, __data
    TitleScreen::m_pendingTransactionLoginDelayStart = -1;

    // 0x100f37018, 8 bytes, __data
    TitleScreen::m_initialOpenAnimFinishTime = -1;

    // 0x100f37020, 8 bytes, __data
    TitleScreen::m_initialOpenAnimStartTime = -1;

    // 0x100f37028, 4 bytes, __data
    TitleScreen::m_slLastWorld = -1;

    // 0x100f37030, 16 bytes, __data
    TitleScreen::m_initialOpenAnim = {15679664, 1, 0, 0};

    // 0x100f37138, 32 bytes, __data; set at startup by ___cxx_global_var_init.102
    eastl::vector<eastl::string, eastl::allocator> TitleScreen::m_spriteNamesInBinary;

    // 0x100f37160, 32 bytes, __data; set at startup by ___cxx_global_var_init.104
    eastl::vector<eastl::string, eastl::allocator> TitleScreen::m_spriteNames;

    // 0x100f37188, 32 bytes, __data; set at startup by ___cxx_global_var_init.126
    eastl::vector<eastl::string, eastl::allocator> TitleScreen::m_spriteNamesOptional;

    // 0x100f8a7a8, 32 bytes, __common; set at startup by ___cxx_global_var_init.494
    eastl::string TitleScreen::m_loadString = "";

    // 0x100f8a7c8, 8 bytes, __common; zero-initialised
    TitleScreen::m_loginscreen;

    // 0x100f8a818, 4 bytes, __common; zero-initialised
    TitleScreen::m_dobSubmitted;

    // 0x100f8a81c, 4 bytes, __common; zero-initialised
    TitleScreen::m_dobInput;

    // 0x100f8a820, 8 bytes, __common; zero-initialised
    TitleScreen::m_loginTotpPin;

    // 0x100f8a828, 32 bytes, __common; set at startup by ___cxx_global_var_init.498
    eastl::string TitleScreen::m_loginUser = "";

    // 0x100f8a848, 32 bytes, __common; set at startup by ___cxx_global_var_init.501
    eastl::string TitleScreen::m_lastLoginUser = "";

    // 0x100f8a868, 32 bytes, __common; set at startup by ___cxx_global_var_init.500
    eastl::string TitleScreen::m_displayName = "";

    // 0x100f8a888, 32 bytes, __common; set at startup by ___cxx_global_var_init.502
    eastl::string TitleScreen::m_lastDisplayName = "";

    // 0x100f8a8a8, 32 bytes, __common; set at startup by ___cxx_global_var_init.499
    eastl::string TitleScreen::m_loginPass = "";

    // 0x100f8a8f0, 1 bytes, __common; zero-initialised
    TitleScreen::m_open;

    // 0x100f8a8f1, 7 bytes, __common; zero-initialised
    TitleScreen::m_backgroundMode;

    // 0x100f8a8f8, 16 bytes, __common; set at startup by ___cxx_global_var_init.518
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_titleBack;

    // 0x100f8a908, 40 bytes, __common; set at startup by ___cxx_global_var_init.557
    TitlescreenInputHandler TitleScreen::m_inputHandler = TitlescreenInputHandler();

    // 0x100f8a930, 1 bytes, __common; zero-initialised
    TitleScreen::m_loadingFlamesTriggerSent;

    // 0x100f8a931, 7 bytes, __common; zero-initialised
    TitleScreen::m_errorTriggerSent;

    // 0x100f8a938, 16 bytes, __common; set at startup by ___cxx_global_var_init.519
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_titleBack2;

    // 0x100f8a948, 8 bytes, __common; zero-initialised
    TitleScreen::m_titleBoxHeight;

    // 0x100f8a950, 24 bytes, __common; set at startup by ___cxx_global_var_init.517
    Array<graphics::Pix8, eastl::allocator> TitleScreen::m_loginIcon = Array<graphics::Pix8, eastl::allocator>();

    // 0x100f8a968, 24 bytes, __common; set at startup by ___cxx_global_var_init.522
    Array<graphics::Pix8, eastl::allocator> TitleScreen::m_titleMute = Array<graphics::Pix8, eastl::allocator>();

    // 0x100f8a980, 4 bytes, __common; zero-initialised
    TitleScreen::m_loginCheckboxWidth;

    // 0x100f8a984, 4 bytes, __common; zero-initialised
    TitleScreen::m_loginCheckboxHeight;

    // 0x100f8a988, 4 bytes, __common; zero-initialised
    TitleScreen::m_defaultWorldCheckboxWidth;

    // 0x100f8a98c, 4 bytes, __common; zero-initialised
    TitleScreen::m_defaultWorldCheckboxHeight;

    // 0x100f8a990, 24 bytes, __common; set at startup by ___cxx_global_var_init.503
    Array<eastl::string, eastl::allocator> TitleScreen::m_dobCharacters = Array<eastl::string, eastl::allocator>(8);

    // 0x100f8a9a8, 8 bytes, __common; zero-initialised
    TitleScreen::m_currentDobCharacter;

    // 0x100f8a9b0, 32 bytes, __common; set at startup by ___cxx_global_var_init.504
    eastl::string TitleScreen::m_loginTotpPinString = "";

    // 0x100f8a9d0, 4 bytes, __common; zero-initialised
    TitleScreen::m_switchScreen;

    // 0x100f8a9d4, 4 bytes, __common; set at startup by ___cxx_global_var_init.533
    TitleScreen::m_targetSY = TitleScreen::m_sy;

    // 0x100f8a9d8, 4 bytes, __common; set at startup by ___cxx_global_var_init.532
    TitleScreen::m_preciseSY = (float)TitleScreen::m_sy;

    // 0x100f8a9dc, 4 bytes, __common; zero-initialised
    TitleScreen::m_xOf;

    // 0x100f8a9e0, 4 bytes, __common; set at startup by ___cxx_global_var_init.534
    TitleScreen::m_sXOf = TitleScreen::m_xOf + 202;

    // 0x100f8a9e4, 4 bytes, __common; zero-initialised
    TitleScreen::m_sXOfCentre;

    // 0x100f8a9e8, 24 bytes, __common; set at startup by ___cxx_global_var_init.523
    Array<graphics::Pix8, eastl::allocator> TitleScreen::m_volumeOptionsBobbleSlider =
        Array<graphics::Pix8, eastl::allocator>();

    // 0x100f8aa00, 24 bytes, __common; set at startup by ___cxx_global_var_init.546
    Array<graphics::Pix32, eastl::allocator> TitleScreen::m_slBack = Array<graphics::Pix32, eastl::allocator>();

    // 0x100f8aa18, 24 bytes, __common; set at startup by ___cxx_global_var_init.547
    Array<graphics::Pix8, eastl::allocator> TitleScreen::m_slFlags = Array<graphics::Pix8, eastl::allocator>();

    // 0x100f8aa30, 24 bytes, __common; set at startup by ___cxx_global_var_init.548
    Array<graphics::Pix8, eastl::allocator> TitleScreen::m_slArrows = Array<graphics::Pix8, eastl::allocator>();

    // 0x100f8aa48, 24 bytes, __common; set at startup by ___cxx_global_var_init.549
    Array<graphics::Pix8, eastl::allocator> TitleScreen::m_slStars = Array<graphics::Pix8, eastl::allocator>();

    // 0x100f8aa60, 4 bytes, __common; zero-initialised
    TitleScreen::m_worldWarningAccepted;

    // 0x100f8aa64, 4 bytes, __common; zero-initialised
    TitleScreen::m_loginSelect;

    // 0x100f8aa68, 32 bytes, __common; set at startup by ___cxx_global_var_init.544
    eastl::string TitleScreen::m_pinCharList = "1234567890";

    // 0x100f8aa88, 1 bytes, __common; zero-initialised
    TitleScreen::m_defaultWorldCheckboxHighlighted;

    // 0x100f8aa89, 1 bytes, __common; zero-initialised
    TitleScreen::m_defaultWorldCheckboxTicked;

    // 0x100f8aa8a, 1 bytes, __common; zero-initialised
    TitleScreen::m_toggleFullscreenCheckboxHighlighted;

    // 0x100f8aa8b, 1 bytes, __common; zero-initialised
    TitleScreen::m_toggleFullscreenCheckboxTicked;

    // 0x100f8aa8c, 16 bytes, __common; set at startup by ___cxx_global_var_init.558
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_termsAndConditionsLinkDimensions;

    // 0x100f8aa9c, 16 bytes, __common; set at startup by ___cxx_global_var_init.559
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_privacyPolicyLinkDimensions;

    // 0x100f8aaac, 16 bytes, __common; set at startup by ___cxx_global_var_init.560
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_softwareLicenceLinkDimensionsMobile;

    // 0x100f8aabc, 16 bytes, __common; set at startup by ___cxx_global_var_init.539
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_steamLinkYesBtn;

    // 0x100f8aacc, 16 bytes, __common; set at startup by ___cxx_global_var_init.540
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_steamLinkNoBtn;

    // 0x100f8aadc, 4 bytes, __common; zero-initialised
    TitleScreen::m_previousLoginFlow;

    // 0x100f8aae0, 4 bytes, __common; zero-initialised
    TitleScreen::m_loginDimsInit;

    // 0x100f8aae4, 16 bytes, __common; set at startup by ___cxx_global_var_init.496
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_loginHelpTextDimensions;

    // 0x100f8aaf4, 1 bytes, __common; zero-initialised
    TitleScreen::m_loginRememberUserCheckboxHighlighted;

    // 0x100f8aaf5, 3 bytes, __common; zero-initialised
    TitleScreen::m_loginHideUserCheckboxHighlighted;

    // 0x100f8aaf8, 16 bytes, __common; set at startup by ___cxx_global_var_init.497
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> TitleScreen::m_cantLoginOtherTextDimensions;

    // 0x100f8ab08, 8 bytes, __common; zero-initialised
    TitleScreen::m_currentSupportReason;

    // 0x100f8ab10, 8 bytes, __common; zero-initialised
    TitleScreen::m_lastJagexWebFlowRequest;

    // 0x100f8ab18, 24 bytes, __common; set at startup by ___cxx_global_var_init.541
    Array<jag::math::Rect<int>, eastl::allocator> TitleScreen::m_volumeSliderPositions =
        Array<jag::math::Rect<int>, eastl::allocator>();

    // 0x100f8ab30, 32 bytes, __common; set at startup by ___cxx_global_var_init.536
    eastl::string TitleScreen::m_loginMes1 = "";

    // 0x100f8ab50, 32 bytes, __common; set at startup by ___cxx_global_var_init.537
    eastl::string TitleScreen::m_loginMes2 = "";

    // 0x100f8ab70, 32 bytes, __common; set at startup by ___cxx_global_var_init.538
    eastl::string TitleScreen::m_loginMes3 = "";

    // 0x100f8ab90, 32 bytes, __common; set at startup by ___cxx_global_var_init.535
    eastl::string TitleScreen::m_loginTitle = "";

    // 0x100f8abb0, 32 bytes, __common; set at startup by ___cxx_global_var_init.495
    eastl::string TitleScreen::m_loginHelpText = "";

    // 0x100f8abd0, 32 bytes, __common; set at startup by ___cxx_global_var_init.542
    eastl::string TitleScreen::m_charList = eastl::string(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100dab3f1);

    // 0x100f8abf0, 40 bytes, __common; set at startup by ___cxx_global_var_init.556
    WorldSwitcherStructure TitleScreen::m_worldSwitcherStructure = WorldSwitcherStructure();

    // 0x100f8ac18, 4 bytes, __common; zero-initialised
    TitleScreen::m_slMaxScroll;

    // 0x100f8ac1c, 4 bytes, __common; zero-initialised
    TitleScreen::m_slStartColumn;

    // 0x100f8ac20, 8 bytes, __common; zero-initialised
    TitleScreen::m_titleFlames;

    // 0x100f8ac28, 8 bytes, __common; zero-initialised
    TitleScreen::m_loading;

    // 0x100f8ac30, 8 bytes, __common; zero-initialised
    TitleScreen::m_titleBox;

    // 0x100f8ac38, 8 bytes, __common; zero-initialised
    TitleScreen::m_titleBut;

    // 0x100f8ac40, 8 bytes, __common; zero-initialised
    TitleScreen::m_titleButLarge;

    // 0x100f8ac48, 8 bytes, __common; zero-initialised
    TitleScreen::m_textPlayNow;

    // 0x100f8ac50, 8 bytes, __common; zero-initialised
    TitleScreen::m_titleButWide;

    // 0x100f8ac58, 8 bytes, __common; zero-initialised
    TitleScreen::m_logo;

    // 0x100f8ac60, 8 bytes, __common; zero-initialised
    TitleScreen::m_optionsRadioButtonNone;

    // 0x100f8ac68, 8 bytes, __common; zero-initialised
    TitleScreen::m_optionsRadioButtonNoneHighlight;

    // 0x100f8ac70, 8 bytes, __common; zero-initialised
    TitleScreen::m_optionsRadioButtonYes;

    // 0x100f8ac78, 8 bytes, __common; zero-initialised
    TitleScreen::m_optionsRadioButtonYesHighlight;

    // 0x100f8ac80, 8 bytes, __common; zero-initialised
    TitleScreen::m_slButton;

    // 0x100f8ac88, 8 bytes, __common; zero-initialised
    TitleScreen::m_slLeftArrow;

    // 0x100f8ac90, 8 bytes, __common; zero-initialised
    TitleScreen::m_slRightArrow;

    // 0x100f8ac98, 8 bytes, __common; zero-initialised
    TitleScreen::m_verbose;

    // 0x1000596e0, 256 bytes, placed by the data it initialises
    // ___cxx_global_var_init.102
    void ___cxx_global_var_init_102() {
        allocator local_48[8];
        allocator local_40[8];
        eastl::string local_38[32];
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (*PTR_m_spriteNamesInBinary_100ee4950 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNamesInBinary_100ee4950) != 0) {
                eastl::allocator::allocator(local_48, "EASTL basic_string");
                eastl::string::basic_string(local_38, "titlewide.png", local_48);
                eastl::allocator::allocator(local_40, "EASTL vector");
                eastl::vector<eastl::string, eastl::allocator>::vector(PTR_m_spriteNamesInBinary_100ee6aa0, local_38, 1,
                                                                       local_40);
                eastl::string::~basic_string(local_38);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNamesInBinary_100ee6aa0, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNamesInBinary_100ee4950);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000597e0, 1568 bytes, placed by the data it initialises
    // ___cxx_global_var_init.104
    void ___cxx_global_var_init_104() {
        long lVar2;
        allocator local_378[8];
        allocator local_370[8];
        allocator local_368[8];
        allocator local_360[8];
        allocator local_358[8];
        allocator local_350[8];
        allocator local_348[8];
        allocator local_340[8];
        allocator local_338[8];
        allocator local_330[8];
        allocator local_328[8];
        allocator local_320[8];
        allocator local_318[8];
        allocator local_310[8];
        allocator local_308[8];
        allocator local_300[8];
        allocator local_2f8[8];
        allocator local_2f0[8];
        allocator local_2e8[8];
        allocator local_2e0[8];
        allocator local_2d8[8];
        allocator local_2d0[8];
        eastl::string local_2c8[32];
        eastl::string local_2a8[32];
        eastl::string local_288[32];
        eastl::string local_268[32];
        eastl::string local_248[32];
        eastl::string local_228[32];
        eastl::string local_208[32];
        eastl::string local_1e8[32];
        eastl::string local_1c8[32];
        eastl::string local_1a8[32];
        eastl::string local_188[32];
        eastl::string local_168[32];
        eastl::string local_148[32];
        eastl::string local_128[32];
        eastl::string local_108[32];
        eastl::string local_e8[32];
        eastl::string local_c8[32];
        eastl::string local_a8[32];
        eastl::string local_88[32];
        eastl::string local_68[32];
        eastl::string local_48[32];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (*PTR_m_spriteNames_100ee4948 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNames_100ee4948) != 0) {
                eastl::allocator::allocator(local_378, "EASTL basic_string");
                eastl::string::basic_string(local_2c8, "logo_osrs", local_378);
                eastl::allocator::allocator(local_370, "EASTL basic_string");
                eastl::string::basic_string(local_2a8, "logo_deadman_mode", local_370);
                eastl::allocator::allocator(local_368, "EASTL basic_string");
                eastl::string::basic_string(local_288, "logo_seasonal_mode", local_368);
                eastl::allocator::allocator(local_360, "EASTL basic_string");
                eastl::string::basic_string(local_268, "titlebox", local_360);
                eastl::allocator::allocator(local_358, "EASTL basic_string");
                eastl::string::basic_string(local_248, "titlebutton", local_358);
                eastl::allocator::allocator(local_350, "EASTL basic_string");
                eastl::string::basic_string(local_228, "titlebutton_large", local_350);
                eastl::allocator::allocator(local_348, "EASTL basic_string");
                eastl::string::basic_string(local_208, "play_now_text", local_348);
                eastl::allocator::allocator(local_340, "EASTL basic_string");
                eastl::string::basic_string(local_1e8, "titlebutton_wide42,1", local_340);
                eastl::allocator::allocator(local_338, "EASTL basic_string");
                eastl::string::basic_string(local_1c8, "runes", local_338);
                eastl::allocator::allocator(local_330, "EASTL basic_string");
                eastl::string::basic_string(local_1a8, "title_mute", local_330);
                eastl::allocator::allocator(local_328, "EASTL basic_string");
                eastl::string::basic_string(local_188, "volume_options_bobble_slider", local_328);
                eastl::allocator::allocator(local_320, "EASTL basic_string");
                eastl::string::basic_string(local_168, "options_radio_buttons,0", local_320);
                eastl::allocator::allocator(local_318, "EASTL basic_string");
                eastl::string::basic_string(local_148, "options_radio_buttons,2", local_318);
                eastl::allocator::allocator(local_310, "EASTL basic_string");
                eastl::string::basic_string(local_128, "options_radio_buttons,4", local_310);
                eastl::allocator::allocator(local_308, "EASTL basic_string");
                eastl::string::basic_string(local_108, "options_radio_buttons,6", local_308);
                eastl::allocator::allocator(local_300, "EASTL basic_string");
                eastl::string::basic_string(local_e8, "login_icons", local_300);
                eastl::allocator::allocator(local_2f8, "EASTL basic_string");
                eastl::string::basic_string(local_c8, "sl_back", local_2f8);
                eastl::allocator::allocator(local_2f0, "EASTL basic_string");
                eastl::string::basic_string(local_a8, "sl_flags", local_2f0);
                eastl::allocator::allocator(local_2e8, "EASTL basic_string");
                eastl::string::basic_string(local_88, "sl_arrows", local_2e8);
                eastl::allocator::allocator(local_2e0, "EASTL basic_string");
                eastl::string::basic_string(local_68, "sl_stars", local_2e0);
                eastl::allocator::allocator(local_2d8, "EASTL basic_string");
                eastl::string::basic_string(local_48, "sl_button", local_2d8);
                eastl::allocator::allocator(local_2d0, "EASTL vector");
                eastl::vector<eastl::string, eastl::allocator>::vector(PTR_m_spriteNames_100ee6a98, local_2c8, 21,
                                                                       local_2d0);
                lVar2 = 640;
                do {
                    eastl::string::~basic_string(local_2c8 + lVar2);
                    lVar2 = lVar2 + -32;
                } while (lVar2 != -32);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNames_100ee6a98, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNames_100ee4948);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100059e00, 256 bytes, placed by the data it initialises
    // ___cxx_global_var_init.126
    void ___cxx_global_var_init_126() {
        allocator local_48[8];
        allocator local_40[8];
        eastl::string local_38[32];
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (*PTR_m_spriteNamesOptional_100ee4958 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNamesOptional_100ee4958) != 0) {
                eastl::allocator::allocator(local_48, "EASTL basic_string");
                eastl::string::basic_string(local_38, "logo_speedrunning", local_48);
                eastl::allocator::allocator(local_40, "EASTL vector");
                eastl::vector<eastl::string, eastl::allocator>::vector(PTR_m_spriteNamesOptional_100ee6aa8, local_38, 1,
                                                                       local_40);
                eastl::string::~basic_string(local_38);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNamesOptional_100ee6aa8, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNamesOptional_100ee4958);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000bf410, 512 bytes, placed by class name and debug map
    // TitleScreen::DeleteCharacter()
    void TitleScreen::DeleteCharacter() {
        long lVar2;
        eastl::string* this;
        basic_string local_38[32];

        switch (m_loginscreen) {
        case 2:
            if (m_loginSelect == 1) {
                lVar2 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                if (lVar2 == 0) {
                    return;
                }
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                eastl::string::substr((ulong)local_38, 4311263400);
                eastl::string::operator=((eastl::string*)&m_loginPass, local_38);
            } else {
                if (m_loginSelect != 0) {
                    return;
                }
                lVar2 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                if (lVar2 == 0) {
                    return;
                }
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                eastl::string::substr((ulong)local_38, 4311263272);
                eastl::string::operator=((eastl::string*)&m_loginUser, local_38);
            }
            break;
        default:
            goto switchD_1000bf43b_caseD_3;
        case 4:
            lVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar2 == 0) {
                return;
            }
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::string::substr((ulong)local_38, 4311263664);
            eastl::string::operator=((eastl::string*)&m_loginTotpPinString, local_38);
            break;
        case 5:
            lVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar2 == 0) {
                return;
            }
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::string::substr((ulong)local_38, 4311263272);
            eastl::string::operator=((eastl::string*)&m_loginUser, local_38);
            break;
        case 7:
            Array<eastl::string, eastl::allocator>::operator[](
                (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, (long)m_currentDobCharacter);
            if ((eastl::basic_string<
                     char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() !=
                 '\0') &&
                (0 < m_currentDobCharacter)) {
                m_currentDobCharacter = m_currentDobCharacter + -1;
            }
            this = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
                (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, (long)m_currentDobCharacter);
            eastl::string::operator=(this, (basic_string*)&eastl::EMPTY_STRING);
            goto switchD_1000bf43b_caseD_3;
        }
        local_38->~basic_string();
    switchD_1000bf43b_caseD_3:
    }

    // 0x1000bf760, 352 bytes, placed by class name and debug map
    // TitleScreen::TypeCharacter(char16_t)
    void TitleScreen::TypeCharacter(wchar16 param_1) {
        char cVar1;
        char* pcVar3;
        ulong uVar4;
        ulong uVar5;
        basic_string local_48[32];

        if (m_loginscreen == 2) {
            if (m_loginSelect == 1) {
                cVar1 = core::stringtools::general::CP1252Tools::IsPrintableCP1252Char(param_1);
                if (cVar1 == '\0') {
                    return;
                }
                uVar5 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                if (uVar5 < 20) {
                    m_loginPass.push_back((char)param_1);
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
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() == 0) {
                return;
            }
            uVar5 = 0;
            do {
                pcVar3 = (char*)m_pinCharList.at(uVar5);
                if ((uint)(ushort)param_1 == (int)*pcVar3) {
                    uVar5 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    if (uVar5 < 6) {
                        eastl::operator+((eastl*)local_48, &m_loginTotpPinString, (int)(char)param_1);
                        eastl::string::operator=((eastl::string*)&m_loginTotpPinString, local_48);
                        local_48->~basic_string();
                        return;
                    }
                    return;
                }
                uVar5 = uVar5 + 1;
                uVar4 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            } while (uVar5 < uVar4);
            return;
        }
        cVar1 = IsValidUsernameChar(param_1);
        if ((cVar1 != '\0') &&
            (uVar5 = eastl::basic_string<
                 char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size(),
             uVar5 < 320)) {
            m_loginUser.push_back((char)param_1);
        }
    }

    // 0x1000bfb20, 32 bytes, placed by class name and debug map
    // TitleScreen::SetLoginSelect(int)
    void TitleScreen::SetLoginSelect(int param_1) {
        if (m_loginscreen == 2) {
            m_loginSelect = param_1;
        }
    }

    // 0x1000c9600, 14592 bytes, placed by class name
    // TitleScreen::Loop(javapal::GameShell&, graphics::Pix2D&, jstring::PixfontGeneric&, jstring::PixfontGeneric&)
    void TitleScreen::Loop(GameShell* param_1, Pix2D* param_2, PixfontGeneric* param_3, PixfontGeneric* param_4) {
        int iVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        int iVar7;
        undefined4 uVar8;
        undefined8 uVar9;
        Client* this;
        shared_ptr<ApplicationContext>* psVar10;
        GameShell* pGVar11;
        GameShell* pGVar12;
        long lVar13;
        long* plVar14;
        Client* pCVar15;
        int* piVar16;
        LoginManager* pLVar17;
        undefined8* puVar18;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar19;
        shared_ptr* psVar20;
        InputForm* pIVar21;
        GameToken* this_00;
        type* ptVar22;
        TitleScreen* pTVar23;
        DeviceOptions* pDVar24;
        vector* pvVar25;
        eastl::string* pbVar26;
        ApplicationContext* pAVar27;
        LoginManager* this_01;
        GraphicsApp* pGVar28;
        byte bVar29;
        int iVar30;
        basic_string* pbVar31;
        undefined1* puVar32;
        int iVar33;
        Pix2D* pPVar34;
        basic_string* pbVar35;
        GameWorld* this_02;
        Client* this_03;
        basic_string* pbVar36;
        bool bVar37;
        float fVar38;
        undefined1 auVar39[16];
        eastl::string local_268[32];
        eastl::string local_248[32];
        eastl::string local_228[32];
        eastl::string local_208[32];
        PixfontGeneric* local_1e8;
        PixfontGeneric* local_1e0;
        Client* local_1d8;
        allocator local_1d0[16];
        eastl::string local_1c0[32];
        TitleScreen local_1a0[2];
        byte local_180;
        byte local_17f;
        char local_17e;
        char local_17d;
        byte local_17c;
        char local_17b;
        byte local_17a;
        byte local_179;
        TitleScreen* local_178;
        int local_170;
        byte local_169;
        uint local_168;
        byte local_161;
        AuthLibWrapper local_160;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pPVar34 = param_2;
        if ((m_backgroundMode != '\0') && (traceBackgroundModeLoginFlow != '\0')) {
            uVar9 = logger::default_logger();
            pPVar34 = (Pix2D*)&DAT_00000001;
            logger::Logger::Log(
                uVar9, 1, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/titlescreen.cpp",
                454, "Using the TitleScreen in background mode to perform a logout transfer");
        }
        this = (Client*)Client::Instance();
        psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
        pGVar11 = (GameShell*)shared_ptr<ApplicationContext>::operator->(psVar10);
        pGVar12 = (GameShell*)(**(code**)(*(long*)pGVar11 + 72))();
        if (pGVar12 != (GameShell*)0) {
            pGVar11 = pGVar12;
            (**(code**)(*(long*)pGVar12 + 504))();
        }
        if (m_switchScreen != '\0') {
            WorldSwitchLoop(pGVar11, param_2);
            goto switchD_1000cad29_caseD_10;
        }
        local_1e8 = param_4;
        local_1e0 = param_3;
        local_170 = DAT_100f8a918.GetX();
        local_168 = DAT_100f8a91c.GetX();
        bVar37 = m_backgroundMode == '\0';
        local_17e = !bVar37;
        bVar29 = DAT_100f8a920 & bVar37;
        local_169 = DAT_100f8a921 & bVar37;
        local_180 = DAT_100f8a922 & bVar37;
        local_178 = (TitleScreen*)CONCAT71(local_178._1_7_, DAT_100f8a923 & bVar37);
        local_179 = DAT_100f8a924 & bVar37;
        local_17b = DAT_100f8a927;
        local_17f = DAT_100f8a927 != -1;
        local_17d = (DAT_100f8a928 & 1) == 0;
        local_17c = DAT_100f8a929;
        local_17a = DAT_100f8a92a;
        this_02 = (GameWorld*)&m_inputHandler;
        m_inputHandler.ResetInteractionState();
        if (field_8448 == 5) {
            if (bVar29 != 0) {
                HandleAudioButtons(local_170, local_168);
            }
            goto switchD_1000cad29_caseD_10;
        }
        if (m_precacheStartTime == -1) {
            lVar13 = this_02->CurrentTimeMillis();
            m_precacheStartTime = lVar13 + 1000;
        }
        local_161 = bVar29;
        lVar13 = this_02->CurrentTimeMillis();
        iVar30 = local_170;
        iVar33 = (int)pPVar34;
        if (m_precacheCompleteTime == 0) {
            m_precacheCompleteTime = lVar13;
            if (m_precacheStartTime < lVar13) {
                m_precacheStartTime = lVar13;
            }
        }
        if ((45 < (ulong)field_8448) || ((35184372091904U >> ((ulong)field_8448 & 63) & 1) == 0))
            goto switchD_1000cad29_caseD_10;
        if (field_8432 == (Language*)Language::EN) {
            if (local_161 == 0)
                goto LAB_1000cc119;
            local_1d8 = this;
            lVar13 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)&m_titleBack);
            pTVar23 = (TitleScreen*)(lVar13 + 28);
            Client::Instance();
            local_160.GetUISafeArea();
            local_1a0[0]._0_4_ = local_160.GetLevel();
            piVar16 = std::min<int>((int*)pTVar23, (int*)local_1a0);
            this = local_1d8;
            iVar33 = *piVar16;
            if ((((m_xOf + 20 <= iVar30) && (local_170 <= m_xOf + 120)) && (iVar33 + -55 <= (int)local_168)) &&
                ((int)local_168 <= iVar33 + -20)) {
                WorldSwitchEnter(pTVar23);
                goto switchD_1000cad29_caseD_10;
            }
            iVar30 = m_sXOfCentre + -270;
            if (local_170 < iVar30) {
                m_defaultWorldCheckboxHighlighted = false;
            } else {
                m_defaultWorldCheckboxHighlighted = false;
                if ((local_170 < m_defaultWorldCheckboxWidth + iVar30) && (iVar33 + -82 <= (int)local_168)) {
                    m_defaultWorldCheckboxHighlighted = (int)local_168 < iVar33 + -82 + m_defaultWorldCheckboxHeight;
                }
            }
            if ((bool)m_defaultWorldCheckboxHighlighted != false) {
                m_defaultWorldCheckboxTicked = m_defaultWorldCheckboxTicked ^ 1;
                SaveDefaultWorld(pTVar23);
            }
            if (field_8425 == false) {
                if (local_170 < iVar30) {
                    m_toggleFullscreenCheckboxHighlighted = false;
                } else {
                    m_toggleFullscreenCheckboxHighlighted = false;
                    if ((local_170 < iVar30 + m_defaultWorldCheckboxWidth) && (iVar33 + -107 <= (int)local_168)) {
                        m_toggleFullscreenCheckboxHighlighted =
                            (int)local_168 < iVar33 + -107 + m_defaultWorldCheckboxHeight;
                    }
                }
                if ((bool)m_toggleFullscreenCheckboxHighlighted != false) {
                    m_toggleFullscreenCheckboxTicked = m_toggleFullscreenCheckboxTicked ^ 1;
                    pDVar24 =
                        (DeviceOptions*)std::unique_ptr<option::DeviceOptions,
                                                        std::default_delete<option::DeviceOptions>>::
                        operator->((
                            unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
                    pDVar24->ToggleFullscreen();
                }
            }
            pPVar34 = (Pix2D*)(ulong)local_168;
            cVar3 = HandleAudioButtons(local_170, local_168);
            if (cVar3 != '\0')
                goto switchD_1000cad29_caseD_10;
            this_02 = (GameWorld*)&m_termsAndConditionsLinkDimensions;
            piVar16 = (int*)m_termsAndConditionsLinkDimensions.y();
            iVar30 = local_170;
            if (*piVar16 + -30 <= (int)local_168) {
                piVar16 = (int*)m_termsAndConditionsLinkDimensions.y();
                iVar30 = local_170;
                iVar33 = *piVar16;
                this_02 = (GameWorld*)&m_termsAndConditionsLinkDimensions;
                piVar16 = (int*)m_termsAndConditionsLinkDimensions.qw();
                if ((int)local_168 <= *piVar16 + iVar33 + 30) {
                    pvVar25 = m_termsAndConditionsLinkDimensions.SSOBeginPtr(pPVar34);
                    if (iVar30 < *(int*)pvVar25) {
                    LAB_1000caee0:
                        this_02 = (GameWorld*)&m_privacyPolicyLinkDimensions;
                        pvVar25 = m_privacyPolicyLinkDimensions.SSOBeginPtr(pPVar34);
                        if (*(int*)pvVar25 <= iVar30) {
                            pvVar25 = m_privacyPolicyLinkDimensions.SSOBeginPtr(pPVar34);
                            iVar30 = local_170;
                            iVar33 = *(int*)pvVar25;
                            this_02 = (GameWorld*)&m_privacyPolicyLinkDimensions;
                            piVar16 = (int*)m_privacyPolicyLinkDimensions.second();
                            if (iVar30 <= iVar33 + *piVar16) {
                                this_02 = (GameWorld*)&constants::text::privacyPolicyUrl;
                                goto LAB_1000cc10f;
                            }
                        }
                        lVar13 = Client::Instance();
                        if (*(char*)(lVar13 + 8425) != '\0') {
                            this_02 = (GameWorld*)&m_softwareLicenceLinkDimensionsMobile;
                            pvVar25 = m_softwareLicenceLinkDimensionsMobile.SSOBeginPtr(pPVar34);
                            if (*(int*)pvVar25 <= iVar30) {
                                pvVar25 = m_softwareLicenceLinkDimensionsMobile.SSOBeginPtr(pPVar34);
                                iVar30 = local_170;
                                iVar33 = *(int*)pvVar25;
                                this_02 = (GameWorld*)&m_softwareLicenceLinkDimensionsMobile;
                                piVar16 = (int*)m_softwareLicenceLinkDimensionsMobile.second();
                                if (iVar30 <= iVar33 + *piVar16) {
                                    this_02 = (GameWorld*)&constants::text::eulaUrl;
                                    goto LAB_1000cc10f;
                                }
                            }
                        }
                    } else {
                        pvVar25 = m_termsAndConditionsLinkDimensions.SSOBeginPtr(pPVar34);
                        iVar30 = local_170;
                        iVar33 = *(int*)pvVar25;
                        piVar16 = (int*)m_termsAndConditionsLinkDimensions.second();
                        if (iVar33 + *piVar16 < iVar30)
                            goto LAB_1000caee0;
                        this_02 = (GameWorld*)&constants::text::termsAndConditionsUrl;
                    LAB_1000cc10f:
                        pPVar34 = (Pix2D*)&DAT_00000001;
                        Web::OpenURL((basic_string*)this_02, true);
                    }
                }
            }
        LAB_1000cc119:
            iVar33 = (int)pPVar34;
            cVar3 = this_02->HasWorldListDownloadStarted();
            if (cVar3 != '\0') {
                WorldSwitchEnter((TitleScreen*)this_02);
            }
        }
        this_03 = this;
        iVar4 = GetOSVersion();
        iVar5 = m_sXOfCentre;
        if (iVar4 != m_lastVisibleAppHeight) {
            m_lastVisibleAppHeightChangeTic = field_8488;
            m_lastVisibleAppHeight = iVar4;
        }
        if (((m_lastVisibleAppHeightChangeTic + 8 <= field_8488) && (m_targetSY = 171, m_lastVisibleAppHeight != -1)) &&
            (iVar33 = m_titleBoxHeight + 171, iVar4 < iVar33)) {
            m_targetSY = (iVar4 - m_titleBoxHeight) / 2;
            if (m_targetSY < 0) {
                m_targetSY = 0;
            }
        }
        if (m_targetSY - m_sy != 0) {
            fVar38 = ((float)m_targetSY - m_preciseSY) * 0.25;
            m_preciseSY = (float)(~-(uint)(-0.5 < fVar38) & (uint)fVar38 |
                                  (~-(uint)(fVar38 < 0.5) & (uint)fVar38 |
                                   (uint)(float)(m_targetSY - m_sy) & -(uint)(fVar38 < 0.5)) &
                                      -(uint)(-0.5 < fVar38)) +
                          m_preciseSY;
            m_sy = (int)m_preciseSY;
        }
        if (local_161 != 0) {
            this_03 = (Client*)&m_titleBox;
            lVar13 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBox);
            iVar4 = *(int*)(lVar13 + 48) / 2;
            if (((iVar30 < iVar5 - iVar4) || (iVar4 + iVar5 < iVar30)) ||
                (((int)local_168 < m_sy || (m_sy + *(int*)(lVar13 + 52) < (int)local_168)))) {
                psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                this_03 = (Client*)shared_ptr<ApplicationContext>::operator->(psVar10);
                this_03->CloseActiveInputForm();
            }
        }
        uVar6 = local_168;
        switch (m_loginscreen) {
        case 25:
            if ((m_backgroundMode != '\0') && (traceBackgroundModeLoginFlow != '\0')) {
                uVar9 = logger::default_logger();
                iVar33 = 1;
                logger::Logger::Log(uVar9, 1, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/titlescreen.cpp",
                                    659, "Background mode login flow: LOGINSCREEN_STEAM_ACCOUNT_CHECK (first time)");
            }
            psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
            plVar14 = (long*)shared_ptr<ApplicationContext>::operator->(psVar10);
            this_03 = (Client*)(**(code**)(*plVar14 + 72))(plVar14);
            iVar5 = (**(code**)(*(long*)this_03 + 512))(this_03);
            if (iVar5 == 0) {
                iVar33 = 0;
                (**(code**)(*(long*)this_03 + 80))(this_03, 0, 10);
            } else {
                pCVar15 = this_03;
                iVar5 = (**(code**)(*(long*)this_03 + 512))();
                if (iVar5 == 20) {
                    if ((m_backgroundMode != '\0') && (traceBackgroundModeLoginFlow != '\0')) {
                        pCVar15 = (Client*)logger::default_logger();
                        iVar33 = 0;
                        logger::Logger::Log(pCVar15, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/titlescreen.cpp",
                                            674, "Background mode login flow: Advancing to NEW_EXISTING_USER");
                    }
                } else {
                    pCVar15 = this_03;
                    iVar5 = (**(code**)(*(long*)this_03 + 512))();
                    if (iVar5 < 21) {
                        uVar6 = (**(code**)(*(long*)this_03 + 512))(this_03);
                        this_03 = (Client*)(ulong)uVar6;
                        cVar3 = jag::auth::TokenAuthLoginHandler::IsFinished();
                        if (cVar3 != '\0') {
                            if (m_backgroundMode != '\0') {
                                /* WARNING: Subroutine does not return */
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
                            this_03 = (Client*)&constants::text::steamAccountCheck1;
                            ThrobMessage((basic_string*)&constants::text::steamAccountCheck1);
                        }
                        break;
                    }
                }
                this_03 = pCVar15;
                m_loginscreen = 0;
            }
            break;
        case 26:
            if (m_backgroundMode != '\0') {
                ResumeInForeground();
            }
            uVar6 = local_168;
            if (local_161 != 0) {
                this_03 = (Client*)&m_steamLinkYesBtn;
                iVar33 = iVar30;
                cVar3 = m_steamLinkYesBtn.IsInside(iVar30, local_168);
                if (cVar3 == '\0') {
                    this_03 = (Client*)&m_steamLinkNoBtn;
                    iVar33 = iVar30;
                    cVar3 = m_steamLinkNoBtn.IsInside(iVar30, uVar6);
                    if (cVar3 != '\0') {
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
                iVar33 = iVar30;
                cVar3 = m_steamLinkYesBtn.IsInside(iVar30, local_168);
                if (cVar3 == '\0') {
                    this_03 = (Client*)&m_steamLinkNoBtn;
                    iVar33 = iVar30;
                    cVar3 = m_steamLinkNoBtn.IsInside(iVar30, uVar6);
                    if (cVar3 != '\0') {
                    LAB_1000c9d43:
                        m_loginscreen = 26;
                    }
                } else {
                    this_03 = (Client*)(ulong)m_steamLinkHint;
                    MoveToSteamLoginFlow();
                }
            }
            break;
        case 29:
            if (m_backgroundMode != '\0') {
                ResumeInForeground();
            }
            this_03 = (Client*)&constants::text::steamRequired1;
            iVar33 = 23801488;
            LoginMes((basic_string*)&constants::text::steamRequired1, (basic_string*)&constants::text::steamRequired2,
                     (basic_string*)&constants::text::steamRequired3);
        }
        uVar6 = local_168;
        iVar1 = local_170;
        iVar4 = m_sXOfCentre;
        iVar5 = m_sy;
        switch (m_loginscreen) {
        case 0:
            if ((m_backgroundMode != '\0') && (traceBackgroundModeLoginFlow != '\0')) {
                uVar9 = logger::default_logger();
                iVar33 = 0;
                logger::Logger::Log(uVar9, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/titlescreen.cpp",
                                    741, "Background mode login flow: NEW_EXISTING_USER");
            }
            if ((byte)local_178 != '\0') {
                puVar32 = &field_8376;
                pDVar24 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)puVar32);
                cVar3 = pDVar24->GetFullscreen();
                if ((cVar3 == '\0') || (field_8425 != false)) {
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                    plVar14 = (long*)shared_ptr<ApplicationContext>::operator->(psVar10);
                    (**(code**)(*plVar14 + 112))(plVar14);
                } else {
                    pDVar24 =
                        (DeviceOptions*)std::
                            unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->((
                                unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)puVar32);
                    pDVar24->ToggleFullscreen();
                    pDVar24 =
                        (DeviceOptions*)std::
                            unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->((
                                unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)puVar32);
                    m_toggleFullscreenCheckboxTicked = pDVar24->GetFullscreen();
                }
                break;
            }
            puVar18 = (undefined8*)Client::Instance();
            psVar10 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar18)(puVar18);
            plVar14 = (long*)shared_ptr<ApplicationContext>::operator->(psVar10);
            pTVar23 = (TitleScreen*)(**(code**)(*plVar14 + 72))();
            local_178 = pTVar23;
            if ((pTVar23 == (TitleScreen*)0) ||
                (((cVar3 = (**(code**)(*(long*)pTVar23 + 104))(pTVar23),
                   cVar3 == '\0' && (cVar3 = (**(code**)(*(long*)pTVar23 + 112))(pTVar23), cVar3 == '\0')) &&
                  (cVar3 = (**(code**)(*(long*)pTVar23 + 120))(), cVar3 == '\0')))) {
                iVar5 = m_sy + 100;
                bVar29 = local_161 ^ 1;
                iVar4 = m_sy + 140;
                if ((((bVar29 == 0) && (m_sXOfCentre + -155 <= iVar30)) && (iVar30 <= m_sXOfCentre + -5)) &&
                    ((iVar5 <= (int)local_168 && ((int)local_168 <= iVar4)))) {
                    cVar3 = OpenTermsAndPrivacyScreen(0);
                    if ((cVar3 != '\0') || (cVar3 = OpenDataDownloadPrompt((TitleScreen*)0, iVar33), cVar3 != '\0'))
                        break;
                    LaunchAccountCreationFlow();
                    iVar30 = local_170;
                }
                iVar33 = m_sXOfCentre + 5;
                if ((byte)((((iVar30 <= m_sXOfCentre + 155 && iVar33 <= iVar30) && iVar5 <= (int)local_168) &&
                            (int)local_168 <= iVar4) &
                               ~bVar29 |
                           local_169) == 1) {
                    cVar3 = OpenTermsAndPrivacyScreen(1);
                    if (((cVar3 != '\0') ||
                         (cVar3 = OpenDataDownloadPrompt((TitleScreen*)&DAT_00000001, iVar33), cVar3 != '\0')) ||
                        (cVar3 = ShowWorldWarningScreen(1), cVar3 != '\0'))
                        break;
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                    pAVar27 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar10);
                    pAVar27->SendAttributionEvent((basic_string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT);
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                    pAVar27 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar10);
                    pAVar27->SendAnalyticsEvent((basic_string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT);
                    if (local_178 != (TitleScreen*)0)
                        goto LAB_1000cc89b;
                LAB_1000cc9c7:
                    MoveToUserPassEntryScreen(false);
                }
            } else {
                iVar1 = m_sXOf;
                iVar4 = m_sy;
                iVar33 = m_sXOf + 180;
                lVar13 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleButWide);
                pTVar23 = local_178;
                iVar5 = *(int*)(lVar13 + 52);
                iVar7 = *(int*)(lVar13 + 48) / 2;
                bVar29 = iVar7 + iVar1 + 180 < iVar30 | iVar30 < iVar33 - iVar7 | local_161 ^ 1;
                iVar30 = iVar5 + 58 + iVar4;
                if (((bVar29 == 0) && (iVar4 + 58 <= (int)local_168)) && ((int)local_168 <= iVar30)) {
                    iVar33 = iVar5;
                    cVar3 = (**(code**)(*(long*)local_178 + 104))(local_178);
                    if (cVar3 == '\0') {
                        cVar3 = (**(code**)(*(long*)pTVar23 + 112))(pTVar23);
                        if (cVar3 == '\0') {
                            cVar3 = (**(code**)(*(long*)pTVar23 + 120))();
                            if (cVar3 != '\0') {
                                iVar33 = iVar5;
                                cVar3 = OpenTermsAndPrivacyScreen(5);
                                if (((cVar3 != '\0') ||
                                     (cVar3 = OpenDataDownloadPrompt((TitleScreen*)5, iVar33), cVar3 != '\0')) ||
                                    (cVar3 = ShowWorldWarningScreen(5), cVar3 != '\0'))
                                    break;
                                MoveToSteamLoginFlow();
                            }
                        } else {
                            cVar3 = OpenTermsAndPrivacyScreen(3);
                            if ((cVar3 != '\0') ||
                                (cVar3 = OpenDataDownloadPrompt((TitleScreen*)3, iVar33), cVar3 != '\0'))
                                break;
                            pTVar23 = (TitleScreen*)3;
                            cVar3 = ShowWorldWarningScreen(3);
                            if (cVar3 != '\0')
                                break;
                            MoveToGoogleLoginFlow(pTVar23);
                        }
                    } else {
                        cVar3 = OpenTermsAndPrivacyScreen(2);
                        if ((cVar3 != '\0') || (cVar3 = OpenDataDownloadPrompt((TitleScreen*)2, iVar33), cVar3 != '\0'))
                            break;
                        pTVar23 = (TitleScreen*)2;
                        cVar3 = ShowWorldWarningScreen(2);
                        if (cVar3 != '\0')
                            break;
                        MoveToGameCenterFlow(pTVar23);
                    }
                }
                if ((byte)(((int)local_168 <= iVar5 + iVar30 + 6 && iVar30 + 6 <= (int)local_168) & ~bVar29 |
                           local_169) == 1) {
                    cVar3 = OpenTermsAndPrivacyScreen(1);
                    if (((cVar3 != '\0') ||
                         (cVar3 = OpenDataDownloadPrompt((TitleScreen*)&DAT_00000001, iVar5), cVar3 != '\0')) ||
                        (cVar3 = ShowWorldWarningScreen(1), cVar3 != '\0'))
                        break;
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                    pAVar27 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar10);
                    pAVar27->SendAttributionEvent((basic_string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT);
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                    pAVar27 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar10);
                    pAVar27->SendAnalyticsEvent((basic_string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT);
                LAB_1000cc89b:
                    pTVar23 = local_178;
                    cVar3 = (**(code**)(*(long*)local_178 + 96))();
                    if (cVar3 == '\0')
                        goto LAB_1000cc9c7;
                    MoveToJagexWebFlow(pTVar23);
                }
            }
            if (m_backgroundMode == '\0')
                break;
            switch (m_previousLoginFlow) {
            case 2:
                cVar3 = (**(code**)(*(long*)local_178 + 120))();
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pAuthLibWrapper->SupportsSteamLogin()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "titlescreen.cpp",
                              897, (char*)0);
                }
                MoveToSteamLoginFlow(0);
                break;
            case 3:
                pTVar23 = local_178;
                cVar3 = (**(code**)(*(long*)local_178 + 112))();
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pAuthLibWrapper->SupportsGoogleLogin()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "titlescreen.cpp",
                              892, (char*)0);
                }
                MoveToGoogleLoginFlow(pTVar23);
                break;
            case 4:
                pTVar23 = local_178;
                cVar3 = (**(code**)(*(long*)local_178 + 104))();
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pAuthLibWrapper->SupportsGameCenter()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "titlescreen.cpp",
                              887, (char*)0);
                }
                MoveToGameCenterFlow(pTVar23);
                break;
            case 5:
                pTVar23 = local_178;
                cVar3 = (**(code**)(*(long*)local_178 + 96))();
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pAuthLibWrapper->SupportsJagexWebLogin()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "titlescreen.cpp",
                              902, (char*)0);
                }
                MoveToJagexWebFlow(pTVar23);
                break;
            default:
                bVar37 = false;
                goto LAB_1000cb8a2;
            }
            break;
        case 1:
            if ((local_169 != 0) ||
                ((((local_161 != 0 && (m_sXOfCentre + -155 <= iVar30)) && (iVar30 <= m_sXOfCentre + -5)) &&
                  ((m_sy + 130 <= (int)local_168 && ((int)local_168 <= m_sy + 170)))))) {
                m_worldWarningAccepted = 1;
                ApplyPostAction((TitleScreen*)this_03);
            }
            if (((byte)local_178 == '\0') && (((local_161 == 0 || (local_170 < m_sXOfCentre + 5)) ||
                                               ((m_sXOfCentre + 155 < local_170 ||
                                                 (((int)local_168 < iVar5 + 130 || (iVar5 + 170 < (int)local_168))))))))
                break;
            goto LAB_1000cbb72;
        case 2:
            if (m_backgroundMode != '\0') {
            LAB_1000cab53:
                bVar37 = (bool)ShouldRequestTokens();
                PreparePasswordLogin((basic_string*)&m_loginPass, bVar37);
                break;
            }
            psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
            pcVar19 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)shared_ptr<ApplicationContext>::operator->(psVar10);
            psVar20 = (shared_ptr*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar19);
            new (local_1a0) shared_ptr<dash3d::Decor>(psVar20);
            ptVar22 = (type*)0;
            bVar37 = operator!=((shared_ptr*)local_1a0, (_func_decltype_nullptr*)0);
            uVar6 = local_168;
            if (bVar37) {
                pIVar21 =
                    (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)local_1a0);
                iVar33 = pIVar21->GetFocusedFieldIndex();
                if (-1 < iVar33) {
                    m_loginSelect = iVar33;
                }
            }
            iVar5 = m_sXOfCentre;
            iVar33 = m_sy;
            if (local_161 != 0) {
                lVar13 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBox);
                iVar4 = *(int*)(lVar13 + 48) / 2;
                if (((iVar5 - iVar4 <= iVar30) && (iVar30 <= iVar4 + iVar5)) &&
                    ((iVar33 + 70 <= (int)uVar6 && ((int)uVar6 < iVar33 + 84)))) {
                    SelectUsernameField();
                }
                iVar5 = m_sXOfCentre;
                lVar13 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBox);
                iVar4 = *(int*)(lVar13 + 48) / 2;
                if ((((iVar5 - iVar4 <= iVar30) && (iVar30 <= iVar4 + iVar5)) && (iVar33 + 85 <= (int)uVar6)) &&
                    ((int)uVar6 < iVar33 + 99)) {
                    SelectPasswordField();
                }
            }
            iVar33 = m_sy;
            if (m_loginDimsInit == '\0') {
            LAB_1000ca6b8:
                if ((((local_161 ^ 1) == 0) && (m_sXOfCentre + -155 <= iVar30)) &&
                    ((iVar30 <= m_sXOfCentre + -5 && ((m_sy + 130 <= (int)uVar6 && ((int)uVar6 <= m_sy + 170)))))) {
                    m_loginUser.trim();
                    lVar13 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    if (lVar13 == 0) {
                        SelectUsernameField();
                        LoginMes((basic_string*)&constants::text::login28_a, (basic_string*)&constants::text::login28_b,
                                 (basic_string*)&constants::text::login28_c);
                    } else {
                        lVar13 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        if (lVar13 == 0) {
                            SelectPasswordField();
                            LoginMes((basic_string*)&constants::text::login29_a,
                                     (basic_string*)&constants::text::login29_b,
                                     (basic_string*)&constants::text::login29_c);
                        } else {
                            psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                            pAVar27 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar10);
                            pAVar27->CloseActiveInputForm();
                            LoginMes((basic_string*)&constants::text::connecting1,
                                     (basic_string*)&constants::text::connecting2,
                                     (basic_string*)&constants::text::connecting3);
                            bVar37 = (bool)ShouldRequestTokens();
                            PreparePasswordLogin((basic_string*)&m_loginPass, bVar37);
                        }
                    }
                } else {
                    pDVar24 = (DeviceOptions*)(ulong)(m_sXOf + 185U);
                    if (((((local_161 ^ 1) == 0 && (int)(m_sXOf + 185U) <= iVar30) && (iVar30 <= m_sXOf + 335)) &&
                         (m_sy + 130 <= (int)uVar6)) &&
                        ((int)uVar6 <= m_sy + 170)) {
                        pDVar24 = (DeviceOptions*)&DAT_00000001;
                        MoveToInitialScreen(true, false);
                        m_loginTotpRememberUser = 1;
                    }
                    if (iVar30 < m_sXOfCentre + -117) {
                        m_loginRememberUserCheckboxHighlighted = false;
                    } else {
                        m_loginRememberUserCheckboxHighlighted = false;
                        if ((iVar30 < m_sXOfCentre + -117 + m_loginCheckboxWidth) && (m_sy + 106 <= (int)uVar6)) {
                            m_loginRememberUserCheckboxHighlighted = (int)uVar6 < m_sy + 106 + m_loginCheckboxHeight;
                        }
                    }
                    if (((m_loginRememberUserCheckboxHighlighted & local_161) == 1) &&
                        (bVar29 = field_19104, field_19104 = bVar29 ^ 1, bVar29 != 0)) {
                        pDVar24 =
                            (DeviceOptions*)
                                std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::
                                operator->((unique_ptr<option::DeviceOptions,
                                                       std::default_delete<option::DeviceOptions>>*)&field_8376);
                        new (&local_160) eastl::fixed_string<char, 256, true, eastl::allocator>("");
                        pDVar24->SetCachedUserName((fixed_string*)&local_160);
                        /* WARNING: Subroutine does not return */
                        local_160.~fixed_string();
                    }
                    iVar33 = rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID();
                    if (((iVar33 == 8) ||
                         (iVar33 = rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID(), iVar33 == 7)) &&
                        (iVar33 = m_sXOfCentre, local_161 != 0)) {
                        iVar4 = m_sy + 210;
                        pDVar24 = (DeviceOptions*)&m_titleButWide;
                        lVar13 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                            (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleButWide);
                        iVar5 = *(int*)(lVar13 + 48) / 2;
                        if (((iVar33 - iVar5 <= iVar30) && (iVar30 <= iVar5 + iVar33)) &&
                            ((iVar4 <= (int)uVar6 && ((int)uVar6 <= iVar4 + *(int*)(lVar13 + 52))))) {
                            LaunchAccountCreationFlow();
                        }
                    }
                    if ((iVar30 < m_sXOfCentre + 24) || (m_loginHideUserCheckboxHighlighted = false,
                                                         m_sXOfCentre + 24 + m_loginCheckboxWidth <= iVar30)) {
                        m_loginHideUserCheckboxHighlighted = false;
                    } else if (m_sy + 106 <= (int)uVar6) {
                        m_loginHideUserCheckboxHighlighted = (int)uVar6 < m_sy + 106 + m_loginCheckboxHeight;
                    }
                    if ((local_161 & m_loginHideUserCheckboxHighlighted) == 1) {
                        puVar32 = &field_8376;
                        pDVar24 =
                            (DeviceOptions*)
                                std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::
                                operator->(
                                    (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)
                                        puVar32);
                        pDVar24->ToggleHideUserName();
                        pDVar24 =
                            (DeviceOptions*)
                                std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::
                                operator->(
                                    (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)
                                        puVar32);
                        cVar3 = pDVar24->GetHideUserName();
                        if (cVar3 == '\0') {
                            m_loginUser.assign("");
                            pDVar24 =
                                (DeviceOptions*)
                                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::
                                    operator->(
                                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)
                                            puVar32);
                            new (&local_160) eastl::fixed_string<char, 256, true, eastl::allocator>("");
                            pDVar24->SetCachedUserName((fixed_string*)&local_160);
                            /* WARNING: Subroutine does not return */
                            local_160.~fixed_string();
                        }
                    }
                    if ((byte)local_178 == '\0') {
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
                                lVar13 =
                                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::size();
                                if (lVar13 == 0) {
                                    LoginMes((basic_string*)&constants::text::login28_a,
                                             (basic_string*)&constants::text::login28_b,
                                             (basic_string*)&constants::text::login28_c);
                                    SelectUsernameField();
                                } else {
                                    lVar13 =
                                        eastl::basic_string<char,
                                                            eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                          eastl::allocator>>::size();
                                    if (lVar13 == 0) {
                                        LoginMes((basic_string*)&constants::text::login29_a,
                                                 (basic_string*)&constants::text::login29_b,
                                                 (basic_string*)&constants::text::login29_c);
                                        SelectPasswordField();
                                    } else {
                                        puVar18 = (undefined8*)Client::Instance();
                                        psVar10 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar18)(puVar18);
                                        pAVar27 =
                                            (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar10);
                                        pAVar27->CloseActiveInputForm();
                                        LoginMes((basic_string*)&constants::text::connecting1,
                                                 (basic_string*)&constants::text::connecting2,
                                                 (basic_string*)&constants::text::connecting3);
                                        bVar37 = (bool)ShouldRequestTokens();
                                        PreparePasswordLogin((basic_string*)&m_loginPass, bVar37);
                                    }
                                }
                            }
                        } else {
                            LoadDevCredentialsFromFile((TitleScreen*)pDVar24);
                        }
                    } else {
                        MoveToInitialScreen(true, false);
                        m_loginTotpRememberUser = 1;
                    }
                }
            } else {
                piVar16 = (int*)m_loginHelpTextDimensions.second();
                if (local_161 == 0)
                    goto LAB_1000ca6b8;
                iVar5 = *piVar16;
                pvVar25 = m_loginHelpTextDimensions.SSOBeginPtr(ptVar22);
                if (iVar30 < *(int*)pvVar25 - iVar5 / 2)
                    goto LAB_1000ca6b8;
                pvVar25 = m_loginHelpTextDimensions.SSOBeginPtr(ptVar22);
                if (iVar5 / 2 + *(int*)pvVar25 < iVar30)
                    goto LAB_1000ca6b8;
                if ((int)uVar6 < iVar33 + 175)
                    goto LAB_1000ca6b8;
                if (iVar33 + 190 <= (int)uVar6)
                    goto LAB_1000ca6b8;
                if (m_loginHelp != 1) {
                    if (m_loginHelp == 2) {
                        new (local_1c0) eastl::allocator("EASTL basic_string");
                        new (&local_160) eastl::string("https://support.runescape.com/hc/en-gb", local_1c0);
                        Web::OpenURL((basic_string*)&local_160, true);
                        local_160.~basic_string();
                        iVar30 = local_170;
                        uVar6 = local_168;
                    }
                    goto LAB_1000ca6b8;
                }
                Web::OpenURL((basic_string*)&constants::text::cantLoginArticleUrl, true);
            }
            local_1a0->~shared_ptr();
            break;
        case 3:
            iVar5 = m_sXOf + 180;
            iVar33 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            local_160.GetCentreStringSubStringRect((int)local_1e0, 25, (basic_string*)(ulong)(iVar33 - 34), 23802544,
                                                   iVar5);
            uVar6 = local_168;
            if ((local_161 != 0) && (cVar3 = local_160.IsInside(iVar30, local_168), cVar3 != '\0')) {
                psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                plVar14 = (long*)shared_ptr<ApplicationContext>::operator->(psVar10);
                (**(code**)(*plVar14 + 192))(plVar14, &constants::text::jagexLauncherUrl, 1);
            }
            local_169 = local_169 | (byte)local_178;
            if ((local_169 != 0) ||
                (((local_161 != 0 && (m_sXOf + 105 <= iVar30)) &&
                  ((iVar30 <= m_sXOf + 255 && ((m_sy + 85 <= (int)uVar6 && ((int)uVar6 <= m_sy + 125)))))))) {
                MoveToUserPassEntryScreen(false);
            }
            if ((((local_161 != 0) && (m_sXOf + 105 <= iVar30)) && (iVar30 <= m_sXOf + 255)) &&
                ((m_sy + 135 <= (int)uVar6 && ((int)uVar6 <= m_sy + 175)))) {
                Web::OpenURL((basic_string*)&constants::text::cantLoginArticleUrl, true);
            }
            break;
        case 4:
            if (local_169 == 0) {
                bVar29 = local_161 ^ 1;
                iVar30 = m_sy + 130;
                iVar33 = m_sy + 170;
                if (((bVar29 != 0) || (local_170 < m_sXOf + 25)) ||
                    ((m_sXOf + 175 < local_170 || (((int)local_168 < iVar30 || (iVar33 < (int)local_168)))))) {
                    if (local_161 != 0) {
                        if ((((m_sXOf + 50 <= local_170) && (local_170 <= m_sXOf + 170)) &&
                             (m_sy + 92 <= (int)local_168)) &&
                            ((int)local_168 <= m_sy + 125)) {
                            psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                            pcVar19 = (compressed_pair_imp<
                                       std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)shared_ptr<ApplicationContext>::operator->(psVar10);
                            psVar20 = (shared_ptr*)eastl::compressed_pair_imp<
                                std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                eastl::allocator, 0>::second(pcVar19);
                            new (&local_160) shared_ptr<dash3d::Decor>(psVar20);
                            bVar37 = operator==((shared_ptr*)&local_160, (_func_decltype_nullptr*)0);
                            if (bVar37) {
                                SetupAuthenticatorInputForm(local_1a0);
                                shared_ptr<input::InputForm>::operator=((shared_ptr<input::InputForm>*)&local_160,
                                                                        (shared_ptr*)local_1a0);
                                local_1a0->~shared_ptr();
                            }
                            bVar37 = operator!=((shared_ptr*)&local_160, (_func_decltype_nullptr*)0);
                            if (bVar37) {
                                pIVar21 = (InputForm*)shared_ptr<input::InputForm>::operator->(
                                    (shared_ptr<input::InputForm>*)&local_160);
                                pIVar21->ShowKeyboard();
                            }
                            local_160.~shared_ptr();
                        }
                        if (((m_sXOf + 171 <= local_170) && (local_170 <= m_sXOf + 310)) &&
                            ((m_sy + 92 <= (int)local_168 && ((int)local_168 <= m_sy + 125)))) {
                            m_loginTotpRememberUser = m_loginTotpRememberUser ^ 1;
                        }
                        if (((m_sXOf + 146 <= local_170) && (local_170 <= m_sXOf + 214)) &&
                            ((m_sy + 180 <= (int)local_168 && ((int)local_168 <= m_sy + 192)))) {
                            Web::OpenURL((basic_string*)&constants::text::cantLoginArticleUrl, true);
                        }
                    }
                    if (((byte)local_178 == '\0') &&
                        ((((bVar29 != 0 || local_170 < m_sXOf + 185 || (m_sXOf + 335 < local_170)) ||
                           ((int)local_168 < iVar30)) ||
                          (iVar33 < (int)local_168))))
                        break;
                    DeriveTOTPMode(false);
                    bVar37 = true;
                    goto LAB_1000cbb74;
                }
            }
            m_loginTotpPinString.trim();
            lVar13 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar13 != 6) {
                LoginMes((basic_string*)&constants::text::login_totp_length_a,
                         (basic_string*)&constants::text::login_totp_length_b,
                         (basic_string*)&constants::text::login_totp_length_c);
                break;
            }
            m_loginTotpPin = eastl::stoi<eastl::string>((basic_string*)&m_loginTotpPinString, 10);
            m_loginTotpPinString.assign("");
            LoginMes((basic_string*)&constants::text::connecting1, (basic_string*)&constants::text::connecting2,
                     (basic_string*)&constants::text::connecting3);
            pLVar17 = (LoginManager*)GetLoginManager();
            cVar3 = pLVar17->IsRefreshTokenAvailable();
            if (cVar3 != '\0') {
                pLVar17 = (LoginManager*)GetLoginManager();
                pLVar17->PrepareGameTokenLogin(true);
            }
            DeriveTOTPMode(true);
            goto LAB_1000ca99b;
        case 5:
            bVar29 = local_161 ^ 1;
            if ((bVar29 == 0) &&
                ((((m_sXOf + 40 <= local_170 && (local_170 <= m_sXOf + 320)) && (m_sy + 89 <= (int)local_168)) &&
                  ((int)local_168 <= m_sy + 129)))) {
                psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                pcVar19 =
                    (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                         eastl::allocator, 0>*)shared_ptr<ApplicationContext>::operator->(psVar10);
                psVar20 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar19);
                new (&local_160) shared_ptr<dash3d::Decor>(psVar20);
                bVar37 = operator==((shared_ptr*)&local_160, (_func_decltype_nullptr*)0);
                if (bVar37) {
                    SetupAccountAppealInputForm(local_1a0);
                    shared_ptr<input::InputForm>::operator=((shared_ptr<input::InputForm>*)&local_160,
                                                            (shared_ptr*)local_1a0);
                    local_1a0->~shared_ptr();
                }
                bVar37 = operator!=((shared_ptr*)&local_160, (_func_decltype_nullptr*)0);
                if (bVar37) {
                    pIVar21 =
                        (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)&local_160);
                    pIVar21->ShowKeyboard();
                }
                local_160.~shared_ptr();
                break;
            }
            if (((local_170 < m_sXOf + 25 || bVar29 != 0) || (m_sXOf + 175 < local_170)) ||
                (((int)local_168 < m_sy + 130 || (m_sy + 170 < (int)local_168)))) {
                ptVar22 = (type*)(ulong)(m_sXOf + 185U);
                if ((((int)(m_sXOf + 185U) <= local_170 && bVar29 == 0) && (local_170 <= m_sXOf + 335)) &&
                    ((m_sy + 130 <= (int)local_168 && ((int)local_168 <= m_sy + 170)))) {
                    MoveToUserPassEntryScreen(true);
                }
                iVar30 = m_sy;
                if ((m_loginDimsInit != '\0') &&
                    (piVar16 = (int*)m_cantLoginOtherTextDimensions.second(), local_161 != 0)) {
                    iVar33 = *piVar16;
                    pvVar25 = m_cantLoginOtherTextDimensions.SSOBeginPtr(ptVar22);
                    if ((*(int*)pvVar25 - iVar33 / 2 <= local_170) &&
                        (((pvVar25 = m_cantLoginOtherTextDimensions.SSOBeginPtr(ptVar22),
                           local_170 <= iVar33 / 2 + *(int*)pvVar25 && (iVar30 + 175 <= (int)local_168)) &&
                          ((int)local_168 < iVar30 + 190)))) {
                        eastl::allocator::allocator(local_1d0, "EASTL basic_string");
                        eastl::string::basic_string(local_1c0, "secure", local_1d0);
                        local_1a0->GetBaseUrl(this, SUB81(local_1c0, 0));
                        eastl::operator+((eastl*)&local_160, (basic_string*)local_1a0,
                                         (value_type*)"m=weblogin/g=oldscape/cant_log_in");
                        Web::OpenURL((basic_string*)&local_160, true);
                        local_160.~basic_string();
                        local_1a0->~basic_string();
                        eastl::string::~basic_string(local_1c0);
                    }
                }
                if ((byte)local_178 == '\0') {
                    if (local_169 != 0)
                        goto LAB_1000cad05;
                } else {
                    MoveToUserPassEntryScreen(true);
                }
                if (((bVar29 == 0 && m_sXOf + 80 <= local_170) && (local_170 <= m_sXOf + 280)) &&
                    ((m_sy + 170 <= (int)local_168 && ((int)local_168 <= m_sy + 200)))) {
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                    pAVar27 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator*(psVar10);
                    pAVar27->SendAttributionEvent((basic_string*)&auth::AppsFlyerEvent::FORGOT_LOGIN);
                    pAVar27->SendAnalyticsEvent((basic_string*)&auth::AppsFlyerEvent::FORGOT_LOGIN);
                    eastl::allocator::allocator(local_1d0, "EASTL basic_string");
                    eastl::string::basic_string(local_1c0, "secure", local_1d0);
                    local_1a0->GetBaseUrl(this, SUB81(local_1c0, 0));
                    eastl::operator+((eastl*)&local_160, (basic_string*)local_1a0,
                                     (value_type*)"m=weblogin/g=oldscape/cant_log_in");
                    Web::OpenURL((basic_string*)&local_160, true);
                    local_160.~basic_string();
                    local_1a0->~basic_string();
                    eastl::string::~basic_string(local_1c0);
                }
            } else {
            LAB_1000cad05:
                AccountAppealLogin();
            }
            break;
        case 6:
            if ((local_169 | (byte)local_178) == 1) {
                MoveToInitialScreen(false, false);
            }
            if (local_161 == 0)
                break;
        LAB_1000ca7b5:
            if (((int)local_168 < m_sy + 130) || (m_sy + 170 < (int)local_168))
                break;
            goto LAB_1000cbb72;
        case 7:
            lVar13 = Client::Instance();
            if (*(char*)(lVar13 + 52032) == '\0') {
                iVar33 = m_sy + 130;
                iVar5 = m_sy + 170;
                if ((((local_161 ^ 1) == 0) && (m_sXOf + 25 <= iVar30)) &&
                    ((iVar30 <= m_sXOf + 175 && ((iVar33 <= (int)local_168 && ((int)local_168 <= iVar5)))))) {
                    eastl::allocator::allocator(local_1d0, "EASTL basic_string");
                    eastl::string::basic_string(local_1c0, "secure", local_1d0);
                    local_1a0->GetBaseUrl(this, SUB81(local_1c0, 0));
                    eastl::operator+((eastl*)&local_160, (basic_string*)local_1a0, (value_type*)"m=dob/set_dob.ws");
                    Web::OpenURL((basic_string*)&local_160, true);
                LAB_1000cb1a6:
                    local_160.~basic_string();
                    local_1a0->~basic_string();
                    eastl::string::~basic_string(local_1c0);
                LAB_1000cb267:
                    LoginMes((basic_string*)&constants::text::redirect1, (basic_string*)&constants::text::redirect2,
                             (basic_string*)&constants::text::redirect3);
                    m_loginscreen = 6;
                    break;
                }
                if ((local_161 ^ 1) != 0 || iVar30 < m_sXOf + 185)
                    break;
            LAB_1000cb872:
                if (((m_sXOf + 335 < local_170) || ((int)local_168 < iVar33)) || (iVar5 < (int)local_168))
                    break;
            LAB_1000cb89d:
                bVar37 = true;
            LAB_1000cb8a2:
                MoveToUserPassEntryScreen(bVar37);
                break;
            }
            local_161 = local_161 ^ 1;
            if (local_161 == 0) {
                uVar6 = m_sXOfCentre - 150;
                this_03 = (Client*)(ulong)uVar6;
                if ((((int)uVar6 <= iVar30) && (iVar30 <= m_sXOfCentre + 155)) &&
                    ((m_sy + 60 <= (int)local_168 && ((int)local_168 <= m_sy + 100)))) {
                    m_currentDobCharacter = GetCurrentDobInputBoxFromCoordinates(uVar6, iVar30);
                    puVar18 = (undefined8*)Client::Instance();
                    psVar10 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar18)(puVar18);
                    pcVar19 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)shared_ptr<ApplicationContext>::operator->(psVar10);
                    psVar20 = (shared_ptr*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(pcVar19);
                    new (&local_160) shared_ptr<dash3d::Decor>(psVar20);
                    bVar2 = operator==((shared_ptr*)&local_160, (_func_decltype_nullptr*)0);
                    if (bVar2) {
                        SetupDobInputForm(local_1a0);
                        shared_ptr<input::InputForm>::operator=((shared_ptr<input::InputForm>*)&local_160,
                                                                (shared_ptr*)local_1a0);
                        local_1a0->~shared_ptr();
                    }
                    bVar2 = operator!=((shared_ptr*)&local_160, (_func_decltype_nullptr*)0);
                    if (bVar2) {
                        pIVar21 = (InputForm*)shared_ptr<input::InputForm>::operator->(
                            (shared_ptr<input::InputForm>*)&local_160);
                        pIVar21->ShowKeyboard();
                    }
                    this_03 = (Client*)&local_160;
                    this_03->~shared_ptr();
                }
            }
            if (local_169 == 0) {
                if (((iVar30 < m_sXOf + 25 || local_161 != 0) || (m_sXOf + 175 < iVar30)) ||
                    (((int)local_168 < m_sy + 130 || (m_sy + 170 < (int)local_168)))) {
                    local_161 = local_161 | iVar30 < m_sXOf + 185;
                    if ((((local_161 == 0) && (iVar30 <= m_sXOf + 335)) && (m_sy + 130 <= (int)local_168)) &&
                        ((int)local_168 <= m_sy + 170)) {
                        new (&local_160) Array<eastl::string, eastl::allocator>(8);
                        Array<eastl::string, eastl::allocator>::operator=(
                            (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, (Array*)&local_160);
                        local_160.~Array();
                        MoveToUserPassEntryScreen(true);
                    }
                    bVar29 = bVar37 & local_17f;
                    if (local_180 != 0) {
                        auVar39 = Array<eastl::string, eastl::allocator>::operator[](
                            (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, (long)m_currentDobCharacter);
                        bVar37 = eastl::operator==(auVar39._0_8_, (basic_string*)"", auVar39._8_8_);
                        if ((bVar37) && (0 < m_currentDobCharacter)) {
                            m_currentDobCharacter = m_currentDobCharacter + -1;
                        }
                        pbVar26 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
                            (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, (long)m_currentDobCharacter);
                        eastl::string::assign(pbVar26, "");
                    }
                    if (bVar29 != 0) {
                        pbVar26 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
                            (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, (long)m_currentDobCharacter);
                        eastl::string::operator=(pbVar26, local_17b);
                        iVar30 = m_currentDobCharacter;
                        iVar33 = m_dobCharacters.end();
                        if (iVar30 < iVar33 + -1) {
                            m_currentDobCharacter = m_currentDobCharacter + 1;
                        }
                    }
                    break;
                }
            }
            cVar3 = CheckAndSetDobInput((TitleScreen*)this_03);
            if (cVar3 == '\0')
                break;
            m_dobSubmitted = 1;
            if (pGVar12 != (GameShell*)0) {
                this_00 = (GameToken*)(**(code**)(*(long*)pGVar12 + 48))(pGVar12);
                iVar30 = this_00->GetStatus();
                if (iVar30 == 0) {
                    Start3rdPartyLoginFlow((AuthLibWrapper*)pGVar12);
                    break;
                }
            }
            LoginMes((basic_string*)&constants::text::connecting1, (basic_string*)&constants::text::connecting2,
                     (basic_string*)&constants::text::connecting3);
        LAB_1000ca99b:
            SetMainState(20);
            break;
        case 8:
            if (m_backgroundMode != '\0') {
                ResumeInForeground();
                break;
            }
            if ((((local_161 ^ 1) == 0) && (m_sXOf + 25 <= iVar30)) &&
                ((iVar30 <= m_sXOf + 175 && ((m_sy + 130 <= (int)local_168 && ((int)local_168 <= m_sy + 170)))))) {
                Web::OpenURL((basic_string*)&constants::text::termsAndConditionsUrl, true);
                goto LAB_1000cb267;
            }
            if (((((local_161 ^ 1) != 0 || iVar30 < m_sXOf + 185) || (m_sXOf + 335 < local_170)) ||
                 ((int)local_168 < m_sy + 130)) ||
                (m_sy + 170 < (int)local_168))
                break;
            bVar37 = true;
            goto LAB_1000cbb74;
        case 9:
            if (m_backgroundMode != '\0') {
                ResumeInForeground();
            }
            local_169 = local_169 | (byte)local_178;
            if ((local_169 == 0) && ((((local_161 == 0 || (local_170 < m_sXOf + 105)) || (m_sXOf + 255 < local_170)) ||
                                      (((int)local_168 < m_sy + 120 || (m_sy + 160 < (int)local_168))))))
                break;
        LAB_1000caa8d:
            pLVar17 = (LoginManager*)GetLoginManager();
            pLVar17->ClearFederatedSignInResult();
            goto LAB_1000cbb72;
        case 10:
            if (m_backgroundMode == '\0') {
                if ((byte)local_178 != 0) {
                    puVar32 = &field_8376;
                    pDVar24 =
                        (DeviceOptions*)std::
                            unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->((
                                unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)puVar32);
                    cVar3 = pDVar24->GetFullscreen();
                    if ((cVar3 != '\0') && (field_8425 == false)) {
                        pDVar24 =
                            (DeviceOptions*)
                                std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::
                                operator->(
                                    (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)
                                        puVar32);
                        pDVar24->ToggleFullscreen();
                        pDVar24 =
                            (DeviceOptions*)
                                std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::
                                operator->(
                                    (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)
                                        puVar32);
                        m_toggleFullscreenCheckboxTicked = pDVar24->GetFullscreen();
                    }
                }
                iVar33 = m_sXOf;
                if (((local_169 != 0) || ((((local_161 != 0 && (m_sXOf + 71 <= iVar30)) && (iVar30 <= m_sXOf + 289)) &&
                                           ((m_sy + 38 <= (int)uVar6 && ((int)uVar6 <= m_sy + 106)))))) &&
                    (cVar3 = ShowWorldWarningScreen(4), cVar3 == '\0')) {
                    InitiateGameTokenLogin(false, false);
                }
                pLVar17 = (LoginManager*)GetLoginManager();
                cVar3 = pLVar17->IsUsingJagexLauncher();
                if ((cVar3 == '\0') && (((byte)local_178 != '\0' ||
                                         (((local_161 != 0 && (iVar33 + 105 <= local_170)) &&
                                           ((local_170 <= iVar33 + 255 &&
                                             ((m_sy + 140 <= (int)local_168 && ((int)local_168 <= m_sy + 180)))))))))) {
                    m_loginscreen = 11;
                }
                break;
            }
            bVar37 = false;
            goto LAB_1000c9eba;
        case 11:
            iVar33 = m_sy + 100;
            local_161 = local_161 ^ 1;
            iVar5 = m_sy + 140;
            if ((((local_161 == 0) && (m_sXOfCentre + -155 <= iVar30)) && (iVar30 <= m_sXOfCentre + -5)) &&
                ((iVar33 <= (int)local_168 && ((int)local_168 <= iVar5)))) {
                pLVar17 = (LoginManager*)GetLoginManager();
                pLVar17->InvalidateRefreshToken();
                psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                plVar14 = (long*)shared_ptr<ApplicationContext>::operator->(psVar10);
                (**(code**)(*plVar14 + 176))(plVar14, &ApplicationContext::AUTHENTICATOR_HASH);
                psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                plVar14 = (long*)shared_ptr<ApplicationContext>::operator->(psVar10);
                (**(code**)(*plVar14 + 176))(plVar14, &ApplicationContext::DISPLAYNAME_KEY);
                MoveToInitialScreen(true, true);
            }
            if ((byte)((((iVar30 <= m_sXOfCentre + 155 && m_sXOfCentre + 5 <= iVar30) && iVar33 <= (int)uVar6) &&
                        (int)uVar6 <= iVar5) &
                           ~local_161 |
                       local_169) == 1) {
                m_loginscreen = 10;
            }
            break;
        case 12:
            iVar33 = (int)local_1e8;
            local_160.GetCentreStringSubStringRect(iVar33, 0, 30, 23805136, m_sXOfCentre);
            local_1a0->GetCentreStringSubStringRect(iVar33, 32, 32, 23805136, iVar4);
            local_1c0->GetCentreStringSubStringRect(iVar33, 70, 34, 23805136, iVar4);
            iVar30 = local_170;
            local_1d0->GetCentreStringSubStringRect(iVar33, 0, 34, 23805168, iVar4);
            uVar6 = local_168;
            if (local_161 != 0) {
                cVar3 = local_160.IsInside(iVar30, local_168);
                if (cVar3 == '\0') {
                    cVar3 = local_1a0->IsInside(iVar30, uVar6);
                    if (cVar3 == '\0') {
                        cVar3 = local_1c0->IsInside(iVar30, uVar6);
                        pbVar31 = (basic_string*)&constants::text::eulaUrl;
                        if ((cVar3 == '\0') && (cVar3 = local_1d0->IsInside(iVar30, uVar6), cVar3 == '\0'))
                            goto LAB_1000cbab1;
                    } else {
                        pbVar31 = (basic_string*)&constants::text::privacyPolicyUrl;
                    }
                } else {
                    pbVar31 = (basic_string*)&constants::text::termsAndConditionsUrl;
                }
                Web::OpenURL(pbVar31, true);
            }
        LAB_1000cbab1:
            local_161 = local_161 ^ 1;
            iVar33 = m_sy + 120;
            iVar5 = m_sy + 160;
            if (((local_161 == 0) && (m_sXOfCentre + -155 <= iVar30)) &&
                ((iVar30 <= m_sXOfCentre + -5 && ((iVar33 <= (int)uVar6 && ((int)uVar6 <= iVar5)))))) {
                AcceptTermsAndPrivacy();
                ApplyPostAction((TitleScreen*)this);
            }
            if ((byte)((((iVar30 <= m_sXOfCentre + 155 && m_sXOfCentre + 5 <= iVar30) && iVar33 <= (int)uVar6) &&
                        (int)uVar6 <= iVar5) &
                           ~local_161 |
                       local_169) == 1) {
                m_postAction = 4294967295;
                m_loginscreen = 13;
            }
            if ((byte)local_178 == '\0')
                break;
        LAB_1000cbb68:
            m_postAction = 4294967295;
            goto LAB_1000cbb72;
        case 13:
            if ((byte)local_178 == 0) {
                if (((local_161 == 0) || (local_170 < m_sXOfCentre + -75)) || (m_sXOfCentre + 75 < local_170))
                    break;
                goto LAB_1000ca7b5;
            }
        LAB_1000cbb72:
            bVar37 = false;
        LAB_1000cbb74:
            MoveToInitialScreen(bVar37, false);
            break;
        case 14:
            new (local_1a0) eastl::allocator("EASTL basic_string");
            new (&local_160) eastl::string("", local_1a0);
            uVar6 = local_168;
            if (m_currentSupportReason == 2) {
                local_160.assign("https://support.runescape.com/hc/en-gb/articles/207256855-Settle-an-Unpaid-Balance");
                uVar6 = local_168;
            } else if (m_currentSupportReason == 1) {
                local_160.assign("https://secure.runescape.com/m=accountappeal/passwordrecovery");
                uVar6 = local_168;
            } else if (m_currentSupportReason == 0) {
                local_160.assign("https://secure.runescape.com/m=offence-appeal/account-history");
            } else {
                MoveToInitialScreen(false, false);
            }
            bVar37 = iVar30 < m_sXOf + 105;
            bVar2 = m_sXOf + 255 < iVar30;
            if ((((bVar2 || bVar37) || (local_161 ^ 1) != 0) || ((int)uVar6 < m_sy + 85)) ||
                (m_sy + 125 < (int)uVar6)) {
                if ((((!bVar2 && !bVar37) && (local_161 ^ 1) == 0) && m_sy + 135 <= (int)uVar6) &&
                    ((int)uVar6 <= m_sy + 175)) {
                    MoveToInitialScreen(false, false);
                }
            } else {
                Web::OpenURL((basic_string*)&local_160, true);
                LoginMes((basic_string*)&constants::text::redirect1, (basic_string*)&constants::text::redirect2,
                         (basic_string*)&constants::text::redirect3);
                m_loginscreen = 6;
            }
            local_160.~basic_string();
            break;
        default:
            if ((m_backgroundMode != '\0') && (m_loginscreen == 20))
                goto LAB_1000cab53;
            switch (m_loginscreen) {
            case 15:
                this_01 = (LoginManager*)GetLoginManager();
                iVar30 = this_01->GetThirdPartySignInResult();
                psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                pAVar27 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator*(psVar10);
                if (iVar30 == 0)
                    break;
                if (iVar30 < 1) {
                    if (iVar30 == -4) {
                        pAVar27->SendAttributionEvent(
                            (basic_string*)&auth::AppsFlyerEvent::GAME_CENTER_ERROR_UNAVAILABLE);
                        pAVar27->SendAnalyticsEvent(
                            (basic_string*)&auth::AppsFlyerEvent::GAME_CENTER_ERROR_UNAVAILABLE);
                        pbVar36 = (basic_string*)&constants::text::gamecenterDisabled1;
                        pbVar35 = (basic_string*)&constants::text::gamecenterDisabled2;
                        pbVar31 = (basic_string*)&constants::text::gamecenterDisabled3;
                    } else {
                        if (iVar30 == -3) {
                            pAVar27->SendAttributionEvent(
                                (basic_string*)&auth::AppsFlyerEvent::GAME_CENTER_ERROR_UNDERAGE);
                            pAVar27->SendAnalyticsEvent(
                                (basic_string*)&auth::AppsFlyerEvent::GAME_CENTER_ERROR_UNDERAGE);
                            LoginMes((basic_string*)&constants::text::gamecenterUnderage1,
                                     (basic_string*)&constants::text::gamecenterUnderage2,
                                     (basic_string*)&constants::text::gamecenterUnderage3);
                            m_loginscreen = 8;
                            break;
                        }
                        pAVar27->SendAttributionEvent(
                            (basic_string*)&auth::AppsFlyerEvent::GAME_CENTER_ERROR_UNAVAILABLE);
                        pAVar27->SendAnalyticsEvent(
                            (basic_string*)&auth::AppsFlyerEvent::GAME_CENTER_ERROR_UNAVAILABLE);
                        pbVar36 = (basic_string*)&constants::text::gamecenterAccessError1;
                        pbVar35 = (basic_string*)&constants::text::gamecenterAccessError2;
                        pbVar31 = (basic_string*)&constants::text::gamecenterAccessError3;
                    }
                LAB_1000ccc7a:
                    LoginMes(pbVar36, pbVar35, pbVar31);
                    m_loginscreen = 9;
                    break;
                }
                m_loginscreen = 10;
                LoginMes((basic_string*)&constants::text::connecting1, (basic_string*)&constants::text::connecting2,
                         (basic_string*)&constants::text::connecting3);
                this_01->SetEndPosition(-1000);
                uVar8 = this_01->GetAuthenticatorUserHash();
                new (&local_160) eastl::allocator("EASTL basic_string");
                eastl::string::basic_string(local_268, "", (allocator*)&local_160);
                SetLoginCredentials(uVar8);
                eastl::string::~basic_string(local_268);
                goto LAB_1000cc5b0;
            case 21:
                local_161 = local_161 ^ 1;
                iVar30 = m_sy + 120;
                iVar33 = m_sy + 160;
                if ((((local_161 == 0) && (m_sXOfCentre + -155 <= local_170)) && (local_170 <= m_sXOfCentre + -5)) &&
                    ((iVar30 <= (int)local_168 && ((int)local_168 <= iVar33)))) {
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                    pTVar23 = (TitleScreen*)shared_ptr<ApplicationContext>::operator->(psVar10);
                    AutoSingleton<ShaderThreadPoolSingleton>::~AutoSingleton();
                    ApplyPostAction(pTVar23);
                }
                if ((byte)((((iVar1 <= m_sXOfCentre + 155 && m_sXOfCentre + 5 <= iVar1) && iVar30 <= (int)uVar6) &&
                            (int)uVar6 <= iVar33) &
                               ~local_161 |
                           local_169) != 1)
                    break;
                goto LAB_1000cbb68;
            case 22:
                if ((local_169 != 0) || (((local_161 != 0 && (m_sXOf + 105 <= local_170)) &&
                                          ((local_170 <= m_sXOf + 255 &&
                                            ((m_sy + 110 <= (int)local_168 && ((int)local_168 <= m_sy + 150)))))))) {
                    LoginMes((basic_string*)&constants::text::open_store1, (basic_string*)&constants::text::open_store2,
                             (basic_string*)&constants::text::open_store3);
                    psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                    plVar14 = (long*)shared_ptr<ApplicationContext>::operator->(psVar10);
                    (**(code**)(*plVar14 + 104))(plVar14);
                }
                break;
            case 23:
                this_01 = (LoginManager*)GetLoginManager();
                iVar30 = this_01->GetThirdPartySignInResult();
                if (iVar30 == 0)
                    break;
                if (iVar30 < 1) {
                    if (iVar30 == -2) {
                        m_loginscreen = 0;
                        break;
                    }
                    pbVar36 = (basic_string*)&constants::text::googleloginAccessError1;
                    pbVar35 = (basic_string*)&constants::text::googleloginAccessError2;
                    pbVar31 = (basic_string*)&constants::text::googleloginAccessError3;
                    goto LAB_1000ccc7a;
                }
                m_loginscreen = 10;
                LoginMes((basic_string*)&constants::text::connecting1, (basic_string*)&constants::text::connecting2,
                         (basic_string*)&constants::text::connecting3);
                this_01->SetEndPosition(-1000);
                uVar8 = this_01->GetAuthenticatorUserHash();
                new (&local_160) eastl::allocator("EASTL basic_string");
                eastl::string::basic_string(local_248, "", (allocator*)&local_160);
                SetLoginCredentials(uVar8);
                eastl::string::~basic_string(local_248);
            LAB_1000cc5b0:
                this_01->PrepareFederatedLogin();
            LAB_1000cc5b5:
                DeriveTOTPMode(false);
                if (field_8448 == 45) {
                    SetMainState(50);
                    break;
                }
                goto LAB_1000ca99b;
            case 24:
                if ((local_169 == 0) &&
                    ((((local_161 == 0 || (local_170 < m_sXOf + 105)) || (m_sXOf + 255 < local_170)) ||
                      (((int)local_168 < m_sy + 120 || (m_sy + 160 < (int)local_168))))))
                    break;
                goto LAB_1000cbb72;
            case 27:
                pLVar17 = (LoginManager*)GetLoginManager();
                uVar6 = pLVar17->GetFederatedSignInResult();
                pGVar28 = (GraphicsApp*)(ulong)uVar6;
                cVar3 = jag::auth::TokenAuthLoginHandler::IsFinished();
                if (cVar3 == '\0') {
                    if (uVar6 == 3) {
                        pGVar28 = (GraphicsApp*)pGVar28->Instance();
                        cVar3 = pGVar28->HasFocus();
                        if (cVar3 == '\0') {
                            m_loginscreen = 31;
                        }
                    }
                    break;
                }
                if (uVar6 == 22) {
                    m_loginscreen = 26;
                    break;
                }
                if (uVar6 != 20) {
                    uVar9 = logger::default_logger();
                    logger::Logger::Log(uVar9, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/titlescreen.cpp",
                                        1835, "Steam Login Failed, error %i", uVar6);
                    pbVar36 = (basic_string*)&constants::text::steamloginAccessError1;
                    pbVar35 = (basic_string*)&constants::text::steamloginAccessError2;
                    pbVar31 = (basic_string*)&constants::text::steamloginAccessError3;
                    goto LAB_1000ccc7a;
                }
                m_loginscreen = 24;
                LoginMes((basic_string*)&constants::text::connecting1, (basic_string*)&constants::text::connecting2,
                         (basic_string*)&constants::text::connecting3);
                pLVar17->SetEndPosition(-1000);
                uVar8 = pLVar17->GetAuthenticatorUserHash();
                new (&local_160) eastl::allocator("EASTL basic_string");
                eastl::string::basic_string(local_208, "", (allocator*)&local_160);
                SetLoginCredentials(uVar8);
                eastl::string::~basic_string(local_208);
                pLVar17->PrepareFederatedLogin();
                goto LAB_1000cc5b5;
            case 30:
                this_01 = (LoginManager*)GetLoginManager();
                psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                pAVar27 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator*(psVar10);
                pLVar17 = this_01;
                iVar30 = this_01->GetJagexWebAuthResult();
                if (iVar30 == -3) {
                    lVar13 = pLVar17->CurrentTimeMillis();
                    if (300000 < lVar13 - m_lastJagexWebFlowRequest) {
                        pAVar27->SendAttributionEvent((basic_string*)&auth::AppsFlyerEvent::JAGEX_WEB_AUTH_FAILURE);
                        pAVar27->SendAnalyticsEvent((basic_string*)&auth::AppsFlyerEvent::JAGEX_WEB_AUTH_FAILURE);
                        bVar37 = true;
                        goto LAB_1000cbb74;
                    }
                } else if ((iVar30 == 1407) || (iVar30 == 0)) {
                    this_01->SetEndPosition(-1000);
                    uVar8 = this_01->GetAuthenticatorUserHash();
                    new (&local_160) eastl::allocator("EASTL basic_string");
                    eastl::string::basic_string(local_228, "", (allocator*)&local_160);
                    SetLoginCredentials(uVar8);
                    eastl::string::~basic_string(local_228);
                    m_loginscreen = 10;
                    goto LAB_1000cc5b0;
                }
                if (1 < iVar30 + 3U) {
                    pbVar31 = (basic_string*)&auth::AppsFlyerEvent::JAGEX_WEB_AUTH_FAILURE;
                    if (iVar30 == 1404) {
                        pbVar31 = (basic_string*)&auth::AppsFlyerEvent::JAGEX_WEB_AUTH_NOT_AUTHORISED;
                    }
                    pbVar35 = (basic_string*)&auth::AppsFlyerEvent::JAGEX_WEB_AUTH_CANCELLED;
                    if (iVar30 != 1402) {
                        pbVar35 = pbVar31;
                    }
                    pAVar27->SendAttributionEvent(pbVar35);
                    pAVar27->SendAnalyticsEvent(pbVar35);
                    MoveToInitialScreen(true, false);
                    this_01->SetJagexWebAuthResult(4294967294);
                }
                break;
            case 31:
                pGVar28 = (GraphicsApp*)this_03->Instance();
                cVar3 = pGVar28->HasFocus();
                if (cVar3 == '\0')
                    break;
                goto LAB_1000caa8d;
            case 32:
                iVar33 = m_sy + 130;
                iVar5 = m_sy + 170;
                if (((((local_161 ^ 1) == 0) && (m_sXOf + 25 <= local_170)) && (local_170 <= m_sXOf + 175)) &&
                    ((iVar33 <= (int)local_168 && ((int)local_168 <= iVar5)))) {
                    eastl::allocator::allocator(local_1d0, "EASTL basic_string");
                    eastl::string::basic_string(local_1c0, "secure", local_1d0);
                    local_1a0->GetBaseUrl(this, SUB81(local_1c0, 0));
                    eastl::operator+((eastl*)&local_160, (basic_string*)local_1a0, (value_type*)"m=dob/set_dob.ws");
                    Web::OpenURL((basic_string*)&local_160, true);
                    goto LAB_1000cb1a6;
                }
                if ((local_161 ^ 1) != 0 || local_170 < m_sXOf + 185)
                    break;
                goto LAB_1000cb872;
            case 33:
                bVar29 = local_161 ^ 1;
                if ((((bVar29 == 0) && (m_sXOf + 105 <= local_170)) && (local_170 <= m_sXOf + 255)) &&
                    ((m_sy + 85 <= (int)local_168 && ((int)local_168 <= m_sy + 125)))) {
                    Web::OpenURL((basic_string*)&constants::text::jagexLauncherUrl, true);
                }
                if (((bVar29 != 0 || iVar1 < m_sXOf + 105) || (m_sXOf + 255 < local_170)) ||
                    (((int)local_168 < m_sy + 135 || (m_sy + 175 < (int)local_168))))
                    break;
                goto LAB_1000cb89d;
            }
            break;
        case 16:
        case 19:
            if (((((local_161 ^ 1) == 0) && (m_sXOfCentre + -155 <= iVar30)) && (iVar30 <= m_sXOfCentre + -5)) &&
                ((m_sy + 100 <= (int)local_168 && ((int)local_168 <= m_sy + 140)))) {
                ApplyPendingTransactions((TitleScreen*)(ulong)local_168);
                LoginMes((basic_string*)&constants::text::applying_pending1,
                         (basic_string*)&constants::text::applying_pending2,
                         (basic_string*)&constants::text::applying_pending3);
                m_loginscreen = 17;
                break;
            }
            if ((((local_161 ^ 1) != 0 || iVar30 < m_sXOfCentre + 5) || (m_sXOfCentre + 155 < iVar30)) ||
                (((int)local_168 < m_sy + 100 || (m_sy + 140 < (int)local_168)))) {
                if ((byte)local_178 != 0) {
                    m_loginscreen = DetermineInitialScreen(false);
                }
                break;
            }
            goto LAB_1000c9eb5;
        case 17:
            psVar10 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
            plVar14 = (long*)shared_ptr<ApplicationContext>::operator->(psVar10);
            ptVar22 = (type*)(**(code**)(*plVar14 + 72))(plVar14);
            if (ptVar22 == (type*)0) {
                LoginMes((basic_string*)&constants::text::applying_pending_failed1,
                         (basic_string*)&constants::text::applying_pending_failed2,
                         (basic_string*)&constants::text::applying_pending_failed3);
                m_loginscreen = 19;
            } else {
                local_160.GetApplyPendingTransactionResult();
                bVar37 = local_160.IsNull();
                if (!bVar37) {
                    pvVar25 = local_160.SSOBeginPtr(ptVar22);
                    if (*pvVar25 == (vector)0) {
                        LoginMes((basic_string*)&constants::text::applying_pending_failed1,
                                 (basic_string*)&constants::text::applying_pending_failed2,
                                 (basic_string*)&constants::text::applying_pending_failed3);
                        m_loginscreen = 19;
                    } else {
                        LoginMes((basic_string*)&constants::text::applying_pending_success1,
                                 (basic_string*)&constants::text::applying_pending_success2,
                                 (basic_string*)&constants::text::applying_pending_success3);
                        m_loginscreen = 18;
                    }
                }
            }
            break;
        case 18:
            lVar13 = this_03->CurrentTimeMillis();
            if (m_pendingTransactionLoginDelayStart == 0) {
                m_pendingTransactionLoginDelayStart = lVar13;
            }
            if (lVar13 - m_pendingTransactionLoginDelayStart < 2001)
                break;
            m_pendingTransactionLoginDelayStart = -1;
        LAB_1000c9eb5:
            bVar37 = true;
        LAB_1000c9eba:
            InitiateGameTokenLogin(bVar37, false);
        }
    switchD_1000cad29_caseD_10:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000d2960, 16848 bytes, placed by class name
    // TitleScreen::Draw(shared_ptr<jstring::PixfontGeneric> const&, shared_ptr<jstring::PixfontGeneric> const&, shared_ptr<jstring::PixfontGeneric> const&, bool, graphics::Pix2D&)
    void TitleScreen::Draw(shared_ptr* param_1, shared_ptr* param_2, shared_ptr* param_3, bool param_4,
                           Pix2D* param_5) {
        shared_ptr* psVar1;
        bool bVar2;
        char cVar3;
        byte bVar4;
        int iVar5;
        int iVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        int iVar9;
        Client* pCVar10;
        Js5* pJVar11;
        long lVar12;
        int* piVar13;
        GridRect* pGVar14;
        PixfontGeneric* pPVar15;
        unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>* puVar16;
        long* plVar17;
        undefined8 uVar18;
        char* pcVar19;
        undefined8* puVar20;
        shared_ptr<ApplicationContext>* this;
        ulong uVar21;
        LoginManager* this_00;
        TitleFlames* pTVar22;
        uint* puVar23;
        DeviceOptions* pDVar24;
        _func_decltype_nullptr* p_Var25;
        tm* ptVar26;
        ulong uVar27;
        pixloader* this_01;
        basic_string* pbVar28;
        SafeTime* this_02;
        PixfontGeneric* pPVar29;
        unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>* this_03;
        GameWorld* this_04;
        int iVar30;
        uint uVar31;
        int iVar32;
        undefined1* this_05;
        uint uVar33;
        bool bVar34;
        float fVar35;
        StringConstants local_158[32];
        allocator local_138[8];
        StringConstants local_130[32];
        time_t local_110[4];
        int local_f0;
        int local_ec;
        basic_string local_e8[32];
        eastl local_c8[32];
        ulong local_a8;
        pixloader local_a0;
        int local_80[8];
        PixfontGeneric* local_60;
        PixfontGeneric* local_58;
        PixfontGeneric* local_50;
        Client* local_48;
        shared_ptr* local_40;
        PixfontGeneric* local_38;

        if (m_backgroundMode != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_backgroundMode == false",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/titlescreen.cpp",
                2126, "TitleScreen is in background mode. Don\'t call TitleScreen::Draw()");
        }
        pCVar10 = (Client*)Client::Instance();
        (**(code**)(param_5->field_0 + 8))(param_5);
        this_02 = (SafeTime*)&m_xOf;
        ComputeSafeOffset(&m_xOf, pCVar10);
        m_sXOf = m_xOf + 202;
        m_sXOfCentre = m_xOf + 382;
        local_a8 = this_02->CurrentTimeMillis();
        pPVar29 = (PixfontGeneric*)&m_titleBack;
        this_01 = (pixloader*)0;
        bVar2 = operator!=((shared_ptr*)&m_titleBack, (_func_decltype_nullptr*)0);
        local_48 = pCVar10;
        if (bVar2) {
            local_60 = (PixfontGeneric*)param_2;
            local_40 = param_1;
            cVar3 = m_volumeOptionsBobbleSlider.empty();
            if (cVar3 != '\0') {
                pJVar11 = (Js5*)pCVar10->GetSprites();
                this_01 = &local_a0;
                this_01->Makepix8Array(pJVar11, "volume_options_bobble_slider", "");
                Array<graphics::Pix8, eastl::allocator>::operator=(
                    (Array<graphics::Pix8, eastl::allocator>*)&m_volumeOptionsBobbleSlider, (Array*)this_01);
                local_a0.~Array();
                cVar3 = m_volumeOptionsBobbleSlider.empty();
                if (cVar3 == '\0') {
                    lVar12 = m_volumeOptionsBobbleSlider.end();
                    this_01 = &local_a0;
                    new (this_01) Array<jag::math::Rect<int>, eastl::allocator>(lVar12 - 1);
                    Array<jag::math::Rect<int>, eastl::allocator>::operator=(
                        (Array<jag::math::Rect<int>, eastl::allocator>*)&m_volumeSliderPositions, (Array*)this_01);
                    local_a0.~Array();
                }
            }
            local_58 = (PixfontGeneric*)param_3;
            local_50 = (PixfontGeneric*)param_5;
            iVar5 = m_volumeSliderPositions.end();
            if (0 < iVar5) {
                iVar5 = 616;
                pPVar29 = (PixfontGeneric*)0;
                do {
                    local_38 = (PixfontGeneric*)((long)pPVar29 + 1);
                    uVar33 = m_xOf + iVar5;
                    lVar12 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)&m_titleBack);
                    local_a0.GetUISafeArea();
                    local_80[0] = local_a0.GetLevel();
                    piVar13 = std::min<int>((int*)(lVar12 + 28), local_80);
                    iVar6 = *piVar13;
                    pGVar14 = (GridRect*)Array<jag::math::Rect<int>, eastl::allocator>::operator[](
                        (Array<jag::math::Rect<int>, eastl::allocator>*)&m_volumeSliderPositions, (ulong)pPVar29);
                    lVar12 = Array<graphics::Pix8, eastl::allocator>::operator[](
                        (Array<graphics::Pix8, eastl::allocator>*)&m_volumeOptionsBobbleSlider, 1);
                    iVar32 = *(int*)(lVar12 + 48);
                    lVar12 = Array<graphics::Pix8, eastl::allocator>::operator[](
                        (Array<graphics::Pix8, eastl::allocator>*)&m_volumeOptionsBobbleSlider, 1);
                    this_01 = (pixloader*)(ulong)uVar33;
                    dash3d::GridRect::GridRect(pGVar14, uVar33, iVar6 + -82, iVar32, *(int*)(lVar12 + 52));
                    iVar6 = m_volumeSliderPositions.end();
                    iVar5 = iVar5 + 26;
                    pPVar29 = local_38;
                } while ((long)local_38 < (long)iVar6);
            }
            param_1 = local_40;
            pCVar10 = local_48;
            param_5 = (Pix2D*)local_50;
            param_3 = (shared_ptr*)local_58;
            param_2 = (shared_ptr*)local_60;
            if (m_switchScreen != '\0') {
                pPVar29 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
                    (shared_ptr<jstring::PixfontGeneric>*)local_40);
                pPVar15 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
                    (shared_ptr<jstring::PixfontGeneric>*)local_60);
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
                local_38 = (PixfontGeneric*)CONCAT44(local_38._4_4_, (float)(local_50->field_8 / 2));
                fVar35 = (float)m_initialOpenAnim.GetInterpolation(
                    (float)(long)(m_initialOpenAnimFinishTime - local_a8) * -0.0016666667 + 1.0);
                uVar33 = m_sXOfCentre - (int)(fVar35 * local_38._0_4_);
                this_01 = (pixloader*)(ulong)uVar33;
                param_5->SetClipping(uVar33, 0, m_sXOfCentre + (int)(fVar35 * local_38._0_4_), 503);
            }
            pPVar29 = (PixfontGeneric*)param_5;
            PlotTitle(param_5);
        }
        bVar2 = std::operator!=((unique_ptr*)pPVar29, (_func_decltype_nullptr*)this_01);
        if (bVar2) {
            puVar16 = (unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>*)
                          std::unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>::operator->(
                              (unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>*)pPVar29);
            (**(code**)(*(long*)puVar16 + 32))(puVar16, m_loadPos);
            puVar16 =
                (unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>*)
                    std::unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>::operator->(puVar16);
            (**(code**)(*(long*)puVar16 + 48))(puVar16, &m_loadString);
            plVar17 = (long*)std::unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>::operator->(
                puVar16);
            local_60 = (PixfontGeneric*)param_2;
            (**(code**)(*plVar17 + 40))(plVar17, param_5, m_xOf, 0);
            param_2 = (shared_ptr*)local_60;
        }
        bVar2 = operator==((shared_ptr*)&m_titleBack, (_func_decltype_nullptr*)0);
        if (bVar2) {
            return;
        }
        local_38 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
            (shared_ptr<jstring::PixfontGeneric>*)param_1);
        local_60 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
            (shared_ptr<jstring::PixfontGeneric>*)param_2);
        pPVar29 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
            (shared_ptr<jstring::PixfontGeneric>*)param_3);
        if ((pCVar10->field_8448 == 5) || (pCVar10->field_8448 == 2)) {
            local_38->CentreString((basic_string*)&constants::text::loading_title, m_sXOf + 180, m_sy + 54, 16777215,
                                   -1, param_5);
            uVar33 = m_sy;
            param_5->DrawRect(m_sXOf + 28, m_sy + 62, 304, 34, 9179409);
            param_5->DrawRect(m_sXOf + 29, uVar33 + 63, 302, 32, 0);
            iVar5 = uVar33 + 64;
            (**(code**)(*(long*)param_5 + 32))(param_5, m_sXOf + 30, iVar5, m_loadPos * 3, 30, 9179409);
            (**(code**)(*(long*)param_5 + 32))(param_5, m_sXOf + m_loadPos * 3 + 30, iVar5, m_loadPos * -3 + 300, 30,
                                               0);
            iVar5 = rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID();
            if (iVar5 == 8) {
                m_loadString.assign("Initialising game");
            }
            param_3 = (shared_ptr*)local_38;
            local_38->CentreString((basic_string*)&m_loadString, m_sXOf + 180, m_sy + 85, 16777215, -1, param_5);
        }
        if ((pCVar10->field_8448 == 20) || (m_loginscreen == 20)) {
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBox);
            iVar5 = m_sXOf;
            lVar12 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBox);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, (iVar5 - *(int*)(lVar12 + 48) / 2) + 180,
                                                (m_sy - *(int*)(lVar12 + 52) / 2) + 100);
            pPVar15 = local_38;
            uVar33 = m_sy;
            local_38->CentreString((basic_string*)&m_loginMes1, m_sXOf + 180, m_sy + 30, 16776960, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes2, m_sXOf + 180, uVar33 + 45, 16776960, 0, param_5);
            param_3 = (shared_ptr*)pPVar15;
            pPVar15->CentreString((basic_string*)&m_loginMes3, m_sXOf + 180, uVar33 + 60, 16776960, 0, param_5);
            if ((24 < m_loginscreen) || ((18154643U >> (m_loginscreen & 31) & 1) == 0)) {
                local_50 = (PixfontGeneric*)param_5;
                pPVar15->DrawString((basic_string*)&constants::text::usernameprompt, m_sXOf + 70, uVar33 + 82, 16777215,
                                    0, param_5);
                GetRenderUsername((TitleScreen*)&local_a0);
                while (iVar5 = local_38->StringWid((basic_string*)&local_a0), 200 < iVar5) {
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    eastl::string::substr((ulong)local_80, (ulong)&local_a0);
                    eastl::string::operator=((eastl::string*)&local_a0, (basic_string*)local_80);
                    local_80->~basic_string();
                }
                pcVar19 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar27 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                local_80->Escape(pcVar19, uVar27);
                pPVar15 = local_38;
                local_38->DrawString(local_80, m_sXOf + 110, uVar33 + 82, 16777215, 0, local_50);
                local_80->~basic_string();
                core::stringtools::general::StringTools::MaskPassword((basic_string*)local_80);
                param_5 = (Pix2D*)local_50;
                while (iVar5 = pPVar15->StringWid(local_80), 200 < iVar5) {
                    eastl::string::pop_back();
                }
                eastl::operator+(local_e8, (basic_string*)&constants::text::passwordprompt);
                pPVar15->DrawString(local_e8, m_sXOf + 72, uVar33 + 97, 16777215, 0, param_5);
                local_e8->~basic_string();
                local_80->~basic_string();
                param_3 = (shared_ptr*)&local_a0;
                param_3->~basic_string();
            }
            pCVar10 = local_48;
            if (m_loginscreen == 20) {
                bVar2 = (bool)ShouldRequestTokens();
                param_3 = (shared_ptr*)&m_loginPass;
                PreparePasswordLogin((basic_string*)&m_loginPass, bVar2);
            }
        }
        if ((pCVar10->field_8448 & 4294967294) != 10)
            goto switchD_1000d47e4_caseD_10;
        uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
            (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBox);
        param_3 = (shared_ptr*)param_5;
        (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, m_sXOf, m_sy);
        pPVar15 = local_38;
        iVar6 = m_sXOfCentre;
        iVar5 = m_sXOf;
        uVar33 = m_sy;
        switch (m_loginscreen) {
        case 0:
            puVar20 = (undefined8*)Client::Instance();
            this = (shared_ptr<ApplicationContext>*)(**(code**)*puVar20)(puVar20);
            plVar17 = (long*)shared_ptr<ApplicationContext>::operator->(this);
            plVar17 = (long*)(**(code**)(*plVar17 + 72))(plVar17);
            if ((plVar17 == (long*)0) ||
                (((cVar3 = (**(code**)(*plVar17 + 104))(plVar17),
                   cVar3 == '\0' && (cVar3 = (**(code**)(*plVar17 + 112))(plVar17), cVar3 == '\0')) &&
                  (cVar3 = (**(code**)(*plVar17 + 120))(plVar17), cVar3 == '\0')))) {
                param_3 = (shared_ptr*)local_38;
                local_38->CentreString((basic_string*)&constants::text::welcometorunescape, m_sXOf + 180, uVar33 + 80,
                                       16776960, 0, param_5);
                iVar6 = m_sy + 100;
                uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 27, iVar6);
                param_3->DrawStringMultiline((basic_string*)&constants::text::newuser, iVar5 + 27, iVar6, 144, 40,
                                             16777215, 0, 1, 1, 0, param_5);
                iVar5 = m_sXOf + 187;
                uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5, iVar6);
                pCVar10 = local_48;
                param_3->DrawStringMultiline((basic_string*)&constants::text::existinguser, iVar5, iVar6, 144, 40,
                                             16777215, 0, 1, 1, 0, param_5);
                Client::Instance();
                rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID();
                goto switchD_1000d47e4_caseD_10;
            }
            new (local_80) eastl::allocator("EASTL basic_string");
            new (&local_a0) eastl::string("", local_80);
            cVar3 = (**(code**)(*plVar17 + 104))(plVar17);
            pPVar29 = local_38;
            if (cVar3 == '\0') {
                cVar3 = (**(code**)(*plVar17 + 112))(plVar17);
                if (cVar3 == '\0') {
                    cVar3 = (**(code**)(*plVar17 + 120))(plVar17);
                    if (cVar3 == '\0') {
                        local_40 = (shared_ptr*)0;
                    } else {
                        local_40 = (shared_ptr*)3;
                        eastl::string::operator=((eastl::string*)&local_a0,
                                                 (basic_string*)&constants::text::loginSteam);
                    }
                } else {
                    local_40 = (shared_ptr*)2;
                    eastl::string::operator=((eastl::string*)&local_a0,
                                             (basic_string*)&constants::text::loginGooglePlay);
                }
            } else {
                local_40 = (shared_ptr*)1;
                eastl::string::operator=((eastl::string*)&local_a0, (basic_string*)&constants::text::loginGameCenter);
            }
            pPVar29->CentreString((basic_string*)&constants::text::welcometorunescape, m_sXOf + 180, m_sy + 44,
                                  16776960, 0, param_5);
            uVar33 = m_sy;
            iVar6 = m_sy + 58;
            local_50 = (PixfontGeneric*)param_5;
            lVar12 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleButWide);
            local_58 = (PixfontGeneric*)CONCAT44(local_58._4_4_, iVar5 + 180);
            iVar32 = (iVar5 + 180) - *(int*)(lVar12 + 48) / 2;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleButWide);
            pPVar29 = local_50;
            (**(code**)(*(long*)local_50 + 184))(local_50, uVar18, iVar32, iVar6);
            psVar1 = local_40;
            uVar18 = Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_loginIcon, (ulong)local_40);
            (**(code**)(*(long*)pPVar29 + 184))(pPVar29, uVar18, iVar32 + 4, uVar33 + 62);
            iVar5 = m_sXOfCentre;
            lVar12 = Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_loginIcon, (ulong)psVar1);
            iVar5 = iVar5 + *(int*)(lVar12 + 48) / 2 + 3;
            local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, iVar5);
            local_38->CentreString((basic_string*)&local_a0, iVar5, uVar33 + 84, 16777215, 0, pPVar29);
            lVar12 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleButWide);
            iVar5 = uVar33 + *(int*)(lVar12 + 52);
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleButWide);
            param_5 = (Pix2D*)local_50;
            (**(code**)(*(long*)local_50 + 184))(local_50, uVar18, (int)local_58 - *(int*)(lVar12 + 48) / 2,
                                                 iVar5 + 64);
            uVar18 = Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_loginIcon, 0);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar32 + 5, iVar5 + 68);
            local_38->CentreString((basic_string*)&constants::text::loginRsAccount, (int)local_40, iVar5 + 90, 16777215,
                                   0, param_5);
            goto LAB_1000d56b8;
        case 1:
            local_38->CentreString((basic_string*)&m_loginTitle, m_sXOf + 180, m_sy + 30, 16776960, 0, param_5);
            uVar33 = m_sy;
            pPVar15->CentreString((basic_string*)&m_loginMes1, m_sXOf + 180, m_sy + 65, 16777215, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes2, m_sXOf + 180, uVar33 + 80, 16777215, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes3, m_sXOf + 180, uVar33 + 95, 16777215, 0, param_5);
            iVar6 = m_sXOf;
            uVar33 = m_sy;
            local_40._0_4_ = m_sXOf + 100;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            iVar5 = uVar33 + 130;
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + 27, iVar5);
            iVar6 = uVar33 + 155;
            pPVar15->CentreString((basic_string*)&constants::text::continu, (int)local_40, iVar6, 16777215, 0, param_5);
            iVar32 = m_sXOf;
            local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, m_sXOf + 260);
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            iVar32 = iVar32 + 187;
        LAB_1000d3456:
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar32, iVar5);
            pbVar28 = (basic_string*)&constants::text::cancel;
            pPVar29 = pPVar15;
            goto LAB_1000d4206;
        case 2:
            local_38->CentreString((basic_string*)&m_loginMes1, m_sXOfCentre, m_sy + 30, 16776960, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes2, m_sXOfCentre, uVar33 + 45, 16776960, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes3, m_sXOfCentre, uVar33 + 60, 16776960, 0, param_5);
            pPVar15->DrawString((basic_string*)&constants::text::usernameprompt, m_sXOfCentre + -110, uVar33 + 82,
                                16777215, 0, param_5);
            GetRenderUsername((TitleScreen*)&local_a0);
            while (iVar5 = pPVar15->StringWid((basic_string*)&local_a0), 200 < iVar5) {
                eastl::string::pop_back();
            }
            pcVar19 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar27 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            local_e8->Escape(pcVar19, uVar27);
            pCVar10 = local_48;
            bVar34 = m_loginSelect != 0;
            bVar2 = 19 < local_48->field_8488 % 40;
            if (bVar2 || bVar34) {
                new (local_110) eastl::allocator("EASTL basic_string");
                new (local_c8) eastl::string("", local_110);
            } else {
                local_130->TAG_COLOUR(16776960);
                eastl::operator+(local_c8, (basic_string*)local_130, (value_type*)StringConstants::PIPE);
            }
            eastl::operator+((eastl*)local_80, local_e8, (basic_string*)local_c8);
            local_38->DrawString(local_80, m_sXOfCentre + -70, uVar33 + 82, 16777215, 0, param_5);
            local_80->~basic_string();
            local_c8->~basic_string();
            if (!bVar2 && !bVar34) {
                local_130->~basic_string();
            }
            local_e8->~basic_string();
            core::stringtools::general::StringTools::MaskPassword((basic_string*)local_80);
            while (iVar5 = local_38->StringWid(local_80), 200 < iVar5) {
                eastl::string::pop_back();
            }
            eastl::operator+((basic_string*)local_c8, (basic_string*)&constants::text::passwordprompt);
            bVar34 = m_loginSelect != 1;
            bVar2 = 19 < pCVar10->field_8488 % 40;
            if (bVar2 || bVar34) {
                eastl::allocator::allocator(local_138, "EASTL basic_string");
                pPVar29 = local_38;
                new (local_110) eastl::string("", local_138);
            } else {
                local_158->TAG_COLOUR(16776960);
                pPVar29 = local_38;
                eastl::operator+((eastl*)local_110, (basic_string*)local_158, (value_type*)StringConstants::PIPE);
            }
            eastl::operator+((eastl*)local_e8, (basic_string*)local_c8, (basic_string*)local_110);
            pPVar29->DrawString(local_e8, m_sXOfCentre + -108, uVar33 + 97, 16777215, 0, param_5);
            local_e8->~basic_string();
            local_110->~basic_string();
            if (!bVar2 && !bVar34) {
                local_158->~basic_string();
            }
            local_c8->~basic_string();
            iVar6 = m_sXOfCentre;
            uVar33 = m_sy;
            iVar5 = m_sy + 106;
            local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, m_sXOfCentre + -117);
            lVar12 = GetRadioButton((bool)local_48->field_19104, (bool)m_loginRememberUserCheckboxHighlighted);
            uVar27 = (ulong)local_40 & 4294967295;
            local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, iVar5);
            (**(code**)(*(long*)param_5 + 184))(param_5, lVar12, uVar27, iVar5);
            local_60->DrawString((basic_string*)&constants::text::rememberUsername, iVar6 + *(int*)(lVar12 + 48) + -112,
                                 uVar33 + 119, 16776960, 0, param_5);
            iVar5 = m_sXOfCentre;
            pDVar24 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&local_48
                            ->field_8376);
            bVar2 = (bool)pDVar24->GetHideUserName();
            lVar12 = GetRadioButton(bVar2, (bool)m_loginHideUserCheckboxHighlighted);
            (**(code**)(*(long*)param_5 + 184))(param_5, lVar12, iVar5 + 24, (ulong)local_40 & 4294967295);
            local_60->DrawString((basic_string*)&constants::text::hideUsername, iVar5 + *(int*)(lVar12 + 48) + 29,
                                 uVar33 + 119, 16776960, 0, param_5);
            iVar6 = m_sXOfCentre;
            uVar33 = m_sy;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            iVar5 = uVar33 + 130;
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + -153, iVar5);
            pCVar10 = local_48;
            iVar32 = uVar33 + 155;
            local_38->CentreString((basic_string*)&constants::text::login, iVar6 + -80, iVar32, 16777215, 0, param_5);
            iVar6 = m_sXOfCentre;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + 7, iVar5);
            local_38->CentreString((basic_string*)&constants::text::cancel, iVar6 + 80, iVar32, 16777215, 0, param_5);
            iVar5 = m_sy + 186;
            if (m_loginHelp == 2) {
                eastl::string::operator=((eastl::string*)&m_loginHelpText,
                                         (basic_string*)&constants::text::loginhelp_generic);
            } else {
                eastl::string::operator=((eastl::string*)&m_loginHelpText,
                                         (basic_string*)&constants::text::loginhelp_password);
            }
            iVar6 = m_sXOfCentre;
            if (m_loginDimsInit == '\0') {
                m_loginDimsInit = '\x01';
                iVar32 = local_60->StringWid((basic_string*)&m_loginHelpText);
                new (&m_loginHelpTextDimensions) dash3d::GridRect(iVar6, iVar5, iVar32, 11);
                iVar6 = m_sXOfCentre;
                iVar32 = local_60->StringWid((basic_string*)&constants::text::loginhelp_other);
                new (&m_cantLoginOtherTextDimensions) dash3d::GridRect(iVar6, iVar5, iVar32, 11);
            }
            local_60->CentreString((basic_string*)&m_loginHelpText, m_sXOfCentre, iVar5, 16777215, 0, param_5);
            iVar5 = rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID();
            if ((iVar5 == 8) || (iVar5 = rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID(), iVar5 == 7)) {
                iVar6 = m_sXOfCentre;
                uVar33 = m_sy;
                iVar5 = m_sy + 210;
                lVar12 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleButWide);
                pCVar10 = local_48;
                iVar6 = iVar6 - *(int*)(lVar12 + 48) / 2;
                uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleButWide);
                (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6, iVar5);
                uVar18 = Array<graphics::Pix8, eastl::allocator>::operator[](
                    (Array<graphics::Pix8, eastl::allocator>*)&m_loginIcon, 0);
                (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + 5, uVar33 + 214);
                iVar5 = m_sXOfCentre;
                lVar12 = Array<graphics::Pix8, eastl::allocator>::operator[](
                    (Array<graphics::Pix8, eastl::allocator>*)&m_loginIcon, 1);
                local_38->CentreString((basic_string*)&constants::text::createAccount,
                                       iVar5 + *(int*)(lVar12 + 48) / 2 + 3, uVar33 + 236, 16777215, 0, param_5);
            }
            local_80->~basic_string();
            break;
        case 3:
            local_38->CentreString((basic_string*)&constants::text::invalidusername_a, m_sXOf + 180, m_sy + 30,
                                   16776960, 0, param_5);
            pPVar15 = local_60;
            local_60->CentreString((basic_string*)&constants::text::invalidusername_b, m_sXOf + 180, uVar33 + 50,
                                   16776960, 0, param_5);
            pPVar15->CentreString((basic_string*)&constants::text::invalidusername_c, m_sXOf + 180, uVar33 + 70,
                                  16776960, 0, param_5);
            iVar6 = m_sXOf;
            uVar33 = m_sy;
            iVar5 = m_sXOf + 180;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + 107, uVar33 + 85);
            pPVar29->CentreString((basic_string*)&constants::text::tryagain, iVar5, uVar33 + 110, 16777215, 0, param_5);
            iVar5 = m_sXOf;
            uVar33 = m_sy;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 107, uVar33 + 135);
            pbVar28 = (basic_string*)&constants::text::forgotpassword;
        LAB_1000d369c:
            iVar5 = iVar5 + 180;
            iVar6 = uVar33 + 160;
            pCVar10 = local_48;
            goto LAB_1000d5daf;
        case 4:
            local_38->CentreString((basic_string*)&constants::text::login_enter_pin_title, m_sXOf + 180, m_sy + 30,
                                   16776960, 0, param_5);
            uVar33 = m_sy;
            pPVar15->CentreString((basic_string*)&m_loginMes1, m_sXOf + 180, m_sy + 65, 16777215, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes2, m_sXOf + 180, uVar33 + 80, 16777215, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes3, m_sXOf + 180, uVar33 + 95, 16777215, 0, param_5);
            core::stringtools::general::StringTools::MaskPassword(local_e8);
            eastl::operator+((basic_string*)local_80, (basic_string*)&constants::text::pinprompt);
            iVar5 = pCVar10->field_8488 % 40;
            if (iVar5 < 20) {
                local_130->TAG_COLOUR(16776960);
                pPVar29 = local_38;
                eastl::operator+(local_c8, (basic_string*)local_130, (value_type*)StringConstants::PIPE);
            } else {
                new (local_110) eastl::allocator("EASTL basic_string");
                pPVar29 = local_38;
                new (local_c8) eastl::string("", local_110);
            }
            eastl::operator+((eastl*)&local_a0, (basic_string*)local_80, (basic_string*)local_c8);
            pPVar29->DrawString((basic_string*)&local_a0, m_sXOf + 72, uVar33 + 110, 16777215, 0, param_5);
            local_a0.~basic_string();
            local_c8->~basic_string();
            if (iVar5 < 20) {
                local_130->~basic_string();
            }
            local_80->~basic_string();
            local_e8->~basic_string();
            pPVar29->DrawString((basic_string*)&constants::text::donotremember1, m_sXOf + 171, uVar33 + 102, 16776960,
                                0, param_5);
            pPVar29->DrawString((basic_string*)&constants::text::donotremember2, m_sXOf + 171, uVar33 + 117, 16776960,
                                0, param_5);
            iVar6 = m_sXOf;
            iVar32 = pPVar29->StringWid((basic_string*)&constants::text::donotremember2);
            iVar5 = pPVar29->field_0;
            this_03 = (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonYes;
            if (m_loginTotpRememberUser == '\0') {
                this_03 = (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonNone;
            }
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(this_03);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + iVar32 + 186, (uVar33 + 117) - iVar5);
            iVar5 = m_sXOf;
            uVar33 = m_sy;
            local_58._0_4_ = m_sXOf + 100;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, uVar33 + 130);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 27);
            pPVar29->CentreString((basic_string*)&constants::text::continu, (int)local_58, uVar33 + 155, 16777215, 0,
                                  param_5);
            iVar5 = m_sXOf;
            local_58 = (PixfontGeneric*)CONCAT44(local_58._4_4_, m_sXOf + 260);
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 187, (ulong)local_40 & 4294967295);
            pPVar29->CentreString((basic_string*)&constants::text::cancel, (int)local_58, uVar33 + 155, 16777215, 0,
                                  param_5);
            iVar5 = m_sXOf + 180;
            iVar6 = uVar33 + 186;
            pbVar28 = (basic_string*)&constants::text::loginhelp_password;
            param_3 = (shared_ptr*)local_60;
            goto LAB_1000d54c9;
        case 5:
            local_38->CentreString((basic_string*)&constants::text::forgotpasswordtitle, m_sXOf + 180, m_sy + 30,
                                   16776960, 0, param_5);
            uVar33 = m_sy;
            pPVar29->CentreString((basic_string*)&m_loginMes1, m_sXOf + 180, m_sy + 50, 16776960, 0, param_5);
            pPVar29->CentreString((basic_string*)&m_loginMes2, m_sXOf + 180, uVar33 + 65, 16776960, 0, param_5);
            pPVar29->CentreString((basic_string*)&m_loginMes3, m_sXOf + 180, uVar33 + 80, 16776960, 0, param_5);
            local_38->DrawString((basic_string*)&constants::text::recoverprompt, m_sXOf + 35, uVar33 + 109, 16777215, 0,
                                 param_5);
            GetRenderUsername((TitleScreen*)&local_a0);
            while (iVar5 = local_38->StringWid((basic_string*)&local_a0), 174 < iVar5) {
                eastl::string::substr((ulong)local_80, (ulong)&local_a0);
                eastl::string::operator=((eastl::string*)&local_a0, (basic_string*)local_80);
                local_80->~basic_string();
            }
            pcVar19 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar27 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            local_e8->Escape(pcVar19, uVar27);
            iVar5 = pCVar10->field_8488 % 40;
            if (iVar5 < 20) {
                local_130->TAG_COLOUR(16776960);
                eastl::operator+(local_c8, (basic_string*)local_130, (value_type*)StringConstants::PIPE);
            } else {
                new (local_110) eastl::allocator("EASTL basic_string");
                new (local_c8) eastl::string("", local_110);
            }
            eastl::operator+((eastl*)local_80, local_e8, (basic_string*)local_c8);
            local_38->DrawString(local_80, m_sXOf + 146, uVar33 + 109, 16777215, 0, param_5);
            local_80->~basic_string();
            local_c8->~basic_string();
            if (iVar5 < 20) {
                local_130->~basic_string();
            }
            local_e8->~basic_string();
            iVar6 = m_sXOf;
            uVar33 = m_sy;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            iVar5 = uVar33 + 130;
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + 27, iVar5);
            pCVar10 = local_48;
            iVar32 = uVar33 + 155;
            local_38->CentreString((basic_string*)&constants::text::recover, iVar6 + 100, iVar32, 16777215, 0, param_5);
            iVar6 = m_sXOf;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + 187, iVar5);
            local_38->CentreString((basic_string*)&constants::text::back, iVar6 + 260, iVar32, 16777215, 0, param_5);
            local_60->CentreString((basic_string*)&constants::text::loginhelp_other, m_sXOfCentre, m_sy + 185, 16777215,
                                   0, param_5);
            break;
        case 6:
            local_38->CentreString((basic_string*)&m_loginMes1, m_sXOf + 180, m_sy + 30, 16776960, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes2, m_sXOf + 180, uVar33 + 45, 16776960, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes3, m_sXOf + 180, uVar33 + 60, 16776960, 0, param_5);
            iVar5 = m_sXOf;
            uVar33 = m_sy;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 107, uVar33 + 130);
            iVar6 = uVar33 + 155;
            goto LAB_1000d42b8;
        case 7:
            lVar12 = Client::Instance();
            pPVar15 = local_38;
            uVar33 = m_sy;
            if (*(char*)(lVar12 + 52032) != '\0') {
                uVar27 = 0;
                local_38->CentreString((basic_string*)&m_loginMes1, m_sXOfCentre, m_sy + 30, 16776960, 0, param_5);
                pPVar15->CentreString((basic_string*)&m_loginMes2, m_sXOfCentre, uVar33 + 45, 16776960, 0, param_5);
                pPVar15->CentreString((basic_string*)&m_loginMes3, m_sXOfCentre, uVar33 + 60, 16776960, 0, param_5);
                local_40 = (shared_ptr*)(ulong)(m_sXOfCentre - 150);
                local_ec = uVar33 + 70;
                local_58 = (PixfontGeneric*)(ulong)(uVar33 + 97);
                local_50 = (PixfontGeneric*)param_5;
                do {
                    uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                        (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                    psVar1 = local_40;
                    (**(code**)(*(long*)param_5 + 216))(param_5, uVar18, (ulong)local_40 & 4294967295, local_ec, 30);
                    pbVar28 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                        (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, uVar27);
                    local_f0 = (int)psVar1 + 10;
                    local_38->DrawString(pbVar28, local_f0, (int)local_58, 16777215, 0, param_5);
                    uVar21 = (ulong)m_currentDobCharacter;
                    bVar2 = 19 < pCVar10->field_8488 % 40;
                    pbVar28 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                        (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, uVar27);
                    if (bVar2 || uVar27 != uVar21) {
                        new (local_c8) eastl::allocator("EASTL basic_string");
                        new (local_80) eastl::string("", local_c8);
                    } else {
                        local_e8->TAG_COLOUR(16776960);
                        eastl::operator+((eastl*)local_80, local_e8, (value_type*)StringConstants::PIPE);
                    }
                    eastl::operator+((basic_string*)&local_a0, pbVar28);
                    local_38->DrawString((basic_string*)&local_a0, local_f0, (int)local_58, 16777215, 0, local_50);
                    local_a0.~basic_string();
                    local_80->~basic_string();
                    if (!bVar2 && uVar27 == uVar21) {
                        local_e8->~basic_string();
                    }
                    pCVar10 = local_48;
                    param_5 = (Pix2D*)local_50;
                    if (((uint)uVar27 & 2147483645) == 1) {
                        new (local_80) eastl::allocator("EASTL basic_string");
                        new (&local_a0) eastl::string("/", local_80);
                        iVar5 = (int)local_40;
                        local_38->DrawString((basic_string*)&local_a0, iVar5 + 37, (int)local_58, 16777215, 0, param_5);
                        local_40 = (shared_ptr*)(ulong)(iVar5 + 50);
                        local_a0.~basic_string();
                    } else {
                        local_40 = (shared_ptr*)(ulong)((int)local_40 + 35);
                    }
                    iVar5 = m_sXOfCentre;
                    uVar33 = m_sy;
                    uVar27 = uVar27 + 1;
                } while (uVar27 != 8);
                local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, m_sXOfCentre + -80);
                uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                local_58 = (PixfontGeneric*)CONCAT44(local_58._4_4_, uVar33 + 130);
                (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + -153);
                new (local_80) eastl::allocator("EASTL basic_string");
                new (&local_a0) eastl::string("Submit", local_80);
                param_3 = (shared_ptr*)local_38;
                iVar6 = uVar33 + 155;
                local_38->CentreString((basic_string*)&local_a0, (int)local_40, iVar6, 16777215, 0, param_5);
                local_a0.~basic_string();
                iVar32 = m_sXOfCentre;
                iVar5 = m_sXOfCentre + 80;
                uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar32 + 7, (ulong)local_58 & 4294967295);
                pbVar28 = (basic_string*)&constants::text::cancel;
                goto LAB_1000d54c3;
            }
        LAB_1000d5c74:
            pPVar15 = local_38;
            uVar33 = m_sy;
            local_38->CentreString((basic_string*)&constants::text::dateOfBirthNotSet1, m_sXOf + 180, m_sy + 45,
                                   16776960, 0, param_5);
            pPVar29->CentreString((basic_string*)&constants::text::dateOfBirthNotSet2, m_sXOf + 180, uVar33 + 60,
                                  16776960, 0, param_5);
            pPVar29->CentreString((basic_string*)&constants::text::dateOfBirthNotSet3, m_sXOf + 180, uVar33 + 75,
                                  16776960, 0, param_5);
            iVar6 = m_sXOf;
            uVar33 = m_sy;
            local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, m_sXOf + 100);
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            iVar5 = uVar33 + 130;
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + 27, iVar5);
            pbVar28 = (basic_string*)&constants::text::setDateOfBirth;
            goto LAB_1000d5d49;
        case 8:
            local_38->CentreString((basic_string*)&m_loginMes1, m_sXOf + 180, m_sy + 45, 16776960, 0, param_5);
            pPVar29->CentreString((basic_string*)&m_loginMes2, m_sXOf + 180, uVar33 + 60, 16776960, 0, param_5);
            pPVar29->CentreString((basic_string*)&m_loginMes3, m_sXOf + 180, uVar33 + 75, 16776960, 0, param_5);
            iVar6 = m_sXOf;
            uVar33 = m_sy;
            local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, m_sXOf + 100);
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            iVar5 = uVar33 + 130;
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + 27, iVar5);
            pbVar28 = (basic_string*)&constants::text::login55_terms;
        LAB_1000d5d49:
            iVar6 = uVar33 + 155;
            pPVar15->CentreString(pbVar28, (int)local_40, iVar6, 16777215, 0, param_5);
            iVar32 = m_sXOf;
            local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, m_sXOf + 260);
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar32 + 187, iVar5);
            pbVar28 = (basic_string*)&constants::text::back;
            pPVar29 = pPVar15;
            pCVar10 = local_48;
            iVar5 = (int)local_40;
            goto LAB_1000d5dac;
        case 9:
            local_40._0_4_ = m_sy + 100;
            local_38->CentreString((basic_string*)&m_loginMes1, m_sXOf + 180, m_sy + 50, 16776960, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes2, m_sXOf + 180, uVar33 + 75, 16776960, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes3, m_sXOf + 180, (int)local_40, 16776960, 0, param_5);
            iVar5 = m_sXOf;
            uVar33 = m_sy;
            local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, m_sXOf + 180);
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 107, uVar33 + 120);
            iVar6 = uVar33 + 145;
            pbVar28 = (basic_string*)&constants::text::tryagain;
            pPVar29 = pPVar15;
            iVar5 = (int)local_40;
            goto LAB_1000d5dac;
        case 10:
            local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, m_sXOf + 180);
            local_38->CentreString((basic_string*)&constants::text::welcometorunescape, m_sXOf + 180, m_sy + 38,
                                   16776960, 0, param_5);
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleButLarge);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 71, uVar33 + 58);
            local_a0.SanitiseUnknownDisplayName((basic_string*)&m_displayName);
            cVar3 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_textPlayNow);
            if (cVar3 == '\0') {
                (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 132, uVar33 + 63);
                local_38->CentreString((basic_string*)&m_displayName, (int)local_40, uVar33 + 111, 16776960, 0,
                                       param_5);
            } else {
                (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 132, uVar33 + 76);
            }
            pCVar10 = (Client*)Client::Instance();
            this_00 = (LoginManager*)pCVar10->GetLoginManager();
            cVar3 = this_00->IsUsingJagexLauncher();
            uVar33 = m_sy;
            if (cVar3 == '\0') {
                iVar6 = m_sy + 140;
                uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 107, iVar6);
                new (local_e8) eastl::allocator("EASTL basic_string");
                new (local_80) eastl::string("Sign out", local_e8);
                local_38->CentreString(local_80, (int)local_40, uVar33 + 165, 16777215, 0, param_5);
                local_80->~basic_string();
            }
            param_3 = (shared_ptr*)&local_a0;
            param_3->~basic_string();
            pCVar10 = local_48;
            goto switchD_1000d47e4_caseD_10;
        case 11:
            iVar5 = m_sy + 80;
            new (local_80) eastl::allocator("EASTL basic_string");
            new (&local_a0) eastl::string("Are you sure you want to sign out?", local_80);
            local_38->CentreString((basic_string*)&local_a0, m_sXOf + 180, iVar5, 16776960, 0, param_5);
            local_a0.~basic_string();
            iVar5 = m_sXOf;
            uVar33 = m_sy;
            local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, m_sXOf + 100);
            iVar6 = m_sy + 100;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 27, iVar6);
            new (local_80) eastl::allocator("EASTL basic_string");
            new (&local_a0) eastl::string("Yes", local_80);
            local_38->CentreString((basic_string*)&local_a0, (int)local_40, uVar33 + 125, 16777215, 0, param_5);
            local_a0.~basic_string();
            iVar32 = m_sXOf;
            iVar5 = m_sXOf + 260;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar32 + 187, iVar6);
            new (local_80) eastl::allocator("EASTL basic_string");
            new (&local_a0) eastl::string("No", local_80);
            local_38->CentreString((basic_string*)&local_a0, iVar5, uVar33 + 125, 16777215, 0, param_5);
        LAB_1000d56b8:
            param_3 = (shared_ptr*)&local_a0;
            param_3->~basic_string();
            pCVar10 = local_48;
            goto switchD_1000d47e4_caseD_10;
        case 12:
            pPVar29->CentreString((basic_string*)&constants::text::termsAndPrivacy1, m_sXOfCentre, m_sy + 45, 16777215,
                                  0, param_5);
            pPVar29->CentreString((basic_string*)&constants::text::termsAndPrivacy2, iVar6, uVar33 + 62, 16777215, 0,
                                  param_5);
            pPVar29->CentreString((basic_string*)&constants::text::termsAndPrivacy3, iVar6, uVar33 + 79, 16777215, 0,
                                  param_5);
            pPVar29->CentreString((basic_string*)&constants::text::termsAndPrivacy4, iVar6, uVar33 + 96, 16777215, 0,
                                  param_5);
            iVar6 = m_sXOfCentre;
            uVar33 = m_sy;
            local_40._0_4_ = m_sXOfCentre + -80;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            iVar5 = uVar33 + 120;
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + -153, iVar5);
            pPVar29 = local_38;
            iVar6 = uVar33 + 145;
            local_38->CentreString((basic_string*)&constants::text::accept, (int)local_40, iVar6, 16777215, 0, param_5);
            iVar32 = m_sXOfCentre;
            local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, m_sXOfCentre + 80);
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar32 + 7, iVar5);
            pbVar28 = (basic_string*)&constants::text::decline;
        LAB_1000d4206:
            pCVar10 = local_48;
            iVar5 = (int)local_40;
        LAB_1000d5daf:
            iVar32 = 16777215;
            pPVar15 = pPVar29;
        LAB_1000d5db5:
            pPVar15->CentreString(pbVar28, iVar5, iVar6, iVar32, 0, param_5);
            param_3 = (shared_ptr*)pPVar15;
            goto switchD_1000d47e4_caseD_10;
        case 13:
            pPVar29->CentreString((basic_string*)&constants::text::termsAndPrivacyDeclined1, m_sXOf + 180, m_sy + 60,
                                  16777215, 0, param_5);
            pPVar29->CentreString((basic_string*)&constants::text::termsAndPrivacyDeclined2, m_sXOf + 180, uVar33 + 80,
                                  16777215, 0, param_5);
            iVar5 = m_sXOf;
            uVar33 = m_sy;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 107, uVar33 + 120);
            iVar6 = uVar33 + 145;
        LAB_1000d42b8:
            iVar5 = iVar5 + 180;
            pbVar28 = (basic_string*)&constants::text::back;
        LAB_1000d42c3:
            pPVar29 = local_38;
        LAB_1000d5dac:
            goto LAB_1000d5daf;
        case 14:
            iVar5 = m_sy + 30;
            if (m_currentSupportReason == 2) {
                LoginMes((basic_string*)&constants::text::login32_a, (basic_string*)&constants::text::login32_b,
                         (basic_string*)&constants::text::login32_c);
                pPVar15 = local_38;
            } else if (m_currentSupportReason == 1) {
                LoginMes((basic_string*)&constants::text::login18_a, (basic_string*)&constants::text::login18_b,
                         (basic_string*)&constants::text::login18_c);
            } else if (m_currentSupportReason == 0) {
                LoginMes((basic_string*)&constants::text::login4_a, (basic_string*)&constants::text::login4_b,
                         (basic_string*)&constants::text::login4_c);
            } else {
                MoveToInitialScreen(false, false);
            }
            pPVar15->CentreString((basic_string*)&m_loginMes1, m_sXOf + 180, iVar5, 16776960, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes2, m_sXOf + 180, uVar33 + 50, 16776960, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes3, m_sXOf + 180, uVar33 + 70, 16776960, 0, param_5);
            iVar6 = m_sXOf;
            uVar33 = m_sy;
            iVar5 = m_sXOf + 180;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + 107, uVar33 + 85);
            param_3 = (shared_ptr*)local_38;
            if (m_currentSupportReason == 1) {
                pbVar28 = (basic_string*)&constants::text::recoverAccount;
            } else {
                pbVar28 = (basic_string*)&constants::text::appealPage;
            }
            local_38->CentreString(pbVar28, iVar5, uVar33 + 110, 16777215, 0, param_5);
            iVar6 = m_sXOf;
            uVar33 = m_sy;
            iVar5 = m_sXOf + 180;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + 107, uVar33 + 135);
            iVar6 = uVar33 + 160;
            pbVar28 = (basic_string*)&constants::text::back;
        LAB_1000d54c3:
        LAB_1000d54c9:
            param_3->CentreString(pbVar28, iVar5, iVar6, 16777215, 0, param_5);
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
                    local_38->CentreString((basic_string*)&m_loginMes1, m_sXOf + 180, m_sy + 30, 16776960, 0, param_5);
                    pPVar15->CentreString((basic_string*)&m_loginMes2, m_sXOf + 180, uVar33 + 45, 16776960, 0, param_5);
                    iVar6 = uVar33 + 60;
                    iVar5 = m_sXOf + 180;
                    pbVar28 = (basic_string*)&m_loginMes3;
                    iVar32 = 16776960;
                    goto LAB_1000d5db5;
                default:
                    goto switchD_1000d47e4_caseD_10;
                case 21:
                    pPVar29->CentreString((basic_string*)&constants::text::iosDataDownloadPrompt1, m_sXOfCentre,
                                          m_sy + 45, 16777215, 0, param_5);
                    pPVar29->CentreString((basic_string*)&constants::text::iosDataDownloadPrompt2, iVar6, uVar33 + 62,
                                          16777215, 0, param_5);
                    pPVar29->CentreString((basic_string*)&constants::text::iosDataDownloadPrompt3, iVar6, uVar33 + 79,
                                          16777215, 0, param_5);
                    pPVar29->CentreString((basic_string*)&constants::text::iosDataDownloadPrompt4, iVar6, uVar33 + 96,
                                          16777215, 0, param_5);
                    iVar6 = m_sXOfCentre;
                    uVar33 = m_sy;
                    local_40._0_4_ = m_sXOfCentre + -80;
                    uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                        (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                    iVar5 = uVar33 + 120;
                    (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + -153, iVar5);
                    pPVar15 = local_38;
                    iVar6 = uVar33 + 145;
                    local_38->CentreString((basic_string*)&constants::text::accept, (int)local_40, iVar6, 16777215, 0,
                                           param_5);
                    iVar32 = m_sXOfCentre;
                    local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, m_sXOfCentre + 80);
                    uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                        (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                    iVar32 = iVar32 + 7;
                    goto LAB_1000d3456;
                case 22:
                    iVar5 = m_sy + 100;
                    local_38->CentreString((basic_string*)&m_loginMes1, m_sXOf + 180, m_sy + 50, 16776960, 0, param_5);
                    pPVar29->CentreString((basic_string*)&m_loginMes2, m_sXOf + 180, uVar33 + 75, 16776960, 0, param_5);
                    pCVar10 = local_48;
                    pPVar29->CentreString((basic_string*)&m_loginMes3, m_sXOf + 180, iVar5, 16776960, 0, param_5);
                    iVar6 = m_sXOf;
                    uVar33 = m_sy;
                    iVar5 = m_sXOf + 180;
                    uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                        (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                    (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + 107, uVar33 + 110);
                    iVar6 = uVar33 + 135;
                    pbVar28 = (basic_string*)&constants::text::update_app_button;
                    break;
                case 24:
                    iVar5 = m_sy + 100;
                    local_38->CentreString((basic_string*)&m_loginMes1, m_sXOf + 180, m_sy + 50, 16776960, 0, param_5);
                    pPVar29->CentreString((basic_string*)&m_loginMes2, m_sXOf + 180, uVar33 + 75, 16776960, 0, param_5);
                    pCVar10 = local_48;
                    pPVar29->CentreString((basic_string*)&m_loginMes3, m_sXOf + 180, iVar5, 16776960, 0, param_5);
                    iVar6 = m_sXOf;
                    uVar33 = m_sy;
                    iVar5 = m_sXOf + 180;
                    uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                        (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                    (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + 107, uVar33 + 120);
                    iVar6 = uVar33 + 145;
                    pbVar28 = (basic_string*)&constants::text::ok;
                    break;
                case 26:
                    local_38->CentreString((basic_string*)&constants::text::steamLink1, m_sXOf + 180, m_sy + 50,
                                           16776960, 0, param_5);
                    iVar32 = m_sXOf;
                    local_58 = (PixfontGeneric*)CONCAT44(local_58._4_4_, uVar33 + 60);
                    iVar5 = m_sXOf + 35;
                    uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                        (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleButWide);
                    (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5, uVar33 + 60);
                    uVar18 = Array<graphics::Pix8, eastl::allocator>::operator[](
                        (Array<graphics::Pix8, eastl::allocator>*)&m_loginIcon, 0);
                    iVar6 = iVar32 + 42;
                    local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, iVar6);
                    (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6, uVar33 + 64);
                    new (&m_steamLinkYesBtn) dash3d::GridRect(iVar5, (int)local_58, 286, 40);
                    uVar31 = iVar32 + 183;
                    local_58 = (PixfontGeneric*)(ulong)uVar31;
                    local_38->CentreString((basic_string*)&constants::text::steamLinkYesCaption, uVar31, uVar33 + 87,
                                           16777215, 0, param_5);
                    uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                        (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleButWide);
                    (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5, uVar33 + 105);
                    uVar18 = Array<graphics::Pix8, eastl::allocator>::operator[](
                        (Array<graphics::Pix8, eastl::allocator>*)&m_loginIcon, 3);
                    (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, (ulong)local_40 & 4294967295, uVar33 + 111);
                    pCVar10 = local_48;
                    new (&m_steamLinkNoBtn) dash3d::GridRect(iVar5, uVar33 + 105, 286, 40);
                    iVar6 = uVar33 + 132;
                    pbVar28 = (basic_string*)&constants::text::steamLinkNoCaption;
                    iVar5 = (int)local_58;
                    pPVar29 = local_38;
                    goto LAB_1000d5dac;
                case 28:
                    pPVar29->DrawStringMultiline((basic_string*)&constants::text::steamLinkConfirmCaption, m_sXOf + 70,
                                                 m_sy + 35, 220, 100, 16777215, 0, 1, 0, 16, param_5);
                    iVar5 = m_sXOf;
                    uVar33 = m_sy;
                    iVar6 = m_sXOf + 29;
                    local_40 = (shared_ptr*)(ulong)m_sy;
                    uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                        (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                    iVar32 = uVar33 + 120;
                    (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6, iVar32);
                    new (&m_steamLinkYesBtn) dash3d::GridRect(iVar6, iVar32, 147, 41);
                    pPVar29 = local_38;
                    uVar33 = (int)local_40 + 145;
                    local_40 = (shared_ptr*)(ulong)uVar33;
                    local_38->CentreString((basic_string*)&constants::text::continu, iVar5 + 102, uVar33, 16777215, 0,
                                           param_5);
                    uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                        (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                    (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 191, iVar32);
                    new (&m_steamLinkNoBtn) dash3d::GridRect(iVar5 + 191, iVar32, 147, 41);
                    iVar5 = iVar5 + 264;
                    pbVar28 = (basic_string*)&constants::text::cancel;
                    iVar6 = (int)local_40;
                    pCVar10 = local_48;
                    goto LAB_1000d5daf;
                case 32:
                    goto LAB_1000d5c74;
                case 33:
                    local_38->CentreString((basic_string*)&m_loginMes1, m_sXOf + 180, m_sy + 30, 16776960, 0, param_5);
                    pPVar15 = local_60;
                    local_60->CentreString((basic_string*)&m_loginMes2, m_sXOf + 180, uVar33 + 50, 16776960, 0,
                                           param_5);
                    pPVar15->CentreString((basic_string*)&m_loginMes3, m_sXOf + 180, uVar33 + 70, 16776960, 0, param_5);
                    iVar6 = m_sXOf;
                    uVar33 = m_sy;
                    iVar5 = m_sXOf + 180;
                    uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                        (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                    (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6 + 107, uVar33 + 85);
                    pPVar29->CentreString((basic_string*)&constants::text::downloadLauncher, iVar5, uVar33 + 110,
                                          16777215, 0, param_5);
                    iVar5 = m_sXOf;
                    uVar33 = m_sy;
                    uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                        (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
                    (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 107, uVar33 + 135);
                    pbVar28 = (basic_string*)&constants::text::back;
                    goto LAB_1000d369c;
                }
                goto LAB_1000d42c3;
            }
            local_38->CentreString((basic_string*)&m_loginMes1, m_sXOfCentre, m_sy + 30, 16776960, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes2, m_sXOfCentre, uVar33 + 45, 16776960, 0, param_5);
            iVar6 = uVar33 + 60;
            pbVar28 = (basic_string*)&m_loginMes3;
            iVar32 = 16776960;
            iVar5 = m_sXOfCentre;
            goto LAB_1000d5db5;
        case 16:
        case 19:
            local_38->CentreString((basic_string*)&m_loginMes1, m_sXOfCentre, m_sy + 30, 16776960, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes2, m_sXOfCentre, uVar33 + 45, 16776960, 0, param_5);
            pPVar15->CentreString((basic_string*)&m_loginMes3, m_sXOfCentre, uVar33 + 60, 16776960, 0, param_5);
            if (m_loginscreen == 16) {
                pbVar28 = (basic_string*)&constants::text::apply;
            } else {
                pbVar28 = (basic_string*)&constants::text::retry;
            }
            new (&local_a0) eastl::string(pbVar28);
            iVar5 = m_sXOf;
            iVar6 = m_sy + 100;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5 + 27, iVar6);
            local_38->DrawStringMultiline((basic_string*)&local_a0, iVar5 + 27, iVar6, 144, 40, 16777215, 0, 1, 1, 0,
                                          param_5);
            iVar5 = m_sXOf + 187;
            uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut);
            (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar5, iVar6);
            local_38->DrawStringMultiline((basic_string*)&constants::text::later, iVar5, iVar6, 144, 40, 16777215, 0, 1,
                                          1, 0, param_5);
        }
        param_3 = (shared_ptr*)&local_a0;
        param_3->~basic_string();
    switchD_1000d47e4_caseD_10:
        if (m_initialOpenAnimFinishTime <= (long)local_a8) {
            pTVar22 = (TitleFlames*)std::unique_ptr<TitleFlames, std::default_delete<TitleFlames>>::operator->(
                (unique_ptr<TitleFlames, std::default_delete<TitleFlames>>*)param_3);
            pTVar22->RenderFlames(m_xOf + -22, pCVar10->field_8488, param_5);
            pTVar22 = (TitleFlames*)std::unique_ptr<TitleFlames, std::default_delete<TitleFlames>>::operator->(
                (unique_ptr<TitleFlames, std::default_delete<TitleFlames>>*)pTVar22);
            pTVar22->RenderFlames(m_xOf + 659, pCVar10->field_8488, param_5);
        }
        lVar12 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)&m_titleBack);
        local_a0.GetUISafeArea();
        local_80[0] = local_a0.GetLevel();
        puVar23 = (uint*)std::min<int>((int*)(lVar12 + 28), local_80);
        uVar33 = *puVar23;
        this_05 = &pCVar10->field_8376;
        pDVar24 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_05);
        bVar4 = pDVar24->GetMuteTitleScreen();
        p_Var25 = (_func_decltype_nullptr*)Array<graphics::Pix8, eastl::allocator>::operator[](
            (Array<graphics::Pix8, eastl::allocator>*)&m_titleMute, (ulong)bVar4);
        local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, uVar33 - 55);
        local_a8 = (ulong)uVar33;
        (**(code**)(*(long*)param_5 + 184))(param_5, p_Var25, m_xOf + 710);
        cVar3 = m_volumeOptionsBobbleSlider.empty();
        if (cVar3 == '\0') {
            pDVar24 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_05);
            cVar3 = pDVar24->GetMuteTitleScreen();
            pPVar29 = (PixfontGeneric*)0;
            if (cVar3 == '\0') {
                pDVar24 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_05);
                iVar5 = pDVar24->GetTitleVolume();
                pPVar29 = (PixfontGeneric*)(ulong)(uint)(iVar5 / 25);
            }
            iVar6 = (int)local_a8 + -82;
            local_58 = pPVar29;
            iVar5 = m_volumeOptionsBobbleSlider.end();
            local_50 = (PixfontGeneric*)param_5;
            if (1 < iVar5) {
                uVar27 = 1;
                iVar5 = 616;
                do {
                    iVar32 = m_xOf + iVar5;
                    uVar18 = Array<graphics::Pix8, eastl::allocator>::operator[](
                        (Array<graphics::Pix8, eastl::allocator>*)&m_volumeOptionsBobbleSlider, uVar27);
                    (**(code**)(*(long*)local_50 + 184))(local_50, uVar18, iVar32, iVar6);
                    uVar27 = uVar27 + 1;
                    iVar32 = m_volumeOptionsBobbleSlider.end();
                    iVar5 = iVar5 + 26;
                } while ((long)uVar27 < (long)iVar32);
            }
            p_Var25 = (_func_decltype_nullptr*)Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_volumeOptionsBobbleSlider, 0);
            param_5 = (Pix2D*)local_50;
            (**(code**)(*(long*)local_50 + 184))(local_50, p_Var25, (int)local_58 * 26 + m_xOf + 616, iVar6);
            pCVar10 = local_48;
        }
        if ((5 < (int)pCVar10->field_8448) && (pCVar10->field_8432 == (Language*)Language::EN)) {
            bVar2 = std::operator!=((unique_ptr*)&m_slButton, p_Var25);
            iVar5 = m_xOf;
            if (bVar2) {
                iVar6 = m_xOf + 20;
                uVar18 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_slButton);
                (**(code**)(*(long*)param_5 + 184))(param_5, uVar18, iVar6, (ulong)local_40 & 4294967295);
                eastl::operator+((eastl*)local_80, (basic_string*)&constants::text::world, (value_type*)&DAT_100e35840);
                pCVar10 = (Client*)Client::Instance();
                iVar6 = pCVar10->GetWorldId();
                eastl::to_string(local_c8, iVar6);
                eastl::operator+((eastl*)&local_a0, (basic_string*)local_80, (basic_string*)local_c8);
                pPVar29 = local_60;
                local_38->CentreString((basic_string*)&local_a0, iVar5 + 70, (int)local_a8 + -40, 16777215, 0, param_5);
                local_a0.~basic_string();
                local_c8->~basic_string();
                this_04 = (GameWorld*)local_80;
                this_04->~basic_string();
                cVar3 = this_04->HasWorldListDownloadStarted();
                if (cVar3 == '\0') {
                    lVar12 = Client::Instance();
                    if (*(char*)(lVar12 + 8425) == '\0') {
                        pbVar28 = (basic_string*)&constants::text::clicktoswitch;
                    } else {
                        pbVar28 = (basic_string*)&constants::text::clicktoswitch_mobile;
                    }
                    iVar6 = (int)local_a8;
                } else {
                    iVar6 = (int)local_a8;
                    pbVar28 = (basic_string*)&constants::text::loadingdotdotdot;
                }
                pPVar29->CentreString(pbVar28, iVar5 + 70, iVar6 + -26, 16777215, 0, param_5);
            } else {
                pJVar11 = (Js5*)pCVar10->GetSprites();
                local_a0.Makepix8(pJVar11, "sl_button", "");
                std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator=(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_slButton,
                    (unique_ptr*)&local_a0);
                local_a0.~unique_ptr();
                iVar6 = (int)local_a8;
            }
            iVar32 = m_sXOfCentre;
            local_38 = (PixfontGeneric*)CONCAT44(local_38._4_4_, iVar6 + -82);
            iVar5 = m_sXOfCentre + -270;
            lVar12 = GetRadioButton((bool)m_defaultWorldCheckboxTicked, (bool)m_defaultWorldCheckboxHighlighted);
            (**(code**)(*(long*)param_5 + 184))(param_5, lVar12, iVar5, (ulong)local_38 & 4294967295);
            local_50 = (PixfontGeneric*)param_5;
            local_60->DrawString((basic_string*)&constants::text::setDefaultWorld, iVar32 + *(int*)(lVar12 + 48) + -398,
                                 iVar6 + -69, 16776960, 0, param_5);
            iVar5 = m_sXOfCentre;
            if (local_48->field_8425 == false) {
                iVar32 = m_sXOfCentre + -270;
                lVar12 =
                    GetRadioButton((bool)m_toggleFullscreenCheckboxTicked, (bool)m_toggleFullscreenCheckboxHighlighted);
                pPVar29 = local_50;
                (**(code**)(*(long*)local_50 + 184))(local_50, lVar12, iVar32, iVar6 + -107);
                local_60->DrawString((basic_string*)&constants::text::fullscreen, iVar5 + *(int*)(lVar12 + 48) + -347,
                                     (int)local_a8 + -95, 16776960, 0, pPVar29);
            }
            local_38 = (PixfontGeneric*)CONCAT44(local_38._4_4_, m_sXOfCentre);
            local_c8._0_8_ = std::chrono::system_clock::now();
            local_110[0] = std::chrono::system_clock::to_time_t(local_c8);
            ptVar26 = _gmtime(local_110);
            iVar5 = ptVar26->tm_year;
            new (&local_a0) eastl::string();
            uVar18 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar27 = local_a8;
            eastl::string::sprintf((char*)&local_a0, uVar18, (ulong)(iVar5 + 1900));
            pPVar15 = local_50;
            pPVar29 = local_60;
            local_60->CentreString((basic_string*)&local_a0, (int)local_38._0_4_, (int)uVar27 + -38, 16777215, 0,
                                   local_50);
            iVar5 = (int)uVar27 + -26;
            lVar12 = Client::Instance();
            if (*(char*)(lVar12 + 8425) == '\0') {
                pPVar29->CentreString((basic_string*)&constants::text::gameSubjectToDesktop, (int)local_38._0_4_, iVar5,
                                      16777215, 0, pPVar15);
                uVar7 = pPVar29->StringWid((basic_string*)&constants::text::gameSubjectToDesktop);
                (&constants::text::gameSubjectToDesktop)->find((basic_string*)&constants::text::termsAndConditions, 0);
                eastl::string::substr((ulong)local_80, 4318772336);
                iVar32 = pPVar29->StringWid(local_80);
                local_80->~basic_string();
                (&constants::text::gameSubjectToDesktop)->find((basic_string*)&constants::text::privacyPolicy, 0);
                eastl::string::substr((ulong)local_80, 4318772336);
                local_48 = (Client*)CONCAT44(local_48._4_4_, uVar7);
                iVar6 = pPVar29->StringWid(local_80);
                local_80->~basic_string();
                iVar9 = pPVar29->StringWid((basic_string*)&constants::text::termsAndConditions);
                iVar30 = (int)local_38._0_4_ - (int)local_48 / 2;
                new (&m_termsAndConditionsLinkDimensions) dash3d::GridRect(iVar32 + iVar30, iVar5, iVar9, 11);
                iVar32 = pPVar29->StringWid((basic_string*)&constants::text::privacyPolicy);
                iVar6 = iVar6 + iVar30;
                pGVar14 = (GridRect*)&m_privacyPolicyLinkDimensions;
            } else {
                pPVar29->CentreString((basic_string*)&constants::text::gameSubjectToMobile, (int)local_38._0_4_, iVar5,
                                      16777215, 0, pPVar15);
                iVar32 = pPVar29->StringWid((basic_string*)&constants::text::gameSubjectToMobile);
                (&constants::text::gameSubjectToMobile)->find((basic_string*)&constants::text::termsAndConditions, 0);
                eastl::string::substr((ulong)local_80, 4318772304);
                uVar7 = pPVar29->StringWid(local_80);
                local_80->~basic_string();
                (&constants::text::gameSubjectToMobile)->find((basic_string*)&constants::text::privacyPolicy, 0);
                eastl::string::substr((ulong)local_80, 4318772304);
                uVar8 = pPVar29->StringWid(local_80);
                local_48 = (Client*)CONCAT44(local_48._4_4_, uVar8);
                local_80->~basic_string();
                (&constants::text::gameSubjectToMobile)
                    ->find((basic_string*)&constants::text::softwareLicenceMobile, 0);
                eastl::string::substr((ulong)local_80, 4318772304);
                pPVar29 = local_60;
                local_50 = (PixfontGeneric*)CONCAT44(local_50._4_4_, uVar7);
                iVar6 = local_60->StringWid(local_80);
                local_80->~basic_string();
                iVar9 = pPVar29->StringWid((basic_string*)&constants::text::termsAndConditions);
                iVar30 = (int)local_38._0_4_ - iVar32 / 2;
                new (&m_termsAndConditionsLinkDimensions) dash3d::GridRect((int)local_50 + iVar30, iVar5, iVar9, 11);
                iVar32 = pPVar29->StringWid((basic_string*)&constants::text::privacyPolicy);
                new (&m_privacyPolicyLinkDimensions) dash3d::GridRect((int)local_48 + iVar30, iVar5, iVar32, 11);
                iVar32 = pPVar29->StringWid((basic_string*)&constants::text::softwareLicenceMobile);
                iVar6 = iVar6 + iVar30;
                pGVar14 = (GridRect*)&m_softwareLicenceLinkDimensionsMobile;
            }
            dash3d::GridRect::GridRect(pGVar14, iVar6, iVar5, iVar32, 11);
            local_a0.~basic_string();
        }
    }

    // 0x1000d7890, 432 bytes, placed by class name
    // TitleScreen::Close()
    void TitleScreen::Close() {
        uchar uVar1;
        TitleFlames* this;
        unique_ptr<TitleFlames, std::default_delete<TitleFlames>>* this_00;
        eastl::string local_40[32];
        allocator local_20[8];

        if (m_open != '\0') {
            m_titleBox.reset(0);
            m_titleBut.reset(0);
            m_titleButLarge.reset(0);
            m_textPlayNow.reset(0);
            shared_ptr<graphics::Pix32>::reset();
            shared_ptr<graphics::Pix32>::reset();
            m_logo.reset(0);
            m_titleMute.clear();
            m_volumeOptionsBobbleSlider.clear();
            m_optionsRadioButtonNone.reset(0);
            m_optionsRadioButtonYes.reset(0);
            m_slBack.clear();
            m_slFlags.clear();
            m_slArrows.clear();
            m_slStars.clear();
            this_00 = (unique_ptr<TitleFlames, std::default_delete<TitleFlames>>*)&m_slButton;
            m_slButton.reset(0);
            this = (TitleFlames*)std::unique_ptr<TitleFlames, std::default_delete<TitleFlames>>::operator->(this_00);
            Close();
            m_loading.reset(0);
            if (m_backgroundMode == '\0') {
                midi2::MidiManager::Stop(0, 100);
            }
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            eastl::string::basic_string(local_40, "", local_20);
            SetDisplayName((basic_string*)local_40);
            eastl::string::~basic_string(local_40);
            m_postAction = 4294967295;
            m_worldWarningAccepted = 0;
            m_open = '\0';
            m_backgroundMode = '\0';
            m_inputHandler.ResetState();
            uVar1 = Client::Instance();
            javapal::GameShell::UnregisterInputHandler(uVar1);
        }
    }

    // 0x1000d8ef0, 2240 bytes, placed by class name
    // TitleScreen::Open(jagex3::Js5&, jagex3::Js5&, bool, int)
    void TitleScreen::Open(Js5* param_1, Js5* param_2, bool param_3, int param_4) {
        bool bVar1;
        char cVar2;
        InputForm* this;
        Client* this_00;
        long* plVar3;
        long lVar4;
        shared_ptr<ApplicationContext>* this_01;
        NXTPixToolkit* this_02;
        Client* this_03;
        PacketJ* pPVar5;
        TitleFlames* this_04;
        DeviceOptions* pDVar6;
        DiscordMain* this_05;
        unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence>>* this_06;
        undefined7 in_register_00000011;
        unique_ptr* puVar7;
        _func_decltype_nullptr* p_Var8;
        unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>* this_07;
        TitleScreen* this_08;
        float fVar9;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_98[16];
        shared_ptr local_88;
        allocator local_78[8];
        int local_70;
        undefined4 local_6c;
        undefined1 local_68[32];
        shared_ptr<dash3d::Decor> local_48[16];
        long local_38;

        local_6c = (undefined4)CONCAT71(in_register_00000011, param_3);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_4 == 4) {
            SetupAuthenticatorInputForm((TitleScreen*)local_68);
            this = (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)local_68);
            ShowKeyboard();
            m_loginscreen = 4;
            local_68->~shared_ptr();
        }
        if ((m_open != '\0') && (m_backgroundMode == '\0')) {
            bVar1 = operator!=((shared_ptr*)&m_titleBack, (_func_decltype_nullptr*)0);
            if (bVar1)
                goto LAB_1000d96cd;
        }
        this_00 = (Client*)Client::Instance();
        plVar3 = (long*)OSRenderCore_AudioThread::Instance();
        lVar4 = (((long)plVar3 + *(long*)(*plVar3 + -24)))->HeapBeginPtr();
        cVar2 = ((lVar4 + 19677552))->IsEmpty();
        if (cVar2 == '\0') {
            this_00->ClearSideBars();
        }
        m_backgroundMode = '\0';
        m_inputHandler.ResetState();
        javapal::GameShell::UnregisterInputHandler((uchar)this_00);
        this_00->RegisterInputHandler((InputHandler*)&m_inputHandler, '\x02');
        this_01 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
        plVar3 = (long*)shared_ptr<ApplicationContext>::operator->(this_01);
        (**(code**)(*plVar3 + 120))(plVar3, 0);
        puVar7 = (unique_ptr*)894;
        if (this_00->field_8425 == false) {
            puVar7 = (unique_ptr*)765;
        }
        this_00->SetMinimumCanvasSize((int)puVar7, 503);
        DAT_100f8a910 = this_00->field_8425 ^ 1;
        this_02 = (NXTPixToolkit*)this_00->GetMemoryCache();
        fVar9 = (float)this_00->GetDefaultUIZoom();
        this_02->ZoomUI(fVar9);
        this_03 = (Client*)Client::Instance();
        this_03->OnWindowModeChanged();
        if (((int)this_00->field_8448 < 5) || (this_00->field_8448 == 1000)) {
            bVar1 = std::operator==((unique_ptr*)this_03, (_func_decltype_nullptr*)puVar7);
            if (bVar1) {
                this_07 = (unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>*)local_68;
                std::make_unique<OsrsLoadingScript>();
                std::unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>::operator=(this_07,
                                                                                                          puVar7);
                this_07->~unique_ptr();
                this_03 =
                    (Client*)std::unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>::operator->(
                        this_07);
                (**(code**)(*(long*)this_03 + 16))();
                m_loadingFlamesTriggerSent = '\0';
                m_errorTriggerSent = '\0';
            }
            if (((this_00->field_8448 != 1000) && (4 < (int)this_00->field_8448)) &&
                (m_loadingFlamesTriggerSent == '\0')) {
                m_loadingFlamesTriggerSent = '\x01';
                this_03 =
                    (Client*)std::unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>::operator->(
                        (unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>*)this_03);
                (**(code**)(*(long*)this_03 + 56))(this_03, "BgLoaded");
            }
            if ((this_00->field_8448 == 1000) && (m_errorTriggerSent == '\0')) {
                m_errorTriggerSent = '\x01';
                plVar3 =
                    (long*)std::unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>::operator->(
                        (unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>*)this_03);
                (**(code**)(*plVar3 + 56))(plVar3, "Error");
            }
        } else {
            p_Var8 = (_func_decltype_nullptr*)0;
            m_loading.reset(0);
            bVar1 = SUB41(local_6c, 0);
            if (param_4 == 0) {
                p_Var8 = (_func_decltype_nullptr*)0;
                MoveToInitialScreen(bVar1, false);
            } else {
                m_loginscreen = param_4;
            }
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_98, p_Var8);
            ((shared_ptr*)param_1)->GetFile(local_98, "titlewide.png", (array*)"");
            pPVar5 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_98);
            local_68->createPix32FromPNGData(pPVar5);
            shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&m_titleBack, (shared_ptr*)local_68);
            local_68->~shared_ptr();
            shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)&m_titleBack);
            local_68->CopyHFlip();
            shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&m_titleBack2, (shared_ptr*)local_68);
            local_68->~shared_ptr();
            SetLogo(param_2, this_00->field_52992);
            local_68->Makepix8(param_2, "titlebox", "");
            std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator=(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBox, (unique_ptr*)local_68);
            local_68->~unique_ptr();
            lVar4 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBox);
            m_titleBoxHeight = *(undefined4*)(lVar4 + 52);
            local_68->Makepix8(param_2, "titlebutton", "");
            std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator=(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleBut, (unique_ptr*)local_68);
            local_68->~unique_ptr();
            local_68->Makepix8(param_2, "titlebutton_large", "");
            std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator=(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleButLarge,
                (unique_ptr*)local_68);
            local_68->~unique_ptr();
            local_68->Makepix8(param_2, "play_now_text", "");
            std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator=(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_textPlayNow,
                (unique_ptr*)local_68);
            local_68->~unique_ptr();
            local_68->Makepix8(param_2, "titlebutton_wide42,1", "");
            std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator=(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_titleButWide,
                (unique_ptr*)local_68);
            local_68->~unique_ptr();
            local_68->Makepix8Array(param_2, "login_icons", "");
            Array<graphics::Pix8, eastl::allocator>::operator=((Array<graphics::Pix8, eastl::allocator>*)&m_loginIcon,
                                                               (Array*)local_68);
            local_68->~Array();
            local_68->Makepix8Array(param_2, "title_mute", "");
            Array<graphics::Pix8, eastl::allocator>::operator=((Array<graphics::Pix8, eastl::allocator>*)&m_titleMute,
                                                               (Array*)local_68);
            local_68->~Array();
            local_68->Makepix8(param_2, "options_radio_buttons,0", "");
            std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator=(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonNone,
                (unique_ptr*)local_68);
            local_68->~unique_ptr();
            local_68->Makepix8(param_2, "options_radio_buttons,4", "");
            std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator=(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonNoneHighlight,
                (unique_ptr*)local_68);
            local_68->~unique_ptr();
            local_68->Makepix8(param_2, "options_radio_buttons,2", "");
            std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator=(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonYes,
                (unique_ptr*)local_68);
            local_68->~unique_ptr();
            local_68->Makepix8(param_2, "options_radio_buttons,6", "");
            std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator=(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonYesHighlight,
                (unique_ptr*)local_68);
            local_68->~unique_ptr();
            lVar4 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonNone);
            m_loginCheckboxWidth = *(undefined4*)(lVar4 + 48);
            lVar4 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonNone);
            m_loginCheckboxHeight = *(undefined4*)(lVar4 + 52);
            lVar4 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonNone);
            m_defaultWorldCheckboxWidth = *(undefined4*)(lVar4 + 48);
            this_08 = (TitleScreen*)&m_optionsRadioButtonNone;
            lVar4 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonNone);
            m_defaultWorldCheckboxHeight = *(undefined4*)(lVar4 + 52);
            SetDefaultWorldCheckboxState(this_08);
            SetDefaultToggleFullscreenCheckboxState(this_08);
            this_04 = operator_new(529456);
            local_68->Makepix8Array(param_2, "runes", "");
            TitleFlames::TitleFlames(this_04, (Array*)local_68);
            m_titleFlames.reset(this_04);
            local_68->~Array();
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
            pDVar6 = (DeviceOptions*)
                         std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                             (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_00
                                 ->field_8376);
            cVar2 = pDVar6->GetMuteTitleScreen();
            if (cVar2 == '\0') {
                pDVar6 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_00
                                ->field_8376);
                local_70 = pDVar6->GetTitleVolume();
            }
            local_68._0_8_ = this_00->GetMidi();
            local_48[0] = (shared_ptr<dash3d::Decor>)1;
            make_shared<midi2::MidiRequest, jagex3::Js5*, char const(&)[11], char const(&)[1], int&, bool>(
                (jag*)&local_88, (Js5**)local_68, "scape main", "", &local_70, (bool*)local_48);
            shared_ptr<dash3d::Decor>::shared_ptr(local_48, &local_88);
            eastl::allocator::allocator(local_78, "EASTL vector");
            eastl::vector<shared_ptr<midi2::MidiRequest>, eastl::allocator>::vector(local_68, local_48, 1);
            midi2::MidiManager::Play((vector*)local_68, 0, 0, 0, 100, false);
            local_68->~vector();
            local_48->~shared_ptr();
            midi2::MidiManager::ResetPreviousSongs();
            m_open = '\x01';
            ComputeSafeOffset(&m_xOf, this_00);
            m_sXOf = m_xOf + 202;
            m_sXOfCentre = m_xOf + 382;
            std::unique_ptr<DiscordMain, std::default_delete<DiscordMain>>::operator->(
                (unique_ptr<DiscordMain, std::default_delete<DiscordMain>>*)&this_00->field_8400);
            cVar2 = DiscordMain::GetIsDiscordInitialized();
            if (cVar2 != '\0') {
                this_05 = (DiscordMain*)std::unique_ptr<DiscordMain, std::default_delete<DiscordMain>>::operator->(
                    (unique_ptr<DiscordMain, std::default_delete<DiscordMain>>*)&this_00->field_8400);
                this_06 = (unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence>>*)
                              this_05->GetDiscordRichPresenceModule();
                std::unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence>>::operator->(this_06);
                DiscordRichPresence::UnsetDiscordActivityDetails();
            }
            local_88.~shared_ptr();
            local_98->~shared_ptr();
        }
    LAB_1000d96cd:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000d97b0, 80 bytes, placed by class name
    // TitleScreen::OpenInBackgroundMode()
    void TitleScreen::OpenInBackgroundMode() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(
            uVar1, 0, 5,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/titlescreen.cpp", 269,
            "Starting a logout transfer using the TitleScreen in background mode");
        m_backgroundMode = 1;
        m_open = 1;
        MoveToInitialScreen(false, false);
    }

    // 0x1000da0f0, 320 bytes, placed by class name
    // TitleScreen::Ready(jagex3::Js5&, jagex3::Js5&)
    int TitleScreen::Ready(Js5* param_1, Js5* param_2) {
        undefined* puVar1;
        byte bVar2;
        long lVar3;
        long lVar4;
        char* pcVar5;
        int iVar6;

        puVar1 = PTR_m_spriteNamesInBinary_100ee6aa0;
        lVar3 = PTR_m_spriteNamesInBinary_100ee6aa0->HeapBeginPtr();
        lVar4 = puVar1->end();
        puVar1 = PTR_m_spriteNamesInBinary_100ee6aa0;
        iVar6 = 0;
        if (lVar3 != lVar4) {
            do {
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                bVar2 = param_1->RequestDownload(pcVar5, "");
                iVar6 = iVar6 + (uint)bVar2;
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
                bVar2 = param_2->RequestDownload(pcVar5, "");
                iVar6 = iVar6 + (uint)bVar2;
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
                bVar2 = param_2->RequestDownload(pcVar5, "");
                iVar6 = iVar6 + (uint)bVar2;
                lVar3 = lVar3 + 32;
                lVar4 = puVar1->end();
            } while (lVar3 != lVar4);
        }
        return iVar6;
    }

    // 0x1000da230, 160 bytes, placed by class name
    // TitleScreen::ReadyMax(jagex3::Js5&)
    int TitleScreen::ReadyMax(Js5* param_1) {
        undefined* puVar1;
        int iVar2;
        int iVar3;
        long lVar4;
        long lVar5;
        char* pcVar6;

        iVar2 = PTR_m_spriteNamesInBinary_100ee6aa0->size();
        iVar3 = PTR_m_spriteNames_100ee6a98->size();
        puVar1 = PTR_m_spriteNamesOptional_100ee6aa8;
        iVar3 = iVar3 + iVar2;
        lVar4 = PTR_m_spriteNamesOptional_100ee6aa8->HeapBeginPtr();
        lVar5 = puVar1->end();
        puVar1 = PTR_m_spriteNamesOptional_100ee6aa8;
        if (lVar4 != lVar5) {
            do {
                pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                iVar2 = param_1->GetGroupId(pcVar6);
                iVar3 = iVar3 + (uint)(iVar2 != -1);
                lVar4 = lVar4 + 32;
                lVar5 = puVar1->end();
            } while (lVar4 != lVar5);
        }
        return iVar3;
    }

    // 0x1000db050, 288 bytes, placed by class name
    // TitleScreen::SwitchToWorld(GameWorld const&)
    void TitleScreen::SwitchToWorld(GameWorld* param_1) {
        int iVar1;
        bool bVar2;
        undefined1 uVar3;
        uint uVar4;
        Client* this;
        shared_ptr<ApplicationContext>* this_00;
        long* plVar5;
        uint uVar6;
        TitleScreen* this_01;

        this = (Client*)Client::Instance();
        bVar2 = (bool)param_1->IsMembers();
        if (field_8424 != bVar2) {
            field_8424 = bVar2;
            bVar2 = (bool)param_1->IsMembers();
            configdecoder::ObjType::SwitchMembers(bVar2);
            this_00 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
            plVar5 = (long*)shared_ptr<ApplicationContext>::operator->(this_00);
            uVar3 = param_1->IsMembers();
            (**(code**)(*plVar5 + 128))(plVar5, &ApplicationContext::MEMBERS_PREFERENCE_KEY, uVar3);
        }
        iVar1._0_1_ = param_1->field_4;
        iVar1._1_1_ = param_1->field_5;
        iVar1._2_1_ = param_1->field_6;
        iVar1._3_1_ = param_1->field_7;
        if (iVar1 != field_52992) {
            SetLogo((Js5*)m_pSprites, iVar1);
        }
        eastl::string::operator=((eastl::string*)&field_54224, (basic_string*)&param_1->field_16);
        SetWorldId(*(int*)param_1);
        field_52992 = *(int*)&param_1->field_4;
        this_01 = (TitleScreen*)&field_8456;
        eastl::string::operator=((eastl::string*)this_01, (basic_string*)&param_1->field_88);
        iVar1 = *(int*)(ModeWhere::LIVE + 8);
        uVar6 = 43594;
        if (field_54168 != iVar1) {
            uVar6 = *(int*)param_1 + 40000;
        }
        field_54256 = uVar6;
        uVar4 = 443;
        if (field_54168 != iVar1) {
            uVar4 = *(int*)param_1 + 50000;
        }
        field_54260 = uVar4;
        field_54264 = uVar6;
        m_worldWarningAccepted = 0;
        SetDefaultWorldCheckboxState(this_01);
    }

    // 0x1000db950, 64 bytes, placed by class name
    // TitleScreen::LoginMes(eastl::string const&, eastl::string const&, eastl::string const&)
    void TitleScreen::LoginMes(basic_string* param_1, basic_string* param_2, basic_string* param_3) {
        eastl::string::operator=((eastl::string*)&m_loginMes1, param_1);
        eastl::string::operator=((eastl::string*)&m_loginMes2, param_2);
        eastl::string::operator=((eastl::string*)&m_loginMes3, param_3);
    }

    // 0x1000db990, 32 bytes, placed by class name
    // TitleScreen::SwitchToLoginSupport(int)
    void TitleScreen::SwitchToLoginSupport(int param_1) {
        m_loginscreen = 14;
        m_currentSupportReason = param_1;
    }

    // 0x1000dba20, 288 bytes, placed by class name
    // TitleScreen::MoveToInitialScreen(bool, bool)
    void TitleScreen::MoveToInitialScreen(bool param_1, bool param_2) {
        shared_ptr<ApplicationContext>* this;
        ApplicationContext* this_00;
        Array* pAVar1;
        undefined8* puVar2;
        undefined7 in_register_00000039;
        Array<eastl::string, eastl::allocator> local_30[24];

        m_loginscreen = DetermineInitialScreen(param_2);
        m_loginMes1.assign("");
        m_loginMes2.assign("");
        m_loginMes3.assign("");
        puVar2 = (undefined8*)Client::Instance();
        this = (shared_ptr<ApplicationContext>*)(**(code**)*puVar2)(puVar2);
        this_00 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(this);
        this_00->CloseActiveInputForm();
        if ((int)CONCAT71(in_register_00000039, param_1) != 0) {
            m_loginUser.assign("");
            m_loginPass.assign("");
            m_loginTotpPin = 0;
            m_loginTotpPinString.assign("");
            Array<eastl::string, eastl::allocator>::Array(local_30, 8);
            pAVar1 = (Array*)Array<eastl::string, eastl::allocator>::operator=(
                (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, (Array*)local_30);
            Array<eastl::string, eastl::allocator>::operator=((Array<eastl::string, eastl::allocator>*)&m_dobCharacters,
                                                              pAVar1);
            local_30->~Array();
            m_currentDobCharacter = 0;
        }
    }

    // 0x1001113e0, 352 bytes, placed by class name
    // TitleScreen::SwitchToPendingTransactions()
    void TitleScreen::SwitchToPendingTransactions() {
        Client* pCVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        eastl::string local_860[32];
        allocator local_840[2088];
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar2 = (Client*)Client::Instance();
        pCVar2->SetMainState(10);
        m_loginscreen = 16;
        eastl::allocator::allocator(local_840, "EASTL basic_string");
        eastl::string::basic_string(local_860, "", local_840);
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            new (local_840) eastl::fixed_string<char, 2048, true, eastl::allocator>();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_840, uVar3, uVar4);
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::assign(local_860, pcVar5);
            /* WARNING: Subroutine does not return */
            local_840->~fixed_string();
        }
        eastl::string::operator=(local_860, (basic_string*)&constants::text::pending_transactions3_default);
        LoginMes((basic_string*)&constants::text::pending_transactions1,
                 (basic_string*)&constants::text::pending_transactions2, (basic_string*)local_860);
        eastl::string::~basic_string(local_860);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001123d0, 144 bytes, placed by class name
    // TitleScreen::SetLoginCredentials(int, eastl::string)
    void TitleScreen::SetLoginCredentials(undefined4 param_1, basic_string* param_2) {
        undefined8* puVar1;
        shared_ptr<ApplicationContext>* psVar2;
        long* plVar3;

        puVar1 = (undefined8*)Client::Instance();
        psVar2 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar1)(puVar1);
        plVar3 = (long*)shared_ptr<ApplicationContext>::operator->(psVar2);
        (**(code**)(*plVar3 + 144))(plVar3, &ApplicationContext::AUTHENTICATOR_HASH, param_1);
        SetDisplayName(param_2);
        psVar2 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar1)(puVar1);
        plVar3 = (long*)shared_ptr<ApplicationContext>::operator->(psVar2);
        (**(code**)(*plVar3 + 136))(plVar3, &ApplicationContext::DISPLAYNAME_KEY, &m_displayName);
        OldscapeClientError::SetUserName((basic_string*)&m_displayName);
    }

    // 0x100112bc0, 48 bytes, placed by class name
    // TitleScreen::ShowServerRebootedScreen()
    void TitleScreen::ShowServerRebootedScreen() {
        m_loginscreen = 24;
        LoginMes((basic_string*)&constants::text::server_rebooted1, (basic_string*)&constants::text::server_rebooted2,
                 (basic_string*)&constants::text::server_rebooted3);
    }

    // 0x100112bf0, 48 bytes, placed by class name
    // TitleScreen::ShowServerLogoffScreen()
    void TitleScreen::ShowServerLogoffScreen() {
        m_loginscreen = 24;
        LoginMes((basic_string*)&constants::text::server_logoff1, (basic_string*)&constants::text::server_logoff2,
                 (basic_string*)&constants::text::server_logoff3);
    }

    // 0x10011f240, 16 bytes, base-object constructor, placed by class name
    // TitleScreen::TitleScreen()
    void TitleScreen::TitleScreen() {}

    // 0x10011f250, 16 bytes, complete-object constructor, placed by class name
    // TitleScreen::TitleScreen(): jumps straight to the base-object constructor

    // 0x10011f330, 112 bytes, placed by class name
    // TitleScreen::SetupAuthenticatorInputForm()
    TitleScreen* TitleScreen::SetupAuthenticatorInputForm() {
        undefined8* puVar1;
        shared_ptr<ApplicationContext>* this_00;
        long* plVar2;
        shared_ptr* psVar3;
        InputForm* this_01;

        puVar1 = (undefined8*)Client::Instance();
        this_00 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar1)(puVar1);
        plVar2 = (long*)shared_ptr<ApplicationContext>::operator->(this_00);
        psVar3 = (shared_ptr*)(**(code**)(*plVar2 + 80))(plVar2, 1);
        new (this) shared_ptr<dash3d::Decor>(psVar3);
        this_01 = (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)this);
        this_01->SetText((basic_string*)&m_loginTotpPinString);
        return this;
    }

    // 0x10011f690, 128 bytes, placed by class name
    // TitleScreen::SetLogo(jagex3::Js5&, int)
    void TitleScreen::SetLogo(Js5* param_1, int param_2) {
        char* pcVar1;
        undefined1 local_18[8];

        if ((param_2 & 536870912U) == 0) {
            if ((param_2 & 1073741824U) == 0) {
                if ((param_2 & 256U) == 0) {
                    pcVar1 = "logo_osrs";
                } else {
                    pcVar1 = "logo_speedrunning";
                }
            } else {
                pcVar1 = "logo_seasonal_mode";
            }
        } else {
            pcVar1 = "logo_deadman_mode";
        }
        local_18->Makepix8(param_1, pcVar1, "");
        std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator=(
            (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_logo, (unique_ptr*)local_18);
        local_18->~unique_ptr();
    }

    // 0x10011f760, 64 bytes, placed by class name
    // TitleScreen::SetDefaultWorldCheckboxState()
    void TitleScreen::SetDefaultWorldCheckboxState() {
        DeviceOptions* this_00;
        int iVar1;
        int iVar2;
        Client* this_01;

        this_01 = (Client*)Client::Instance();
        this_00 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_01
                              ->field_8376);
        iVar1 = this_00->GetDefaultWorldId();
        iVar2 = this_01->GetWorldId();
        m_defaultWorldCheckboxTicked = iVar1 == iVar2;
    }

    // 0x10011f7a0, 64 bytes, placed by class name
    // TitleScreen::SetDefaultToggleFullscreenCheckboxState()
    void TitleScreen::SetDefaultToggleFullscreenCheckboxState() {
        long lVar1;
        DeviceOptions* this_00;

        lVar1 = Client::Instance();
        if (*(char*)(lVar1 + 8425) == '\0') {
            this_00 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar1 + 8376));
            m_toggleFullscreenCheckboxTicked = this_00->GetFullscreen();
            return;
        }
    }

    // 0x10011f9a0, 48 bytes, placed by class name
    // TitleScreen::SelectUsernameField()
    void TitleScreen::SelectUsernameField() {
        m_loginSelect = 0;
        SelectLoginFormField(0);
        ShowKeyboard(m_loginSelect);
    }

    // 0x10011f9d0, 192 bytes, placed by class name
    // TitleScreen::SelectLoginFormField(int)
    void TitleScreen::SelectLoginFormField(int param_1) {
        shared_ptr<ApplicationContext>* this;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        shared_ptr* psVar1;
        InputForm* this_01;
        bool bVar2;
        undefined8* puVar3;
        TitleScreen local_38;
        shared_ptr local_28;

        puVar3 = (undefined8*)Client::Instance();
        this = (shared_ptr<ApplicationContext>*)(**(code**)*puVar3)(puVar3);
        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)shared_ptr<ApplicationContext>::operator->(this);
        psVar1 = (shared_ptr*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_00);
        new (&local_28) shared_ptr<dash3d::Decor>(psVar1);
        bVar2 = operator==(&local_28, (_func_decltype_nullptr*)0);
        if (bVar2) {
            SetupUserPassInputForm(&local_38);
            shared_ptr<input::InputForm>::operator=((shared_ptr<input::InputForm>*)&local_28, (shared_ptr*)&local_38);
            local_38.~shared_ptr();
        }
        bVar2 = operator!=(&local_28, (_func_decltype_nullptr*)0);
        if (bVar2) {
            this_01 = (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)&local_28);
            this_01->ShowKeyboard(param_1);
        }
        local_28.~shared_ptr();
    }

    // 0x10011fa90, 96 bytes, placed by class name
    // TitleScreen::ShowKeyboard(int)
    void TitleScreen::ShowKeyboard(int param_1) {
        shared_ptr<ApplicationContext>* psVar1;
        ApplicationContext* this;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        shared_ptr<input::InputForm>* this_01;
        InputForm* this_02;
        char cVar2;
        undefined8* puVar3;

        puVar3 = (undefined8*)Client::Instance();
        psVar1 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar3)(puVar3);
        this = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar1);
        cVar2 = HasInputForm();
        if (cVar2 != '\0') {
            puVar3 = (undefined8*)Client::Instance();
            psVar1 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar3)(puVar3);
            this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)shared_ptr<ApplicationContext>::operator->(psVar1);
            this_01 = (shared_ptr<input::InputForm>*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_00);
            this_02 = (InputForm*)shared_ptr<input::InputForm>::operator->(this_01);
            this_02->ShowKeyboard(param_1);
        }
    }

    // 0x10011faf0, 48 bytes, placed by class name
    // TitleScreen::SelectPasswordField()
    void TitleScreen::SelectPasswordField() {
        m_loginSelect = 1;
        SelectLoginFormField(1);
        ShowKeyboard(m_loginSelect);
    }

    // 0x10011fb20, 144 bytes, placed by class name
    // TitleScreen::IsValidUsernameChar(char16_t)
    ulong TitleScreen::IsValidUsernameChar(wchar16 param_1) {
        long lVar1;
        char* pcVar2;
        ulong uVar3;
        ulong uVar4;
        undefined6 in_register_0000003a;
        int iVar5;
        undefined8 unaff_R15;
        ulong uVar6;

        lVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar6 = CONCAT71((int7)((ulong)unaff_R15 >> 8), lVar1 != 0);
        if (lVar1 != 0) {
            pcVar2 = (char*)m_charList.at(0);
            iVar5 = (int)CONCAT62(in_register_0000003a, param_1);
            if (iVar5 != *pcVar2) {
                uVar4 = 1;
                do {
                    uVar3 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    uVar6 = CONCAT71((int7)(uVar6 >> 8), uVar4 < uVar3);
                    if (uVar4 >= uVar3)
                        break;
                    pcVar2 = (char*)m_charList.at(uVar4);
                    uVar4 = uVar4 + 1;
                } while (iVar5 != *pcVar2);
            }
        }
        return uVar6 & 4294967295;
    }

    // 0x10011fd30, 1136 bytes, placed by class name
    // TitleScreen::WorldSwitchLoop(javapal::GameShell&, graphics::Pix2D&)
    void TitleScreen::WorldSwitchLoop(GameShell* param_1, Pix2D* param_2) {
        uint uVar1;
        uint uVar2;
        char cVar3;
        char cVar4;
        char cVar5;
        int iVar6;
        bool bVar7;
        char cVar8;
        byte bVar9;
        int iVar10;
        int iVar11;
        unique_ptr<GameWorld, std::default_delete<GameWorld>>* this;
        GameWorld* this_00;
        Client* this_01;
        _func_decltype_nullptr* p_Var12;
        Pix2D* pPVar13;
        int iVar14;
        undefined1 local_50[16];
        Pix2D* local_40;
        int local_38;
        int local_34;

        pPVar13 = param_2;
        local_34 = DAT_100f8a918.GetX();
        local_38 = DAT_100f8a91c.GetX();
        cVar5 = DAT_100f8a926;
        cVar4 = DAT_100f8a925;
        cVar3 = DAT_100f8a923;
        cVar8 = DAT_100f8a920;
        m_inputHandler.ResetInteractionState();
        iVar6 = local_38;
        iVar14 = m_slStartColumn;
        if (cVar3 != '\0') {
        LAB_10011fd92:
            WorldSwitchExit(param_2);
            return;
        }
        local_40 = param_2;
        if (((cVar4 != '\0') && (0 < m_slStartColumn)) &&
            (bVar7 = std::operator!=((unique_ptr*)&m_slLeftArrow, (_func_decltype_nullptr*)pPVar13), bVar7)) {
            m_slStartColumn = iVar14 + -1;
        }
        iVar14 = m_slStartColumn;
        if (((cVar5 != '\0') && (m_slStartColumn < m_slMaxScroll)) &&
            (bVar7 = std::operator!=((unique_ptr*)&m_slRightArrow, (_func_decltype_nullptr*)pPVar13), bVar7)) {
            m_slStartColumn = iVar14 + 1;
        }
        iVar14 = m_slLastWorld;
        if (cVar8 == '\0') {
            return;
        }
        if (((local_34 < m_xOf + 280) || (m_xOf + 294 < local_34)) || ((iVar6 < 4 || (18 < iVar6)))) {
            if ((((local_34 < m_xOf + 295) || (m_xOf + 360 < local_34)) || (iVar6 < 4)) || (18 < iVar6)) {
                if (((m_xOf + 390 <= local_34) && (local_34 <= m_xOf + 404)) && ((3 < iVar6 && (iVar6 < 19)))) {
                    iVar14 = 1;
                    goto LAB_10011ff13;
                }
                if (((local_34 < m_xOf + 405) || (m_xOf + 470 < local_34)) || ((iVar6 < 4 || (18 < iVar6)))) {
                    if ((((m_xOf + 500 <= local_34) && (local_34 <= m_xOf + 514)) && (3 < iVar6)) && (iVar6 < 19)) {
                        iVar14 = 2;
                        goto LAB_10011ff13;
                    }
                    if (((local_34 < m_xOf + 515) || (m_xOf + 580 < local_34)) || ((iVar6 < 4 || (18 < iVar6)))) {
                        if ((((m_xOf + 610 <= local_34) && (local_34 <= m_xOf + 624)) && (3 < iVar6)) && (iVar6 < 19)) {
                            iVar14 = 3;
                            goto LAB_10011ff13;
                        }
                        if ((((local_34 < m_xOf + 625) || (m_xOf + 690 < local_34)) || (iVar6 < 4)) || (18 < iVar6)) {
                            if (((local_34 < m_xOf + 708) || (iVar6 < 4)) ||
                                ((m_xOf + 758 < local_34 || (20 < iVar6)))) {
                                if ((m_slLastWorld != -1) &&
                                    (iVar10 = WorldSwitchWorldUnderPointer(), iVar14 == iVar10)) {
                                    this = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)Array<
                                        std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::
                                    operator[]((Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                                                      eastl::allocator>*)&GameWorld::m_list,
                                               (long)m_slLastWorld);
                                    this_00 = (GameWorld*)
                                        std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator*(this);
                                    cVar8 = this_00->IsBeta();
                                    if (cVar8 != '\0') {
                                        eastl::string::operator=((eastl::string*)&this_00->field_88,
                                                                 (basic_string*)&Client::BETA_CACHE_DIR_SUFFIX);
                                    }
                                    this_01 = (Client*)Client::Instance();
                                    pPVar13 = local_40;
                                    uVar1 = this_01->field_52992;
                                    uVar2._0_1_ = this_00->field_4;
                                    uVar2._1_1_ = this_00->field_5;
                                    uVar2._2_1_ = this_00->field_6;
                                    uVar2._3_1_ = this_00->field_7;
                                    if ((uVar2 == uVar1) ||
                                        (((bVar9 = this_00->IsBeta(), (uVar1 & 65536) == 0 || (bVar9 != 0)) &&
                                          (((uVar1 & 65536) == 0 & bVar9) != 1)))) {
                                        SwitchToWorld(this_00);
                                        WorldSwitchExit(pPVar13);
                                        SetDefaultWorldCheckboxState((TitleScreen*)pPVar13);
                                        return;
                                    }
                                    SwitchToWorld(this_00);
                                    WorldSwitchExit(pPVar13);
                                    this_01->ReloadConfigs();
                                    SetDefaultWorldCheckboxState((TitleScreen*)this_01);
                                    return;
                                }
                                if (DAT_100f8ac14 == '\0') {
                                    return;
                                }
                                Client::Instance();
                                local_50->GetUISafeArea();
                                iVar10 = local_50->GetPos();
                                p_Var12 = (_func_decltype_nullptr*)Client::Instance();
                                local_50->GetUISafeArea();
                                iVar11 = local_50->GetLevel();
                                iVar14 = m_slStartColumn;
                                if ((((0 < m_slStartColumn) &&
                                      (bVar7 = std::operator!=((unique_ptr*)&m_slLeftArrow, p_Var12), bVar7)) &&
                                     ((-1 < local_34 && ((local_34 <= DAT_100f8ac08 + m_xOf + DAT_100f8ac00 * -2 &&
                                                          (iVar11 / 2 + -100 <= iVar6)))))) &&
                                    (iVar6 <= iVar11 / 2 + 100)) {
                                    m_slStartColumn = iVar14 + -1;
                                }
                                iVar14 = m_slStartColumn;
                                if (m_slMaxScroll <= m_slStartColumn) {
                                    return;
                                }
                                bVar7 = std::operator!=((unique_ptr*)&m_slRightArrow, p_Var12);
                                if (!bVar7) {
                                    return;
                                }
                                if (local_34 < (iVar10 - (m_xOf + DAT_100f8ac08)) + DAT_100f8ac00 * 2) {
                                    return;
                                }
                                if (iVar10 < local_34) {
                                    return;
                                }
                                if (iVar6 < iVar11 / 2 + -100) {
                                    return;
                                }
                                if (iVar11 / 2 + 100 < iVar6) {
                                    return;
                                }
                                m_slStartColumn = iVar14 + 1;
                                return;
                            }
                            param_2 = local_40;
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

    // 0x1001201a0, 368 bytes, placed by class name
    // TitleScreen::HandleAudioButtons(int, int)
    ulong TitleScreen::HandleAudioButtons(int param_1, int param_2) {
        bool bVar1;
        bool bVar2;
        bool bVar3;
        bool bVar4;
        DeviceOptions* this;
        char cVar5;
        int iVar6;
        long lVar7;
        int* piVar8;
        Rect<int>* this_00;
        int iVar9;
        ulong uVar10;
        undefined1 local_58[20];
        int local_44;
        DeviceOptions* local_40;
        undefined1 local_31;

        lVar7 = Client::Instance();
        local_40 = (DeviceOptions*)((lVar7 + 8376))->get();
        lVar7 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)&m_titleBack);
        local_58->GetUISafeArea();
        local_44 = local_58->GetLevel();
        piVar8 = std::min<int>((int*)(lVar7 + 28), &local_44);
        bVar3 = param_1 < m_xOf + 710;
        bVar1 = m_xOf + 745 < param_1;
        bVar4 = param_2 < *piVar8 + -55;
        bVar2 = *piVar8 + -20 < param_2;
        local_31 = bVar2 || (bVar4 || (bVar1 || bVar3));
        if (bVar2 || (bVar4 || (bVar1 || bVar3))) {
            lVar7 = m_volumeSliderPositions.end();
            if (0 < (int)lVar7) {
                iVar9 = 0;
                uVar10 = 0;
                do {
                    this_00 = (Rect<int>*)Array<jag::math::Rect<int>, eastl::allocator>::operator[](
                        (Array<jag::math::Rect<int>, eastl::allocator>*)&m_volumeSliderPositions, uVar10);
                    cVar5 = this_00->IsInside(param_1, param_2);
                    this = local_40;
                    if (cVar5 != '\0') {
                        if (uVar10 == 0) {
                            local_40->ToggleMuteTitleScreen();
                        } else {
                            cVar5 = local_40->GetMuteTitleScreen();
                            if (cVar5 != '\0') {
                                ToggleMuteTitleScreen();
                            }
                            SetTitleVolume(iVar9);
                        }
                    }
                    uVar10 = uVar10 + 1;
                    iVar6 = m_volumeSliderPositions.end();
                    lVar7 = (long)iVar6;
                    iVar9 = iVar9 + 25;
                } while ((long)uVar10 < lVar7);
            }
        } else {
            lVar7 = local_40->ToggleMuteTitleScreen();
        }
        return CONCAT71((int7)((ulong)lVar7 >> 8), local_31) ^ 1;
    }

    // 0x100120310, 64 bytes, placed by class name
    // TitleScreen::WorldSwitchEnter()
    void TitleScreen::WorldSwitchEnter() {
        if (ListFetch() != '\0') {
            m_switchScreen = 1;
            m_slStartColumn = 0;
            m_slMaxScroll = 0;
            DAT_100f8ac14 = 0;
        }
    }

    // 0x100120350, 144 bytes, placed by class name
    // TitleScreen::SaveDefaultWorld()
    void TitleScreen::SaveDefaultWorld() {
        Client* this_00;
        int iVar1;
        int iVar2;
        DeviceOptions* pDVar3;

        this_00 = (Client*)Client::Instance();
        if (m_defaultWorldCheckboxTicked == '\0') {
            pDVar3 = (DeviceOptions*)
                         std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                             (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_00
                                 ->field_8376);
            iVar1 = pDVar3->GetDefaultWorldId();
            iVar2 = this_00->GetWorldId();
            if (iVar1 == iVar2) {
                pDVar3 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_00
                                ->field_8376);
                iVar1 = -1;
                goto LAB_1001203cc;
            }
        }
        if (m_defaultWorldCheckboxTicked == '\0') {
            return;
        }
        pDVar3 = (DeviceOptions*)
                     std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                         (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&this_00
                             ->field_8376);
        iVar1 = this_00->GetWorldId();
    LAB_1001203cc:
        pDVar3->SetDefaultWorldId(iVar1);
    }

    // 0x100120440, 352 bytes, placed by class name
    // TitleScreen::ThrobMessage(eastl::string const&)
    void TitleScreen::ThrobMessage(basic_string* param_1) {
        long lVar1;
        long lVar2;
        ulong uVar3;
        ulong uVar4;
        eastl::string local_98[32];
        eastl::string local_78[32];
        allocator local_58[32];
        allocator local_38[8];
        allocator local_30[8];

        lVar1 = param_1->CurrentTimeMillis();
        lVar2 = -(lVar1 >> 63);
        lVar1 = lVar1 / 500 + (lVar1 >> 63);
        uVar4 = lVar1 + lVar2;
        uVar3 = lVar1 + lVar2 + 3;
        if (-1 < (long)uVar4) {
            uVar3 = uVar4;
        }
        uVar4 = uVar4 - (uVar3 & 18446744073709551612);
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        eastl::string::basic_string(local_78, "...", uVar4, local_58);
        local_78->append();
        eastl::string::append(local_78, "...", uVar4);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (local_58) eastl::string("", local_38);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_98, "", local_30);
        LoginMes((basic_string*)local_58, (basic_string*)local_78, (basic_string*)local_98);
        eastl::string::~basic_string(local_98);
        local_58->~basic_string();
        eastl::string::~basic_string(local_78);
    }

    // 0x1001205a0, 224 bytes, placed by class name
    // TitleScreen::ResumeInForeground()
    void TitleScreen::ResumeInForeground() {
        undefined4 uVar1;
        Client* pCVar2;
        eastl::string local_70[32];
        eastl::string local_50[32];
        eastl::string local_30[32];

        uVar1 = m_loginscreen;
        eastl::string::basic_string(local_70, (basic_string*)&m_loginMes1);
        eastl::string::basic_string(local_50, (basic_string*)&m_loginMes2);
        eastl::string::basic_string(local_30, (basic_string*)&m_loginMes3);
        pCVar2 = (Client*)Client::Instance();
        pCVar2->SetMainState(10);
        m_loginscreen = uVar1;
        eastl::string::operator=((eastl::string*)&m_loginMes1, (basic_string*)local_70);
        eastl::string::operator=((eastl::string*)&m_loginMes2, (basic_string*)local_50);
        eastl::string::operator=((eastl::string*)&m_loginMes3, (basic_string*)local_30);
        eastl::string::~basic_string(local_30);
        eastl::string::~basic_string(local_50);
        eastl::string::~basic_string(local_70);
    }

    // 0x1001206e0, 144 bytes, placed by class name
    // TitleScreen::MoveToSteamLoginFlow(jag::auth::AuthAccountHint)
    void TitleScreen::MoveToSteamLoginFlow(undefined4 param_1) {
        undefined8* puVar1;
        shared_ptr<ApplicationContext>* this;
        long* plVar2;
        Client* this_00;
        LoginManager* this_01;

        m_previousLoginFlow = 2;
        m_loginscreen = 27;
        LoginMes((basic_string*)&constants::text::steamlogin1, (basic_string*)&constants::text::steamlogin2,
                 (basic_string*)&constants::text::steamlogin3);
        puVar1 = (undefined8*)Client::Instance();
        this = (shared_ptr<ApplicationContext>*)(**(code**)*puVar1)(puVar1);
        plVar2 = (long*)shared_ptr<ApplicationContext>::operator->(this);
        plVar2 = (long*)(**(code**)(*plVar2 + 72))(plVar2);
        if (plVar2 != (long*)0) {
            this_00 = (Client*)Client::Instance();
            this_01 = (LoginManager*)this_00->GetLoginManager();
            this_01->ClearFederatedSignInResult();
            (**(code**)(*plVar2 + 80))(plVar2, param_1, 10);
        }
    }

    // 0x100120790, 64 bytes, placed by class name
    // TitleScreen::OpenTermsAndPrivacyScreen(int)
    byte TitleScreen::OpenTermsAndPrivacyScreen(int param_1) {
        Client* this;
        byte bVar1;

        this = (Client*)Client::Instance();
        bVar1 = HasAcceptedTermsAndPrivacy();
        if (bVar1 == 0) {
            m_loginscreen = 12;
            m_postAction = param_1;
        }
        return bVar1 ^ 1;
    }

    // 0x1001207d0, 80 bytes, placed by class name
    // TitleScreen::OpenDataDownloadPrompt(int)
    bool TitleScreen::OpenDataDownloadPrompt(int param_1) {
        shared_ptr<ApplicationContext>* this_00;
        Option<float>* this_01;
        bool bVar1;
        undefined8* puVar2;
        undefined4 in_register_00000034;

        puVar2 = (undefined8*)Client::Instance();
        this_00 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar2)(puVar2);
        this_01 = (Option<float>*)shared_ptr<ApplicationContext>::operator->(this_00);
        bVar1 = this_01->IsValidValue((BucketAllocatorSTL*)CONCAT44(in_register_00000034, param_1));
        if (!bVar1) {
            m_loginscreen = 21;
            m_postAction = SUB84(this, 0);
        }
        return !bVar1;
    }

    // 0x100120820, 336 bytes, placed by class name
    // TitleScreen::ShowWorldWarningScreen(int)
    undefined8 TitleScreen::ShowWorldWarningScreen(int param_1) {
        uint uVar1;
        long lVar2;
        undefined8 uVar3;
        basic_string* pbVar4;
        basic_string* pbVar5;
        eastl::string* this;
        basic_string* pbVar6;
        bool bVar7;

        if (m_worldWarningAccepted == '\0') {
            lVar2 = Client::Instance();
            uVar1 = *(uint*)(lVar2 + 52992);
            if ((uVar1 & 33554432) == 0) {
                if ((uVar1 & 4) == 0) {
                    if ((uVar1 & 1024) == 0)
                        goto LAB_100120833;
                    eastl::string::operator=((eastl::string*)&m_loginMes1,
                                             (basic_string*)&constants::text::login_warning_high_risk1);
                    eastl::string::operator=((eastl::string*)&m_loginMes2,
                                             (basic_string*)&constants::text::login_warning_high_risk2);
                    pbVar4 = (basic_string*)&constants::text::login_warning_high_risk3;
                } else {
                    bVar7 = (uVar1 & 1024) == 0;
                    pbVar5 = (basic_string*)&constants::text::login_warning_high_risk_pvp1;
                    if (bVar7) {
                        pbVar5 = (basic_string*)PTR_login_warning_pvp1_100ee6ba0;
                    }
                    pbVar6 = (basic_string*)&constants::text::login_warning_high_risk_pvp2;
                    if (bVar7) {
                        pbVar6 = (basic_string*)PTR_login_warning_pvp2_100ee6ba8;
                    }
                    pbVar4 = (basic_string*)&constants::text::login_warning_high_risk_pvp3;
                    if (bVar7) {
                        pbVar4 = (basic_string*)PTR_login_warning_pvp3_100ee6bb0;
                    }
                    eastl::string::operator=((eastl::string*)&m_loginMes1, pbVar5);
                    eastl::string::operator=((eastl::string*)&m_loginMes2, pbVar6);
                }
                eastl::string::operator=((eastl::string*)&m_loginMes3, pbVar4);
                this = (eastl::string*)&m_loginTitle;
                pbVar5 = (basic_string*)&constants::text::login_warning_title;
            } else {
                m_loginTitle.assign("");
                eastl::string::operator=((eastl::string*)&m_loginMes1,
                                         (basic_string*)&constants::text::login_notification_nosave1);
                eastl::string::operator=((eastl::string*)&m_loginMes2,
                                         (basic_string*)&constants::text::login_notification_nosave2);
                this = (eastl::string*)&m_loginMes3;
                pbVar5 = (basic_string*)&constants::text::login_notification_nosave3;
            }
            eastl::string::operator=(this, pbVar5);
            m_loginscreen = 1;
            uVar3 = 1;
            m_postAction = param_1;
        } else {
        LAB_100120833:
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x100120970, 208 bytes, placed by class name
    // TitleScreen::MoveToGameCenterFlow()
    void TitleScreen::MoveToGameCenterFlow() {
        char cVar1;
        Client* this_00;
        shared_ptr<ApplicationContext>* this_01;
        ApplicationContext* this_02;
        long* plVar2;
        LoginManager* pLVar3;

        m_previousLoginFlow = 4;
        this_00 = (Client*)Client::Instance();
        this_01 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
        this_02 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator*(this_01);
        this_02->SendAttributionEvent((basic_string*)&auth::AppsFlyerEvent::CONTINUE_WITH_GAME_CENTER);
        this_02->SendAnalyticsEvent((basic_string*)&auth::AppsFlyerEvent::CONTINUE_WITH_GAME_CENTER);
        m_loginscreen = 15;
        LoginMes((basic_string*)&constants::text::gamecenter1, (basic_string*)&constants::text::gamecenter2,
                 (basic_string*)&constants::text::gamecenter3);
        plVar2 = (long*)(**(code**)(this_02->field_0 + 72))(this_02);
        if ((plVar2 == (long*)0) || (cVar1 = (**(code**)(*plVar2 + 104))(plVar2), cVar1 == '\0')) {
            pLVar3 = (LoginManager*)this_00->GetLoginManager();
            pLVar3->SetThirdPartySignInResult(4294967295);
            return;
        }
        pLVar3 = (LoginManager*)this_00->GetLoginManager();
        pLVar3->SetThirdPartySignInResult(0);
        (**(code**)(*plVar2 + 64))(plVar2);
    }

    // 0x100120a40, 160 bytes, placed by class name
    // TitleScreen::MoveToGoogleLoginFlow()
    void TitleScreen::MoveToGoogleLoginFlow() {
        Client* this_00;
        shared_ptr<ApplicationContext>* this_01;
        long* plVar1;
        LoginManager* pLVar2;

        m_previousLoginFlow = 3;
        this_00 = (Client*)Client::Instance();
        this_01 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
        plVar1 = (long*)shared_ptr<ApplicationContext>::operator*(this_01);
        m_loginscreen = 23;
        LoginMes((basic_string*)&constants::text::googlelogin1, (basic_string*)&constants::text::googlelogin2,
                 (basic_string*)&constants::text::googlelogin3);
        plVar1 = (long*)(**(code**)(*plVar1 + 72))(plVar1);
        pLVar2 = (LoginManager*)this_00->GetLoginManager();
        if (plVar1 == (long*)0) {
            pLVar2->SetThirdPartySignInResult(4294967295);
        } else {
            pLVar2->SetThirdPartySignInResult(0);
            (**(code**)(*plVar1 + 72))(plVar1);
        }
    }

    // 0x100120b60, 208 bytes, placed by class name
    // TitleScreen::MoveToJagexWebFlow()
    void TitleScreen::MoveToJagexWebFlow() {
        Client* this_00;
        shared_ptr<ApplicationContext>* this_01;
        ApplicationContext* this_02;
        long* plVar1;
        LoginManager* this_03;

        m_previousLoginFlow = 5;
        this_00 = (Client*)Client::Instance();
        this_01 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this_00)(this_00);
        this_02 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator*(this_01);
        this_02->SendAttributionEvent((basic_string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT);
        this_02->SendAnalyticsEvent((basic_string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT);
        m_loginscreen = 30;
        LoginMes((basic_string*)&constants::text::jagexWeblogin1, (basic_string*)&constants::text::jagexWeblogin2,
                 (basic_string*)&constants::text::jagexWeblogin3);
        plVar1 = (long*)(**(code**)(this_02->field_0 + 72))(this_02);
        this_03 = (LoginManager*)this_00->GetLoginManager();
        if (plVar1 == (long*)0) {
            LoginManager::SetJagexWebAuthResult();
            MoveToInitialScreen(true, false);
        } else {
            this_03->SetJagexWebAuthResult(4294967294);
            m_lastJagexWebFlowRequest = this_03->CurrentTimeMillis();
            (**(code**)(*plVar1 + 88))(plVar1);
        }
    }

    // 0x100120c30, 192 bytes, placed by class name
    // TitleScreen::MoveToUserPassEntryScreen(bool)
    void TitleScreen::MoveToUserPassEntryScreen(bool param_1) {
        Client* this;
        LoginManager* this_00;
        TitleScreen local_20;

        this = (Client*)Client::Instance();
        this_00 = (LoginManager*)GetLoginManager();
        if (this_00->IsRefreshTokenAvailable() == '\0') {
            m_previousLoginFlow = 1;
            eastl::string::operator=((eastl::string*)&m_loginMes1, (basic_string*)&constants::text::pleaselogin1);
            eastl::string::operator=((eastl::string*)&m_loginMes2, (basic_string*)&constants::text::pleaselogin2);
            eastl::string::operator=((eastl::string*)&m_loginMes3, (basic_string*)&constants::text::pleaselogin3);
            m_loginscreen = 2;
            if (param_1) {
                m_loginPass.assign("");
            }
            RestoreLoginUserFromRememberedUsername();
            SetupUserPassInputForm(&local_20);
            local_20.~shared_ptr();
            SetDefaultLoginSelect(&local_20);
        } else {
            m_loginscreen = 10;
        }
    }

    // 0x100120cf0, 336 bytes, placed by class name
    // TitleScreen::LaunchAccountCreationFlow()
    void TitleScreen::LaunchAccountCreationFlow() {
        undefined8 uVar1;
        undefined8* puVar2;
        shared_ptr<ApplicationContext>* this;
        long* plVar3;
        basic_string* pbVar4;
        eastl::string local_88[32];
        eastl local_68[32];
        basic_string local_48[32];
        allocator local_28[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(
            uVar1, 0, 5,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/titlescreen.cpp", 4187,
            "launchAccountCreationFlow");
        puVar2 = (undefined8*)Client::Instance();
        this = (shared_ptr<ApplicationContext>*)(**(code**)*puVar2)(puVar2);
        plVar3 = (long*)shared_ptr<ApplicationContext>::operator*(this);
        plVar3 = (long*)(**(code**)(*plVar3 + 72))(plVar3);
        if (plVar3 == (long*)0) {
            pbVar4 = (basic_string*)Client::Instance();
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_88, "secure", local_28);
            local_48->GetBaseUrl(pbVar4, SUB81(local_88, 0));
            eastl::operator+(local_68, local_48, (value_type*)"m=account-creation/g=oldscape/create_account_funnel.ws");
            local_48->~basic_string();
            eastl::string::~basic_string(local_88);
            Web::OpenURL((basic_string*)local_68, true);
            local_68->~basic_string();
        } else {
            (**(code**)(*plVar3 + 232))(plVar3, &auth::AppsFlyerEvent::ACCOUNT_CREATION_INITIATED);
            (**(code**)(*plVar3 + 224))(plVar3, &auth::AppsFlyerEvent::ACCOUNT_CREATION_INITIATED);
            (**(code**)(*plVar3 + 128))(plVar3);
        }
    }

    // 0x100120e40, 368 bytes, placed by class name
    // TitleScreen::ApplyPostAction()
    void TitleScreen::ApplyPostAction() {
        char cVar1;
        undefined8* puVar2;
        shared_ptr<ApplicationContext>* psVar3;
        ApplicationContext* pAVar4;
        long* plVar5;
        TitleScreen* pTVar6;
        int in_ESI;

        cVar1 = OpenTermsAndPrivacyScreen(m_postAction);
        if ((cVar1 == '\0') &&
            (cVar1 = OpenDataDownloadPrompt((TitleScreen*)(ulong)m_postAction, in_ESI), cVar1 == '\0')) {
            switch (m_postAction) {
            case 0:
                LaunchAccountCreationFlow();
                MoveToInitialScreen(false, false);
                break;
            default:
                cVar1 = ShowWorldWarningScreen(m_postAction);
                if (cVar1 == '\0') {
                    puVar2 = (undefined8*)Client::Instance();
                    psVar3 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar2)(puVar2);
                    pAVar4 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar3);
                    pAVar4->SendAttributionEvent((basic_string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT);
                    puVar2 = (undefined8*)Client::Instance();
                    psVar3 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar2)(puVar2);
                    pAVar4 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar3);
                    pAVar4->SendAnalyticsEvent((basic_string*)&auth::AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT);
                    puVar2 = (undefined8*)Client::Instance();
                    psVar3 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar2)(puVar2);
                    plVar5 = (long*)shared_ptr<ApplicationContext>::operator->(psVar3);
                    pTVar6 = (TitleScreen*)(**(code**)(*plVar5 + 72))();
                    if ((pTVar6 == (TitleScreen*)0) || (cVar1 = (**(code**)(*(long*)pTVar6 + 96))(), cVar1 == '\0')) {
                        MoveToUserPassEntryScreen(false);
                    } else {
                        MoveToJagexWebFlow(pTVar6);
                    }
                }
                break;
            case 2:
                pTVar6 = (TitleScreen*)2;
                cVar1 = ShowWorldWarningScreen(2);
                if (cVar1 == '\0') {
                    MoveToGameCenterFlow(pTVar6);
                }
                break;
            case 3:
                pTVar6 = (TitleScreen*)3;
                cVar1 = ShowWorldWarningScreen(3);
                if (cVar1 == '\0') {
                    MoveToGoogleLoginFlow(pTVar6);
                }
                break;
            case 4:
                cVar1 = ShowWorldWarningScreen(4);
                if (cVar1 == '\0') {
                    InitiateGameTokenLogin(false, false);
                }
                break;
            case 5:
                cVar1 = ShowWorldWarningScreen(5);
                if (cVar1 == '\0') {
                    MoveToSteamLoginFlow(0);
                }
            }
            m_postAction = 4294967295;
        }
    }

    // 0x100120fb0, 288 bytes, placed by class name
    // TitleScreen::PreparePasswordLogin(eastl::string const&, bool)
    void TitleScreen::PreparePasswordLogin(basic_string* param_1, bool param_2) {
        Client* this;
        shared_ptr<ApplicationContext>* this_00;
        long* plVar2;
        type* ptVar3;
        LoginManager* this_01;
        vector* pvVar4;
        undefined8 uVar5;
        Nullable<LocLayer> local_38[8];

        this = (Client*)Client::Instance();
        this_00 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
        plVar2 = (long*)shared_ptr<ApplicationContext>::operator*(this_00);
        ptVar3 = (type*)(**(code**)(*plVar2 + 72))(plVar2);
        this_01 = (LoginManager*)GetLoginManager();
        if (ptVar3 == (type*)0) {
            this_01->PreparePasswordLogin(param_1, param_2);
        } else {
            if (m_loginscreen != 20) {
                m_loginscreen = 20;
                (**(code**)(*(long*)ptVar3 + 248))(ptVar3);
            }
            (**(code**)(*(long*)ptVar3 + 240))(local_38);
            if (local_38->IsNull()) {
                return;
            }
            pvVar4 = local_38->SSOBeginPtr(ptVar3);
            if (*pvVar4 == (vector)0) {
                this_01->PreparePasswordLogin(param_1, param_2);
            } else {
                this_01->PreparePasswordLoginForTokenOnlyRequest(param_1);
            }
        }
        m_loginscreen = 2;
        DeriveTOTPMode(false);
        if (field_8448 == 45) {
            uVar5 = 50;
        } else {
            uVar5 = 20;
        }
        SetMainState(uVar5);
    }

    // 0x100121290, 64 bytes, placed by class name
    // TitleScreen::SetDefaultLoginSelect()
    void TitleScreen::SetDefaultLoginSelect() {
        long lVar1;

        lVar1 = Client::Instance();
        if (*(char*)(lVar1 + 19104) != '\0') {
            lVar1 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar1 != 0) {
                SelectPasswordField();
                return;
            }
        }
        SelectUsernameField();
    }

    // 0x1001212d0, 640 bytes, placed by class name
    // TitleScreen::LoadDevCredentialsFromFile()
    void TitleScreen::LoadDevCredentialsFromFile() {
        bool bVar1;
        Client* this_00;
        SceneViewData* this_01;
        Filename* this_02;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        char* extraout_RDX;
        TitleScreen* this_03;
        undefined1 auVar6[16];
        TitleScreen local_2d8[2];
        File local_2b8;
        undefined1 local_298[320];
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (Client*)Client::Instance();
        this_01 = (SceneViewData*)this_00->GetLoginManager();
        this_02 = (Filename*)this_01->GetDevCredentialsOutputDirectory();
        auVar6 = this_01->GetRenderTargets();
        bVar1 = eastl::operator==((eastl*)this_02, (basic_string*)"", auVar6._8_8_);
        if (!bVar1) {
            bVar1 = eastl::operator==(auVar6._0_8_, (basic_string*)"", extraout_RDX);
            if (!bVar1) {
                Filename::operator/(local_158, this_02);
                new (local_298) callstack::Callstack();
                new ((local_298 + 8)) File(local_158, 2, local_298);
                if (local_298->IsValid() == '\0') {
                    ((local_298 + 8))->seek(0, 0, 0);
                    local_2b8.readline();
                    eastl::string::operator=((eastl::string*)&m_loginUser, (basic_string*)&local_2b8);
                    local_2b8.~basic_string();
                    local_2b8.readline();
                    stringtools::rot13<eastl::string, eastl::string>((stringtools*)local_2d8,
                                                                     (basic_string*)&local_2b8);
                    eastl::string::operator=((eastl::string*)&m_loginPass, (basic_string*)local_2d8);
                    this_03 = local_2d8;
                    this_03->~basic_string();
                    DirectLogin(this_03);
                } else {
                    uVar3 = logger::default_logger();
                    uVar4 = local_158->GetName();
                    local_2b8.GetErrorString();
                    uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar3, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/titlescreen.cpp",
                                        4357, "Error opening dev credentials file %s: %s", uVar4, uVar5);
                }
                local_2b8.~basic_string();
                ((local_298 + 8))->~File();
                local_158->~pair();
                goto LAB_1001214c5;
            }
        }
        LoginMes((basic_string*)&constants::text::loginDevFileNotFound_a,
                 (basic_string*)&constants::text::loginDevFileNotFound_b,
                 (basic_string*)&constants::text::loginDevFileNotFound_c);
    LAB_1001214c5:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001215a0, 112 bytes, placed by class name
    // TitleScreen::SetupAccountAppealInputForm()
    TitleScreen* TitleScreen::SetupAccountAppealInputForm() {
        undefined8* puVar1;
        shared_ptr<ApplicationContext>* this_00;
        long* plVar2;
        shared_ptr* psVar3;
        InputForm* this_01;

        puVar1 = (undefined8*)Client::Instance();
        this_00 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar1)(puVar1);
        plVar2 = (long*)shared_ptr<ApplicationContext>::operator->(this_00);
        psVar3 = (shared_ptr*)(**(code**)(*plVar2 + 80))(plVar2, 3);
        new (this) shared_ptr<dash3d::Decor>(psVar3);
        this_01 = (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)this);
        this_01->SetText((basic_string*)&m_loginUser);
        return this;
    }

    // 0x100121610, 384 bytes, placed by class name
    // TitleScreen::AccountAppealLogin()
    void TitleScreen::AccountAppealLogin() {
        undefined4 uVar1;
        ulonglong uVar3;
        undefined8* puVar4;
        shared_ptr<ApplicationContext>* psVar5;
        ApplicationContext* pAVar6;
        basic_string* pbVar7;
        basic_string* pbVar8;
        basic_string* pbVar9;

        m_loginUser.trim();
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() ==
            0) {
            pbVar9 = (basic_string*)&constants::text::account_appeal_login_a;
            pbVar8 = (basic_string*)&constants::text::account_appeal_login_b;
            pbVar7 = (basic_string*)&constants::text::account_appeal_login_c;
        } else {
            uVar3 = oldscape::AccountAppealLogin::GetChallengeId();
            if (uVar3 == 0) {
                uVar1 = 5;
            } else {
                uVar1 = oldscape::AccountAppealLogin::DoAccountAppealLogin(uVar3, (basic_string*)&m_loginUser);
            }
            switch (uVar1) {
            case 2:
                puVar4 = (undefined8*)Client::Instance();
                psVar5 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar4)(puVar4);
                pAVar6 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar5);
                pAVar6->SendAttributionEvent((basic_string*)&auth::AppsFlyerEvent::ACCOUNT_RECOVERY_INITIATED);
                puVar4 = (undefined8*)Client::Instance();
                psVar5 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar4)(puVar4);
                pAVar6 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar5);
                pAVar6->SendAnalyticsEvent((basic_string*)&auth::AppsFlyerEvent::ACCOUNT_RECOVERY_INITIATED);
                LoginMes((basic_string*)&constants::text::accountappeal_m2_a,
                         (basic_string*)&constants::text::accountappeal_m2_b,
                         (basic_string*)&constants::text::accountappeal_m2_c);
                m_loginscreen = 6;
                return;
            case 3:
                pbVar9 = (basic_string*)&constants::text::accountappeal_m3_a;
                pbVar8 = (basic_string*)&constants::text::accountappeal_m3_b;
                pbVar7 = (basic_string*)&constants::text::accountappeal_m3_c;
                break;
            case 4:
                pbVar9 = (basic_string*)&constants::text::accountappeal_m4_a;
                pbVar8 = (basic_string*)&constants::text::accountappeal_m4_b;
                pbVar7 = (basic_string*)&constants::text::accountappeal_m4_c;
                break;
            case 5:
                pbVar9 = (basic_string*)&constants::text::accountappeal_m5_a;
                pbVar8 = (basic_string*)&constants::text::accountappeal_m5_b;
                pbVar7 = (basic_string*)&constants::text::accountappeal_m5_c;
                break;
            case 6:
                pbVar9 = (basic_string*)&constants::text::accountappeal_m6_a;
                pbVar8 = (basic_string*)&constants::text::accountappeal_m6_b;
                pbVar7 = (basic_string*)&constants::text::accountappeal_m6_c;
                break;
            case 7:
                pbVar9 = (basic_string*)&constants::text::accountappeal_m7_a;
                pbVar8 = (basic_string*)&constants::text::accountappeal_m7_b;
                pbVar7 = (basic_string*)&constants::text::accountappeal_m7_c;
                break;
            default:
                goto switchD_100121686_default;
            }
        }
        LoginMes(pbVar9, pbVar8, pbVar7);
    switchD_100121686_default:
    }

    // 0x100121790, 64 bytes, placed by class name
    // TitleScreen::GetCurrentDobInputBoxFromCoordinates(int, int)
    uint TitleScreen::GetCurrentDobInputBoxFromCoordinates(int param_1, int param_2) {
        int iVar1;
        uint uVar2;

        uVar2 = 0;
        do {
            if (param_2 <= param_1 + 30) {
                return uVar2;
            }
            iVar1 = param_1 + 35;
            param_1 = param_1 + 50;
            if ((uVar2 & 2147483645) != 1) {
                param_1 = iVar1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
        return 0;
    }

    // 0x1001217d0, 112 bytes, placed by class name
    // TitleScreen::SetupDobInputForm()
    TitleScreen* TitleScreen::SetupDobInputForm() {
        undefined8* puVar1;
        shared_ptr<ApplicationContext>* this_00;
        long* plVar2;
        shared_ptr* psVar3;
        InputForm* this_01;

        puVar1 = (undefined8*)Client::Instance();
        this_00 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar1)(puVar1);
        plVar2 = (long*)shared_ptr<ApplicationContext>::operator->(this_00);
        psVar3 = (shared_ptr*)(**(code**)(*plVar2 + 80))(plVar2, 4);
        new (this) shared_ptr<dash3d::Decor>(psVar3);
        this_01 = (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)this);
        this_01->SetText((basic_string*)&m_loginUser);
        return this;
    }

    // 0x100121840, 160 bytes, placed by class name
    // TitleScreen::CheckAndSetDobInput()
    undefined8 TitleScreen::CheckAndSetDobInput() {
        long lVar2;
        basic_string* pbVar3;
        basic_string* pbVar4;
        basic_string* pbVar5;

        lVar2 = GetDobFromUserInput();
        if (lVar2 == -1) {
            pbVar5 = (basic_string*)&constants::text::dobDateFormatError1;
            pbVar4 = (basic_string*)&constants::text::dobDateFormatError2;
            pbVar3 = (basic_string*)&constants::text::dobDateFormatError3;
        } else {
            if (lVar2 != -2) {
                if (CheckPlayerIsOver13(lVar2) == '\0') {
                    m_dobInput = 8388607;
                } else {
                    m_dobInput = ((int)(SUB168(SEXT816(lVar2) * SEXT816(1749024623285053783), 8) >> 13) -
                                  (SUB164(SEXT816(lVar2) * SEXT816(1749024623285053783), 12) >> 31)) +
                                 -11745;
                }
                return CONCAT71((uint7)(uint3)((uint)m_dobInput >> 8), 1);
            }
            pbVar5 = (basic_string*)&constants::text::dobDateCharactersMissingError1;
            pbVar4 = (basic_string*)&constants::text::dobDateCharactersMissingError2;
            pbVar3 = (basic_string*)&constants::text::dobDateCharactersMissingError3;
        }
        SendToDobScreenWithErrorMessage(pbVar5, pbVar4, pbVar3);
        return 0;
    }

    // 0x1001218e0, 48 bytes, placed by class name
    // TitleScreen::Start3rdPartyLoginFlow(auth::AuthLibWrapper*)
    void TitleScreen::Start3rdPartyLoginFlow(AuthLibWrapper* param_1) {
        if (m_previousLoginFlow == 2) {
            if ((*(code*)param_1->field_0[15])() != '\0') {
                MoveToSteamLoginFlow(0);
                return;
            }
        }
        InitiateGameTokenLogin(false, false);
    }

    // 0x100121960, 128 bytes, placed by class name
    // TitleScreen::InitiateGameTokenLogin(bool, bool)
    void TitleScreen::InitiateGameTokenLogin(bool param_1, bool param_2) {
        Client* this;
        LoginManager* this_00;
        undefined8 uVar1;

        LoginMes((basic_string*)&constants::text::connecting1, (basic_string*)&constants::text::connecting2,
                 (basic_string*)&constants::text::connecting3);
        this = (Client*)Client::Instance();
        this_00 = (LoginManager*)GetLoginManager();
        this_00->PrepareGameTokenLogin(param_1);
        DeriveTOTPMode(param_2);
        uVar1 = 20;
        if (field_8448 == 45) {
            uVar1 = 50;
        }
        SetMainState(uVar1);
    }

    // 0x1001219e0, 64 bytes, placed by class name
    // TitleScreen::ApplyPendingTransactions()
    void TitleScreen::ApplyPendingTransactions() {
        undefined8* puVar1;
        shared_ptr<ApplicationContext>* this_00;
        long* plVar2;

        puVar1 = (undefined8*)Client::Instance();
        this_00 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar1)(puVar1);
        plVar2 = (long*)shared_ptr<ApplicationContext>::operator*(this_00);
        plVar2 = (long*)(**(code**)(*plVar2 + 72))(plVar2);
        if (plVar2 != (long*)0) {
            (**(code**)(*plVar2 + 256))(plVar2);
        }
    }

    // 0x100121a20, 416 bytes, placed by class name
    // TitleScreen::DetermineInitialScreen(bool)
    undefined8 TitleScreen::DetermineInitialScreen(bool param_1) {
        char cVar1;
        int iVar2;
        Client* this;
        LoginManager* this_00;
        shared_ptr<ApplicationContext>* this_01;
        basic_string* pbVar3;
        undefined8 uVar4;
        allocator local_50[8];
        eastl::string local_48[32];

        this = (Client*)Client::Instance();
        this_00 = (LoginManager*)GetLoginManager();
        cVar1 = this_00->IsRefreshTokenAvailable();
        if ((cVar1 == '\0') || (param_1)) {
            this_00->InvalidateRefreshToken();
            uVar4 = 0;
            this_00->SetEndPosition(0);
            eastl::allocator::allocator(local_50, "EASTL basic_string");
            eastl::string::basic_string(local_48, "", local_50);
            SetDisplayName((basic_string*)local_48);
            eastl::string::~basic_string(local_48);
        } else {
            cVar1 = this_00->IsUsingJagexLauncher();
            uVar4 = 10;
            if (cVar1 == '\0') {
                this_01 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                pbVar3 = (basic_string*)shared_ptr<ApplicationContext>::operator*(this_01);
                iVar2 = (**(code**)(*(long*)pbVar3 + 168))(pbVar3, &ApplicationContext::AUTHENTICATOR_HASH, 0);
                this_00->SetEndPosition(iVar2);
                local_48->LoadPreferenceFromDevice(pbVar3, &ApplicationContext::DISPLAYNAME_KEY);
                SetDisplayName((basic_string*)local_48);
                eastl::string::~basic_string(local_48);
                iVar2 = this_00->GetAuthenticatorUserHash();
                if (iVar2 == 0) {
                    eastl::allocator::allocator(local_50, "EASTL basic_string");
                    eastl::string::basic_string(local_48, "", local_50);
                    SetDisplayName((basic_string*)local_48);
                    eastl::string::~basic_string(local_48);
                    this_00->InvalidateRefreshToken();
                    (**(code**)(*(long*)pbVar3 + 176))(pbVar3, &ApplicationContext::DISPLAYNAME_KEY);
                    uVar4 = 0;
                }
            }
        }
        return uVar4;
    }

    // 0x100121d00, 1024 bytes, placed by class name
    // TitleScreen::GetDobFromUserInput()
    time_t TitleScreen::GetDobFromUserInput() {
        long lVar3;
        basic_string<char, BucketAllocatorEASTL>* this;
        ulong uVar4;
        basic_string* pbVar5;
        char* pcVar6;
        time_t tVar7;
        ulong uVar8;
        long local_218[2];
        ostream local_208[264];
        tm local_100;
        basic_string local_c8[32];
        string local_a8[32];
        string local_88[32];
        eastl local_68[32];
        int local_48[8];
        int local_28;
        int local_24;

        new (local_218) std::stringstream();
        lVar3 = m_dobCharacters.end();
        if (lVar3 != 0) {
            uVar8 = 0;
            do {
                this = (basic_string<char, BucketAllocatorEASTL>*)Array<eastl::string, eastl::allocator>::operator[](
                    (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, uVar8);
                if (eastl::basic_string<char, BucketAllocatorEASTL>::compare(this, "") == 0) {
                    tVar7 = -2;
                    goto LAB_10012203a;
                }
                uVar8 = uVar8 + 1;
                uVar4 = m_dobCharacters.end();
            } while (uVar8 < uVar4);
        }
        pbVar5 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
            (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, 0);
        Array<eastl::string, eastl::allocator>::operator[]((Array<eastl::string, eastl::allocator>*)&m_dobCharacters,
                                                           1);
        eastl::operator+(local_c8, pbVar5);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::operator<<(local_208, pcVar6);
        std::istream::operator>>((istream*)local_218, &local_28);
        local_100.tm_mday = local_28;
        std::string::string<decltype(nullptr)>(local_a8, "");
        local_218->str(local_a8);
        std::string::~string(local_a8);
        std::ios::clear((int)(stringstream*)local_218 + (int)*(undefined8*)(local_218[0] + -24));
        pbVar5 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
            (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, 2);
        Array<eastl::string, eastl::allocator>::operator[]((Array<eastl::string, eastl::allocator>*)&m_dobCharacters,
                                                           3);
        eastl::operator+((basic_string*)local_a8, pbVar5);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::operator<<(local_208, pcVar6);
        std::istream::operator>>((istream*)local_218, &local_24);
        local_100.tm_mon = local_24 + -1;
        local_24 = local_100.tm_mon;
        std::string::string<decltype(nullptr)>(local_88, "");
        local_218->str(local_88);
        std::string::~string(local_88);
        std::ios::clear((int)(stringstream*)local_218 + (int)*(undefined8*)(local_218[0] + -24));
        pbVar5 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
            (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, 4);
        Array<eastl::string, eastl::allocator>::operator[]((Array<eastl::string, eastl::allocator>*)&m_dobCharacters,
                                                           5);
        eastl::operator+((basic_string*)local_48, pbVar5);
        pbVar5 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
            (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, 6);
        eastl::operator+(local_68, (basic_string*)local_48, pbVar5);
        pbVar5 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
            (Array<eastl::string, eastl::allocator>*)&m_dobCharacters, 7);
        eastl::operator+((eastl*)local_88, (basic_string*)local_68, pbVar5);
        local_68->~basic_string();
        local_48->~basic_string();
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::operator<<(local_208, pcVar6);
        std::istream::operator>>((istream*)local_218, local_48);
        local_100.tm_year = local_48[0] + -1900;
        local_48[0] = local_100.tm_year;
        std::string::string<decltype(nullptr)>((string*)local_68, "");
        local_218->str(local_68);
        local_68->~string();
        std::ios::clear((int)(stringstream*)local_218 + (int)*(undefined8*)(local_218[0] + -24));
        local_100.tm_hour = 12;
        local_100.tm_sec = 0;
        local_100.tm_min = 0;
        tVar7 = _mktime(&local_100);
        if (tVar7 != -1) {
            if (DateOfBirthIsValid(local_28, local_24, local_48[0], tVar7) != '\0')
                goto LAB_100122010;
        }
        tVar7 = -1;
    LAB_100122010:
        local_88->~basic_string();
        local_a8->~basic_string();
        local_c8->~basic_string();
    LAB_10012203a:
        local_218->~stringstream();
        return tVar7;
    }

    // 0x100122100, 16 bytes, placed by class name
    // TitleScreen::SendToDobScreenWithErrorMessage(eastl::string const&, eastl::string const&, eastl::string const&)
    void TitleScreen::SendToDobScreenWithErrorMessage(basic_string* param_1, basic_string* param_2,
                                                      basic_string* param_3) {
        LoginMes(param_1, param_2, param_3);
    }

    // 0x100122110, 32 bytes, placed by class name
    // TitleScreen::CheckPlayerIsOver13(long)
    bool TitleScreen::CheckPlayerIsOver13(long param_1) {
        long lVar1;

        lVar1 = GetDate13YearsAgo();
        return param_1 <= lVar1;
    }

    // 0x100122130, 64 bytes, placed by class name
    // TitleScreen::GetDate13YearsAgo()
    void TitleScreen::GetDate13YearsAgo() {
        tm* ptVar1;
        time_t local_18;

        _time(&local_18);
        ptVar1 = _localtime(&local_18);
        ptVar1->tm_year = ptVar1->tm_year + -13;
        ptVar1->tm_mday = ptVar1->tm_mday + 1;
        ptVar1->tm_hour = 0;
        ptVar1->tm_sec = 0;
        ptVar1->tm_min = 0;
        _mktime(ptVar1);
    }

    // 0x100122170, 64 bytes, placed by class name
    // TitleScreen::GetReallyOldDate()
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

    // 0x1001221c0, 64 bytes, placed by class name
    // TitleScreen::DateOfBirthIsValid(int, int, int, long)
    bool TitleScreen::DateOfBirthIsValid(int param_1, int param_2, int param_3, long param_4) {
        tm* ptVar1;
        bool bVar2;
        long local_28;

        local_28 = param_4;
        ptVar1 = _localtime(&local_28);
        if ((ptVar1->tm_mday == param_1) && (ptVar1->tm_mon == param_2)) {
            bVar2 = ptVar1->tm_year == param_3;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x100122200, 16 bytes, placed by class name
    // TitleScreen::SetLoginScreen(int)
    void TitleScreen::SetLoginScreen(int param_1) {}

    // 0x1001222e0, 3920 bytes, placed by class name
    // TitleScreen::WorldSwitchRender(jstring::PixfontGeneric&, jstring::PixfontGeneric&, graphics::Pix2D&)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* TitleScreen::WorldSwitchRender(jstring::PixfontGeneric&,
   jstring::PixfontGeneric&, graphics::Pix2D&) */

    void TitleScreen::WorldSwitchRender(PixfontGeneric* param_1, PixfontGeneric* param_2, Pix2D* param_3) {
        char cVar1;
        bool bVar2;
        byte bVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        Client* this;
        Js5* pJVar7;
        undefined8 uVar8;
        int* piVar9;
        DeviceOptions* pDVar10;
        _func_decltype_nullptr* p_Var11;
        long lVar12;
        unique_ptr<GameWorld, std::default_delete<GameWorld>>* puVar13;
        GameWorld* this_00;
        uint uVar14;
        int iVar15;
        PixfontGeneric* pPVar16;
        int iVar17;
        Pix2D* pPVar18;
        ulong uVar19;
        ulong uVar20;
        bool bVar21;
        eastl local_c0[36];
        int local_9c;
        undefined8 local_98;
        Client* local_90;
        pixloader local_80;
        int local_5c;
        uint local_50;
        int local_4c;
        Pix2D* local_48;
        int* local_40;
        int local_34;

        pPVar16 = param_2;
        local_4c = DAT_100f8a918.GetX();
        local_98 = DAT_100f8a91c.GetX();
        this = (Client*)Client::Instance();
        pJVar7 = (Js5*)GetSprites();
        cVar1 = m_slBack.empty();
        if (cVar1 != '\0') {
            pPVar16 = (PixfontGeneric*)&local_80;
            pPVar16->Makepix32Array(pJVar7, "sl_back", "");
            Array<graphics::Pix32, eastl::allocator>::operator=((Array<graphics::Pix32, eastl::allocator>*)&m_slBack,
                                                                (Array*)pPVar16);
            local_80.~Array();
        }
        cVar1 = m_slFlags.empty();
        if (cVar1 != '\0') {
            pPVar16 = (PixfontGeneric*)&local_80;
            pPVar16->Makepix8Array(pJVar7, "sl_flags", "");
            Array<graphics::Pix8, eastl::allocator>::operator=((Array<graphics::Pix8, eastl::allocator>*)&m_slFlags,
                                                               (Array*)pPVar16);
            local_80.~Array();
        }
        cVar1 = m_slArrows.empty();
        if (cVar1 != '\0') {
            pPVar16 = (PixfontGeneric*)&local_80;
            pPVar16->Makepix8Array(pJVar7, "sl_arrows", "");
            Array<graphics::Pix8, eastl::allocator>::operator=((Array<graphics::Pix8, eastl::allocator>*)&m_slArrows,
                                                               (Array*)pPVar16);
            local_80.~Array();
        }
        cVar1 = m_slStars.empty();
        if (cVar1 != '\0') {
            pPVar16 = (PixfontGeneric*)&local_80;
            pPVar16->Makepix8Array(pJVar7, "sl_stars", "");
            Array<graphics::Pix8, eastl::allocator>::operator=((Array<graphics::Pix8, eastl::allocator>*)&m_slStars,
                                                               (Array*)pPVar16);
            local_80.~Array();
        }
        bVar2 = std::operator==((unique_ptr*)&m_slLeftArrow, (_func_decltype_nullptr*)pPVar16);
        if (bVar2) {
            local_80.Makepix8(pJVar7, "leftarrow", "");
            pPVar16 = (PixfontGeneric*)&local_80;
            std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator=(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_slLeftArrow,
                (unique_ptr*)&local_80);
            local_80.~unique_ptr();
        }
        bVar2 = std::operator==((unique_ptr*)&m_slRightArrow, (_func_decltype_nullptr*)pPVar16);
        if (bVar2) {
            local_80.Makepix8(pJVar7, "rightarrow", "");
            std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator=(
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_slRightArrow,
                (unique_ptr*)&local_80);
            local_80.~unique_ptr();
        }
        (**(code**)(param_3->field_0 + 32))(param_3, m_xOf, 23, 765, 480, 0);
        param_3->FillRectVGrad(m_xOf, 0, 125, 23, 12425273, 9135624);
        param_3->FillRectVGrad(m_xOf + 125, 0, 640, 23, 5197647, 2697513);
        param_1->CentreString((basic_string*)&constants::text::selectaworld, m_xOf + 62, 15, 0, -1, param_3);
        cVar1 = m_slStars.empty();
        local_48 = param_3;
        if (cVar1 == '\0') {
            uVar8 = Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_slStars, 1);
            (**(code**)(local_48->field_0 + 184))(local_48, uVar8, m_xOf + 140, 1);
            param_2->DrawString((basic_string*)&constants::text::membersonlyworld, m_xOf + 152, 10, 16777215, -1,
                                local_48);
            param_3 = local_48;
            uVar8 = Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_slStars, 0);
            (**(code**)(param_3->field_0 + 184))(param_3, uVar8, m_xOf + 140, 12);
            param_2->DrawString((basic_string*)&constants::text::freeworld, m_xOf + 152, 21, 16777215, -1, param_3);
        }
        cVar1 = m_slArrows.empty();
        iVar4 = m_xOf;
        if (cVar1 == '\0') {
            bVar2 = false;
            local_90 = this;
            local_40 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&GameWorld::m_ordering, 0);
            local_34 = iVar4 + 280;
            if (*local_40 == 0) {
                piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&GameWorld::m_dirs, 0);
                bVar2 = *piVar9 == 0;
                piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&GameWorld::m_dirs, 0);
                bVar21 = *piVar9 == 1;
            } else {
                bVar21 = false;
                local_34 = iVar4 + 280;
            }
            uVar8 = Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_slArrows, (ulong)bVar2 * 2);
            pPVar18 = local_48;
            (**(code**)(local_48->field_0 + 184))(local_48, uVar8, local_34, 4);
            uVar8 = Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_slArrows, (ulong)bVar21 * 2 + 1);
            (**(code**)(pPVar18->field_0 + 184))(pPVar18, uVar8, iVar4 + 295, 4);
            param_1->DrawString((basic_string*)&constants::text::sl_world, iVar4 + 312, 17, 16777215, -1, pPVar18);
            iVar15 = m_xOf;
            iVar4 = m_xOf + 390;
            if (*local_40 == 1) {
                piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&GameWorld::m_dirs, 0);
                bVar2 = *piVar9 == 0;
                local_34 = iVar4;
                piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&GameWorld::m_dirs, 0);
                bVar21 = *piVar9 == 1;
            } else {
                bVar2 = false;
                bVar21 = false;
                local_34 = m_xOf + 390;
            }
            uVar8 = Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_slArrows, (ulong)bVar2 * 2);
            pPVar18 = local_48;
            (**(code**)(local_48->field_0 + 184))(local_48, uVar8, local_34, 4);
            uVar8 = Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_slArrows, (ulong)bVar21 * 2 + 1);
            (**(code**)(pPVar18->field_0 + 184))(pPVar18, uVar8, iVar15 + 405, 4);
            param_1->DrawString((basic_string*)&constants::text::sl_players, iVar15 + 422, 17, 16777215, -1, pPVar18);
            iVar15 = m_xOf;
            iVar4 = *local_40;
            if (iVar4 == 2) {
                piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&GameWorld::m_dirs, 0);
                uVar19 = (ulong)(*piVar9 == 0) * 2;
            } else {
                uVar19 = 0;
            }
            local_34 = iVar15 + 500;
            uVar20 = 1;
            if (iVar4 == 2) {
                piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&GameWorld::m_dirs, 0);
                uVar20 = (ulong)(*piVar9 == 1) * 2 + 1;
            }
            uVar8 = Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_slArrows, uVar19);
            pPVar18 = local_48;
            (**(code**)(local_48->field_0 + 184))(local_48, uVar8, local_34, 4);
            uVar8 = Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_slArrows, uVar20);
            (**(code**)(pPVar18->field_0 + 184))(pPVar18, uVar8, iVar15 + 515, 4);
            param_1->DrawString((basic_string*)&constants::text::sl_location, iVar15 + 532, 17, 16777215, -1, pPVar18);
            iVar15 = m_xOf;
            iVar4 = *local_40;
            if (iVar4 == 3) {
                piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&GameWorld::m_dirs, 0);
                uVar19 = (ulong)(*piVar9 == 0) * 2;
            } else {
                uVar19 = 0;
            }
            local_40 = (int*)CONCAT44(local_40._4_4_, iVar15 + 610);
            uVar20 = 1;
            if (iVar4 == 3) {
                piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&GameWorld::m_dirs, 0);
                uVar20 = (ulong)(*piVar9 == 1) * 2 + 1;
            }
            uVar8 = Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_slArrows, uVar19);
            param_3 = local_48;
            (**(code**)(local_48->field_0 + 184))(local_48, uVar8, (ulong)local_40 & 4294967295, 4);
            uVar8 = Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)&m_slArrows, uVar20);
            (**(code**)(param_3->field_0 + 184))(param_3, uVar8, iVar15 + 625, 4);
            param_1->DrawString((basic_string*)&constants::text::sl_type, iVar15 + 642, 17, 16777215, -1, param_3);
            this = local_90;
        }
        pPVar16 = param_2;
        iVar15 = m_xOf + 280;
        pDVar10 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        iVar4 = pDVar10->GetDefaultWorldId();
        if (iVar4 < 1) {
            pPVar16->DrawString((basic_string*)&constants::text::noDefaultWorld, iVar15, 525, 16777215, -1, param_3);
        } else {
            pDVar10 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            iVar4 = pDVar10->GetDefaultWorldId();
            eastl::to_string(local_c0, iVar4);
            eastl::operator+((basic_string*)&local_80, (basic_string*)&constants::text::currentDefaultWorld);
            pPVar16->DrawString((basic_string*)&local_80, iVar15, 525, 16777215, -1, param_3);
            local_80.~basic_string();
            local_c0->~basic_string();
        }
        (**(code**)(param_3->field_0 + 32))(param_3, m_xOf + 708, 4, 50, 16, 0);
        pPVar16->CentreString((basic_string*)&constants::text::cancel, m_xOf + 733, 16, 16777215, -1, param_3);
        m_slLastWorld = -1;
        cVar1 = m_slBack.empty();
        if (cVar1 == '\0') {
            CalculateWorldSwitcherStructure((WorldSwitcherStructure*)&m_worldSwitcherStructure);
            m_slMaxScroll = (GameWorld::m_num + DAT_100f8abfc + -1) / DAT_100f8abfc - DAT_100f8abf8;
            p_Var11 = (_func_decltype_nullptr*)Client::Instance();
            local_80.GetUISafeArea();
            iVar4 = local_80.GetLevel();
            bVar2 = std::operator!=((unique_ptr*)&m_slLeftArrow, p_Var11);
            if ((bVar2) && (0 < m_slStartColumn)) {
                p_Var11 = (_func_decltype_nullptr*)
                    std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                        (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_slLeftArrow);
                iVar15 = DAT_100f8ac08 + m_xOf;
                lVar12 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_slLeftArrow);
                (**(code**)(local_48->field_0 + 184))(local_48, p_Var11,
                                                      (iVar15 - *(int*)(lVar12 + 48)) + DAT_100f8ac00 * -2,
                                                      iVar4 / 2 - *(int*)(lVar12 + 52) / 2);
            }
            bVar2 = std::operator!=((unique_ptr*)&m_slRightArrow, p_Var11);
            if ((bVar2) && (m_slStartColumn < m_slMaxScroll)) {
                uVar8 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_slRightArrow);
                iVar5 = DAT_100f8ac0c + m_xOf;
                iVar15 = DAT_100f8ac00 * 2;
                lVar12 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
                    (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_slRightArrow);
                (**(code**)(local_48->field_0 + 184))(local_48, uVar8, iVar5 + iVar15,
                                                      iVar4 / 2 - *(int*)(lVar12 + 52) / 2);
            }
            local_5c = m_slStartColumn;
            uVar14 = DAT_100f8abfc * m_slStartColumn;
            iVar4 = 0;
            local_50 = 0;
            pPVar18 = local_48;
            if ((int)uVar14 < GameWorld::m_num) {
                piVar9 = (int*)(ulong)(uint)(DAT_100f8ac08 + m_xOf);
                iVar15 = DAT_100f8ac10 + 23;
                uVar19 = (ulong)(int)uVar14;
                local_50 = 0;
                do {
                    uVar20 = (ulong)uVar14;
                    if (DAT_100f8abf8 <= local_5c - m_slStartColumn)
                        break;
                    local_90 = (Client*)CONCAT44(local_90._4_4_, uVar14);
                    local_9c = iVar4;
                    local_40 = piVar9;
                    puVar13 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                        Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                            (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                                   eastl::allocator>*)&GameWorld::m_list,
                            uVar19);
                    this_00 =
                        (GameWorld*)std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator*(puVar13);
                    local_80.to_string(this_00->field_8);
                    if (this_00->field_8 == -1) {
                        bVar2 = true;
                        eastl::string::operator=((eastl::string*)&local_80,
                                                 (basic_string*)&constants::text::offlineworld);
                    } else if ((int)this_00->field_8 < 1981) {
                        bVar2 = false;
                    } else {
                        bVar2 = true;
                        eastl::string::operator=((eastl::string*)&local_80, (basic_string*)&constants::text::fullworld);
                    }
                    cVar1 = this_00->IsNoSave();
                    if (cVar1 == '\0') {
                        cVar1 = this_00->IsBeta();
                        if (cVar1 == '\0') {
                            cVar1 = this_00->IsDeadman();
                            if (cVar1 == '\0') {
                                cVar1 = this_00->IsSeasonal();
                                if (cVar1 == '\0') {
                                    cVar1 = this_00->IsPVP();
                                    if (cVar1 == '\0') {
                                        cVar1 = this_00->IsSpeedrunWorld();
                                        if (cVar1 == '\0') {
                                            cVar1 = this_00->IsFreshStart();
                                            local_34 = 0;
                                            uVar14 = 4294967295;
                                            if (cVar1 != '\0') {
                                                bVar3 = this_00->IsMembers();
                                                uVar14 = bVar3 | 12;
                                            }
                                        } else {
                                            bVar3 = this_00->IsMembers();
                                            uVar14 = bVar3 | 10;
                                            local_34 = 0;
                                        }
                                    } else {
                                        bVar3 = this_00->IsMembers();
                                        uVar14 = bVar3 | 2;
                                        local_34 = 0;
                                    }
                                } else {
                                    bVar3 = this_00->IsMembers();
                                    uVar14 = bVar3 | 8;
                                    local_34 = 0;
                                }
                            } else {
                                bVar3 = this_00->IsMembers();
                                uVar14 = bVar3 | 4;
                                local_34 = 16711680;
                            }
                        } else {
                            bVar3 = this_00->IsMembers();
                            uVar14 = bVar3 | 14;
                            local_34 = 0;
                        }
                    } else {
                        bVar3 = this_00->IsMembers();
                        uVar14 = bVar3 | 6;
                        local_34 = 0;
                    }
                    if ((uVar14 == 4294967295) || (iVar4 = m_slBack.end(), iVar4 <= (int)uVar14)) {
                        bVar3 = this_00->IsMembers();
                        uVar14 = (uint)bVar3;
                    }
                    if ((((local_4c < (int)local_40) || ((int)local_98 < iVar15)) ||
                         (m_worldSwitcherStructure + (int)local_40 <= local_4c)) ||
                        (bVar2 || DAT_100f8abf4 + iVar15 <= (int)local_98)) {
                        uVar8 = Array<graphics::Pix32, eastl::allocator>::operator[](
                            (Array<graphics::Pix32, eastl::allocator>*)&m_slBack, (long)(int)uVar14);
                        pPVar18 = local_48;
                        (**(code**)(local_48->field_0 + 168))(local_48, uVar8, local_40, iVar15);
                    } else {
                        m_slLastWorld = (int)local_90;
                        uVar8 = Array<graphics::Pix32, eastl::allocator>::operator[](
                            (Array<graphics::Pix32, eastl::allocator>*)&m_slBack, (long)(int)uVar14);
                        pPVar18 = local_48;
                        local_50 = (uint)CONCAT71((int7)(uVar20 >> 8), 1);
                        (**(code**)(local_48->field_0 + 224))(local_48, uVar8, local_40, iVar15, 128, 16777215);
                    }
                    cVar1 = m_slFlags.empty();
                    if (cVar1 == '\0') {
                        bVar3 = this_00->IsMembers();
                        uVar8 = Array<graphics::Pix8, eastl::allocator>::operator[](
                            (Array<graphics::Pix8, eastl::allocator>*)&m_slFlags,
                            (long)(int)this_00->field_80 + (ulong)bVar3 * 8);
                        (**(code**)(pPVar18->field_0 + 184))(pPVar18, uVar8, (int)local_40 + 29, iVar15);
                    }
                    eastl::to_string(local_c0, *(int*)this_00);
                    iVar4 = (int)local_40;
                    param_1->CentreString(local_c0, iVar4 + 15, DAT_100f8abf4 / 2 + iVar15 + 5, local_34, -1, pPVar18);
                    local_c0->~basic_string();
                    param_2->CentreString((basic_string*)&local_80, iVar4 + 60, DAT_100f8abf4 / 2 + iVar15 + 5,
                                          268435455, -1, pPVar18);
                    iVar4 = local_9c + 1;
                    if (iVar4 < DAT_100f8abfc) {
                        iVar15 = iVar15 + _DAT_100f8ac04 + DAT_100f8abf4;
                        piVar9 = local_40;
                    } else {
                        iVar15 = DAT_100f8ac10 + 23;
                        piVar9 = (int*)(ulong)(uint)((int)local_40 + DAT_100f8ac00 + m_worldSwitcherStructure);
                        local_5c = local_5c + 1;
                        iVar4 = 0;
                    }
                    local_80.~basic_string();
                    uVar19 = uVar19 + 1;
                    uVar14 = (int)local_90 + 1;
                } while ((long)uVar19 < (long)GameWorld::m_num);
            }
            pPVar16 = param_2;
            if ((local_50 & 1) != 0) {
                puVar13 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                    Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                        (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                               eastl::allocator>*)&GameWorld::m_list,
                        (long)m_slLastWorld);
                lVar12 = std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator->(puVar13);
                iVar6 = pPVar16->StringWid((basic_string*)(lVar12 + 48));
                iVar17 = iVar6 + 6;
                iVar4 = pPVar16->field_0;
                iVar15 = (int)local_98;
                iVar5 = (iVar15 - iVar4) + -33;
                if (iVar4 + iVar15 + 33 < 481) {
                    iVar5 = iVar15 + 25;
                }
                iVar15 = local_4c - ((iVar6 - (iVar17 >> 31)) + 6 >> 1);
                (**(code**)(pPVar18->field_0 + 32))(pPVar18, iVar15, iVar5, iVar17, iVar4 + 8);
                pPVar18->DrawRect(iVar15, iVar5, iVar17, iVar4 + 8, 0);
                puVar13 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                    Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                        (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                               eastl::allocator>*)&GameWorld::m_list,
                        (long)m_slLastWorld);
                lVar12 = std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator->(puVar13);
                param_2->CentreString((basic_string*)(lVar12 + 48), local_4c, iVar5 + param_2->field_0 + 4, 0, -1,
                                      pPVar18);
            }
        }
    }

    // 0x100123250, 224 bytes, placed by class name
    // TitleScreen::PlotTitle(graphics::Pix2D&)
    void TitleScreen::PlotTitle(Pix2D* param_1) {
        int iVar1;
        int iVar2;
        long lVar3;
        undefined8 uVar4;

        iVar2 = m_xOf;
        lVar3 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)&m_titleBack);
        iVar1 = *(int*)(lVar3 + 24);
        uVar4 = shared_ptr<graphics::Pix32>::operator*((shared_ptr<graphics::Pix32>*)&m_titleBack);
        (**(code**)(param_1->field_0 + 168))(param_1, uVar4, (iVar2 - iVar1) + 383, 0);
        uVar4 = shared_ptr<graphics::Pix32>::operator*((shared_ptr<graphics::Pix32>*)&m_titleBack2);
        (**(code**)(param_1->field_0 + 168))(param_1, uVar4, m_xOf + 382, 0);
        uVar4 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(
            (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_logo);
        iVar1 = m_xOf;
        lVar3 = std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator->(
            (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_logo);
        (**(code**)(param_1->field_0 + 184))(param_1, uVar4,
                                             ((iVar1 - *(int*)(lVar3 + 48) / 2) - *(int*)(lVar3 + 60)) + 382,
                                             89 - *(int*)(lVar3 + 52) / 2);
    }

    // 0x100123350, 80 bytes, placed by class name
    // TitleScreen::GetRenderUsername()
    TitleScreen* TitleScreen::GetRenderUsername() {
        long lVar2;
        DeviceOptions* this_00;

        lVar2 = Client::Instance();
        this_00 =
            (DeviceOptions*)
                std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                    (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar2 + 8376));
        if (this_00->GetHideUserName() == '\0') {
            new (this) eastl::string((basic_string*)&m_loginUser);
        } else {
            core::stringtools::general::StringTools::MaskPassword((basic_string*)this);
        }
        return this;
    }

    // 0x1001233d0, 64 bytes, placed by class name
    // TitleScreen::GetRadioButton(bool, bool)
    void TitleScreen::GetRadioButton(bool param_1, bool param_2) {
        unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>* this;
        unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>* puVar1;
        undefined3 in_register_00000031;
        undefined7 in_register_00000039;
        bool bVar2;

        puVar1 = (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonYes;
        bVar2 = CONCAT31(in_register_00000031, param_2) != 0;
        if (bVar2) {
            puVar1 =
                (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonYesHighlight;
        }
        this = (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonNone;
        if (bVar2) {
            this = (unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>*)&m_optionsRadioButtonNoneHighlight;
        }
        if ((int)CONCAT71(in_register_00000039, param_1) != 0) {
            this = puVar1;
        }
        std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::operator*(this);
    }

    // 0x100123420, 256 bytes, placed by class name
    // TitleScreen::RestoreLoginUserFromRememberedUsername()
    void TitleScreen::RestoreLoginUserFromRememberedUsername() {
        long lVar1;
        undefined1 local_158[296];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        lVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar1 == 0) {
            lVar1 = Client::Instance();
            std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar1 + 8376));
            local_158->GetCachedUserName();
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            /* WARNING: Subroutine does not return */
            local_158->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100123550, 144 bytes, placed by class name
    // TitleScreen::SetupUserPassInputForm()
    TitleScreen* TitleScreen::SetupUserPassInputForm() {
        undefined8* puVar1;
        shared_ptr<ApplicationContext>* this_00;
        long* plVar2;
        shared_ptr* psVar3;
        basic_string* pbVar4;

        puVar1 = (undefined8*)Client::Instance();
        this_00 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar1)(puVar1);
        plVar2 = (long*)shared_ptr<ApplicationContext>::operator->(this_00);
        psVar3 = (shared_ptr*)(**(code**)(*plVar2 + 80))(plVar2, 0);
        new (this) shared_ptr<dash3d::Decor>(psVar3);
        pbVar4 = (basic_string*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)this);
        pbVar4->SetText(16295976);
        pbVar4 = (basic_string*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)this);
        pbVar4->SetText(16296104);
        return this;
    }

    // 0x100123880, 32 bytes, placed by class name
    // TitleScreen::IsValidChar(char)
    bool TitleScreen::IsValidChar(char param_1) {
        long lVar1;

        lVar1 = m_charList.find(param_1, 0);
        return lVar1 != -1;
    }

    // 0x1001238a0, 80 bytes, placed by class name
    // TitleScreen::OnMuteTitleScreenChanged()
    void TitleScreen::OnMuteTitleScreenChanged() {
        long lVar1;
        DeviceOptions* pDVar2;
        char cVar3;
        int iVar4;

        lVar1 = Client::Instance();
        pDVar2 = (DeviceOptions*)
                     std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->((
                         unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar1 + 8376));
        cVar3 = pDVar2->GetMuteTitleScreen();
        iVar4 = 0;
        if (cVar3 == '\0') {
            pDVar2 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar1 + 8376));
            iVar4 = pDVar2->GetTitleVolume();
        }
        midi2::MidiManager::SetVolume(iVar4);
    }

    // 0x1001238f0, 48 bytes, placed by class name
    // TitleScreen::OnMidiVolumeChanged()
    void TitleScreen::OnMidiVolumeChanged() {
        long lVar1;
        DeviceOptions* this_00;
        int iVar3;

        if (midi2::MidiManager::IsInitialised() != '\0') {
            lVar1 = Client::Instance();
            this_00 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar1 + 8376));
            iVar3 = this_00->GetTitleVolume();
            midi2::MidiManager::SetVolume(iVar3);
        }
    }

    // 0x100123920, 64 bytes, placed by class name
    // TitleScreen::LoginScreenToString(int)
    eastl::string* TitleScreen::LoginScreenToString(int param_1) {
        undefined4 in_register_0000003c;
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (CONCAT44(in_register_0000003c, param_1)) eastl::string("", local_20);
        return (eastl::string*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x100123960, 192 bytes, placed by class name
    // TitleScreen::MoveToAccountAppealScreen()
    void TitleScreen::MoveToAccountAppealScreen() {
        undefined8* puVar1;
        shared_ptr<ApplicationContext>* psVar2;
        ApplicationContext* pAVar3;
        InputForm* this_00;
        TitleScreen local_20;

        puVar1 = (undefined8*)Client::Instance();
        psVar2 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar1)(puVar1);
        pAVar3 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar2);
        pAVar3->SendAnalyticsEvent((basic_string*)&auth::AppsFlyerEvent::FORGOT_PASSWORD);
        puVar1 = (undefined8*)Client::Instance();
        psVar2 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar1)(puVar1);
        pAVar3 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar2);
        pAVar3->SendAttributionEvent((basic_string*)&auth::AppsFlyerEvent::FORGOT_PASSWORD);
        LoginMes((basic_string*)&constants::text::account_appeal_login_a,
                 (basic_string*)&constants::text::account_appeal_login_b,
                 (basic_string*)&constants::text::account_appeal_login_c);
        m_loginscreen = 5;
        SetupAccountAppealInputForm(&local_20);
        this_00 = (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)&local_20);
        this_00->ShowKeyboard();
        local_20.~shared_ptr();
    }

    // 0x100123a30, 256 bytes, placed by class name
    // TitleScreen::CalculateWorldSwitcherStructure(WorldSwitcherStructure&)
    void TitleScreen::CalculateWorldSwitcherStructure(WorldSwitcherStructure* param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;

        param_1->field_36 = 1;
        *(undefined8*)param_1 = 81604378712;
        *(undefined8*)&param_1->field_8 = 103079215111;
        iVar2 = GameWorld::m_num;
        do {
            iVar5 = *(int*)&param_1->field_8;
            iVar3 = *(int*)&param_1->field_12;
            iVar1 = iVar5 + -1;
            if (iVar2 <= iVar1 * iVar3) {
                *(int*)&param_1->field_8 = iVar1;
            }
            iVar1 = *(int*)&param_1->field_8;
            if (iVar2 <= iVar1 * (iVar3 + -1)) {
                *(int*)&param_1->field_12 = iVar3 + -1;
            }
            iVar4 = *(int*)&param_1->field_12 + -1;
            if (iVar2 <= iVar4 * iVar1) {
                *(int*)&param_1->field_12 = iVar4;
            }
            iVar4 = *(int*)&param_1->field_12;
        } while ((iVar4 != iVar3) || (iVar1 != iVar5));
        iVar2 = (iVar1 * -88 + 765) / (iVar1 + 1);
        if (4 < iVar2) {
            iVar2 = 5;
        }
        *(int*)&param_1->field_16 = iVar2;
        iVar3 = (iVar4 * -19 + 480) / (iVar4 + 1);
        iVar5 = 5;
        if (iVar3 < 5) {
            iVar5 = iVar3;
        }
        *(int*)&param_1->field_20 = iVar5;
        iVar3 = ((1 - iVar1) * iVar2 + iVar1 * -88 + 765) / 2;
        *(int*)&param_1->field_24 = iVar3;
        *(int*)&param_1->field_28 = ((iVar2 + 88) * iVar1 - iVar2) + iVar3;
        *(int*)&param_1->field_32 = ((1 - iVar4) * iVar5 + iVar4 * -19 + 480) / 2;
    }

    // 0x100123bc0, 256 bytes, placed by class name
    // TitleScreen::WorldSwitchWorldUnderPointer()
    int TitleScreen::WorldSwitchWorldUnderPointer() {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        WorldSwitcherStructure local_60;

        iVar2 = DAT_100f8a918.GetX();
        iVar3 = DAT_100f8a91c.GetX();
        new (&local_60) WorldSwitcherStructure();
        CalculateWorldSwitcherStructure(&local_60);
        iVar4 = m_slStartColumn * local_60._12_4_;
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

    // 0x100123cd0, 32 bytes, placed by class name
    // TitleScreen::WorldSwitchExit(graphics::Pix2D&)
    void TitleScreen::WorldSwitchExit(Pix2D* param_1) {
        m_switchScreen = 0;
        PlotTitle(param_1);
    }

    // 0x100123db0, 96 bytes, placed by class name
    // TitleScreen::DirectLogin()
    void TitleScreen::DirectLogin() {
        shared_ptr<ApplicationContext>* this_00;
        ApplicationContext* this_01;
        bool bVar1;
        undefined8* puVar2;

        puVar2 = (undefined8*)Client::Instance();
        this_00 = (shared_ptr<ApplicationContext>*)(**(code**)*puVar2)(puVar2);
        this_01 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(this_00);
        this_01->CloseActiveInputForm();
        LoginMes((basic_string*)&constants::text::connecting1, (basic_string*)&constants::text::connecting2,
                 (basic_string*)&constants::text::connecting3);
        bVar1 = (bool)ShouldRequestTokens();
        PreparePasswordLogin((basic_string*)&m_loginPass, bVar1);
    }

    // 0x100157f80, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.494
    void ___cxx_global_var_init_494() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_loadString) eastl::string("", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_loadString, 4294967296);
    }

    // 0x100157fe0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.495
    void ___cxx_global_var_init_495() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_loginHelpText) eastl::string("", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_loginHelpText, 4294967296);
    }

    // 0x100158040, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.496
    void ___cxx_global_var_init_496(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&TitleScreen::m_loginHelpTextDimensions) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
    }

    // 0x100158060, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.497
    void ___cxx_global_var_init_497(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&TitleScreen::m_cantLoginOtherTextDimensions) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
    }

    // 0x100158080, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.498
    void ___cxx_global_var_init_498() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_loginUser) eastl::string("", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_loginUser, 4294967296);
    }

    // 0x1001580e0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.499
    void ___cxx_global_var_init_499() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_loginPass) eastl::string("", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_loginPass, 4294967296);
    }

    // 0x100158140, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.500
    void ___cxx_global_var_init_500() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_displayName) eastl::string("", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_displayName, 4294967296);
    }

    // 0x1001581a0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.501
    void ___cxx_global_var_init_501() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_lastLoginUser) eastl::string("", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_lastLoginUser, 4294967296);
    }

    // 0x100158200, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.502
    void ___cxx_global_var_init_502() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_lastDisplayName) eastl::string("", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_lastDisplayName, 4294967296);
    }

    // 0x100158260, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.503
    void ___cxx_global_var_init_503() {
        new (&TitleScreen::m_dobCharacters) Array<eastl::string, eastl::allocator>(8);
        ___cxa_atexit(PTR__Array_100ee6738, &TitleScreen::m_dobCharacters, 4294967296);
    }

    // 0x1001582a0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.504
    void ___cxx_global_var_init_504() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_loginTotpPinString) eastl::string("", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_loginTotpPinString, 4294967296);
    }

    // 0x1001583c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.517
    void ___cxx_global_var_init_517() {
        new (&TitleScreen::m_loginIcon) Array<graphics::Pix8, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67b0, &TitleScreen::m_loginIcon, 4294967296);
    }

    // 0x100158400, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.518
    void ___cxx_global_var_init_518(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&TitleScreen::m_titleBack) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5530, &TitleScreen::m_titleBack, 4294967296);
    }

    // 0x100158440, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.519
    void ___cxx_global_var_init_519(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&TitleScreen::m_titleBack2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5530, &TitleScreen::m_titleBack2, 4294967296);
    }

    // 0x1001584a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.522
    void ___cxx_global_var_init_522() {
        new (&TitleScreen::m_titleMute) Array<graphics::Pix8, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67b0, &TitleScreen::m_titleMute, 4294967296);
    }

    // 0x1001584e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.523
    void ___cxx_global_var_init_523() {
        new (&TitleScreen::m_volumeOptionsBobbleSlider) Array<graphics::Pix8, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67b0, &TitleScreen::m_volumeOptionsBobbleSlider, 4294967296);
    }

    // 0x1001585a0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.532
    void ___cxx_global_var_init_532() {
        TitleScreen::m_preciseSY = (float)TitleScreen::m_sy;
    }

    // 0x1001585c0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.533
    void ___cxx_global_var_init_533() {
        TitleScreen::m_targetSY = TitleScreen::m_sy;
    }

    // 0x1001585e0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.534
    void ___cxx_global_var_init_534() {
        TitleScreen::m_sXOf = TitleScreen::m_xOf + 202;
    }

    // 0x100158600, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.535
    void ___cxx_global_var_init_535() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_loginTitle) eastl::string("", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_loginTitle, 4294967296);
    }

    // 0x100158660, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.536
    void ___cxx_global_var_init_536() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_loginMes1) eastl::string("", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_loginMes1, 4294967296);
    }

    // 0x1001586c0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.537
    void ___cxx_global_var_init_537() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_loginMes2) eastl::string("", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_loginMes2, 4294967296);
    }

    // 0x100158720, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.538
    void ___cxx_global_var_init_538() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_loginMes3) eastl::string("", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_loginMes3, 4294967296);
    }

    // 0x100158780, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.539
    void ___cxx_global_var_init_539(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&TitleScreen::m_steamLinkYesBtn) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
    }

    // 0x1001587a0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.540
    void ___cxx_global_var_init_540(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&TitleScreen::m_steamLinkNoBtn) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
    }

    // 0x1001587c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.541
    void ___cxx_global_var_init_541() {
        new (&TitleScreen::m_volumeSliderPositions) Array<jag::math::Rect<int>, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6758, &TitleScreen::m_volumeSliderPositions, 4294967296);
    }

    // 0x100158800, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.542
    void ___cxx_global_var_init_542() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_charList) eastl::string(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100dab3f1, local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_charList, 4294967296);
    }

    // 0x100158860, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.544
    void ___cxx_global_var_init_544() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&TitleScreen::m_pinCharList) eastl::string("1234567890", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &TitleScreen::m_pinCharList, 4294967296);
    }

    // 0x1001588c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.546
    void ___cxx_global_var_init_546() {
        new (&TitleScreen::m_slBack) Array<graphics::Pix32, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67b8, &TitleScreen::m_slBack, 4294967296);
    }

    // 0x100158900, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.547
    void ___cxx_global_var_init_547() {
        new (&TitleScreen::m_slFlags) Array<graphics::Pix8, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67b0, &TitleScreen::m_slFlags, 4294967296);
    }

    // 0x100158940, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.548
    void ___cxx_global_var_init_548() {
        new (&TitleScreen::m_slArrows) Array<graphics::Pix8, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67b0, &TitleScreen::m_slArrows, 4294967296);
    }

    // 0x100158980, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.549
    void ___cxx_global_var_init_549() {
        new (&TitleScreen::m_slStars) Array<graphics::Pix8, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67b0, &TitleScreen::m_slStars, 4294967296);
    }

    // 0x100158a20, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.556
    void ___cxx_global_var_init_556() {
        new (&TitleScreen::m_worldSwitcherStructure) WorldSwitcherStructure();
    }

    // 0x100158a40, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.557
    void ___cxx_global_var_init_557() {
        new (&TitleScreen::m_inputHandler) TitlescreenInputHandler();
    }

    // 0x100158a60, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.558
    void ___cxx_global_var_init_558(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&TitleScreen::m_termsAndConditionsLinkDimensions)
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
    }

    // 0x100158a80, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.559
    void ___cxx_global_var_init_559(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&TitleScreen::m_privacyPolicyLinkDimensions) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
    }

    // 0x100158aa0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.560
    void ___cxx_global_var_init_560(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&TitleScreen::m_softwareLicenceLinkDimensionsMobile)
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
    }

} // namespace jag::oldscape
