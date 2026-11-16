// projects/osclient/client.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class Client {
    public:
        class ScheduledFunction;
        class StockMarketOfferComparator;
        // virtual methods in vtable order
        virtual shared_ptr* GetApplicationContext();
        virtual void Init();
        virtual void MainInit(jag::input::Input* input, jag::input::InputHandler* inputHandler);
        virtual void MainLoop();
        virtual void MainRedraw(bool arg1, float arg2);
        virtual void MainQuit();
        virtual void CheckResize();
        virtual void NotifyResize(bool arg1);
        virtual void QuickResize();
        virtual uint8_t* GetDisplayName() const;
        bool IsMapBuildRegionMode();
        void GetMapBuildRegionZoneSource(int arg1, int arg2, int arg3);
        uint8_t* GetNpcList();
        bool GetUsingRSeven();
        void SetInterfaceInteraction(const shared_ptr<rs2lib::IfType>& ifType);
        void AddDeepLinkingID(int arg1);
        HighlightManager* GetHighlightManager();
        auto BuildCoordFromWorldCoord(const rs2lib::CoordGrid& coordGrid);
        uint8_t* GetObjectsOnTile(const rs2lib::CoordGrid& coordGrid);
        uint64_t GetClientNpc(int arg1);
        void SetMinimapZoom(int arg1);
        void RedrawMinimap();
        auto FindClientObj(const rs2lib::CoordGrid& coordGrid, int arg2, int arg3);
        auto WorldCoordFromBuildCoord(const rs2lib::CoordGrid& coordGrid);
        void SetUsingOneButtonMouse(bool arg1);
        LootTrackerSaveHandler* GetLootTrackerSaveHandler();
        void GetFinalAmbientVolume();
        Js5* GetJagFx();
        Client(OSClient& osClient);
        unsigned long ReadJavConfigParameters();
        void FinishInitialization();
        unsigned int InitJs5RemoteLoader();
        auto GetBaseUrl(const eastl::string& str, bool arg2);
        unsigned int GetPlatformPublishingType();
        bool HasAcceptedTermsAndPrivacy();
        void OnScaledUIQualityChanged();
        void ClientGameInit();
        void ResetIdleTimeRemaining();
        int GetIdleTimeRemaining();
        void DispatchInput();
        void ExecuteScheduledFunctions();
        void ServiceNetClient();
        void PcmPlayerService();
        auto ConstructRentalJavConfigUrl(const char* str, unsigned short arg2) const;
        void SetMainState(MainState mainState);
        void MainLoad();
        void LoginPoll();
        void MapBuildLoop();
        void GameLoop();
        void DrawDebugUI();
        void CheckToQueueMutedAudio();
        void OnWindowModeChanged();
        void MessageBox(const eastl::string& str, bool arg2);
        void GameDraw();
        void DrawBuildInfo();
        void RebuildMap();
        void SaveAndClosePerAccountData();
        void ResetCache();
        void Destroy();
        void ReloadConfigs();
        void DiscardJS5Data();
        void ResetSprites();
        unsigned int GetNPCCount() const;
        void DeriveTOTPMode(bool arg1);
        void OpenJs5(jagex3::Js5ArchiveId js5ArchiveId, bool arg2, bool arg3, bool arg4, bool arg5);
        void AddPrecacheJS5(jagex3::Js5* js5, const eastl::string& str);
        void LoginError(int arg1);
        LoginManager* GetLoginManager();
        void SetWorldId(int arg1);
        void ProcessSideBarRequests();
        unsigned long ShouldExpandWindowForSideBars(const RenderState::WindowProperties& windowProperties,
                                                    const RenderState::WindowSetOptions& windowSetOptions);
        void AddChat(const eastl::string& str);
        void RequestOpenPopoutSideBar(sidebars::SideBarData sideBarData);
        void RequestClosePopoutSideBar(int arg1);
        void ClearSideBars();
        void ResetAndStoreLogFile();
        auto GetLogFileDirectory();
        void GlMovePlayers();
        void GlMoveEntity(ClientEntity& clientEntity);
        void OpPlayer(int arg1, const eastl::string& str);
        void AddChat(int arg1, const eastl::string& str1, const eastl::string& str2);
        void GdmAddOtherPlayersToWorld();
        void GdmAddPlayerToWorld(const shared_ptr<ClientPlayer>& clientPlayer, bool arg2);
        int GetAvH(int arg1, int arg2, int arg3);
        ~Client();
        void SetLowMem();
        bool GetLowMem();
        void SetHighMem();
        void DirtyArea(int arg1, int arg2, int arg3, int arg4);
        void BlitArea(int arg1, int arg2, int arg3, int arg4);
        void AddChat(int arg1, const eastl::string& str1, const eastl::string& str2, const eastl::string& str3);
        void AddChat(int arg1, const eastl::string& str);
        void SavePermClientVars();
        void ResetPlayerFriendIndicators();
        void ResetPlayerIgnoreIndicators();
        void ResetPlayerFriendChatIndicators();
        void ResetPlayerClanIndicators();
        void NotifyFriendSystemUpdate();
        void NotifyFriendChatUpdate();
        void NotifyClanSettingsUpdate();
        void FriendsChatKickUser(const eastl::string& str);
        void FriendsChatJoinChat(const eastl::string& str);
        void FriendsChatLeaveChat();
        void ClanChannelKickUser(int arg1, int arg2);
        void AffinedClanSettingsAddBannedFromChannel(int arg1, int arg2);
        void AffinedClanSettingsSetMutedFromChannel(int arg1, int arg2, bool arg3);
        void FindObjects(eastl::string str, bool arg2);
        void StoreNewPackedUID(core::SuperPacket& superPacket, int arg2);
        void CachePackedUID(const Array<unsigned char>& arg1, int arg2);
        void SerialiseCurrentPackedUIDToPacket(core::SuperPacket& superPacket);
        Client* RemoveChatCrownTags(const eastl::string& str);
        PixfontGeneric* GetFontFromGroupId(int arg1);
        uint64_t Main(const Array<eastl::string>& strs);
        void Usage();
        void SetupInterfaceRenderer();
        void AnimateInterface(int arg1);
        void DrawInterface(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
        auto CreateExactTileDestination(int arg1, int arg2);
        void UpdateHeatmap();
        void GetBuildInfoPrettyPrint();
        void GetServerBuildInfoPrettyPrint<char, 1024>(eastl::fixed_string<char, 1024>& str);
        void GetClientBuildInfoPrettyPrint<char, 512>(eastl::fixed_string<char, 512>& str);
        void GetDeviceBuildInfoPrettyPrint<char, 512>(eastl::fixed_string<char, 512>& str);
        void ForcePlayerCameraPosition(int arg1, int arg2);
        int GetTweenedPlayerCameraAngleX(float arg1);
        unsigned int GetTweenedPlayerCameraAngleY(float arg1);
        void OnWindowTopmostChanged();
        void SendWindowMode();
        void InterfaceCalculateSizeAndPosAll(bool arg1, bool arg2);
        int GetAdjustedCameraZoom(int arg1, int arg2);
        void CamFollow(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        void TelePlayer(int arg1, int arg2, int arg3, bool arg4);
        void RebuildPacket(bool arg1, core::SuperPacket& superPacket);
        void StartRebuild(int arg1, int arg2, bool arg3);
        CoordGrid WorldCoordToSourceCoord(const rs2lib::CoordGrid& coordGrid);
        void RunHookImmediate(int arg1, rs2lib::IfType::HookTypes hookTypes);
        void PreventTimeout(bool arg1);
        void OnLoadLocations(const eastl::vector<LocInfo>& locInfos);
        void ShowObject(int arg1, int arg2);
        void RunUpdateObjStackTrigger(int arg1, int arg2, int arg3);
        void LocChangePostBuildCorrect();
        void SetPlayerDestination(int arg1, int arg2);
        CoordGrid WorldCoordFromBuildCoord(int arg1, int arg2, int arg3);
        void RecalcCameraFrustumTileVisibility(int arg1, int arg2);
        int GetFollowCameraDistance(int arg1);
        void ExitFreecamMode();
        void ForceRecentreFreecam();
        void CheckRecentreFreecam();
        void TriggerSeqSound(const shared_ptr<configdecoder::SeqType>& seqType, int arg2, int arg3, int arg4);
        void TriggerSeqSound(int arg1, int arg2, int arg3);
        void TriggerSeqSoundKeyFramed(const shared_ptr<configdecoder::SeqType>& seqType, int arg2, int arg3, int arg4);
        void PlaySynth(int arg1, int arg2, int arg3);
        void GetFinalWaveVolume();
        void PlaySong(int arg1);
        void GetFinalMidiVolume();
        StockPlayerOffer* GetMidi();
        void PlaySongs(const eastl::vector<int>& arg1, int arg2, int arg3, int arg4, int arg5);
        void PlayJingle(int arg1, int arg2);
        void OnBrightnessChanged();
        void OnMidiVolumeChanged();
        void GlDoSoundsQueue();
        void CopyToClipboard();
        void Vibrate(hal::Haptics::Preset preset);
        void LostCon();
        unsigned long TcpIn(ServerConnection& serverConnection);
        uint64_t GlUpdateMouseOverTile();
        void ArrayCopy<CoordType<UICoordSpecializer>, 500ul>(
            const std::array<CoordType<UICoordSpecializer>, 500ul>& coordTypes1, unsigned long arg2,
            std::array<CoordType<UICoordSpecializer>, 500ul>& coordTypes2, unsigned long arg4, unsigned long arg5);
        void ArrayCopy<unsigned long long, 500ul>(const std::array<unsigned long long, 500ul>& arg1, unsigned long arg2,
                                                  std::array<unsigned long long, 500ul>& arg3, unsigned long arg4,
                                                  unsigned long arg5);
        void GlCheckFriendChatState();
        void GlCheckClanState();
        void GlCheckMinimap();
        void LocChangeDoQueue();
        void GlMoveNpcs();
        void GlTimeoutChat();
        bool IsPlayerAdmin();
        unsigned long NeedBuildMinimenu();
        void LoopInterface(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        void PostLoopInterface();
        void GetInterfaceLayer(shared_ptr<rs2lib::IfType> ifType);
        void ExecuteHardcodedMouseEvent(const InterfaceMouseEvent& interfaceMouseEvent);
        void GlWorldMap();
        void LoopIf3Drag();
        void GlIf3DragContents();
        void ComponentUpdated(const shared_ptr<rs2lib::IfType>& ifType);
        void GlFollowCamera();
        void SmoothResetCamera();
        void GlCinemaCamera();
        void ServicePendingKeyFrameSets();
        void GlEntityOverlays(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        void LoopLayer(Array<shared_ptr<rs2lib::IfType>>& ifTypes, int arg2, int arg3, int arg4, int arg5, int arg6,
                       int arg7, int arg8);
        void ToggleUI();
        void ClientDrop();
        void SetClanTransit();
        void ShowCoord();
        void HardError();
        void ToggleRenderSelf();
        void ToggleMouseOverText();
        void ToggleAntiDrag();
        void SteamShop();
        long long AddScheduledFunction(std::function<bool()>& callback, unsigned long long arg2, long long arg3);
        void ReloadHighlights();
        void SendTestNotification();
        void PrintDrawDistance();
        void ToggleSkybox();
        void SetSkyboxColour(int arg1, int arg2, int arg3);
        void DefaultSkybox();
        void ToggleFog();
        void SetFogIntensity(int arg1);
        void SetFogIntensity(float arg1);
        void SetFogDistance(int arg1);
        void SetFogDistance(float arg1);
        void DefaultFogSettings();
        void GetLootSourceCount();
        void ResetLootTracker();
        void SetUsingRSeven(bool arg1, bool arg2);
        void RequestMapRebuild();
        Fog* GetFog();
        void DoCheat(const eastl::string& str);
        void SendCheatToServer(const eastl::string& str);
        uint32_t RemoveScheduledFunction(long long arg1);
        void CinemaCameraMovePosition(int arg1, int arg2, int arg3);
        void CinemaCameraMoveAngle(int arg1, int arg2);
        void GlExactMove1(ClientEntity& clientEntity);
        void GlExactMove2(ClientEntity& clientEntity);
        void GlRouteMove(ClientEntity& clientEntity);
        void GlEntityFace(ClientEntity& clientEntity);
        void GlEntityAnim(ClientEntity& clientEntity);
        void TriggerPlayerAnim(ClientPlayer& clientPlayer, int arg2, int arg3);
        void GameDrawMain(int arg1, int arg2, int arg3, int arg4, int arg5);
        void GdmCheckRemoveMapFlag();
        void GdmAddSelfPlayerToWorld();
        void GdmAddPriorityPlayerToWorld();
        void GdmAddNPCs(bool arg1);
        void GdmAddProjectiles();
        void GdmAddMapAnim();
        void GdmCalcWindowSize(int arg1, int arg2, int arg3, int arg4, bool arg5);
        int GdmRoofCheck();
        int GdmRoofCheck2();
        void GdmDrawSkybox(int arg1, long long arg2);
        void GdmDrawFog(int arg1, long long arg2);
        void GdmEntityOverlays(int arg1, int arg2, int arg3, int arg4, int arg5);
        void GdmCoordArrow(int arg1, int arg2);
        void GdmOtherOverlays();
        void SetDrawDistance(int arg1);
        void OnDrawDistanceChange();
        void GdmGetSpecialArea();
        void PauseContinue(int arg1, int arg2);
        void InitHostPlatformStats();
        Steam* GetSteamSDK();
        void SaveWindowPosition(WindowSavedPosition&& windowSavedPosition);
        void AcceptTermsAndPrivacy();
        Js5* GetClientScripts();
        Js5* GetSprites();
        void SetLoginProgress(int arg1);
        eastl::string* LoginProgressToString(int arg1);
        eastl::string* MainStateToString(int arg1);
        int GetWorldId() const;
        uint32_t WriteToPublicStorage(const Filename& filename1, Filename& filename2, const char* str, Error& error);
        void PreloadKeyFrameSet(int arg1);
        uint8_t Frozen() const;
        void SetFrozen(bool arg1);
        void DrawLayer(const Array<shared_ptr<rs2lib::IfType>>& ifTypes, int arg2, int arg3, int arg4, int arg5,
                       int arg6, int arg7, int arg8, int arg9);
        Client* GetObjSprite(int arg1, int arg2, int arg3, int arg4, int arg5);
        bool Hide(const shared_ptr<rs2lib::IfType>& ifType);
        void ClientComponent(const shared_ptr<rs2lib::IfType>& ifType);
        void DrawDebugString(int arg1, int arg2, const char* str, ...);
        void DrawScrollbar(int arg1, int arg2, int arg3, int arg4, int arg5);
        unsigned long GetIfActive(const shared_ptr<rs2lib::IfType>& ifType);
        Client* NiceNumber(int arg1);
        Client* SubstituteVars(const eastl::string& str, const shared_ptr<rs2lib::IfType>& ifType);
        void DrawOverlay(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
        void DrawLineWithStrokeWidth(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        void InterfaceCalculateSizeAndPosInterface(int arg1, int arg2, int arg3, bool arg4, bool arg5);
        void InterfaceCalculateSizeAndPosComponent(const shared_ptr<rs2lib::IfType>& ifType);
        void InterfaceCalculateSize(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3, bool arg4, bool arg5);
        void InterfaceCalculatePosition(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3);
        void InterfaceCalculateSizeAndPosSubcomponents(Array<shared_ptr<rs2lib::IfType>>& ifTypes,
                                                       const shared_ptr<rs2lib::IfType>& ifType, bool arg3);
        void InterfaceCalculateSizeAndPosArray(Array<shared_ptr<rs2lib::IfType>>& ifTypes, int arg2, int arg3, int arg4,
                                               bool arg5, bool arg6);
        void InterfacePositionOverlay(const shared_ptr<rs2lib::IfType>& ifType1,
                                      const shared_ptr<rs2lib::IfType>& ifType2, bool arg3);
        void DoScrollbar(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3, int arg4, int arg5, int arg6,
                         int arg7);
        auto Inf(int arg1);
        int GetIfVar(const shared_ptr<rs2lib::IfType>& ifType, int arg2);
        unsigned long KeyPressed(int arg1);
        void RunHookLayer(Array<shared_ptr<rs2lib::IfType>>& ifTypes, rs2lib::IfType::HookTypes hookTypes);
        uint8_t UsingOneButtonMouse();
        void TryStartDragContents(const shared_ptr<rs2lib::IfType>& ifType);
        void SetIf3ComponentScrollPos(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3);
        void DragTryPickup(const shared_ptr<rs2lib::IfType>& ifType, CoordType<UICoordSpecializer> coordType1,
                           CoordType<UICoordSpecializer> coordType2);
        shared_ptr<configdecoder::ObjType>* GetDragLayer(const shared_ptr<rs2lib::IfType>& ifType);
        void StashEntry(int arg1);
        void CancelDrag();
        void LegacyUpdated();
        shared_ptr<configdecoder::ObjType>* ServerDraggable(const shared_ptr<rs2lib::IfType>& ifType);
        void DraggingInterface();
        void IfAnimReset(int arg1);
        void AnimateLayer(Array<shared_ptr<rs2lib::IfType>>& ifTypes, int arg2);
        void DrawDebugString(const eastl::string& str, int arg2, int arg3);
        void DrawDebugString(const eastl::string& str, int arg2, int arg3, int arg4);
        void CreateObjOverlay(shared_ptr<rs2lib::IfType> ifType);
        uint32_t GetActive(const shared_ptr<rs2lib::IfType>& ifType);
        void ClearHookQueueMouseEvents(bool arg1);
        void ClearHardcodedMouseEvents();
        void ResetDragScrollLayer();
        void IfButtonX(int arg1, const shared_ptr<rs2lib::IfType>& ifType, const eastl::string& str, int arg4);
        auto TargetVerb(const shared_ptr<rs2lib::IfType>& ifType);
        void GetParentInterface(shared_ptr<rs2lib::IfType> ifType);
        uint8_t RenderAllPlayerNames();
        uint8_t RenderFriendNames();
        uint8_t RenderFriendChatNames();
        uint8_t RenderSelfName();
        unsigned long ShouldRenderPlayerName(ClientPlayer* clientPlayer);
        void DoStashed(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2);
        unsigned long IsMiniMenuOpenRequired();
        void RequestGroundCoordsForDeferredMove(CoordType<UICoordSpecializer> coordType1,
                                                CoordType<UICoordSpecializer> coordType2);
        bool IsLocOnPlayersLevel(int arg1, int arg2, long long arg3);
        void IsMiniMenuOpen();
        void ExecuteOnClickObjTrigger(const minimenu::MinimenuSubject& minimenuSubject);
        void ExecuteOnClickLocTrigger(int arg1, long long arg2);
        void ExecuteOnClickNPCTrigger(int arg1);
        void ExecuteOnClickPlayerTrigger(int arg1);
        void SendExamineObj(int arg1);
        void SendExamineObjV2(rs2lib::CoordGrid& coordGrid, int arg2);
        void DoAction(int arg1, int arg2, int arg3, int arg4, const eastl::string& str,
                      const minimenu::MinimenuSubject& minimenuSubject, CoordType<UICoordSpecializer> coordType1,
                      CoordType<UICoordSpecializer> coordType2, const shared_ptr<rs2lib::IfType>& ifType);
        unsigned long ClientButton(int arg1);
        void CloseModal();
        void ClientVar(int arg1);
        void SetDeferredGroundOp(int arg1, int arg2, int arg3, int arg4);
        void CloseSubinterface(int arg1, int arg2, bool arg3);
        int* OpenSubinterface(int arg1, int arg2, int arg3);
        void PurgeServerActive(int arg1);
        auto GetMinimapFlagCoord();
        void GdmEntityOverlayPlayer(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        OverlayPos GetAllOverlayPositions(ClientEntity& clientEntity);
        void GdmEntityOverlayScripted(const eastl::vector<unsigned long>& arg1, OverlayPos& overlayPos,
                                      rs2lib::IfType::OverlayTypes overlayTypes, int arg4, int arg5, int arg6, int arg7,
                                      int arg8);
        void GdmEntityOverlayHardcodedOverhead(ClientEntity& clientEntity, OverlayPos& overlayPos, bool arg3, int arg4,
                                               int arg5, int arg6, int arg7, int arg8);
        void GdmEntityOverlayHitsplats(ClientEntity& clientEntity, OverlayPos& overlayPos, int arg3, int arg4, int arg5,
                                       int arg6);
        void GdmEntityOverlayNPC(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        void GdmEntityOverlayTile(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
        OverlayPos GetAllOverlayPositionsTile(int arg1, int arg2, int arg3);
        void GdmEntityOverlayScripted(const eastl::fixed_map<int, unsigned long, 1ul>& fixed_map,
                                      OverlayPos& overlayPos, int arg3, int arg4, int arg5, int arg6, int arg7);
        void GdmEntityOverlayLoc(int arg1, int arg2, int arg3, LocLayer locLayer, int arg5, int arg6, int arg7,
                                 int arg8, int arg9);
        OverlayPos GetAllOverlayPositionsLoc(int arg1, int arg2, int arg3, int arg4);
        void GetOverlayPos(int arg1, int arg2, int arg3, int arg4);
        void GetOverlayPos(ClientEntity* clientEntity, int arg2);
        void GdmEntityOverlayScriptedInner(const Array<shared_ptr<rs2lib::IfType>>& ifTypes,
                                           const shared_ptr<rs2lib::IfType>& ifType, unsigned long arg3,
                                           OverlayPos& overlayPos, int arg5, int arg6, int arg7, int arg8, int arg9);
        int FineCentreCoordFromGridCoord(int arg1);
        int GetServerMajorVersion();
        uint8_t* GetDeepLinkingIDs() const;
        void LoginDone();
        void ReconnectDone();
        void InitAndLoadPerAccountData();
        void Logout();
        void LogoutWithReason(shared::PlayerFacingLogoutReason::ID id);
        unsigned long HandleUpdateFriendChatChannelFullServerProt(core::SuperPacket& superPacket, unsigned int arg2);
        uint8_t HandleUpdateFriendChatChannelSingleUserServerProt(core::SuperPacket& superPacket);
        void UnpackHiscoresPacket(core::SuperPacket& superPacket);
        void OnMidiEnd(int arg1);
        void RequestClanChannelFull(int arg1);
        void RequestClanSettingsFull(int arg1);
        void GetNPCPos(bool arg1, core::SuperPacket& superPacket);
        void EnableClanVarValues();
        void SetCameraMode(shared::FollowCameraMode followCameraMode);
        int WrapYawAngle(int arg1) const;
        void ZonePacket(shared::ZoneProt::ID id, core::SuperPacket& superPacket);
        void LocChangeCreate(int arg1, int arg2, int arg3, LocLayer locLayer, int arg5, int arg6, int arg7,
                             unsigned char arg8, int arg9, int arg10);
        uint32_t LocChangeAnim(int arg1, int arg2, int arg3, LocLayer locLayer, int arg5);
        void GetNPCPosOldVis(core::SuperPacket& superPacket);
        void GetNPCPosNewVis(bool arg1, core::SuperPacket& superPacket);
        void GetNPCPosExtended(core::SuperPacket& superPacket);
        void DestroyNpc(int arg1);
        void ResetNpcAnim(ClientNpc& clientNpc);
        void OnLoadLocation(const LocInfo& locInfo);
        void LocChangeSetOld(LocChange& locChange);
        Client* FindLocChange(int arg1, int arg2, int arg3, int arg4);
        void LocChangeUnchecked(int arg1, LocLayer locLayer, int arg3, int arg4, int arg5, int arg6, int arg7,
                                int arg8);
        void CreatePlayer(int arg1);
        void DestroyPlayer(int arg1);
        auto GetClientNpcWeakPtr(int arg1);
        unsigned int GetLastNpcNum();
        uint32_t GetLastNpcId(int arg1);
        unsigned int GetPriorityPlayerId();
        auto FindFirstClientObj(rs2lib::CoordGrid& coordGrid, int arg2);
        auto FindClientObjInStack(rs2lib::CoordGrid& coordGrid, int arg2);
        void InjectRoutePoints(ClientPlayer* clientPlayer, int arg2, int arg3, unsigned char arg4);
        void HighlightRoute(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        void SetPlayerLevel(int arg1);
        uint32_t GetDefaultUIZoom();
        CoordGrid BuildCoordFromWorldCoord(int arg1, int arg2, int arg3);
        void ClearDeepLinkingIndex(int arg1);
        Worldmap* GetWorldmap();
        Client* Instance();
        void TriggerOnChatTransmitHook();
        uint8_t* GetInterfaceInteraction();
        int GetContentMode();
        uint64_t GetAccountID() const;
        void GetConsole();
        EntityOverlays* GetEntityOverlays();
        uint8_t* GetEndpointURLProvider();
        list<HookReq>* GetHookQueue();
        static int32_t FACING_MAP[8];               // = { 768, 1024, 1280, 512, 1536, 256, 0, 1792 }
        static const char* LOG_FILE_DIR;            // = "logs"
        static eastl::string BETA_CACHE_DIR_SUFFIX; // = "beta"
        static int64_t m_pMyThis;
        static int64_t VIEWPORT_FOV_EXPONENT_BASE_LOG;          // = 4604418534313441775
        static eastl::string m_gitBranchName;                   // = "usurper-216"
        static eastl::string m_gitCommitHash;                   // = "b5f9a203463a87d88338bff708d461408f61f275"
        static int32_t DEFAULT_MINIMUM_INGAME_ASPECT_RATIO[42]; // initialised in its definition

    private:
        RollingAverageCounter field_8;
        RollingAverageCounter field_64;
        int field_120;
        int field_124;
        uint8_t field_128;
        uint8_t _unknown_129[7];
        int field_136;
        uint8_t _unknown_140[4];
        NXTPixToolkit* field_144;
        GraphicsApp* field_152;
        InputEventQueue field_160;
        uint8_t _unknown_6940[4];
        ClientKeyboardListener field_6944;
        uint8_t _unknown_7269[11];
        ClientMouseListener field_7280;
        uint8_t _unknown_7960[136];
        int field_8096;
        int field_8100;
        int field_8104;
        int field_8108;
        int field_8112;
        uint8_t _unknown_8116[16];
        uint8_t field_8132;
        uint8_t _unknown_8133[3];
        PublishingPlatformType field_8136;
        uint8_t _unknown_8140[4];
        uint8_t** field_8144;
        uint8_t _unknown_8152[8];
        char field_8160;
        uint8_t _unknown_8161[263];
        bool field_8424;
        bool field_8425;
        uint8_t _unknown_8426[6];
        Language* field_8432;
        ModeGame* field_8440;
        unsigned int field_8448;
        uint8_t field_8452;
        uint8_t _unknown_8453[35];
        int field_8488;
        uint32_t field_8492;
        uint8_t _unknown_8496[8];
        int field_8504;
        uint8_t _unknown_8508[84];
        unsigned int field_8592;
        unsigned int field_8596;
        uint8_t _unknown_8600[4];
        uint8_t field_8604;
        uint8_t field_8605;
        uint8_t field_8606;
        uint8_t _unknown_8607[1];
        unsigned long field_8608;
        uint8_t _unknown_8616[1872];
        uint32_t field_10488;
        unsigned int field_10492;
        uint8_t _unknown_10496[16];
        long field_10512;
        int field_10520;
        uint8_t _unknown_10524[8548];
        InputFieldKeyboardHandler field_19072;
        char field_19104;
        uint8_t _unknown_19105[3];
        int field_19108;
        int field_19112;
        int field_19116;
        uint8_t _unknown_19120[72];
        uint8_t field_19192;
        uint8_t _unknown_19193[32791];
        int field_51984;
        int field_51988;
        uint32_t field_51992;
        uint8_t _unknown_51996[4];
        uint64_t m_accountID;
        unsigned long long field_52008;
        uint8_t _unknown_52016[17];
        uint8_t field_52033;
        uint8_t _unknown_52034[2];
        int field_52036;
        uint8_t _unknown_52040[304];
        Minimenu* field_52344;
        int field_52352;
        unsigned int field_52356;
        unsigned int field_52360;
        int field_52364;
        uint8_t _unknown_52368[32];
        FollowCameraMode m_cameraMode;
        int field_52404;
        uint64_t field_52408;
        uint8_t field_52416;
        uint8_t _unknown_52417[23];
        uint32_t field_52440;
        uint8_t _unknown_52444[4];
        long field_52448;
        uint8_t field_52456;
        uint8_t _unknown_52457[3];
        uint32_t field_52460;
        uint8_t field_52464;
        uint8_t _unknown_52465[3];
        unsigned int field_52468;
        uint8_t _unknown_52472[72];
        uint8_t field_52544;
        uint8_t _unknown_52545[167];
        short field_52712;
        short field_52714;
        short field_52716;
        short field_52718;
        short field_52720;
        uint8_t _unknown_52722[2];
        int field_52724;
        short field_52728;
        short field_52730;
        short field_52732;
        uint8_t _unknown_52734[2];
        unsigned int field_52736;
        unsigned int field_52740;
        unsigned int field_52744;
        unsigned int field_52748;
        int field_52752;
        int field_52756;
        int field_52760;
        uint8_t _unknown_52764[92];
        uint64_t field_52856;
        uint8_t _unknown_52864[48];
        uint64_t field_52912;
        uint8_t _unknown_52920[8];
        int field_52928;
        uint8_t _unknown_52932[4];
        RollingAverageCounter field_52936;
        int field_52992;
        uint8_t _unknown_52996[1];
        uint8_t field_52997;
        uint8_t field_52998;
        char field_52999;
        uint8_t field_53000;
        uint8_t _unknown_53001[3];
        int field_53004;
        int field_53008;
        int field_53012;
        int field_53016;
        int field_53020;
        int field_53024;
        int field_53028;
        int field_53032;
        int field_53036;
        int field_53040;
        int field_53044;
        int field_53048;
        int field_53052;
        int field_53056;
        int field_53060;
        uint8_t _unknown_53064[24];
        int field_53088;
        int field_53092;
        int field_53096;
        int field_53100;
        unsigned int field_53104;
        int field_53108;
        unsigned int field_53112;
        int field_53116;
        int field_53120;
        int field_53124;
        int field_53128;
        unsigned int field_53132;
        unsigned int field_53136;
        int field_53140;
        uint8_t _unknown_53144[4];
        uint64_t field_53148;
        uint8_t _unknown_53156[4];
        $_15 field_53160;
        uint8_t _unknown_53172[44];
        int field_53216;
        unsigned int field_53220;
        unsigned int field_53224;
        int field_53228;
        int field_53232;
        uint32_t field_53236;
        int field_53240;
        int field_53244;
        int field_53248;
        int field_53252;
        uint8_t field_53256;
        uint8_t field_53257;
        bool field_53258;
        uint8_t _unknown_53259[1];
        int field_53260;
        uint8_t _unknown_53264[1];
        char field_53265;
        uint8_t _unknown_53266[2];
        int field_53268;
        uint8_t _unknown_53272[4];
        uint32_t field_53276;
        uint64_t field_53280;
        uint64_t field_53288;
        uint64_t field_53296;
        uint64_t field_53304;
        uint32_t field_53312;
        uint8_t _unknown_53316[840];
        int field_54156;
        uint64_t field_54160;
        int field_54168;
        uint32_t field_54172;
        uint8_t _unknown_54176[40];
        char field_54216;
        uint8_t _unknown_54217[39];
        unsigned int field_54256;
        unsigned int field_54260;
        uint32_t field_54264;
        uint8_t _unknown_54268[76];
        long field_54344;
        uint8_t _unknown_54352[32];
        uint8_t field_54384;
        uint8_t _unknown_54385[7];
        StockPlayerOffer* field_54392;
        StockPlayerOffer* field_54400;
        StockPlayerOffer* field_54408;
        StockPlayerOffer* field_54416;
        StockPlayerOffer* m_pJagFx;
        StockPlayerOffer* field_54432;
        StockPlayerOffer* m_pMidi;
        StockPlayerOffer* field_54448;
        StockPlayerOffer* m_pSprites;
        StockPlayerOffer* field_54464;
        StockPlayerOffer* field_54472;
        StockPlayerOffer* field_54480;
        StockPlayerOffer* m_pClientScripts;
        StockPlayerOffer* field_54496;
        StockPlayerOffer* field_54504;
        StockPlayerOffer* field_54512;
        StockPlayerOffer* field_54520;
        StockPlayerOffer* field_54528;
        StockPlayerOffer* field_54536;
        StockPlayerOffer* field_54544;
        Js5* field_54552;
        uint8_t _unknown_54560[136];
        int field_54696;
        int m_serverMajorVersion;
        uint32_t field_54704;
        unsigned int field_54708;
        unsigned int field_54712;
        uint8_t field_54716;
        uint8_t _unknown_54717[11];
        ExactTileDestination field_54728;
        OSClient* field_54752;
        char field_54760;
        uint8_t field_54761;
        uint8_t _unknown_54762[6];
        char* field_54768;
        int m_contentMode;
        int m_worldId;
        bool m_lowMem;
        bool field_54785;
        bool m_usingRSeven;
        uint8_t _unknown_54787[1];
        uint32_t field_54788;
        uint8_t _unknown_54792[32];
        unsigned int field_54824;
        int field_54828;
        uint8_t field_54832;
        uint8_t _unknown_54833[7];
        uint64_t field_54840;
        long field_54848;
        uint8_t _unknown_54856[8];
        long field_54864;
        uint32_t field_54872;
        uint8_t field_54876;
        uint8_t _unknown_54877[3];
        uint32_t field_54880;
        uint8_t field_54884;
        uint8_t _unknown_54885[3];
        int field_54888;
        uint8_t _unknown_54892[8];
        int field_54900;
        int field_54904;
        int field_54908;
        int field_54912;
        int field_54916;
        uint8_t _unknown_54920[32];
        uint8_t field_54952;
        uint8_t _unknown_54953[3];
        uint32_t field_54956;
        uint8_t _unknown_54960[4];
        uint64_t field_54964;
        uint64_t field_54972;
        uint64_t field_54980;
        uint32_t field_54988;
        int field_54992;
        int field_54996;
        int field_55000;
        int field_55004;
        uint32_t field_55008;
        int field_55012;
        uint32_t field_55016;
        int field_55020;
        int field_55024;
        uint8_t _unknown_55028[4];
        long field_55032;
        int field_55040;
        uint8_t _unknown_55044[4];
        uint64_t field_55048;
        int field_55056;
        uint8_t _unknown_55060[132];
        uint64_t field_55192;
        uint64_t field_55200;
        uint64_t field_55208;
        uint8_t _unknown_55216[1048632];
        unsigned int m_nPCCount;
        uint8_t _unknown_1103852[28];
        int field_1103880;
        uint8_t _unknown_1103884[28];
        uint64_t field_1103912;
        uint8_t field_1103920;
        uint8_t _unknown_1103921[7];
        uint8_t field_1103928;
        uint8_t _unknown_1103929[31];
        uint8_t field_1103960;
        uint8_t _unknown_1103961[31];
        uint8_t field_1103992;
        uint8_t _unknown_1103993[31];
        uint8_t field_1104024;
        uint8_t _unknown_1104025[95];
        char field_1104120;
        uint8_t _unknown_1104121[7];
        uint64_t field_1104128;
        uint64_t field_1104136;
        uint64_t field_1104144;
        uint64_t field_1104152;
        uint64_t field_1104160;
        uint64_t field_1104168;
        uint64_t field_1104176;
        uint8_t _unknown_1104184[280];
        bool m_mapBuildRegionMode;
        uint8_t _unknown_1104465[10819];
        uint8_t field_1115284;
        uint8_t _unknown_1115285[407];
        int field_1115692;
        uint8_t _unknown_1115696[144];
        uint32_t field_1115840;
        uint32_t field_1115844;
        uint32_t field_1115848;
        uint32_t field_1115852;
        uint8_t field_1115856;
        uint8_t _unknown_1115857[3];
        unsigned int field_1115860;
        uint64_t field_1115864;
        int field_1115872;
        uint8_t _unknown_1115876[4604];
        int field_1120480;
        int field_1120484;
        uint8_t _unknown_1120488[16];
        shared_ptr field_1120504;
        int field_1120520;
        uint8_t _unknown_1120524[28];
        unsigned int m_priorityPlayerId;
        uint8_t _unknown_1120556[1384484];
        bool m_usingOneButtonMouse;
        uint8_t _unknown_2505041[3];
        uint64_t field_2505044;
        uint32_t field_2505052;
        uint8_t _unknown_2505056[32];
        uint64_t field_2505088;
        unsigned int field_2505096;
        unsigned int field_2505100;
        uint8_t _unknown_2505104[32];
        unsigned int field_2505136;
        unsigned int field_2505140;
        uint8_t _unknown_2505144[16];
        uint8_t field_2505160;
        uint8_t _unknown_2505161[3];
        unsigned int field_2505164;
        unsigned int field_2505168;
        uint8_t field_2505172;
        uint8_t _unknown_2505173[3];
        unsigned int field_2505176;
        unsigned int field_2505180;
        uint8_t field_2505184;
        uint8_t _unknown_2505185[3];
        int field_2505188;
        Array<shared_ptr<rs2lib::IfType>>* field_2505192;
        uint8_t _unknown_2505200[4];
        CoordMapSquare field_2505204;
        uint8_t _unknown_2505216[8];
        uint8_t field_2505224;
        uint8_t field_2505225;
        uint8_t _unknown_2505226[2];
        unsigned int field_2505228;
        unsigned int field_2505232;
        unsigned int field_2505236;
        unsigned int field_2505240;
        unsigned int field_2505244;
        unsigned int field_2505248;
        uint8_t _unknown_2505252[556];
        int field_2505808;
        uint8_t _unknown_2505812[128];
        uint32_t field_2505940;
        uint8_t _unknown_2505944[128];
        uint32_t field_2506072;
        uint8_t _unknown_2506076[128];
        uint32_t field_2506204;
        uint8_t _unknown_2506208[132];
        int field_2506340;
        int field_2506344;
        int field_2506348;
        int field_2506352;
        int field_2506356;
        uint64_t field_2506360;
        uint32_t field_2506368;
        uint8_t _unknown_2506372[140];
        $_16 field_2506512;
        uint8_t _unknown_2506516[52];
        unsigned int field_2506568;
        int field_2506572;
        uint8_t _unknown_2506576[1900];
        uint32_t field_2508476;
        uint8_t _unknown_2508480[176];
        float field_2508656;
        uint8_t field_2508660;
        uint8_t _unknown_2508661[19];
        uint8_t field_2508680;
        uint8_t _unknown_2508681[71];
        int field_2508752;
        uint8_t _unknown_2508756[124];
        uint32_t field_2508880;
        uint8_t field_2508884;
        uint8_t _unknown_2508885[3];
        uint64_t field_2508888;
        uint64_t field_2508896;
        uint32_t field_2508904;
        uint64_t field_2508908;
        uint64_t field_2508916;
        uint32_t field_2508924;
        uint64_t field_2508928;
        uint64_t field_2508936;
        uint32_t field_2508944;
        uint64_t field_2508948;
        uint64_t field_2508956;
        uint32_t field_2508964;
        uint8_t _unknown_2508968[16];
        int field_2508984;
        uint32_t field_2508988;
        HostPlatformStats field_2508992;
        uint8_t _unknown_2509280[24];
        Worldmap* m_pWorldmap;
        HighlightManager m_highlightManager;
        uint8_t field_6814736;
        uint8_t _unknown_6814737[207];
        RollingAverageCounter field_6814944;
        RollingAverageCounter field_6815000;
        EntityOverlays m_entityOverlays;
        uint8_t _unknown_6817168[346104];
        LootTrackerSaveHandler m_lootTrackerSaveHandler;
        uint8_t _unknown_7164584[64];
        uint8_t field_7164648;
        uint8_t _unknown_7164649[7];
        Skybox field_7164656;
        uint8_t _unknown_7164744[8];
        bool field_7164752;
        uint8_t field_7164753;
        uint8_t _unknown_7164754[126];
        uint16_t field_7164880;
        uint8_t field_7164882;
        uint8_t _unknown_7164883[129793];
        int field_7294676;
        int field_7294680;
        uint8_t _unknown_7294684[28];
        uint16_t field_7294712;
        uint8_t _unknown_7294714[2];
        unsigned int field_7294716;
        unsigned int field_7294720;
        float field_7294724;
        int field_7294728;
        int field_7294732;
        unsigned int field_7294736;
        int field_7294740;
        uint8_t field_7294744;
        uint8_t _unknown_7294745[3];
        int field_7294748;
        uint8_t field_7294752;
        uint8_t _unknown_7294753[3];
        int field_7294756;
        int field_7294760;
        int field_7294764;
        uint8_t field_7294768;
        uint8_t _unknown_7294769[12023];
        long long field_7306792;
        uint8_t _unknown_7306800[40];
        bool m_frozen;
        char field_7306841;
        uint8_t _unknown_7306842[6];
    };

    class Client::ScheduledFunction {
    public:
        ScheduledFunction();
        ~ScheduledFunction();
        ScheduledFunction(ScheduledFunction&& scheduledFunction);

        uint8_t _unknown_0[24];
    };

    class Client::StockMarketOfferComparator {
    public:
        bool operator()(const rs2lib::ActiveOffersReply::ActiveOffer& activeOffer1,
                        const rs2lib::ActiveOffersReply::ActiveOffer& activeOffer2) const;

        uint8_t _unknown_0[1];
    };

    class ClientGosubFrame {
    public:
        void SwapLocals(eastl::vector<int>&& arg1, eastl::vector<eastl::string>&& strs);
        ClientGosubFrame();
        ~ClientGosubFrame();

    private:
        uint8_t _unknown_0[16];
        uint32_t field_16;
        uint8_t _unknown_20[44];
    };

    // 0x10000ec50
    bool Client::IsMapBuildRegionMode() {
        return m_mapBuildRegionMode;
    }

    // 0x100013700
    void Client::GetMapBuildRegionZoneSource(int arg1, int arg2, int arg3) {
        array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>* this_00 = &field_1104468[(long)arg1];
        array<rs2lib::CoordZoneSource, 13ul>* this_01 = (array<rs2lib::CoordZoneSource, 13ul>*)(*this_00)[(long)arg2];
        (*this_01)[(long)arg3];
    }

    // 0x100013b50
    uint8_t* Client::GetNpcList() {
        return &field_55272;
    }

    // 0x1000640b0
    bool Client::GetUsingRSeven() {
        return m_usingRSeven;
    }

    // 0x10006cb40
    void Client::SetInterfaceInteraction(const shared_ptr<rs2lib::IfType>& ifType) {
        field_2508664 = ifType;
    }

    // 0x100092c80
    void Client::AddDeepLinkingID(int arg1) {
        field_55240.push_back(arg1);
    }

    // 0x1000b56a0
    HighlightManager* Client::GetHighlightManager() {
        return (HighlightManager*)m_highlightManager;
    }

    // 0x1000b6530
    auto Client::BuildCoordFromWorldCoord(const rs2lib::CoordGrid& coordGrid) {
        auto result;

        int arg2 = coordGrid.GetX();
        int arg3 = coordGrid.GetZ();
        coordGrid.GetPos();
        BuildCoordFromWorldCoord(&result, (int)this, arg2, arg3);
        return result;
    }

    // 0x1000b7aa0
    auto Client::WorldCoordFromBuildCoord(const rs2lib::CoordGrid& coordGrid) {
        auto result;

        int arg2 = coordGrid.GetX();
        int arg3 = coordGrid.GetZ();
        coordGrid.GetPos();
        WorldCoordFromBuildCoord(&result, (int)this, arg2, arg3);
        return result;
    }

    // 0x1000b84d0
    void Client::SetUsingOneButtonMouse(bool arg1) {
        m_usingOneButtonMouse = arg1;
    }

    // 0x1000ba700
    LootTrackerSaveHandler* Client::GetLootTrackerSaveHandler() {
        return (LootTrackerSaveHandler*)m_lootTrackerSaveHandler;
    }

    // 0x1000db9b0
    LoginManager* Client::GetLoginManager() {
        return (LoginManager*)field_2506376.get();
    }

    // 0x1000e3630
    void Client::GetServerBuildInfoPrettyPrint<char, 1024>(eastl::fixed_string<char, 1024>& str) {
        auto pcVar2 = constants::ContentModeInternalName(m_contentMode);
        unsigned int uVar1 = (unsigned int)str;
        uint64_t uVar3 = constants::EngineModeInternalName(field_54696);
        char* pcVar10 = "members";
        if (field_8424 == false) {
            pcVar10 = "free";
        }
        uint64_t uVar4 =
            ((Layout*)((ModeWhere*)(unsigned long)(unsigned int)field_54168)->GetByID(uVar1))->HeapBeginPtr();
        uint64_t uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar1 = GetWorldId();
        str.sprintf("content mode: %s<br>engine mode: %s<br>account type: %s<br>where: %s<br>version: %s<br>content "
                    "dir: %s<br>branch: %s<br>commit hash: %s<br>node: %d",
                    pcVar2, uVar3, pcVar10, uVar4, uVar5, uVar6, uVar7, uVar8, (unsigned long)uVar1);
    }

    // 0x1000e3720
    void Client::GetClientBuildInfoPrettyPrint<char, 512>(eastl::fixed_string<char, 512>& str) {
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        str.sprintf("version: %d.%d<br>branch: %s<br>commit hash: %s<br>build type: %s", 216, 1, uVar1, uVar2,
                    "RELEASE");
    }

    // 0x1000e3780
    void Client::GetDeviceBuildInfoPrettyPrint<char, 512>(eastl::fixed_string<char, 512>& str) {
        OperatingSystem local_28;
        unsigned int local_24;
        unsigned int local_20;
        unsigned int local_1c;

        ((HardwareInfo*)Instance())->GetOSVersionAndBuild(local_28, local_24, local_20, local_1c);
        auto local_48 = javapal::GameShell::GetOSName();
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        str.sprintf("name: %s<br>version: %d.%d build %d", uVar1, (unsigned long)local_24, (unsigned long)local_20,
                    (unsigned long)local_1c);
    }

    // 0x1000e6990
    CoordGrid Client::WorldCoordFromBuildCoord(int arg1, int arg2, int arg3) {
        uint64_t extraout_RDX;
        uint32_t in_register_00000034;
        int in_R8D;
        CoordGrid CVar1;

        new (this)
            rs2lib::CoordGrid(arg2, arg3 + *(int*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 53220),
                              in_R8D + *(int*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 53224));
        CVar1._8_8_ = extraout_RDX;
        CVar1._0_8_ = this;
        return CVar1;
    }

    // 0x1000e6b10
    int Client::GetFollowCameraDistance(int arg1) {
        return arg1 * 3 + 600;
    }

    // 0x1000f0f80
    void Client::ArrayCopy<CoordType<UICoordSpecializer>, 500ul>(
        const std::array<CoordType<UICoordSpecializer>, 500ul>& coordTypes1, unsigned long arg2,
        std::array<CoordType<UICoordSpecializer>, 500ul>& coordTypes2, unsigned long arg4, unsigned long arg5) {
        long lVar1 = coordTypes1.begin();
        CoordType<UICoordSpecializer>* coordType1 = (CoordType<UICoordSpecializer>*)(lVar1 + arg2 * 4);
        lVar1 = std::array<CoordType<UICoordSpecializer>, 500ul>::begin();
        std::copy<CoordType<UICoordSpecializer> const*, CoordType<UICoordSpecializer>*>(
            coordType1, coordType1 + arg5 * 4, (lVar1 + arg4 * 4));
    }

    // 0x1000f0fd0
    void Client::ArrayCopy<unsigned long long, 500ul>(const std::array<unsigned long long, 500ul>& arg1,
                                                      unsigned long arg2, std::array<unsigned long long, 500ul>& arg3,
                                                      unsigned long arg4, unsigned long arg5) {
        long lVar1 = arg1.begin();
        unsigned long long* arg1_00 = (unsigned long long*)(lVar1 + arg2 * 8);
        lVar1 = std::array<unsigned long long, 500ul>::begin();
        std::copy<unsigned long long const*, unsigned long long*>(arg1_00, arg1_00 + arg5, (lVar1 + arg4 * 8));
    }

    // 0x1000f13d0
    bool Client::IsPlayerAdmin() {
        return 1 < field_53260;
    }

    // 0x1000fd260
    int Client::GetWorldId() const {
        return m_worldId;
    }

    // 0x1001112c0
    int Client::FineCentreCoordFromGridCoord(int arg1) {
        return arg1 * 128 + 64;
    }

    // 0x1001117c0
    int Client::GetServerMajorVersion() {
        return m_serverMajorVersion;
    }

    // 0x1001117d0
    uint8_t* Client::GetDeepLinkingIDs() const {
        return &field_55240;
    }

    // 0x100114570
    void Client::SetCameraMode(shared::FollowCameraMode followCameraMode) {
        m_cameraMode = followCameraMode;
    }

    // 0x10011f500
    uint32_t Client::GetDefaultUIZoom() {
        return *(uint32_t*)(&reinterpret_cast<const uint64_t*>(&g_lineTypeColour)[19] +
                            (unsigned long)(field_8425 == false) * 4);
    }

    // 0x100124fa0
    CoordGrid Client::BuildCoordFromWorldCoord(int arg1, int arg2, int arg3) {
        uint64_t extraout_RDX;
        uint32_t in_register_00000034;
        int in_R8D;
        CoordGrid CVar1;

        new (this)
            rs2lib::CoordGrid(arg2, arg3 - *(int*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 53220),
                              in_R8D - *(int*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 53224));
        CVar1._8_8_ = extraout_RDX;
        CVar1._0_8_ = this;
        return CVar1;
    }

    // 0x10012dba0
    Client::ScheduledFunction::ScheduledFunction() {
        new (&field_16) std::function<bool()>();
    }

    // 0x10012dbf0
    Client::ScheduledFunction::~ScheduledFunction() {
        field_16.~function();
    }

    // 0x10014a350
    void Client::GlEntityOverlays(int, int, int, int, int,
                                  int)::$_8::operator()(Array<shared_ptr<rs2lib::IfType>>& ifTypes) const {
        shared_ptr<rs2lib::IfType>* this_02;
        long lVar2;

        Client* this_00 = *(Client**)this;
        shared_ptr* this_01 = &ifTypes[0];
        if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
            this_02 = &ifTypes[0];
            lVar2 = (*this_02).operator->();
            if (*(int*)(lVar2 + 28) != this_00->field_7294676) {
                LoopLayer(this_00, ifTypes, -1, *(int*)(this + 8), *(int*)(this + 12), *(int*)(this + 16),
                          *(int*)(this + 20), *(int*)(this + 24), *(int*)(this + 28));
            }
        }
    }

    // 0x10014b210
    Client::ScheduledFunction::ScheduledFunction(Client::ScheduledFunction&& scheduledFunction) {
        uint64_t uVar1 = *(uint64_t*)&scheduledFunction.field_8;
        field_0 = *(uint64_t*)scheduledFunction;
        field_8 = uVar1;
        new (&field_16) std::function<bool()>(scheduledFunction.field_16);
    }

    // 0x10014bbd0
    unsigned long Client::GdmAddProjectiles()::$_10::operator()(const shared_ptr<ClientProj>& clientProj) const {
        double dVar1;
        double dVar2;
        double dVar3;
        int iVar4;
        int iVar5;
        unsigned int uVar6;
        uint32_t uVar7;
        int arg2;
        int iVar10;
        long lVar11;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar12;
        ClientProj* pCVar13;
        long lVar14;
        shared_ptr<ClientPlayer>* psVar15;
        world* this_00;
        uint64_t unaff_RBX;
        unsigned long uVar17;
        Client* pCVar18;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;

        long lVar16 = field_0;
        if (clientProj.operator_cast_to_bool() != '\0') {
            lVar11 = clientProj.operator->();
            uVar17 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
            if (*(int*)(lVar11 + 24) != *(int*)(lVar16 + 51984))
                goto LAB_10014c014;
            iVar4 = *(int*)(lVar16 + 8488);
            lVar11 = clientProj.operator->();
            if (*(int*)(lVar11 + 60) < iVar4)
                goto LAB_10014c014;
            iVar4 = *(int*)(lVar16 + 8488);
            lVar11 = clientProj.operator->();
            if (*(int*)(lVar11 + 56) <= iVar4) {
                lVar11 = clientProj.operator->();
                if (*(char*)(lVar11 + 80) == '\0') {
                    lVar11 = clientProj.operator->();
                    if (*(int*)(lVar11 + 72) != 0) {
                        lVar11 = clientProj.operator->();
                        if (0 < *(int*)(lVar11 + 72)) {
                            lVar11 = clientProj.operator->();
                            pvVar12 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(
                                (lVar16 + 55272)))[(long)*(int*)(lVar11 + 72) - 1];
                            lVar11 = pvVar12->end();
                            if (((lVar11 != 0) && (uVar6 = *(unsigned int*)(lVar11 + 24), uVar6 < 13312)) &&
                                (*(unsigned int*)(lVar11 + 28) < 13312)) {
                                lVar14 = clientProj.operator->();
                                *(unsigned int*)(lVar14 + 28) = uVar6;
                                uVar7 = *(uint32_t*)(lVar11 + 28);
                                lVar11 = clientProj.operator->();
                                *(uint32_t*)(lVar11 + 32) = uVar7;
                                pCVar13 = (ClientProj*)clientProj.operator->();
                                lVar11 = clientProj.operator->();
                                iVar4 = *(int*)(lVar11 + 44);
                                lVar11 = clientProj.operator->();
                                iVar5 = *(int*)(lVar11 + 48);
                                lVar11 = clientProj.operator->();
                                pCVar13->SetTarget(iVar4, iVar5, *(int*)(lVar11 + 52), *(int*)(lVar16 + 8488));
                            }
                        }
                        lVar11 = clientProj.operator->();
                        if (*(int*)(lVar11 + 72) < 0) {
                            local_40 = shared_ptr();
                            lVar11 = clientProj.operator->();
                            if (*(unsigned int*)(lVar16 + 51988) == ~*(unsigned int*)(lVar11 + 72)) {
                                local_40 = (*((lVar16 + 52016)));
                            } else {
                                psVar15 = (shared_ptr<ClientPlayer>*)(*(
                                    (lVar16 + 19216)))[(long)(int)~*(unsigned int*)(lVar11 + 72)];
                                local_40 = *psVar15;
                            }
                            if (local_40 != nullptr) {
                                lVar11 = local_40.operator->();
                                if (-1 < *(int*)(lVar11 + 24)) {
                                    lVar11 = local_40.operator->();
                                    if (*(int*)(lVar11 + 24) < 13312) {
                                        lVar11 = local_40.operator->();
                                        if (-1 < *(int*)(lVar11 + 28)) {
                                            lVar11 = local_40.operator->();
                                            if (*(int*)(lVar11 + 28) < 13312) {
                                                lVar11 = local_40.operator->();
                                                uVar7 = *(uint32_t*)(lVar11 + 24);
                                                lVar11 = clientProj.operator->();
                                                *(uint32_t*)(lVar11 + 28) = uVar7;
                                                lVar11 = local_40.operator->();
                                                uVar7 = *(uint32_t*)(lVar11 + 28);
                                                lVar11 = clientProj.operator->();
                                                *(uint32_t*)(lVar11 + 32) = uVar7;
                                                pCVar13 = (ClientProj*)clientProj.operator->();
                                                lVar11 = clientProj.operator->();
                                                iVar4 = *(int*)(lVar11 + 44);
                                                lVar11 = clientProj.operator->();
                                                iVar5 = *(int*)(lVar11 + 48);
                                                lVar11 = clientProj.operator->();
                                                pCVar13->SetTarget(iVar4, iVar5, *(int*)(lVar11 + 52),
                                                                   *(int*)(lVar16 + 8488));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                lVar11 = clientProj.operator->();
                if (0 < *(int*)(lVar11 + 76)) {
                    lVar11 = clientProj.operator->();
                    pvVar12 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(
                        (lVar16 + 55272)))[(long)*(int*)(lVar11 + 76) - 1];
                    lVar11 = pvVar12->end();
                    if (((lVar11 != 0) && (*(unsigned int*)(lVar11 + 24) < 13312)) &&
                        (*(unsigned int*)(lVar11 + 28) < 13312)) {
                        pCVar13 = (ClientProj*)clientProj.operator->();
                        iVar4 = *(int*)(lVar11 + 24);
                        iVar5 = *(int*)(lVar11 + 28);
                        pCVar18 = (Client*)clientProj;
                        lVar11 = clientProj.operator->();
                        iVar10 = GetAvH(pCVar18, iVar4, iVar5, *(int*)(lVar11 + 24));
                        lVar11 = clientProj.operator->();
                        pCVar13->SetTarget(iVar4, iVar5, iVar10 - *(int*)(lVar11 + 40), *(int*)(lVar16 + 8488));
                    }
                }
                lVar11 = clientProj.operator->();
                if (*(int*)(lVar11 + 76) < 0) {
                    local_40 = shared_ptr();
                    lVar11 = clientProj.operator->();
                    if (*(unsigned int*)(lVar16 + 51988) == ~*(unsigned int*)(lVar11 + 76)) {
                        local_40 = (*((lVar16 + 52016)));
                    } else {
                        psVar15 =
                            (shared_ptr<ClientPlayer>*)(*((lVar16 + 19216)))[(long)(int)~*(unsigned int*)(lVar11 + 76)];
                        local_40 = *psVar15;
                    }
                    if (local_40 != nullptr) {
                        lVar11 = local_40.operator->();
                        if (-1 < *(int*)(lVar11 + 24)) {
                            lVar11 = local_40.operator->();
                            if (*(int*)(lVar11 + 24) < 13312) {
                                lVar11 = local_40.operator->();
                                if (-1 < *(int*)(lVar11 + 28)) {
                                    lVar11 = local_40.operator->();
                                    if (*(int*)(lVar11 + 28) < 13312) {
                                        pCVar13 = (ClientProj*)clientProj.operator->();
                                        lVar11 = local_40.operator->();
                                        iVar4 = *(int*)(lVar11 + 24);
                                        lVar11 = local_40.operator->();
                                        iVar5 = *(int*)(lVar11 + 28);
                                        lVar11 = local_40.operator->();
                                        iVar10 = *(int*)(lVar11 + 24);
                                        lVar11 = local_40.operator->();
                                        arg2 = *(int*)(lVar11 + 28);
                                        pCVar18 = (Client*)clientProj;
                                        lVar11 = clientProj.operator->();
                                        iVar10 = GetAvH(pCVar18, iVar10, arg2, *(int*)(lVar11 + 24));
                                        lVar11 = clientProj.operator->();
                                        pCVar13->SetTarget(iVar4, iVar5, iVar10 - *(int*)(lVar11 + 40),
                                                           *(int*)(lVar16 + 8488));
                                    }
                                }
                            }
                        }
                    }
                }
                pCVar13 = (ClientProj*)clientProj.operator->();
                pCVar13->Move(*(int*)(lVar16 + 1115692));
                this_00 = (world*)(*((lVar16 + 19184))).operator->();
                iVar4 = *(int*)(lVar16 + 51984);
                lVar16 = clientProj.operator->();
                dVar1 = *(double*)(lVar16 + 88);
                lVar16 = clientProj.operator->();
                dVar2 = *(double*)(lVar16 + 96);
                lVar16 = clientProj.operator->();
                dVar3 = *(double*)(lVar16 + 104);
                local_40 = shared_ptr(clientProj);
                lVar16 = clientProj.operator->();
                this_00->AddDynamic(iVar4, (int)dVar1, (int)dVar2, (int)dVar3, 60, local_40, *(int*)(lVar16 + 112), -1,
                                    false);
            }
        }
        uVar17 = 0;
    LAB_10014c014:
        return uVar17 & 4294967295;
    }

    // 0x10014c150
    unsigned long Client::GdmAddMapAnim()::$_11::operator()(shared_ptr<MapSpotAnim>& mapSpotAnim) const {
        int iVar1;
        int arg3;
        int arg4;
        uint64_t unaff_R14;
        shared_ptr<dash3d::Decor> local_50;
        world* local_40;
        int local_34;

        long lVar3 = field_0;
        long lVar2 = mapSpotAnim.operator->();
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (*(int*)(lVar2 + 32) == *(int*)(lVar3 + 51984)) {
            lVar2 = mapSpotAnim.operator->();
            if (*(char*)(lVar2 + 24) == '\0') {
                iVar1 = *(int*)(lVar3 + 8488);
                lVar2 = mapSpotAnim.operator->();
                if (*(int*)(lVar2 + 28) <= iVar1) {
                    ((MapSpotAnim*)mapSpotAnim.operator->())->DoAnim(*(int*)(lVar3 + 1115692));
                    lVar2 = mapSpotAnim.operator->();
                    if (*(char*)(lVar2 + 24) != '\0')
                        goto LAB_10014c26a;
                    local_40 = (world*)(*((lVar3 + 19184))).operator->();
                    lVar3 = mapSpotAnim.operator->();
                    local_34 = *(int*)(lVar3 + 32);
                    lVar3 = mapSpotAnim.operator->();
                    iVar1 = *(int*)(lVar3 + 36);
                    lVar3 = mapSpotAnim.operator->();
                    arg3 = *(int*)(lVar3 + 40);
                    lVar3 = mapSpotAnim.operator->();
                    arg4 = *(int*)(lVar3 + 44);
                    local_50 = shared_ptr(mapSpotAnim);
                    local_40->AddDynamic(local_34, iVar1, arg3, arg4, 60, local_50, 0, -1, false);
                }
                uVar4 = 0;
            }
        }
    LAB_10014c26a:
        return uVar4 & 4294967295;
    }

    // 0x10014ca10
    unsigned long Client::ShowObject(int, int)::$_12::operator()(shared_ptr<ClientObj> clientObj1,
                                                                 shared_ptr<ClientObj> clientObj2) const {
        long lVar3 = end();
        auto local_40 = configdecoder::ObjType::List(*(int*)(lVar3 + 24));
        lVar3 = clientObj1->end();
        auto local_30 = configdecoder::ObjType::List(*(int*)(lVar3 + 24));
        lVar3 = local_40.operator->();
        int iVar1 = *(int*)(lVar3 + 204);
        lVar3 = end();
        int iVar2 = *(int*)(lVar3 + 28);
        lVar3 = local_30.operator->();
        long lVar4 = (long)iVar2 * (long)iVar1;
        iVar1 = *(int*)(lVar3 + 204);
        lVar3 = clientObj1->end();
        iVar2 = *(int*)(lVar3 + 28);
        return lVar4 < (long)iVar2 * (long)iVar1 & 4294967295;
    }

    // 0x10014f020
    void Client::CreateObjOverlay(shared_ptr<rs2lib::IfType>)::$_13::operator()(const rs2lib::IfType& ifType) const {
        long lVar1 = *(long*)this;
        if (((lVar1 + 6815056))->OverlayExistsAtIndex(ifType.field_680) != '\0') {
            ((lVar1 + 6815056))->DestroyOverlay(ifType.field_680);
        }
    }

    // 0x10014f3f0
    uint32_t Client::CloseModal()::$_15::operator()(eastl::pair<int const, SubInterface>& arg1) const {
        int iVar1 = field_8;
        return iVar1 == 3 || iVar1 == 0;
    }

    // 0x10014f790
    uint16_t Client::PurgeServerActive(int)::$_16::operator()(eastl::pair<unsigned long long const, int>& arg1) const {
        return field_0 == (unsigned int)*(unsigned short*)(arg1 + 6);
    }

    // 0x100152d90
    bool Client::TcpIn(ServerConnection&)::$_17::operator()(eastl::pair<int const, SubInterface>& arg1) const {
        bool cVar1 = field_12;
        if (cVar1) {
            field_12 = 0;
        }
        return !cVar1;
    }

    // 0x100153170
    uint32_t Client::ZonePacket(shared::ZoneProt::ID,
                                core::SuperPacket&)::$_18::operator()(shared_ptr<ClientObj>& clientObj) const {
        uint32_t uVar1;

        long lVar2 = clientObj.operator->();
        if (*(unsigned int*)(lVar2 + 24) == (*(unsigned int*)this & 32767)) {
            lVar2 = clientObj.operator->();
            uVar1 = (((uint32_t)((int32_t)((unsigned int)*(int*)(lVar2 + 28) >> 8)) << 8) |
                     (uint8_t)(*(int*)(lVar2 + 28) == *(int*)(this + 4)));
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x10015a6e0
    void Client::ClearDeepLinkingIndex(int arg1) {
        uint32_t* puVar1 = &field_55240[(long)arg1];
        *puVar1 = 4294967295;
    }

    // 0x10016b420
    Worldmap* Client::GetWorldmap() {
        return m_pWorldmap;
    }

    // 0x10017a560
    Client* Client::Instance() {
        return m_pMyThis;
    }

    // 0x10017d410
    void Client::TriggerOnChatTransmitHook() {
        field_2506340 = field_2505808;
    }

    // 0x10017f5e0
    uint8_t* Client::GetInterfaceInteraction() {
        return &field_2508664;
    }

    // 0x100183c10
    int Client::GetContentMode() {
        return m_contentMode;
    }

    // 0x1001841d0
    uint64_t Client::GetAccountID() const {
        return m_accountID;
    }

    // 0x100189160
    void Client::GetConsole() {
        *field_7306800;
    }

    // 0x1001953f0
    EntityOverlays* Client::GetEntityOverlays() {
        return (EntityOverlays*)m_entityOverlays;
    }

    // 0x1001954e0
    uint8_t* Client::GetEndpointURLProvider() {
        return &field_1104184;
    }

    // 0x1001b4af0
    list<HookReq>* Client::GetHookQueue() {
        return (list<HookReq>*)&field_2506384;
    }

} // namespace jag::oldscape

namespace jag::game {
    class ClientCompositeZone {
    public:
        bool IsValid() const;
        uint32_t operator==(const ClientCompositeZone& clientCompositeZone) const;
        ClientCompositeZone();

    private:
        uint32_t field_0;
        int field_4;
        int field_8;
        uint8_t field_12;
        uint8_t _unknown_13[3];
        uint32_t field_16;
        uint8_t _unknown_20[4];
    };

    // 0x1004b84d0
    ClientCompositeZone::ClientCompositeZone()
        : field_0(4294967295), field_16(0), field_4(0), field_8(0), field_12(0) {}

} // namespace jag::game

namespace jag {
    class ClientDebugCamController {
    public:
        // virtual methods in vtable order
        virtual void UpdateFromInputState();
        virtual ~ClientDebugCamController();
        ClientDebugCamController();

    private:
        uint8_t _unknown_8[24];
        float field_32;
        float field_36;
        char field_40;
        bool field_41;
        uint8_t _unknown_42[6];
        uint64_t field_48;
        float field_56;
        float field_60;
        float field_64;
        uint8_t field_68;
        uint8_t field_69;
    };

} // namespace jag
