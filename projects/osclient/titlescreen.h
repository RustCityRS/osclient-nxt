// projects/osclient/titlescreen.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class TitleScreen {
    public:
        void IsOpen();
        void DeleteCharacter();
        void TypeCharacter(char16_t arg1);
        void SetLoginSelect(int arg1);
        void Loop(javapal::GameShell& gameShell, graphics::Pix2D& pix2D, jstring::PixfontGeneric& pixfontGeneric1,
                  jstring::PixfontGeneric& pixfontGeneric2);
        void Draw(const shared_ptr<jstring::PixfontGeneric>& pixfontGeneric1,
                  const shared_ptr<jstring::PixfontGeneric>& pixfontGeneric2,
                  const shared_ptr<jstring::PixfontGeneric>& pixfontGeneric3, bool arg4, graphics::Pix2D& pix2D);
        void Close();
        void Open(jagex3::Js5& js51, jagex3::Js5& js52, bool arg3, int arg4);
        void OpenInBackgroundMode();
        int Ready(jagex3::Js5& js51, jagex3::Js5& js52);
        int ReadyMax(jagex3::Js5& js5);
        void SwitchToWorld(const GameWorld& gameWorld);
        void LoginMes(const eastl::string& str1, const eastl::string& str2, const eastl::string& str3);
        void SwitchToLoginSupport(int arg1);
        unsigned long HasLoginMessage();
        void MoveToInitialScreen(bool arg1, bool arg2);
        void SwitchToPendingTransactions();
        void SetLoginCredentials(int arg1, eastl::string str);
        void ShowServerRebootedScreen();
        void ShowServerLogoffScreen();
        TitleScreen();
        auto SetupAuthenticatorInputForm();
        void SetLogo(jagex3::Js5& js5, int arg2);
        void SetDefaultWorldCheckboxState();
        void SetDefaultToggleFullscreenCheckboxState();
        void SelectUsernameField();
        void SelectLoginFormField(int arg1);
        void ShowKeyboard(int arg1);
        void SelectPasswordField();
        unsigned long IsValidUsernameChar(char16_t arg1);
        void WorldSwitchLoop(javapal::GameShell& gameShell, graphics::Pix2D& pix2D);
        unsigned long HandleAudioButtons(int arg1, int arg2);
        void WorldSwitchEnter();
        void SaveDefaultWorld();
        void ThrobMessage(const eastl::string& str);
        void ResumeInForeground();
        void MoveToSteamLoginFlow(jag::auth::AuthAccountHint authAccountHint);
        unsigned long OpenTermsAndPrivacyScreen(int arg1);
        unsigned long OpenDataDownloadPrompt(int arg1);
        void ShowWorldWarningScreen(int arg1);
        void MoveToGameCenterFlow();
        void MoveToGoogleLoginFlow();
        void MoveToJagexWebFlow();
        void MoveToUserPassEntryScreen(bool arg1);
        void LaunchAccountCreationFlow();
        void ApplyPostAction();
        void PreparePasswordLogin(const eastl::string& str, bool arg2);
        void SetDefaultLoginSelect();
        void LoadDevCredentialsFromFile();
        auto SetupAccountAppealInputForm();
        void AccountAppealLogin();
        unsigned int GetCurrentDobInputBoxFromCoordinates(int arg1, int arg2);
        auto SetupDobInputForm();
        uint64_t CheckAndSetDobInput();
        void Start3rdPartyLoginFlow(auth::AuthLibWrapper* authLibWrapper);
        void InitiateGameTokenLogin(bool arg1, bool arg2);
        void ApplyPendingTransactions();
        void DetermineInitialScreen(bool arg1);
        time_t GetDobFromUserInput();
        void SendToDobScreenWithErrorMessage(const eastl::string& str1, const eastl::string& str2,
                                             const eastl::string& str3);
        bool CheckPlayerIsOver13(long arg1);
        void GetDate13YearsAgo();
        void GetReallyOldDate();
        bool DateOfBirthIsValid(int arg1, int arg2, int arg3, long arg4);
        void SetLoginScreen(int arg1);
        void WorldSwitchRender(jstring::PixfontGeneric& pixfontGeneric1, jstring::PixfontGeneric& pixfontGeneric2,
                               graphics::Pix2D& pix2D);
        void PlotTitle(graphics::Pix2D& pix2D);
        auto GetRenderUsername();
        void GetRadioButton(bool arg1, bool arg2);
        void RestoreLoginUserFromRememberedUsername();
        auto SetupUserPassInputForm();
        bool IsValidChar(char arg1);
        void OnMuteTitleScreenChanged();
        void OnMidiVolumeChanged();
        eastl::string* LoginScreenToString(int arg1);
        void MoveToAccountAppealScreen();
        void CalculateWorldSwitcherStructure(WorldSwitcherStructure& worldSwitcherStructure);
        int WorldSwitchWorldUnderPointer();
        void WorldSwitchExit(graphics::Pix2D& pix2D);
        void DirectLogin();
        void SetDisplayName(const eastl::string& str);
        TitleScreen* GetTitleScreenInputHandler() const;
        static int32_t m_clippingSaver[30];                 // initialised in its definition
        static int32_t m_loadPos;                           // = 10
        static int32_t m_loginHelp;                         // = 1
        static int32_t m_loginTotpRememberUser;             // = 1
        static int32_t m_sy;                                // = 171
        static int32_t m_postAction;                        // = -1
        static int64_t m_precacheStartTime;                 // = -1
        static int64_t m_precacheCompleteTime;              // = -1
        static int32_t m_lastVisibleAppHeight;              // = -1
        static int32_t m_lastVisibleAppHeightChangeTic;     // = -1
        static int32_t m_steamLinkHint;                     // = 1
        static int64_t m_pendingTransactionLoginDelayStart; // = -1
        static int64_t m_initialOpenAnimFinishTime;         // = -1
        static int64_t m_initialOpenAnimStartTime;          // = -1
        static int32_t m_slLastWorld;                       // = -1
        static int32_t m_initialOpenAnim[4];                // = { 15679664, 1, 0, 0 }
        static eastl::string m_loadString;                  // = ""
        static int64_t m_loginscreen;
        static int32_t m_dobSubmitted;
        static int32_t m_dobInput;
        static int64_t m_loginTotpPin;
        static eastl::string m_loginUser;       // = ""
        static eastl::string m_lastLoginUser;   // = ""
        static eastl::string m_displayName;     // = ""
        static eastl::string m_lastDisplayName; // = ""
        static eastl::string m_loginPass;       // = ""
        static bool m_open;
        static bool m_backgroundMode;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            m_titleBack;                               // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()
        static TitlescreenInputHandler m_inputHandler; // = TitlescreenInputHandler()
        static bool m_loadingFlamesTriggerSent;
        static bool m_errorTriggerSent;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            m_titleBack2; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()
        static int64_t m_titleBoxHeight;
        static Array<graphics::Pix8> m_loginIcon; // = Array<graphics::Pix8>()
        static Array<graphics::Pix8> m_titleMute; // = Array<graphics::Pix8>()
        static int32_t m_loginCheckboxWidth;
        static int32_t m_loginCheckboxHeight;
        static int32_t m_defaultWorldCheckboxWidth;
        static int32_t m_defaultWorldCheckboxHeight;
        static Array<eastl::string> m_dobCharacters; // = Array<eastl::string>(8)
        static int64_t m_currentDobCharacter;
        static eastl::string m_loginTotpPinString; // = ""
        static int32_t m_switchScreen;
        static int32_t m_targetSY;  // = m_sy
        static int32_t m_preciseSY; // = (float)m_sy
        static int32_t m_xOf;
        static int32_t m_sXOf; // = m_xOf + 202
        static int32_t m_sXOfCentre;
        static Array<graphics::Pix8> m_volumeOptionsBobbleSlider; // = Array<graphics::Pix8>()
        static Array<graphics::Pix32> m_slBack;                   // = Array<graphics::Pix32>()
        static Array<graphics::Pix8> m_slFlags;                   // = Array<graphics::Pix8>()
        static Array<graphics::Pix8> m_slArrows;                  // = Array<graphics::Pix8>()
        static Array<graphics::Pix8> m_slStars;                   // = Array<graphics::Pix8>()
        static int32_t m_worldWarningAccepted;
        static int32_t m_loginSelect;
        static eastl::string m_pinCharList; // = "1234567890"
        static bool m_defaultWorldCheckboxHighlighted;
        static bool m_defaultWorldCheckboxTicked;
        static bool m_toggleFullscreenCheckboxHighlighted;
        static bool m_toggleFullscreenCheckboxTicked;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            m_termsAndConditionsLinkDimensions; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            m_privacyPolicyLinkDimensions; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            m_softwareLicenceLinkDimensionsMobile; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            m_steamLinkYesBtn; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            m_steamLinkNoBtn; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()
        static int32_t m_previousLoginFlow;
        static int32_t m_loginDimsInit;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            m_loginHelpTextDimensions; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()
        static bool m_loginRememberUserCheckboxHighlighted;
        static bool m_loginHideUserCheckboxHighlighted;
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            m_cantLoginOtherTextDimensions; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()
        static int64_t m_currentSupportReason;
        static int64_t m_lastJagexWebFlowRequest;
        static Array<jag::math::Rect<int>> m_volumeSliderPositions; // = Array<jag::math::Rect<int>>()
        static eastl::string m_loginMes1;                           // = ""
        static eastl::string m_loginMes2;                           // = ""
        static eastl::string m_loginMes3;                           // = ""
        static eastl::string m_loginTitle;                          // = ""
        static eastl::string m_loginHelpText;                       // = ""
        static eastl::string m_charList; // = eastl::string(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100dab3f1)
        static WorldSwitcherStructure m_worldSwitcherStructure; // = WorldSwitcherStructure()
        static int32_t m_slMaxScroll;
        static int32_t m_slStartColumn;
        static unique_ptr<TitleFlames> m_titleFlames;
        static unique_ptr<LoadingScreenScript> m_loading;
        static unique_ptr<graphics::Pix8> m_titleBox;
        static unique_ptr<graphics::Pix8> m_titleBut;
        static unique_ptr<graphics::Pix8> m_titleButLarge;
        static unique_ptr<graphics::Pix8> m_textPlayNow;
        static unique_ptr<graphics::Pix8> m_titleButWide;
        static unique_ptr<graphics::Pix8> m_logo;
        static unique_ptr<graphics::Pix8> m_optionsRadioButtonNone;
        static unique_ptr<graphics::Pix8> m_optionsRadioButtonNoneHighlight;
        static unique_ptr<graphics::Pix8> m_optionsRadioButtonYes;
        static unique_ptr<graphics::Pix8> m_optionsRadioButtonYesHighlight;
        static unique_ptr<graphics::Pix8> m_slButton;
        static unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8> _> m_slLeftArrow;
        static unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8> _> m_slRightArrow;
        static int64_t m_verbose;
        static eastl::vector<eastl::string> m_spriteNamesInBinary;
        static eastl::vector<eastl::string> m_spriteNames;
        static eastl::vector<eastl::string> m_spriteNamesOptional;

    private:
        long field_0;
    };

    // 0x10004e410
    void TitleScreen::IsOpen() {
        return m_open;
    }

    // 0x1000db9d0
    unsigned long TitleScreen::HasLoginMessage() {
        unsigned int uVar2;
        uint64_t unaff_RBX;

        bool cVar1 = m_loginMes1.empty();
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (cVar1) {
            cVar1 = m_loginMes2.empty();
            if (cVar1) {
                uVar2 = m_loginMes3.empty();
                uVar3 = (unsigned long)uVar2 ^ 1;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1001870b0
    void TitleScreen::SetDisplayName(const eastl::string& str) {

        auto local_30 = rs2lib::social::DisplayNameTools::SanitiseUnknownDisplayName(str);
        m_displayName = &local_30;
    }

    // 0x100189140
    TitleScreen* TitleScreen::GetTitleScreenInputHandler() const {
        new (this) TitlescreenInputHandler(m_inputHandler);
        return this;
    }

} // namespace jag::oldscape
