// projects/osclient/titlescreen.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class TitleScreen {
    public:
        IsOpen();
        void DeleteCharacter();
        void TypeCharacter(char16_t);
        void SetLoginSelect(int);
        void Loop(javapal::GameShell&, graphics::Pix2D&, jstring::PixfontGeneric&, jstring::PixfontGeneric&);
        void Draw(shared_ptr<jstring::PixfontGeneric> const&, shared_ptr<jstring::PixfontGeneric> const&,
                  shared_ptr<jstring::PixfontGeneric> const&, bool, graphics::Pix2D&);
        void Close();
        void Open(jagex3::Js5&, jagex3::Js5&, bool, int);
        void OpenInBackgroundMode();
        int Ready(jagex3::Js5&, jagex3::Js5&);
        int ReadyMax(jagex3::Js5&);
        void SwitchToWorld(GameWorld const&);
        void LoginMes(eastl::string const&, eastl::string const&, eastl::string const&);
        void SwitchToLoginSupport(int);
        ulong HasLoginMessage();
        void MoveToInitialScreen(bool, bool);
        void SwitchToPendingTransactions();
        void SetLoginCredentials(int, eastl::string);
        void ShowServerRebootedScreen();
        void ShowServerLogoffScreen();
        TitleScreen();
        TitleScreen* SetupAuthenticatorInputForm();
        void SetLogo(jagex3::Js5&, int);
        void SetDefaultWorldCheckboxState();
        void SetDefaultToggleFullscreenCheckboxState();
        void SelectUsernameField();
        void SelectLoginFormField(int);
        void ShowKeyboard(int);
        void SelectPasswordField();
        ulong IsValidUsernameChar(char16_t);
        void WorldSwitchLoop(javapal::GameShell&, graphics::Pix2D&);
        ulong HandleAudioButtons(int, int);
        void WorldSwitchEnter();
        void SaveDefaultWorld();
        void ThrobMessage(eastl::string const&);
        void ResumeInForeground();
        void MoveToSteamLoginFlow(jag::auth::AuthAccountHint);
        byte OpenTermsAndPrivacyScreen(int);
        bool OpenDataDownloadPrompt(int);
        ShowWorldWarningScreen(int);
        void MoveToGameCenterFlow();
        void MoveToGoogleLoginFlow();
        void MoveToJagexWebFlow();
        void MoveToUserPassEntryScreen(bool);
        void LaunchAccountCreationFlow();
        void ApplyPostAction();
        void PreparePasswordLogin(eastl::string const&, bool);
        void SetDefaultLoginSelect();
        void LoadDevCredentialsFromFile();
        TitleScreen* SetupAccountAppealInputForm();
        void AccountAppealLogin();
        uint GetCurrentDobInputBoxFromCoordinates(int, int);
        TitleScreen* SetupDobInputForm();
        CheckAndSetDobInput();
        void Start3rdPartyLoginFlow(auth::AuthLibWrapper*);
        void InitiateGameTokenLogin(bool, bool);
        void ApplyPendingTransactions();
        DetermineInitialScreen(bool);
        time_t GetDobFromUserInput();
        void SendToDobScreenWithErrorMessage(eastl::string const&, eastl::string const&, eastl::string const&);
        bool CheckPlayerIsOver13(long);
        void GetDate13YearsAgo();
        void GetReallyOldDate();
        bool DateOfBirthIsValid(int, int, int, long);
        void SetLoginScreen(int);
        void WorldSwitchRender(jstring::PixfontGeneric&, jstring::PixfontGeneric&, graphics::Pix2D&);
        void PlotTitle(graphics::Pix2D&);
        TitleScreen* GetRenderUsername();
        void GetRadioButton(bool, bool);
        void RestoreLoginUserFromRememberedUsername();
        TitleScreen* SetupUserPassInputForm();
        bool IsValidChar(char);
        void OnMuteTitleScreenChanged();
        void OnMidiVolumeChanged();
        eastl::string* LoginScreenToString(int);
        void MoveToAccountAppealScreen();
        void CalculateWorldSwitcherStructure(WorldSwitcherStructure&);
        int WorldSwitchWorldUnderPointer();
        void WorldSwitchExit(graphics::Pix2D&);
        void DirectLogin();
        void SetDisplayName(eastl::string const&);
        TitleScreen* GetTitleScreenInputHandler() const;
        static /* 120 bytes */ m_clippingSaver;                   // initialised in its definition
        static /* 4 bytes */ m_loadPos;                           // = 10
        static /* 4 bytes */ m_loginHelp;                         // = 1
        static /* 4 bytes */ m_loginTotpRememberUser;             // = 1
        static /* 4 bytes */ m_sy;                                // = 171
        static /* 4 bytes */ m_postAction;                        // = -1
        static /* 8 bytes */ m_precacheStartTime;                 // = -1
        static /* 8 bytes */ m_precacheCompleteTime;              // = -1
        static /* 4 bytes */ m_lastVisibleAppHeight;              // = -1
        static /* 4 bytes */ m_lastVisibleAppHeightChangeTic;     // = -1
        static /* 4 bytes */ m_steamLinkHint;                     // = 1
        static /* 8 bytes */ m_pendingTransactionLoginDelayStart; // = -1
        static /* 8 bytes */ m_initialOpenAnimFinishTime;         // = -1
        static /* 8 bytes */ m_initialOpenAnimStartTime;          // = -1
        static /* 4 bytes */ m_slLastWorld;                       // = -1
        static /* 16 bytes */ m_initialOpenAnim;                  // = { 15679664, 1, 0, 0 }
        static eastl::string /* 32 bytes */ m_loadString;         // = ""
        static /* 8 bytes */ m_loginscreen;
        static /* 4 bytes */ m_dobSubmitted;
        static /* 4 bytes */ m_dobInput;
        static /* 8 bytes */ m_loginTotpPin;
        static eastl::string /* 32 bytes */ m_loginUser;       // = ""
        static eastl::string /* 32 bytes */ m_lastLoginUser;   // = ""
        static eastl::string /* 32 bytes */ m_displayName;     // = ""
        static eastl::string /* 32 bytes */ m_lastDisplayName; // = ""
        static eastl::string /* 32 bytes */ m_loginPass;       // = ""
        static /* 1 bytes */ m_open;
        static /* 7 bytes */ m_backgroundMode;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_titleBack;
        static TitlescreenInputHandler /* 40 bytes */ m_inputHandler; // = TitlescreenInputHandler()
        static /* 1 bytes */ m_loadingFlamesTriggerSent;
        static /* 7 bytes */ m_errorTriggerSent;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_titleBack2;
        static /* 8 bytes */ m_titleBoxHeight;
        static Array<graphics::Pix8, eastl::allocator> /* 24 bytes */
            m_loginIcon;                               // = Array<graphics::Pix8,eastl::allocator>()
        static Array<graphics::Pix8, eastl::allocator> /* 24 bytes */
            m_titleMute;                               // = Array<graphics::Pix8,eastl::allocator>()
        static /* 4 bytes */ m_loginCheckboxWidth;
        static /* 4 bytes */ m_loginCheckboxHeight;
        static /* 4 bytes */ m_defaultWorldCheckboxWidth;
        static /* 4 bytes */ m_defaultWorldCheckboxHeight;
        static Array<eastl::string, eastl::allocator> /* 24 bytes */
            m_dobCharacters;                          // = Array<eastl::string,eastl::allocator>(8)
        static /* 8 bytes */ m_currentDobCharacter;
        static eastl::string /* 32 bytes */ m_loginTotpPinString; // = ""
        static /* 4 bytes */ m_switchScreen;
        static /* 4 bytes */ m_targetSY;  // = m_sy
        static /* 4 bytes */ m_preciseSY; // = (float)m_sy
        static /* 4 bytes */ m_xOf;
        static /* 4 bytes */ m_sXOf; // = m_xOf + 202
        static /* 4 bytes */ m_sXOfCentre;
        static Array<graphics::Pix8, eastl::allocator>  /* 24 bytes */
            m_volumeOptionsBobbleSlider;                // = Array<graphics::Pix8,eastl::allocator>()
        static Array<graphics::Pix32, eastl::allocator> /* 24 bytes */
            m_slBack;                                   // = Array<graphics::Pix32,eastl::allocator>()
        static Array<graphics::Pix8, eastl::allocator>  /* 24 bytes */
            m_slFlags;                                  // = Array<graphics::Pix8,eastl::allocator>()
        static Array<graphics::Pix8, eastl::allocator>  /* 24 bytes */
            m_slArrows;                                 // = Array<graphics::Pix8,eastl::allocator>()
        static Array<graphics::Pix8, eastl::allocator>  /* 24 bytes */
            m_slStars;                                  // = Array<graphics::Pix8,eastl::allocator>()
        static /* 4 bytes */ m_worldWarningAccepted;
        static /* 4 bytes */ m_loginSelect;
        static eastl::string /* 32 bytes */ m_pinCharList; // = "1234567890"
        static /* 1 bytes */ m_defaultWorldCheckboxHighlighted;
        static /* 1 bytes */ m_defaultWorldCheckboxTicked;
        static /* 1 bytes */ m_toggleFullscreenCheckboxHighlighted;
        static /* 1 bytes */ m_toggleFullscreenCheckboxTicked;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_termsAndConditionsLinkDimensions;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_privacyPolicyLinkDimensions;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_softwareLicenceLinkDimensionsMobile;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_steamLinkYesBtn;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_steamLinkNoBtn;
        static /* 4 bytes */ m_previousLoginFlow;
        static /* 4 bytes */ m_loginDimsInit;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_loginHelpTextDimensions;
        static /* 1 bytes */ m_loginRememberUserCheckboxHighlighted;
        static /* 3 bytes */ m_loginHideUserCheckboxHighlighted;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_cantLoginOtherTextDimensions;
        static /* 8 bytes */ m_currentSupportReason;
        static /* 8 bytes */ m_lastJagexWebFlowRequest;
        static Array<jag::math::Rect<int>, eastl::allocator> /* 24 bytes */
            m_volumeSliderPositions;                         // = Array<jag::math::Rect<int>,eastl::allocator>()
        static eastl::string /* 32 bytes */ m_loginMes1;     // = ""
        static eastl::string /* 32 bytes */ m_loginMes2;     // = ""
        static eastl::string /* 32 bytes */ m_loginMes3;     // = ""
        static eastl::string /* 32 bytes */ m_loginTitle;    // = ""
        static eastl::string /* 32 bytes */ m_loginHelpText; // = ""
        static eastl::string /* 32 bytes */ m_charList; // = eastl::string(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100dab3f1)
        static WorldSwitcherStructure /* 40 bytes */ m_worldSwitcherStructure; // = WorldSwitcherStructure()
        static /* 4 bytes */ m_slMaxScroll;
        static /* 4 bytes */ m_slStartColumn;
        static /* 8 bytes */ m_titleFlames;
        static /* 8 bytes */ m_loading;
        static /* 8 bytes */ m_titleBox;
        static /* 8 bytes */ m_titleBut;
        static /* 8 bytes */ m_titleButLarge;
        static /* 8 bytes */ m_textPlayNow;
        static /* 8 bytes */ m_titleButWide;
        static /* 8 bytes */ m_logo;
        static /* 8 bytes */ m_optionsRadioButtonNone;
        static /* 8 bytes */ m_optionsRadioButtonNoneHighlight;
        static /* 8 bytes */ m_optionsRadioButtonYes;
        static /* 8 bytes */ m_optionsRadioButtonYesHighlight;
        static /* 8 bytes */ m_slButton;
        static /* 8 bytes */ m_slLeftArrow;
        static /* 8 bytes */ m_slRightArrow;
        static /* 8 bytes */ m_verbose;
        static eastl::vector<eastl::string, eastl::allocator> /* 32 bytes */ m_spriteNamesInBinary;
        static eastl::vector<eastl::string, eastl::allocator> /* 32 bytes */ m_spriteNames;
        static eastl::vector<eastl::string, eastl::allocator> /* 32 bytes */ m_spriteNamesOptional;

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        long field_8; // offset 8
    };

    // 0x10004e410, 16 bytes, inline, placed by class name and debug map
    // TitleScreen::IsOpen()
    undefined8 TitleScreen::IsOpen() {
        return CONCAT71(16840872, m_open);
    }

    // 0x1000db9d0, 80 bytes, inline, placed by class name and debug map
    // TitleScreen::HasLoginMessage()
    ulong TitleScreen::HasLoginMessage() {
        char cVar1;
        uint uVar2;
        undefined8 unaff_RBX;
        ulong uVar3;

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if (cVar1 != '\0') {
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 != '\0') {
                uVar2 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                uVar3 = (ulong)uVar2 ^ 1;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1001870b0, 80 bytes, inline, placed by class name
    // TitleScreen::SetDisplayName(eastl::string const&)
    void TitleScreen::SetDisplayName(basic_string* param_1) {
        DisplayNameTools local_30[32];

        local_30->SanitiseUnknownDisplayName(param_1);
        eastl::string::operator=((eastl::string*)&m_displayName, (basic_string*)local_30);
        local_30->~basic_string();
    }

    // 0x100189140, 32 bytes, inline, placed by class name
    // TitleScreen::GetTitleScreenInputHandler() const
    TitleScreen* TitleScreen::GetTitleScreenInputHandler() {
        new (this) TitlescreenInputHandler((TitlescreenInputHandler*)&m_inputHandler);
        return this;
    }

} // namespace jag::oldscape
