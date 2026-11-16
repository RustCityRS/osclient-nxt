// projects/osclient/client.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class Client {
    public:
        class ScheduledFunction;
        class StockMarketOfferComparator;
        // virtual methods in vtable order
        virtual GetApplicationContext();
        virtual void Init();
        virtual void MainInit(jag::input::Input*, jag::input::InputHandler*);
        virtual void MainLoop();
        virtual void MainRedraw(bool, float);
        virtual void MainQuit();
        virtual void CheckResize();
        virtual void NotifyResize(bool);
        virtual void QuickResize();
        virtual GetDisplayName() const;
        bool IsMapBuildRegionMode();
        void GetMapBuildRegionZoneSource(int, int, int);
        GetNpcList();
        bool GetUsingRSeven();
        void SetInterfaceInteraction(shared_ptr<rs2lib::IfType> const&);
        void AddDeepLinkingID(int);
        HighlightManager GetHighlightManager();
        BuildCoordFromWorldCoord(rs2lib::CoordGrid const&);
        GetObjectsOnTile(rs2lib::CoordGrid const&);
        GetClientNpc(int);
        void SetMinimapZoom(int);
        void RedrawMinimap();
        FindClientObj(rs2lib::CoordGrid const&, int, int);
        WorldCoordFromBuildCoord(rs2lib::CoordGrid const&);
        void SetUsingOneButtonMouse(bool);
        LootTrackerSaveHandler GetLootTrackerSaveHandler();
        void GetFinalAmbientVolume();
        StockPlayerOffer* GetJagFx();
        Client(OSClient&);
        ulong ReadJavConfigParameters();
        void FinishInitialization();
        uint InitJs5RemoteLoader();
        GetBaseUrl(eastl::string const&, bool);
        uint GetPlatformPublishingType();
        bool HasAcceptedTermsAndPrivacy();
        void OnScaledUIQualityChanged();
        void ClientGameInit();
        void ResetIdleTimeRemaining();
        int GetIdleTimeRemaining();
        void DispatchInput();
        void ExecuteScheduledFunctions();
        void ServiceNetClient();
        void PcmPlayerService();
        ConstructRentalJavConfigUrl(char const*, unsigned short) const;
        void SetMainState(MainState);
        void MainLoad();
        void LoginPoll();
        void MapBuildLoop();
        void GameLoop();
        void DrawDebugUI();
        void CheckToQueueMutedAudio();
        void OnWindowModeChanged();
        void MessageBox(eastl::string const&, bool);
        void GameDraw();
        void DrawBuildInfo();
        void RebuildMap();
        void SaveAndClosePerAccountData();
        void ResetCache();
        void Destroy();
        void ReloadConfigs();
        void DiscardJS5Data();
        void ResetSprites();
        uint GetNPCCount() const;
        void DeriveTOTPMode(bool);
        void OpenJs5(jagex3::Js5ArchiveId, bool, bool, bool, bool);
        void AddPrecacheJS5(jagex3::Js5*, eastl::string const&);
        void LoginError(int);
        void GetLoginManager();
        void SetWorldId(int);
        void ProcessSideBarRequests();
        ulong ShouldExpandWindowForSideBars(RenderState::WindowProperties const&, RenderState::WindowSetOptions const&);
        void AddChat(eastl::string const&);
        void RequestOpenPopoutSideBar(sidebars::SideBarData);
        void RequestClosePopoutSideBar(int);
        void ClearSideBars();
        void ResetAndStoreLogFile();
        Client* GetLogFileDirectory();
        void GlMovePlayers();
        void GlMoveEntity(ClientEntity&);
        void OpPlayer(int, eastl::string const&);
        void AddChat(int, eastl::string const&, eastl::string const&);
        void GdmAddOtherPlayersToWorld();
        void GdmAddPlayerToWorld(shared_ptr<ClientPlayer> const&, bool);
        int GetAvH(int, int, int);
        ~Client();
        void SetLowMem();
        bool GetLowMem();
        void SetHighMem();
        void DirtyArea(int, int, int, int);
        void BlitArea(int, int, int, int);
        void AddChat(int, eastl::string const&, eastl::string const&, eastl::string const&);
        void AddChat(int, eastl::string const&);
        void SavePermClientVars();
        void ResetPlayerFriendIndicators();
        void ResetPlayerIgnoreIndicators();
        void ResetPlayerFriendChatIndicators();
        void ResetPlayerClanIndicators();
        void NotifyFriendSystemUpdate();
        void NotifyFriendChatUpdate();
        void NotifyClanSettingsUpdate();
        void FriendsChatKickUser(eastl::string const&);
        void FriendsChatJoinChat(eastl::string const&);
        void FriendsChatLeaveChat();
        void ClanChannelKickUser(int, int);
        void AffinedClanSettingsAddBannedFromChannel(int, int);
        void AffinedClanSettingsSetMutedFromChannel(int, int, bool);
        void FindObjects(eastl::string, bool);
        void StoreNewPackedUID(core::SuperPacket&, int);
        void CachePackedUID(Array<unsigned char, eastl::allocator> const&, int);
        void SerialiseCurrentPackedUIDToPacket(core::SuperPacket&);
        RemoveChatCrownTags(eastl::string const&);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* GetFontFromGroupId(int);
        Main(Array<eastl::string, BucketAllocatorEASTL> const&);
        void Usage();
        void SetupInterfaceRenderer();
        void AnimateInterface(int);
        void DrawInterface(int, int, int, int, int, int, int, int);
        CreateExactTileDestination(int, int);
        void UpdateHeatmap();
        void GetBuildInfoPrettyPrint();
        void GetServerBuildInfoPrettyPrint<char, 1024>(eastl::fixed_string<char, 1024, true, eastl::allocator>&);
        void GetClientBuildInfoPrettyPrint<char, 512>(eastl::fixed_string<char, 512, true, eastl::allocator>&);
        void GetDeviceBuildInfoPrettyPrint<char, 512>(eastl::fixed_string<char, 512, true, eastl::allocator>&);
        void ForcePlayerCameraPosition(int, int);
        int GetTweenedPlayerCameraAngleX(float);
        uint GetTweenedPlayerCameraAngleY(float);
        void OnWindowTopmostChanged();
        void SendWindowMode();
        void InterfaceCalculateSizeAndPosAll(bool, bool);
        int GetAdjustedCameraZoom(int, int);
        void CamFollow(int, int, int, int, int, int, int);
        void TelePlayer(int, int, int, bool);
        void RebuildPacket(bool, core::SuperPacket&);
        void StartRebuild(int, int, bool);
        WorldCoordToSourceCoord(rs2lib::CoordGrid const&);
        void RunHookImmediate(int, rs2lib::IfType::HookTypes);
        void PreventTimeout(bool);
        void OnLoadLocations(eastl::vector<LocInfo, BucketAllocatorEASTL> const&);
        void ShowObject(int, int);
        void RunUpdateObjStackTrigger(int, int, int);
        void LocChangePostBuildCorrect();
        void SetPlayerDestination(int, int);
        WorldCoordFromBuildCoord(int, int, int);
        void RecalcCameraFrustumTileVisibility(int, int);
        int GetFollowCameraDistance(int);
        void ExitFreecamMode();
        void ForceRecentreFreecam();
        void CheckRecentreFreecam();
        void TriggerSeqSound(shared_ptr<configdecoder::SeqType> const&, int, int, int);
        void TriggerSeqSound(int, int, int);
        void TriggerSeqSoundKeyFramed(shared_ptr<configdecoder::SeqType> const&, int, int, int);
        void PlaySynth(int, int, int);
        void GetFinalWaveVolume();
        void PlaySong(int);
        void GetFinalMidiVolume();
        StockPlayerOffer* GetMidi();
        void PlaySongs(eastl::vector<int, eastl::allocator> const&, int, int, int, int);
        void PlayJingle(int, int);
        void OnBrightnessChanged();
        void OnMidiVolumeChanged();
        void GlDoSoundsQueue();
        void CopyToClipboard();
        void Vibrate(hal::Haptics::Preset);
        void LostCon();
        ulong TcpIn(ServerConnection&);
        void GlUpdateMouseOverTile();
        void ArrayCopy<CoordType<UICoordSpecializer>, 500ul>(std::array<CoordType<UICoordSpecializer>, 500ul> const&,
                                                             unsigned long,
                                                             std::array<CoordType<UICoordSpecializer>, 500ul>&,
                                                             unsigned long, unsigned long);
        void ArrayCopy<unsigned long long, 500ul>(std::array<unsigned long long, 500ul> const&, unsigned long,
                                                  std::array<unsigned long long, 500ul>&, unsigned long, unsigned long);
        void GlCheckFriendChatState();
        void GlCheckClanState();
        void GlCheckMinimap();
        void LocChangeDoQueue();
        void GlMoveNpcs();
        void GlTimeoutChat();
        bool IsPlayerAdmin();
        ulong NeedBuildMinimenu();
        void LoopInterface(int, int, int, int, int, int, int);
        void PostLoopInterface();
        void GetInterfaceLayer(shared_ptr<rs2lib::IfType>);
        void ExecuteHardcodedMouseEvent(InterfaceMouseEvent const&);
        void GlWorldMap();
        void LoopIf3Drag();
        void GlIf3DragContents();
        void ComponentUpdated(shared_ptr<rs2lib::IfType> const&);
        void GlFollowCamera();
        void SmoothResetCamera();
        void GlCinemaCamera();
        void ServicePendingKeyFrameSets();
        void GlEntityOverlays(int, int, int, int, int, int);
        void LoopLayer(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&, int, int, int, int, int, int, int);
        void ToggleUI();
        void ClientDrop();
        void SetClanTransit();
        void ShowCoord();
        void HardError();
        void ToggleRenderSelf();
        void ToggleMouseOverText();
        void ToggleAntiDrag();
        void SteamShop();
        longlong AddScheduledFunction(std::function<bool()>&, unsigned long long, long long);
        void ReloadHighlights();
        void SendTestNotification();
        void PrintDrawDistance();
        void ToggleSkybox();
        void SetSkyboxColour(int, int, int);
        void DefaultSkybox();
        void ToggleFog();
        void SetFogIntensity(int);
        void SetFogIntensity(float);
        void SetFogDistance(int);
        void SetFogDistance(float);
        void DefaultFogSettings();
        void GetLootSourceCount();
        void ResetLootTracker();
        void SetUsingRSeven(bool, bool);
        void RequestMapRebuild();
        GetFog();
        void DoCheat(eastl::string const&);
        void SendCheatToServer(eastl::string const&);
        ulong RemoveScheduledFunction(long long);
        void CinemaCameraMovePosition(int, int, int);
        void CinemaCameraMoveAngle(int, int);
        void GlExactMove1(ClientEntity&);
        void GlExactMove2(ClientEntity&);
        void GlRouteMove(ClientEntity&);
        void GlEntityFace(ClientEntity&);
        void GlEntityAnim(ClientEntity&);
        void TriggerPlayerAnim(ClientPlayer&, int, int);
        void GameDrawMain(int, int, int, int, int);
        void GdmCheckRemoveMapFlag();
        void GdmAddSelfPlayerToWorld();
        void GdmAddPriorityPlayerToWorld();
        void GdmAddNPCs(bool);
        void GdmAddProjectiles();
        void GdmAddMapAnim();
        void GdmCalcWindowSize(int, int, int, int, bool);
        int GdmRoofCheck();
        int GdmRoofCheck2();
        void GdmDrawSkybox(int, long long);
        void GdmDrawFog(int, long long);
        void GdmEntityOverlays(int, int, int, int, int);
        void GdmCoordArrow(int, int);
        void GdmOtherOverlays();
        void SetDrawDistance(int);
        void OnDrawDistanceChange();
        void GdmGetSpecialArea();
        void PauseContinue(int, int);
        void InitHostPlatformStats();
        void GetSteamSDK();
        void SaveWindowPosition(WindowSavedPosition&&);
        void AcceptTermsAndPrivacy();
        StockPlayerOffer* GetClientScripts();
        StockPlayerOffer* GetSprites();
        void SetLoginProgress(int);
        eastl::string* LoginProgressToString(int);
        eastl::string* MainStateToString(int);
        int GetWorldId() const;
        WriteToPublicStorage(Filename const&, Filename&, char const*, Error&);
        void PreloadKeyFrameSet(int);
        Frozen() const;
        void SetFrozen(bool);
        void DrawLayer(Array<shared_ptr<rs2lib::IfType>, eastl::allocator> const&, int, int, int, int, int, int, int,
                       int);
        GetObjSprite(int, int, int, int, int);
        bool Hide(shared_ptr<rs2lib::IfType> const&);
        void ClientComponent(shared_ptr<rs2lib::IfType> const&);
        void DrawDebugString(int, int, char const*, ...);
        void DrawScrollbar(int, int, int, int, int);
        ulong GetIfActive(shared_ptr<rs2lib::IfType> const&);
        NiceNumber(int);
        SubstituteVars(eastl::string const&, shared_ptr<rs2lib::IfType> const&);
        void DrawOverlay(int, int, int, int, int, int, int, int);
        void DrawLineWithStrokeWidth(int, int, int, int, int, int);
        void InterfaceCalculateSizeAndPosInterface(int, int, int, bool, bool);
        void InterfaceCalculateSizeAndPosComponent(shared_ptr<rs2lib::IfType> const&);
        void InterfaceCalculateSize(shared_ptr<rs2lib::IfType> const&, int, int, bool, bool);
        void InterfaceCalculatePosition(shared_ptr<rs2lib::IfType> const&, int, int);
        void InterfaceCalculateSizeAndPosSubcomponents(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&,
                                                       shared_ptr<rs2lib::IfType> const&, bool);
        void InterfaceCalculateSizeAndPosArray(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&, int, int, int,
                                               bool, bool);
        void InterfacePositionOverlay(shared_ptr<rs2lib::IfType> const&, shared_ptr<rs2lib::IfType> const&, bool);
        void DoScrollbar(shared_ptr<rs2lib::IfType> const&, int, int, int, int, int, int);
        Inf(int);
        int GetIfVar(shared_ptr<rs2lib::IfType> const&, int);
        ulong KeyPressed(int);
        void RunHookLayer(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&, rs2lib::IfType::HookTypes);
        UsingOneButtonMouse();
        void TryStartDragContents(shared_ptr<rs2lib::IfType> const&);
        void SetIf3ComponentScrollPos(shared_ptr<rs2lib::IfType> const&, int, int);
        void DragTryPickup(shared_ptr<rs2lib::IfType> const&, CoordType<UICoordSpecializer>,
                           CoordType<UICoordSpecializer>);
        shared_ptr* GetDragLayer(shared_ptr<rs2lib::IfType> const&);
        void StashEntry(int);
        void CancelDrag();
        void LegacyUpdated();
        shared_ptr* ServerDraggable(shared_ptr<rs2lib::IfType> const&);
        void DraggingInterface();
        void IfAnimReset(int);
        void AnimateLayer(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&, int);
        void DrawDebugString(eastl::string const&, int, int);
        void DrawDebugString(eastl::string const&, int, int, int);
        void CreateObjOverlay(shared_ptr<rs2lib::IfType>);
        GetActive(shared_ptr<rs2lib::IfType> const&);
        void ClearHookQueueMouseEvents(bool);
        void ClearHardcodedMouseEvents();
        void ResetDragScrollLayer();
        void IfButtonX(int, shared_ptr<rs2lib::IfType> const&, eastl::string const&, int);
        TargetVerb(shared_ptr<rs2lib::IfType> const&);
        void GetParentInterface(shared_ptr<rs2lib::IfType>);
        byte RenderAllPlayerNames();
        byte RenderFriendNames();
        byte RenderFriendChatNames();
        byte RenderSelfName();
        ulong ShouldRenderPlayerName(ClientPlayer*);
        void DoStashed(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>);
        ulong IsMiniMenuOpenRequired();
        void RequestGroundCoordsForDeferredMove(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>);
        bool IsLocOnPlayersLevel(int, int, long long);
        void IsMiniMenuOpen();
        void ExecuteOnClickObjTrigger(minimenu::MinimenuSubject const&);
        void ExecuteOnClickLocTrigger(int, long long);
        void ExecuteOnClickNPCTrigger(int);
        void ExecuteOnClickPlayerTrigger(int);
        void SendExamineObj(int);
        void SendExamineObjV2(rs2lib::CoordGrid&, int);
        void DoAction(int, int, int, int, eastl::string const&, minimenu::MinimenuSubject const&,
                      CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, shared_ptr<rs2lib::IfType> const&);
        ulong ClientButton(int);
        void CloseModal();
        void ClientVar(int);
        void SetDeferredGroundOp(int, int, int, int);
        void CloseSubinterface(int, int, bool);
        int* OpenSubinterface(int, int, int);
        void PurgeServerActive(int);
        GetMinimapFlagCoord();
        void GdmEntityOverlayPlayer(int, int, int, int, int, int);
        GetAllOverlayPositions(ClientEntity&);
        void GdmEntityOverlayScripted(eastl::vector<unsigned long, BucketAllocatorEASTL> const&, OverlayPos&,
                                      rs2lib::IfType::OverlayTypes, int, int, int, int, int);
        void GdmEntityOverlayHardcodedOverhead(ClientEntity&, OverlayPos&, bool, int, int, int, int, int);
        void GdmEntityOverlayHitsplats(ClientEntity&, OverlayPos&, int, int, int, int);
        void GdmEntityOverlayNPC(int, int, int, int, int, int);
        void GdmEntityOverlayTile(int, int, int, int, int, int, int, int);
        GetAllOverlayPositionsTile(int, int, int);
        void GdmEntityOverlayScripted(
            eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator> const&, OverlayPos&,
            int, int, int, int, int);
        void GdmEntityOverlayLoc(int, int, int, LocLayer, int, int, int, int, int);
        GetAllOverlayPositionsLoc(int, int, int, int);
        void GetOverlayPos(int, int, int, int);
        void GetOverlayPos(ClientEntity*, int);
        void GdmEntityOverlayScriptedInner(Array<shared_ptr<rs2lib::IfType>, eastl::allocator> const&,
                                           shared_ptr<rs2lib::IfType> const&, unsigned long, OverlayPos&, int, int, int,
                                           int, int);
        int FineCentreCoordFromGridCoord(int);
        int GetServerMajorVersion();
        GetDeepLinkingIDs() const;
        void LoginDone();
        void ReconnectDone();
        void InitAndLoadPerAccountData();
        void Logout();
        void LogoutWithReason(shared::PlayerFacingLogoutReason::ID);
        ulong HandleUpdateFriendChatChannelFullServerProt(core::SuperPacket&, unsigned int);
        HandleUpdateFriendChatChannelSingleUserServerProt(core::SuperPacket&);
        void UnpackHiscoresPacket(core::SuperPacket&);
        void OnMidiEnd(int);
        void RequestClanChannelFull(int);
        void RequestClanSettingsFull(int);
        void GetNPCPos(bool, core::SuperPacket&);
        void EnableClanVarValues();
        void SetCameraMode(shared::FollowCameraMode);
        int WrapYawAngle(int) const;
        void ZonePacket(shared::ZoneProt::ID, core::SuperPacket&);
        void LocChangeCreate(int, int, int, LocLayer, int, int, int, unsigned char, int, int);
        ulong LocChangeAnim(int, int, int, LocLayer, int);
        void GetNPCPosOldVis(core::SuperPacket&);
        void GetNPCPosNewVis(bool, core::SuperPacket&);
        void GetNPCPosExtended(core::SuperPacket&);
        void DestroyNpc(int);
        void ResetNpcAnim(ClientNpc&);
        void OnLoadLocation(LocInfo const&);
        void LocChangeSetOld(LocChange&);
        FindLocChange(int, int, int, int);
        void LocChangeUnchecked(int, LocLayer, int, int, int, int, int, int);
        void CreatePlayer(int);
        void DestroyPlayer(int);
        GetClientNpcWeakPtr(int);
        uint GetLastNpcNum();
        GetLastNpcId(int);
        uint GetPriorityPlayerId();
        FindFirstClientObj(rs2lib::CoordGrid&, int);
        FindClientObjInStack(rs2lib::CoordGrid&, int);
        void InjectRoutePoints(ClientPlayer*, int, int, unsigned char);
        HighlightRoute(int, int, int, int, int, int);
        void SetPlayerLevel(int);
        GetDefaultUIZoom();
        BuildCoordFromWorldCoord(int, int, int);
        void ClearDeepLinkingIndex(int);
        Worldmap* GetWorldmap();
        Instance();
        void TriggerOnChatTransmitHook();
        GetInterfaceInteraction();
        int GetContentMode();
        GetAccountID() const;
        void GetConsole();
        EntityOverlays GetEntityOverlays();
        GetEndpointURLProvider();
        GetHookQueue();
        static /* 32 bytes */ FACING_MAP;                          // = { 768, 1024, 1280, 512, 1536, 256, 0, 1792 }
        static /* 8 bytes */ LOG_FILE_DIR;                         // = "logs"
        static eastl::string /* 32 bytes */ BETA_CACHE_DIR_SUFFIX; // = "beta"
        static /* 8 bytes */ m_pMyThis;
        static /* 8 bytes */ VIEWPORT_FOV_EXPONENT_BASE_LOG;        // = 4604418534313441775
        static eastl::string /* 32 bytes */ m_gitBranchName;        // = "usurper-216"
        static eastl::string /* 32 bytes */ m_gitCommitHash;        // = "b5f9a203463a87d88338bff708d461408f61f275"
        static /* 168 bytes */ DEFAULT_MINIMUM_INGAME_ASPECT_RATIO; // initialised in its definition

        // data members, from how the methods use this: 7306848 bytes
        uint field_0;                   // offset 0
        uint field_4;                   // offset 4
        RollingAverageCounter field_8;  // offset 8
        RollingAverageCounter field_64; // offset 64
        int field_120;                  // offset 120
        undefined4 field_124;           // offset 124
        undefined1 field_128;           // offset 128
        char _unknown_129[7];
        int field_136; // offset 136
        char _unknown_140[4];
        NXTPixToolkit* field_144;  // offset 144
        GraphicsApp* field_152;    // offset 152
        InputEventQueue field_160; // offset 160
        char _unknown_6940[4];
        ClientKeyboardListener field_6944; // offset 6944
        char _unknown_7269[11];
        ClientMouseListener field_7280; // offset 7280
        char _unknown_7960[136];
        int field_8096; // offset 8096
        int field_8100; // offset 8100
        int field_8104; // offset 8104
        int field_8108; // offset 8108
        int field_8112; // offset 8112
        char _unknown_8116[16];
        undefined1 field_8132; // offset 8132
        char _unknown_8133[3];
        undefined4 field_8136; // offset 8136
        char _unknown_8140[4];
        undefined** field_8144; // offset 8144
        char _unknown_8152[8];
        char field_8160; // offset 8160
        char _unknown_8161[7];
        SideBarData field_8168; // offset 8168
        char _unknown_8180[76];
        SideBarRequest field_8256; // offset 8256
        char _unknown_8272[152];
        bool field_8424; // offset 8424
        bool field_8425; // offset 8425
        char _unknown_8426[6];
        Language* field_8432;  // offset 8432
        Isaac* field_8440;     // offset 8440
        uint field_8448;       // offset 8448
        undefined1 field_8452; // offset 8452
        char _unknown_8453[35];
        int field_8488;        // offset 8488
        undefined4 field_8492; // offset 8492
        char _unknown_8496[8];
        int field_8504; // offset 8504
        char _unknown_8508[84];
        undefined4 field_8592; // offset 8592
        undefined4 field_8596; // offset 8596
        char _unknown_8600[4];
        undefined1 field_8604; // offset 8604
        undefined1 field_8605; // offset 8605
        undefined1 field_8606; // offset 8606
        char _unknown_8607[1];
        ulong field_8608; // offset 8608
        char _unknown_8616[1872];
        undefined4 field_10488; // offset 10488
        undefined4 field_10492; // offset 10492
        char _unknown_10496[16];
        long field_10512; // offset 10512
        int field_10520;  // offset 10520
        char _unknown_10524[8548];
        InputFieldKeyboardHandler field_19072; // offset 19072
        char field_19104;                      // offset 19104
        char _unknown_19105[3];
        int field_19108; // offset 19108
        int field_19112; // offset 19112
        int field_19116; // offset 19116
        char _unknown_19120[8];
        shared_ptr field_19128; // offset 19128
        char _unknown_19144[48];
        undefined1 field_19192; // offset 19192
        char _unknown_19193[32791];
        int m_playerLevel;      // offset 51984
        int field_51988;        // offset 51988
        undefined4 field_51992; // offset 51992
        char _unknown_51996[4];
        undefined8 m_accountID; // offset 52000
        ulonglong field_52008;  // offset 52008
        shared_ptr field_52016; // offset 52016
        char _unknown_52032[1];
        byte field_52033; // offset 52033
        char _unknown_52034[2];
        int field_52036; // offset 52036
        char _unknown_52040[304];
        Minimenu* field_52344; // offset 52344
        int field_52352;       // offset 52352
        int field_52356;       // offset 52356
        uint field_52360;      // offset 52360
        int field_52364;       // offset 52364
        char _unknown_52368[32];
        int m_cameraMode;       // offset 52400
        int field_52404;        // offset 52404
        undefined8 field_52408; // offset 52408
        undefined1 field_52416; // offset 52416
        char _unknown_52417[7];
        shared_ptr field_52424; // offset 52424
        undefined4 field_52440; // offset 52440
        char _unknown_52444[4];
        long field_52448; // offset 52448
        byte field_52456; // offset 52456
        char _unknown_52457[3];
        undefined4 field_52460; // offset 52460
        undefined1 field_52464; // offset 52464
        char _unknown_52465[3];
        uint field_52468; // offset 52468
        char _unknown_52472[56];
        shared_ptr field_52528; // offset 52528
        char _unknown_52544[88];
        shared_ptr field_52632; // offset 52632
        char _unknown_52648[64];
        short field_52712; // offset 52712
        short field_52714; // offset 52714
        short field_52716; // offset 52716
        short field_52718; // offset 52718
        short field_52720; // offset 52720
        char _unknown_52722[2];
        int field_52724;   // offset 52724
        short field_52728; // offset 52728
        short field_52730; // offset 52730
        short field_52732; // offset 52732
        char _unknown_52734[2];
        uint field_52736; // offset 52736
        uint field_52740; // offset 52740
        uint field_52744; // offset 52744
        uint field_52748; // offset 52748
        int field_52752;  // offset 52752
        int field_52756;  // offset 52756
        int field_52760;  // offset 52760
        char _unknown_52764[92];
        undefined8 field_52856; // offset 52856
        char _unknown_52864[48];
        undefined8 field_52912; // offset 52912
        char _unknown_52920[8];
        int field_52928; // offset 52928
        char _unknown_52932[4];
        RollingAverageCounter field_52936; // offset 52936
        int field_52992;                   // offset 52992
        char _unknown_52996[1];
        undefined1 field_52997; // offset 52997
        undefined1 field_52998; // offset 52998
        char field_52999;       // offset 52999
        undefined1 field_53000; // offset 53000
        char _unknown_53001[3];
        int field_53004; // offset 53004
        int field_53008; // offset 53008
        int field_53012; // offset 53012
        int field_53016; // offset 53016
        int field_53020; // offset 53020
        int field_53024; // offset 53024
        int field_53028; // offset 53028
        int field_53032; // offset 53032
        int field_53036; // offset 53036
        int field_53040; // offset 53040
        int field_53044; // offset 53044
        int field_53048; // offset 53048
        int field_53052; // offset 53052
        int field_53056; // offset 53056
        int field_53060; // offset 53060
        char _unknown_53064[24];
        int field_53088;        // offset 53088
        int field_53092;        // offset 53092
        int field_53096;        // offset 53096
        int field_53100;        // offset 53100
        uint field_53104;       // offset 53104
        int field_53108;        // offset 53108
        uint field_53112;       // offset 53112
        int field_53116;        // offset 53116
        int field_53120;        // offset 53120
        int field_53124;        // offset 53124
        int field_53128;        // offset 53128
        undefined4 field_53132; // offset 53132
        undefined4 field_53136; // offset 53136
        int field_53140;        // offset 53140
        char _unknown_53144[4];
        undefined8 field_53148; // offset 53148
        char _unknown_53156[4];
        undefined1 field_53160; // offset 53160
        char _unknown_53161[55];
        int field_53216;        // offset 53216
        uint field_53220;       // offset 53220
        uint field_53224;       // offset 53224
        int field_53228;        // offset 53228
        int field_53232;        // offset 53232
        undefined4 field_53236; // offset 53236
        int field_53240;        // offset 53240
        int field_53244;        // offset 53244
        int field_53248;        // offset 53248
        int field_53252;        // offset 53252
        undefined1 field_53256; // offset 53256
        undefined1 field_53257; // offset 53257
        bool field_53258;       // offset 53258
        char _unknown_53259[1];
        int field_53260; // offset 53260
        char _unknown_53264[1];
        char field_53265; // offset 53265
        char _unknown_53266[2];
        int field_53268; // offset 53268
        char _unknown_53272[4];
        undefined4 field_53276; // offset 53276
        undefined8 field_53280; // offset 53280
        undefined8 field_53288; // offset 53288
        undefined8 field_53296; // offset 53296
        undefined8 field_53304; // offset 53304
        undefined4 field_53312; // offset 53312
        char _unknown_53316[840];
        int field_54156;        // offset 54156
        undefined8 field_54160; // offset 54160
        int field_54168;        // offset 54168
        undefined* field_54172; // offset 54172
        char _unknown_54180[36];
        char field_54216; // offset 54216
        char _unknown_54217[39];
        uint field_54256;       // offset 54256
        uint field_54260;       // offset 54260
        undefined4 field_54264; // offset 54264
        char _unknown_54268[76];
        long field_54344; // offset 54344
        char _unknown_54352[32];
        byte field_54384; // offset 54384
        char _unknown_54385[7];
        StockPlayerOffer* field_54392;      // offset 54392
        StockPlayerOffer* field_54400;      // offset 54400
        StockPlayerOffer* field_54408;      // offset 54408
        StockPlayerOffer* field_54416;      // offset 54416
        StockPlayerOffer* m_pJagFx;         // offset 54424
        StockPlayerOffer* field_54432;      // offset 54432
        StockPlayerOffer* m_pMidi;          // offset 54440
        StockPlayerOffer* field_54448;      // offset 54448
        StockPlayerOffer* m_pSprites;       // offset 54456
        StockPlayerOffer* field_54464;      // offset 54464
        StockPlayerOffer* field_54472;      // offset 54472
        StockPlayerOffer* field_54480;      // offset 54480
        StockPlayerOffer* m_pClientScripts; // offset 54488
        StockPlayerOffer* field_54496;      // offset 54496
        StockPlayerOffer* field_54504;      // offset 54504
        StockPlayerOffer* field_54512;      // offset 54512
        StockPlayerOffer* field_54520;      // offset 54520
        StockPlayerOffer* field_54528;      // offset 54528
        StockPlayerOffer* field_54536;      // offset 54536
        StockPlayerOffer* field_54544;      // offset 54544
        Js5* field_54552;                   // offset 54552
        char _unknown_54560[136];
        int field_54696;          // offset 54696
        int m_serverMajorVersion; // offset 54700
        undefined4 field_54704;   // offset 54704
        uint field_54708;         // offset 54708
        uint field_54712;         // offset 54712
        undefined1 field_54716;   // offset 54716
        char _unknown_54717[35];
        OSClient* field_54752;  // offset 54752
        char field_54760;       // offset 54760
        undefined1 field_54761; // offset 54761
        char _unknown_54762[6];
        char* field_54768;  // offset 54768
        int m_contentMode;  // offset 54776
        int m_worldId;      // offset 54780
        bool m_lowMem;      // offset 54784
        bool field_54785;   // offset 54785
        bool m_usingRSeven; // offset 54786
        char _unknown_54787[1];
        undefined4 field_54788; // offset 54788
        char _unknown_54792[32];
        int field_54824;        // offset 54824
        int field_54828;        // offset 54828
        undefined1 field_54832; // offset 54832
        char _unknown_54833[7];
        undefined8 field_54840; // offset 54840
        long field_54848;       // offset 54848
        char _unknown_54856[8];
        long field_54864;       // offset 54864
        undefined4 field_54872; // offset 54872
        undefined1 field_54876; // offset 54876
        char _unknown_54877[3];
        undefined4 field_54880; // offset 54880
        undefined1 field_54884; // offset 54884
        char _unknown_54885[3];
        int field_54888; // offset 54888
        char _unknown_54892[8];
        int field_54900; // offset 54900
        int field_54904; // offset 54904
        int field_54908; // offset 54908
        int field_54912; // offset 54912
        int field_54916; // offset 54916
        char _unknown_54920[32];
        undefined1 field_54952; // offset 54952
        char _unknown_54953[3];
        undefined4 field_54956; // offset 54956
        char _unknown_54960[4];
        undefined8 field_54964; // offset 54964
        undefined8 field_54972; // offset 54972
        undefined8 field_54980; // offset 54980
        char _unknown_54988[4];
        int field_54992; // offset 54992
        int field_54996; // offset 54996
        int field_55000; // offset 55000
        int field_55004; // offset 55004
        char _unknown_55008[4];
        int field_55012; // offset 55012
        char _unknown_55016[4];
        int field_55020; // offset 55020
        int field_55024; // offset 55024
        char _unknown_55028[4];
        long field_55032; // offset 55032
        int field_55040;  // offset 55040
        char _unknown_55044[4];
        undefined8 field_55048; // offset 55048
        int field_55056;        // offset 55056
        char _unknown_55060[132];
        undefined8 field_55192; // offset 55192
        undefined8 field_55200; // offset 55200
        undefined8 field_55208; // offset 55208
        char _unknown_55216[1048632];
        uint m_nPCCount; // offset 1103848
        char _unknown_1103852[28];
        int field_1103880; // offset 1103880
        char _unknown_1103884[28];
        undefined8 field_1103912; // offset 1103912
        undefined1 field_1103920; // offset 1103920
        char _unknown_1103921[7];
        undefined1 field_1103928; // offset 1103928
        char _unknown_1103929[31];
        undefined1 field_1103960; // offset 1103960
        char _unknown_1103961[31];
        undefined1 field_1103992; // offset 1103992
        char _unknown_1103993[31];
        undefined1 field_1104024; // offset 1104024
        char _unknown_1104025[95];
        char field_1104120; // offset 1104120
        char _unknown_1104121[7];
        undefined8 field_1104128; // offset 1104128
        undefined8 field_1104136; // offset 1104136
        undefined8 field_1104144; // offset 1104144
        undefined8 field_1104152; // offset 1104152
        undefined8 field_1104160; // offset 1104160
        undefined8 field_1104168; // offset 1104168
        undefined8 field_1104176; // offset 1104176
        char _unknown_1104184[24];
        shared_ptr field_1104208; // offset 1104208
        shared_ptr field_1104224; // offset 1104224
        shared_ptr field_1104240; // offset 1104240
        shared_ptr field_1104256; // offset 1104256
        char _unknown_1104272[192];
        bool m_mapBuildRegionMode; // offset 1104464
        char _unknown_1104465[10819];
        undefined1 field_1115284; // offset 1115284
        char _unknown_1115285[407];
        int field_1115692;        // offset 1115692
        shared_ptr field_1115696; // offset 1115696
        char _unknown_1115712[72];
        shared_ptr field_1115784; // offset 1115784
        char _unknown_1115800[24];
        shared_ptr field_1115824; // offset 1115824
        undefined4 field_1115840; // offset 1115840
        undefined4 field_1115844; // offset 1115844
        undefined4 field_1115848; // offset 1115848
        undefined4 field_1115852; // offset 1115852
        byte field_1115856;       // offset 1115856
        char _unknown_1115857[3];
        uint field_1115860;       // offset 1115860
        undefined8 field_1115864; // offset 1115864
        int field_1115872;        // offset 1115872
        char _unknown_1115876[4604];
        uint field_1120480; // offset 1120480
        uint field_1120484; // offset 1120484
        char _unknown_1120488[16];
        shared_ptr field_1120504; // offset 1120504
        int field_1120520;        // offset 1120520
        char _unknown_1120524[28];
        uint m_priorityPlayerId; // offset 1120552
        char _unknown_1120556[1384452];
        undefined1 field_2505008; // offset 2505008
        char _unknown_2505009[31];
        bool m_usingOneButtonMouse; // offset 2505040
        char _unknown_2505041[3];
        undefined8 field_2505044; // offset 2505044
        undefined4 field_2505052; // offset 2505052
        shared_ptr field_2505056; // offset 2505056
        shared_ptr field_2505072; // offset 2505072
        undefined8 field_2505088; // offset 2505088
        uint field_2505096;       // offset 2505096
        uint field_2505100;       // offset 2505100
        shared_ptr field_2505104; // offset 2505104
        char _unknown_2505120[16];
        uint field_2505136;       // offset 2505136
        undefined4 field_2505140; // offset 2505140
        shared_ptr field_2505144; // offset 2505144
        undefined1 field_2505160; // offset 2505160
        char _unknown_2505161[3];
        undefined4 field_2505164; // offset 2505164
        undefined4 field_2505168; // offset 2505168
        undefined1 field_2505172; // offset 2505172
        char _unknown_2505173[3];
        undefined4 field_2505176; // offset 2505176
        undefined4 field_2505180; // offset 2505180
        undefined1 field_2505184; // offset 2505184
        char _unknown_2505185[3];
        int field_2505188;    // offset 2505188
        Array* field_2505192; // offset 2505192
        char _unknown_2505200[8];
        shared_ptr field_2505208; // offset 2505208
        undefined1 field_2505224; // offset 2505224
        undefined1 field_2505225; // offset 2505225
        char _unknown_2505226[2];
        undefined4 field_2505228; // offset 2505228
        undefined4 field_2505232; // offset 2505232
        undefined4 field_2505236; // offset 2505236
        undefined4 field_2505240; // offset 2505240
        undefined4 field_2505244; // offset 2505244
        undefined4 field_2505248; // offset 2505248
        char _unknown_2505252[4];
        ulong field_2505256; // offset 2505256
        char _unknown_2505264[544];
        int field_2505808; // offset 2505808
        char _unknown_2505812[128];
        undefined4 field_2505940; // offset 2505940
        char _unknown_2505944[128];
        undefined4 field_2506072; // offset 2506072
        char _unknown_2506076[128];
        undefined4 field_2506204; // offset 2506204
        char _unknown_2506208[132];
        int field_2506340;        // offset 2506340
        int field_2506344;        // offset 2506344
        int field_2506348;        // offset 2506348
        int field_2506352;        // offset 2506352
        int field_2506356;        // offset 2506356
        undefined8 field_2506360; // offset 2506360
        undefined4 field_2506368; // offset 2506368
        char _unknown_2506372[140];
        undefined1 field_2506512; // offset 2506512
        char _unknown_2506513[55];
        uint field_2506568; // offset 2506568
        int field_2506572;  // offset 2506572
        char _unknown_2506576[1900];
        undefined4 field_2508476; // offset 2508476
        char _unknown_2508480[176];
        float field_2508656;      // offset 2508656
        undefined1 field_2508660; // offset 2508660
        char _unknown_2508661[19];
        undefined1 field_2508680; // offset 2508680
        char _unknown_2508681[71];
        int field_2508752; // offset 2508752
        char _unknown_2508756[124];
        undefined4 field_2508880; // offset 2508880
        undefined1 field_2508884; // offset 2508884
        char _unknown_2508885[3];
        undefined8 field_2508888; // offset 2508888
        undefined8 field_2508896; // offset 2508896
        undefined4 field_2508904; // offset 2508904
        undefined8 field_2508908; // offset 2508908
        undefined8 field_2508916; // offset 2508916
        undefined4 field_2508924; // offset 2508924
        undefined8 field_2508928; // offset 2508928
        undefined8 field_2508936; // offset 2508936
        undefined4 field_2508944; // offset 2508944
        undefined8 field_2508948; // offset 2508948
        undefined8 field_2508956; // offset 2508956
        undefined4 field_2508964; // offset 2508964
        char _unknown_2508968[16];
        int field_2508984;               // offset 2508984
        undefined4 field_2508988;        // offset 2508988
        HostPlatformStats field_2508992; // offset 2508992
        char _unknown_2509280[24];
        Worldmap* m_pWorldmap;               // offset 2509304
        HighlightManager m_highlightManager; // offset 2509312
        undefined1 field_6814736;            // offset 6814736
        char _unknown_6814737[7];
        undefined1 field_6814744; // offset 6814744
        char _unknown_6814745[199];
        RollingAverageCounter field_6814944; // offset 6814944
        RollingAverageCounter field_6815000; // offset 6815000
        EntityOverlays m_entityOverlays;     // offset 6815056
        char _unknown_6817168[346104];
        LootTrackerSaveHandler m_lootTrackerSaveHandler; // offset 7163272
        char _unknown_7164584[64];
        undefined1 field_7164648; // offset 7164648
        char _unknown_7164649[7];
        Skybox field_7164656; // offset 7164656
        char _unknown_7164744[8];
        bool field_7164752;       // offset 7164752
        undefined1 field_7164753; // offset 7164753
        char _unknown_7164754[126];
        undefined2 field_7164880; // offset 7164880
        undefined1 field_7164882; // offset 7164882
        char _unknown_7164883[129793];
        int field_7294676; // offset 7294676
        int field_7294680; // offset 7294680
        char _unknown_7294684[28];
        undefined2 field_7294712; // offset 7294712
        char _unknown_7294714[2];
        uint field_7294716;       // offset 7294716
        uint field_7294720;       // offset 7294720
        float field_7294724;      // offset 7294724
        int field_7294728;        // offset 7294728
        int field_7294732;        // offset 7294732
        uint field_7294736;       // offset 7294736
        uint field_7294740;       // offset 7294740
        undefined1 field_7294744; // offset 7294744
        char _unknown_7294745[3];
        int field_7294748;        // offset 7294748
        undefined1 field_7294752; // offset 7294752
        char _unknown_7294753[3];
        int field_7294756;        // offset 7294756
        int field_7294760;        // offset 7294760
        int field_7294764;        // offset 7294764
        undefined1 field_7294768; // offset 7294768
        char _unknown_7294769[7];
        PixfontGeneric field_7294776; // offset 7294776
        char _unknown_7295952[10784];
        undefined1 field_7306736; // offset 7306736
        char _unknown_7306737[55];
        longlong field_7306792; // offset 7306792
        char _unknown_7306800[40];
        bool m_frozen;     // offset 7306840
        $_2 field_7306841; // offset 7306841
        char _unknown_7306842[6];
    };

    class Client::ScheduledFunction {
    public:
        ScheduledFunction();
        ~ScheduledFunction();
        ScheduledFunction(ScheduledFunction&&);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[24];
    };

    class Client::StockMarketOfferComparator {
    public:
        bool operator()(rs2lib::ActiveOffersReply::ActiveOffer const&,
                        rs2lib::ActiveOffersReply::ActiveOffer const&) const;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class ClientGosubFrame {
    public:
        void SwapLocals(eastl::vector<int, eastl::allocator>&&, eastl::vector<eastl::string, eastl::allocator>&&);
        ClientGosubFrame();
        ~ClientGosubFrame();

        // data members, from how the methods use this: 64 bytes
        char _unknown_0[16];
        undefined4 field_16; // offset 16
        char _unknown_20[44];
    };

    // 0x10000ec50, 16 bytes, inline, placed by class name and debug map
    // Client::IsMapBuildRegionMode()
    undefined1 Client::IsMapBuildRegionMode() {
        return m_mapBuildRegionMode;
    }

    // 0x100013700, 64 bytes, inline, placed by class name
    // Client::GetMapBuildRegionZoneSource(int, int, int)
    void Client::GetMapBuildRegionZoneSource(int param_1, int param_2, int param_3) {
        array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>* this_00;
        array<rs2lib::CoordZoneSource, 13ul>* this_01;

        this_00 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)
            std::array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>::operator[](
                (array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>*)&field_1104468,
                (long)param_1);
        this_01 = (array<rs2lib::CoordZoneSource, 13ul>*)
            std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>::operator[](this_00, (long)param_2);
        std::array<rs2lib::CoordZoneSource, 13ul>::operator[](this_01, (long)param_3);
    }

    // 0x100013b50, 16 bytes, inline, placed by class name
    // Client::GetNpcList()
    undefined1* Client::GetNpcList() {
        return &field_55272;
    }

    // 0x1000640b0, 16 bytes, inline, placed by class name and debug map
    // Client::GetUsingRSeven()
    undefined1 Client::GetUsingRSeven() {
        return m_usingRSeven;
    }

    // 0x10006cb40, 32 bytes, inline, placed by class name
    // Client::SetInterfaceInteraction(shared_ptr<rs2lib::IfType> const&)
    void Client::SetInterfaceInteraction(shared_ptr* param_1) {
        shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)&field_2508664, param_1);
    }

    // 0x100092c80, 48 bytes, inline, placed by class name
    // Client::AddDeepLinkingID(int)
    void Client::AddDeepLinkingID(int param_1) {
        int local_c;

        local_c = param_1;
        (&field_55240, &local_c)->push_back();
    }

    // 0x1000b56a0, 16 bytes, inline, placed by class name and debug map
    // Client::GetHighlightManager()
    undefined1* Client::GetHighlightManager() {
        return m_highlightManager;
    }

    // 0x1000b6530, 96 bytes, inline, placed by class name
    // Client::BuildCoordFromWorldCoord(rs2lib::CoordGrid const&)
    Client* Client::BuildCoordFromWorldCoord(CoordGrid* param_1) {
        int iVar1;
        int iVar2;
        CommandLine* in_RDX;

        iVar1 = in_RDX->GetX();
        iVar2 = in_RDX->GetZ();
        in_RDX->GetPos();
        BuildCoordFromWorldCoord(this, (int)param_1, iVar1, iVar2);
        return this;
    }

    // 0x1000b7aa0, 96 bytes, inline, placed by class name
    // Client::WorldCoordFromBuildCoord(rs2lib::CoordGrid const&)
    Client* Client::WorldCoordFromBuildCoord(CoordGrid* param_1) {
        int iVar1;
        int iVar2;
        CommandLine* in_RDX;

        iVar1 = in_RDX->GetX();
        iVar2 = in_RDX->GetZ();
        in_RDX->GetPos();
        WorldCoordFromBuildCoord(this, (int)param_1, iVar1, iVar2);
        return this;
    }

    // 0x1000b84d0, 16 bytes, inline, placed by class name
    // Client::SetUsingOneButtonMouse(bool)
    void Client::SetUsingOneButtonMouse(bool param_1) {
        m_usingOneButtonMouse = param_1;
    }

    // 0x1000ba700, 16 bytes, inline, placed by class name
    // Client::GetLootTrackerSaveHandler()
    undefined1* Client::GetLootTrackerSaveHandler() {
        return m_lootTrackerSaveHandler;
    }

    // 0x1000db9b0, 32 bytes, inline, placed by class name
    // Client::GetLoginManager()
    void Client::GetLoginManager() {
        (&field_2506376)->get();
    }

    // 0x1000e3630, 240 bytes, inline, placed by class name
    // void Client::GetServerBuildInfoPrettyPrint<char, 1024>(eastl::fixed_string<char, 1024, true, eastl::allocator>&)
    void Client::GetServerBuildInfoPrettyPrint<char, 1024>(fixed_string* param_1) {
        uint uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        Layout* this_00;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        char* pcVar9;

        uVar2 = constants::ContentModeInternalName(m_contentMode);
        uVar3 = constants::EngineModeInternalName(field_54696);
        pcVar9 = "members";
        if (field_8424 == false) {
            pcVar9 = "free";
        }
        this_00 = (Layout*)ModeWhere::GetByID(field_54168);
        uVar4 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar1 = GetWorldId(this);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true, eastl::allocator>>::
            sprintf((char*)param_1,
                    "content mode: %s<br>engine mode: %s<br>account type: %s<br>where: %s<br>version: %s<br>content "
                    "dir: %s<br>branch: %s<br>commit hash: %s<br>node: %d",
                    uVar2, uVar3, pcVar9, uVar4, uVar5, uVar6, uVar7, uVar8, (ulong)uVar1);
    }

    // 0x1000e3720, 96 bytes, inline, placed by class name
    // void Client::GetClientBuildInfoPrettyPrint<char, 512>(eastl::fixed_string<char, 512, true, eastl::allocator>&)
    void Client::GetClientBuildInfoPrettyPrint<char, 512>(fixed_string* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;

        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "version: %d.%d<br>branch: %s<br>commit hash: %s<br>build type: %s", 216, 1, uVar1, uVar2,
            "RELEASE");
    }

    // 0x1000e3780, 144 bytes, inline, placed by class name
    // void Client::GetDeviceBuildInfoPrettyPrint<char, 512>(eastl::fixed_string<char, 512, true, eastl::allocator>&)
    void Client::GetDeviceBuildInfoPrettyPrint<char, 512>(fixed_string* param_1) {
        HardwareInfo* this_00;
        undefined8 uVar1;
        eastl::string local_48[32];
        OperatingSystem local_28[4];
        uint local_24;
        uint local_20;
        uint local_1c;

        this_00 = (HardwareInfo*)Instance();
        this_00->GetOSVersionAndBuild(local_28, (int*)&local_24, (int*)&local_20, (int*)&local_1c);
        local_48->GetOSName();
        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "name: %s<br>version: %d.%d build %d", uVar1, (ulong)local_24, (ulong)local_20,
            (ulong)local_1c);
        eastl::string::~basic_string(local_48);
    }

    // 0x1000e6990, 48 bytes, inline, placed by class name
    // Client::WorldCoordFromBuildCoord(int, int, int)
    Client* Client::WorldCoordFromBuildCoord(int param_1, int param_2, int param_3) {
        undefined4 in_register_00000034;
        int in_R8D;

        new (this) rs2lib::CoordGrid(param_2, param_3 + *(int*)(CONCAT44(in_register_00000034, param_1) + 53220),
                                     in_R8D + *(int*)(CONCAT44(in_register_00000034, param_1) + 53224));
        return this;
    }

    // 0x1000e6b10, 16 bytes, inline, placed by class name
    // Client::GetFollowCameraDistance(int)
    int Client::GetFollowCameraDistance(int param_1) {
        return param_1 * 3 + 600;
    }

    // 0x1000f0f80, 80 bytes, inline, placed by class name
    // void Client::ArrayCopy<CoordType<UICoordSpecializer>, 500ul>(std::array<CoordType<UICoordSpecializer>, 500ul> const&, unsigned long, std::array<CoordType<UICoordSpecializer>, 500ul>&, unsigned long, unsigned long)
    /* void 
   Client::ArrayCopy<CoordType<UICoordSpecializer>,
   500ul>(std::array<CoordType<UICoordSpecializer>, 500ul> const&,
   unsigned long, std::array<CoordType<UICoordSpecializer>, 500ul>&,
   unsigned long, unsigned long) */

    void Client::ArrayCopy<CoordType<UICoordSpecializer>, 500ul>(array* param_1, ulong param_2, array* param_3,
                                                                 ulong param_4, ulong param_5) {
        CoordType* pCVar1;
        long lVar2;

        lVar2 = param_1->begin();
        pCVar1 = (CoordType*)(lVar2 + param_2 * 4);
        lVar2 = param_3->begin();
        std::copy<CoordType<UICoordSpecializer> const*, CoordType<UICoordSpecializer>*>(
            pCVar1, pCVar1 + param_5 * 4, (CoordType*)(lVar2 + param_4 * 4));
    }

    // 0x1000f0fd0, 80 bytes, inline, placed by class name
    // void Client::ArrayCopy<unsigned long long, 500ul>(std::array<unsigned long long, 500ul> const&, unsigned long, std::array<unsigned long long, 500ul>&, unsigned long, unsigned long)
    /* void Client::ArrayCopy<unsigned long long, 500ul>(std::array<unsigned long long,
   500ul> const&, unsigned long, std::array<unsigned long long, 500ul>&, unsigned long, unsigned
   long) */

    void Client::ArrayCopy<unsigned long long, 500ul>(array* param_1, ulong param_2, array* param_3, ulong param_4,
                                                      ulong param_5) {
        ulonglong* puVar1;
        long lVar2;

        lVar2 = param_1->begin();
        puVar1 = (ulonglong*)(lVar2 + param_2 * 8);
        lVar2 = param_3->begin();
        std::copy<unsigned long long const*, unsigned long long*>(puVar1, puVar1 + param_5,
                                                                  (ulonglong*)(lVar2 + param_4 * 8));
    }

    // 0x1000f13d0, 16 bytes, inline, placed by class name
    // Client::IsPlayerAdmin()
    bool Client::IsPlayerAdmin() {
        return 1 < field_53260;
    }

    // 0x1000f79a0, 16 bytes, complete-object constructor, inline, placed by class name
    // Client::ScheduledFunction::ScheduledFunction(): jumps straight to the base-object constructor

    // 0x1000f79b0, 16 bytes, complete-object destructor, inline, placed by class name
    // Client::ScheduledFunction::~ScheduledFunction(): jumps straight to the base-object destructor

    // 0x1000fd260, 16 bytes, inline, placed by class name
    // Client::GetWorldId() const
    int Client::GetWorldId() {
        return m_worldId;
    }

    // 0x1001112c0, 16 bytes, inline, placed by class name
    // Client::FineCentreCoordFromGridCoord(int)
    int Client::FineCentreCoordFromGridCoord(int param_1) {
        return param_1 * 128 + 64;
    }

    // 0x1001117c0, 16 bytes, inline, placed by class name
    // Client::GetServerMajorVersion()
    int Client::GetServerMajorVersion() {
        return m_serverMajorVersion;
    }

    // 0x1001117d0, 16 bytes, inline, placed by class name
    // Client::GetDeepLinkingIDs() const
    undefined1* Client::GetDeepLinkingIDs() {
        return &field_55240;
    }

    // 0x100114570, 16 bytes, inline, placed by class name
    // Client::SetCameraMode(shared::FollowCameraMode)
    void Client::SetCameraMode(int param_2) {
        m_cameraMode = param_2;
    }

    // 0x10011f500, 32 bytes, inline, placed by class name
    // Client::GetDefaultUIZoom()
    undefined4 Client::GetDefaultUIZoom() {
        return *(undefined4*)(&DAT_100d3d450 + (ulong)(field_8425 == false) * 4);
    }

    // 0x100124fa0, 48 bytes, inline, placed by class name
    // Client::BuildCoordFromWorldCoord(int, int, int)
    Client* Client::BuildCoordFromWorldCoord(int param_1, int param_2, int param_3) {
        undefined4 in_register_00000034;
        int in_R8D;

        new (this) rs2lib::CoordGrid(param_2, param_3 - *(int*)(CONCAT44(in_register_00000034, param_1) + 53220),
                                     in_R8D - *(int*)(CONCAT44(in_register_00000034, param_1) + 53224));
        return this;
    }

    // 0x10012dba0, 16 bytes, base-object constructor, inline, placed by class name
    // Client::ScheduledFunction::ScheduledFunction()
    void Client::ScheduledFunction::ScheduledFunction() {
        std::function<bool()>::function((function<bool()>*)&field_16);
    }

    // 0x10012dbf0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Client::ScheduledFunction::~ScheduledFunction()
    /* jag::graphics::AnimationStateMachine::TransitionInfo::~TransitionInfo() */

    void jag::graphics::AnimationStateMachine::TransitionInfo::~TransitionInfo() {
        std::function<bool()>::~function((function<bool()>*)&field_16);
    }

    // 0x10014a350, 144 bytes, inline, placed by class name
    // Client::GlEntityOverlays(int, int, int, int, int, int)::$_8::operator()(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&) const
    /* Client::GlEntityOverlays(int, int, int, int, int,
   int)::$_8::TEMPNAMEPLACEHOLDERVALUE(Array<shared_ptr<rs2lib::IfType>,
   eastl::allocator>&) const */

    void Client::GlEntityOverlays(int, int, int, int, int, int)::$_8::operator()(Array* param_1) {
        Client* this_00;
        shared_ptr* this_01;
        shared_ptr<rs2lib::IfType>* this_02;
        long lVar2;

        this_00 = *(Client**)this;
        this_01 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
            (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)param_1, 0);
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            this_02 = (shared_ptr<rs2lib::IfType>*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)param_1, 0);
            lVar2 = shared_ptr<rs2lib::IfType>::operator->(this_02);
            if (*(int*)(lVar2 + 28) != this_00->field_7294676) {
                LoopLayer(this_00, param_1, -1, *(int*)(this + 8), *(int*)(this + 12), *(int*)(this + 16),
                          *(int*)(this + 20), *(int*)(this + 24), *(int*)(this + 28));
            }
        }
    }

    // 0x10014b200, 16 bytes, complete-object constructor, inline, placed by class name
    // Client::ScheduledFunction::ScheduledFunction(Client::ScheduledFunction&&): jumps straight to the base-object constructor

    // 0x10014b210, 32 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Client::ScheduledFunction::ScheduledFunction(Client::ScheduledFunction&&)
    /* jag::graphics::AnimationStateMachine::TransitionInfo::TransitionInfo(jag::graphics::AnimationStateMachine::TransitionInfo&&)
    */

    void jag::graphics::AnimationStateMachine::TransitionInfo::TransitionInfo(TransitionInfo* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->field_8;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        std::function<bool()>::function((function<bool()>*)&field_16, (function*)&param_1->field_16);
    }

    // 0x10014bbd0, 1408 bytes, inline, placed by class name
    // Client::GdmAddProjectiles()::$_10::operator()(shared_ptr<ClientProj> const&) const
    /* Client::GdmAddProjectiles()::$_10::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<ClientProj>
   const&) const */

    ulong Client::GdmAddProjectiles()::$_10::operator()(shared_ptr* param_1) {
        double dVar1;
        double dVar2;
        double dVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        undefined4 uVar7;
        int iVar8;
        bool bVar9;
        int iVar10;
        long lVar11;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar12;
        ClientProj* pCVar13;
        long lVar14;
        shared_ptr* psVar15;
        world* this_00;
        long lVar16;
        undefined8 unaff_RBX;
        ulong uVar17;
        Client* pCVar18;
        shared_ptr local_40;

        lVar16 = *(long*)this;
        bVar9 = shared_ptr::operator_cast_to_bool(param_1);
        if (bVar9) {
            lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
            uVar17 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
            if (*(int*)(lVar11 + 24) != *(int*)(lVar16 + 51984))
                goto LAB_10014c014;
            iVar4 = *(int*)(lVar16 + 8488);
            lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
            if (*(int*)(lVar11 + 60) < iVar4)
                goto LAB_10014c014;
            iVar4 = *(int*)(lVar16 + 8488);
            lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
            if (*(int*)(lVar11 + 56) <= iVar4) {
                lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                if (*(char*)(lVar11 + 80) == '\0') {
                    lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                    if (*(int*)(lVar11 + 72) != 0) {
                        lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                        if (0 < *(int*)(lVar11 + 72)) {
                            lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                            pvVar12 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                                    (array<shared_ptr<ClientNpc>, 65536ul>*)(lVar16 + 55272),
                                    (long)*(int*)(lVar11 + 72) - 1);
                            lVar11 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar12);
                            if (((lVar11 != 0) && (uVar6 = *(uint*)(lVar11 + 24), uVar6 < 13312)) &&
                                (*(uint*)(lVar11 + 28) < 13312)) {
                                lVar14 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                                *(uint*)(lVar14 + 28) = uVar6;
                                uVar7 = *(undefined4*)(lVar11 + 28);
                                lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                                *(undefined4*)(lVar11 + 32) = uVar7;
                                pCVar13 =
                                    (ClientProj*)shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                                lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                                iVar4 = *(int*)(lVar11 + 44);
                                lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                                iVar5 = *(int*)(lVar11 + 48);
                                lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                                pCVar13->SetTarget(iVar4, iVar5, *(int*)(lVar11 + 52), *(int*)(lVar16 + 8488));
                            }
                        }
                        lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                        if (*(int*)(lVar11 + 72) < 0) {
                            new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                            lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                            if (*(uint*)(lVar16 + 51988) == ~*(uint*)(lVar11 + 72)) {
                                shared_ptr<ClientPlayer>::operator=((shared_ptr<ClientPlayer>*)&local_40,
                                                                    (shared_ptr*)(lVar16 + 52016));
                            } else {
                                psVar15 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                                    (array<shared_ptr<ClientPlayer>, 2048ul>*)(lVar16 + 19216),
                                    (long)(int)~*(uint*)(lVar11 + 72));
                                shared_ptr<ClientPlayer>::operator=((shared_ptr<ClientPlayer>*)&local_40, psVar15);
                            }
                            bVar9 = operator!=(&local_40, (_func_decltype_nullptr*)0);
                            if (bVar9) {
                                lVar11 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_40);
                                if (-1 < *(int*)(lVar11 + 24)) {
                                    lVar11 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_40);
                                    if (*(int*)(lVar11 + 24) < 13312) {
                                        lVar11 =
                                            shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_40);
                                        if (-1 < *(int*)(lVar11 + 28)) {
                                            lVar11 = shared_ptr<ClientPlayer>::operator->(
                                                (shared_ptr<ClientPlayer>*)&local_40);
                                            if (*(int*)(lVar11 + 28) < 13312) {
                                                lVar11 = shared_ptr<ClientPlayer>::operator->(
                                                    (shared_ptr<ClientPlayer>*)&local_40);
                                                uVar7 = *(undefined4*)(lVar11 + 24);
                                                lVar11 = shared_ptr<ClientProj>::operator->(
                                                    (shared_ptr<ClientProj>*)param_1);
                                                *(undefined4*)(lVar11 + 28) = uVar7;
                                                lVar11 = shared_ptr<ClientPlayer>::operator->(
                                                    (shared_ptr<ClientPlayer>*)&local_40);
                                                uVar7 = *(undefined4*)(lVar11 + 28);
                                                lVar11 = shared_ptr<ClientProj>::operator->(
                                                    (shared_ptr<ClientProj>*)param_1);
                                                *(undefined4*)(lVar11 + 32) = uVar7;
                                                pCVar13 = (ClientProj*)shared_ptr<ClientProj>::operator->(
                                                    (shared_ptr<ClientProj>*)param_1);
                                                lVar11 = shared_ptr<ClientProj>::operator->(
                                                    (shared_ptr<ClientProj>*)param_1);
                                                iVar4 = *(int*)(lVar11 + 44);
                                                lVar11 = shared_ptr<ClientProj>::operator->(
                                                    (shared_ptr<ClientProj>*)param_1);
                                                iVar5 = *(int*)(lVar11 + 48);
                                                lVar11 = shared_ptr<ClientProj>::operator->(
                                                    (shared_ptr<ClientProj>*)param_1);
                                                pCVar13->SetTarget(iVar4, iVar5, *(int*)(lVar11 + 52),
                                                                   *(int*)(lVar16 + 8488));
                                            }
                                        }
                                    }
                                }
                            }
                            local_40.~shared_ptr();
                        }
                    }
                }
                lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                if (0 < *(int*)(lVar11 + 76)) {
                    lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                    pvVar12 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                            (array<shared_ptr<ClientNpc>, 65536ul>*)(lVar16 + 55272), (long)*(int*)(lVar11 + 76) - 1);
                    lVar11 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar12);
                    if (((lVar11 != 0) && (*(uint*)(lVar11 + 24) < 13312)) && (*(uint*)(lVar11 + 28) < 13312)) {
                        pCVar13 = (ClientProj*)shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                        iVar4 = *(int*)(lVar11 + 24);
                        iVar5 = *(int*)(lVar11 + 28);
                        pCVar18 = (Client*)param_1;
                        lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                        iVar10 = GetAvH(pCVar18, iVar4, iVar5, *(int*)(lVar11 + 24));
                        lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                        pCVar13->SetTarget(iVar4, iVar5, iVar10 - *(int*)(lVar11 + 40), *(int*)(lVar16 + 8488));
                    }
                }
                lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                if (*(int*)(lVar11 + 76) < 0) {
                    new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                    if (*(uint*)(lVar16 + 51988) == ~*(uint*)(lVar11 + 76)) {
                        shared_ptr<ClientPlayer>::operator=((shared_ptr<ClientPlayer>*)&local_40,
                                                            (shared_ptr*)(lVar16 + 52016));
                    } else {
                        psVar15 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                            (array<shared_ptr<ClientPlayer>, 2048ul>*)(lVar16 + 19216),
                            (long)(int)~*(uint*)(lVar11 + 76));
                        shared_ptr<ClientPlayer>::operator=((shared_ptr<ClientPlayer>*)&local_40, psVar15);
                    }
                    bVar9 = operator!=(&local_40, (_func_decltype_nullptr*)0);
                    if (bVar9) {
                        lVar11 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_40);
                        if (-1 < *(int*)(lVar11 + 24)) {
                            lVar11 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_40);
                            if (*(int*)(lVar11 + 24) < 13312) {
                                lVar11 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_40);
                                if (-1 < *(int*)(lVar11 + 28)) {
                                    lVar11 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_40);
                                    if (*(int*)(lVar11 + 28) < 13312) {
                                        pCVar13 = (ClientProj*)shared_ptr<ClientProj>::operator->(
                                            (shared_ptr<ClientProj>*)param_1);
                                        lVar11 =
                                            shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_40);
                                        iVar4 = *(int*)(lVar11 + 24);
                                        lVar11 =
                                            shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_40);
                                        iVar5 = *(int*)(lVar11 + 28);
                                        lVar11 =
                                            shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_40);
                                        iVar10 = *(int*)(lVar11 + 24);
                                        lVar11 =
                                            shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_40);
                                        iVar8 = *(int*)(lVar11 + 28);
                                        pCVar18 = (Client*)param_1;
                                        lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                                        iVar10 = GetAvH(pCVar18, iVar10, iVar8, *(int*)(lVar11 + 24));
                                        lVar11 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                                        pCVar13->SetTarget(iVar4, iVar5, iVar10 - *(int*)(lVar11 + 40),
                                                           *(int*)(lVar16 + 8488));
                                    }
                                }
                            }
                        }
                    }
                    local_40.~shared_ptr();
                }
                pCVar13 = (ClientProj*)shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                pCVar13->Move(*(int*)(lVar16 + 1115692));
                this_00 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)(lVar16 + 19184));
                iVar4 = *(int*)(lVar16 + 51984);
                lVar16 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                dVar1 = *(double*)(lVar16 + 88);
                lVar16 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                dVar2 = *(double*)(lVar16 + 96);
                lVar16 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                dVar3 = *(double*)(lVar16 + 104);
                new (&local_40) shared_ptr<dash3d::Decor>(param_1);
                lVar16 = shared_ptr<ClientProj>::operator->((shared_ptr<ClientProj>*)param_1);
                this_00->AddDynamic(iVar4, (int)dVar1, (int)dVar2, (int)dVar3, 60, &local_40, *(int*)(lVar16 + 112), -1,
                                    false);
                local_40.~shared_ptr();
            }
        }
        uVar17 = 0;
    LAB_10014c014:
        return uVar17 & 4294967295;
    }

    // 0x10014c150, 320 bytes, inline, placed by class name
    // Client::GdmAddMapAnim()::$_11::operator()(shared_ptr<MapSpotAnim>&) const
    /* Client::GdmAddMapAnim()::$_11::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<MapSpotAnim>&)
   const */

    ulong Client::GdmAddMapAnim()::$_11::operator()(shared_ptr* param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        long lVar4;
        MapSpotAnim* this_00;
        long lVar5;
        undefined8 unaff_R14;
        ulong uVar6;
        shared_ptr local_50;
        world* local_40;
        int local_34;

        lVar5 = *(long*)this;
        lVar4 = shared_ptr<MapSpotAnim>::operator->((shared_ptr<MapSpotAnim>*)param_1);
        uVar6 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (*(int*)(lVar4 + 32) == *(int*)(lVar5 + 51984)) {
            lVar4 = shared_ptr<MapSpotAnim>::operator->((shared_ptr<MapSpotAnim>*)param_1);
            if (*(char*)(lVar4 + 24) == '\0') {
                iVar1 = *(int*)(lVar5 + 8488);
                lVar4 = shared_ptr<MapSpotAnim>::operator->((shared_ptr<MapSpotAnim>*)param_1);
                if (*(int*)(lVar4 + 28) <= iVar1) {
                    this_00 = (MapSpotAnim*)shared_ptr<MapSpotAnim>::operator->((shared_ptr<MapSpotAnim>*)param_1);
                    this_00->DoAnim(*(int*)(lVar5 + 1115692));
                    lVar4 = shared_ptr<MapSpotAnim>::operator->((shared_ptr<MapSpotAnim>*)param_1);
                    if (*(char*)(lVar4 + 24) != '\0')
                        goto LAB_10014c26a;
                    local_40 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                        (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)(lVar5 + 19184));
                    lVar5 = shared_ptr<MapSpotAnim>::operator->((shared_ptr<MapSpotAnim>*)param_1);
                    local_34 = *(int*)(lVar5 + 32);
                    lVar5 = shared_ptr<MapSpotAnim>::operator->((shared_ptr<MapSpotAnim>*)param_1);
                    iVar1 = *(int*)(lVar5 + 36);
                    lVar5 = shared_ptr<MapSpotAnim>::operator->((shared_ptr<MapSpotAnim>*)param_1);
                    iVar2 = *(int*)(lVar5 + 40);
                    lVar5 = shared_ptr<MapSpotAnim>::operator->((shared_ptr<MapSpotAnim>*)param_1);
                    iVar3 = *(int*)(lVar5 + 44);
                    new (&local_50) shared_ptr<dash3d::Decor>(param_1);
                    local_40->AddDynamic(local_34, iVar1, iVar2, iVar3, 60, &local_50, 0, -1, false);
                    local_50.~shared_ptr();
                }
                uVar6 = 0;
            }
        }
    LAB_10014c26a:
        return uVar6 & 4294967295;
    }

    // 0x10014ca10, 192 bytes, inline, placed by class name
    // Client::ShowObject(int, int)::$_12::operator()(shared_ptr<ClientObj>, shared_ptr<ClientObj>) const
    /* Client::ShowObject(int,
   int)::$_12::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<ClientObj>,
   shared_ptr<ClientObj>) const */

    ulong Client::ShowObject(int, int)::$_12::operator()(shared_ptr param_1, shared_ptr param_2) {
        int iVar1;
        int iVar2;
        long lVar3;
        long lVar4;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* in_RSI;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* in_RDI;
        shared_ptr<configdecoder::ObjType> local_40[16];
        shared_ptr<configdecoder::ObjType> local_30[16];

        lVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(in_RDI);
        local_40->List(*(int*)(lVar3 + 24));
        lVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(in_RSI);
        local_30->List(*(int*)(lVar3 + 24));
        lVar3 = shared_ptr<configdecoder::ObjType>::operator->(local_40);
        iVar1 = *(int*)(lVar3 + 204);
        lVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(in_RDI);
        iVar2 = *(int*)(lVar3 + 28);
        lVar3 = shared_ptr<configdecoder::ObjType>::operator->(local_30);
        lVar4 = (long)iVar2 * (long)iVar1;
        iVar1 = *(int*)(lVar3 + 204);
        lVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(in_RSI);
        iVar2 = *(int*)(lVar3 + 28);
        local_30->~shared_ptr();
        local_40->~shared_ptr();
        return CONCAT71((int7)((ulong)lVar4 >> 8), lVar4 < (long)iVar2 * (long)iVar1) & 4294967295;
    }

    // 0x10014f020, 64 bytes, inline, placed by class name
    // Client::CreateObjOverlay(shared_ptr<rs2lib::IfType>)::$_13::operator()(rs2lib::IfType const&) const
    /* Client::CreateObjOverlay(shared_ptr<rs2lib::IfType>)::$_13::TEMPNAMEPLACEHOLDERVALUE(rs2lib::IfType
   const&) const */

    void Client::CreateObjOverlay(shared_ptr<rs2lib::IfType>)::$_13::operator()(IfType* param_1) {
        long lVar1;
        char cVar2;

        lVar1 = *(long*)this;
        cVar2 = ((lVar1 + 6815056))->OverlayExistsAtIndex(param_1->field_680);
        if (cVar2 != '\0') {
            ((lVar1 + 6815056))->DestroyOverlay(param_1->field_680);
        }
    }

    // 0x10014f3f0, 32 bytes, inline, placed by class name
    // Client::CloseModal()::$_15::operator()(eastl::pair<int const, SubInterface>&) const
    /* Client::CloseModal()::$_15::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<int const,
   SubInterface>&) const */

    undefined4 Client::CloseModal()::$_15::operator()(pair* param_1) {
        int iVar1;

        iVar1 = *(int*)(this + 8);
        return CONCAT31((int3)((uint)iVar1 >> 8), iVar1 == 3 || iVar1 == 0);
    }

    // 0x10014f790, 16 bytes, inline, placed by class name
    // Client::PurgeServerActive(int)::$_16::operator()(eastl::pair<unsigned long long const, int>&) const
    /* Client::PurgeServerActive(int)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<unsigned
   long long const, int>&) const */

    undefined2 Client::PurgeServerActive(int)::$_16::operator()(pair* param_1) {
        return CONCAT11((char)(*(ushort*)(param_1 + 6) >> 8), *(uint*)this == (uint) * (ushort*)(param_1 + 6));
    }

    // 0x100152d90, 32 bytes, inline, placed by class name
    // Client::TcpIn(ServerConnection&)::$_17::operator()(eastl::pair<int const, SubInterface>&) const
    /* Client::TcpIn(ServerConnection&)::$_17::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<int
   const, SubInterface>&) const */

    bool Client::TcpIn(ServerConnection&)::$_17::operator()(pair* param_1) {
        __17 _Var1;

        _Var1 = this[12];
        if (_Var1 != (__17)0) {
            this[12] = (__17)0;
        }
        return _Var1 == (__17)0;
    }

    // 0x100153170, 64 bytes, inline, placed by class name
    // Client::ZonePacket(shared::ZoneProt::ID, core::SuperPacket&)::$_18::operator()(shared_ptr<ClientObj>&) const
    /* Client::ZonePacket(shared::ZoneProt::ID,
   core::SuperPacket&)::$_18::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<ClientObj>&)
   const */

    undefined4 Client::ZonePacket(shared::ZoneProt::ID, core::SuperPacket&)::$_18::operator()(shared_ptr* param_1) {
        undefined4 uVar1;
        long lVar2;

        lVar2 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)param_1);
        if (*(uint*)(lVar2 + 24) == (*(uint*)this & 32767)) {
            lVar2 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)param_1);
            uVar1 = CONCAT31((int3)((uint) * (int*)(lVar2 + 28) >> 8), *(int*)(lVar2 + 28) == *(int*)(this + 4));
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x10015a6e0, 32 bytes, inline, placed by class name
    // Client::ClearDeepLinkingIndex(int)
    void Client::ClearDeepLinkingIndex(int param_1) {
        undefined4* puVar1;

        puVar1 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
            (vector<int, eastl::allocator>*)&field_55240, (long)param_1);
        *puVar1 = 4294967295;
    }

    // 0x10016b420, 16 bytes, inline, placed by class name
    // Client::GetWorldmap()
    Worldmap* Client::GetWorldmap() {
        return m_pWorldmap;
    }

    // 0x10017a560, 16 bytes, inline, placed by class name
    // Client::Instance()
    undefined8 Client::Instance() {
        return m_pMyThis;
    }

    // 0x10017d410, 32 bytes, inline, placed by class name
    // Client::TriggerOnChatTransmitHook()
    void Client::TriggerOnChatTransmitHook() {
        field_2506340 = field_2505808;
    }

    // 0x10017f5e0, 16 bytes, inline, placed by class name
    // Client::GetInterfaceInteraction()
    undefined1* Client::GetInterfaceInteraction() {
        return &field_2508664;
    }

    // 0x100183c10, 16 bytes, inline, placed by class name
    // Client::GetContentMode()
    int Client::GetContentMode() {
        return m_contentMode;
    }

    // 0x1001841d0, 16 bytes, inline, placed by class name
    // Client::GetAccountID() const
    undefined8 Client::GetAccountID() {
        return m_accountID;
    }

    // 0x100189160, 32 bytes, inline, placed by class name
    // Client::GetConsole()
    void Client::GetConsole() {
        std::unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>::operator*(
            (unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>*)&field_7306800);
    }

    // 0x1001953f0, 16 bytes, inline, placed by class name
    // Client::GetEntityOverlays()
    undefined1* Client::GetEntityOverlays() {
        return m_entityOverlays;
    }

    // 0x1001954e0, 16 bytes, inline, placed by class name
    // Client::GetEndpointURLProvider()
    undefined1* Client::GetEndpointURLProvider() {
        return &field_1104184;
    }

    // 0x1001b4af0, 16 bytes, inline, placed by class name
    // Client::GetHookQueue()
    undefined1* Client::GetHookQueue() {
        return &field_2506384;
    }

} // namespace jag::oldscape

namespace jag::game {
    class ClientCompositeZone {
    public:
        bool IsValid() const;
        operator==(ClientCompositeZone const&) const;
        ClientCompositeZone();

        // data members, from how the methods use this: 24 bytes
        undefined4 field_0;  // offset 0
        int field_4;         // offset 4
        int field_8;         // offset 8
        undefined1 field_12; // offset 12
        char _unknown_13[3];
        undefined4 field_16; // offset 16
        char _unknown_20[4];
    };

    // 0x1004b83e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ClientCompositeZone::ClientCompositeZone(): jumps straight to the base-object constructor

    // 0x1004b84d0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // ClientCompositeZone::ClientCompositeZone()
    void ClientCompositeZone::ClientCompositeZone() {
        field_0 = 4294967295;
        field_16 = 0;
        field_4 = 0;
        field_8 = 0;
        field_12 = 0;
    }

} // namespace jag::game

namespace jag {
    class ClientDebugCamController {
    public:
        // virtual methods in vtable order
        virtual void UpdateFromInputState();
        virtual ~ClientDebugCamController();
        ClientDebugCamController();

        // data members, from how the methods use this: 70 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        float field_32; // offset 32
        float field_36; // offset 36
        char field_40;  // offset 40
        bool field_41;  // offset 41
        char _unknown_42[6];
        undefined8 field_48; // offset 48
        float field_56;      // offset 56
        float field_60;      // offset 60
        float field_64;      // offset 64
        undefined1 field_68; // offset 68
        byte field_69;       // offset 69
    };

} // namespace jag
