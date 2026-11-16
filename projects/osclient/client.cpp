// projects/osclient/client.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "client.h"
#include "libs/game/runetek5/player/PlayerModel.h"
#include "libs/graphics/runetek7/model/GeometryQueryManager.h"
#include "libs/oldscape/jagex3/midi2/miditask/FadeInTask.h"

namespace jag::oldscape {
    // 0x100d3d7b0, 32 bytes, __const
    Client::FACING_MAP = {768, 1024, 1280, 512, 1536, 256, 0, 1792};

    // 0x100d3d848, 168 bytes, __const
    Client::DEFAULT_MINIMUM_INGAME_ASPECT_RATIO = {
        1071877708, 0,          -1077342245, 1059760811, 1125515264, 861323157,  1176256512, 0,          -1717986918,
        1070176665, -842150451, -842150451,  -842150451, -842150451, -572662307, -572662307, -572662307, -572662307,
        0,          0,          -1,          -1,         1,          -1,         1,          -1,         -1,
        0,          0,          0,           0,          0,          0,          0,          0,          1,
        2,          3,          4,           5,          0,          0,
    };

    // 0x100f36fb8, 8 bytes, __data
    Client::LOG_FILE_DIR = "logs";

    // 0x100f8a780, 32 bytes, __common; set at startup by ___cxx_global_var_init.139
    eastl::string Client::BETA_CACHE_DIR_SUFFIX = "beta";

    // 0x100f8a7a0, 8 bytes, __common; zero-initialised
    Client::m_pMyThis;

    // 0x100f8a7d0, 8 bytes, __common; set at startup by ___cxx_global_var_init.297
    Client::VIEWPORT_FOV_EXPONENT_BASE_LOG = 4604418534313441775;

    // 0x100f8a7d8, 32 bytes, __common; set at startup by ___cxx_global_var_init.299
    eastl::string Client::m_gitBranchName = "usurper-216";

    // 0x100f8a7f8, 32 bytes, __common; set at startup by ___cxx_global_var_init.301
    eastl::string Client::m_gitCommitHash = "b5f9a203463a87d88338bff708d461408f61f275";

    // 0x1000b75a0, 48 bytes, placed by class name
    // Client::GetClientNpc(int)
    undefined8 Client::GetClientNpc(int param_1) {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        undefined8 uVar1;

        if ((uint)param_1 < 65536) {
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                    (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)param_1);
            uVar1 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            return uVar1;
        }
        return 0;
    }

    // 0x1000c14b0, 112 bytes, placed by class name and debug map
    // Client::GetFinalAmbientVolume()
    void Client::GetFinalAmbientVolume() {
        int iVar1;
        GameOptions* this_00;
        DeviceOptions* this_01;
        float fVar2;

        this_00 =
            (GameOptions*)std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
        iVar1 = this_00->GetAmbientVolume();
        this_01 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        fVar2 = (float)this_01->GetMasterVolume();
        jag::math::RoundFloatToInt(fVar2 * (float)((iVar1 * 127) / 100));
    }

    // 0x1000c1520, 64 bytes, placed by class name and debug map
    // Client::GetJagFx()
    StockPlayerOffer* Client::GetJagFx() {
        if (m_pJagFx == (StockPlayerOffer*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pJagFx != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      9323, (char*)0);
        }
        return m_pJagFx;
    }

    // 0x1000c1770, 10160 bytes, base-object constructor, placed by class name
    // Client::Client(OSClient&)
    void Client::Client(OSClient* param_1) {
        int iVar1;
        Logger* this_00;
        map<eastl::fixed_string<char, 32, true, eastl::allocator>,
            eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, logger::LogLevel,
                       eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>,
            eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>* this_01;
        map<eastl::fixed_string<char, 32, true, eastl::allocator>, logger::LogLevel,
            eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>* this_02;
        undefined4* puVar2;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* this_03;
        allocator* paVar3;
        Client* pCVar4;
        _func_decltype_nullptr* p_Var5;
        long lVar6;
        list<shared_ptr<ClientObj>, eastl::allocator>* this_04;
        bool bVar7;
        allocator local_120[72];
        undefined1 local_d8[48];
        undefined8 local_a8;
        undefined8 uStack_a0;
        CollisionMap local_88;
        CollisionMap local_60;
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        new (this) javapal::GameShell(param_1);
        new (&field_8144) social::DisplayNameQueryable();
        *(undefined***)this = &PTR_GetApplicationContext_100ef3fe0;
        field_8144 = &PTR_GetDisplayName_100ef4040;
        std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::unique_ptr<true, void>(
            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&field_8152);
        *(undefined2*)&field_8160 = 257;
        eastl::fixed_vector<sidebars::SideBarData, 8ul, false, eastl::dummy_allocator>::fixed_vector();
        eastl::fixed_vector<sidebars::SideBarRequest, 8ul, false, eastl::dummy_allocator>::fixed_vector();
        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::unique_ptr<true, void>(
            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::unique_ptr<true, void>(
            (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
        std::unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>::unique_ptr<true, void>(
            (unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>*)&field_8392);
        std::unique_ptr<DiscordMain, std::default_delete<DiscordMain>>::unique_ptr<true, void>(
            (unique_ptr<DiscordMain, std::default_delete<DiscordMain>>*)&field_8400);
        new (&field_8408, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_8424 = false;
        field_8432 = (Language*)Language::EN;
        field_8440 = (Isaac*)ModeGame::OLDSCAPE;
        field_8448 = 2;
        field_8452 = 0;
        new (&field_8456) eastl::string();
        ___bzero(&field_8488, 10568);
        new (&field_8496) ClientInputHandler();
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_19056, -1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_19060, -1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_19064, -1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_19068, -1);
        new (field_19072) InputFieldKeyboardHandler();
        field_19104 = '\0';
        field_19108 = -1;
        field_19112 = -1;
        field_19116 = -1;
        std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::unique_ptr<true, void>(
            (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        new (local_d8) eastl::allocator("EASTL hash_map");
        new (field_19128, (allocator*)local_d8) eastl::hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash,
                                                                eastl::equal_to<Font>, eastl::allocator, false>();
        std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::unique_ptr<true, void>(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
        field_19192 = 1;
        std::unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>::unique_ptr<true, void>(
            (unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>*)&field_19200);
        std::unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>::unique_ptr<true, void>(
            (unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>*)&field_19208);
        p_Var5 = (_func_decltype_nullptr*)0;
        new (&field_19216, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        this_03 = (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&field_19232;
        lVar6 = 1;
        do {
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(this_03, p_Var5);
            lVar6 = lVar6 + 1;
            this_03 = this_03 + 16;
        } while (lVar6 != 2048);
        m_playerLevel = 0;
        field_51988 = -1;
        field_51992 = 0;
        m_accountID = 18446744073709551615;
        new (field_52016, p_Var5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        *(undefined2*)&field_52032 = 256;
        field_52036 = 0;
        field_52344 = (Minimenu*)0;
        field_52352 = 0;
        field_52356 = 0;
        field_52360 = 0;
        field_52364 = 0;
        new (&field_52368) eastl::string();
        m_cameraMode = 0;
        field_52404 = 50;
        field_52408 = 25769803788;
        field_52416 = 1;
        new (field_52424, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_52440 = 0;
        field_52448 = 0;
        field_52456 = 1;
        field_52460 = 1071877708;
        field_52464 = 0;
        field_52468 = 4294967295;
        p_Var5 = (_func_decltype_nullptr*)0;
        new (&field_52472, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::unique_ptr<true, void>(
            (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)&field_52488);
        new (&field_52496, p_Var5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_52512, p_Var5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_52528, p_Var5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::unique_ptr<true,
                                                                                                               void>(
            (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)&field_52544);
        new (&field_52552, p_Var5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        std::array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>::array();
        new (field_52632, p_Var5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        std::array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>::array();
        field_52712 = 256;
        field_52714 = 205;
        field_52716 = 256;
        field_52718 = 320;
        field_52720 = 1;
        field_52724 = 1;
        field_52728 = 32767;
        field_52730 = 1;
        field_52732 = 32767;
        field_52736 = 0;
        field_52740 = 0;
        field_52744 = 0;
        field_52748 = 0;
        field_52748 = 0;
        field_52752 = 0;
        field_52756 = 0;
        field_52760 = 0;
        std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::unique_ptr<true, void>(
            (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
        std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::unique_ptr<true, void>(
            (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)&field_52776);
        new (&field_52784)
            std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>,
                       8ul>();
        new (&field_52848)
            eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>();
        field_52856 = 0;
        new (&field_52872) StockPriceCache();
        new (&field_52880) eastl::vector<short, eastl::allocator>();
        field_52912 = 0;
        std::unique_ptr<Heatmap, std::default_delete<Heatmap>>::unique_ptr<true, void>(
            (unique_ptr<Heatmap, std::default_delete<Heatmap>>*)&field_52920);
        field_52928 = 0;
        new (field_52936, 15) datastructure::RollingAverageCounter();
        field_52992 = 0;
        new (&field_52996) CinemaCameraData();
        std::unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>::unique_ptr<true,
                                                                                                               void>(
            (unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>*)&field_53064);
        std::unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>::unique_ptr<true,
                                                                                                               void>(
            (unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>*)&field_53072);
        std::unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>::unique_ptr<true,
                                                                                                               void>(
            (unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>*)&field_53080);
        field_53088 = 0;
        field_53092 = 0;
        field_53096 = 0;
        field_53100 = 0;
        field_53104 = 0;
        field_53108 = 128;
        field_53112 = 0;
        field_53116 = 0;
        field_53120 = 0;
        field_53124 = 0;
        field_53128 = 0;
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_53132, 0);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_53136, 0);
        *(undefined8*)&field_53140 = 0;
        field_53148 = 0;
        new (local_d8) eastl::allocator("EASTL hash_map");
        paVar3 = (allocator*)local_d8;
        new (&field_53160, paVar3)
            eastl::hash_map<int, SubInterface, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        field_53216 = -1;
        field_53220 = 0;
        field_53224 = 0;
        field_53228 = 0;
        field_53232 = 0;
        field_53236 = 0;
        field_53240 = 1;
        field_53244 = 0;
        field_53248 = 1;
        field_53252 = 0;
        field_53260 = 0;
        *(undefined2*)&field_53264 = 0;
        *(undefined8*)&field_53268 = 0;
        field_53276 = 0;
        *(undefined4*)((long)&field_53252 + 3) = 0;
        field_53280 = 71776119077994240;
        field_53288 = 281470681808640;
        field_53296 = 72057589759672575;
        field_53304 = 0;
        field_53312 = 0;
        new (&field_53320) eastl::string();
        *(undefined8*)&field_54152 = 0;
        field_54160 = 18446744069414584320;
        field_54168 = 0;
        std::unique_ptr<game::WordPack, std::default_delete<game::WordPack>>::unique_ptr<true, void>(
            (unique_ptr<game::WordPack, std::default_delete<game::WordPack>>*)((long)&field_54172 + 4));
        new (&field_54184, (_func_decltype_nullptr*)paVar3) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_54200, (_func_decltype_nullptr*)paVar3) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_54216 = '\0';
        new (&field_54224) eastl::string();
        field_54256 = 0;
        field_54260 = 0;
        field_54264 = 0;
        std::unique_ptr<LoginState, std::default_delete<LoginState>>::unique_ptr<true, void>(
            (unique_ptr<LoginState, std::default_delete<LoginState>>*)&field_54272);
        new (&field_54280) eastl::string();
        new (&field_54312) eastl::string();
        field_54344 = 0;
        new (local_d8) eastl::allocator("EASTL basic_string");
        new (&field_54352, "http://oldschool.runescape.com/jav_config.ws?m=0", (allocator*)local_d8) eastl::string();
        field_54384 = 0;
        field_54392 = (StockPlayerOffer*)0;
        field_54400 = (StockPlayerOffer*)0;
        field_54408 = (StockPlayerOffer*)0;
        field_54416 = (StockPlayerOffer*)0;
        m_pJagFx = (StockPlayerOffer*)0;
        field_54432 = (StockPlayerOffer*)0;
        m_pMidi = (StockPlayerOffer*)0;
        field_54448 = (StockPlayerOffer*)0;
        m_pSprites = (StockPlayerOffer*)0;
        field_54464 = (StockPlayerOffer*)0;
        field_54472 = (StockPlayerOffer*)0;
        field_54480 = (StockPlayerOffer*)0;
        m_pClientScripts = (StockPlayerOffer*)0;
        field_54496 = (StockPlayerOffer*)0;
        field_54504 = (StockPlayerOffer*)0;
        field_54512 = (StockPlayerOffer*)0;
        field_54520 = (StockPlayerOffer*)0;
        field_54528 = (StockPlayerOffer*)0;
        field_54536 = (StockPlayerOffer*)0;
        field_54544 = (StockPlayerOffer*)0;
        field_54552 = (Js5*)0;
        std::unique_ptr<DBTableIndexCache, std::default_delete<DBTableIndexCache>>::unique_ptr<true, void>(
            (unique_ptr<DBTableIndexCache, std::default_delete<DBTableIndexCache>>*)&field_54560);
        new (local_d8) eastl::allocator("EASTL basic_string");
        new (&field_54568, "unknown", (allocator*)local_d8) eastl::string();
        new (local_d8) eastl::allocator("EASTL basic_string");
        new (&field_54600, "unknown", (allocator*)local_d8) eastl::string();
        new (local_d8) eastl::allocator("EASTL basic_string");
        new (&field_54632, "unknown", (allocator*)local_d8) eastl::string();
        new (local_d8) eastl::allocator("EASTL basic_string");
        new (&field_54664, "unknown", (allocator*)local_d8) eastl::string();
        field_54696 = -1;
        m_serverMajorVersion = 216;
        field_54704 = 1;
        field_54708 = 0;
        field_54712 = 0;
        field_54716 = 0;
        std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::unique_ptr<true, void>(
            (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
        new (&field_54728) movement::ExactTileDestination();
        field_54752 = param_1;
        field_54760 = '\0';
        field_54761 = 0;
        field_54768 = "oldschool";
        m_contentMode = -1;
        m_worldId = 1;
        m_lowMem = false;
        field_54785 = false;
        m_usingRSeven = false;
        field_54788 = 1;
        new (&field_54792) eastl::string();
        field_54832 = 1;
        field_54840 = 0;
        field_54848 = 0;
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_54856, -1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_54860, -1);
        field_54864 = 0;
        field_54872 = 4294967295;
        *(undefined2*)&field_54876 = 257;
        field_54880 = 0;
        field_54884 = 0;
        *(undefined8*)&field_54888 = 0;
        *(undefined8*)&field_54896 = 0;
        field_54904 = 0;
        field_54908 = 0;
        field_54912 = 0;
        field_54916 = 0;
        new (&field_54920) eastl::string();
        field_54952 = 0;
        *(undefined8*)&field_54956 = 0;
        field_54964 = 0;
        field_54972 = 0;
        new (&field_54980) defaults::GraphicsDefaults();
        field_55032 = 0;
        *(undefined8*)&field_55040 = 0;
        field_55048 = 0;
        field_55056 = 2;
        new (&field_55064) eastl::string();
        new (&field_55096) eastl::string();
        new (&field_55128) eastl::string();
        new (&field_55160) eastl::string();
        field_55192 = 0;
        new (&field_55216) Array<unsigned char, eastl::allocator>();
        new (&field_55240) eastl::vector<int, eastl::allocator>();
        std::array<shared_ptr<ClientNpc>, 65536ul>::array();
        m_nPCCount = 0;
        new (&field_1103856, 65536) Array<int, eastl::allocator>();
        field_1103880 = 0;
        new (&field_1103888, 250) Array<int, eastl::allocator>();
        field_1103912 = 0;
        field_1103920 = 0;
        new (&field_1103928) eastl::string();
        new (&field_1103960) eastl::string();
        new (&field_1103992) eastl::string();
        new (&field_1104024) eastl::string();
        new (&field_1104056) eastl::string();
        new (&field_1104088) eastl::string();
        new (&field_1104120) shared::ConnectionTelemetry();
        pCVar4 = this;
        new (&field_1104184, this) EndpointURLProvider();
        std::unique_ptr<FontLoader, std::default_delete<FontLoader>>::unique_ptr<true, void>(
            (unique_ptr<FontLoader, std::default_delete<FontLoader>>*)&field_1104200);
        new (field_1104208, (_func_decltype_nullptr*)pCVar4) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_1104224, (_func_decltype_nullptr*)pCVar4) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_1104240, (_func_decltype_nullptr*)pCVar4) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_1104256, (_func_decltype_nullptr*)pCVar4) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_1104272) Array<rs2lib::CoordMapSquare, eastl::allocator>();
        new (&field_1104296) Array<int, eastl::allocator>();
        new (&field_1104320) Array<int, eastl::allocator>();
        new (&field_1104344) Array<int, eastl::allocator>();
        new (&field_1104368) Array<std::array<int, 4ul>, eastl::allocator>();
        new (&field_1104392) Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>();
        new (&field_1104416) Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>();
        new (&field_1104440) Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>();
        m_mapBuildRegionMode = false;
        new (&field_1104468) std::array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>();
        p_Var5 = (_func_decltype_nullptr*)412;
        ___bzero(&field_1115284);
        new (field_1115696, p_Var5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_1115712) Array<graphics::Pix32, eastl::allocator>();
        new (&field_1115736) Array<graphics::Pix32, eastl::allocator>();
        new (&field_1115760) Array<graphics::Pix32, eastl::allocator>();
        new (field_1115784, p_Var5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_1115800) Array<graphics::Pix8, eastl::allocator>();
        new (field_1115824, p_Var5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_1115840 = 2301979;
        field_1115844 = 5063219;
        field_1115848 = 3353893;
        field_1115852 = 7759444;
        field_1115856 = 0;
        *(undefined8*)&field_1115860 = 0;
        *(undefined8*)((long)&field_1115864 + 4) = 0;
        new (&field_1117280) std::array<eastl::vector<int, eastl::allocator>, 50ul>();
        new (&field_1118880) std::array<eastl::string, 50ul>();
        field_1120480 = 4294967295;
        field_1120484 = 4294967295;
        std::unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>::unique_ptr<true, void>(
            (unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>*)&field_1120488);
        std::unique_ptr<dash3d::SoftwareWorldRenderer, std::default_delete<dash3d::SoftwareWorldRenderer>>::unique_ptr<
            true, void>((unique_ptr<dash3d::SoftwareWorldRenderer,
                                    std::default_delete<dash3d::SoftwareWorldRenderer>>*)&field_1120496);
        new (field_1120504, p_Var5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_1120520 = 0;
        new (&field_1120528, 1000) Array<int, eastl::allocator>();
        m_priorityPlayerId = 4294967295;
        this_04 = (list<shared_ptr<ClientObj>, eastl::allocator>*)&field_1120560;
        lVar6 = 0;
        do {
            eastl::list<shared_ptr<ClientObj>, eastl::allocator>::list(this_04);
            lVar6 = lVar6 + -32;
            this_04 = this_04 + 32;
        } while (lVar6 != -1384448);
        new (&field_2505008) eastl::list<LocChange, eastl::allocator>();
        m_usingOneButtonMouse = false;
        field_2505044 = 18446744073709551615;
        field_2505052 = 4294967295;
        new (field_2505056, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_2505072, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_2505088 = 214748364800;
        field_2505096 = 0;
        field_2505100 = 0;
        p_Var5 = (_func_decltype_nullptr*)0;
        new (field_2505104, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_2505120, p_Var5) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505136, 0);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505140, 0);
        new (field_2505144, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505164, -1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505168, -1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505176, -1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505180, -1);
        field_2505184 = 0;
        field_2505188 = 0;
        field_2505192 = (Array*)0;
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505200, 0);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505204, 0);
        new (field_2505208, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_2505224 = 0;
        field_2505225 = 0;
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505228, 0);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505232, 0);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505236, 0);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505240, 0);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505244, 0);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_2505248, 0);
        new (&field_2505256) eastl::fixed_vector<unsigned long, 64ul, true, eastl::allocator>();
        field_2505808 = -1;
        field_2505940 = 0;
        field_2506072 = 0;
        field_2506204 = 0;
        *(undefined8*)&field_2506336 = 0;
        field_2506344 = 0;
        field_2506348 = 0;
        field_2506352 = 0;
        field_2506356 = 0;
        field_2506360 = 0;
        field_2506368 = 0;
        std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::unique_ptr<true, void>(
            (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)&field_2506376);
        new (&field_2506384) eastl::list<HookReq, eastl::allocator>();
        new (&field_2506416) eastl::list<HookReq, eastl::allocator>();
        new (&field_2506448) eastl::list<HookReq, eastl::allocator>();
        new (&field_2506480) eastl::list<InterfaceMouseEvent, eastl::allocator>();
        new (local_d8) eastl::allocator("EASTL hash_map");
        new (&field_2506512, (allocator*)local_d8)
            eastl::hash_map<unsigned long long, int, eastl::hash<unsigned long long>,
                            eastl::equal_to<unsigned long long>, eastl::allocator, false>();
        field_2506568 = 0;
        field_2506572 = -2;
        field_2508476 = 2;
        std::unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>::unique_ptr<true, void>(
            (unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>*)&field_2508480);
        std::unique_ptr<Js5ResourceProvider, std::default_delete<Js5ResourceProvider>>::unique_ptr<true, void>(
            (unique_ptr<Js5ResourceProvider, std::default_delete<Js5ResourceProvider>>*)&field_2508488);
        new (&field_2508496) SystemSettings();
        field_2508656 = 0.0;
        field_2508660 = 0;
        new (&field_2508664, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_2508680 = 0;
        std::array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>::array();
        std::unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>::unique_ptr<true,
                                                                                                                 void>(
            (unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>*)&field_2508736);
        std::unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>::unique_ptr<true,
                                                                                                                 void>(
            (unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>*)&field_2508744);
        field_2508752 = 0;
        new (&field_2508760, 50) Array<int, eastl::allocator>();
        new (&field_2508784, 50) Array<int, eastl::allocator>();
        new (&field_2508808, 50) Array<int, eastl::allocator>();
        new (&field_2508832, 50) Array<int, eastl::allocator>();
        new (&field_2508856, 50) Array<shared_ptr<sound::JagFX>, eastl::allocator>();
        field_2508884 = 0;
        field_2508880 = 0;
        field_2508888 = 0;
        field_2508896 = 0;
        field_2508904 = 0;
        field_2508908 = 0;
        field_2508916 = 0;
        field_2508924 = 0;
        field_2508928 = 0;
        field_2508936 = 0;
        field_2508944 = 0;
        field_2508948 = 0;
        field_2508956 = 0;
        field_2508964 = 0;
        make_shared<rs2lib::PlayerModel>((jag*)&field_2508968);
        field_2508984 = -1;
        field_2508988 = 4294967295;
        new (field_2508992) game::HostPlatformStats();
        m_pWorldmap = (Worldmap*)0;
        new (m_highlightManager) highlight::HighlightManager();
        field_6814736 = 0;
        new (local_d8) movement::CollisionMap(104, 104);
        new ((local_d8 + 40)) movement::CollisionMap(104, 104);
        new (&local_88) movement::CollisionMap(104, 104);
        new (&local_60) movement::CollisionMap(104, 104);
        eastl::allocator::allocator(local_120, "EASTL fixed_vector");
        new (&field_6814744, local_d8, 4) eastl::fixed_vector<movement::CollisionMap, 4ul, true, eastl::allocator>();
        lVar6 = 120;
        do {
            ((local_d8 + lVar6))->~CollisionMap();
            lVar6 = lVar6 + -40;
        } while (lVar6 != -40);
        new (field_6814944, 15) datastructure::RollingAverageCounter();
        new (field_6815000, 15) datastructure::RollingAverageCounter();
        new (m_entityOverlays) EntityOverlays();
        new (m_lootTrackerSaveHandler) loottracker::LootTrackerSaveHandler();
        new (&field_7164584) eastl::list<shared_ptr<ClientProj>, eastl::allocator>();
        new (&field_7164616) eastl::list<shared_ptr<MapSpotAnim>, eastl::allocator>();
        field_7164648 = 0;
        new (field_7164656) Skybox();
        field_7164752 = false;
        field_7164753 = 0;
        new (&field_7164760) Fog();
        field_7164880 = 257;
        field_7164882 = 0;
        lVar6 = 7208148;
        do {
            new ((field_8 + lVar6 + -8)) ClientEntityID();
            lVar6 = lVar6 + 8;
        } while (lVar6 != 7294676);
        field_7294676 = 0;
        field_7294680 = 0;
        eastl::vector<Client::LandscapeTileOutlineEntry, BucketAllocatorEASTL>::vector();
        field_7294712 = 8880;
        field_7294748 = 0;
        field_7294752 = 0;
        field_7294756 = 0;
        field_7294716 = 0;
        field_7294720 = 0;
        field_7294724 = 0.0;
        field_7294728 = 0;
        *(undefined8*)((long)&field_7294728 + 1) = 0;
        *(undefined8*)((long)&field_7294736 + 1) = 0;
        field_7294760 = -1;
        field_7294764 = -1;
        field_7294768 = 1;
        new (field_7294776, (hash*)local_d8, (equal_to*)local_120)
            eastl::fixed_hash_map<unsigned long long, jstring::PixfontGeneric, 8ul, 9ul, true,
                                  eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false,
                                  eastl::allocator>();
        new (&field_7305840, 8, "LRUHashCache") LRUHashCache<graphics::Pix32, 8ul, 9ul, false, unsigned long long>();
        new (local_d8) eastl::allocator("EASTL hash_map");
        new (&field_7306736, (allocator*)local_d8)
            eastl::hash_map<long long, Client::ScheduledFunction, eastl::hash<long long>, eastl::equal_to<long long>,
                            eastl::allocator, false>();
        field_7306792 = 0;
        std::make_unique<OSClientConsole, Client&>((Client*)&field_7306800);
        new (&field_7306808) eastl::vector<int, eastl::allocator>();
        m_frozen = false;
        field_7306841[0] = 0;
        if (m_pMyThis != (Client*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pMyThis == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      185, (char*)0);
        }
        m_pMyThis = this;
        iVar1 = rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID();
        bVar7 = true;
        if (iVar1 != 7) {
            iVar1 = rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID();
            bVar7 = iVar1 == 8;
        }
        field_8425 = bVar7;
        local_a8._0_4_ = 0;
        local_a8._4_4_ = 0;
        uStack_a0._0_4_ = 0;
        uStack_a0._4_4_ = 0;
        local_d8._32_8_ = 0;
        local_d8._40_8_ = 0;
        local_d8._16_4_ = 0;
        local_d8._20_4_ = 0;
        local_d8._24_8_ = 0;
        local_d8._0_8_ = 0;
        local_d8._8_4_ = 0;
        local_d8._12_4_ = 0;
        new (local_d8) shared::ConnectionTelemetry();
        field_1104168 = local_a8;
        field_1104176 = uStack_a0;
        field_1104152 = local_d8._32_8_;
        field_1104160 = local_d8._40_8_;
        field_1104136 = local_d8._16_8_;
        field_1104144 = local_d8._24_8_;
        *(undefined8*)&field_1104120 = local_d8._0_8_;
        field_1104128 = local_d8._8_8_;
        this_00 = (Logger*)logger::default_logger();
        this_01 = (map<eastl::fixed_string<char, 32, true, eastl::allocator>,
                       eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, logger::LogLevel,
                                  eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>,
                       eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>*)
                      this_00->GetLogStreams();
        new (local_d8) eastl::fixed_string<char, 32, true, eastl::allocator>("Render");
        this_02 = (map<eastl::fixed_string<char, 32, true, eastl::allocator>, logger::LogLevel,
                       eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>*)
            eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>,
                       eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, logger::LogLevel,
                                  eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>,
                       eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>,
                       eastl::allocator>::operator[](this_01, (fixed_string*)local_d8);
        new (local_120) eastl::fixed_string<char, 32, true, eastl::allocator>("Spike");
        puVar2 = (undefined4*)eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, logger::LogLevel,
                                         eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>,
                                         eastl::allocator>::operator[](this_02, (fixed_string*)local_120);
        *puVar2 = 0;
        /* WARNING: Subroutine does not return */
        local_120->~fixed_string();
    }

    // 0x1000c4ca0, 16 bytes, complete-object constructor, placed by class name
    // Client::Client(OSClient&): jumps straight to the base-object constructor

    // 0x1000c4cb0, 1392 bytes, placed by class name
    // Client::ReadJavConfigParameters()
    ulong Client::ReadJavConfigParameters() {
        undefined1* this_00;
        char cVar1;
        uint uVar2;
        uint uVar3;
        int iVar4;
        basic_string* this_01;
        char* pcVar6;
        Isaac* pIVar7;
        undefined8 uVar8;
        undefined8 unaff_R13;
        bool bVar9;
        allocator local_c0[8];
        eastl::string* local_b8;
        eastl::string* local_b0;
        eastl::string* local_a8;
        eastl::string* local_a0;
        eastl::string* local_98;
        eastl::string* local_90;
        eastl::string* local_88;
        eastl::string* local_80;
        eastl::string* local_78;
        eastl::string* local_70;
        eastl::string* local_68;
        int* local_60;
        eastl::string local_58[32];
        int* local_38;

        local_b8 = (eastl::string*)&field_54664;
        local_b0 = (eastl::string*)&field_54632;
        local_60 = &m_serverMajorVersion;
        local_38 = &field_54704;
        local_a8 = (eastl::string*)&field_54600;
        local_a0 = (eastl::string*)&field_54568;
        local_98 = (eastl::string*)&field_1104056;
        local_90 = (eastl::string*)&field_1103992;
        local_88 = (eastl::string*)&field_1103960;
        local_80 = (eastl::string*)&field_1103928;
        local_78 = (eastl::string*)&field_1104024;
        local_70 = (eastl::string*)&field_54792;
        bVar9 = true;
        local_68 = (eastl::string*)&field_54280;
        uVar2 = 0;
        do {
            eastl::string::basic_string(local_58);
            eastl::string::append_sprintf((char*)local_58, "%i", (ulong)uVar2);
            this_01 = (basic_string*)javapal::GameShell::GetParameter((basic_string*)this);
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                switch (uVar2) {
                case 2:
                    eastl::string::operator=(local_78, this_01);
                    break;
                case 3:
                    iVar4 = this_01->comparei("true");
                    field_8424 = iVar4 == 0;
                    break;
                case 4:
                    rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID();
                    break;
                case 5:
                    pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    iVar4 = _atoi(pcVar6);
                    field_52992 = iVar4;
                    break;
                case 6:
                    uVar3 = eastl::stoi<eastl::string>(this_01, 10);
                    field_8432 = (Language*)Language::GetByID(uVar3);
                    break;
                case 7:
                    iVar4 = eastl::stoi<eastl::string>(this_01, 10);
                    m_contentMode = iVar4;
                    break;
                case 8:
                    iVar4 = this_01->comparei("true");
                    if (iVar4 == 0) {
                        field_54788 = 0;
                    } else {
                        field_54788 = 1;
                    }
                    break;
                case 9:
                    eastl::string::operator=(local_70, this_01);
                    break;
                case 10:
                    uVar3 = eastl::stoi<eastl::string>(this_01, 10);
                    pIVar7 = (Isaac*)ModeGame::GetByID(uVar3);
                    field_8440 = pIVar7;
                    if (pIVar7 == (Isaac*)ModeGame::OLDSCAPE) {
                        *(undefined4*)&field_54172 = 0;
                    } else {
                        *(undefined4*)&field_54172 = 4294967295;
                    }
                    break;
                case 11:
                    eastl::string::operator=(local_80, this_01);
                    break;
                case 12:
                    iVar4 = eastl::stoi<eastl::string>(this_01, 10);
                    m_worldId = iVar4;
                    break;
                case 14:
                    pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    iVar4 = _atoi(pcVar6);
                    field_54824 = iVar4;
                    break;
                case 15:
                    iVar4 = eastl::stoi<eastl::string>(this_01, 10);
                    field_54168 = iVar4;
                    if ((iVar4 == 0) && (cVar1 = CheckHost(), cVar1 == '\0')) {
                        uVar8 = logger::default_logger();
                        logger::Logger::Log(uVar8, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client.cpp",
                                            229, "Environment is LIVE, but Config URL is not compatible!");
                        goto LAB_1000c513e;
                    }
                    break;
                case 17:
                    eastl::string::operator=(local_68, this_01);
                    break;
                case 19:
                    eastl::string::operator=(local_98, this_01);
                    break;
                case 20:
                    eastl::string::operator=(local_90, this_01);
                    break;
                case 21:
                    iVar4 = eastl::stoi<eastl::string>(this_01, 10);
                    field_54828 = iVar4;
                    break;
                case 23:
                    eastl::string::operator=(local_a0, this_01);
                    break;
                case 24:
                    eastl::string::operator=(local_a8, this_01);
                    break;
                case 25:
                    eastl::string::operator=(local_b0, this_01);
                    pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    iVar4 = _sscanf(pcVar6, "%d.%d", local_60, local_38);
                    if (iVar4 == 1) {
                        *local_38 = 1;
                    }
                    break;
                case 26:
                    iVar4 = eastl::stoi<eastl::string>(this_01, 10);
                    field_54696 = iVar4;
                    break;
                case 27:
                    eastl::string::operator=(local_b8, this_01);
                    break;
                case 28:
                    eastl::string::operator=(local_88, this_01);
                }
            }
            eastl::string::~basic_string(local_58);
            bVar9 = uVar2 < 28;
            uVar2 = uVar2 + 1;
            if (uVar2 == 29) {
                if ((field_52992 & 65536) != 0) {
                    eastl::string::operator=((eastl::string*)&field_8456, (basic_string*)&BETA_CACHE_DIR_SUFFIX);
                }
                this_00 = &field_1104088;
                eastl::allocator::allocator(local_c0, "EASTL basic_string");
                eastl::string::basic_string(local_58, "gedigesturl", local_c0);
                cVar1 = GetAppletConfigString(this_00, local_58);
                if (cVar1 == '\0') {
                    eastl::string::~basic_string(local_58);
                    cVar1 = field_54216;
                } else {
                    cVar1 = core::stringtools::general::StringTools::StartsWith((basic_string*)this_00, "http");
                    eastl::string::~basic_string(local_58);
                    if (cVar1 == '\0') {
                        this_00->assign("");
                    }
                    cVar1 = field_54216;
                }
                if (cVar1 == '\0') {
                    local_58->GetCodeBaseHost();
                    eastl::string::operator=((eastl::string*)&field_54224, (basic_string*)local_58);
                LAB_1000c513e:
                    eastl::string::~basic_string(local_58);
                }
                return CONCAT71((int7)((ulong)unaff_R13 >> 8), ~bVar9) & 4294967041;
            }
        } while (true);
    }

    // 0x1000c52d0, 1232 bytes, placed by class name
    // Client::FinishInitialization()
    void Client::FinishInitialization() {
        undefined1* this_00;
        Client* this_01;
        char cVar1;
        uint uVar2;
        undefined4 uVar3;
        shared_ptr<ApplicationContext>* psVar4;
        long* plVar5;
        LoginManager* pLVar6;
        ApplicationContext* this_02;
        undefined4* puVar7;
        undefined8 uVar8;
        ulong uVar9;
        allocator local_1b0[8];
        long* local_1a8[4];
        array<int, 50ul>* local_188;
        array<int, 50ul>* local_180;
        array<int, 50ul>* local_178;
        GameShell3Cache local_168[12];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_54956 = 0;
        if (field_54168 == *(int*)(ModeWhere::LIVE + 8)) {
            field_54256 = 43594;
            uVar2 = 443;
        } else {
            field_54256 = m_worldId + 40000;
            uVar2 = m_worldId + 50000;
        }
        field_54260 = uVar2;
        DAT_100fcf9a0 = 4550;
        rs2lib::PlayerModel::m_recol1s = 1302211639220968078;
        std::array<Array<short, eastl::allocator>, 5ul>::operator=(
            (array<Array<short, eastl::allocator>, 5ul>*)&rs2lib::PlayerModel::m_recol1d,
            (array*)&rs2lib::RecolsRunescape::m_recol1d);
        rs2lib::PlayerModel::m_recol2s = 18446744070011279296;
        DAT_100fcfa28 = 65535;
        std::array<Array<short, eastl::allocator>, 5ul>::operator=(
            (array<Array<short, eastl::allocator>, 5ul>*)&rs2lib::PlayerModel::m_recol2d,
            (array*)&rs2lib::RecolsRunescape::m_recol2d);
        cVar1 = InitJs5RemoteLoader(this);
        if (cVar1 == '\0') {
            uVar8 = logger::default_logger();
            logger::Logger::Log(
                uVar8, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 364,
                "Couldn\'t set up Js5Localloader. Quitting...");
            /* WARNING: Subroutine does not return */
            _exit(-1);
        }
        psVar4 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
        plVar5 = (long*)shared_ptr<ApplicationContext>::operator->(psVar4);
        eastl::allocator::allocator(local_1b0, "EASTL basic_string");
        new (local_1a8) eastl::string("secure", local_1b0);
        GetBaseUrl((Client*)local_168, (basic_string*)this, SUB81((eastl::string*)local_1a8, 0));
        (**(code**)(*plVar5 + 48))(plVar5, &field_1103928, &field_1103960, &field_1103992, &field_1104024, local_168);
        local_168->~basic_string();
        local_1a8->~basic_string();
        psVar4 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
        plVar5 = (long*)shared_ptr<ApplicationContext>::operator->(psVar4);
        local_1a8[0] = (long*)(**(code**)(*plVar5 + 72))(plVar5);
        std::make_unique<LoginManager, auth::AuthLibWrapper*&>((AuthLibWrapper**)local_168);
        this_00 = &field_2506376;
        std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator=(
            (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)this_00, (unique_ptr*)local_168);
        local_168->~unique_ptr();
        uVar3 = GetPlatformPublishingType(this);
        SetPublishingPlatformType(uVar3);
        pLVar6 = (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
            (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)this_00);
        local_168->GetRootStorage();
        pLVar6->SetDevCredentialsOutputDirectory(local_168);
        local_168->~pair();
        pLVar6 = (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
            (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)this_00);
        new (local_168) Filename("devCredentials.txt");
        pLVar6->SetDevCredentialsFilename(local_168);
        local_168->~pair();
        if (local_1a8[0] != (long*)0) {
            (**(code**)(*local_1a8[0] + 416))();
            cVar1 = HasAcceptedTermsAndPrivacy(this);
            if (cVar1 != '\0') {
                psVar4 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                this_02 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(psVar4);
                this_02->InitServices();
            }
        }
        OnScaledUIQualityChanged(this);
        std::make_unique<FriendSystem, rs2lib::social::NameSpace&>((NameSpace*)local_168);
        std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator=(
            (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768, (unique_ptr*)local_168);
        local_168->~unique_ptr();
        local_188 = (array<int, 50ul>*)&field_1115876;
        local_180 = (array<int, 50ul>*)&field_1116076;
        local_178 = (array<int, 50ul>*)&field_1116276;
        uVar9 = 0;
        do {
            puVar7 = (undefined4*)std::array<int, 50ul>::operator[](local_188, uVar9);
            *puVar7 = 0;
            puVar7 = (undefined4*)std::array<int, 50ul>::operator[](local_180, uVar9);
            *puVar7 = 0;
            puVar7 = (undefined4*)std::array<int, 50ul>::operator[](local_178, uVar9);
            *puVar7 = 0;
            puVar7 = (undefined4*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&field_1116476, uVar9);
            *puVar7 = 0;
            puVar7 = (undefined4*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&field_1116676, uVar9);
            *puVar7 = 0;
            puVar7 = (undefined4*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&field_1116876, uVar9);
            *puVar7 = 0;
            puVar7 = (undefined4*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&field_1117076, uVar9);
            this_01 = (Client*)this;
            *puVar7 = 0;
            uVar9 = uVar9 + 1;
        } while (uVar9 != 50);
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            StockPriceCache::Init((basic_string*)&this_01->field_52872);
        }
        std::make_unique<objtags::ObjTagManager>();
        std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator=(
            (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&this_01->field_54720,
            (unique_ptr*)local_168);
        local_168->~unique_ptr();
        std::make_unique<HiscoresManager>();
        std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator=(
            (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)&this_01->field_52776,
            (unique_ptr*)local_168);
        local_168->~unique_ptr();
        ClientGameInit(this_01);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000c57f0, 1008 bytes, placed by class name
    // Client::InitJs5RemoteLoader()
    uint Client::InitJs5RemoteLoader() {
        undefined1* this_00;
        char cVar1;
        uint uVar2;
        char* pcVar3;
        Filename* pFVar4;
        Js5RemoteLoader* this_01;
        undefined8 uVar5;
        undefined8 uVar6;
        Js5Loader* pJVar7;
        eastl::string local_690[32];
        eastl::string local_670[32];
        unique_ptr<jagex3::Js5RemoteLoader, std::default_delete<jagex3::Js5RemoteLoader>> local_650[8];
        GameShell3Cache local_648[12];
        Js5Loader local_518[7];
        Filename local_3e8[19];
        GameShell3Cache local_2b8[12];
        Filename local_188[19];
        Js5RemoteServerInfo local_58;
        undefined8 local_50;
        undefined8 local_48;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::make_unique<jagex3::Js5RemoteLoader>();
        eastl::string::basic_string(local_690, (basic_string*)&field_54224);
        eastl::string::append_sprintf((char*)local_690, ":%d", (ulong)field_54256);
        eastl::string::basic_string(local_670, (basic_string*)&field_54224);
        eastl::string::append_sprintf((char*)local_670, ":%d", (ulong)field_54260);
        local_58.field_0 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_50 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_48 = 0;
        pcVar3 = (char*)GameShell3Cache::GetOSRSCacheFolderName();
        Filename::Filename(local_188, pcVar3);
        pcVar3 = (char*)GameShell3Cache::GetDataFolderName();
        Filename::operator/=(local_188, pcVar3);
        pFVar4 = (Filename*)
                     std::unique_ptr<jagex3::Js5RemoteLoader, std::default_delete<jagex3::Js5RemoteLoader>>::operator->(
                         local_650);
        jagex3::Js5RemoteLoader::RequestCacheDirectoryPermissions(pFVar4);
        local_2b8->GetDataDirectory();
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            local_648->GetDataDirectory();
            Filename::operator+((Filename*)local_518, (char*)local_648);
            Filename::operator+(local_3e8, (basic_string*)local_518);
            Filename::operator=((Filename*)local_2b8, local_3e8);
            local_3e8->~pair();
            local_518->~pair();
            local_648->~pair();
        }
        this_01 =
            (Js5RemoteLoader*)
                std::unique_ptr<jagex3::Js5RemoteLoader, std::default_delete<jagex3::Js5RemoteLoader>>::operator->(
                    local_650);
        local_648[0]._0_4_ = this_01->Initialize(local_2b8, &local_58);
        uVar2 = local_648->IsValid();
        if ((char)uVar2 == '\0') {
            this_00 = &field_2508496;
            this_00->SetEnc(field_8440);
            this_00->SetLanguage(field_8432);
            pJVar7 = (Js5Loader*)
                std::unique_ptr<jagex3::Js5RemoteLoader, std::default_delete<jagex3::Js5RemoteLoader>>::release(
                    local_650);
            std::unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>::unique_ptr<true, void>(
                (unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>*)local_3e8, pJVar7);
            std::unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>::operator=(
                (unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>*)&field_2508480,
                (unique_ptr*)local_3e8);
            local_3e8->~unique_ptr();
            local_518[0].field_0 = (undefined**)this_00;
            std::unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>::operator*(
                (unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>*)&field_2508480);
            std::make_unique<js5::OldscapeJs5ResourceProvider, SystemSettings*, jagex3::Js5Loader&>(
                (SystemSettings**)local_3e8, local_518);
            std::unique_ptr<Js5ResourceProvider, std::default_delete<Js5ResourceProvider>>::operator=(
                (unique_ptr<Js5ResourceProvider, std::default_delete<Js5ResourceProvider>>*)&field_2508488,
                (unique_ptr*)local_3e8);
            local_3e8->~unique_ptr();
        } else {
            uVar5 = logger::default_logger();
            local_3e8->GetErrorString();
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(
                uVar5, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 3708,
                "Error initializing remote loader: %s\n", uVar6);
            local_3e8->~basic_string();
        }
        local_2b8->~pair();
        local_188->~pair();
        eastl::string::~basic_string(local_670);
        eastl::string::~basic_string(local_690);
        std::unique_ptr<jagex3::Js5RemoteLoader, std::default_delete<jagex3::Js5RemoteLoader>>::~unique_ptr(local_650);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar2 ^ 1;
    }

    // 0x1000c5be0, 448 bytes, placed by class name
    // Client::GetBaseUrl(eastl::string const&, bool)
    Client* Client::GetBaseUrl(basic_string* param_1, bool param_2) {
        int iVar1;
        undefined4 uVar2;
        undefined8 uVar3;
        undefined8 uVar5;
        int in_ECX;
        char* pcVar6;
        eastl::string local_80[32];
        allocator local_60[32];
        char* local_40;
        char* local_38;

        pcVar6 = "http://";
        if (in_ECX != 0) {
            pcVar6 = "https://";
        }
        local_40 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        iVar1 = *(int*)(param_1 + 54168);
        if (iVar1 == *(int*)(ModeWhere::WTRC + 8)) {
            local_38 = "-wtrc";
        } else if (iVar1 == *(int*)(ModeWhere::WTQA + 8)) {
            local_38 = "-wtqa";
        } else if (iVar1 == *(int*)(ModeWhere::WTWIP + 8)) {
            local_38 = "-wtwip";
        } else if (iVar1 == *(int*)(ModeWhere::WTI + 8)) {
            local_38 = "-wti";
        } else {
            if (iVar1 == *(int*)(ModeWhere::LOCAL + 8)) {
                local_40 = "local";
            }
            local_38 = "";
        }
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        eastl::string::basic_string(local_80, "", local_60);
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            eastl::operator+((eastl*)local_60, (value_type*)"/p=", param_1 + 54792);
            eastl::string::operator=(local_80, (basic_string*)local_60);
            local_60->~basic_string();
        }
        uVar3 = *(undefined8*)(*(long*)(param_1 + 8432) + 16);
        uVar2 = *(undefined4*)(param_1 + 54824);
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string::basic_string(this, "%s%s%s.%s/l=%s/a=%i%s/", pcVar6, local_40, local_38, "runescape.com", uVar3,
                                    uVar2, uVar5);
        eastl::string::~basic_string(local_80);
        return this;
    }

    // 0x1000c5e40, 112 bytes, placed by class name
    // Client::GetPlatformPublishingType()
    uint Client::GetPlatformPublishingType() {
        bool bVar1;
        byte bVar2;
        uint uVar4;
        OSClient* this_00;
        unique_ptr* this_01;
        LoginManager* this_02;

        this_00 = (OSClient*)Instance();
        this_01 = (unique_ptr*)this_00->GetSteamSDK();
        bVar1 = std::unique_ptr::operator_cast_to_bool(this_01);
        uVar4 = 1;
        if (!bVar1) {
            if (field_8425 == false) {
                this_02 = (LoginManager*)GetLoginManager(this);
                bVar2 = this_02->IsUsingJagexLauncher();
                uVar4 = (uint)bVar2 * 5;
            } else {
                uVar4 = rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID() == 7 ^ 3;
            }
        }
        return uVar4;
    }

    // 0x1000c5ef0, 48 bytes, placed by class name
    // Client::HasAcceptedTermsAndPrivacy()
    bool Client::HasAcceptedTermsAndPrivacy() {
        DeviceOptions* this_00;
        int iVar1;

        this_00 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        iVar1 = this_00->GetTermsAndPrivacyVersion();
        return field_54828 <= iVar1;
    }

    // 0x1000c5f80, 64 bytes, placed by class name
    // Client::OnScaledUIQualityChanged()
    void Client::OnScaledUIQualityChanged() {
        NXTPixToolkit* pNVar1;
        DeviceOptions* this_00;
        undefined4 uVar2;

        pNVar1 = field_144;
        this_00 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        uVar2 = this_00->GetUIQuality();
        graphics::NXTPixToolkit::SetScaledUIQuality(pNVar1, uVar2);
    }

    // 0x1000c6160, 80 bytes, placed by class name
    // Client::ClientGameInit()
    void Client::ClientGameInit() {
        long lVar1;

        lVar1 = -5;
        do {
            field_2508992[lVar1 + -107] = 0;
            *(undefined4*)(field_2508992 + lVar1 * 4 + -84) = 0;
            *(undefined4*)(field_2508992 + lVar1 * 4 + -64) = 0;
            *(undefined4*)(field_2508992 + lVar1 * 4 + -44) = 0;
            *(undefined4*)(field_2508992 + lVar1 * 4 + -24) = 0;
            lVar1 = lVar1 + 1;
        } while (lVar1 != 0);
    }

    // 0x1000c61b0, 32 bytes, placed by class name
    // Client::ResetIdleTimeRemaining()
    void Client::ResetIdleTimeRemaining() {
        field_54864 = CurrentTimeMillis();
    }

    // 0x1000c61d0, 64 bytes, placed by class name
    // Client::GetIdleTimeRemaining()
    int Client::GetIdleTimeRemaining() {
        int iVar1;

        if (field_54864 < 0) {
            iVar1 = 300000;
        } else {
            iVar1 = CurrentTimeMillis();
            iVar1 = ((int)field_54864 - iVar1) + 300000;
            if (iVar1 < 0) {
                iVar1 = 0;
            }
        }
        return iVar1;
    }

    // 0x1000c6210, 96 bytes, placed by class name
    // Client::DispatchInput()
    void Client::DispatchInput() {
        int iVar2;

        *(undefined8*)&field_53140 = 0;
        *(undefined4*)((long)&field_53148 + 4) = 0;
        iVar2 = field_7280->GetAndResetWheelRotation();
        if (iVar2 != 0) {
            field_53140 = iVar2;
        }
        (&field_8496)->ServicePreDispatch();
        if (field_160->Dispatch() != '\0') {
            ResetIdleTimeRemaining(this);
        }
    }

    // 0x1000c6270, 2528 bytes, placed by class name
    // Client::MainLoop()
    void Client::MainLoop() {
        __2 _Var1;
        uint uVar2;
        GraphicsApp* this_00;
        char cVar3;
        bool bVar4;
        int iVar5;
        RenderDevice* this_01;
        DebugUIManager* this_02;
        long lVar6;
        long* plVar7;
        OSClientConsole* this_03;
        TotpPassCodes* this_04;
        Pix2D* pPVar8;
        PixfontGeneric* pPVar9;
        PixfontGeneric* pPVar10;
        int* piVar11;
        undefined8 uVar12;
        undefined8 uVar13;
        function* this_05;
        basic_string* pbVar14;
        Client* this_06;
        char* pcVar15;
        undefined8 uVar16;
        __2 local_f8[32];
        function local_d8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((field_54716 != '\0') ||
            (((this_06 = this, field_8448 < 6 && ((37U >> ((byte)field_8448 & 31) & 1) != 0)) &&
              (cVar3 = javapal::GameShell::IsForceCrashQueued(), cVar3 != '\0')))) {
            pcVar15 = "!m_forceCrash && !(clientLoading && GameShell::IsForceCrashQueued())";
            LogFatalError(
                "!m_forceCrash && !(clientLoading && GameShell::IsForceCrashQueued())",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 463, 0,
                "Client was forced to crash!");
            /* WARNING: Subroutine does not return */
            pcVar15->~OptionStore();
        }
        if (m_frozen == false) {
            field_8488 = field_8488 + 1;
        }
        this_01 = (RenderDevice*)this_06->Instance();
        iVar5 = this_01->GetReadyState();
        if ((iVar5 == 0) && (field_54785 != false)) {
            javapal::GameShell::DoneSlowUpdate();
        }
        this_02 = (DebugUIManager*)this_01->Instance();
        this_05 = (function*)&DAT_00000001;
        this_02->MainLogic(true);
        lVar6 = ImGui::GetIO();
        _Var1 = *(__2*)(lVar6 + 202);
        if ((__2)field_7306841[0] != _Var1) {
            field_7306841[0] = _Var1;
            this_00 = field_152;
            this_05 = &local_d8;
            local_f8[0] = _Var1;
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                Client::MainLoop()::__2, void>(
                (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)this_05, local_f8);
            this_00->QueueMainThreadEvent(this_05);
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        field_54785 = iVar5 != 0;
        if (field_8448 != 0) {
            ExecuteScheduledFunctions(this);
            ServiceNetClient(this);
            if (((field_54785 == false) && (cVar3 = midi2::MidiManager::Service(), cVar3 != '\0')) &&
                (field_2508680 != '\0')) {
                bVar4 = std::operator!=((unique_ptr*)&field_2508736, (_func_decltype_nullptr*)this_05);
                if (bVar4) {
                    plVar7 = (long*)std::unique_ptr<sound::PCMPlayerMainThread,
                                                    std::default_delete<sound::PCMPlayerMainThread>>::
                             operator->((unique_ptr<sound::PCMPlayerMainThread,
                                                    std::default_delete<sound::PCMPlayerMainThread>>*)&field_2508736);
                    (**(code**)(*plVar7 + 24))(plVar7);
                }
            }
            if ((field_54785 == false) &&
                ((40 < (ulong)field_8448 || ((1100618924032U >> ((ulong)field_8448 & 63) & 1) == 0)))) {
                DispatchInput(this);
                cVar3 = field_54785;
            } else {
                cVar3 = field_54785;
            }
            if (cVar3 == '\0') {
                this_03 = (OSClientConsole*)
                              std::unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>::operator->(
                                  (unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>*)&field_7306800);
                this_03->MainLogic(field_2508656);
            }
            plVar7 =
                (long*)std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                    (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            (**(code**)(*plVar7 + 16))(plVar7);
            plVar7 = (long*)std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
            (**(code**)(*plVar7 + 16))(plVar7);
            this_04 = (TotpPassCodes*)std::unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>::operator->(
                (unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>*)&field_8392);
            this_04->MainLogic();
        }
        pPVar8 = (Pix2D*)(*(code*)*field_144->field_0)();
        if (field_54785 != false)
            goto switchD_1000c64cd_caseD_1;
        switch (field_8448) {
        case 0:
            eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                     (basic_string*)&constants::text::mainloadjc);
            if (field_54344 == 0) {
                new (&local_d8) eastl::string();
                local_f8->GetDeepLink();
                SystemDetails::GetDeepLinkingValueForKey<eastl::string>((basic_string*)local_f8, "launchurl",
                                                                        (basic_string*)&local_d8);
                local_f8->~basic_string();
                if ((field_54168 == *(int*)(ModeWhere::LIVE + 8)) ||
                    (cVar3 = eastl::basic_string<
                         char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty(),
                     cVar3 == '\0')) {
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                    javapal::GameShell::SetJavConfigReader((basic_string*)this);
                } else {
                    cVar3 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                    if (cVar3 == '\0') {
                        new (local_f8) eastl::string();
                        uVar12 = logger::default_logger();
                        logger::Logger::Log(uVar12, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client.cpp",
                                            568, "Attempting to download JavConfig using deeplink.");
                        uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::string::append_sprintf((char*)local_f8, "http://%s/jav_config.ws?binaryType=%s", uVar12,
                                                      "NXT_BINARY_TYPE");
                        javapal::GameShell::SetJavConfigReader((basic_string*)this);
                    } else {
                        iVar5 = (&field_54224, "127.0.0.1")->compare();
                        if (iVar5 == 0) {
                            if (field_54168 == *(int*)(ModeWhere::LOCAL + 8)) {
                                uVar12 = logger::default_logger();
                                logger::Logger::Log(uVar12, 0, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/client.cpp",
                                                    582, "Local modewhere: Continuing without JavConfig data");
                                FinishInitialization(this);
                                SetMainState(this, 2);
                            }
                            goto LAB_1000c6809;
                        }
                        ConstructRentalJavConfigUrl((Client*)local_f8, (char*)this, 34676);
                        uVar12 = logger::default_logger();
                        uVar13 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(uVar12, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client.cpp",
                                            576, "Attempting to download JavConfig from a rental server: %s", uVar13);
                        javapal::GameShell::SetJavConfigReader((basic_string*)this);
                    }
                    local_f8->~basic_string();
                }
            LAB_1000c6809:
                field_54344 = 1;
                local_d8.~basic_string();
            }
            if (field_54344 == 1) {
                iVar5 = LoadJavConfigFromUrl();
                if (iVar5 == 3) {
                    if (field_54168 == *(int*)(ModeWhere::LIVE + 8)) {
                        uVar12 = logger::default_logger();
                        uVar13 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pcVar15 = "Failed to download JavConfig for live server: %s";
                        uVar16 = 616;
                    } else {
                        cVar3 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                        if (cVar3 != '\0') {
                            iVar5 = (&field_54224, "127.0.0.1")->compare();
                            if (iVar5 != 0) {
                                uVar12 = logger::default_logger();
                                logger::Logger::Log(uVar12, 0, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/client.cpp",
                                                    630, "Failed first attempt to download JavConfig. Retrying...");
                                ConstructRentalJavConfigUrl((Client*)&local_d8, (char*)this, 34391);
                                uVar12 = logger::default_logger();
                                uVar13 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                logger::Logger::Log(uVar12, 0, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/client.cpp",
                                                    633, "Attempting to download JavConfig from a rental server: %s",
                                                    uVar13);
                                javapal::GameShell::SetJavConfigReader((basic_string*)this);
                                field_54344 = field_54344 + 1;
                                local_d8.~basic_string();
                            }
                            goto LAB_1000c6a02;
                        }
                        uVar12 = logger::default_logger();
                        uVar13 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pcVar15 = "Failed to download JavConfig from specific URL: %s";
                        uVar16 = 623;
                    }
                    logger::Logger::Log(
                        uVar12, 0, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        uVar16, pcVar15, uVar13);
                    pbVar14 = (basic_string*)&constants::text::loading_nojavcfg;
                LAB_1000c69f0:
                    eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, pbVar14);
                    uVar12 = 1000;
                } else {
                    if (iVar5 != 2)
                        goto LAB_1000c6a02;
                    cVar3 = ReadJavConfigParameters(this);
                    if (cVar3 == '\0') {
                        pbVar14 = (basic_string*)&constants::text::loading_badjavcfg;
                        goto LAB_1000c69f0;
                    }
                    FinishInitialization(this);
                    uVar12 = 2;
                }
                SetMainState(this, uVar12);
            }
        LAB_1000c6a02:
            if (field_54344 == 2) {
                iVar5 = LoadJavConfigFromUrl();
                if (iVar5 == 3) {
                    uVar12 = logger::default_logger();
                    logger::Logger::Log(
                        uVar12, 0, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        655, "Failed to download JavConfig after two attempts");
                    uVar12 = logger::default_logger();
                    logger::Logger::Log(
                        uVar12, 0, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        656, "Attemting to continue with out JavConfig paramters");
                } else {
                    if (iVar5 != 2)
                        break;
                    ReadJavConfigParameters(this);
                }
                FinishInitialization(this);
                SetMainState(this, 2);
            }
            break;
        case 5:
            pPVar9 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
                (shared_ptr<jstring::PixfontGeneric>*)field_1104208);
            pPVar10 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
                (shared_ptr<jstring::PixfontGeneric>*)field_1104224);
            TitleScreen::Loop((GameShell*)this, pPVar8, pPVar9, pPVar10);
        case 2:
            MainLoad(this);
            javapal::GameShell::DoneSlowUpdate();
            break;
        case 10:
        case 11:
            pPVar9 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
                (shared_ptr<jstring::PixfontGeneric>*)field_1104208);
            pPVar10 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
                (shared_ptr<jstring::PixfontGeneric>*)field_1104224);
            TitleScreen::Loop((GameShell*)this, pPVar8, pPVar9, pPVar10);
            field_7164656->ResetColour();
            break;
        case 20:
        case 50:
            pPVar9 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
                (shared_ptr<jstring::PixfontGeneric>*)field_1104208);
            pPVar10 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
                (shared_ptr<jstring::PixfontGeneric>*)field_1104224);
            TitleScreen::Loop((GameShell*)this, pPVar8, pPVar9, pPVar10);
            LoginPoll(this);
            break;
        case 25:
            MapBuildLoop(this);
        }
    switchD_1000c64cd_caseD_1:
        uVar2 = field_8448;
        if (uVar2 == 45) {
            if (field_54785 == false) {
                pPVar9 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
                    (shared_ptr<jstring::PixfontGeneric>*)field_1104208);
                pPVar10 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
                    (shared_ptr<jstring::PixfontGeneric>*)field_1104224);
                TitleScreen::Loop((GameShell*)this, pPVar8, pPVar9, pPVar10);
            }
        } else if (uVar2 == 40) {
            LoginPoll(this);
        } else if (uVar2 == 30) {
            GameLoop(this);
        }
        piVar11 = (int*)std::unique_ptr<DiscordMain, std::default_delete<DiscordMain>>::operator->(
            (unique_ptr<DiscordMain, std::default_delete<DiscordMain>>*)&field_8400);
        DiscordMain::MainLogic(piVar11);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000c6d30, 240 bytes, placed by class name
    // Client::ExecuteScheduledFunctions()
    void Client::ExecuteScheduledFunctions() {
        bool bVar1;
        ulonglong uVar3;
        long lVar4;
        long lVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar6;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base local_78[16];
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 local_50;
        undefined8 local_48;
        undefined8 uStack_40;

        uVar3 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=((eastl*)&local_48, local_78, extraout_RDX);
        if (bVar1) {
            do {
                lVar5 = local_48.HeapBeginPtr();
                if (uVar3 < *(ulong*)(lVar5 + 16)) {
                LAB_1000c6dab:
                    eastl::hashtable_iterator<eastl::pair<long long const, Client::ScheduledFunction>, false, false>::
                    operator++((hashtable_iterator<eastl::pair<long long const, Client::ScheduledFunction>, false,
                                                   false>*)&local_48);
                    phVar6 = extraout_RDX_00;
                } else {
                    lVar5 = local_48.HeapBeginPtr();
                    if (std::function<bool()>::operator()((function<bool()>*)(lVar5 + 32)) != '\0') {
                        lVar5 = local_48.HeapBeginPtr();
                        lVar5 = *(long*)(lVar5 + 24);
                        lVar4 = local_48.HeapBeginPtr();
                        *(ulonglong*)(lVar4 + 16) = lVar5 + uVar3;
                        goto LAB_1000c6dab;
                    }
                    new (&local_58)
                        eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                            (hashtable_iterator*)&local_48);
                    eastl::hashtable<long long, eastl::pair<long long const, Client::ScheduledFunction>,
                                     eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, Client::ScheduledFunction>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::erase(&local_68, &field_7306736, local_58, local_50);
                    local_48 = local_68;
                    uStack_40 = uStack_60;
                    phVar6 = extraout_RDX_01;
                }
                bVar1 = eastl::operator!=((eastl*)&local_48, local_78, phVar6);
            } while (bVar1);
        }
    }

    // 0x1000c6e20, 48 bytes, placed by class name
    // Client::ServiceNetClient()
    void Client::ServiceNetClient() {
        undefined8* puVar1;

        if (field_8448 != 1000) {
            puVar1 =
                (undefined8*)std::unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>::operator->(
                    (unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>*)&field_2508480);
            (**(code**)*puVar1)(puVar1);
        }
    }

    // 0x1000c6e70, 16 bytes, placed by class name
    // Client::PcmPlayerService()
    void Client::PcmPlayerService() {}

    // 0x1000c6f70, 112 bytes, placed by class name
    // Client::ConstructRentalJavConfigUrl(char const*, unsigned short) const
    Client* Client::ConstructRentalJavConfigUrl(char* param_1, ushort param_2) {
        undefined8 uVar1;
        int in_ECX;
        undefined6 in_register_00000012;

        new (this) eastl::string();
        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string::append_sprintf((char*)this, "%s://%s:%i/jav_config.ws", CONCAT62(in_register_00000012, param_2),
                                      uVar1, (ulong)(uint)(in_ECX + *(int*)(param_1 + 54780)));
        return this;
    }

    // 0x1000c6fe0, 672 bytes, placed by class name
    // Client::SetMainState(MainState)
    void Client::SetMainState(uint param_2) {
        uint uVar1;
        undefined8 in_RAX;
        Client* this_00;
        long lVar2;
        undefined8 uVar3;
        OSClientConsole* this_01;
        int iVar4;
        bool bVar5;
        Js5* pJVar6;
        Js5* pJVar7;
        undefined4 uVar8;

        uVar8 = (undefined4)((ulong)in_RAX >> 32);
        uVar1 = field_8448;
        if (uVar1 == param_2) {
            return;
        }
        field_8448 = param_2;
        this_00 = this;
        if (field_54760 != '\0') {
            this_00 = (Client*)logger::default_logger();
            uVar3 = CONCAT44(uVar8, param_2);
            logger::Logger::Log(
                this_00, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 1207,
                "Mainstate: %i", uVar3);
            uVar8 = (undefined4)((ulong)uVar3 >> 32);
        }
        if (uVar1 == 2) {
            this_00 = this;
            AutoSingleton<ShaderThreadPoolSingleton>::~AutoSingleton();
        }
        if ((param_2 == 40) || (param_2 == 20)) {
            lVar2 = this_00->CurrentTimeMillis();
            field_55032 = lVar2;
            this_00 = (Client*)&field_1104120;
            this_00->MarkLoginStarted(param_2);
            if (param_2 != 20) {
                this_00 = this;
                DeriveTOTPMode(this, false);
            }
        }
        if (field_8448 == 25) {
            field_53252 = 0;
            *(mach_header**)&field_53236 = &__mh_execute_header;
            *(mach_header**)&field_53244 = &__mh_execute_header;
        }
        switch (param_2) {
        case 0:
        case 2:
        case 5:
        case 10:
            goto switchD_1000c70b9_caseD_0;
        case 1:
        case 3:
        case 4:
        case 6:
        case 7:
        case 8:
        case 9:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 46:
        case 47:
        case 48:
        case 49:
        switchD_1000c70b9_caseD_1:
            TitleScreen::Close();
            goto joined_r0x0001000c713f;
        case 11:
            pJVar6 = (Js5*)m_pSprites;
            pJVar7 = (Js5*)field_54472;
            bVar5 = false;
            iVar4 = 4;
            break;
        case 20:
            iVar4 = (uint)(uVar1 == 11) << 2;
            pJVar6 = (Js5*)m_pSprites;
            pJVar7 = (Js5*)field_54472;
            bVar5 = false;
            break;
        case 45:
            lVar2 = this_00->CurrentTimeMillis();
            field_55032 = lVar2;
            (&field_1104120, 45)->MarkLoginStarted();
            TitleScreen::OpenInBackgroundMode();
            goto joined_r0x0001000c713f;
        case 50:
            goto switchD_1000c70b9_caseD_32;
        default:
            if (param_2 != 1000)
                goto switchD_1000c70b9_caseD_1;
            goto switchD_1000c70b9_caseD_0;
        }
    LAB_1000c70d0:
        TitleScreen::Open(pJVar7, pJVar6, bVar5, iVar4);
    joined_r0x0001000c713f:
        if (param_2 != 30) {
            if (param_2 != 10) {
                return;
            }
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 1270,
                "Switching to STATE_TITLESCREEN from state: %i", CONCAT44(uVar8, uVar1));
        }
        this_01 = (OSClientConsole*)std::unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>::operator->(
            (unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>*)&field_7306800);
        this_01->Reset();
    switchD_1000c70b9_caseD_32:
        return;
    switchD_1000c70b9_caseD_0:
        pJVar6 = (Js5*)m_pSprites;
        pJVar7 = (Js5*)field_54472;
        bVar5 = true;
        iVar4 = 0;
        goto LAB_1000c70d0;
    }

    // 0x1000c7280, 9088 bytes, placed by class name
    // Client::MainLoad()
    void Client::MainLoad() {
        StockPlayerOffer** ppSVar1;
        StockPlayerOffer* pSVar2;
        StockPlayerOffer* pSVar3;
        Js5* pJVar4;
        Js5* pJVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        shared_ptr sVar8;
        shared_ptr sVar9;
        shared_ptr sVar10;
        Client* pCVar11;
        bool bVar12;
        char cVar13;
        ushort uVar14;
        int iVar15;
        int iVar16;
        int iVar17;
        int iVar18;
        int iVar19;
        int iVar20;
        int iVar21;
        int iVar22;
        int iVar23;
        int iVar24;
        int iVar25;
        int iVar26;
        int iVar27;
        int iVar28;
        int iVar29;
        int iVar30;
        int iVar31;
        int iVar32;
        int iVar33;
        int iVar34;
        NXTPix3D* pNVar35;
        shared_ptr<ApplicationContext>* this_00;
        Option<float>* this_01;
        StockPlayerOffer* pSVar36;
        Js5* pJVar37;
        shared_ptr<midi2::MidiPlayerMainThread>* this_02;
        long* plVar38;
        long* plVar39;
        Array* pAVar40;
        ulong uVar41;
        ulong uVar42;
        OSRenderCore_LogicThread_RSeven* pOVar43;
        undefined* puVar44;
        Worldmap* this_03;
        DeviceOptions* pDVar45;
        GameWorld* pGVar46;
        undefined8 uVar47;
        Minimap* pMVar48;
        shared_ptr* psVar49;
        shared_ptr<graphics::Pix32>* this_04;
        Pix32* this_05;
        Array<graphics::Pix8, eastl::allocator>* this_06;
        Pix8* this_07;
        Minimenu* this_08;
        PixfontGeneric* pPVar50;
        GameOptions* this_09;
        long lVar51;
        Js5ResourceProvider* pJVar52;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_10;
        uint uVar53;
        BucketAllocatorSTL* in_RSI;
        char* pcVar54;
        FontLoader* this_11;
        undefined1* puVar55;
        undefined4 in_stack_fffffffffffffe48;
        undefined4 uVar56;
        undefined4 in_stack_fffffffffffffe4c;
        undefined4 uVar57;
        undefined4 in_stack_fffffffffffffe50;
        undefined4 uVar58;
        undefined4 in_stack_fffffffffffffe54;
        undefined4 uVar59;
        array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul> local_188[48];
        undefined8 local_158;
        undefined8 uStack_150;
        undefined8 local_148;
        undefined8 uStack_140;
        undefined8 local_138;
        undefined8 uStack_130;
        shared_ptr<dash3d::Decor> local_120[16];
        shared_ptr<dash3d::Decor> local_110[16];
        shared_ptr<dash3d::Decor> local_100[16];
        shared_ptr<dash3d::Decor> local_f0[16];
        shared_ptr* local_e0;
        undefined4 local_d4;
        int local_d0[4];
        shared_ptr* local_c0;
        Client* local_b8;
        shared_ptr* local_b0;
        FontLoader local_a8;
        FontLoader local_88[2];
        float local_50[8];

        switch (field_54956) {
        case 0:
            local_50[0] = 5.60519e-45;
            local_a8.field_0._0_4_ = 104;
            local_d0[0] = 104;
            pDVar45 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            local_d4 = pDVar45->GetDrawDistance();
            pNVar35 = (NXTPix3D*)(*(code*)field_144->field_0[1])();
            std::make_unique<dash3d::world, int, int, int, int, Array<int, eastl::allocator>&, dash3d::NXTPix3D&>(
                (int*)local_88, (int*)local_50, (int*)&local_a8, local_d0, (Array*)&local_d4, pNVar35);
            std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator=(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184, (unique_ptr*)local_88);
            local_88->~unique_ptr();
            (field_7164656, field_144)->SetPixToolkit();
            (&field_7164760, field_144)->SetPixToolkit();
            std::make_unique<minimap::Minimap>();
            std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator=(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&field_8152,
                (unique_ptr*)local_88);
            local_88->~unique_ptr();
            pMVar48 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&field_8152);
            pMVar48->ResizeBuffer(4);
            eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                     (basic_string*)&constants::text::mainload0);
            TitleScreen::m_loadPos = 5;
            dash3d::Pix3D::InitTables();
            dash3d::ModelUnlitImpl::Init();
            field_54956 = 1;
            break;
        case 1:
            eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                     (basic_string*)&constants::text::mainload20);
            TitleScreen::m_loadPos = 10;
            field_54956 = 2;
            break;
        case 2:
            this_00 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
            this_01 = (Option<float>*)shared_ptr<ApplicationContext>::operator->(this_00);
            bVar12 = this_01->IsValidValue(in_RSI);
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 0, 0, 1, bVar12, 0);
            field_54392 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 1, 0, 1, bVar12, 0);
            field_54400 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 2, 1, 0, bVar12, 0);
            field_54408 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 3, 0, 1, bVar12, 0);
            field_54416 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 4, 0, 1, bVar12, 0);
            m_pJagFx = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 5, 1, 1, bVar12, 0);
            field_54432 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 6, 1, 1, bVar12, 0);
            m_pMidi = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 7, 0, 1, bVar12, 0);
            field_54448 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 8, 0, 1, bVar12, 0);
            m_pSprites = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 9, 0, 1, bVar12, 0);
            field_54464 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 10, 0, 1, bVar12, 0);
            field_54472 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 11, 0, 1, bVar12, 0);
            field_54480 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 12, 0, 1, bVar12, 0);
            m_pClientScripts = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 13, 1, 0, bVar12, 0);
            field_54496 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 14, 0, 1, bVar12, 0);
            field_54504 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 15, 0, 1, bVar12, 0);
            field_54512 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 17, 1, 1, bVar12, 0);
            field_54544 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 18, 0, 1, bVar12, 0);
            field_54528 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 19, 0, 1, bVar12, 0);
            field_54520 = pSVar36;
            pSVar36 = (StockPlayerOffer*)OpenJs5(this, 20, 0, 1, bVar12, 0);
            field_54536 = pSVar36;
            pJVar37 = (Js5*)OpenJs5(this, 21, 0, 1, bVar12, 1);
            field_54552 = pJVar37;
            eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                     (basic_string*)&constants::text::mainload30);
            TitleScreen::m_loadPos = 20;
            field_54956 = 3;
            break;
        case 3:
            iVar31 = field_54392->GetIndexPercentage();
            iVar32 = field_54400->GetIndexPercentage();
            iVar33 = field_54408->GetIndexPercentage();
            iVar34 = field_54416->GetIndexPercentage();
            iVar15 = m_pJagFx->GetIndexPercentage();
            iVar16 = field_54432->GetIndexPercentage();
            iVar17 = m_pMidi->GetIndexPercentage();
            iVar18 = field_54448->GetIndexPercentage();
            iVar19 = m_pSprites->GetIndexPercentage();
            iVar20 = field_54464->GetIndexPercentage();
            iVar21 = field_54472->GetIndexPercentage();
            iVar22 = field_54480->GetIndexPercentage();
            iVar23 = m_pClientScripts->GetIndexPercentage();
            iVar24 = field_54496->GetIndexPercentage();
            iVar25 = field_54504->GetIndexPercentage();
            iVar26 = field_54512->GetIndexPercentage();
            iVar27 = field_54520->GetIndexPercentage();
            iVar28 = field_54528->GetIndexPercentage();
            iVar29 = field_54536->GetIndexPercentage();
            iVar30 = field_54552->GetIndexPercentage();
            cVar13 = field_54544->GetIndexIsReady();
            uVar53 = 0;
            if (cVar13 != '\0') {
                puVar44 = (undefined*)field_54544->RequestFullDownload();
                uVar53 = (uint)(puVar44 == DataStatus::READY);
            }
            iVar31 = iVar30 / 100 + iVar29 / 100 + iVar28 / 100 + iVar27 / 100 + iVar26 / 50 + iVar25 / 50 +
                     iVar24 / 50 + iVar23 / 50 + iVar22 / 50 + iVar21 / 50 + iVar20 / 50 + iVar19 / 50 +
                     (iVar18 * 55) / 100 + iVar17 / 50 + iVar16 / 25 + (iVar15 * 6) / 100 + iVar34 / 50 + iVar33 / 50 +
                     iVar32 / 25 + iVar31 / 25 + uVar53;
            if (iVar31 != 0) {
                if (iVar31 == 100) {
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (local_88) eastl::string("Animations", local_50);
                    local_88->~basic_string();
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (local_88) eastl::string("Skeletons", local_50);
                    local_88->~basic_string();
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (local_88) eastl::string("Sound FX", local_50);
                    local_88->~basic_string();
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (local_88) eastl::string("Maps", local_50);
                    local_88->~basic_string();
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (local_88) eastl::string("Music Tracks", local_50);
                    local_88->~basic_string();
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (local_88) eastl::string("Models", local_50);
                    local_88->~basic_string();
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (local_88) eastl::string("Sprites", local_50);
                    local_88->~basic_string();
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (local_88) eastl::string("Music Jingles", local_50);
                    local_88->~basic_string();
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (local_88) eastl::string("Music Samples", local_50);
                    local_88->~basic_string();
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (local_88) eastl::string("Music Patches", local_50);
                    local_88->~basic_string();
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (local_88) eastl::string("World Map", local_50);
                    local_88->~basic_string();
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (local_88) eastl::string("World Map Geography", local_50);
                    local_88->~basic_string();
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (local_88) eastl::string("World Map Ground", local_50);
                    local_88->~basic_string();
                    (&field_54980, (Js5*)field_54544)->Unpack();
                    eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                             (basic_string*)&constants::text::mainload40b);
                    TitleScreen::m_loadPos = 30;
                    field_54956 = 4;
                } else {
                    local_a8.to_string(iVar31);
                    eastl::operator+((basic_string*)local_50, (basic_string*)&constants::text::mainload40);
                    eastl::operator+((eastl*)local_88, (basic_string*)local_50, (value_type*)&DAT_100e376e0);
                    eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, (basic_string*)local_88);
                    local_88->~basic_string();
                    local_50->~basic_string();
                    local_a8.~basic_string();
                    TitleScreen::m_loadPos = 30;
                }
            }
            break;
        case 4:
            sound::PCMPlayer::Init(22050, m_lowMem == false);
            local_88->GetPlayer(0, 2048);
            local_c0 = (shared_ptr*)&field_2508744;
            std::unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>::operator=(
                (unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>*)local_c0,
                (unique_ptr*)local_88);
            local_88->~unique_ptr();
            make_shared<sound::Mixer>((jag*)local_88);
            shared_ptr<sound::MixerMainThread>::operator=((shared_ptr<sound::MixerMainThread>*)&field_54184,
                                                          (shared_ptr*)local_88);
            local_b8 = this;
            make_shared<sound::Mixer>((jag*)local_50);
            lVar51 = local_50->end();
            plVar39 = (long*)(lVar51 + 72);
            if (lVar51 == 0) {
                plVar39 = (long*)0;
            }
            new (&local_a8) shared_ptr<dash3d::Decor>(local_88);
            (**(code**)(*plVar39 + 8))(plVar39, &local_a8);
            local_a8.~shared_ptr();
            local_b0 = (shared_ptr*)&local_b8->field_2508688;
            uVar41 = 0;
            do {
                make_shared<midi2::MidiPlayer>((jag*)&local_a8);
                this_02 = (shared_ptr<midi2::MidiPlayerMainThread>*)
                    std::array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>::operator[](
                        (array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>*)local_b0, uVar41);
                shared_ptr<midi2::MidiPlayerMainThread>::operator=(this_02, (shared_ptr*)&local_a8);
                plVar38 = (long*)shared_ptr<midi2::MidiPlayerMainThread>::operator->(this_02);
                (**(code**)(*plVar38 + 48))(plVar38, 9, 128);
                new (local_d0) shared_ptr<dash3d::Decor>((shared_ptr*)&local_a8);
                (**(code**)(*plVar39 + 8))(plVar39, (shared_ptr<dash3d::Decor>*)local_d0);
                local_d0->~shared_ptr();
                local_a8.~shared_ptr();
                uVar41 = uVar41 + 1;
            } while (uVar41 != 3);
            plVar39 =
                (long*)std::unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>::
                operator->(
                    (unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>*)local_c0);
            new (&local_a8) shared_ptr<dash3d::Decor>(local_50);
            (**(code**)(*plVar39 + 40))(plVar39, &local_a8);
            pCVar11 = local_b8;
            local_a8.~shared_ptr();
            pSVar36 = pCVar11->field_54512;
            pSVar2 = pCVar11->m_pJagFx;
            pSVar3 = pCVar11->field_54504;
            std::array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>::array(local_188, (array*)local_b0);
            midi2::MidiManager::Init(pSVar36, pSVar3, pSVar2, local_188);
            local_188->~array();
            local_d0[0] = 22050;
            make_shared<sound::Decimator, int, int&>((jag*)&local_a8, local_d0, &sound::PCMPlayer::m_frequency);
            shared_ptr<sound::Decimator>::operator=((shared_ptr<sound::Decimator>*)&pCVar11->field_54200,
                                                    (shared_ptr*)&local_a8);
            local_a8.~shared_ptr();
            eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                     (basic_string*)&constants::text::mainload45);
            TitleScreen::m_loadPos = 35;
            pCVar11->field_54956 = 5;
            std::make_unique<FontLoader, jagex3::Js5*&, jagex3::Js5*&>(&local_a8.field_0, (Js5**)&pCVar11->m_pSprites);
            std::unique_ptr<FontLoader, std::default_delete<FontLoader>>::operator=(
                (unique_ptr<FontLoader, std::default_delete<FontLoader>>*)&pCVar11->field_1104200,
                (unique_ptr*)&local_a8);
            local_a8.~unique_ptr();
            local_50->~shared_ptr();
            local_88->~shared_ptr();
            break;
        case 5:
            pAVar40 = (Array*)std::unique_ptr<FontLoader, std::default_delete<FontLoader>>::operator->(
                (unique_ptr<FontLoader, std::default_delete<FontLoader>>*)&field_1104200);
            local_88->LoadFonts(pAVar40);
            puVar55 = field_19128;
            eastl::hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>,
                            eastl::allocator,
                            false>::operator=((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash,
                                                        eastl::equal_to<Font>, eastl::allocator, false>*)puVar55,
                                              (hash_map*)local_88);
            local_88->~hash_map();
            uVar41 = puVar55->size();
            uVar42 = AllFonts.end();
            if (uVar41 < uVar42) {
                iVar31 = puVar55->size();
                local_a8.to_string((iVar31 * 100) / 6);
                eastl::operator+((basic_string*)local_50, (basic_string*)&constants::text::mainload50);
                eastl::operator+((eastl*)local_88, (basic_string*)local_50, (value_type*)&DAT_100e376e0);
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, (basic_string*)local_88);
                local_88->~basic_string();
                local_50->~basic_string();
                local_a8.~basic_string();
                TitleScreen::m_loadPos = 40;
            } else {
                local_88[0].field_0._0_4_ = 0;
                psVar49 = (shared_ptr*)eastl::hash_map<
                    Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator,
                    false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash,
                                                 eastl::equal_to<Font>, eastl::allocator, false>*)puVar55,
                                       (Font*)local_88);
                shared_ptr<jstring::PixfontGeneric>::operator=((shared_ptr<jstring::PixfontGeneric>*)field_1104208,
                                                               psVar49);
                local_88[0].field_0._0_4_ = 1;
                psVar49 = (shared_ptr*)eastl::hash_map<
                    Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator,
                    false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash,
                                                 eastl::equal_to<Font>, eastl::allocator, false>*)puVar55,
                                       (Font*)local_88);
                shared_ptr<jstring::PixfontGeneric>::operator=((shared_ptr<jstring::PixfontGeneric>*)field_1104224,
                                                               psVar49);
                local_88[0].field_0._0_4_ = 2;
                psVar49 = (shared_ptr*)eastl::hash_map<
                    Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator,
                    false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash,
                                                 eastl::equal_to<Font>, eastl::allocator, false>*)puVar55,
                                       (Font*)local_88);
                shared_ptr<jstring::PixfontGeneric>::operator=((shared_ptr<jstring::PixfontGeneric>*)field_1104240,
                                                               psVar49);
                local_88[0].field_0._0_4_ = 3;
                psVar49 = (shared_ptr*)eastl::hash_map<
                    Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator,
                    false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash,
                                                 eastl::equal_to<Font>, eastl::allocator, false>*)puVar55,
                                       (Font*)local_88);
                shared_ptr<jstring::PixfontGeneric>::operator=((shared_ptr<jstring::PixfontGeneric>*)field_1104256,
                                                               psVar49);
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                         (basic_string*)&constants::text::mainload50b);
                TitleScreen::m_loadPos = 40;
                field_54956 = 6;
            }
            break;
        case 6:
            iVar31 = TitleScreen::Ready((Js5*)field_54472, (Js5*)m_pSprites);
            iVar32 = TitleScreen::ReadyMax((Js5*)m_pSprites);
            if (iVar31 < iVar32) {
                local_a8.to_string((iVar31 * 100) / iVar32);
                eastl::operator+((basic_string*)local_50, (basic_string*)&constants::text::mainload60);
                eastl::operator+((eastl*)local_88, (basic_string*)local_50, (value_type*)&DAT_100e376e0);
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, (basic_string*)local_88);
                local_88->~basic_string();
                local_50->~basic_string();
                local_a8.~basic_string();
                TitleScreen::m_loadPos = 50;
            } else {
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                         (basic_string*)&constants::text::mainload60b);
                TitleScreen::m_loadPos = 50;
                SetMainState(this, 5);
                field_54956 = 7;
            }
            break;
        case 7:
            ppSVar1 = &field_54408;
            puVar44 = (undefined*)field_54408->RequestFullDownload();
            if (puVar44 == DataStatus::READY) {
                lVar51 = field_54552->RequestFullDownload();
                if (lVar51 != 0) {
                    configdecoder::FloType::Init((Js5*)field_54408);
                    configdecoder::FluType::Init((Js5*)field_54408);
                    configdecoder::IdkType::Init((Js5*)field_54408, (Js5*)field_54448);
                    configdecoder::LocType::Init((Js5*)field_54408, (Js5*)field_54448, m_lowMem);
                    configdecoder::NpcType::Init((Js5*)field_54408, (Js5*)field_54448);
                    configdecoder::StructType::Init((Js5*)field_54408);
                    pJVar37 = (Js5*)field_54408;
                    pJVar4 = (Js5*)field_54448;
                    bVar12 = field_8424;
                    local_b0 = (shared_ptr*)ppSVar1;
                    pPVar50 = (PixfontGeneric*)field_1104208->end();
                    configdecoder::ObjType::Init(pJVar37, pJVar4, bVar12, pPVar50);
                    configdecoder::SeqType::Init((Js5*)field_54408, (Js5*)field_54392, (Js5*)field_54400);
                    configdecoder::SpotType::Init((Js5*)field_54408, (Js5*)field_54448);
                    configdecoder::VarBitType::Init((Js5*)field_54408);
                    configdecoder::VarpType::Init((Js5*)field_54408);
                    rs2lib::IfType::Init((Js5*)field_54416, (Js5*)field_54448, (Js5*)m_pSprites, (Js5*)field_54496);
                    configdecoder::InvType::Init((Js5*)field_54408);
                    configdecoder::EnumType::Init((Js5*)field_54408);
                    configdecoder::VarcType::Init((Js5*)field_54408);
                    configdecoder::VeccType::Init((Js5*)field_54408);
                    configdecoder::ParamType::Init((Js5*)field_54408);
                    configdecoder::DBRowType::Init((Js5*)field_54408);
                    configdecoder::DBTableType::Init((Js5*)field_54408);
                    game::BaseVarType::Initialise();
                    ScriptVarType::Initialise();
                    std::make_unique<DBTableIndexCache, jagex3::Js5*&>(&local_88[0].field_0);
                    std::unique_ptr<DBTableIndexCache, std::default_delete<DBTableIndexCache>>::operator=(
                        (unique_ptr<DBTableIndexCache, std::default_delete<DBTableIndexCache>>*)&field_54560,
                        (unique_ptr*)local_88);
                    local_88->~unique_ptr();
                    pJVar52 = (Js5ResourceProvider*)
                        std::unique_ptr<Js5ResourceProvider, std::default_delete<Js5ResourceProvider>>::operator*(
                            (unique_ptr<Js5ResourceProvider, std::default_delete<Js5ResourceProvider>>*)&field_2508488);
                    make_shared<configdecoder::OldscapeVarTypeList, ModeGame_const*&, game::Js5ConfigGroup_const*&,
                                Language_const*&, Js5ResourceProvider&, jagex3::Js5*&>(
                        (jag*)local_88, (ModeGame**)&field_8440,
                        (Js5ConfigGroup**)&game::Js5ConfigGroup::VARCLANSETTINGTYPE, &field_8432, pJVar52,
                        (Js5**)local_b0);
                    shared_ptr<configdecoder::OldscapeVarTypeList>::operator=(
                        (shared_ptr<configdecoder::OldscapeVarTypeList>*)&field_52496, (shared_ptr*)local_88);
                    local_88->~shared_ptr();
                    pJVar52 = (Js5ResourceProvider*)
                        std::unique_ptr<Js5ResourceProvider, std::default_delete<Js5ResourceProvider>>::operator*(
                            (unique_ptr<Js5ResourceProvider, std::default_delete<Js5ResourceProvider>>*)&field_2508488);
                    make_shared<configdecoder::OldscapeVarTypeList, ModeGame_const*&, game::Js5ConfigGroup_const*&,
                                Language_const*&, Js5ResourceProvider&, jagex3::Js5*&>(
                        (jag*)local_88, (ModeGame**)&field_8440, (Js5ConfigGroup**)&game::Js5ConfigGroup::VARCLANTYPE,
                        &field_8432, pJVar52, (Js5**)local_b0);
                    shared_ptr<configdecoder::OldscapeVarTypeList>::operator=(
                        (shared_ptr<configdecoder::OldscapeVarTypeList>*)&field_52512, (shared_ptr*)local_88);
                    local_88->~shared_ptr();
                    std::make_unique<ClientVarValues>();
                    std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator=(
                        (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)&field_52488,
                        (unique_ptr*)local_88);
                    local_88->~unique_ptr();
                    configdecoder::HitmarkType::Init((Js5*)field_54408, (Js5*)m_pSprites, (Js5*)field_54496);
                    configdecoder::HeadbarType::Init((Js5*)field_54408, (Js5*)m_pSprites);
                    configdecoder::MapElementType::Init((Js5*)field_54408, (Js5*)m_pSprites);
                    eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                             (basic_string*)&constants::text::mainload70b);
                    TitleScreen::m_loadPos = 60;
                    field_54956 = 8;
                    return;
                }
                iVar31 = (*ppSVar1)->GetDataPercent();
                local_a8.to_string(iVar31 / 6 + 80);
                eastl::operator+((basic_string*)local_50, (basic_string*)&constants::text::mainload70);
                eastl::operator+((eastl*)local_88, (basic_string*)local_50, (value_type*)&DAT_100e376e0);
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, (basic_string*)local_88);
            } else {
                iVar31 = (*ppSVar1)->GetDataPercent();
                local_a8.to_string(iVar31 / 5);
                eastl::operator+((basic_string*)local_50, (basic_string*)&constants::text::mainload70);
                eastl::operator+((eastl*)local_88, (basic_string*)local_50, (value_type*)&DAT_100e376e0);
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, (basic_string*)local_88);
            }
            local_88->~basic_string();
            local_50->~basic_string();
            local_a8.~basic_string();
            TitleScreen::m_loadPos = 60;
            break;
        case 8:
            local_b0 = (shared_ptr*)field_1115696;
            bVar12 = operator==(local_b0, (_func_decltype_nullptr*)0);
            iVar31 = 1;
            if (bVar12) {
                iVar31 = 0;
                local_88->Makepix8Array((Js5*)m_pSprites, field_54992, 0);
                cVar13 = local_88->empty();
                if (cVar13 == '\0') {
                    make_shared<Array<graphics::Pix8, eastl::allocator>, Array<graphics::Pix8, eastl::allocator>>(
                        (jag*)local_50, (Array*)local_88);
                    shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator=(
                        (shared_ptr<Array<graphics::Pix8, eastl::allocator>>*)local_b0, (shared_ptr*)local_50);
                    local_50->~shared_ptr();
                }
                local_88->~Array();
            }
            cVar13 = (&field_1115712)->empty();
            if (cVar13 == '\0') {
                iVar31 = iVar31 + 1;
            } else {
                local_88->Makepix32Array((Js5*)m_pSprites, field_54996, 0);
                Array<graphics::Pix32, eastl::allocator>::operator=(
                    (Array<graphics::Pix32, eastl::allocator>*)&field_1115712, (Array*)local_88);
                local_88->~Array();
            }
            cVar13 = (&field_1115736)->empty();
            if (cVar13 == '\0') {
                iVar31 = iVar31 + 1;
            } else {
                local_88->Makepix32Array((Js5*)m_pSprites, field_55000, 0);
                Array<graphics::Pix32, eastl::allocator>::operator=(
                    (Array<graphics::Pix32, eastl::allocator>*)&field_1115736, (Array*)local_88);
                local_88->~Array();
            }
            cVar13 = (&field_1115760)->empty();
            if (cVar13 == '\0') {
                iVar31 = iVar31 + 1;
            } else {
                local_88->Makepix32Array((Js5*)m_pSprites, field_55004, 0);
                Array<graphics::Pix32, eastl::allocator>::operator=(
                    (Array<graphics::Pix32, eastl::allocator>*)&field_1115760, (Array*)local_88);
                local_88->~Array();
            }
            puVar55 = field_1115784;
            bVar12 = operator==((shared_ptr*)puVar55, (_func_decltype_nullptr*)0);
            local_c0 = (shared_ptr*)puVar55;
            if (bVar12) {
                local_88->Makepix32Array((Js5*)m_pSprites, field_55012, 0);
                cVar13 = local_88->empty();
                if (cVar13 == '\0') {
                    make_shared<Array<graphics::Pix32, eastl::allocator>, Array<graphics::Pix32, eastl::allocator>>(
                        (jag*)local_50, (Array*)local_88);
                    shared_ptr<Array<graphics::Pix32, eastl::allocator>>::operator=(
                        (shared_ptr<Array<graphics::Pix32, eastl::allocator>>*)puVar55, (shared_ptr*)local_50);
                    local_50->~shared_ptr();
                }
                local_88->~Array();
            } else {
                iVar31 = iVar31 + 1;
            }
            cVar13 = (&field_1115800)->empty();
            if (cVar13 == '\0') {
                iVar31 = iVar31 + 1;
            } else {
                local_88->Makepix8Array((Js5*)m_pSprites, field_55020, 0);
                Array<graphics::Pix8, eastl::allocator>::operator=(
                    (Array<graphics::Pix8, eastl::allocator>*)&field_1115800, (Array*)local_88);
                local_88->~Array();
            }
            puVar55 = field_1115824;
            bVar12 = operator==((shared_ptr*)puVar55, (_func_decltype_nullptr*)0);
            local_e0 = (shared_ptr*)puVar55;
            if (bVar12) {
                local_88->Makepix8Array((Js5*)m_pSprites, field_55024, 0);
                cVar13 = local_88->empty();
                if (cVar13 == '\0') {
                    make_shared<Array<graphics::Pix8, eastl::allocator>, Array<graphics::Pix8, eastl::allocator>>(
                        (jag*)local_50, (Array*)local_88);
                    shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator=(
                        (shared_ptr<Array<graphics::Pix8, eastl::allocator>>*)puVar55, (shared_ptr*)local_50);
                    local_50->~shared_ptr();
                }
                local_88->~Array();
            } else {
                iVar31 = iVar31 + 1;
            }
            puVar55 = &field_8152;
            uVar47 = std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)puVar55);
            shared_ptr<dash3d::Decor>::shared_ptr(local_120, local_b0);
            local_138 = *(undefined8*)&field_55012;
            uStack_130._0_4_ = field_55020;
            uStack_130._4_4_ = field_55024;
            local_148._0_4_ = field_54996;
            local_148._4_4_ = field_55000;
            uStack_140 = *(undefined8*)&field_55004;
            uVar6 = field_54980;
            uVar7 = *(undefined8*)&field_54988;
            local_158._0_4_ = (undefined4)uVar6;
            local_158._4_4_ = (undefined4)((ulong)uVar6 >> 32);
            uStack_150._0_4_ = (undefined4)uVar7;
            uStack_150._4_4_ = (undefined4)((ulong)uVar7 >> 32);
            uVar56 = (undefined4)local_158;
            uVar57 = local_158._4_4_;
            uVar58 = (undefined4)uStack_150;
            uVar59 = uStack_150._4_4_;
            local_158 = uVar6;
            uStack_150 = uVar7;
            local_b8 = this;
            iVar32 = minimap::Minimap::TryLoadResources(uVar47, local_120, field_144, m_pSprites);
            local_120->~shared_ptr();
            if (iVar32 + iVar31 < 11) {
                local_a8.to_string(((iVar32 + iVar31) * 100) / 11);
                eastl::operator+((basic_string*)local_50, (basic_string*)&constants::text::mainload80);
                eastl::operator+((eastl*)local_88, (basic_string*)local_50, (value_type*)&DAT_100e376e0);
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, (basic_string*)local_88);
                local_88->~basic_string();
                local_50->~basic_string();
                local_a8.~basic_string();
                TitleScreen::m_loadPos = 70;
            } else {
                pMVar48 =
                    (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                        (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)puVar55);
                pCVar11 = local_b8;
                local_88[0].field_0._0_4_ = 0;
                psVar49 = (shared_ptr*)eastl::hash_map<
                    Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator,
                    false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash,
                                                 eastl::equal_to<Font>, eastl::allocator, false>*)local_b8->field_19128,
                                       (Font*)local_88);
                shared_ptr<dash3d::Decor>::shared_ptr(local_110, psVar49);
                sVar9._4_4_ = uVar57;
                sVar9._0_4_ = uVar56;
                sVar9.field_8._0_4_ = uVar58;
                sVar9.field_8._4_4_ = uVar59;
                pMVar48->SetDotStyles(sVar9);
                local_110->~shared_ptr();
                pMVar48 =
                    (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                        (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)puVar55);
                this_04 = (shared_ptr<graphics::Pix32>*)pMVar48->GetMapEdgeArrow();
                this_05 = (Pix32*)shared_ptr<graphics::Pix32>::operator->(this_04);
                this_05->Untrim();
                shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator=(
                    (shared_ptr<Array<graphics::Pix8, eastl::allocator>>*)&jstring::PixfontGeneric::m_inlineImages,
                    local_e0);
                iVar31 = (&jag::math::g_Rand)->Rand(21);
                iVar32 = (&jag::math::g_Rand)->Rand(21);
                iVar33 = (&jag::math::g_Rand)->Rand(21);
                iVar34 = (&jag::math::g_Rand)->Rand(41);
                this_06 = (Array<graphics::Pix8, eastl::allocator>*)
                    shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator*(
                        (shared_ptr<Array<graphics::Pix8, eastl::allocator>>*)local_b0);
                this_07 = (Pix8*)Array<graphics::Pix8, eastl::allocator>::operator[](this_06, 0);
                this_07->RgbAdjust(iVar34 + iVar31 + -30, iVar34 + iVar32 + -30, iVar34 + iVar33 + -30);
                this_08 = operator_new(69080);
                pPVar50 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator*(
                    (shared_ptr<jstring::PixfontGeneric>*)pCVar11->field_1104240);
                minimenu::Minimenu::Minimenu(this_08, pPVar50, local_c0, pCVar11->field_8425,
                                             (Js5*)pCVar11->m_pSprites);
                pCVar11->field_52344 = this_08;
                this_09 =
                    (GameOptions*)
                        std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                            (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&pCVar11
                                ->field_8384);
                bVar12 = (bool)this_09->GetDrawMinimenuHeader();
                this_08->SetDrawHeader(bVar12);
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                         (basic_string*)&constants::text::mainload80b);
                TitleScreen::m_loadPos = 70;
                pCVar11->field_54956 = 9;
            }
            break;
        case 9:
            puVar44 = (undefined*)field_54464->RequestFullDownload();
            if (puVar44 == DataStatus::READY) {
                pDVar45 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->((
                            unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
                local_50[0] = (float)pDVar45->GetGamma();
                local_a8.field_0._0_4_ = 20;
                local_d0[0] = (uint)(m_lowMem == false) * 64 + 64;
                make_shared<dash3d::TextureCache, jagex3::Js5*&, jagex3::Js5*&, int, float const&, int>(
                    (jag*)local_88, (Js5**)&field_54464, (Js5**)&m_pSprites, (int*)&local_a8, (float*)local_50,
                    local_d0);
                shared_ptr<dash3d::TextureCache>::operator=((shared_ptr<dash3d::TextureCache>*)field_1120504,
                                                            (shared_ptr*)local_88);
                local_88->~shared_ptr();
                shared_ptr<dash3d::Decor>::shared_ptr(local_100, (shared_ptr*)field_1120504);
                sVar10._4_4_ = in_stack_fffffffffffffe4c;
                sVar10._0_4_ = in_stack_fffffffffffffe48;
                sVar10.field_8._0_4_ = in_stack_fffffffffffffe50;
                sVar10.field_8._4_4_ = in_stack_fffffffffffffe54;
                dash3d::Pix3D::SetTextures(sVar10);
                local_100->~shared_ptr();
                dash3d::Pix3D::InitColourTable((double)local_50[0]);
                field_54956 = 10;
                return;
            }
            eastl::operator+((eastl*)local_88, (basic_string*)&constants::text::mainload90, (value_type*)"0%");
            eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, (basic_string*)local_88);
            this_11 = local_88;
            goto LAB_1000c833c;
        case 10:
            pOVar43 = (OSRenderCore_LogicThread_RSeven*)shared_ptr<dash3d::TextureCache>::operator->(
                (shared_ptr<dash3d::TextureCache>*)field_1120504);
            iVar31 = pOVar43->RequestTextureImageDownloadPercent();
            if (99 < iVar31) {
                pOVar43 = (OSRenderCore_LogicThread_RSeven*)pOVar43->Instance();
                pOVar43->SetMaterials(field_54464);
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                         (basic_string*)&constants::text::mainload90b);
                TitleScreen::m_loadPos = 90;
                field_54956 = 11;
                return;
            }
            local_a8.to_string(iVar31);
            eastl::operator+((basic_string*)local_50, (basic_string*)&constants::text::mainload90);
            eastl::operator+((eastl*)local_88, (basic_string*)local_50, (value_type*)&DAT_100e376e0);
            eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, (basic_string*)local_88);
            local_88->~basic_string();
            local_50->~basic_string();
            this_11 = &local_a8;
        LAB_1000c833c:
            this_11->~basic_string();
            TitleScreen::m_loadPos = 90;
            break;
        case 11:
            pcVar54 = "huffman";
            cVar13 = (field_54472, "huffman", "")->RequestDownload();
            if (cVar13 == '\0') {
                eastl::operator+((eastl*)local_88, (basic_string*)&constants::text::mainload120, (value_type*)"0%");
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, (basic_string*)local_88);
                local_88->~basic_string();
                TitleScreen::m_loadPos = 94;
            } else {
                new (local_88) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(pcVar54);
                (field_54472, (shared_ptr*)local_88, "huffman")->GetFile();
                shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_88);
                std::make_unique<game::WordPack, PacketJ<Array<unsigned char, eastl::allocator>>&>((PacketJ*)local_50);
                std::unique_ptr<game::WordPack, std::default_delete<game::WordPack>>::operator=(
                    (unique_ptr<game::WordPack, std::default_delete<game::WordPack>>*)((long)&field_54172 + 4),
                    (unique_ptr*)local_50);
                local_50->~unique_ptr();
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                         (basic_string*)&constants::text::mainload120b);
                TitleScreen::m_loadPos = 94;
                field_54956 = 12;
                local_88->~shared_ptr();
            }
            break;
        case 12:
            puVar44 = (undefined*)field_54416->RequestFullDownload();
            if (puVar44 == DataStatus::READY) {
                puVar44 = (undefined*)m_pClientScripts->RequestFullDownload();
                if (puVar44 == DataStatus::READY) {
                    puVar44 = (undefined*)field_54496->RequestFullDownload();
                    if (puVar44 == DataStatus::READY) {
                        cVar13 = (m_pClientScripts, "version.dat", "")->GetDoesFileExist();
                        if (cVar13 != '\0') {
                            make_shared<PacketJ<Array<unsigned char, eastl::allocator>>>((jag*)local_88);
                            (m_pClientScripts, (shared_ptr*)local_88, "version.dat")->GetFile();
                            this_10 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_88);
                            uVar14 = this_10->g2();
                            field_54708 = (uint)uVar14;
                            local_88->~shared_ptr();
                        }
                        eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                                 (basic_string*)&constants::text::mainload130b);
                        TitleScreen::m_loadPos = 98;
                        field_54956 = 13;
                        return;
                    }
                    iVar31 = field_54496->GetDataPercent();
                    local_a8.to_string(iVar31 / 50 + 96);
                    eastl::operator+((basic_string*)local_50, (basic_string*)&constants::text::mainload130);
                    eastl::operator+((eastl*)local_88, (basic_string*)local_50, (value_type*)&DAT_100e376e0);
                    eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, (basic_string*)local_88);
                } else {
                    iVar31 = m_pClientScripts->GetDataPercent();
                    local_a8.to_string(iVar31 / 6 + 80);
                    eastl::operator+((basic_string*)local_50, (basic_string*)&constants::text::mainload130);
                    eastl::operator+((eastl*)local_88, (basic_string*)local_50, (value_type*)&DAT_100e376e0);
                    eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, (basic_string*)local_88);
                }
            } else {
                iVar31 = field_54416->GetDataPercent();
                local_a8.to_string((iVar31 << 2) / 5);
                eastl::operator+((basic_string*)local_50, (basic_string*)&constants::text::mainload130);
                eastl::operator+((eastl*)local_88, (basic_string*)local_50, (value_type*)&DAT_100e376e0);
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, (basic_string*)local_88);
            }
            local_88->~basic_string();
            local_50->~basic_string();
            local_a8.~basic_string();
            TitleScreen::m_loadPos = 96;
            break;
        case 13:
            TitleScreen::m_loadPos = 100;
            cVar13 = (field_54520, "details")->RequestGroupDownload();
            if (cVar13 == '\0') {
                iVar31 = (field_54520, "details")->GetGroupLoadPercentage();
                local_a8.to_string(iVar31 / 10);
                eastl::operator+((basic_string*)local_50, (basic_string*)&constants::text::mainload140);
                eastl::operator+((eastl*)local_88, (basic_string*)local_50, (value_type*)&DAT_100e376e0);
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString, (basic_string*)local_88);
                local_88->~basic_string();
                local_50->~basic_string();
                local_a8.~basic_string();
            } else {
                if (m_pWorldmap == (Worldmap*)0) {
                    this_03 = operator_new(808);
                    ___bzero(this_03, 808);
                    worldmap::Worldmap::Worldmap(this_03);
                    m_pWorldmap = this_03;
                    pJVar37 = (Js5*)field_54520;
                    pJVar4 = (Js5*)field_54528;
                    pJVar5 = (Js5*)field_54536;
                    shared_ptr<dash3d::Decor>::shared_ptr(local_f0, (shared_ptr*)field_1104240);
                    sVar8.field_8._0_4_ = in_stack_fffffffffffffe50;
                    sVar8._0_8_ = field_1115696;
                    sVar8.field_8._4_4_ = in_stack_fffffffffffffe54;
                    local_b8 = this;
                    this_03->Init(pJVar37, pJVar4, pJVar5, sVar8, local_f0, field_19128);
                    local_f0->~shared_ptr();
                    this = local_b8;
                }
                eastl::string::operator=((eastl::string*)&TitleScreen::m_loadString,
                                         (basic_string*)&constants::text::mainload140b);
                field_54956 = 14;
            }
            break;
        case 14:
            if (field_54168 == *(int*)(ModeWhere::LIVE + 8)) {
                puVar55 = &field_8376;
                pDVar45 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)puVar55);
                iVar31 = pDVar45->GetLastWorldId();
                if (iVar31 != 0) {
                    cVar13 = pDVar45->ListFetch();
                    if (cVar13 == '\0')
                        goto switchD_1000c72b5_default;
                    pDVar45 =
                        (DeviceOptions*)std::
                            unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->((
                                unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)puVar55);
                    iVar31 = pDVar45->GetDefaultWorldId();
                    pGVar46 = (GameWorld*)GameWorld::GetByID(iVar31);
                    if (pGVar46 == (GameWorld*)0) {
                        pDVar45 =
                            (DeviceOptions*)
                                std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::
                                operator->(
                                    (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)
                                        puVar55);
                        iVar31 = pDVar45->GetLastWorldId();
                        pGVar46 = (GameWorld*)GameWorld::GetByID(iVar31);
                        if (pGVar46 == (GameWorld*)0)
                            goto LAB_1000c85eb;
                    }
                    TitleScreen::SwitchToWorld(pGVar46);
                }
            }
        LAB_1000c85eb:
            field_54956 = 15;
        default:
        switchD_1000c72b5_default:
            if (field_54956 == 15) {
                SetMainState(this, 10);
            }
        }
    }

    // 0x1000ce540, 6336 bytes, placed by __FILE__ string
    // Client::MapBuildLoop()
    void Client::MapBuildLoop() {
        uint uVar1;
        StockPlayerOffer* pSVar2;
        Js5* pJVar3;
        bool bVar4;
        Client* pCVar5;
        Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>* this_00;
        bool bVar6;
        char cVar7;
        int iVar8;
        int iVar9;
        undefined4 uVar10;
        uint uVar11;
        long lVar12;
        ulong uVar13;
        int* piVar14;
        shared_ptr* psVar15;
        CoordMapSquare* pCVar16;
        PacketJ* pPVar17;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar18;
        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>* psVar19;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar20;
        world* pwVar21;
        CollisionMap* this_01;
        undefined8 uVar22;
        Minimap* pMVar23;
        Js5RequestKey* pJVar24;
        array<rs2lib::CoordZoneSource, 13ul>* this_02;
        CoordZoneSource* this_03;
        ulong uVar25;
        long lVar26;
        LocInfo* pLVar27;
        LocInfo* pLVar28;
        ServerConnection* pSVar29;
        ostream* poVar30;
        char* pcVar31;
        Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>* pAVar32;
        int iVar33;
        int iVar34;
        ulong uVar35;
        undefined1* puVar36;
        Client* pCVar37;
        array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>* paVar38;
        byte bVar39;
        int iVar40;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar41;
        eastl local_228[32];
        undefined1 local_208[16];
        ostream local_1f8[264];
        array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>* local_f0;
        Js5RequestKey local_e8[2];
        LocInfo local_c8;
        int local_a4;
        undefined8 local_a0;
        array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>* local_98;
        ulong local_90;
        PacketJ* local_88;
        fixed_vector* local_80;
        unique_ptr<dash3d::world, std::default_delete<dash3d::world>>* local_78;
        Array<std::array<int, 4ul>, eastl::allocator>* local_70;
        Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>* local_68;
        shared_ptr* local_60;
        Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>* local_58;
        PacketJ* local_50;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_48;
        shared_ptr* local_40;
        Client* local_38;

        PreventTimeout(this, false);
        field_53236 = 0;
        pvVar41 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_1104392;
        pAVar32 = (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)&field_1104416;
        local_68 =
            (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)&field_1104440;
        lVar12 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar41);
        local_58 = pAVar32;
        local_48 = pvVar41;
        local_38 = this;
        if (lVar12 == 0) {
            local_50 = (PacketJ*)CONCAT44(local_50._4_4_, 1);
        } else {
            local_40 = (shared_ptr*)&field_1104320;
            local_70 = (Array<std::array<int, 4ul>, eastl::allocator>*)&field_1104368;
            local_60 = (shared_ptr*)&field_1104344;
            local_50 = (PacketJ*)CONCAT44(local_50._4_4_, (int)CONCAT71((int7)((ulong)local_60 >> 8), 1));
            uVar35 = 0;
            do {
                piVar14 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1104296,
                                                                         uVar35);
                if (*piVar14 != -1) {
                    psVar15 = (shared_ptr*)
                        Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>::
                        operator[](
                            (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)
                                pvVar41,
                            uVar35);
                    bVar6 = operator==(psVar15, (_func_decltype_nullptr*)0);
                    if (bVar6) {
                        pSVar2 = local_38->field_54432;
                        iVar8 = Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>::
                        operator[](
                            (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)
                                pvVar41,
                            uVar35);
                        piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&field_1104296, uVar35);
                        pAVar32 = local_58;
                        ((shared_ptr*)pSVar2)->GetFile(iVar8, *piVar14, 0);
                        psVar15 = (shared_ptr*)
                            Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>::
                            operator[](
                                (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)
                                    pvVar41,
                                uVar35);
                        bVar6 = operator==(psVar15, (_func_decltype_nullptr*)0);
                        if (bVar6) {
                            local_38->field_53236 = local_38->field_53236 + 1;
                            local_50 = (PacketJ*)((ulong)local_50 & 18446744069414584320);
                        }
                    }
                }
                piVar14 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_40, uVar35);
                if (*piVar14 != -1) {
                    psVar15 = (shared_ptr*)Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                 eastl::allocator>::operator[](pAVar32, uVar35);
                    bVar6 = operator==(psVar15, (_func_decltype_nullptr*)0);
                    if (bVar6) {
                        pSVar2 = local_38->field_54432;
                        iVar9 = Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                      eastl::allocator>::operator[](pAVar32, uVar35);
                        piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)local_40, uVar35);
                        iVar8 = *piVar14;
                        Array<std::array<int, 4ul>, eastl::allocator>::operator[](local_70, uVar35);
                        pvVar41 = local_48;
                        pAVar32 = local_58;
                        ((shared_ptr*)pSVar2)->GetFile(iVar9, iVar8, 0);
                        psVar15 = (shared_ptr*)Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                     eastl::allocator>::operator[](pAVar32, uVar35);
                        bVar6 = operator==(psVar15, (_func_decltype_nullptr*)0);
                        if (bVar6) {
                            local_38->field_53236 = local_38->field_53236 + 1;
                            local_50 = (PacketJ*)((ulong)local_50 & 18446744069414584320);
                        }
                    }
                }
                piVar14 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_60, uVar35);
                this_00 = local_68;
                if (*piVar14 != -1) {
                    psVar15 = (shared_ptr*)Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                 eastl::allocator>::operator[](local_68, uVar35);
                    bVar6 = operator==(psVar15, (_func_decltype_nullptr*)0);
                    if (bVar6) {
                        pSVar2 = local_38->field_54432;
                        iVar8 = Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                      eastl::allocator>::operator[](this_00, uVar35);
                        piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)local_60, uVar35);
                        pvVar41 = local_48;
                        pAVar32 = local_58;
                        ((shared_ptr*)pSVar2)->GetFile(iVar8, *piVar14, 0);
                        psVar15 = (shared_ptr*)Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                     eastl::allocator>::operator[](this_00, uVar35);
                        bVar6 = operator==(psVar15, (_func_decltype_nullptr*)0);
                        if (bVar6) {
                            local_38->field_53236 = local_38->field_53236 + 1;
                            local_50 = (PacketJ*)((ulong)local_50 & 18446744069414584320);
                        }
                    }
                }
                uVar35 = uVar35 + 1;
                uVar13 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar41);
            } while (uVar35 < uVar13);
        }
        if (((ulong)local_50 & 1) == 0) {
            local_38->field_53252 = 1;
        } else {
            local_38->field_53244 = 0;
            puVar36 = &local_38->field_1104272;
            lVar12 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar41);
            bVar39 = 1;
            if (lVar12 != 0) {
                uVar35 = 0;
                do {
                    psVar15 = (shared_ptr*)Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                 eastl::allocator>::operator[](pAVar32, uVar35);
                    bVar6 = operator!=(psVar15, (_func_decltype_nullptr*)0);
                    if (bVar6) {
                        local_60 = (shared_ptr*)CONCAT71(local_60._1_7_, bVar39);
                        local_40 = psVar15;
                        psVar19 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                            Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                  eastl::allocator>::operator[](pAVar32, uVar35);
                        phVar20 =
                            (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                       eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                       eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(psVar19);
                        lVar12 =
                            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                             eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                             eastl::equal_to<long long>, eastl::hash<long long>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, true, true>::size(phVar20);
                        if (lVar12 != 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_mapBuildLocationData[n]->GetPos() == 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                      "osclient/client.cpp",
                                      4681, (char*)0);
                        }
                        pCVar16 = (CoordMapSquare*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                            (Array<rs2lib::CoordMapSquare, eastl::allocator>*)puVar36, uVar35);
                        iVar8 = pCVar16->GetX();
                        pCVar5 = local_38;
                        iVar9 = iVar8 * 64 - local_38->field_53220;
                        pCVar16 = (CoordMapSquare*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                            (Array<rs2lib::CoordMapSquare, eastl::allocator>*)puVar36, uVar35);
                        iVar8 = pCVar16->GetZ();
                        iVar8 = iVar8 * 64 - pCVar5->field_53224;
                        if (pCVar5->m_mapBuildRegionMode != false) {
                            iVar8 = 10;
                            iVar9 = 10;
                        }
                        pPVar17 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_40);
                        iVar8 = ClientBuild::CheckLocations(pPVar17, iVar9, iVar8);
                        pCVar5->field_53244 = pCVar5->field_53244 + iVar8;
                        bVar39 = (byte)local_60 & iVar8 == 0;
                        pPVar18 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                          (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_40);
                        pPVar18->SetPos(0);
                        pAVar32 = local_58;
                    }
                    uVar35 = uVar35 + 1;
                    uVar13 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_48);
                } while (uVar35 < uVar13);
            }
            if (bVar39 == 0) {
                local_38->field_53252 = 2;
            } else {
                if (local_38->field_53252 != 0) {
                    eastl::operator+(local_228, (basic_string*)&constants::text::loading,
                                     (value_type*)StringConstants::TAG_BREAK);
                    eastl::operator+((eastl*)local_e8, (basic_string*)local_228,
                                     (value_type*)StringConstants::OPEN_BRACKET);
                    eastl::operator+((eastl*)&local_c8, (basic_string*)local_e8, (value_type*)"100%");
                    eastl::operator+((eastl*)local_208, (basic_string*)&local_c8,
                                     (value_type*)StringConstants::CLOSE_BRACKET);
                    MessageBox(local_38, (basic_string*)local_208, true);
                    local_208->~basic_string();
                    local_c8.~basic_string();
                    local_e8->~basic_string();
                    local_228->~basic_string();
                }
                pCVar5 = local_38;
                local_78 = (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&local_38->field_19184;
                pwVar21 =
                    (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(local_78);
                pwVar21->ResetMap();
                local_80 = (fixed_vector*)&pCVar5->field_6814744;
                uVar35 = 0;
                do {
                    this_01 = (CollisionMap*)
                        eastl::vector<movement::CollisionMap,
                                      eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<movement::CollisionMap,
                                           eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       local_80,
                                   uVar35);
                    this_01->Reset();
                    uVar35 = uVar35 + 1;
                } while (uVar35 != 4);
                iVar8 = 0;
                do {
                    iVar9 = 0;
                    do {
                        iVar33 = 0;
                        do {
                            ClientBuild::Write3DArray<signed char>(&ClientBuild::m_mapl, iVar8, iVar9, iVar33, 0);
                            pCVar5 = local_38;
                            iVar33 = iVar33 + 1;
                        } while (iVar33 != 104);
                        iVar9 = iVar9 + 1;
                    } while (iVar9 != 104);
                    iVar8 = iVar8 + 1;
                } while (iVar8 != 4);
                local_38->m_entityOverlays->DestroyAllStaticOverlays();
                if (pCVar5->field_54760 != '\0') {
                    uVar22 = logger::default_logger();
                    logger::Logger::Log(
                        uVar22, 0, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        4740, "clientbuild init");
                }
                ClientBuild::Init();
                local_40 = (shared_ptr*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_48);
                bgsound::Reset();
                pCVar5 = local_38;
                PreventTimeout(local_38, true);
                eastl::vector<LocInfo, BucketAllocatorEASTL>::vector();
                if (pCVar5->m_mapBuildRegionMode == false) {
                    if (local_38->field_54760 != '\0') {
                        uVar22 = logger::default_logger();
                        logger::Logger::Log(uVar22, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client.cpp",
                                            4760, "loading ground");
                    }
                    if (local_40 != (shared_ptr*)0) {
                        paVar38 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)0;
                        do {
                            pCVar16 = (CoordMapSquare*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                                (Array<rs2lib::CoordMapSquare, eastl::allocator>*)puVar36, (ulong)paVar38);
                            iVar8 = pCVar16->GetX();
                            pCVar5 = local_38;
                            uVar11 = local_38->field_53220;
                            pCVar16 = (CoordMapSquare*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                                (Array<rs2lib::CoordMapSquare, eastl::allocator>*)puVar36, (ulong)paVar38);
                            iVar9 = pCVar16->GetZ();
                            uVar1 = pCVar5->field_53224;
                            psVar15 = (shared_ptr*)
                                Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>::
                                operator[]((Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                  eastl::allocator>*)local_48,
                                           (ulong)paVar38);
                            bVar6 = operator!=(psVar15, (_func_decltype_nullptr*)0);
                            if (bVar6) {
                                phVar20 =
                                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                               eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                               eastl::equal_to<long long>, eastl::hash<long long>,
                                               eastl::mod_range_hashing, eastl::default_ranged_hash,
                                               eastl::prime_rehash_policy, false, true, true>*)
                                        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)psVar15);
                                lVar12 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>,
                                                          eastl::allocator,
                                                          eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                          eastl::equal_to<long long>, eastl::hash<long long>,
                                                          eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                          eastl::prime_rehash_policy, false, true, true>::size(phVar20);
                                if (lVar12 != 0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("packet->GetPos() == 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/client.cpp",
                                              4771, (char*)0);
                                }
                                pPVar17 =
                                    (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)psVar15);
                                ClientBuild::LoadGround(pPVar17, iVar8 * 64 - uVar11, iVar9 * 64 - uVar1,
                                                        local_38->field_53228 * 8 + -48,
                                                        local_38->field_53232 * 8 + -48, local_80);
                                pPVar18 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                              shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->((
                                                  shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)psVar15);
                                pPVar18->SetPos(0);
                            }
                            pCVar5 = local_38;
                            paVar38 = paVar38 + 1;
                        } while (local_40 != (shared_ptr*)paVar38);
                        if (local_40 != (shared_ptr*)0) {
                            paVar38 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)0;
                            do {
                                pCVar16 = (CoordMapSquare*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                                    (Array<rs2lib::CoordMapSquare, eastl::allocator>*)puVar36, (ulong)paVar38);
                                iVar8 = pCVar16->GetX();
                                uVar11 = pCVar5->field_53220;
                                pCVar16 = (CoordMapSquare*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                                    (Array<rs2lib::CoordMapSquare, eastl::allocator>*)puVar36, (ulong)paVar38);
                                iVar9 = pCVar16->GetZ();
                                uVar1 = pCVar5->field_53224;
                                psVar15 =
                                    (shared_ptr*)Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                       eastl::allocator>::
                                    operator[]((Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                      eastl::allocator>*)local_48,
                                               (ulong)paVar38);
                                bVar6 = operator==(psVar15, (_func_decltype_nullptr*)0);
                                if ((bVar6) && (local_38->field_53232 < 800)) {
                                    ClientBuild::FadeAdjacent(iVar8 * 64 - uVar11, iVar9 * 64 - uVar1, 64, 64);
                                }
                                paVar38 = paVar38 + 1;
                            } while (local_40 != (shared_ptr*)paVar38);
                        }
                    }
                    PreventTimeout(local_38, true);
                    if (local_38->field_54760 != '\0') {
                        uVar22 = logger::default_logger();
                        logger::Logger::Log(uVar22, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client.cpp",
                                            4798, "loading locations");
                    }
                    if (local_40 != (shared_ptr*)0) {
                        paVar38 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)0;
                        do {
                            psVar15 = (shared_ptr*)Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                         eastl::allocator>::operator[](local_58, (ulong)paVar38);
                            bVar6 = operator!=(psVar15, (_func_decltype_nullptr*)0);
                            if (bVar6) {
                                pCVar16 = (CoordMapSquare*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                                    (Array<rs2lib::CoordMapSquare, eastl::allocator>*)puVar36, (ulong)paVar38);
                                iVar8 = pCVar16->GetX();
                                uVar11 = local_38->field_53220;
                                pCVar16 = (CoordMapSquare*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                                    (Array<rs2lib::CoordMapSquare, eastl::allocator>*)puVar36, (ulong)paVar38);
                                iVar9 = pCVar16->GetZ();
                                uVar1 = local_38->field_53224;
                                phVar20 =
                                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                               eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                               eastl::equal_to<long long>, eastl::hash<long long>,
                                               eastl::mod_range_hashing, eastl::default_ranged_hash,
                                               eastl::prime_rehash_policy, false, true, true>*)
                                        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)psVar15);
                                lVar12 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>,
                                                          eastl::allocator,
                                                          eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                          eastl::equal_to<long long>, eastl::hash<long long>,
                                                          eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                          eastl::prime_rehash_policy, false, true, true>::size(phVar20);
                                if (lVar12 != 0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("packet->GetPos() == 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/client.cpp",
                                              4810, (char*)0);
                                }
                                local_60 = psVar15;
                                pPVar17 =
                                    (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)psVar15);
                                pwVar21 = (world*)
                                    std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator*(
                                        local_78);
                                local_208->LoadLocations(pPVar17, iVar8 * 64 - uVar11, iVar9 * 64 - uVar1, pwVar21,
                                                         local_80, local_38->field_8488);
                                pPVar18 =
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)
                                        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_60);
                                pPVar18->SetPos(0);
                                lVar12 = local_c8.size();
                                lVar26 = local_208->size();
                                local_c8.reserve(lVar12 + lVar26);
                                pLVar27 = (LocInfo*)local_c8.end();
                                pLVar28 = (LocInfo*)local_208->HeapBeginPtr();
                                local_208->end();
                                eastl::vector<LocInfo, BucketAllocatorEASTL>::insert<LocInfo*>(&local_c8, pLVar27,
                                                                                               pLVar28);
                                local_208->~vector();
                            }
                            paVar38 = paVar38 + 1;
                        } while (local_40 != (shared_ptr*)paVar38);
                    }
                }
                if (local_38->m_mapBuildRegionMode != false) {
                    if (local_38->field_54760 != '\0') {
                        uVar22 = logger::default_logger();
                        logger::Logger::Log(uVar22, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client.cpp",
                                            4826, "loading regionmode ground");
                    }
                    local_98 = (array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>*)&local_38
                                   ->field_1104468;
                    pPVar17 = (PacketJ*)0;
                    do {
                        local_50 = pPVar17;
                        local_f0 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)
                            std::array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>::operator[](
                                local_98, (ulong)pPVar17);
                        paVar38 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)0;
                        do {
                            local_40 = (shared_ptr*)paVar38;
                            local_60 =
                                (shared_ptr*)std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>::operator[](
                                    local_f0, (ulong)paVar38);
                            uVar35 = 0;
                            do {
                                pMVar23 = (Minimap*)std::array<rs2lib::CoordZoneSource, 13ul>::operator[](
                                    (array<rs2lib::CoordZoneSource, 13ul>*)local_60, uVar35);
                                cVar7 = pMVar23->IsSet();
                                iVar8 = (int)uVar35;
                                if (cVar7 != '\0') {
                                    new (local_208) rs2lib::CoordMapSquare(pMVar23);
                                    lVar12 = puVar36->end();
                                    if (lVar12 != 0) {
                                        uVar13 = 0;
                                        do {
                                            pJVar24 = (Js5RequestKey*)
                                                Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                                                    (Array<rs2lib::CoordMapSquare, eastl::allocator>*)puVar36, uVar13);
                                            cVar7 =
                                                jagex3::Js5RequestKey::operator==(pJVar24, (Js5RequestKey*)local_208);
                                            if (cVar7 != '\0') {
                                                psVar15 = (shared_ptr*)Array<
                                                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                    eastl::allocator>::
                                                operator[](
                                                    (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                           eastl::allocator>*)local_48,
                                                    uVar13);
                                                bVar6 = operator!=(psVar15, (_func_decltype_nullptr*)0);
                                                if (bVar6) {
                                                    psVar19 = (shared_ptr<
                                                               PacketJ<Array<unsigned char, eastl::allocator>>>*)
                                                        Array<
                                                            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                            eastl::allocator>::
                                                        operator[](
                                                            (Array<shared_ptr<
                                                                       PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                                   eastl::allocator>*)local_48,
                                                            uVar13);
                                                    phVar20 =
                                                        (hashtable<long long,
                                                                   eastl::pair<long long const, unsigned int>,
                                                                   eastl::allocator,
                                                                   eastl::use_first<
                                                                       eastl::pair<long long const, unsigned int>>,
                                                                   eastl::equal_to<long long>, eastl::hash<long long>,
                                                                   eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                                   eastl::prime_rehash_policy, false, true, true>*)
                                                            shared_ptr<PacketJ<Array<
                                                                unsigned char, eastl::allocator>>>::operator->(psVar19);
                                                    lVar12 = eastl::hashtable<
                                                        long long, eastl::pair<long long const, unsigned int>,
                                                        eastl::allocator,
                                                        eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                        eastl::equal_to<long long>, eastl::hash<long long>,
                                                        eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                        eastl::prime_rehash_policy, false, true, true>::size(phVar20);
                                                    if (lVar12 != 0) {
                                                        /* WARNING: Subroutine does not return */
                                                        LogAssert("m_mapBuildGroundData[n]->GetPos() == 0",
                                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                  "OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                                                                  4846, (char*)0);
                                                    }
                                                    iVar9 = pMVar23->GetX();
                                                    iVar33 = pMVar23->GetZ();
                                                    local_70._0_4_ = iVar33;
                                                    psVar19 = (shared_ptr<
                                                               PacketJ<Array<unsigned char, eastl::allocator>>>*)
                                                        Array<
                                                            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                            eastl::allocator>::
                                                        operator[](
                                                            (Array<shared_ptr<
                                                                       PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                                   eastl::allocator>*)local_48,
                                                            uVar13);
                                                    local_88 = (PacketJ*)shared_ptr<PacketJ<
                                                        Array<unsigned char, eastl::allocator>>>::operator*(psVar19);
                                                    local_a4 = (iVar9 - (int)local_40) * 8;
                                                    local_70 = (Array<std::array<int, 4ul>, eastl::allocator>*)CONCAT44(
                                                        local_70._4_4_, ((int)local_70 - iVar8) * 8);
                                                    uVar10 = pMVar23->GetPos();
                                                    local_90 = CONCAT44(local_90._4_4_, uVar10);
                                                    iVar9 = pMVar23->GetX();
                                                    local_a0 = (array<std::array<rs2lib::CoordZoneSource, 13ul>,
                                                                      13ul>*)(CONCAT44(local_a0._4_4_, iVar9 * 8) &
                                                                              18446744069414584376);
                                                    uVar11 = pMVar23->GetZ();
                                                    iVar9 = pMVar23->GetLevel();
                                                    ClientBuild::LoadGroundRegion(
                                                        local_88, (int)local_50, (int)local_40 * 8, iVar8 * 8,
                                                        (int)local_90, (int)local_a0, (uVar11 & 7) << 3, iVar9,
                                                        local_a4, (int)local_70, local_80);
                                                    psVar19 = (shared_ptr<
                                                               PacketJ<Array<unsigned char, eastl::allocator>>>*)
                                                        Array<
                                                            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                            eastl::allocator>::
                                                        operator[](
                                                            (Array<shared_ptr<
                                                                       PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                                   eastl::allocator>*)local_48,
                                                            uVar13);
                                                    pPVar18 =
                                                        (PacketT<Array<unsigned char, eastl::allocator>>*)shared_ptr<
                                                            PacketJ<Array<unsigned char, eastl::allocator>>>::
                                                        operator->(psVar19);
                                                    pPVar18->SetPos(0);
                                                    goto LAB_1000cec3c;
                                                }
                                            }
                                            uVar13 = uVar13 + 1;
                                            uVar25 = puVar36->end();
                                        } while (uVar13 < uVar25);
                                    }
                                }
                                ClientBuild::AutoGroundRegion((int)local_50, (int)local_40 * 8, iVar8 * 8);
                            LAB_1000cec3c:
                                uVar35 = uVar35 + 1;
                            } while (uVar35 != 13);
                            paVar38 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)((long)local_40 + 1);
                        } while (paVar38 != (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)13);
                        pPVar17 = local_50 + 1;
                    } while (pPVar17 != (PacketJ*)4);
                    uVar35 = 0;
                    local_40 = (shared_ptr*)
                        std::array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>::operator[](
                            local_98, 0);
                    do {
                        this_02 = (array<rs2lib::CoordZoneSource, 13ul>*)
                            std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>::operator[](
                                (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)local_40, uVar35);
                        iVar8 = 0;
                        uVar13 = 0;
                        do {
                            this_03 = (CoordZoneSource*)std::array<rs2lib::CoordZoneSource, 13ul>::operator[](this_02,
                                                                                                              uVar13);
                            cVar7 = this_03->IsSet();
                            if (cVar7 == '\0') {
                                ClientBuild::FadeAdjacent((int)uVar35 * 8, iVar8, 8, 8);
                            }
                            uVar13 = uVar13 + 1;
                            iVar8 = iVar8 + 8;
                        } while (uVar13 != 13);
                        uVar35 = uVar35 + 1;
                    } while (uVar35 != 13);
                    PreventTimeout(local_38, true);
                    if (local_38->field_54760 != '\0') {
                        uVar22 = logger::default_logger();
                        logger::Logger::Log(uVar22, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client.cpp",
                                            4903, "loading regionmode locations");
                    }
                    pPVar17 = (PacketJ*)0;
                    do {
                        local_88 = pPVar17;
                        local_a0 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)
                            std::array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>::operator[](
                                local_98, (ulong)pPVar17);
                        uVar35 = 0;
                        do {
                            local_90 = uVar35;
                            local_40 =
                                (shared_ptr*)std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>::operator[](
                                    local_a0, uVar35);
                            uVar35 = 0;
                            do {
                                pMVar23 = (Minimap*)std::array<rs2lib::CoordZoneSource, 13ul>::operator[](
                                    (array<rs2lib::CoordZoneSource, 13ul>*)local_40, uVar35);
                                cVar7 = pMVar23->IsSet();
                                if (cVar7 != '\0') {
                                    new (local_e8) rs2lib::CoordMapSquare(pMVar23);
                                    lVar12 = puVar36->end();
                                    if (lVar12 != 0) {
                                        uVar13 = 0;
                                        do {
                                            pJVar24 = (Js5RequestKey*)
                                                Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                                                    (Array<rs2lib::CoordMapSquare, eastl::allocator>*)puVar36, uVar13);
                                            cVar7 = jagex3::Js5RequestKey::operator==(pJVar24, local_e8);
                                            if (cVar7 != '\0') {
                                                psVar15 = (shared_ptr*)
                                                    Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                          eastl::allocator>::operator[](local_58, uVar13);
                                                bVar6 = operator!=(psVar15, (_func_decltype_nullptr*)0);
                                                if (bVar6) {
                                                    psVar19 =
                                                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                                                            Array<shared_ptr<
                                                                      PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                                  eastl::allocator>::operator[](local_58, uVar13);
                                                    phVar20 =
                                                        (hashtable<long long,
                                                                   eastl::pair<long long const, unsigned int>,
                                                                   eastl::allocator,
                                                                   eastl::use_first<
                                                                       eastl::pair<long long const, unsigned int>>,
                                                                   eastl::equal_to<long long>, eastl::hash<long long>,
                                                                   eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                                   eastl::prime_rehash_policy, false, true, true>*)
                                                            shared_ptr<PacketJ<Array<
                                                                unsigned char, eastl::allocator>>>::operator->(psVar19);
                                                    lVar12 = eastl::hashtable<
                                                        long long, eastl::pair<long long const, unsigned int>,
                                                        eastl::allocator,
                                                        eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                        eastl::equal_to<long long>, eastl::hash<long long>,
                                                        eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                        eastl::prime_rehash_policy, false, true, true>::size(phVar20);
                                                    if (lVar12 != 0) {
                                                        /* WARNING: Subroutine does not return */
                                                        LogAssert("m_mapBuildLocationData[n]->GetPos() == 0",
                                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                  "OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                                                                  4923, (char*)0);
                                                    }
                                                    psVar19 =
                                                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                                                            Array<shared_ptr<
                                                                      PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                                  eastl::allocator>::operator[](local_58, uVar13);
                                                    local_50 = (PacketJ*)shared_ptr<PacketJ<
                                                        Array<unsigned char, eastl::allocator>>>::operator*(psVar19);
                                                    uVar10 = pMVar23->GetPos();
                                                    local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, uVar10);
                                                    uVar11 = pMVar23->GetX();
                                                    local_70 = (Array<std::array<int, 4ul>, eastl::allocator>*)CONCAT44(
                                                        local_70._4_4_, (uVar11 & 7) << 3);
                                                    uVar11 = pMVar23->GetZ();
                                                    iVar8 = pMVar23->GetLevel();
                                                    pwVar21 = (world*)std::unique_ptr<
                                                        dash3d::world,
                                                        std::default_delete<dash3d::world>>::operator*(local_78);
                                                    local_208->LoadLocationsRegion(
                                                        local_50, (int)local_88, (int)local_90 * 8, (int)uVar35 * 8,
                                                        (int)local_60, (int)local_70, (uVar11 & 7) << 3, iVar8, pwVar21,
                                                        local_80, local_38->field_8488);
                                                    psVar19 =
                                                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                                                            Array<shared_ptr<
                                                                      PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                                  eastl::allocator>::operator[](local_58, uVar13);
                                                    pPVar18 =
                                                        (PacketT<Array<unsigned char, eastl::allocator>>*)shared_ptr<
                                                            PacketJ<Array<unsigned char, eastl::allocator>>>::
                                                        operator->(psVar19);
                                                    pPVar18->SetPos(0);
                                                    lVar12 = local_c8.size();
                                                    lVar26 = local_208->size();
                                                    local_c8.reserve(lVar12 + lVar26);
                                                    pLVar27 = (LocInfo*)local_c8.end();
                                                    pLVar28 = (LocInfo*)local_208->HeapBeginPtr();
                                                    local_208->end();
                                                    eastl::vector<LocInfo, BucketAllocatorEASTL>::insert<LocInfo*>(
                                                        &local_c8, pLVar27, pLVar28);
                                                    local_208->~vector();
                                                    break;
                                                }
                                            }
                                            uVar13 = uVar13 + 1;
                                            uVar25 = puVar36->end();
                                        } while (uVar13 < uVar25);
                                    }
                                }
                                uVar35 = uVar35 + 1;
                            } while (uVar35 != 13);
                            uVar35 = local_90 + 1;
                        } while (uVar35 != 13);
                        pPVar17 = local_88 + 1;
                    } while (pPVar17 != (PacketJ*)4);
                }
                lVar12 = local_68->end();
                pAVar32 = local_68;
                if (lVar12 == 0) {
                    iVar8 = 0;
                } else {
                    uVar35 = 0;
                    iVar8 = 0;
                    do {
                        psVar15 = (shared_ptr*)Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                                     eastl::allocator>::operator[](pAVar32, uVar35);
                        bVar6 = operator!=(psVar15, (_func_decltype_nullptr*)0);
                        if (bVar6) {
                            psVar19 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                                Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                      eastl::allocator>::operator[](local_68, uVar35);
                            phVar20 =
                                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                           eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                           eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(psVar19);
                            lVar12 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>,
                                                      eastl::allocator,
                                                      eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                      eastl::equal_to<long long>, eastl::hash<long long>,
                                                      eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                      eastl::prime_rehash_policy, false, true, true>::size(phVar20);
                            if (lVar12 != 0) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("m_mapBuildEnvironmentData[n]->GetPos() == 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                          "osclient/client.cpp",
                                          4957, (char*)0);
                            }
                            pCVar16 = (CoordMapSquare*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                                (Array<rs2lib::CoordMapSquare, eastl::allocator>*)puVar36, uVar35);
                            iVar9 = pCVar16->GetX();
                            uVar11 = local_38->field_53220;
                            pCVar16 = (CoordMapSquare*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                                (Array<rs2lib::CoordMapSquare, eastl::allocator>*)puVar36, uVar35);
                            iVar33 = pCVar16->GetZ();
                            uVar1 = local_38->field_53224;
                            psVar19 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                                Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                      eastl::allocator>::operator[](local_68, uVar35);
                            pPVar17 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                                psVar19);
                            ClientBuild::LoadEnvironmentSettings(pPVar17, iVar9 * 64 - uVar11, iVar33 * 64 - uVar1);
                            psVar19 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                                Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                      eastl::allocator>::operator[](local_68, uVar35);
                            pPVar18 =
                                (PacketT<Array<unsigned char, eastl::allocator>>*)
                                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(psVar19);
                            pPVar18->SetPos(0);
                        } else {
                            iVar8 = iVar8 + 1;
                        }
                        pAVar32 = local_68;
                        uVar35 = uVar35 + 1;
                        uVar13 = local_68->end();
                    } while (uVar35 < uVar13);
                }
                iVar9 = pAVar32->end();
                pCVar5 = local_38;
                local_38->field_7164648 = iVar8 == iVar9;
                PreventTimeout(local_38, true);
                if (pCVar5->field_54760 != '\0') {
                    uVar22 = logger::default_logger();
                    logger::Logger::Log(
                        uVar22, 0, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        4976, "finishing map");
                }
                pwVar21 =
                    (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator*(local_78);
                ClientBuild::FinishBuild(pwVar21, local_80, pCVar5->m_usingRSeven == false);
                PreventTimeout(pCVar5, true);
                OnLoadLocations(pCVar5, (vector*)&local_c8);
                iVar8 = 0;
                do {
                    iVar9 = 0;
                    do {
                        iVar33 = 0;
                        do {
                            (pCVar5->m_highlightManager, iVar8, iVar9, iVar33)->OnTileAdded();
                            iVar34 = ClientBuild::minusedlevel;
                            iVar33 = iVar33 + 1;
                        } while (iVar33 != 104);
                        iVar9 = iVar9 + 1;
                    } while (iVar9 != 104);
                    iVar8 = iVar8 + 1;
                } while (iVar8 != 4);
                if (local_38->m_lowMem == false) {
                    pwVar21 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                        local_78);
                    pwVar21->FillBaseLevel(0);
                } else {
                    pwVar21 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                        local_78);
                    pwVar21->FillBaseLevel(iVar34);
                }
                if (local_38->field_54760 != '\0') {
                    uVar22 = logger::default_logger();
                    logger::Logger::Log(
                        uVar22, 0, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        5023, "adding objects to map");
                }
                pCVar37 = local_38;
                iVar8 = 0;
                do {
                    iVar9 = 0;
                    do {
                        ShowObject(pCVar37, iVar8, iVar9);
                        RunUpdateObjStackTrigger(pCVar37, pCVar37->m_playerLevel, iVar8, iVar9);
                        pvVar41 = local_48;
                        pAVar32 = local_68;
                        iVar9 = iVar9 + 1;
                    } while (iVar9 != 104);
                    iVar8 = iVar8 + 1;
                } while (iVar8 != 104);
                if (local_38->field_54760 != '\0') {
                    uVar22 = logger::default_logger();
                    logger::Logger::Log(
                        uVar22, 0, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        5035, "correcting location changes");
                }
                LocChangePostBuildCorrect(local_38);
                (&configdecoder::LocType::m_mc1)->Reset();
                pCVar37 = local_38;
                cVar7 = local_38->IsWindowedApplication();
                if (cVar7 != '\0') {
                    puVar36 = &pCVar37->field_19120;
                    pSVar29 = (ServerConnection*)
                                  std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                      (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar36);
                    uVar22 = pSVar29->GetOutgoingEncryption();
                    local_208->MakeClientMessage(88, uVar22);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_208 + 8), 1057001181);
                    pSVar29 = (ServerConnection*)
                                  std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                      (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar36);
                    pSVar29->SendClientMessage(local_208);
                    local_208->~ClientMessage();
                    pCVar37 = local_38;
                }
                if (pCVar37->m_mapBuildRegionMode != false) {
                    pCVar5->m_highlightManager->RebuildRegionHighlights();
                }
                lVar12 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar41);
                if (lVar12 != 0) {
                    uVar35 = 0;
                    do {
                        new (local_208) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        psVar19 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                            Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>::
                            operator[](
                                (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)
                                    pvVar41,
                                uVar35);
                        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(psVar19,
                                                                                               (shared_ptr*)local_208);
                        local_208->~shared_ptr();
                        new (local_208) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        psVar19 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                            Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                  eastl::allocator>::operator[](local_58, uVar35);
                        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(psVar19,
                                                                                               (shared_ptr*)local_208);
                        local_208->~shared_ptr();
                        new (local_208) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        psVar19 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                            Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                  eastl::allocator>::operator[](pAVar32, uVar35);
                        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(psVar19,
                                                                                               (shared_ptr*)local_208);
                        local_208->~shared_ptr();
                        uVar35 = uVar35 + 1;
                        uVar13 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar41);
                    } while (uVar35 < uVar13);
                }
                if (local_38->field_54760 != '\0') {
                    uVar22 = logger::default_logger();
                    logger::Logger::Log(
                        uVar22, 0, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        5068, "done build");
                }
                if (local_38->m_mapBuildRegionMode == false) {
                    iVar8 = local_38->field_53228;
                    iVar9 = iVar8 + 1;
                    if (-1 < iVar8 + -6) {
                        iVar9 = iVar8 + -6;
                    }
                    iVar33 = local_38->field_53232;
                    iVar34 = iVar8 + 13;
                    if (-1 < iVar8 + 6) {
                        iVar34 = iVar8 + 6;
                    }
                    iVar8 = iVar33 + 1;
                    if (-1 < iVar33 + -6) {
                        iVar8 = iVar33 + -6;
                    }
                    iVar40 = iVar33 + 13;
                    if (-1 < iVar33 + 6) {
                        iVar40 = iVar33 + 6;
                    }
                    new (local_208) std::stringstream();
                    local_60 = (shared_ptr*)(ulong)(uint)(iVar9 >> 3);
                    uVar11 = (iVar9 >> 3) - 1;
                    if ((int)uVar11 <= (int)((iVar34 >> 3) + 1U)) {
                        local_58 = (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                          eastl::allocator>*)(ulong)(uint)(iVar40 >> 3);
                        local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, (iVar8 >> 3) + -1);
                        local_50 = (PacketJ*)CONCAT44(local_50._4_4_, (iVar40 >> 3) + 1);
                        local_70 = (Array<std::array<int, 4ul>, eastl::allocator>*)(ulong)(uint)(iVar34 >> 3);
                        do {
                            local_48 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(ulong)uVar11;
                            bVar6 = (int)uVar11 < (int)local_60;
                            iVar9 = (int)local_70;
                            if ((int)local_40 <= (int)local_50) {
                                pAVar32 = local_58;
                                iVar33 = (int)local_40;
                                do {
                                    if ((iVar33 < iVar8 >> 3 || (bVar6 || iVar9 < (int)uVar11)) ||
                                        ((int)pAVar32 < iVar33)) {
                                        poVar30 = std::operator<<(local_1f8, "m");
                                        poVar30 = (ostream*)std::ostream::operator<<(poVar30, (int)local_48);
                                        poVar30 = std::operator<<(poVar30, "_");
                                        std::ostream::operator<<(poVar30, iVar33);
                                        pJVar3 = (Js5*)local_38->field_54432;
                                        local_e8->str();
                                        pcVar31 = (char*)local_e8->c_str();
                                        pJVar3->UpdateCacheHint(pcVar31);
                                        local_e8->~string();
                                        std::string::string<decltype(nullptr)>((string*)local_e8, "");
                                        local_208->str(local_e8);
                                        local_e8->~string();
                                        poVar30 = std::operator<<(local_1f8, "l");
                                        poVar30 = (ostream*)std::ostream::operator<<(poVar30, (int)local_48);
                                        poVar30 = std::operator<<(poVar30, "_");
                                        std::ostream::operator<<(poVar30, iVar33);
                                        pJVar3 = (Js5*)local_38->field_54432;
                                        local_e8->str();
                                        pcVar31 = (char*)local_e8->c_str();
                                        pJVar3->UpdateCacheHint(pcVar31);
                                        local_e8->~string();
                                        pAVar32 = local_58;
                                    }
                                    bVar4 = iVar33 <= (int)pAVar32;
                                    iVar33 = iVar33 + 1;
                                } while (bVar4);
                            }
                            uVar11 = (int)local_48 + 1;
                        } while ((int)local_48 <= (int)local_70);
                    }
                    local_208->~stringstream();
                    cVar7 = local_38->m_usingRSeven;
                    pCVar5 = local_38;
                } else {
                    cVar7 = local_38->m_usingRSeven;
                    pCVar5 = local_38;
                }
                local_38 = pCVar5;
                if (cVar7 != '\0') {
                    new (local_208) rs2lib::CoordGrid(0, pCVar5->field_53220, pCVar5->field_53224);
                    pwVar21 =
                        (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator*(local_78);
                    rseven::MapRebuildHandler_LogicThread::HandleRebuild(pwVar21, (CoordGrid*)local_208,
                                                                         (Js5*)pCVar5->m_pSprites);
                }
                SetMainState(pCVar5, 30);
                ClientBuild::Quit();
                puVar36 = &local_38->field_19120;
                pSVar29 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar36);
                uVar22 = pSVar29->GetOutgoingEncryption();
                local_208->MakeClientMessage(17, uVar22);
                pSVar29 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar36);
                pSVar29->SendClientMessage(local_208);
                javapal::GameShell::DoneSlowUpdate();
                local_38->field_53256 = 1;
                local_208->~ClientMessage();
                local_c8.~vector();
            }
        }
    }

    // 0x1000cfe00, 8368 bytes, placed by __FILE__ string
    // Client::GameLoop()
    void Client::GameLoop() {
        undefined1* puVar1;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar2;
        SuperPacket* this_00;
        shared_ptr sVar3;
        shared_ptr sVar4;
        shared_ptr sVar5;
        WorldmapAreaMetadata* this_01;
        ClientInputHandler* this_02;
        char cVar6;
        char cVar7;
        byte bVar8;
        short sVar9;
        uint uVar10;
        undefined4 uVar11;
        int iVar12;
        int iVar13;
        ServerConnection* pSVar14;
        undefined8 uVar15;
        long lVar16;
        uint* puVar17;
        long* plVar18;
        ulong uVar19;
        undefined8 uVar20;
        ShuffledPacket3* pSVar21;
        ShuffledPacket4* pSVar22;
        ShuffledPacket2* pSVar23;
        shared_ptr* psVar24;
        int* piVar25;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar26;
        HookReq* pHVar27;
        char* pcVar28;
        InterfaceMouseEvent* pIVar29;
        HookArg* this_03;
        ClientVarValues* this_04;
        FriendSystem* this_05;
        __atomic_base* p_Var30;
        DeviceOptions* this_06;
        HiscoresManager* this_07;
        array<int, 128ul>* paVar31;
        NpcUID* extraout_RDX;
        NpcUID* extraout_RDX_00;
        int iVar32;
        CoordType<UICoordSpecializer>* pCVar33;
        long lVar34;
        uint uVar35;
        NpcUID* pNVar36;
        ulong uVar37;
        shared_ptr* psVar38;
        ulong uVar39;
        undefined1* puVar40;
        Client* pCVar41;
        bool bVar42;
        undefined4 in_stack_fffffffffffffd38;
        undefined4 in_stack_fffffffffffffd3c;
        undefined4 in_stack_fffffffffffffd40;
        undefined4 in_stack_fffffffffffffd44;
        shared_ptr<dash3d::Decor> local_2a8[16];
        shared_ptr<dash3d::Decor> local_298[16];
        shared_ptr<dash3d::Decor> local_288[16];
        CoordType<UICoordSpecializer>* local_278;
        CoordType<UICoordSpecializer>* local_270;
        CoordType<UICoordSpecializer>* local_268;
        array<CoordType<UICoordSpecializer>, 500ul>* local_260;
        unique_ptr<ServerConnection, std::default_delete<ServerConnection>>* local_258;
        HookArg local_250;
        undefined4 local_208[2];
        undefined4 local_200[2];
        undefined4 local_1f8[2];
        undefined4 local_1f0[2];
        undefined4 local_1e8[2];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_1e0[8];
        shared_ptr* local_1d8;
        ulong local_1d0;
        WorldmapAreaMetadata* local_1c8;
        shared_ptr local_1c0;
        shared_ptr* local_1b0;
        int local_1a4;
        shared_ptr local_1a0;
        array<int, 128ul>* local_190;
        shared_ptr* local_188;
        ClientInputHandler* local_180;
        undefined1 local_178[8];
        undefined1 local_170[16];
        undefined1 local_160[8];
        TextureAtlasReference local_158[2];
        undefined4 local_e4;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_54884 != '\0') {
            field_54884 = 0;
            LogAndAbort("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        5621, "Hard error unhandled");
        }
        if (1 < field_53268) {
            field_53268 = field_53268 + -1;
        }
        if (0 < field_54156) {
            field_54156 = field_54156 + -1;
        }
        if (field_1103920 != '\0') {
            field_1103920 = 0;
            LostCon(this);
            goto LAB_1000d1cc6;
        }
        if (m_frozen == false) {
            iVar32 = 99;
            do {
                pSVar14 = (ServerConnection*)
                    std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator*(
                        (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                cVar6 = TcpIn(this, pSVar14);
                bVar42 = iVar32 != 0;
                iVar32 = iVar32 + -1;
                if (cVar6 == '\0')
                    break;
            } while (bVar42);
        }
        if (field_54785 != false)
            goto LAB_1000d1cc6;
        if (field_8448 != 30) {
            javapal::GameShell::DoneSlowUpdate();
            goto LAB_1000d1cc6;
        }
        if (m_frozen == false) {
            field_7294676 = field_7294676 + 1;
        }
        DispatchInput(this);
        if (m_frozen == false) {
            GlUpdateMouseOverTile(this);
        }
        local_170._8_8_ = this;
        if (field_1104120 != '\0') {
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar15 = pSVar14->GetOutgoingEncryption();
            local_160->MakeClientMessage(15, uVar15);
            phVar2 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)(local_160 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)phVar2, 0);
            cVar6 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(phVar2);
            (&field_1104120, (PacketJ*)phVar2)->SerialiseTelemetry();
            cVar7 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(phVar2);
            phVar2->pSize1(cVar7 - cVar6);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar14->SendClientMessage(local_160);
            (&field_1104120)->MarkTelemetrySent();
            local_160->~ClientMessage();
        }
        pCVar41 = (Client*)local_170._8_8_;
        local_1c8 = (WorldmapAreaMetadata*)(*(NXTPixToolkit**)(local_170._8_8_ + 144))->GetScreen();
        pCVar33 = (CoordType<UICoordSpecializer>*)((long)pCVar41 + 10488);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_208, -1);
        cVar6 = CoordType<UICoordSpecializer>::operator!=(pCVar33, local_208[0]);
        if ((cVar6 != '\0') || (39 < *(int*)((long)pCVar41 + 10520))) {
            new (local_160) shared::ClientMessage();
            local_1d8 = (shared_ptr*)((long)pCVar41 + 12524);
            local_260 = (array<CoordType<UICoordSpecializer>, 500ul>*)((long)pCVar41 + 10524);
            local_258 = (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)((long)pCVar41 + 19120);
            local_1b0 = (shared_ptr*)((long)pCVar41 + 14528);
            local_268 = pCVar33;
            if (*(int*)((long)pCVar41 + 10520) < 1) {
                local_1d0 = 0;
                local_1a4 = 0;
                uVar10 = 0;
                uVar39 = 0;
                paVar31 = (array<int, 128ul>*)0;
            } else {
                local_278 = (CoordType<UICoordSpecializer>*)((long)pCVar41 + 54856);
                local_270 = (CoordType<UICoordSpecializer>*)((long)pCVar41 + 54860);
                local_180 = (ClientInputHandler*)18446744073709551615;
                psVar24 = (shared_ptr*)0;
                local_190 = (array<int, 128ul>*)0;
                uVar39 = 0;
                uVar37 = 0;
                local_1a4 = 0;
                uVar19 = 0;
                do {
                    uVar10 = (uint)uVar37;
                    if ((((ulong)local_190 & 1) != 0) && (lVar16 = ((local_160 + 8))->size(), 245 < lVar16 - uVar39)) {
                        paVar31 = local_190;
                        pCVar41 = (Client*)local_170._8_8_;
                        local_1d0 = uVar19;
                        goto LAB_1000d066e;
                    }
                    puVar17 = (uint*)std::array<CoordType<UICoordSpecializer>, 500ul>::operator[](
                        (array<CoordType<UICoordSpecializer>, 500ul>*)local_1d8, (ulong)psVar24);
                    local_1a0._0_4_ = *puVar17;
                    graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                        (XPlotBlender<graphics::XPlot_NormalAlpha>*)&local_1c0, -1);
                    graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                        (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_178, 65534);
                    cVar6 = CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)&local_1a0,
                                                                     local_1c0._0_4_);
                    if (cVar6 == '\0') {
                        cVar6 = CoordType<UICoordSpecializer>::operator>((CoordType<UICoordSpecializer>*)&local_1a0,
                                                                         local_178._0_4_);
                        if (cVar6 != '\0') {
                            local_1a0._0_4_ = local_178._0_4_;
                        }
                    } else {
                        local_1a0._0_4_ = local_1c0._0_4_;
                    }
                    puVar17 =
                        (uint*)std::array<CoordType<UICoordSpecializer>, 500ul>::operator[](local_260, (ulong)psVar24);
                    local_170._0_4_ = *puVar17;
                    cVar6 = CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)local_170,
                                                                     local_1c0._0_4_);
                    if (cVar6 == '\0') {
                        cVar6 = CoordType<UICoordSpecializer>::operator>((CoordType<UICoordSpecializer>*)local_170,
                                                                         local_178._0_4_);
                        if (cVar6 != '\0') {
                            local_170._0_4_ = local_178._0_4_;
                        }
                    } else {
                        local_170._0_4_ = local_1c0._0_4_;
                    }
                    cVar6 = CoordType<UICoordSpecializer>::operator==(local_278, local_170._0_4_);
                    if (cVar6 == '\0') {
                    LAB_1000d0220:
                        local_188 = psVar24;
                        if (((ulong)local_190 & 1) == 0) {
                            pSVar14 = (ServerConnection*)
                                          std::unique_ptr<ServerConnection,
                                                          std::default_delete<ServerConnection>>::operator->(local_258);
                            uVar15 = pSVar14->GetOutgoingEncryption();
                            local_250.MakeClientMessage(72, uVar15);
                            shared::ClientMessage::operator=((ClientMessage*)local_160, (ClientMessage*)&local_250);
                            local_250.~ClientMessage();
                            uVar39 = ((local_160 + 8))->GetTextureAtlas();
                            psVar24 = local_188;
                            if (uVar39 < 260) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("mes.p.GetSize() >= 260",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                          "osclient/client.cpp",
                                          5768, (char*)0);
                            }
                            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), 0);
                            uVar39 = ((local_160 + 8))->size();
                            uVar15 = ((local_160 + 8))->SetPos(uVar39 + 2);
                            local_190 = (array<int, 128ul>*)CONCAT71((int7)((ulong)uVar15 >> 8), 1);
                            uVar19 = 0;
                            local_1a4 = 0;
                        }
                        uVar15 = local_170._8_8_;
                        if (local_180 == (ClientInputHandler*)18446744073709551615) {
                            iVar32 = local_170->GetX();
                            iVar12 = local_1a0.GetX();
                            uVar10 = 2147483647;
                        } else {
                            local_1d0 = uVar19;
                            local_250.m_argType = CoordType<UICoordSpecializer>::operator-(
                                (CoordType<UICoordSpecializer>*)local_170, *(undefined4*)(local_170._8_8_ + 54856));
                            iVar32 = local_250.GetX();
                            local_250.m_argType = CoordType<UICoordSpecializer>::operator-(
                                (CoordType<UICoordSpecializer>*)&local_1a0, *(undefined4*)(uVar15 + 54860));
                            iVar12 = local_250.GetX();
                            psVar24 = local_188;
                            plVar18 = (long*)std::array<unsigned long long, 500ul>::operator[](
                                (array<unsigned long long, 500ul>*)local_1b0, (ulong)local_188);
                            uVar10 = (uint)((ulong)(*plVar18 - (long)local_180) / 20);
                            local_1a4 = local_1a4 + (int)(*plVar18 - (long)local_180) + uVar10 * -20;
                            uVar19 = local_1d0;
                        }
                        *(undefined4*)(local_170._8_8_ + 54856) = local_170._0_4_;
                        *(undefined4*)(local_170._8_8_ + 54860) = local_1a0._0_4_;
                        if (((((int)uVar10 < 8) && (-33 < iVar32)) && (iVar32 < 32)) &&
                            ((-33 < iVar12 && (iVar12 < 32)))) {
                            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8),
                                iVar32 * 64 + iVar12 + uVar10 * 4096 + 2080);
                        } else if ((((int)uVar10 < 32) && (-129 < iVar32)) &&
                                   ((iVar32 < 128 && ((-129 < iVar12 && (iVar12 < 128)))))) {
                            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), uVar10 + 128);
                            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8),
                                iVar12 + iVar32 * 256 + 32896);
                        } else if ((int)uVar10 < 32) {
                            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), uVar10 + 192);
                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_200, -1);
                            cVar6 = CoordType<UICoordSpecializer>::operator==((CoordType<UICoordSpecializer>*)local_170,
                                                                              local_200[0]);
                            if (cVar6 == '\0') {
                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1f8, -1);
                                cVar6 = CoordType<UICoordSpecializer>::operator==(
                                    (CoordType<UICoordSpecializer>*)&local_1a0, local_1f8[0]);
                                if (cVar6 == '\0') {
                                    uVar10 = local_170->GetX();
                                    iVar32 = local_1a0.GetX();
                                    psVar24 = local_188;
                                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8),
                                        uVar10 | iVar32 << 16);
                                    goto LAB_1000d05e0;
                                }
                            }
                            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), -2147483648);
                        } else {
                            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8),
                                uVar10 & 65535 | 57344);
                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1f0, -1);
                            cVar6 = CoordType<UICoordSpecializer>::operator==((CoordType<UICoordSpecializer>*)local_170,
                                                                              local_1f0[0]);
                            if (cVar6 == '\0') {
                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1e8, -1);
                                cVar6 = CoordType<UICoordSpecializer>::operator==(
                                    (CoordType<UICoordSpecializer>*)&local_1a0, local_1e8[0]);
                                if (cVar6 == '\0') {
                                    uVar10 = local_170->GetX();
                                    iVar32 = local_1a0.GetX();
                                    psVar24 = local_188;
                                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8),
                                        uVar10 | iVar32 << 16);
                                    goto LAB_1000d05e0;
                                }
                            }
                            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), -2147483648);
                        }
                    LAB_1000d05e0:
                        uVar19 = (ulong)((int)uVar19 + 1);
                        plVar18 = (long*)std::array<unsigned long long, 500ul>::operator[](
                            (array<unsigned long long, 500ul>*)local_1b0, (ulong)psVar24);
                        local_180 = (ClientInputHandler*)*plVar18;
                        psVar38 = psVar24;
                        if (*(long*)(local_170._8_8_ + 54864) < (long)local_180) {
                            *(ClientInputHandler**)(local_170._8_8_ + 54864) = local_180;
                        }
                    } else {
                        cVar6 = CoordType<UICoordSpecializer>::operator==(local_270, local_1a0._0_4_);
                        psVar38 = psVar24;
                        if (cVar6 == '\0')
                            goto LAB_1000d0220;
                    }
                    psVar24 = (shared_ptr*)&psVar38->field_1;
                    uVar37 = (ulong)psVar38 & 4294967295;
                } while ((long)psVar24 < (long)*(int*)(local_170._8_8_ + 10520));
                uVar10 = (int)psVar24 - 1;
                paVar31 = local_190;
                pCVar41 = (Client*)local_170._8_8_;
                local_1d0 = uVar19;
            }
        LAB_1000d066e:
            phVar2 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)(local_160 + 8);
            if (((ulong)paVar31 & 1) != 0) {
                cVar6 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::size(phVar2);
                phVar2->pSize1(cVar6 - (char)uVar39);
                uVar19 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                          eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                          eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                          eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                          true>::size(phVar2);
                phVar2->SetPos(uVar39);
                lVar16 = (long)(int)local_1d0;
                lVar34 = (long)local_1a4;
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)phVar2, lVar34 / lVar16 & 4294967295);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)phVar2, lVar34 % lVar16 & 4294967295);
                phVar2->SetPos(uVar19);
                pSVar14 =
                    (ServerConnection*)
                        std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(local_258);
                pSVar14->SendClientMessage(local_160);
            }
            iVar32 = pCVar41->field_10520 - uVar10;
            if (iVar32 == 0 || pCVar41->field_10520 < (int)uVar10) {
                pCVar41->field_10520 = 0;
            } else {
                pCVar41->field_10520 = iVar32;
                uVar39 = (ulong)uVar10;
                ArrayCopy<CoordType<UICoordSpecializer>, 500ul>((array*)local_260, uVar39, (array*)local_260, 0,
                                                                (long)iVar32);
                ArrayCopy<CoordType<UICoordSpecializer>, 500ul>((array*)local_1d8, uVar39, (array*)local_1d8, 0,
                                                                (long)pCVar41->field_10520);
                ArrayCopy<unsigned long long, 500ul>((array*)local_1b0, uVar39, (array*)local_1b0, 0,
                                                     (long)pCVar41->field_10520);
            }
            local_160->~ClientMessage();
            pCVar33 = local_268;
        }
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_1e0, -1);
        cVar6 = CoordType<UICoordSpecializer>::operator!=(pCVar33);
        if (cVar6 != '\0') {
            uVar19 = pCVar41->field_10512 - pCVar41->field_54848;
            uVar39 = 32767;
            if (uVar19 < 32767) {
                uVar39 = uVar19;
            }
            pCVar41->field_54848 = pCVar41->field_10512;
            local_1a0._0_4_ = pCVar41->field_10492;
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)&local_1c0, 0);
            cVar6 =
                CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)&local_1a0, local_1c0._0_4_);
            if (cVar6 == '\0') {
                uVar11 = local_1c8->GetUIHeight();
                cVar6 = CoordType<UICoordSpecializer>::operator>((CoordType<UICoordSpecializer>*)&local_1a0, uVar11);
                if (cVar6 != '\0') {
                    local_1a0._0_4_ = local_1c8->GetUIHeight();
                }
            } else {
                local_1a0._0_4_ = local_1c0._0_4_;
            }
            local_178._0_4_ = *(undefined4*)pCVar33;
            cVar6 =
                CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)local_178, local_1c0._0_4_);
            if (cVar6 == '\0') {
                uVar11 = local_1c8->GetMinMapX();
                cVar6 = CoordType<UICoordSpecializer>::operator>((CoordType<UICoordSpecializer>*)local_178, uVar11);
                if (cVar6 != '\0') {
                    local_1c0._0_4_ = local_1c8->GetMinMapX();
                    goto LAB_1000d087f;
                }
            } else {
            LAB_1000d087f:
                local_178._0_4_ = local_1c0._0_4_;
            }
            uVar15 = local_170._8_8_;
            puVar40 = (undefined1*)(local_170._8_8_ + 19120);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar40);
            uVar20 = pSVar14->GetOutgoingEncryption();
            local_160->MakeClientMessage(33, uVar20);
            this_00 = (SuperPacket*)(local_160 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_00,
                (uint)(byte) * (undefined1*)(uVar15 + 10504) | (int)uVar39 * 2);
            iVar32 = local_178->GetX();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_00, iVar32);
            iVar32 = local_1a0.GetX();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this_00, iVar32);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar40);
            pSVar14->SendClientMessage(local_160);
            if (*(int*)(local_170._8_8_ + 10500) != -1) {
                pSVar14 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar40);
                uVar15 = pSVar14->GetOutgoingEncryption();
                local_250.MakeClientMessage(45, uVar15);
                shared::ClientMessage::operator=((ClientMessage*)local_160, (ClientMessage*)&local_250);
                local_250.~ClientMessage();
                new (&local_250) SuperShuffledPacketFactory(this_00);
                pSVar21 = (ShuffledPacket3*)local_250.p2_alt2();
                uVar10 = local_178->GetX();
                iVar32 = local_1a0.GetX();
                ShuffledPacket3::p4<unsigned int>(pSVar21, uVar10 | iVar32 << 16);
                pSVar22 = (ShuffledPacket4*)local_250.p2_alt2();
                ShuffledPacket4::p2<int>(pSVar22, (int)uVar39);
                pSVar23 = (ShuffledPacket2*)local_250.HeapBeginPtr();
                ShuffledPacket2::p1<int>(pSVar23, (*(uint*)(local_170._8_8_ + 10500) & 1) +
                                                      *(int*)(local_170._8_8_ + 10496) * 2);
                pSVar14 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar40);
                pSVar14->SendClientMessage(local_160);
            }
            local_160->~ClientMessage();
            pCVar41 = (Client*)local_170._8_8_;
        }
        if ((214 < pCVar41->m_serverMajorVersion) && (pCVar41->field_53140 != 0)) {
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&pCVar41->field_19120);
            uVar15 = pSVar14->GetOutgoingEncryption();
            local_160->MakeClientMessage(62, uVar15);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), pCVar41->field_53140);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&pCVar41->field_19120);
            pSVar14->SendClientMessage(local_160);
            local_160->~ClientMessage();
        }
        if (pCVar41->field_8608 != 0) {
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&pCVar41->field_19120);
            uVar15 = pSVar14->GetOutgoingEncryption();
            local_160->MakeClientMessage(29, uVar15);
            pPVar26 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar26, 0);
            local_180 = (ClientInputHandler*)&pCVar41->field_19120;
            psVar24 = (shared_ptr*)pPVar26->size();
            lVar16 = pPVar26->CurrentTimeMillis();
            local_188 = psVar24;
            if (pCVar41->field_8608 != 0) {
                local_190 = (array<int, 128ul>*)(local_170._8_8_ + 8616);
                uVar39 = 0;
                do {
                    piVar25 = (int*)std::array<int, 128ul>::operator[](local_190, uVar39);
                    iVar32 = *piVar25;
                    if (iVar32 != -1) {
                        lVar34 = lVar16 - *(undefined8*)(local_170._8_8_ + 1115864);
                        if (16777214 < lVar34) {
                            lVar34 = 16777215;
                        }
                        *(long*)(local_170._8_8_ + 1115864) = lVar16;
                        new (&local_250) SuperShuffledPacketFactory((SuperPacket*)(local_160 + 8));
                        pSVar21 = (ShuffledPacket3*)local_250.HeapBeginPtr();
                        ShuffledPacket3::p1<int>(pSVar21, iVar32);
                        pSVar23 = (ShuffledPacket2*)local_250.p2_alt2();
                        ShuffledPacket2::p3<int>(pSVar23, (int)lVar34);
                    }
                    uVar39 = uVar39 + 1;
                } while (uVar39 < *(ulong*)(local_170._8_8_ + 8608));
            }
            sVar9 = ((local_160 + 8))->size();
            ((local_160 + 8))->pSize2(sVar9 - (short)local_188);
            pCVar41 = (Client*)local_170._8_8_;
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)local_180);
            pSVar14->SendClientMessage(local_160);
            local_160->~ClientMessage();
        }
        local_180 = (ClientInputHandler*)&pCVar41->field_8496;
        if (0 < pCVar41->field_7294748) {
            pCVar41->field_7294748 = pCVar41->field_7294748 + -1;
        }
        cVar6 = local_180->KeyHeld(96);
        if ((((cVar6 != '\0') || (cVar6 = local_180->KeyHeld(97), cVar6 != '\0')) ||
             (cVar6 = local_180->KeyHeld(98), cVar6 != '\0')) ||
            (cVar6 = local_180->KeyHeld(99), cVar6 != '\0')) {
            pCVar41->field_7294752 = 1;
        }
        if ((pCVar41->field_7294752 != '\0') && (pCVar41->field_7294748 < 1)) {
            pCVar41->field_7294748 = 20;
            pCVar41->field_7294752 = 0;
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&pCVar41->field_19120);
            uVar15 = pSVar14->GetOutgoingEncryption();
            local_160->MakeClientMessage(23, uVar15);
            new (&local_250) SuperShuffledPacketFactory((SuperPacket*)(local_160 + 8));
            pPVar26 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_250.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar26, pCVar41->field_53112);
            pSVar21 = (ShuffledPacket3*)local_250.p2_alt2();
            ShuffledPacket3::p2<int>(pSVar21, pCVar41->field_53108);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&pCVar41->field_19120);
            pSVar14->SendClientMessage(local_160);
            local_160->~ClientMessage();
        }
        GlCheckFriendChatState(pCVar41);
        GlCheckClanState(pCVar41);
        GlCheckMinimap(pCVar41);
        if (pCVar41->field_8448 != 30)
            goto LAB_1000d1cc6;
        if (pCVar41->m_frozen == false) {
            LocChangeDoQueue(pCVar41);
            GlDoSoundsQueue(pCVar41);
            GlMovePlayers(pCVar41);
            GlMoveNpcs(pCVar41);
            GlTimeoutChat(pCVar41);
            pCVar41->field_1115692 = pCVar41->field_1115692 + 1;
        }
        local_1b0 = (shared_ptr*)pCVar41->field_2505056;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_1a0, local_1b0);
        local_188 = (shared_ptr*)pCVar41->field_2505072;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_1c0, local_188);
        new (local_160) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)pCVar41->field_2505144,
                                              (shared_ptr*)local_160);
        local_160->~shared_ptr();
        pCVar41->field_2505172 = 0;
        pCVar41->field_2505160 = 0;
        pCVar41->field_2505224 = 0;
        cVar6 = IsPlayerAdmin(pCVar41);
        if (cVar6 != '\0') {
            cVar6 = local_180->KeyHeld(107);
            if (cVar6 != '\0') {
                cVar6 = local_180->KeyHeld(81);
                if ((cVar6 != '\0') && (pCVar41->field_53140 != 0)) {
                    puVar40 = pCVar41->field_52016;
                    lVar16 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)puVar40);
                    iVar12 = *(int*)(lVar16 + 1204) - *(int*)(local_170._8_8_ + 53140);
                    iVar32 = 3;
                    if (iVar12 < 3) {
                        iVar32 = iVar12;
                    }
                    iVar12 = 0;
                    if (-1 < iVar32) {
                        iVar12 = iVar32;
                    }
                    lVar16 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)puVar40);
                    if (iVar12 != *(int*)(lVar16 + 1204)) {
                        lVar16 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)puVar40);
                        piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar16 + 444), 0);
                        iVar32 = *piVar25;
                        uVar10 = *(uint*)(local_170._8_8_ + 53220);
                        lVar16 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)puVar40);
                        piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar16 + 484), 0);
                        TelePlayer((Client*)local_170._8_8_, uVar10 + iVar32,
                                   *(uint*)(local_170._8_8_ + 53224) + *piVar25, iVar12, false);
                    }
                    *(int*)(local_170._8_8_ + 53140) = 0;
                    pCVar41 = (Client*)local_170._8_8_;
                }
            }
        }
        local_1d8 = (shared_ptr*)pCVar41->field_2505104;
        bVar42 = operator!=(local_1d8, (_func_decltype_nullptr*)0);
        if (bVar42) {
            local_180->RequestMinimenuBuild();
        }
        cVar6 = NeedBuildMinimenu(pCVar41);
        if (cVar6 != '\0') {
            pCVar41->field_52344->ResetMinimenu();
        }
        if (pCVar41->field_8606 != '\0') {
            pCVar41->field_19072->ClearFocusedComponent();
        }
        this_01 = local_1c8;
        iVar32 = pCVar41->field_53216;
        if (iVar32 != -1) {
            local_160._0_4_ = local_1c8->GetMinMapX();
            iVar12 = local_160->GetX();
            local_250.m_argType = this_01->GetUIHeight();
            iVar13 = local_250.GetX();
            in_stack_fffffffffffffd40 = 0;
            in_stack_fffffffffffffd38 = 0;
            LoopInterface(pCVar41, iVar32, 0, 0, iVar12, iVar13, 0, 0);
            PostLoopInterface(pCVar41);
        }
        pCVar41->field_2505808 = pCVar41->field_2505808 + 1;
        pCVar41->field_52344->Sort();
        local_190 = (array<int, 128ul>*)&pCVar41->field_2506416;
        while (cVar6 = local_190->empty(), cVar6 == '\0') {
            pHVar27 = (HookReq*)eastl::list<HookReq, eastl::allocator>::front();
            puVar40 = &pHVar27->field_32;
            lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar40);
            if (*(int*)(lVar16 + 8) < 0) {
            LAB_1000d1040:
                ScriptRunner::ExecuteScript(pHVar27, 500000);
            } else {
                shared_ptr<dash3d::Decor>::shared_ptr(local_2a8, (shared_ptr*)puVar40);
                sVar3._4_4_ = in_stack_fffffffffffffd3c;
                sVar3._0_4_ = in_stack_fffffffffffffd38;
                sVar3.field_8._0_4_ = in_stack_fffffffffffffd40;
                sVar3.field_8._4_4_ = in_stack_fffffffffffffd44;
                psVar24 = (shared_ptr*)GetInterfaceLayer((Client*)local_170._8_8_, sVar3);
                local_2a8->~shared_ptr();
                bVar42 = operator==(psVar24, (_func_decltype_nullptr*)0);
                if (!bVar42) {
                    lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar24);
                    cVar6 = ((lVar16 + 2000))->empty();
                    if (cVar6 == '\0') {
                        lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar40);
                        iVar32 = *(int*)(lVar16 + 8);
                        lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar24);
                        iVar12 = ((lVar16 + 2000))->end();
                        if (iVar32 < iVar12) {
                            lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar24);
                            lVar34 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar40);
                            psVar24 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                                (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)(lVar16 + 2000),
                                (long)*(int*)(lVar34 + 8));
                            bVar42 = operator!=(psVar24, (shared_ptr*)puVar40);
                            if (!bVar42)
                                goto LAB_1000d1040;
                        }
                    }
                }
                if (*(char*)(local_170._8_8_ + 54760) != '\0') {
                    uVar15 = logger::default_logger();
                    lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar40);
                    in_stack_fffffffffffffd38 = *(undefined4*)(lVar16 + 4);
                    lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar40);
                    in_stack_fffffffffffffd40 = *(undefined4*)(lVar16 + 8);
                    lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar40);
                    pcVar28 = " (Entity overlay)";
                    if (*(char*)(lVar16 + 24) == '\0') {
                        pcVar28 = "";
                    }
                    logger::Logger::Log(
                        uVar15, 0, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        6188, "Skipping script execution for deleted component - com: %i subid: %i%s",
                        in_stack_fffffffffffffd38, in_stack_fffffffffffffd40, pcVar28);
                }
            }
            local_190->pop_front();
        }
        puVar40 = (undefined1*)(local_170._8_8_ + 2506448);
        while (cVar6 = puVar40->empty(), cVar6 == '\0') {
            pHVar27 = (HookReq*)eastl::list<HookReq, eastl::allocator>::front();
            puVar1 = &pHVar27->field_32;
            lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
            if (*(int*)(lVar16 + 8) < 0) {
            LAB_1000d11f0:
                ScriptRunner::ExecuteScript(pHVar27, 500000);
            } else {
                shared_ptr<dash3d::Decor>::shared_ptr(local_298, (shared_ptr*)puVar1);
                sVar4._4_4_ = in_stack_fffffffffffffd3c;
                sVar4._0_4_ = in_stack_fffffffffffffd38;
                sVar4.field_8._0_4_ = in_stack_fffffffffffffd40;
                sVar4.field_8._4_4_ = in_stack_fffffffffffffd44;
                psVar24 = (shared_ptr*)GetInterfaceLayer((Client*)local_170._8_8_, sVar4);
                local_298->~shared_ptr();
                bVar42 = operator==(psVar24, (_func_decltype_nullptr*)0);
                if (!bVar42) {
                    lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar24);
                    cVar6 = ((lVar16 + 2000))->empty();
                    if (cVar6 == '\0') {
                        lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                        iVar32 = *(int*)(lVar16 + 8);
                        lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar24);
                        iVar12 = ((lVar16 + 2000))->end();
                        if (iVar32 < iVar12) {
                            lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar24);
                            lVar34 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                            psVar24 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                                (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)(lVar16 + 2000),
                                (long)*(int*)(lVar34 + 8));
                            bVar42 = operator!=(psVar24, (shared_ptr*)puVar1);
                            if (!bVar42)
                                goto LAB_1000d11f0;
                        }
                    }
                }
                if (*(char*)(local_170._8_8_ + 54760) != '\0') {
                    uVar15 = logger::default_logger();
                    lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                    in_stack_fffffffffffffd38 = *(undefined4*)(lVar16 + 4);
                    lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                    in_stack_fffffffffffffd40 = *(undefined4*)(lVar16 + 8);
                    lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                    pcVar28 = " (Entity overlay)";
                    if (*(char*)(lVar16 + 24) == '\0') {
                        pcVar28 = "";
                    }
                    logger::Logger::Log(
                        uVar15, 0, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        6222, "Skipping script execution for deleted component - com: %i subid: %i%s",
                        in_stack_fffffffffffffd38, in_stack_fffffffffffffd40, pcVar28);
                }
            }
            puVar40->pop_front();
        }
        puVar40 = (undefined1*)(local_170._8_8_ + 2506384);
        while (true) {
            cVar6 = puVar40->empty();
            pCVar41 = (Client*)local_170._8_8_;
            if (cVar6 != '\0')
                break;
            pHVar27 = (HookReq*)eastl::list<HookReq, eastl::allocator>::front();
            puVar1 = &pHVar27->field_32;
            lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
            if (*(int*)(lVar16 + 8) < 0) {
            LAB_1000d1390:
                ScriptRunner::ExecuteScript(pHVar27, 500000);
            } else {
                shared_ptr<dash3d::Decor>::shared_ptr(local_288, (shared_ptr*)puVar1);
                sVar5._4_4_ = in_stack_fffffffffffffd3c;
                sVar5._0_4_ = in_stack_fffffffffffffd38;
                sVar5.field_8._0_4_ = in_stack_fffffffffffffd40;
                sVar5.field_8._4_4_ = in_stack_fffffffffffffd44;
                psVar24 = (shared_ptr*)GetInterfaceLayer((Client*)local_170._8_8_, sVar5);
                local_288->~shared_ptr();
                bVar42 = operator==(psVar24, (_func_decltype_nullptr*)0);
                if (!bVar42) {
                    lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar24);
                    cVar6 = ((lVar16 + 2000))->empty();
                    if (cVar6 == '\0') {
                        lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                        iVar32 = *(int*)(lVar16 + 8);
                        lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar24);
                        iVar12 = ((lVar16 + 2000))->end();
                        if (iVar32 < iVar12) {
                            lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar24);
                            lVar34 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                            psVar24 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                                (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)(lVar16 + 2000),
                                (long)*(int*)(lVar34 + 8));
                            bVar42 = operator!=(psVar24, (shared_ptr*)puVar1);
                            if (!bVar42)
                                goto LAB_1000d1390;
                        }
                    }
                }
                if (*(char*)(local_170._8_8_ + 54760) != '\0') {
                    uVar15 = logger::default_logger();
                    lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                    in_stack_fffffffffffffd38 = *(undefined4*)(lVar16 + 4);
                    lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                    in_stack_fffffffffffffd40 = *(undefined4*)(lVar16 + 8);
                    lVar16 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                    pcVar28 = " (Entity overlay)";
                    if (*(char*)(lVar16 + 24) == '\0') {
                        pcVar28 = "";
                    }
                    logger::Logger::Log(
                        uVar15, 0, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        6256, "Skipping script execution for deleted component - com: %i subid: %i%s",
                        in_stack_fffffffffffffd38, in_stack_fffffffffffffd40, pcVar28);
                }
            }
            puVar40->pop_front();
        }
        puVar40 = (undefined1*)(local_170._8_8_ + 2506480);
        while (cVar6 = puVar40->empty(), cVar6 == '\0') {
            pIVar29 = (InterfaceMouseEvent*)eastl::list<InterfaceMouseEvent, eastl::allocator>::front();
            ExecuteHardcodedMouseEvent(pCVar41, pIVar29);
            puVar40->pop_front();
        }
        (*(Minimenu**)((long)pCVar41 + 52344))->GameLoop();
        GlWorldMap(pCVar41);
        bVar42 = operator!=(local_1d8, (_func_decltype_nullptr*)0);
        if (bVar42) {
            LoopIf3Drag(pCVar41);
        }
        bVar42 = operator!=((shared_ptr*)((long)pCVar41 + 2505208), (_func_decltype_nullptr*)0);
        if (bVar42) {
            GlIf3DragContents(pCVar41);
        }
        if (*(int*)((long)pCVar41 + 7294760) != -1) {
            puVar40 = (undefined1*)((long)pCVar41 + 19184);
            std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)puVar40);
            cVar6 = dash3d::world::HasValidGroundOpToExecute();
            if (cVar6 != '\0') {
                if (*(char*)((long)pCVar41 + 54760) != '\0') {
                    uVar15 = logger::default_logger();
                    logger::Logger::Log(
                        uVar15, 0, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        6300, "HasValidGroundMoveToExecute");
                }
                iVar32 = dash3d::world::m_groundZ;
                uVar10 = dash3d::world::m_groundX;
                if (*(int*)((long)pCVar41 + 7294760) == 1854) {
                    pNVar36 = (NpcUID*)(ulong)dash3d::world::m_groundY;
                    new (local_160)
                        rs2lib::CoordGrid(dash3d::world::m_groundY, dash3d::world::m_groundX, dash3d::world::m_groundZ);
                    cVar6 = ClientConstants::IsCoordInBuildArea((CoordGrid*)local_160);
                    if (cVar6 == '\0') {
                        bVar42 = false;
                        goto LAB_1000d187f;
                    }
                    ScriptRunner::SetActiveTile(dash3d::world::m_groundY, uVar10 + *(uint*)(local_170._8_8_ + 53220),
                                                iVar32 + *(uint*)(local_170._8_8_ + 53224));
                    new (local_160) HookReq();
                    local_160->set_max_size(1, 3);
                    pCVar41 = (Client*)local_170._8_8_;
                    new (&local_250) HookArg(*(int*)(local_170._8_8_ + 7294764));
                    this_03 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                        (Array<HookArg, eastl::allocator>*)local_160, 0);
                    HookArg::operator=(this_03, &local_250);
                    local_250.~LanguageMessage();
                    local_e4 = 34;
                    pNVar36 = (NpcUID*)500000;
                    ScriptRunner::ExecuteScript((HookReq*)local_160, 500000);
                    local_160->~HookReq();
                    bVar42 = true;
                } else {
                    if (*(int*)((long)pCVar41 + 7294760) != 23) {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client.cpp",
                                        6364, "m_deferredGroundOp is not a valid ground op ID");
                    }
                    local_190 = (array<int, 128ul>*)(local_170._8_8_ + 19120);
                    pSVar14 = (ServerConnection*)
                                  std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                      (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)local_190);
                    uVar15 = pSVar14->GetOutgoingEncryption();
                    local_160->MakeClientMessage(38, uVar15);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                        (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8), 5);
                    new (&local_250) SuperShuffledPacketFactory((SuperPacket*)(local_160 + 8));
                    pSVar21 = (ShuffledPacket3*)local_250.p2_alt2();
                    uVar15 = local_170._8_8_;
                    ShuffledPacket3::p2<int>(pSVar21, *(uint*)(local_170._8_8_ + 53220) + uVar10);
                    pSVar22 = (ShuffledPacket4*)local_250.p2_alt2();
                    ShuffledPacket4::p2<int>(pSVar22, *(uint*)(uVar15 + 53224) + iVar32);
                    pSVar22 = (ShuffledPacket4*)local_250.HeapBeginPtr();
                    this_02 = local_180;
                    cVar6 = local_180->KeyHeld(81);
                    if (cVar6 == '\0') {
                    LAB_1000d170a:
                        cVar6 = this_02->KeyHeld(81);
                        uVar35 = 0;
                        if (cVar6 == '\0') {
                            bVar8 = this_02->KeyHeld(107);
                            uVar35 = (uint)bVar8;
                        }
                    } else {
                        cVar6 = this_02->KeyHeld(107);
                        uVar35 = 2;
                        if (cVar6 == '\0')
                            goto LAB_1000d170a;
                    }
                    ShuffledPacket4::p1<int>(pSVar22, uVar35);
                    pSVar14 = (ServerConnection*)
                                  std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                      (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)local_190);
                    pSVar14->SendClientMessage(local_160);
                    pNVar36 = (NpcUID*)(ulong)uVar10;
                    SetPlayerDestination((Client*)local_170._8_8_, uVar10, iVar32);
                    local_160->~ClientMessage();
                    bVar42 = true;
                LAB_1000d187f:
                    pCVar41 = (Client*)local_170._8_8_;
                }
                std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)puVar40);
                dash3d::world::ResetGroundOp();
                pCVar41->field_7294760 = -1;
                pCVar41->field_7294764 = -1;
                if (bVar42) {
                    eastl::destruct<highlight::NpcUID*>((eastl*)local_160, pNVar36, extraout_RDX);
                    eastl::destruct<highlight::NpcUID*>((eastl*)&local_250, pNVar36, extraout_RDX_00);
                    cVar6 = local_180->PrimaryOpOnPress();
                    if (cVar6 == '\0') {
                        local_1c8->UICoordFromWindowCoord(pCVar41->field_52736 + dash3d::world::m_clickX,
                                                          pCVar41->field_52740 + dash3d::world::m_clickY, local_160,
                                                          (CoordType*)&local_250);
                    } else {
                        local_160._0_4_ = *(undefined4*)&pCVar41->field_19056;
                        local_250.m_argType = *(uint*)&pCVar41->field_19060;
                    }
                    (pCVar41->field_52344, local_160._0_4_, local_250.m_argType, 0)->StartFeedback();
                }
            }
        }
        bVar42 = operator!=(local_1b0, &local_1a0);
        if (bVar42) {
            bVar42 = operator!=(&local_1a0, (_func_decltype_nullptr*)0);
            if (bVar42) {
                ComponentUpdated(pCVar41, &local_1a0);
            }
            bVar42 = operator!=(local_1b0, (_func_decltype_nullptr*)0);
            if (bVar42) {
                ComponentUpdated(pCVar41, local_1b0);
            }
        }
        bVar42 = operator!=(local_188, &local_1c0);
        if ((bVar42) && (*(int*)&pCVar41->field_2505088 == *(int*)((long)&pCVar41->field_2505088 + 4))) {
            bVar42 = operator!=(&local_1c0, (_func_decltype_nullptr*)0);
            if (bVar42) {
                ComponentUpdated(pCVar41, &local_1c0);
            }
            bVar42 = operator!=(local_188, (_func_decltype_nullptr*)0);
            if (bVar42) {
                ComponentUpdated(pCVar41, local_188);
            }
        }
        bVar42 = operator!=(local_188, (_func_decltype_nullptr*)0);
        iVar32 = *(int*)&pCVar41->field_2505088;
        if (bVar42) {
            iVar12 = *(int*)((long)&pCVar41->field_2505088 + 4);
            if ((iVar32 < iVar12) && (*(int*)& pCVar41->field_2505088 = iVar32 + 1, iVar32 + 1 == iVar12)) {
                ComponentUpdated(pCVar41, local_188);
            }
        } else if (0 < iVar32) {
            *(int*)&pCVar41->field_2505088 = iVar32 + -1;
        }
        GlFollowCamera(pCVar41);
        if (pCVar41->field_52996 == '\0') {
            if (pCVar41->field_52997 != '\0') {
                GlCinemaCamera(pCVar41);
            }
        } else {
            SmoothResetCamera(pCVar41);
        }
        lVar16 = 627237;
        do {
            *(int*)(pCVar41->field_8 + lVar16 * 4 + -8) = *(int*)(pCVar41->field_8 + lVar16 * 4 + -8) + 1;
            lVar16 = lVar16 + 1;
        } while (lVar16 != 627242);
        this_04 = (ClientVarValues*)std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
            (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)&pCVar41->field_52488);
        this_04->Service();
        iVar32 = GetIdleTimeRemaining(pCVar41);
        if (iVar32 < 1) {
            pCVar41->field_54156 = 250;
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&pCVar41->field_19120);
            uVar15 = pSVar14->GetOutgoingEncryption();
            local_160->MakeClientMessage(24, uVar15);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&pCVar41->field_19120);
            pSVar14->SendClientMessage(local_160);
            local_160->~ClientMessage();
        }
        this_05 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
            (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&pCVar41->field_52768);
        this_05->Service();
        puVar40 = &pCVar41->field_19120;
        pSVar14 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar40);
        pSVar14->IncrementNoTimeOutTickCounter();
        pSVar14 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar40);
        uVar39 = pSVar14->GetTicksSinceNoTimeOutPacket();
        if (50 < uVar39) {
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar40);
            uVar15 = pSVar14->GetOutgoingEncryption();
            local_160->MakeClientMessage(40, uVar15);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar40);
            pSVar14->SendClientMessage(local_160);
            pSVar14 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar40);
            pSVar14->ResetNoTimeOutTickCounter();
            local_160->~ClientMessage();
        }
        puVar40 = &pCVar41->field_8408;
        bVar42 = puVar40->operator_cast_to_bool();
        if (bVar42) {
            p_Var30 = (__atomic_base*)shared_ptr<FolderSelection::FolderSelectionRequest>::operator->(
                (shared_ptr<FolderSelection::FolderSelectionRequest>*)puVar40);
            iVar32 = std::__atomic_base::operator_cast_to_FolderPathRequestStatus(p_Var30);
            if (iVar32 == 1) {
                this_06 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&pCVar41
                                ->field_8376);
                shared_ptr<FolderSelection::FolderSelectionRequest>::operator->(
                    (shared_ptr<FolderSelection::FolderSelectionRequest>*)puVar40);
                pcVar28 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>(pcVar28);
                this_06->SetScreenshotPath(local_160);
                /* WARNING: Subroutine does not return */
                local_160->~fixed_string();
            }
            p_Var30 = (__atomic_base*)shared_ptr<FolderSelection::FolderSelectionRequest>::operator->(
                (shared_ptr<FolderSelection::FolderSelectionRequest>*)puVar40);
            iVar32 = std::__atomic_base::operator_cast_to_FolderPathRequestStatus(p_Var30);
            if (iVar32 != 0) {
                new (local_160) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                shared_ptr<FolderSelection::FolderSelectionRequest>::operator=(
                    (shared_ptr<FolderSelection::FolderSelectionRequest>*)puVar40, (shared_ptr*)local_160);
                local_160->~shared_ptr();
            }
        }
        if (pCVar41->m_mapBuildRegionMode != false) {
            pCVar41->m_highlightManager->ServiceRegionHighlights();
        }
        this_07 = (HiscoresManager*)std::unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>::operator->(
            (unique_ptr<HiscoresManager, std::default_delete<HiscoresManager>>*)&pCVar41->field_52776);
        this_07->ServiceHTTPRequests();
        ServicePendingKeyFrameSets(pCVar41);
        (&pCVar41->field_7305840, 500)->Clean();
        local_1c0.~shared_ptr();
        local_1a0.~shared_ptr();
    LAB_1000d1cc6:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000d2740, 528 bytes, placed by __FILE__ string
    // Client::OnWindowModeChanged()
    void Client::OnWindowModeChanged() {
        undefined1* this_00;
        long lVar1;
        byte bVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        DeviceOptions* pDVar6;
        GraphicsApp* this_01;
        long* plVar7;
        long* plVar8;
        Window* this_02;
        int* piVar9;
        NXTPixToolkit* this_03;
        StaticPointLight* this_04;
        float* pfVar10;
        float local_40[5];
        float local_2c;

        field_52448 = 0;
        this_00 = &field_8376;
        pDVar6 = (DeviceOptions*)
                     std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                         (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_00);
        iVar3 = pDVar6->GetWindowWidth();
        pDVar6 = (DeviceOptions*)
                     std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                         (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_00);
        iVar4 = pDVar6->GetWindowHeight();
        this_01 = (GraphicsApp*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_00);
        iVar5 = this_01->GetWindowMode();
        bVar2 = 1;
        if (iVar5 != 2) {
            bVar2 = field_8425;
        }
        field_52456 = bVar2;
        if (field_8425 == false) {
            plVar7 = (long*)OSRenderCore_AudioThread::Instance();
            this_01 = (GraphicsApp*)((long)plVar7 + *(long*)(*plVar7 + -24));
            this_01->SetClientSize(iVar3, iVar4);
        }
        plVar7 = (long*)OSRenderCore_AudioThread::Instance();
        lVar1 = *(long*)(*plVar7 + -24);
        plVar8 = (long*)this_01->Instance();
        this_02 = (Window*)(**(code**)(*plVar8 + 96))(plVar8);
        bVar2 = this_02->IsFullScreen();
        (((long)plVar7 + lVar1))->SetResizable((bool)(bVar2 ^ 1));
        if (field_52456 == 0) {
            field_7164656->ResetColour();
            this_03 = (NXTPixToolkit*)GetMemoryCache();
            this_04 = (StaticPointLight*)this_03->GetScreen();
            local_40[0] = (float)this_04->GetAttenuationFalloff();
            local_2c = 1.0;
            pfVar10 = std::max<float>(&local_2c, local_40);
            local_40[0] = *pfVar10;
            if (field_120 < 765) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_sWidMin >= ClientConstants::MIN_FIXED_WIDTH",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                    4038, "The fixed canvas width should never be smaller than %i, it is currently set to: %i", 765);
            }
            iVar3 = jag::math::RoundFloatToInt((float)field_120 * local_40[0]);
            iVar4 = jag::math::RoundFloatToInt(local_40[0] * 503.0);
        } else {
            local_40->GetTopSize();
            local_2c = 1.0762e-41;
            piVar9 = (int*)local_40->second();
            piVar9 = std::min<int>((int*)&local_2c, piVar9);
            iVar3 = *piVar9;
            local_2c = 3.0268e-42;
            piVar9 = (int*)local_40->qw();
            piVar9 = std::min<int>((int*)&local_2c, piVar9);
            iVar4 = *piVar9;
        }
        SetDesiredCanvasSize(iVar3, iVar4);
        if ((24 < (int)field_8448) && (field_8448 != 1000)) {
            SendWindowMode(this);
        }
    }

    // 0x1000d6f30, 1440 bytes, placed by class name
    // Client::DrawBuildInfo()
    void Client::DrawBuildInfo() {
        undefined1* this_00;
        int iVar1;
        bool bVar2;
        long lVar3;
        PixfontGeneric* pPVar4;
        Pix2D* pPVar5;
        char* pcVar6;
        int* piVar7;
        int iVar8;
        int iVar9;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>
            local_8f8[16];
        allocator local_8e8[32];
        allocator local_8c8[8];
        PixfontGeneric* local_8c0;
        int local_8b4;
        allocator local_8b0[552];
        allocator local_688[552];
        eastl::string local_460[1064];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = field_1104256;
        bVar2 = operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if ((!bVar2) && (field_144 != (NXTPixToolkit*)0)) {
            local_8f8->GetTopSize();
            lVar3 = shared_ptr<jstring::PixfontGeneric>::operator->((shared_ptr<jstring::PixfontGeneric>*)this_00);
            iVar8 = *(int*)(lVar3 + 4);
            lVar3 = shared_ptr<jstring::PixfontGeneric>::operator->((shared_ptr<jstring::PixfontGeneric>*)this_00);
            iVar8 = iVar8 + *(int*)(lVar3 + 8);
            pPVar4 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                (shared_ptr<jstring::PixfontGeneric>*)this_00);
            eastl::allocator::allocator(local_688, "EASTL basic_string");
            eastl::string::basic_string(local_460, "server:", local_688);
            pPVar5 = (Pix2D*)(*(code*)*field_144->field_0)();
            pPVar4->DrawString(local_460, 0, iVar8, 16776960, -1, pPVar5);
            local_8b4 = iVar8;
            eastl::string::~basic_string(local_460);
            new (local_460) eastl::fixed_string<char, 1024, true, eastl::allocator>();
            GetServerBuildInfoPrettyPrint<char, 1024>(this, (fixed_string*)local_460);
            pPVar4 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                (shared_ptr<jstring::PixfontGeneric>*)this_00);
            pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::allocator::allocator(local_8b0, "EASTL basic_string");
            new (local_688) eastl::string(pcVar6, local_8b0);
            piVar7 = (int*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(local_8f8);
            iVar8 = *piVar7;
            piVar7 = (int*)local_8f8->qw();
            iVar1 = *piVar7;
            pPVar5 = (Pix2D*)(*(code*)*field_144->field_0)();
            iVar8 = pPVar4->DrawStringMultiline(local_688, 20, local_8b4, iVar8 + -20, iVar1 - local_8b4, 16776960, -1,
                                                0, 0, local_8b4, pPVar5);
            local_688->~basic_string();
            pPVar4 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                (shared_ptr<jstring::PixfontGeneric>*)this_00);
            eastl::allocator::allocator(local_8b0, "EASTL basic_string");
            new (local_688) eastl::string("client:", local_8b0);
            pPVar5 = (Pix2D*)(*(code*)*field_144->field_0)();
            iVar9 = (iVar8 + 2) * local_8b4;
            pPVar4->DrawString(local_688, 0, iVar9, 16776960, -1, pPVar5);
            local_688->~basic_string();
            new (local_688) eastl::fixed_string<char, 512, true, eastl::allocator>();
            GetClientBuildInfoPrettyPrint<char, 512>(this, (fixed_string*)local_688);
            local_8c0 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                (shared_ptr<jstring::PixfontGeneric>*)this_00);
            pcVar6 = (char*)eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
            eastl::allocator::allocator(local_8e8, "EASTL basic_string");
            new (local_8b0) eastl::string(pcVar6, local_8e8);
            piVar7 = (int*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(local_8f8);
            iVar8 = *piVar7;
            piVar7 = (int*)local_8f8->qw();
            iVar1 = *piVar7;
            pPVar5 = (Pix2D*)(*(code*)*field_144->field_0)();
            iVar8 = local_8c0->DrawStringMultiline(local_8b0, 20, iVar9, iVar8 + -20, iVar1 - iVar9, 16776960, -1, 0, 0,
                                                   local_8b4, pPVar5);
            local_8b0->~basic_string();
            pPVar4 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                (shared_ptr<jstring::PixfontGeneric>*)this_00);
            eastl::allocator::allocator(local_8e8, "EASTL basic_string");
            new (local_8b0) eastl::string("operating system:", local_8e8);
            pPVar5 = (Pix2D*)(*(code*)*field_144->field_0)();
            iVar9 = iVar9 + local_8b4 + iVar8 * local_8b4;
            pPVar4->DrawString(local_8b0, 0, iVar9, 16776960, -1, pPVar5);
            local_8b0->~basic_string();
            new (local_8b0) eastl::fixed_string<char, 512, true, eastl::allocator>();
            GetDeviceBuildInfoPrettyPrint<char, 512>(this, (fixed_string*)local_8b0);
            pPVar4 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                (shared_ptr<jstring::PixfontGeneric>*)this_00);
            pcVar6 = (char*)eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
            eastl::allocator::allocator(local_8c8, "EASTL basic_string");
            new (local_8e8) eastl::string(pcVar6, local_8c8);
            piVar7 = (int*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(local_8f8);
            iVar8 = *piVar7;
            piVar7 = (int*)local_8f8->qw();
            iVar1 = *piVar7;
            pPVar5 = (Pix2D*)(*(code*)*field_144->field_0)();
            pPVar4->DrawStringMultiline(local_8e8, 20, iVar9, iVar8 + -20, iVar1 - iVar9, 16776960, -1, 0, 0, local_8b4,
                                        pPVar5);
            local_8e8->~basic_string();
            /* WARNING: Subroutine does not return */
            local_8b0->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000d7500, 144 bytes, placed by class name
    // Client::RebuildMap()
    void Client::RebuildMap() {
        bool bVar1;
        long lVar2;
        Client* this_00;

        bVar1 = field_53258;
        this_00 = this;
        if (bVar1 != m_usingRSeven) {
            m_usingRSeven = bVar1;
            dash3d::g_usingRSeven = bVar1;
            if (bVar1 == false) {
                dash3d::world::m_modelLitRendererRt7 = (Client*)0;
            } else {
                lVar2 = Instance();
                this_00 = (Client*)(lVar2 + 16);
                dash3d::world::m_modelLitRendererRt7 = this_00;
                this_00->SetSpritesJs5(m_pSprites);
            }
        }
        ResetCache(this_00);
        StartRebuild(this, field_53228, field_53232, false);
        field_53257 = 0;
    }

    // 0x1000d7590, 320 bytes, placed by class name
    // Client::MainQuit()
    void Client::MainQuit() {
        undefined1* puVar1;
        DebugUIManager* this_00;
        Js5ResourceProvider* this_01;
        world* this_02;
        bool bVar2;
        long* plVar3;
        _func_decltype_nullptr* in_RSI;
        ServerConnection* this_03;
        Client* this_04;

        SaveAndClosePerAccountData(this);
        puVar1 = &field_19120;
        this_03 = (ServerConnection*)puVar1;
        bVar2 = std::operator!=((unique_ptr*)puVar1, in_RSI);
        if (bVar2) {
            this_03 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)puVar1);
            this_03->Close();
        }
        this_00 = (DebugUIManager*)this_03->Instance();
        this_00->UnregisterInputHandler();
        bVar2 = std::operator!=((unique_ptr*)&field_2508736, in_RSI);
        if (bVar2) {
            plVar3 =
                (long*)std::unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>::
                operator->((unique_ptr<sound::PCMPlayerMainThread,
                                       std::default_delete<sound::PCMPlayerMainThread>>*)&field_2508736);
            (**(code**)(*plVar3 + 32))(plVar3);
        }
        bVar2 = std::operator!=((unique_ptr*)&field_2508744, in_RSI);
        if (bVar2) {
            plVar3 =
                (long*)std::unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>::
                operator->((unique_ptr<sound::PCMPlayerMainThread,
                                       std::default_delete<sound::PCMPlayerMainThread>>*)&field_2508744);
            (**(code**)(*plVar3 + 32))(plVar3);
        }
        bVar2 = std::operator!=((unique_ptr*)&field_2508480, in_RSI);
        if (bVar2) {
            plVar3 = (long*)std::unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>::operator->(
                (unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>*)&field_2508480);
            (**(code**)(*plVar3 + 32))(plVar3);
        }
        bVar2 = std::operator!=((unique_ptr*)&field_2508488, in_RSI);
        if (bVar2) {
            this_01 =
                (Js5ResourceProvider*)
                    std::unique_ptr<Js5ResourceProvider, std::default_delete<Js5ResourceProvider>>::operator->(
                        (unique_ptr<Js5ResourceProvider, std::default_delete<Js5ResourceProvider>>*)&field_2508488);
            this_01->Shutdown();
        }
        (&field_54560, (DBTableIndexCache*)0)->reset();
        (&field_7305840)->Reset();
        puVar1 = &field_19184;
        this_04 = (Client*)puVar1;
        bVar2 = std::operator!=((unique_ptr*)puVar1, (_func_decltype_nullptr*)0);
        if (bVar2) {
            this_02 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)puVar1);
            this_02->ResetMap();
            this_04 = (Client*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)puVar1);
            this_04->ResetAll();
        }
        ResetCache(this_04);
        TitleScreen::Close();
        ~AutoSingleton();
    }

    // 0x1000d76d0, 144 bytes, placed by class name
    // Client::SaveAndClosePerAccountData()
    void Client::SaveAndClosePerAccountData() {
        ObjTagManager* pOVar1;
        ClientVarValues* pCVar2;

        if (GameShell3Cache::HasLoggedInAccountId() != '\0') {
            m_highlightManager->SaveToFiles();
            m_highlightManager->ResetAll();
            pOVar1 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            pOVar1->SaveTags();
            pOVar1 =
                (ObjTagManager*)
                    std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->(
                        (unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
            pOVar1->ResetAll();
            m_lootTrackerSaveHandler->Close();
            pCVar2 =
                (ClientVarValues*)std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
                    (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)&field_52488);
            pCVar2->SavePermVars();
            pCVar2 =
                (ClientVarValues*)std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
                    (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)&field_52488);
            pCVar2->ResetForNewLogin();
            GameShell3Cache::ClearLoggedInAccountId();
        }
    }

    // 0x1000d7840, 80 bytes, placed by class name
    // Client::ResetCache()
    void Client::ResetCache() {
        configdecoder::IdkType::ResetCache();
        configdecoder::LocType::ResetCache();
        configdecoder::NpcType::ResetCache();
        configdecoder::ObjType::ResetCache();
        configdecoder::SeqType::ResetCache();
        configdecoder::SpotType::ResetCache();
        configdecoder::VarBitType::ResetCache();
        configdecoder::VarpType::ResetCache();
        configdecoder::HeadbarType::ResetCache();
        configdecoder::MapElementType::ResetCache();
        configdecoder::DBRowType::ResetCache();
        configdecoder::DBTableType::ResetCache();
        rs2lib::PlayerModel::ResetCache();
        rs2lib::IfType::ResetCache();
    }

    // 0x1000d7a40, 992 bytes, placed by class name
    // Client::Destroy()
    void Client::Destroy() {
        shared_ptr local_30;

        shared_ptr<rs2lib::IfType>::reset();
        shared_ptr<rs2lib::IfType>::reset();
        (&field_52488, (ClientVarValues*)0)->reset();
        shared_ptr<configdecoder::OldscapeVarTypeList>::reset();
        shared_ptr<configdecoder::OldscapeVarTypeList>::reset();
        shared_ptr<game::VarContainerSparse>::reset();
        (&field_52544, (FriendChatChannel*)0)->reset();
        shared_ptr<rs2lib::social::ClanSettings>::reset();
        new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_52568, &local_30)->fill();
        local_30.~shared_ptr();
        shared_ptr<rs2lib::social::ClanChannel>::reset();
        new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_52648, &local_30)->fill();
        local_30.~shared_ptr();
        (&field_52848, (ActiveOffersReply*)0)->reset();
        game::BaseVarType::Destroy();
        ScriptVarType::Destroy();
        (&field_52920, (Heatmap*)0)->reset();
        (((long)&field_54172 + 4), (WordPack*)0)->reset();
        shared_ptr<sound::MixerMainThread>::reset();
        shared_ptr<sound::Decimator>::reset();
        (&field_54272, (LoginState*)0)->reset();
        (&field_1104200, (FontLoader*)0)->reset();
        shared_ptr<jstring::PixfontGeneric>::reset();
        shared_ptr<jstring::PixfontGeneric>::reset();
        shared_ptr<jstring::PixfontGeneric>::reset();
        shared_ptr<Array<graphics::Pix32, eastl::allocator>>::reset();
        shared_ptr<Array<graphics::Pix8, eastl::allocator>>::reset();
        (&field_1120488, (SoftwarePix3D*)0)->reset();
        (&field_1120496, (SoftwareWorldRenderer*)0)->reset();
        shared_ptr<dash3d::TextureCache>::reset();
        shared_ptr<rs2lib::IfType>::reset();
        shared_ptr<rs2lib::IfType>::reset();
        shared_ptr<rs2lib::IfType>::reset();
        shared_ptr<rs2lib::IfType>::reset();
        shared_ptr<rs2lib::IfType>::reset();
        shared_ptr<rs2lib::IfType>::reset();
        (&field_2506376, (LoginManager*)0)->reset();
        (&field_2508744, (PCMPlayerMainThread*)0)->reset();
        (&field_2508736, (PCMPlayerMainThread*)0)->reset();
        (&field_8392, (TotpPassCodes*)0)->reset();
        new ((OSClientConsole*)&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_2508688, (shared_ptr*)(OSClientConsole*)&local_30)->fill();
        local_30.~shared_ptr();
        (&field_7306800, (OSClientConsole*)&local_30)->reset();
        shared_ptr<rs2lib::PlayerModel>::reset();
        shared_ptr<Array<graphics::Pix8, eastl::allocator>>::reset();
        (&field_52768, (FriendSystem*)0)->reset();
        shared_ptr<ClientPlayer>::reset();
        new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_19216, &local_30)->fill();
        local_30.~shared_ptr();
        (&field_19184, (world*)0)->reset();
        (&field_8376, (DeviceOptions*)0)->reset();
        (&field_8384, (GameOptions*)0)->reset();
        (&field_2508480, (Js5Loader*)0)->reset();
        field_52344 = (Minimenu*)0;
        (&field_2508488, (Js5ResourceProvider*)0)->reset();
        (&field_8400, (DiscordMain*)0)->reset();
        (&field_8152, (Minimap*)0)->reset();
        game::HostPlatformStats::Reset();
        (&field_52872)->Destroy();
        (&field_54720, (ObjTagManager*)0)->reset();
        (&field_52776, (HiscoresManager*)0)->reset();
        (&field_19200, (RouteHighlighter*)0)->reset();
        (&field_19208, (RouteHighlighter*)0)->reset();
        m_pMyThis = 0;
        Destroy();
    }

    // 0x1000d8770, 1072 bytes, placed by class name
    // Client::ReloadConfigs()
    void Client::ReloadConfigs() {
        undefined1* puVar1;
        undefined1* puVar2;
        bool bVar3;
        undefined8 uVar4;
        ServerConnection* this_00;
        long* plVar5;
        Js5ResourceProvider* this_01;
        world* pwVar6;
        CollisionMap* this_02;
        ulong uVar7;
        _func_decltype_nullptr* p_Var8;
        Client* this_03;
        shared_ptr local_38;

        uVar4 = logger::default_logger();
        p_Var8 = (_func_decltype_nullptr*)0;
        logger::Logger::Log(
            uVar4, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 1036,
            "Reloading new config packs.");
        SaveAndClosePerAccountData(this);
        bVar3 = std::operator!=((unique_ptr*)&field_19120, p_Var8);
        if (bVar3) {
            this_00 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            this_00->Close();
        }
        puVar1 = &field_2508480;
        bVar3 = std::operator!=((unique_ptr*)puVar1, p_Var8);
        if (bVar3) {
            plVar5 = (long*)std::unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>::operator->(
                (unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>*)puVar1);
            (**(code**)(*plVar5 + 32))(plVar5);
        }
        puVar2 = &field_2508488;
        bVar3 = std::operator!=((unique_ptr*)puVar2, p_Var8);
        if (bVar3) {
            this_01 = (Js5ResourceProvider*)
                          std::unique_ptr<Js5ResourceProvider, std::default_delete<Js5ResourceProvider>>::operator->(
                              (unique_ptr<Js5ResourceProvider, std::default_delete<Js5ResourceProvider>>*)puVar2);
            this_01->Shutdown();
        }
        DiscardJS5Data(this);
        puVar1->reset(0);
        puVar2->reset(0);
        p_Var8 = (_func_decltype_nullptr*)0;
        midi2::MidiManager::Stop(100, 0);
        midi2::MidiManager::ResetPreviousSongs();
        midi2::MidiManager::ResetPendingRequests();
        midi2::MidiManager::ResetTaskList();
        field_2508680 = 0;
        bgsound::Reset();
        puVar1 = &field_2508736;
        bVar3 = std::operator!=((unique_ptr*)puVar1, p_Var8);
        if (bVar3) {
            plVar5 =
                (long*)std::unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>::
                operator->(
                    (unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>*)puVar1);
            (**(code**)(*plVar5 + 32))(plVar5);
        }
        puVar2 = &field_2508744;
        bVar3 = std::operator!=((unique_ptr*)puVar2, p_Var8);
        if (bVar3) {
            plVar5 =
                (long*)std::unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>::
                operator->(
                    (unique_ptr<sound::PCMPlayerMainThread, std::default_delete<sound::PCMPlayerMainThread>>*)puVar2);
            (**(code**)(*plVar5 + 32))(plVar5);
        }
        shared_ptr<sound::MixerMainThread>::reset();
        uVar7 = 0;
        puVar2->reset(0);
        puVar1->reset(0);
        do {
            std::array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>::operator[](
                (array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>*)&field_2508688, uVar7);
            shared_ptr<midi2::MidiPlayerMainThread>::reset();
            uVar7 = uVar7 + 1;
        } while (uVar7 != 3);
        this_03 = (Client*)&field_54200;
        shared_ptr<sound::Decimator>::reset();
        ResetCache(this_03);
        ResetSprites(this);
        (&field_54560, (DBTableIndexCache*)0)->reset();
        (&field_7305840)->Reset();
        p_Var8 = (_func_decltype_nullptr*)0;
        (&field_8152, (Minimap*)0)->reset();
        if (m_pWorldmap != (Worldmap*)0) {
            p_Var8 = (_func_decltype_nullptr*)4294967295;
            worldmap::Worldmap::Reset((int)m_pWorldmap, -1, -1);
            m_pWorldmap = (Worldmap*)0;
        }
        puVar1 = &field_19184;
        bVar3 = std::operator!=((unique_ptr*)puVar1, p_Var8);
        if (bVar3) {
            pwVar6 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)puVar1);
            pwVar6->ResetMap();
            pwVar6 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)puVar1);
            pwVar6->ResetAll();
        }
        uVar7 = 0;
        do {
            this_02 = (CollisionMap*)eastl::vector<
                movement::CollisionMap, eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<movement::CollisionMap,
                        eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_6814744,
                uVar7);
            this_02->Reset();
            uVar7 = uVar7 + 1;
        } while (uVar7 != 4);
        puVar1->reset(0);
        m_entityOverlays->DestroyAllStaticOverlays();
        field_19072->ClearFocusedComponent();
        TitleScreen::Close();
        if (field_52344 != (Minimenu*)0) {
            field_52344->Reset();
            field_52344 = (Minimenu*)0;
        }
        (&field_1104200, (FontLoader*)0)->reset();
        shared_ptr<jstring::PixfontGeneric>::reset();
        shared_ptr<jstring::PixfontGeneric>::reset();
        shared_ptr<jstring::PixfontGeneric>::reset();
        (&field_52488, (ClientVarValues*)0)->reset();
        shared_ptr<configdecoder::OldscapeVarTypeList>::reset();
        shared_ptr<configdecoder::OldscapeVarTypeList>::reset();
        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_52568, &local_38)->fill();
        local_38.~shared_ptr();
        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_52648, &local_38)->fill();
        local_38.~shared_ptr();
        (((long)&field_54172 + 4), (WordPack*)0)->reset();
        (&field_54272, (LoginState*)0)->reset();
        shared_ptr<dash3d::TextureCache>::reset();
        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_19216, &local_38)->fill();
        local_38.~shared_ptr();
        game::BaseVarType::Destroy();
        (&ScriptVarType::LOOKUP_MAP)->clear();
        ScriptVarType::Destroy();
        InitJs5RemoteLoader(this);
        field_54956 = 0;
        SetMainState(this, 2);
    }

    // 0x1000d8ba0, 272 bytes, placed by class name
    // Client::DiscardJS5Data()
    void Client::DiscardJS5Data() {
        Js5* in_RSI;

        DiscardJS5Data()::$_3::operator()((__3*)field_54392, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54400, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54408, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54416, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)m_pJagFx, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54432, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)m_pMidi, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54448, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)m_pSprites, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54464, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54472, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54480, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)m_pClientScripts, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54496, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54504, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54512, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54520, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54528, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54536, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54544, in_RSI);
        DiscardJS5Data()::$_3::operator()((__3*)field_54552, in_RSI);
    }

    // 0x1000d8d00, 112 bytes, placed by class name
    // Client::ResetSprites()
    void Client::ResetSprites() {
        shared_ptr<Array<graphics::Pix8, eastl::allocator>>::reset();
        (&field_1115712)->clear();
        (&field_1115736)->clear();
        (&field_1115760)->clear();
        shared_ptr<Array<graphics::Pix32, eastl::allocator>>::reset();
        (&field_1115800)->clear();
        shared_ptr<Array<graphics::Pix8, eastl::allocator>>::reset();
    }

    // 0x1000d8e60, 16 bytes, placed by class name
    // Client::DiscardJS5Data()::$_3::operator()(jagex3::Js5*) const
    /* Client::DiscardJS5Data()::$_3::TEMPNAMEPLACEHOLDERVALUE(jagex3::Js5*)
   const */

    void Client::DiscardJS5Data()::$_3::operator()(Js5* param_1) {
        if (this != (__3*)0) {
            DiscardAllFiles();
        }
    }

    // 0x1000d8e70, 16 bytes, placed by class name
    // Client::GetNPCCount() const
    uint Client::GetNPCCount() {
        return m_nPCCount;
    }

    // 0x1000d8e80, 112 bytes, placed by class name
    // Client::DeriveTOTPMode(bool)
    void Client::DeriveTOTPMode(bool param_1) {
        LoginManager* this_00;
        TotpPassCodes* this_01;
        int iVar1;
        undefined7 in_register_00000031;

        if ((int)CONCAT71(in_register_00000031, param_1) == 0) {
            this_00 = (LoginManager*)GetLoginManager(this);
            iVar1 = this_00->GetAuthenticatorUserHash();
            if (iVar1 == 0) {
                iVar1 = 2;
            } else {
                this_01 =
                    (TotpPassCodes*)std::unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>::operator->(
                        (unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>*)&field_8392);
                iVar1 = this_01->GetTotpPassCode(iVar1);
                iVar1 = (uint)(iVar1 == 0) * 2;
            }
        } else {
            iVar1 = (uint)(TitleScreen::m_loginTotpRememberUser == '\0') * 2 + 1;
        }
        field_55056 = iVar1;
    }

    // 0x1000d9960, 256 bytes, placed by class name
    // Client::OpenJs5(jagex3::Js5ArchiveId, bool, bool, bool, bool)
    void Client::OpenJs5(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5,
                         undefined4 param_6) {
        long* plVar2;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        undefined8 uVar3;
        undefined8 uVar4;
        WaterNormalParamsTarget* pWVar5;
        undefined4 uVar6;
        Error local_68[9];
        undefined1 local_38[8];

        new (local_38) callstack::Callstack();
        plVar2 = (long*)std::unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>::operator->(
            (unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>*)&field_2508480);
        pWVar5 = (WaterNormalParamsTarget*)local_38;
        this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(code**)(*plVar2 + 24))(
            plVar2, param_2, param_3, param_4, param_5, param_6, (WaterNormalParamsTarget*)local_38);
        uVar6 = (undefined4)((ulong)pWVar5 >> 32);
        if (local_38->IsValid() != '\0') {
            uVar3 = logger::default_logger();
            local_68->GetErrorString();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(
                uVar3, 0, 7,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 3727,
                "Failed to open archive %u, error %s", CONCAT44(uVar6, param_2), uVar4);
            local_68->~basic_string();
        }
        eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
    }

    // 0x1000d9a90, 16 bytes, placed by class name
    // Client::AddPrecacheJS5(jagex3::Js5*, eastl::string const&)
    void Client::AddPrecacheJS5(Js5* param_1, basic_string* param_2) {}

    // 0x1000db170, 1984 bytes, placed by class name
    // Client::LoginError(int)
    void Client::LoginError(int param_1) {
        uint uVar1;
        char cVar2;
        shared_ptr<ApplicationContext>* psVar3;
        long* plVar4;
        LoginManager* pLVar5;
        basic_string* pbVar6;
        undefined8 uVar7;
        basic_string* pbVar8;
        basic_string* pbVar9;

        uVar1 = field_54712;
        if (uVar1 != 0) {
            field_54712 = 0;
            param_1 = uVar1;
        }
        (&field_54272)->release();
        uVar7 = 10;
        if ((param_1 & 4294967294U) == 56) {
            DeriveTOTPMode(this, true);
            uVar7 = 11;
        }
        SetMainState(this, uVar7);
        switch (param_1) {
        case 0:
        case 1:
        case 2:
        switchD_1000db1de_caseD_0:
            if ((field_8425 == false) && (param_1 == 6))
                goto LAB_1000db25a;
            switch (param_1) {
            case 7:
                pbVar9 = (basic_string*)&constants::text::login7_a;
                pbVar8 = (basic_string*)&constants::text::login7_b;
                pbVar6 = (basic_string*)&constants::text::login7_c;
                break;
            case 8:
                pbVar9 = (basic_string*)&constants::text::login8_a;
                pbVar8 = (basic_string*)&constants::text::login8_b;
                pbVar6 = (basic_string*)&constants::text::login8_c;
                break;
            case 9:
                pbVar9 = (basic_string*)&constants::text::login9_a;
                pbVar8 = (basic_string*)&constants::text::login9_b;
                pbVar6 = (basic_string*)&constants::text::login9_c;
                break;
            case 10:
                pbVar9 = (basic_string*)&constants::text::login10_a;
                pbVar8 = (basic_string*)&constants::text::login10_b;
                pbVar6 = (basic_string*)&constants::text::login10_c;
                break;
            case 11:
                pbVar9 = (basic_string*)&constants::text::login11_a;
                pbVar8 = (basic_string*)&constants::text::login11_b;
                pbVar6 = (basic_string*)&constants::text::login11_c;
                break;
            case 12:
                pbVar9 = (basic_string*)&constants::text::login12_a;
                pbVar8 = (basic_string*)&constants::text::login12_b;
                pbVar6 = (basic_string*)&constants::text::login12_c;
                break;
            case 13:
                pbVar9 = (basic_string*)&constants::text::login13_a;
                pbVar8 = (basic_string*)&constants::text::login13_b;
                pbVar6 = (basic_string*)&constants::text::login13_c;
                break;
            case 14:
                pbVar9 = (basic_string*)&constants::text::login14_a;
                pbVar8 = (basic_string*)&constants::text::login14_b;
                pbVar6 = (basic_string*)&constants::text::login14_c;
                break;
            default:
                if ((param_1 & 4294967293U) == 65) {
                    TitleScreen::m_loginscreen = 9;
                    TitleScreen::LoginMes((basic_string*)&constants::text::login65_a,
                                          (basic_string*)&constants::text::login65_b,
                                          (basic_string*)&constants::text::login65_c);
                    return;
                }
                if (param_1 == 73) {
                    TitleScreen::m_loginscreen = 6;
                    pbVar9 = (basic_string*)&constants::text::dateOfBirthPending1;
                    pbVar8 = (basic_string*)&constants::text::dateOfBirthPending2;
                    pbVar6 = (basic_string*)&constants::text::dateOfBirthPending3;
                } else {
                    if (param_1 == 72) {
                        TitleScreen::m_loginscreen = 32;
                        goto LAB_1000db385;
                    }
                    if (param_1 == 71) {
                        TitleScreen::m_loginscreen = 7;
                        pbVar9 = (basic_string*)&constants::text::dobGenericError1;
                        pbVar8 = (basic_string*)&constants::text::dobGenericError2;
                        pbVar6 = (basic_string*)&constants::text::dobGenericError3;
                    } else {
                        if (param_1 == 6) {
                            TitleScreen::m_loginscreen = 22;
                            TitleScreen::LoginMes((basic_string*)&constants::text::login66_a,
                                                  (basic_string*)&constants::text::login66_b,
                                                  (basic_string*)&constants::text::login66_c);
                            return;
                        }
                        pbVar9 = (basic_string*)&constants::text::loginmis_a;
                        pbVar8 = (basic_string*)&constants::text::loginmis_b;
                        pbVar6 = (basic_string*)&constants::text::loginmis_c;
                    }
                }
                break;
            case 16:
                TitleScreen::LoginMes((basic_string*)&constants::text::login16_a,
                                      (basic_string*)&constants::text::login16_b,
                                      (basic_string*)&constants::text::login16_c);
                TitleScreen::m_loginscreen = 33;
                return;
            case 17:
                pbVar9 = (basic_string*)&constants::text::login17_a;
                pbVar8 = (basic_string*)&constants::text::login17_b;
                pbVar6 = (basic_string*)&constants::text::login17_c;
                break;
            case 18:
                TitleScreen::SwitchToLoginSupport(1);
                return;
            case 19:
                pbVar9 = (basic_string*)&constants::text::login19_a;
                pbVar8 = (basic_string*)&constants::text::login19_b;
                pbVar6 = (basic_string*)&constants::text::login19_c;
                break;
            case 20:
                pbVar9 = (basic_string*)&constants::text::login20_a;
                pbVar8 = (basic_string*)&constants::text::login20_b;
                pbVar6 = (basic_string*)&constants::text::login20_c;
                break;
            case 22:
                pbVar9 = (basic_string*)&constants::text::login22_a;
                pbVar8 = (basic_string*)&constants::text::login22_b;
                pbVar6 = (basic_string*)&constants::text::login22_c;
                break;
            case 23:
                pbVar9 = (basic_string*)&constants::text::login23_a;
                pbVar8 = (basic_string*)&constants::text::login23_b;
                pbVar6 = (basic_string*)&constants::text::login23_c;
                break;
            case 24:
                pbVar9 = (basic_string*)&constants::text::login24_a;
                pbVar8 = (basic_string*)&constants::text::login24_b;
                pbVar6 = (basic_string*)&constants::text::login24_c;
                break;
            case 25:
                pbVar9 = (basic_string*)&constants::text::login25_a;
                pbVar8 = (basic_string*)&constants::text::login25_b;
                pbVar6 = (basic_string*)&constants::text::login25_c;
                break;
            case 26:
                pbVar9 = (basic_string*)&constants::text::login26_a;
                pbVar8 = (basic_string*)&constants::text::login26_b;
                pbVar6 = (basic_string*)&constants::text::login26_c;
                break;
            case 27:
                pbVar9 = (basic_string*)&constants::text::login27_a;
                pbVar8 = (basic_string*)&constants::text::login27_b;
                pbVar6 = (basic_string*)&constants::text::login27_c;
                break;
            case 31:
                pbVar9 = (basic_string*)&constants::text::login31_a;
                pbVar8 = (basic_string*)&constants::text::login31_b;
                pbVar6 = (basic_string*)&constants::text::login31_c;
                break;
            case 32:
                TitleScreen::SwitchToLoginSupport(2);
                return;
            case 37:
                pbVar9 = (basic_string*)&constants::text::login37_a;
                pbVar8 = (basic_string*)&constants::text::login37_b;
                pbVar6 = (basic_string*)&constants::text::login37_c;
                break;
            case 38:
                pbVar9 = (basic_string*)&constants::text::login38_a;
                pbVar8 = (basic_string*)&constants::text::login38_b;
                pbVar6 = (basic_string*)&constants::text::login38_c;
                break;
            case 55:
                TitleScreen::LoginMes((basic_string*)&constants::text::login55_a,
                                      (basic_string*)&constants::text::login55_b,
                                      (basic_string*)&constants::text::login55_c);
                TitleScreen::m_loginscreen = 8;
                return;
            case 56:
                TitleScreen::LoginMes((basic_string*)&constants::text::login56_a,
                                      (basic_string*)&constants::text::login56_b,
                                      (basic_string*)&constants::text::login56_c);
                return;
            case 57:
                TitleScreen::LoginMes((basic_string*)&constants::text::login57_a,
                                      (basic_string*)&constants::text::login57_b,
                                      (basic_string*)&constants::text::login57_c);
                return;
            case 61:
                TitleScreen::LoginMes((basic_string*)&constants::text::dobPrompt1,
                                      (basic_string*)&constants::text::dobPrompt2,
                                      (basic_string*)&constants::text::dobPrompt3);
                TitleScreen::m_loginscreen = 7;
                return;
            case 62:
                TitleScreen::m_loginscreen = 9;
                TitleScreen::LoginMes((basic_string*)&constants::text::login62_a,
                                      (basic_string*)&constants::text::login62_b,
                                      (basic_string*)&constants::text::login62_c);
                return;
            case 63:
                TitleScreen::m_loginscreen = 9;
                TitleScreen::LoginMes((basic_string*)&constants::text::login63_a,
                                      (basic_string*)&constants::text::login63_b,
                                      (basic_string*)&constants::text::login63_c);
            LAB_1000db309:
                pLVar5 = (LoginManager*)GetLoginManager(this);
                pLVar5->InvalidateRefreshToken();
                psVar3 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                plVar4 = (long*)shared_ptr<ApplicationContext>::operator->(psVar3);
                (**(code**)(*plVar4 + 176))(plVar4, &ApplicationContext::AUTHENTICATOR_HASH);
                psVar3 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                plVar4 = (long*)shared_ptr<ApplicationContext>::operator->(psVar3);
                (**(code**)(*plVar4 + 176))(plVar4, &ApplicationContext::DISPLAYNAME_KEY);
                return;
            }
            break;
        case 3:
            psVar3 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
            plVar4 = (long*)shared_ptr<ApplicationContext>::operator->(psVar3);
            plVar4 = (long*)(**(code**)(*plVar4 + 72))(plVar4);
            (**(code**)(*plVar4 + 232))(plVar4, &auth::AppsFlyerEvent::LOGIN_FAILED);
            (**(code**)(*plVar4 + 224))(plVar4, &auth::AppsFlyerEvent::LOGIN_FAILED);
            TitleScreen::m_loginHelp = 1;
            TitleScreen::m_loginscreen = 3;
            return;
        case 4:
            TitleScreen::SwitchToLoginSupport(0);
            goto LAB_1000db309;
        case 5:
            TitleScreen::m_loginHelp = 2;
            pbVar9 = (basic_string*)&constants::text::login5_a;
            pbVar8 = (basic_string*)&constants::text::login5_b;
            pbVar6 = (basic_string*)&constants::text::login5_c;
            break;
        case -3:
            pbVar9 = (basic_string*)&constants::text::loginm3_a;
            pbVar8 = (basic_string*)&constants::text::loginm3_b;
            pbVar6 = (basic_string*)&constants::text::loginm3_c;
            break;
        case -2:
            pbVar9 = (basic_string*)&constants::text::loginm2_a;
            pbVar8 = (basic_string*)&constants::text::loginm2_b;
            pbVar6 = (basic_string*)&constants::text::loginm2_c;
            break;
        case -1:
            pbVar9 = (basic_string*)&constants::text::loginm1_a;
            pbVar8 = (basic_string*)&constants::text::loginm1_b;
            pbVar6 = (basic_string*)&constants::text::loginm1_c;
            break;
        default:
            if (param_1 != 68)
                goto switchD_1000db1de_caseD_0;
            if (field_8452 == '\0') {
                field_8452 = 1;
                ReloadConfigs(this);
                return;
            }
            if (field_54761 != '\0') {
                uVar7 = logger::default_logger();
                logger::Logger::Log(
                    uVar7, 0, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                    1923, "Reload configs was attempted and failed. Not reloading new config packs.");
            }
        LAB_1000db25a:
            pbVar9 = (basic_string*)&constants::text::login6_a;
            pbVar8 = (basic_string*)&constants::text::login6_b;
            pbVar6 = (basic_string*)&constants::text::login6_c;
        }
        TitleScreen::LoginMes(pbVar9, pbVar8, pbVar6);
    LAB_1000db385:
        pLVar5 = (LoginManager*)GetLoginManager(this);
        cVar2 = pLVar5->IsRefreshTokenAvailable();
        if (cVar2 != '\0') {
            cVar2 = TitleScreen::HasLoginMessage();
            if (cVar2 == '\0') {
                pLVar5 = (LoginManager*)GetLoginManager(this);
                pLVar5->ResetLoginCredentials();
                pLVar5 = (LoginManager*)GetLoginManager(this);
                pLVar5->InvalidateRefreshToken();
                TitleScreen::MoveToInitialScreen(true, true);
            } else {
                TitleScreen::m_loginscreen = 9;
            }
        }
    }

    // 0x1000dbb40, 48 bytes, placed by class name
    // Client::SetWorldId(int)
    void Client::SetWorldId(int param_1) {
        DeviceOptions* this_00;

        m_worldId = param_1;
        this_00 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        this_00->SetLastWorldId(param_1);
    }

    // 0x1000dbb90, 1728 bytes, placed by class name
    // Client::ProcessSideBarRequests()
    void Client::ProcessSideBarRequests() {
        undefined1* this_00;
        int iVar1;
        uint uVar2;
        undefined4 uVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        long lVar7;
        long* plVar8;
        Client* pCVar9;
        int* piVar10;
        ulong* puVar11;
        undefined8 uVar12;
        SideBarData* pSVar13;
        SideBarData* pSVar14;
        ulong uVar15;
        ulong uVar16;
        WindowSetOptions* pWVar17;
        WindowSetOptions* pWVar18;
        char* pcVar19;
        uint* puVar20;
        vector* pvVar21;
        undefined8 uVar22;
        long lVar23;
        DeviceOptions* pDVar24;
        WindowProperties* this_01;
        SideBarData* this_02;
        WindowSetOptions* pWVar26;
        bool bVar27;
        undefined1 local_f8[16];
        allocator local_e8[8];
        WindowSetOptions local_e0;
        ulong* local_b0;
        undefined1 local_a8[40];
        Rect<unsigned int> local_80[20];
        int local_6c;
        uint local_68;
        int local_64;
        undefined1 local_60[20];
        int local_4c;
        Client* local_48;
        int local_3c;
        uint local_38;
        char local_31;

        this_00 = field_8256;
        lVar7 = this_00->size();
        if (lVar7 == 0) {
            return;
        }
        plVar8 = (long*)OSRenderCore_AudioThread::Instance();
        lVar7 = (((long)plVar8 + *(long*)(*plVar8 + -24)))->HeapBeginPtr();
        pWVar26 = (WindowSetOptions*)(lVar7 + 19677508);
        plVar8 = (long*)OSRenderCore_AudioThread::Instance();
        pCVar9 = (Client*)((long)plVar8 + *(long*)(*plVar8 + -24));
        lVar7 = pCVar9->HeapBeginPtr();
        this_01 = (WindowProperties*)(lVar7 + 19677552);
        local_31 = ShouldExpandWindowForSideBars(pCVar9, this_01, pWVar26);
        local_e0.field_32.GetWindowFrame(this_01);
        jag::math::Rect<unsigned int>::Rect(local_80, (Rect*)&local_e0.field_32);
        local_f8->GetClientRect(this_01);
        local_4c = this_01->GetRightMostScreenPointForWindowExpansion(pWVar26);
        local_64 = GetAdvisedZoom();
        local_68 = GetMinimumCanvasWidth();
        local_38 = local_68;
        piVar10 = (int*)local_f8->second();
        iVar5 = *piVar10;
        local_f8->qw();
        local_6c = iVar5;
        local_3c = iVar5;
        puVar11 = (ulong*)this_00->HeapBeginPtr();
        local_a8._32_8_ = this_00;
        local_b0 = (ulong*)this_00->end();
        this_02 = (SideBarData*)field_8168;
        local_60._8_8_ = this_02;
        local_48 = this;
        if (puVar11 != local_b0) {
            do {
                if ((int)puVar11[1] == 2) {
                    uVar15 = *puVar11;
                    uVar12 = this_02->HeapBeginPtr();
                    pWVar26 = (WindowSetOptions*)local_60._8_8_->end();
                    this_02 = (SideBarData*)local_60._8_8_;
                    pWVar17 = (WindowSetOptions*)
                        eastl::find_if<sidebars::SideBarData*, Client::ProcessSideBarRequests()::__5>(uVar12, pWVar26,
                                                                                                      (int)uVar15);
                    pWVar18 = (WindowSetOptions*)this_02->end();
                    if (pWVar17 != pWVar18) {
                        iVar5 = *(int*)&pWVar17->field_4;
                        this_02->erase(pWVar17);
                        pWVar26 = pWVar17;
                        if (local_31 != '\0') {
                            local_3c = local_3c - iVar5;
                            iVar6 = local_80->Right();
                            if (iVar6 == local_4c) {
                                pvVar21 = local_80->SSOBeginPtr(pWVar17);
                                *(int*)pvVar21 = *(int*)pvVar21 + iVar5;
                                pWVar26 = pWVar17;
                            } else {
                                iVar6 = local_80->Right();
                                pWVar26 = (WindowSetOptions*)(ulong)(uint)(iVar6 - iVar5);
                                local_80->SetRight(iVar6 - iVar5);
                            }
                        }
                        local_38 = local_38 - iVar5;
                        this_02 = (SideBarData*)local_60._8_8_;
                    }
                } else if ((int)puVar11[1] == 1) {
                    uVar15 = *puVar11;
                    local_60._4_4_ = SUB84(uVar15 >> 32, 0);
                    local_60._0_8_ = uVar15;
                    if ((int)local_60._4_4_ < 1) {
                        eastl::string::basic_string(
                            (WindowSetOptions*)local_a8,
                            "Requesting to open a side-bar with a negative size. This is not allowed. Side bar id: %d",
                            uVar15 & 4294967295);
                        uVar12 = logger::default_logger();
                        uVar22 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(uVar12, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client.cpp",
                                            2195, uVar22);
                        pcVar19 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::allocator::allocator(local_e8, "EASTL basic_string");
                        new (&local_e0) eastl::string(pcVar19, local_e8);
                        pWVar26 = &local_e0;
                        AddChat(local_48, (basic_string*)&local_e0);
                        this_02 = (SideBarData*)local_60._8_8_;
                        local_e0.~basic_string();
                    LAB_1000dbf99:
                        local_a8->~basic_string();
                    } else {
                        uVar12 = this_02->HeapBeginPtr();
                        pWVar26 = (WindowSetOptions*)this_02->end();
                        pSVar13 = eastl::find_if<sidebars::SideBarData*, Client::ProcessSideBarRequests()::__4>(
                            uVar12, pWVar26, local_60);
                        pSVar14 = (SideBarData*)this_02->end();
                        if (pSVar13 == pSVar14) {
                            uVar15 = this_02->size();
                            uVar16 = this_02->capacity();
                            if (uVar16 <= uVar15) {
                                uVar12 = logger::default_logger();
                                logger::Logger::Log(uVar12, 0, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/client.cpp",
                                                    2223, "Cannot open another side-bar, limit reached!");
                                new (&local_e0) eastl::allocator("EASTL basic_string");
                                new (local_a8) eastl::string("Cannot open another side-bar, limit reached!",
                                                             (allocator*)&local_e0);
                                pWVar26 = (WindowSetOptions*)local_a8;
                                AddChat(local_48, (basic_string*)local_a8);
                                goto LAB_1000dbf99;
                            }
                            pWVar26 = (WindowSetOptions*)local_60;
                            eastl::fixed_vector<sidebars::SideBarData, 8ul, false, eastl::dummy_allocator>::push_back(
                                this_02);
                            uVar3 = local_60._4_4_;
                            local_38 = local_38 + local_60._4_4_;
                            if (local_31 != '\0') {
                                local_3c = local_3c + local_60._4_4_;
                                iVar5 = local_80->Right();
                                pWVar26 = (WindowSetOptions*)(ulong)(uint)(uVar3 + iVar5);
                                local_80->SetRight(uVar3 + iVar5);
                                iVar5 = local_80->Right();
                                if (local_4c < iVar5) {
                                    iVar5 = local_80->Right();
                                    pWVar26 = (WindowSetOptions*)(ulong)(uint)(local_4c - iVar5);
                                    local_80->Translate(local_4c - iVar5, 0);
                                }
                            }
                        }
                    }
                } else {
                    uVar12 = logger::default_logger();
                    pWVar26 = (WindowSetOptions*)0;
                    logger::Logger::Log(
                        uVar12, 0, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        2306, "Unkown side-bar request type: %d", (int)puVar11[1]);
                }
                puVar11 = (ulong*)((long)puVar11 + 12);
            } while (puVar11 != local_b0);
        }
        uVar4 = local_38;
        uVar2 = local_68;
        if (local_38 != local_68) {
            if ((int)local_38 < 765) {
                uVar12 = logger::default_logger();
                logger::Logger::Log(
                    uVar12, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                    2318,
                    "We\'ve calculated a canvas width which is smaller than the minimum fixed size when opening a "
                    "side-bar.This can only happen if the side-bar has a negative size (you should see an error about "
                    "that if that\'s the case)or if the original canvas size was already smaller than the minimum "
                    "fixed width - which should never happen.");
            }
            local_a8._0_4_ = 765;
            puVar20 = (uint*)std::max<int>((int*)&local_38, (int*)local_a8);
            local_38 = *puVar20;
            if (local_48->field_8425 != false) {
                local_a8._0_4_ = 894;
                puVar20 = (uint*)std::max<int>((int*)&local_38, (int*)local_a8);
                local_38 = *puVar20;
            }
            pWVar26 = (WindowSetOptions*)(ulong)local_38;
            local_48->SetMinimumCanvasSize(local_38, local_64);
        }
        pvVar21 = local_80->SSOBeginPtr(pWVar26);
        iVar5 = *(int*)pvVar21;
        pvVar21 = local_e0.field_32.SSOBeginPtr(pWVar26);
        if (iVar5 == *(int*)pvVar21) {
            bVar27 = uVar4 != uVar2;
            piVar10 = (int*)local_80->y();
            iVar5 = *piVar10;
            piVar10 = (int*)local_e0.field_32.y();
            if (iVar5 != *piVar10)
                goto LAB_1000dc08a;
        } else {
        LAB_1000dc08a:
            uVar12 = logger::default_logger();
            pvVar21 = local_e0.field_32.SSOBeginPtr(pWVar26);
            iVar5 = *(int*)pvVar21;
            pvVar21 = local_80->SSOBeginPtr(pWVar26);
            iVar6 = *(int*)pvVar21;
            piVar10 = (int*)local_e0.field_32.y();
            iVar1 = *piVar10;
            piVar10 = (int*)local_80->y();
            logger::Logger::Log(
                uVar12, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 2332,
                "Window frame position changed: %dx%d", iVar5 - iVar6, iVar1 - *piVar10);
            plVar8 = (long*)OSRenderCore_AudioThread::Instance();
            lVar7 = *(long*)(*plVar8 + -24);
            pvVar21 = local_80->SSOBeginPtr(0);
            iVar5 = *(int*)pvVar21;
            piVar10 = (int*)local_80->y();
            (((long)plVar8 + lVar7))->SetWindowPos(iVar5, *piVar10);
            bVar27 = true;
        }
        pCVar9 = local_48;
        uVar12 = local_60._8_8_;
        if (local_3c == local_6c) {
            if (!bVar27)
                goto LAB_1000dc1b9;
        } else {
            if (local_31 == '\0') {
                uVar22 = logger::default_logger();
                logger::Logger::Log(
                    uVar22, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                    2349,
                    "We are changing the window size due to side-bar changes even though we are not in resizable "
                    "mode.Only resizable mode should change the window size due to side-bar changes.");
            }
            local_a8._0_4_ = 765;
            piVar10 = std::max<int>(&local_3c, (int*)local_a8);
            iVar5 = *piVar10;
            local_3c = iVar5;
            pDVar24 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&pCVar9
                            ->field_8376);
            pDVar24->SetWindowWidth(iVar5, true);
        }
        OnWindowModeChanged(pCVar9);
    LAB_1000dc1b9:
        lVar7 = uVar12->HeapBeginPtr();
        lVar23 = uVar12->end();
        iVar5 = 0;
        for (; lVar7 != lVar23; lVar7 = lVar7 + 8) {
            iVar5 = iVar5 + *(int*)(lVar7 + 4);
        }
        pDVar24 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&local_48
                              ->field_8376);
        pDVar24->SetSideBarsWidth(iVar5);
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x1000dc270, 48 bytes, placed by class name
    // Client::ShouldExpandWindowForSideBars(RenderState::WindowProperties const&, RenderState::WindowSetOptions const&)
    ulong Client::ShouldExpandWindowForSideBars(WindowProperties* param_1, WindowSetOptions* param_2) {
        ulong uVar2;

        if (param_1->GetIsMaximized() == '\0') {
            uVar2 = param_1->GetIsFullScreen(param_2);
            uVar2 = uVar2 ^ 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1000dc690, 128 bytes, placed by class name
    // Client::AddChat(eastl::string const&)
    void Client::AddChat(basic_string* param_1) {
        eastl::string local_50[32];
        allocator local_30[8];

        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_50, "", local_30);
        AddChat(this, 0, (basic_string*)local_50, param_1);
        eastl::string::~basic_string(local_50);
    }

    // 0x1000dc9d0, 224 bytes, placed by class name
    // Client::RequestOpenPopoutSideBar(sidebars::SideBarData)
    void Client::RequestOpenPopoutSideBar(SideBarData param_1) {
        undefined1* this_00;
        ulong uVar1;
        ulong uVar2;
        undefined8 uVar3;
        SideBarData in_stack_ffffffffffffff98;
        eastl::string abStack_5a[26];
        allocator local_40[8];
        undefined1 local_38[12];

        local_38 = sidebars::SideBarRequest::CreateOpen(in_stack_ffffffffffffff98);
        this_00 = field_8256;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            eastl::fixed_vector<sidebars::SideBarRequest, 8ul, false, eastl::dummy_allocator>::push_back(
                (SideBarRequest*)this_00);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 2397,
                "Cannot request another side-bar change, limit reached!");
            eastl::allocator::allocator(local_40, "EASTL basic_string");
            eastl::string::basic_string(abStack_5a + -6, "Cannot request another side-bar change, limit reached!",
                                        local_40);
            AddChat(this, (basic_string*)(abStack_5a + -6));
            eastl::string::~basic_string(abStack_5a + -6);
        }
    }

    // 0x1000dcb20, 224 bytes, placed by class name
    // Client::RequestClosePopoutSideBar(int)
    void Client::RequestClosePopoutSideBar(int param_1) {
        undefined1* this_00;
        ulong uVar1;
        ulong uVar2;
        undefined8 uVar3;
        eastl::string local_60[32];
        allocator local_40[8];
        undefined1 local_38[12];

        local_38 = sidebars::SideBarRequest::CreateClose(param_1);
        this_00 = field_8256;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            eastl::fixed_vector<sidebars::SideBarRequest, 8ul, false, eastl::dummy_allocator>::push_back(
                (SideBarRequest*)this_00);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 2414,
                "Cannot request another side-bar change, limit reached!");
            eastl::allocator::allocator(local_40, "EASTL basic_string");
            eastl::string::basic_string(local_60, "Cannot request another side-bar change, limit reached!", local_40);
            AddChat(this, (basic_string*)local_60);
            eastl::string::~basic_string(local_60);
        }
    }

    // 0x1000dcc60, 304 bytes, placed by class name
    // Client::ClearSideBars()
    void Client::ClearSideBars() {
        undefined1* this_00;
        int iVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        long* plVar5;
        long lVar6;
        Client* this_01;
        long lVar7;
        DeviceOptions* pDVar8;
        int* piVar9;
        GameShell* this_02;
        int local_34;
        int local_30;
        int local_2c;

        plVar5 = (long*)OSRenderCore_AudioThread::Instance();
        lVar6 = (((long)plVar5 + *(long*)(*plVar5 + -24)))->HeapBeginPtr();
        plVar5 = (long*)OSRenderCore_AudioThread::Instance();
        this_01 = (Client*)((long)plVar5 + *(long*)(*plVar5 + -24));
        lVar7 = this_01->HeapBeginPtr();
        cVar2 = ShouldExpandWindowForSideBars(this_01, (WindowProperties*)(lVar6 + 19677552),
                                              (WindowSetOptions*)(lVar7 + 19677508));
        if (cVar2 != '\0') {
            this_00 = &field_8376;
            pDVar8 = (DeviceOptions*)
                         std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                             (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_00);
            iVar3 = pDVar8->GetSideBarsWidth();
            pDVar8 = (DeviceOptions*)
                         std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                             (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_00);
            local_30 = pDVar8->GetWindowWidth();
            local_30 = local_30 - iVar3;
            local_2c = 765;
            piVar9 = std::max<int>(&local_30, &local_2c);
            iVar1 = *piVar9;
            local_30 = iVar1;
            pDVar8 = (DeviceOptions*)
                         std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                             (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_00);
            pDVar8->SetWindowWidth(iVar1, true);
            iVar4 = GetAdvisedZoom();
            local_2c = GetMinimumCanvasWidth();
            local_2c = local_2c - iVar3;
            local_34 = 765;
            piVar9 = std::max<int>(&local_2c, &local_34);
            iVar1 = *piVar9;
            this_02 = (GameShell*)Instance();
            this_02->SetMinimumCanvasSize(iVar1, iVar4);
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        pDVar8 = (DeviceOptions*)
                     std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                         (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        pDVar8->SetSideBarsWidth(0);
    }

    // 0x1000dcdd0, 1024 bytes, placed by class name
    // Client::ResetAndStoreLogFile()
    void Client::ResetAndStoreLogFile() {
        bool bVar1;
        char cVar2;
        Logger* this_00;
        undefined8 uVar4;
        undefined8 uVar5;
        ulong uVar6;
        Filename* pFVar7;
        time_t tVar8;
        time_t tVar9;
        ulong uVar10;
        LogFileSink* this_01;
        _func_decltype_nullptr* in_RSI;
        double dVar11;
        datetools local_400[32];
        Filename local_3e0[2];
        Filename local_3c0[19];
        Callstack local_290[19];
        Filename local_160[19];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (ResetAndStoreLogFile()::logFileSink == '\0') {
            if (___cxa_guard_acquire(&ResetAndStoreLogFile()::logFileSink) != 0) {
                new (&ResetAndStoreLogFile()::logFileSink) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
                ___cxa_atexit(PTR__shared_ptr_100ee53b0, &ResetAndStoreLogFile()::logFileSink, 4294967296);
                ___cxa_guard_release(&ResetAndStoreLogFile()::logFileSink);
            }
        }
        bVar1 = operator==((shared_ptr*)&ResetAndStoreLogFile()::logFileSink, (_func_decltype_nullptr*)0);
        if (bVar1) {
            make_shared<LogFileSink>((jag*)local_160);
            shared_ptr<LogFileSink>::operator=((shared_ptr<LogFileSink>*)&ResetAndStoreLogFile()::logFileSink,
                                               (shared_ptr*)local_160);
            local_160->~shared_ptr();
            this_00 = (Logger*)logger::default_logger();
            new (local_160) shared_ptr<dash3d::Decor>((shared_ptr*)&ResetAndStoreLogFile()::logFileSink);
            this_00->AddSink(local_160);
            local_160->~shared_ptr();
        }
        GetLogFileDirectory((Client*)local_160);
        cVar2 = local_160->Exists();
        if (cVar2 == '\0') {
            callstack::Callstack::Callstack(local_290);
            local_160->CreateDirectories(local_290);
            cVar2 = local_290->IsValid();
            if (cVar2 != '\0') {
                uVar4 = logger::default_logger();
                uVar5 = local_160->GetName();
                logger::Logger::Log(
                    uVar4, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                    2493, "Error creating log directory at %s", uVar5);
                if (cVar2 != '\0')
                    goto LAB_1000dd09d;
            }
        }
        local_400->GetLocalDateAndTimeWithDashes();
        local_400->append(".txt");
        uVar4 = logger::default_logger();
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar4, 0, 5,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 2500,
            "LOG FILE - FilePath=%s", uVar5);
        Filename::operator/((Filename*)local_290, local_160, (fixed_string*)local_400);
        local_3e0->GetAllFiles();
        uVar6 = local_3e0->size();
        if (4 < uVar6) {
            pFVar7 = (Filename*)eastl::vector<Filename, eastl::allocator>::operator[](
                (vector<Filename, eastl::allocator>*)local_3e0, 0);
            Filename::Filename(local_3c0, pFVar7);
            uVar6 = local_3e0->size();
            if (1 < uVar6) {
                uVar6 = 1;
                do {
                    tVar8 = local_3c0->GetLastModified();
                    pFVar7 = (Filename*)eastl::vector<Filename, eastl::allocator>::operator[](
                        (vector<Filename, eastl::allocator>*)local_3e0, uVar6);
                    tVar9 = pFVar7->GetLastModified();
                    dVar11 = _difftime(tVar8, tVar9);
                    pFVar7 = local_3c0;
                    if (0.0 < dVar11) {
                        pFVar7 = (Filename*)eastl::vector<Filename, eastl::allocator>::operator[](
                            (vector<Filename, eastl::allocator>*)local_3e0, uVar6);
                    }
                    Filename::operator=(local_3c0, pFVar7);
                    uVar6 = uVar6 + 1;
                    uVar10 = local_3e0->size();
                } while (uVar6 < uVar10);
            }
            local_3c0->Rename(local_290, 0);
            local_3c0->~pair();
        }
        this_01 = (LogFileSink*)shared_ptr<LogFileSink>::operator->(
            (shared_ptr<LogFileSink>*)&ResetAndStoreLogFile()::logFileSink);
        this_01->SetLogFile(local_290);
        local_3e0->~vector();
        local_290->~pair();
        local_400->~basic_string();
    LAB_1000dd09d:
        local_160->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000dd2a0, 160 bytes, placed by class name
    // Client::GetLogFileDirectory()
    Client* Client::GetLogFileDirectory() {
        char* pcVar1;
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pcVar1 = (char*)GetDefaultUserFolder();
        GameShell3Cache::GetOSRSCacheFolderName();
        Filename::operator/(local_158, pcVar1);
        Filename::operator/((Filename*)this, (char*)local_158);
        local_158->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1000dd500, 400 bytes, placed by class name
    // Client::GlMovePlayers()
    void Client::GlMovePlayers() {
        undefined1* puVar1;
        undefined1* this_00;
        int iVar2;
        uint uVar3;
        uint uVar4;
        Client* pCVar5;
        char cVar6;
        RouteHighlighter* pRVar8;
        long lVar9;
        shared_ptr* psVar10;
        ClientEntity* pCVar11;
        ulong uVar12;
        ulong uVar13;
        shared_ptr local_50;
        RouteHighlighter* local_40;
        Client* local_38;

        uVar4 = ReceivePlayerPositions::m_lastNum;
        uVar13 = (ulong)ReceivePlayerPositions::m_lastNum;
        puVar1 = &field_19200;
        local_38 = this;
        pRVar8 =
            (RouteHighlighter*)std::unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>::operator->(
                (unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>*)puVar1);
        if (pRVar8->field_0 != '\0') {
            cVar6 = pRVar8->Empty();
            if (cVar6 == '\0') {
                local_40 = (RouteHighlighter*)
                               std::unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>::operator->(
                                   (unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>*)puVar1);
                pCVar5 = local_38;
                this_00 = local_38->field_52016;
                lVar9 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                iVar2 = *(int*)(lVar9 + 24);
                uVar3 = pCVar5->field_53220;
                lVar9 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                cVar6 =
                    local_40->FoundDestination((iVar2 >> 7) + uVar3, (*(int*)(lVar9 + 28) >> 7) + pCVar5->field_53224);
                if (cVar6 != '\0') {
                    pRVar8 = (RouteHighlighter*)
                                 std::unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>::operator->(
                                     (unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>*)puVar1);
                    pRVar8->ClearRoute();
                }
            }
        }
        if (0 < (int)uVar4) {
            puVar1 = &local_38->field_19216;
            uVar12 = 0;
            do {
                psVar10 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)puVar1,
                    (long)(int)(&ReceivePlayerPositions::m_lastID)[uVar12]);
                new (&local_50) shared_ptr<dash3d::Decor>(psVar10);
                if (operator!=(&local_50, (_func_decltype_nullptr*)0)) {
                    lVar9 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_50);
                    iVar2 = *(int*)(lVar9 + 440);
                    pCVar11 = (ClientEntity*)shared_ptr<ClientPlayer>::operator*((shared_ptr<ClientPlayer>*)&local_50);
                    GlMoveEntity(local_38, pCVar11);
                    lVar9 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_50);
                    if (*(int*)(lVar9 + 440) != iVar2) {
                        lVar9 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_50);
                        ScriptRunner::SetActivePlayer(*(int*)(lVar9 + 1208));
                        ScriptRunner::ExecuteScript(49, 4294967295, 4294967295, 500000);
                    }
                }
                local_50.~shared_ptr();
                uVar12 = uVar12 + 1;
            } while (uVar13 != uVar12);
        }
    }

    // 0x1000dd700, 400 bytes, placed by class name
    // Client::GlMoveEntity(ClientEntity&)
    void Client::GlMoveEntity(ClientEntity* param_1) {
        int* piVar1;
        ClientEntity* pCVar2;
        int iVar3;

        if (*(int*)&param_1->field_408 < field_8488) {
            if (*(int*)((long)&param_1->field_408 + 4) < field_8488) {
                GlRouteMove(this, param_1);
            } else {
                GlExactMove2(this, param_1);
            }
        } else {
            GlExactMove1(this, param_1);
        }
        if ((((*(int*)&param_1->field_24 < 128) || (iVar3 = *(int*)((long)&param_1->field_24 + 4), 13183 < iVar3)) ||
             (iVar3 < 128)) ||
            (13183 < *(int*)&param_1->field_24)) {
            param_1->field_372 = 4294967295;
            param_1->field_408 = 0;
            ClientEntity::ClearSpotAnims();
            piVar1 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&param_1->field_444, 0);
            iVar3 = *(int*)&param_1->field_40 * 64;
            *(int*)&param_1->field_24 = *piVar1 * 128 + iVar3;
            piVar1 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&param_1->field_484, 0);
            *(int*)((long)&param_1->field_24 + 4) = *piVar1 * 128 + iVar3;
            param_1->AbortRoute();
        }
        pCVar2 = (ClientEntity*)field_52016->end();
        if ((pCVar2 == param_1) &&
            (((*(int*)&param_1->field_24 < 1536 || (iVar3 = *(int*)((long)&param_1->field_24 + 4), 11775 < iVar3)) ||
              ((iVar3 < 1536 || (11775 < *(int*)&param_1->field_24)))))) {
            param_1->field_372 = 4294967295;
            param_1->field_408 = 0;
            ClientEntity::ClearSpotAnims();
            piVar1 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&param_1->field_444, 0);
            iVar3 = *(int*)&param_1->field_40 * 64;
            *(int*)&param_1->field_24 = *piVar1 * 128 + iVar3;
            piVar1 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&param_1->field_484, 0);
            *(int*)((long)&param_1->field_24 + 4) = *piVar1 * 128 + iVar3;
            param_1->AbortRoute();
        }
        GlEntityFace(this, param_1);
        GlEntityAnim(this, param_1);
    }

    // 0x1000dd890, 1248 bytes, placed by class name
    // Client::OpPlayer(int, eastl::string const&)
    void Client::OpPlayer(int param_1, basic_string* param_2) {
        uint uVar1;
        bool bVar2;
        shared_ptr* psVar3;
        long lVar4;
        DisplayName* this_00;
        undefined8 uVar5;
        ShuffledPacket3* pSVar6;
        ShuffledPacket4* pSVar7;
        ServerConnection* pSVar8;
        ShuffledPacket2* this_01;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar9;
        ulong uVar10;
        long lVar11;
        ulong uVar12;
        DisplayName local_118;
        shared_ptr local_d8[2];
        undefined1 local_b8[64];
        array<shared_ptr<ClientPlayer>, 2048ul>* local_78;
        shared_ptr* local_70;
        Client* local_68;
        basic_string* local_60;
        SuperShuffledPacketFactory local_58;
        ulong local_48;
        unique_ptr<ServerConnection, std::default_delete<ServerConnection>>* local_40;
        uint local_34;

        uVar1 = ReceivePlayerPositions::m_lastNum;
        uVar12 = (ulong)ReceivePlayerPositions::m_lastNum;
        local_60 = param_2;
        new (&local_118) rs2lib::social::DisplayName(param_2, *(undefined4*)&field_54172);
        local_68 = this;
        if ((int)uVar1 < 1) {
            local_34 = 0;
        } else {
            local_78 = (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216;
            local_70 = (shared_ptr*)field_52016;
            local_40 = (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120;
            uVar10 = (ulong)(param_1 - 1);
            local_34 = 0;
            lVar11 = 0;
            local_48 = uVar10;
            do {
                psVar3 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    local_78, (long)(int)(&ReceivePlayerPositions::m_lastID)[lVar11]);
                new (local_d8) shared_ptr<dash3d::Decor>(psVar3);
                bVar2 = operator!=(local_d8, (_func_decltype_nullptr*)0);
                if ((bVar2) && (bVar2 = operator!=(local_d8, local_70), bVar2)) {
                    lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)local_d8);
                    bVar2 = operator!=((shared_ptr*)(lVar4 + 992), (_func_decltype_nullptr*)0);
                    if (!bVar2)
                        goto LAB_1000dda60;
                    lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)local_d8);
                    this_00 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator*(
                        (shared_ptr<rs2lib::social::DisplayName>*)(lVar4 + 992));
                    uVar5 = rs2lib::social::DisplayName::operator==(this_00, &local_118);
                    if ((char)uVar5 == '\0')
                        goto LAB_1000dda60;
                    local_34 = (uint)CONCAT71((int7)((ulong)uVar5 >> 8), 1);
                    bVar2 = true;
                    if ((uint)uVar10 < 7) {
                        switch ((long)&switchD_1000dd9d1::switchdataD_1000ddd54 +
                                (long)(int)(&switchD_1000dd9d1::switchdataD_1000ddd54)[uVar10]) {
                        case 4295875027:
                            pSVar8 = (ServerConnection*)std::unique_ptr<
                                         ServerConnection, std::default_delete<ServerConnection>>::operator->(local_40);
                            uVar5 = pSVar8->GetOutgoingEncryption();
                            local_b8->MakeClientMessage(10, uVar5);
                            new (&local_58) SuperShuffledPacketFactory((SuperPacket*)(local_b8 + 8));
                            pSVar6 = (ShuffledPacket3*)local_58.p2_alt2();
                            ShuffledPacket3::p2<int>(pSVar6, (&ReceivePlayerPositions::m_lastID)[lVar11]);
                            pSVar7 = (ShuffledPacket4*)local_58.HeapBeginPtr();
                            ShuffledPacket4::p1<int>(pSVar7, 0);
                            pSVar8 = (ServerConnection*)std::unique_ptr<
                                         ServerConnection, std::default_delete<ServerConnection>>::operator->(local_40);
                            pSVar8->SendClientMessage(local_b8);
                            break;
                        default:
                            goto switchD_1000dd9d1_caseD_dda63;
                        case 4295875210:
                            pSVar8 = (ServerConnection*)std::unique_ptr<
                                         ServerConnection, std::default_delete<ServerConnection>>::operator->(local_40);
                            uVar5 = pSVar8->GetOutgoingEncryption();
                            local_b8->MakeClientMessage(66, uVar5);
                            new (&local_58) SuperShuffledPacketFactory((SuperPacket*)(local_b8 + 8));
                            pSVar7 = (ShuffledPacket4*)local_58.p2_alt2();
                            ShuffledPacket4::p2<int>(pSVar7, (&ReceivePlayerPositions::m_lastID)[lVar11]);
                            pSVar6 = (ShuffledPacket3*)local_58.HeapBeginPtr();
                            ShuffledPacket3::p1<int>(pSVar6, 0);
                            pSVar8 = (ServerConnection*)std::unique_ptr<
                                         ServerConnection, std::default_delete<ServerConnection>>::operator->(local_40);
                            pSVar8->SendClientMessage(local_b8);
                            break;
                        case 4295875343:
                            pSVar8 = (ServerConnection*)std::unique_ptr<
                                         ServerConnection, std::default_delete<ServerConnection>>::operator->(local_40);
                            uVar5 = pSVar8->GetOutgoingEncryption();
                            local_b8->MakeClientMessage(48, uVar5);
                            new (&local_58) SuperShuffledPacketFactory((SuperPacket*)(local_b8 + 8));
                            pSVar7 = (ShuffledPacket4*)local_58.p2_alt2();
                            ShuffledPacket4::p2<int>(pSVar7, (&ReceivePlayerPositions::m_lastID)[lVar11]);
                            pSVar7 = (ShuffledPacket4*)local_58.HeapBeginPtr();
                            ShuffledPacket4::p1<int>(pSVar7, 0);
                            pSVar8 = (ServerConnection*)std::unique_ptr<
                                         ServerConnection, std::default_delete<ServerConnection>>::operator->(local_40);
                            pSVar8->SendClientMessage(local_b8);
                            break;
                        case 4295875476:
                            pSVar8 = (ServerConnection*)std::unique_ptr<
                                         ServerConnection, std::default_delete<ServerConnection>>::operator->(local_40);
                            uVar5 = pSVar8->GetOutgoingEncryption();
                            local_b8->MakeClientMessage(20, uVar5);
                            new (&local_58) SuperShuffledPacketFactory((SuperPacket*)(local_b8 + 8));
                            this_01 = (ShuffledPacket2*)local_58.p2_alt2();
                            ShuffledPacket2::p2<int>(this_01, (&ReceivePlayerPositions::m_lastID)[lVar11]);
                            pPVar9 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_58.HeapBeginPtr();
                            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar9, 0);
                            pSVar8 = (ServerConnection*)std::unique_ptr<
                                         ServerConnection, std::default_delete<ServerConnection>>::operator->(local_40);
                            pSVar8->SendClientMessage(local_b8);
                        }
                        uVar10 = local_48;
                        uVar5 = local_b8->~ClientMessage();
                        bVar2 = true;
                        local_34 = (uint)CONCAT71((int7)((ulong)uVar5 >> 8), 1);
                    }
                } else {
                LAB_1000dda60:
                    bVar2 = false;
                }
            switchD_1000dd9d1_caseD_dda63:
                local_d8->~shared_ptr();
            } while ((!bVar2) && (bVar2 = uVar12 - 1 != lVar11, lVar11 = lVar11 + 1, bVar2));
            if ((local_34 & 1) != 0)
                goto LAB_1000ddcb0;
        }
        new (&local_58) eastl::allocator("EASTL basic_string");
        new (local_b8) eastl::string("", (allocator*)&local_58);
        eastl::operator+((basic_string*)local_d8, (basic_string*)&constants::text::unabletofind);
        AddChat(local_68, 4, (basic_string*)local_b8, (basic_string*)local_d8);
        local_d8->~basic_string();
        local_b8->~basic_string();
    LAB_1000ddcb0:
        local_118.~pair();
    }

    // 0x1000dddc0, 144 bytes, placed by class name
    // Client::AddChat(int, eastl::string const&, eastl::string const&)
    void Client::AddChat(int param_1, basic_string* param_2, basic_string* param_3) {
        eastl::string local_58[32];
        allocator local_38[8];

        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, "", local_38);
        AddChat(this, param_1, param_2, param_3, (basic_string*)local_58);
        eastl::string::~basic_string(local_58);
    }

    // 0x1000dde50, 144 bytes, placed by class name
    // Client::GdmAddOtherPlayersToWorld()
    void Client::GdmAddOtherPlayersToWorld() {
        uint uVar1;
        shared_ptr* psVar2;
        ulong uVar3;
        ulong uVar4;

        uVar4 = (ulong)ReceivePlayerPositions::m_lastNum;
        if (0 < (int)ReceivePlayerPositions::m_lastNum) {
            uVar3 = 0;
            do {
                uVar1 = (&ReceivePlayerPositions::m_lastID)[uVar3];
                if ((uVar1 != m_priorityPlayerId) && (uVar1 != field_51988)) {
                    psVar2 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                        (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)(int)uVar1);
                    GdmAddPlayerToWorld(this, psVar2, true);
                }
                uVar3 = uVar3 + 1;
            } while (uVar4 != uVar3);
        }
    }

    // 0x1000ddee0, 1360 bytes, placed by class name
    // Client::GdmAddPlayerToWorld(shared_ptr<ClientPlayer> const&, bool)
    void Client::GdmAddPlayerToWorld(shared_ptr* param_1, bool param_2) {
        uint uVar1;
        int iVar2;
        int iVar3;
        bool bVar5;
        undefined4 uVar6;
        ClientPlayer* pCVar7;
        long lVar8;
        HighlightChannelProperties* pHVar9;
        ClientEntity* pCVar10;
        long lVar11;
        int iVar12;
        Client* pCVar13;
        int iVar14;
        long lVar15;
        undefined1 auVar16[16];
        undefined1 local_90[24];
        EntityHighlight local_78;
        int local_68;
        int local_64;
        world* local_60;
        shared_ptr local_58;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        pCVar7 = (ClientPlayer*)shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        if (pCVar7->Ready() == '\0') {
            return;
        }
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        if (*(char*)(lVar8 + 1200) != '\0') {
            return;
        }
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        *(undefined1*)(lVar8 + 1192) = 0;
        if ((50 < ReceivePlayerPositions::m_lastNum && m_lowMem != false || 200 < ReceivePlayerPositions::m_lastNum) &&
            (param_2)) {
            lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
            iVar14 = *(int*)(lVar8 + 356);
            lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
            if (iVar14 == *(int*)(lVar8 + 48)) {
                lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                *(undefined1*)(lVar8 + 1192) = 1;
            }
        }
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        uVar1 = *(uint*)(lVar8 + 24);
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        if (13311 < uVar1) {
            return;
        }
        iVar14 = *(int*)(lVar8 + 28);
        if (iVar14 < 0) {
            return;
        }
        if (13311 < iVar14) {
            return;
        }
        iVar12 = (int)uVar1 >> 7;
        iVar14 = iVar14 >> 7;
        iVar2 = m_playerLevel;
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        local_90._16_8_ =
            dash3d::MousePickingHelper::GetPackedTypeCode(iVar12, iVar14, iVar2, 0, false, *(int*)(lVar8 + 1208));
        pCVar7 = (ClientPlayer*)shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        pHVar9 = (HighlightChannelProperties*)pCVar7->GetHighlight();
        local_78._0_10_ = HighlightChannelProperties::CreateHighlightData(pHVar9);
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        bVar5 = operator!=((shared_ptr*)(lVar8 + 1160), (_func_decltype_nullptr*)0);
        local_48 = iVar12;
        if (bVar5) {
            iVar2 = field_8488;
            lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
            if (*(int*)(lVar8 + 1140) <= iVar2) {
                iVar2 = field_8488;
                lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                if (iVar2 < *(int*)(lVar8 + 1144)) {
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    *(undefined1*)(lVar8 + 1192) = 0;
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    iVar2 = *(int*)(lVar8 + 24);
                    pCVar13 = (Client*)param_1;
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    uVar6 = GetAvH(pCVar13, iVar2, *(int*)(lVar8 + 28), m_playerLevel);
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    *(undefined4*)(lVar8 + 1136) = uVar6;
                    iVar2 = field_8488;
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    *(int*)(lVar8 + 44) = iVar2;
                    pCVar10 = (ClientEntity*)shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    pCVar10->SetUnhidden();
                    local_60 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                        (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
                    local_44 = m_playerLevel;
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    local_40 = *(int*)(lVar8 + 24);
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    local_3c = *(int*)(lVar8 + 28);
                    auVar16 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    local_38 = *(int*)(auVar16._0_8_ + 1136);
                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_58, (jag*)param_1, auVar16._8_8_);
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    local_34 = *(int*)(lVar8 + 32);
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    local_68 = *(int*)(lVar8 + 1176);
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    local_64 = *(int*)(lVar8 + 1180);
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    iVar2 = *(int*)(lVar8 + 1184);
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    iVar12 = *(int*)(lVar8 + 1188);
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    iVar3 = *(int*)(lVar8 + 40);
                    lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    new (local_90) dash3d::GridRect(local_48, iVar14, iVar3, *(int*)(lVar8 + 40));
                    local_60->AddDynamic(local_44, local_40, local_3c, local_38, 60, &local_58, local_34,
                                         local_90._16_8_, local_68, local_64, iVar2, iVar12, &local_78, local_90);
                    goto LAB_1000de3fa;
                }
            }
        }
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        if ((*(uint*)(lVar8 + 24) & 127) == 64) {
            lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
            if ((*(uint*)(lVar8 + 28) & 127) == 64) {
                lVar15 = (long)iVar12;
                lVar8 = (long)iVar14;
                if (*(int*)(field_7164656 + lVar8 * 4 + lVar15 * 416 + 228) == field_7294680) {
                    pCVar10 = (ClientEntity*)shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                    pCVar10->SetHiddenBy((ClientEntityID*)(field_7164656 + lVar8 * 8 + lVar15 * 832 + 43492));
                    return;
                }
                *(int*)(field_7164656 + lVar8 * 4 + lVar15 * 416 + 228) = field_7294680;
                lVar11 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
                new (&local_58) game::LightProbeManager::MapSquareUpdateInfo(1, *(undefined4*)(lVar11 + 1208));
                *(undefined8*)(field_7164656 + lVar8 * 8 + lVar15 * 832 + 43492) = local_58._0_8_;
            }
        }
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        iVar2 = *(int*)(lVar8 + 24);
        pCVar13 = (Client*)param_1;
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        uVar6 = GetAvH(pCVar13, iVar2, *(int*)(lVar8 + 28), m_playerLevel);
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        *(undefined4*)(lVar8 + 1136) = uVar6;
        iVar2 = field_8488;
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        *(int*)(lVar8 + 44) = iVar2;
        pCVar10 = (ClientEntity*)shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        pCVar10->SetUnhidden();
        local_60 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
        local_44 = m_playerLevel;
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        local_40 = *(int*)(lVar8 + 24);
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        local_3c = *(int*)(lVar8 + 28);
        auVar16 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        local_38 = *(int*)(auVar16._0_8_ + 1136);
        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_58, (jag*)param_1, auVar16._8_8_);
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        local_34 = *(int*)(lVar8 + 32);
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        bVar5 = *(bool*)(lVar8 + 36);
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        iVar2 = *(int*)(lVar8 + 40);
        lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)param_1);
        new (local_90) dash3d::GridRect(local_48, iVar14, iVar2, *(int*)(lVar8 + 40));
        local_60->AddDynamic(local_44, local_40, local_3c, local_38, 60, &local_58, local_34, local_90._16_8_, bVar5,
                             &local_78, local_90);
    LAB_1000de3fa:
        local_58.~shared_ptr();
    }

    // 0x1000de4b0, 320 bytes, placed by class name
    // Client::GetAvH(int, int, int)
    int Client::GetAvH(int param_1, int param_2, int param_3) {
        byte bVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        uint uVar7;

        iVar5 = 0;
        if ((((param_1 < 13312) && (-1 < param_1)) && (-1 < param_2)) && (param_2 < 13312)) {
            iVar6 = param_1 >> 7;
            iVar5 = param_2 >> 7;
            if (param_3 < 3) {
                bVar1 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl, 1, iVar6, iVar5);
                param_3 = param_3 + (uint)(bVar1 >> 1 & 1);
            }
            uVar7 = param_1 & 127;
            iVar2 = ClientBuild::Read3DArray<int>((Array*)&ClientBuild::m_groundh, param_3, iVar6, iVar5);
            iVar3 = ClientBuild::Read3DArray<int>((Array*)&ClientBuild::m_groundh, param_3, iVar6 + 1, iVar5);
            iVar4 = ClientBuild::Read3DArray<int>((Array*)&ClientBuild::m_groundh, param_3, iVar6, iVar5 + 1);
            iVar5 = ClientBuild::Read3DArray<int>((Array*)&ClientBuild::m_groundh, param_3, iVar6 + 1, iVar5 + 1);
            iVar5 = (int)(((int)(iVar5 * uVar7 + iVar4 * (128 - uVar7)) >> 7) * (param_2 & 127U) +
                          (128 - (param_2 & 127U)) * ((int)(iVar3 * uVar7 + iVar2 * (128 - uVar7)) >> 7)) >>
                    7;
        }
        return iVar5;
    }

    // 0x1000de660, 3600 bytes, base-object destructor, placed by class name
    // Client::~Client()
    void Client::~Client() {
        long lVar1;
        pair* in_RSI;

        *(undefined***)this = &PTR_GetApplicationContext_100ef3fe0;
        field_8144 = &PTR_GetDisplayName_100ef4040;
        notifications::DestroyNotificationSystem();
        (&field_7306808)->~vector();
        (&field_7306800)->~unique_ptr();
        (&field_7306736)->~hash_map();
        (&field_7305840)->~LRUHashCache();
        field_7294776->~fixed_hash_map();
        (&field_7294688)->~vector();
        (&field_7164616)->~list();
        (&field_7164584)->~list();
        m_lootTrackerSaveHandler->~LootTrackerSaveHandler();
        m_entityOverlays->~EntityOverlays();
        field_6815000->~RollingAverageCounter();
        field_6814944->~RollingAverageCounter();
        (&field_6814744)->~fixed_vector();
        m_highlightManager->~HighlightManager();
        field_2508992->~HostPlatformStats();
        (&field_2508968)->~shared_ptr();
        (&field_2508856)->~Array();
        (&field_2508832)->~Array();
        (&field_2508808)->~Array();
        (&field_2508784)->~Array();
        (&field_2508760)->~Array();
        (&field_2508744)->~unique_ptr();
        (&field_2508736)->~unique_ptr();
        (&field_2508688)->~array();
        (&field_2508664)->~shared_ptr();
        (&field_2508496)->~SystemSettings();
        (&field_2508488)->~unique_ptr();
        (&field_2508480)->~unique_ptr();
        (&field_2506512)->~hash_map();
        (&field_2506480)->~list();
        (&field_2506448)->~list();
        (&field_2506416)->~list();
        (&field_2506384)->~list();
        (&field_2506376)->~unique_ptr();
        (&field_2505256)->~fixed_vector();
        field_2505208->~shared_ptr();
        field_2505144->~shared_ptr();
        (&field_2505120)->~shared_ptr();
        field_2505104->~shared_ptr();
        field_2505072->~shared_ptr();
        field_2505056->~shared_ptr();
        (&field_2505008)->~list();
        lVar1 = 2504976;
        do {
            ((field_8 + lVar1 + -8))->~list();
            lVar1 = lVar1 + -32;
        } while (lVar1 != 1120528);
        (&field_1120528)->~Array();
        field_1120504->~shared_ptr();
        (&field_1120496)->~unique_ptr();
        (&field_1120488)->~unique_ptr();
        (&field_1118880)->~array();
        (&field_1117280)->~array();
        field_1115824->~shared_ptr();
        (&field_1115800)->~Array();
        field_1115784->~shared_ptr();
        (&field_1115760)->~Array();
        (&field_1115736)->~Array();
        (&field_1115712)->~Array();
        field_1115696->~shared_ptr();
        (&field_1104440)->~Array();
        (&field_1104416)->~Array();
        (&field_1104392)->~Array();
        (&field_1104368)->~Array();
        (&field_1104344)->~Array();
        (&field_1104320)->~Array();
        (&field_1104296)->~Array();
        (&field_1104272)->~Array();
        field_1104256->~shared_ptr();
        field_1104240->~shared_ptr();
        field_1104224->~shared_ptr();
        field_1104208->~shared_ptr();
        (&field_1104200)->~unique_ptr();
        (&field_1104184, in_RSI)->~ScriptOption();
        (&field_1104088)->~basic_string();
        (&field_1104056)->~basic_string();
        (&field_1104024)->~basic_string();
        (&field_1103992)->~basic_string();
        (&field_1103960)->~basic_string();
        (&field_1103928)->~basic_string();
        (&field_1103888)->~Array();
        (&field_1103856)->~Array();
        (&field_55272)->~array();
        (&field_55240)->~vector();
        (&field_55216)->~Array();
        (&field_55160)->~basic_string();
        (&field_55128)->~basic_string();
        (&field_55096)->~basic_string();
        (&field_55064)->~basic_string();
        (&field_54920)->~basic_string();
        (&field_54792)->~basic_string();
        (&field_54720)->~unique_ptr();
        (&field_54664)->~basic_string();
        (&field_54632)->~basic_string();
        (&field_54600)->~basic_string();
        (&field_54568)->~basic_string();
        (&field_54560)->~unique_ptr();
        (&field_54352)->~basic_string();
        (&field_54312)->~basic_string();
        (&field_54280)->~basic_string();
        (&field_54272)->~unique_ptr();
        (&field_54224)->~basic_string();
        (&field_54200)->~shared_ptr();
        (&field_54184)->~shared_ptr();
        (((long)&field_54172 + 4))->~unique_ptr();
        (&field_53320)->~basic_string();
        (&field_53160)->~hash_map();
        (&field_53080)->~unique_ptr();
        (&field_53072)->~unique_ptr();
        (&field_53064)->~unique_ptr();
        field_52936->~RollingAverageCounter();
        (&field_52920)->~unique_ptr();
        (&field_52880)->~vector();
        (&field_52872)->~StockPriceCache();
        (&field_52848)->~unique_ptr();
        (&field_52784)->~array();
        (&field_52776)->~unique_ptr();
        (&field_52768)->~unique_ptr();
        (&field_52648)->~array();
        field_52632->~shared_ptr();
        (&field_52568)->~array();
        (&field_52552)->~shared_ptr();
        (&field_52544)->~unique_ptr();
        field_52528->~shared_ptr();
        (&field_52512)->~shared_ptr();
        (&field_52496)->~shared_ptr();
        (&field_52488)->~unique_ptr();
        (&field_52472)->~shared_ptr();
        field_52424->~shared_ptr();
        (&field_52368)->~basic_string();
        field_52016->~shared_ptr();
        (&field_19216)->~array();
        (&field_19208)->~unique_ptr();
        (&field_19200)->~unique_ptr();
        (&field_19184)->~unique_ptr();
        field_19128->~hash_map();
        (&field_19120)->~unique_ptr();
        field_19072->~InputFieldKeyboardHandler();
        (&field_8496)->~ClientInputHandler();
        (&field_8456)->~basic_string();
        (&field_8408)->~shared_ptr();
        (&field_8400)->~unique_ptr();
        (&field_8392)->~unique_ptr();
        (&field_8384)->~unique_ptr();
        (&field_8376)->~unique_ptr();
        field_8256->~fixed_vector();
        field_8168->~fixed_vector();
        (&field_8152)->~unique_ptr();
        ~GameShell();
    }

    // 0x1000df470, 16 bytes, complete-object destructor, placed by class name
    // Client::~Client(): jumps straight to the base-object destructor

    // 0x1000df480, 240 bytes, placed by class name
    // Client::Init()
    void Client::Init() {
        uint uVar1;
        char* pcVar2;
        shared_ptr<ApplicationContext>* this_00;
        PathProvider* pPVar3;
        Client* this_01;
        eastl::string local_68[32];
        allocator local_48[32];
        allocator local_28[8];

        pcVar2 = (char*)constants::ContentModeInternalName(m_contentMode);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        eastl::string::basic_string(local_68, pcVar2, local_48);
        this_00 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
        pPVar3 = (PathProvider*)shared_ptr<ApplicationContext>::operator*(this_00);
        pcVar2 = field_54768;
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (local_48) eastl::string(pcVar2, local_28);
        GameShell3Cache::StartCommon(pPVar3, (basic_string*)local_48, (basic_string*)local_68, 0, 22);
        local_48->~basic_string();
        uVar1 = rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID();
        this_01 = (Client*)(ulong)uVar1;
        OldscapeClientError::SetClientType(uVar1);
        ResetAndStoreLogFile(this_01);
        eastl::string::~basic_string(local_68);
    }

    // 0x1000df6f0, 32 bytes, placed by class name
    // Client::SetLowMem()
    void Client::SetLowMem() {
        dash3d::world::m_lowMem = 1;
        m_lowMem = true;
    }

    // 0x1000df710, 16 bytes, placed by class name
    // Client::GetLowMem()
    undefined1 Client::GetLowMem() {
        return m_lowMem;
    }

    // 0x1000df720, 32 bytes, placed by class name
    // Client::SetHighMem()
    void Client::SetHighMem() {
        dash3d::world::m_lowMem = 0;
        m_lowMem = false;
    }

    // 0x1000df790, 912 bytes, placed by class name
    // Client::MainInit(jag::input::Input*, jag::input::InputHandler*)
    void Client::MainInit(Input* param_1, InputHandler* param_2) {
        undefined1* this_00;
        undefined1* this_01;
        int iVar1;
        int iVar2;
        OSClientConsole* pOVar3;
        long* plVar4;
        DeviceOptions* pDVar5;
        DebugUIManager* pDVar6;
        NPCType* this_02;
        InputHandler* pIVar7;
        GameOptions* this_03;
        undefined1* puVar8;
        int iVar9;
        AutoSingleton<jag::debug::DebugUIManager>* this_04;
        GameShell3Cache local_168[12];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        puVar8 = &field_7306800;
        pOVar3 = (OSClientConsole*)std::unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>::operator->(
            (unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>*)puVar8);
        local_168->GetRootStorage();
        pOVar3->SetOutputDirectory(local_168);
        local_168->~pair();
        pOVar3 = (OSClientConsole*)std::unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>::operator->(
            (unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>*)puVar8);
        new (local_168) Filename("commandhistory.txt");
        pOVar3->SetCommandHistoryFilename(local_168);
        local_168->~pair();
        plVar4 = (long*)std::unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>::operator->(
            (unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>*)puVar8);
        (**(code**)(*plVar4 + 16))(plVar4);
        std::make_unique<option::DeviceOptions, bool>((bool*)local_168);
        this_00 = &field_8376;
        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator=(
            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_00,
            (unique_ptr*)local_168);
        local_168->~unique_ptr();
        if (field_8425 != false) {
            pDVar5 = (DeviceOptions*)
                         std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                             (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_00);
            iVar1 = pDVar5->GetUIQuality();
            if (iVar1 == 2) {
                pDVar5 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_00);
                pDVar5->SetUIQuality(1);
            }
        }
        std::make_unique<TotpPassCodes>();
        std::unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>::operator=(
            (unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>*)&field_8392, (unique_ptr*)local_168);
        local_168->~unique_ptr();
        SetupKeyboard(param_2);
        SetupMouse(param_2);
        this_01 = &field_8496;
        this_04 = (AutoSingleton<jag::debug::DebugUIManager>*)this_01;
        this_01->Init();
        pDVar6 = (DebugUIManager*)this_04->Instance();
        pDVar6->RegisterInputHandler(param_1);
        this_02 = (NPCType*)std::unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>::operator->(
            (unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>*)puVar8);
        pIVar7 = (InputHandler*)this_02->GetHeadIconIndex();
        RegisterInputHandler(pIVar7, '\0');
        RegisterInputHandler((InputHandler*)field_19072, '\x01');
        RegisterInputHandler(this_01, '\x03');
        pDVar5 = (DeviceOptions*)
                     std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                         (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_00);
        iVar1 = pDVar5->GetWindowWidth();
        pDVar5 = (DeviceOptions*)
                     std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                         (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_00);
        iVar2 = pDVar5->GetWindowHeight();
        iVar9 = 894;
        if (field_8425 == false) {
            iVar9 = 765;
        }
        javapal::GameShell::StartApp((int)this, iVar1, iVar2, iVar9, 503, 1);
        SetPixToolkit(1);
        OnWindowModeChanged(this);
        pDVar6 = (DebugUIManager*)((Client*)this)->Instance();
        (*(code*)field_152->field_0[12])();
        local_168->GetSafeAreaInsets();
        pDVar6->NotifyFrameStart(0.0, iVar1, iVar2, local_168);
        SetMainState(this, 0);
        sound::SetMainThread();
        pDVar5 = (DeviceOptions*)
                     std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                         (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)this_00);
        pDVar5->BindHandlers();
        std::make_unique<option::GameOptions, bool&>((bool*)local_168);
        std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator=(
            (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384,
            (unique_ptr*)local_168);
        local_168->~unique_ptr();
        this_03 =
            (GameOptions*)std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
        this_03->BindHandlers();
        std::make_unique<RouteHighlighter, highlight::HighlightManager&>((HighlightManager*)local_168);
        std::unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>::operator=(
            (unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>*)&field_19200, (unique_ptr*)local_168);
        local_168->~unique_ptr();
        std::make_unique<RouteHighlighter, highlight::HighlightManager&>((HighlightManager*)local_168);
        std::unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>::operator=(
            (unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>*)&field_19208, (unique_ptr*)local_168);
        local_168->~unique_ptr();
        puVar8 = (undefined1*)std::unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>::operator->(
            (unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>*)&field_19208);
        *puVar8 = 1;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000dff90, 256 bytes, placed by class name
    // Client::DirtyArea(int, int, int, int)
    void Client::DirtyArea(int param_1, int param_2, int param_3, int param_4) {
        uint uVar1;
        int iVar2;
        int* piVar3;
        undefined1* puVar4;
        ulong uVar5;

        uVar1 = field_2506568;
        if (0 < (int)uVar1) {
            uVar5 = 0;
            do {
                piVar3 = (int*)std::array<int, 100ul>::operator[]((array<int, 100ul>*)&field_2506876, uVar5);
                iVar2 = *piVar3;
                piVar3 = (int*)std::array<int, 100ul>::operator[]((array<int, 100ul>*)&field_2507676, uVar5);
                if ((param_1 < *piVar3 + iVar2) && (iVar2 < param_3 + param_1)) {
                    piVar3 = (int*)std::array<int, 100ul>::operator[]((array<int, 100ul>*)&field_2507276, uVar5);
                    iVar2 = *piVar3;
                    piVar3 = (int*)std::array<int, 100ul>::operator[]((array<int, 100ul>*)&field_2508076, uVar5);
                    if ((param_2 < *piVar3 + iVar2) && (iVar2 < param_4 + param_2)) {
                        puVar4 = (undefined1*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)&field_2506576,
                                                                                  uVar5);
                        *puVar4 = 1;
                    }
                }
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
        }
    }

    // 0x1000e0090, 256 bytes, placed by class name
    // Client::BlitArea(int, int, int, int)
    void Client::BlitArea(int param_1, int param_2, int param_3, int param_4) {
        uint uVar1;
        int iVar2;
        int* piVar3;
        undefined1* puVar4;
        ulong uVar5;

        uVar1 = field_2506568;
        if (0 < (int)uVar1) {
            uVar5 = 0;
            do {
                piVar3 = (int*)std::array<int, 100ul>::operator[]((array<int, 100ul>*)&field_2506876, uVar5);
                iVar2 = *piVar3;
                piVar3 = (int*)std::array<int, 100ul>::operator[]((array<int, 100ul>*)&field_2507676, uVar5);
                if ((param_1 < *piVar3 + iVar2) && (iVar2 < param_3 + param_1)) {
                    piVar3 = (int*)std::array<int, 100ul>::operator[]((array<int, 100ul>*)&field_2507276, uVar5);
                    iVar2 = *piVar3;
                    piVar3 = (int*)std::array<int, 100ul>::operator[]((array<int, 100ul>*)&field_2508076, uVar5);
                    if ((param_2 < *piVar3 + iVar2) && (iVar2 < param_4 + param_2)) {
                        puVar4 = (undefined1*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)&field_2506676,
                                                                                  uVar5);
                        *puVar4 = 1;
                    }
                }
                uVar5 = uVar5 + 1;
            } while (uVar1 != uVar5);
        }
    }

    // 0x1000e0190, 96 bytes, placed by class name
    // Client::AddChat(int, eastl::string const&, eastl::string const&, eastl::string const&)
    void Client::AddChat(int param_1, basic_string* param_2, basic_string* param_3, basic_string* param_4) {
        undefined8 uVar1;
        undefined8 uVar2;

        if (param_1 == 99) {
            uVar1 = GetConsole(this);
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            console::Console::AddMessage(uVar1, 2, uVar2);
        }
        ChatHistory::AddChat(param_1, param_2, param_3, param_4);
    }

    // 0x1000e01f0, 128 bytes, placed by class name
    // Client::AddChat(int, eastl::string const&)
    void Client::AddChat(int param_1, basic_string* param_2) {
        eastl::string local_58[32];
        allocator local_38[8];

        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, "", local_38);
        AddChat(this, param_1, (basic_string*)local_58, param_2);
        eastl::string::~basic_string(local_58);
    }

    // 0x1000e0270, 80 bytes, placed by class name
    // Client::SavePermClientVars()
    void Client::SavePermClientVars() {
        ClientVarValues* pCVar1;
        undefined1* this_00;
        _func_decltype_nullptr* in_RSI;

        this_00 = &field_52488;
        if (std::operator!=((unique_ptr*)this_00, in_RSI)) {
            pCVar1 =
                (ClientVarValues*)std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
                    (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)this_00);
            if (pCVar1->ArePermVarsModified() != '\0') {
                pCVar1 = (ClientVarValues*)
                             std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
                                 (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)this_00);
                pCVar1->SavePermVars();
            }
        }
    }

    // 0x1000e02e0, 144 bytes, placed by class name
    // Client::ResetPlayerFriendIndicators()
    void Client::ResetPlayerFriendIndicators() {
        shared_ptr<ClientPlayer>* this_00;
        ClientPlayer* this_01;
        FriendChatChannel* this_02;
        long lVar2;
        _func_decltype_nullptr* in_RSI;

        if (0 < ReceivePlayerPositions::m_lastNum) {
            lVar2 = 0;
            do {
                in_RSI = (_func_decltype_nullptr*)(long)(int)(&ReceivePlayerPositions::m_lastID)[lVar2];
                this_00 = (shared_ptr<ClientPlayer>*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (ulong)in_RSI);
                this_01 = (ClientPlayer*)shared_ptr<ClientPlayer>::operator->(this_00);
                this_01->ResetIsFriendCachedState();
                lVar2 = lVar2 + 1;
            } while (lVar2 < ReceivePlayerPositions::m_lastNum);
        }
        ChatHistory::ResetFriendIndicators();
        if (std::operator!=((unique_ptr*)&field_52544, in_RSI)) {
            this_02 =
                (FriendChatChannel*)std::
                    unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::operator->(
                        (unique_ptr<social::FriendChatChannel,
                                    std::default_delete<social::FriendChatChannel>>*)&field_52544);
            this_02->ResetCachedFriendIndicators();
        }
    }

    // 0x1000e03f0, 64 bytes, placed by class name
    // Client::ResetPlayerIgnoreIndicators()
    void Client::ResetPlayerIgnoreIndicators() {
        FriendChatChannel* this_00;
        _func_decltype_nullptr* in_RSI;

        ChatHistory::ResetIgnoreIndicators();
        if (std::operator!=((unique_ptr*)&field_52544, in_RSI)) {
            this_00 =
                (FriendChatChannel*)std::
                    unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::operator->(
                        (unique_ptr<social::FriendChatChannel,
                                    std::default_delete<social::FriendChatChannel>>*)&field_52544);
            this_00->ResetCachedIgnoreIndicators();
        }
    }

    // 0x1000e0480, 112 bytes, placed by class name
    // Client::ResetPlayerFriendChatIndicators()
    void Client::ResetPlayerFriendChatIndicators() {
        shared_ptr<ClientPlayer>* this_00;
        ClientPlayer* this_01;
        long lVar1;

        if (0 < ReceivePlayerPositions::m_lastNum) {
            lVar1 = 0;
            do {
                this_00 = (shared_ptr<ClientPlayer>*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216,
                    (long)(int)(&ReceivePlayerPositions::m_lastID)[lVar1]);
                this_01 = (ClientPlayer*)shared_ptr<ClientPlayer>::operator->(this_00);
                this_01->ResetIsFriendChatCachedState();
                lVar1 = lVar1 + 1;
            } while (lVar1 < ReceivePlayerPositions::m_lastNum);
        }
    }

    // 0x1000e0500, 112 bytes, placed by class name
    // Client::ResetPlayerClanIndicators()
    void Client::ResetPlayerClanIndicators() {
        shared_ptr<ClientPlayer>* this_00;
        ClientPlayer* this_01;
        long lVar1;

        if (0 < ReceivePlayerPositions::m_lastNum) {
            lVar1 = 0;
            do {
                this_00 = (shared_ptr<ClientPlayer>*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216,
                    (long)(int)(&ReceivePlayerPositions::m_lastID)[lVar1]);
                this_01 = (ClientPlayer*)shared_ptr<ClientPlayer>::operator->(this_00);
                this_01->ResetIsClanCachedState();
                lVar1 = lVar1 + 1;
            } while (lVar1 < ReceivePlayerPositions::m_lastNum);
        }
    }

    // 0x1000e0580, 32 bytes, placed by class name
    // Client::NotifyFriendSystemUpdate()
    void Client::NotifyFriendSystemUpdate() {
        field_2506344 = field_2505808;
    }

    // 0x1000e05a0, 32 bytes, placed by class name
    // Client::NotifyFriendChatUpdate()
    void Client::NotifyFriendChatUpdate() {
        field_2506348 = field_2505808;
        field_2508660 = 1;
    }

    // 0x1000e05c0, 32 bytes, placed by class name
    // Client::NotifyClanSettingsUpdate()
    void Client::NotifyClanSettingsUpdate() {
        field_2506352 = field_2505808;
        field_7164882 = 1;
    }

    // 0x1000e05e0, 176 bytes, placed by class name
    // Client::FriendsChatKickUser(eastl::string const&)
    void Client::FriendsChatKickUser(basic_string* param_1) {
        ServerConnection* pSVar1;
        undefined8 uVar2;
        int iVar4;
        undefined1 local_60[64];

        if (!std::operator==((unique_ptr*)&field_52544, (_func_decltype_nullptr*)param_1)) {
            pSVar1 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar2 = pSVar1->GetOutgoingEncryption();
            local_60->MakeClientMessage(87, uVar2);
            iVar4 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
                param_1, false);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_60 + 8), iVar4);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_60 + 8), param_1, false);
            pSVar1 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar1->SendClientMessage(local_60);
            local_60->~ClientMessage();
        }
    }

    // 0x1000e06a0, 176 bytes, placed by class name
    // Client::FriendsChatJoinChat(eastl::string const&)
    void Client::FriendsChatJoinChat(basic_string* param_1) {
        ServerConnection* pSVar1;
        undefined8 uVar2;
        int iVar4;
        undefined1 local_60[64];

        if (!eastl::operator==(param_1, (value_type*)"")) {
            pSVar1 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar2 = pSVar1->GetOutgoingEncryption();
            local_60->MakeClientMessage(67, uVar2);
            iVar4 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
                param_1, false);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_60 + 8), iVar4);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_60 + 8), param_1, false);
            pSVar1 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar1->SendClientMessage(local_60);
            local_60->~ClientMessage();
        }
    }

    // 0x1000e0750, 128 bytes, placed by class name
    // Client::FriendsChatLeaveChat()
    void Client::FriendsChatLeaveChat() {
        ServerConnection* pSVar1;
        undefined8 uVar2;
        undefined1 local_50[64];

        pSVar1 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        uVar2 = pSVar1->GetOutgoingEncryption();
        local_50->MakeClientMessage(67, uVar2);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_50 + 8), 0);
        pSVar1 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        pSVar1->SendClientMessage(local_50);
        local_50->~ClientMessage();
    }

    // 0x1000e07d0, 480 bytes, placed by class name
    // Client::ClanChannelKickUser(int, int)
    void Client::ClanChannelKickUser(int param_1, int param_2) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00;
        int iVar2;
        shared_ptr* psVar3;
        ClanChannel* this_01;
        long lVar4;
        basic_string* pbVar5;
        ServerConnection* pSVar6;
        undefined8 uVar7;
        undefined1 local_b0[64];
        eastl::string local_70[32];
        shared_ptr local_50;
        shared_ptr<dash3d::Decor> local_40[16];

        if (param_1 < 0) {
            psVar3 = (shared_ptr*)field_52632;
        } else {
            psVar3 = (shared_ptr*)std::array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>::operator[](
                (array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>*)&field_52648, (long)param_1);
        }
        new (&local_50) shared_ptr<dash3d::Decor>(psVar3);
        if (!operator==(&local_50, (_func_decltype_nullptr*)0) && -1 < param_2) {
            this_01 = (ClanChannel*)shared_ptr<rs2lib::social::ClanChannel>::operator->(
                (shared_ptr<rs2lib::social::ClanChannel>*)&local_50);
            iVar2 = this_01->GetUserListSize();
            if (param_2 < iVar2) {
                lVar4 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                    (shared_ptr<rs2lib::social::ClanChannel>*)&local_50);
                psVar3 = (shared_ptr*)
                    eastl::vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>::operator[](
                        (vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>*)(lVar4 + 48),
                        (long)param_2);
                shared_ptr<dash3d::Decor>::shared_ptr(local_40, psVar3);
                lVar4 = shared_ptr<rs2lib::social::ClanChannelUser>::operator->(
                    (shared_ptr<rs2lib::social::ClanChannelUser>*)local_40);
                if (*(char*)(lVar4 + 8) == -1) {
                    lVar4 = shared_ptr<rs2lib::social::ClanChannelUser>::operator->(
                        (shared_ptr<rs2lib::social::ClanChannelUser>*)local_40);
                    pbVar5 = (basic_string*)((lVar4 + 16))->GetDisplayName();
                    eastl::string::basic_string(local_70, pbVar5);
                    pSVar6 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->((
                                     unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    uVar7 = pSVar6->GetOutgoingEncryption();
                    local_b0->MakeClientMessage(83, uVar7);
                    iVar2 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<
                        eastl::string>((basic_string*)local_70, false);
                    this_00 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b0 + 8);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, iVar2 + 3);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, param_1);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(this_00, param_2);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(this_00, (basic_string*)local_70, false);
                    pSVar6 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->((
                                     unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    pSVar6->SendClientMessage(local_b0);
                    local_b0->~ClientMessage();
                    eastl::string::~basic_string(local_70);
                }
                local_40->~shared_ptr();
            }
        }
        local_50.~shared_ptr();
    }

    // 0x1000e0a80, 400 bytes, placed by class name
    // Client::AffinedClanSettingsAddBannedFromChannel(int, int)
    void Client::AffinedClanSettingsAddBannedFromChannel(int param_1, int param_2) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00;
        int iVar2;
        shared_ptr* psVar3;
        ClanChannel* this_01;
        long lVar4;
        ServerConnection* pSVar5;
        undefined8 uVar6;
        basic_string* pbVar7;
        undefined1 local_80[64];
        shared_ptr<dash3d::Decor> local_40[16];

        psVar3 = (shared_ptr*)std::array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>::operator[](
            (array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>*)&field_52648, (long)param_1);
        if ((!operator==(psVar3, (_func_decltype_nullptr*)0)) && (-1 < param_2)) {
            this_01 = (ClanChannel*)shared_ptr<rs2lib::social::ClanChannel>::operator->(
                (shared_ptr<rs2lib::social::ClanChannel>*)psVar3);
            iVar2 = this_01->GetUserListSize();
            if (param_2 < iVar2) {
                lVar4 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                    (shared_ptr<rs2lib::social::ClanChannel>*)psVar3);
                psVar3 = (shared_ptr*)
                    eastl::vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>::operator[](
                        (vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>*)(lVar4 + 48),
                        (long)param_2);
                shared_ptr<dash3d::Decor>::shared_ptr(local_40, psVar3);
                lVar4 = shared_ptr<rs2lib::social::ClanChannelUser>::operator->(
                    (shared_ptr<rs2lib::social::ClanChannelUser>*)local_40);
                if (*(char*)(lVar4 + 8) == -1) {
                    pSVar5 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->((
                                     unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    uVar6 = pSVar5->GetOutgoingEncryption();
                    local_80->MakeClientMessage(70, uVar6);
                    lVar4 = shared_ptr<rs2lib::social::ClanChannelUser>::operator->(
                        (shared_ptr<rs2lib::social::ClanChannelUser>*)local_40);
                    pbVar7 = (basic_string*)((lVar4 + 16))->GetDisplayName();
                    iVar2 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<
                        eastl::string>(pbVar7, false);
                    this_00 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_80 + 8);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, iVar2 + 3);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, param_1);
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(this_00, param_2);
                    lVar4 = shared_ptr<rs2lib::social::ClanChannelUser>::operator->(
                        (shared_ptr<rs2lib::social::ClanChannelUser>*)local_40);
                    pbVar7 = (basic_string*)((lVar4 + 16))->GetDisplayName();
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(this_00, pbVar7, false);
                    pSVar5 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->((
                                     unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    pSVar5->SendClientMessage(local_80);
                    local_80->~ClientMessage();
                }
                local_40->~shared_ptr();
            }
        }
    }

    // 0x1000e0c10, 384 bytes, placed by class name
    // Client::AffinedClanSettingsSetMutedFromChannel(int, int, bool)
    void Client::AffinedClanSettingsSetMutedFromChannel(int param_1, int param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00;
        int iVar2;
        shared_ptr* psVar3;
        ClanChannel* this_01;
        long lVar4;
        ServerConnection* pSVar5;
        undefined8 uVar6;
        basic_string* pbVar7;
        undefined3 in_register_00000009;
        undefined1 local_88[64];
        shared_ptr<dash3d::Decor> local_48[20];
        undefined4 local_34;

        psVar3 = (shared_ptr*)std::array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>::operator[](
            (array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>*)&field_52648, (long)param_1);
        if ((!operator==(psVar3, (_func_decltype_nullptr*)0)) && (-1 < param_2)) {
            this_01 = (ClanChannel*)shared_ptr<rs2lib::social::ClanChannel>::operator->(
                (shared_ptr<rs2lib::social::ClanChannel>*)psVar3);
            iVar2 = this_01->GetUserListSize();
            if (param_2 < iVar2) {
                local_34 = CONCAT31(in_register_00000009, param_3);
                lVar4 = shared_ptr<rs2lib::social::ClanChannel>::operator->(
                    (shared_ptr<rs2lib::social::ClanChannel>*)psVar3);
                psVar3 = (shared_ptr*)
                    eastl::vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>::operator[](
                        (vector<shared_ptr<rs2lib::social::ClanChannelUser>, eastl::allocator>*)(lVar4 + 48),
                        (long)param_2);
                shared_ptr<dash3d::Decor>::shared_ptr(local_48, psVar3);
                pSVar5 = (ServerConnection*)
                             std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                 (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                uVar6 = pSVar5->GetOutgoingEncryption();
                local_88->MakeClientMessage(21, uVar6);
                lVar4 = shared_ptr<rs2lib::social::ClanChannelUser>::operator->(
                    (shared_ptr<rs2lib::social::ClanChannelUser>*)local_48);
                pbVar7 = (basic_string*)((lVar4 + 16))->GetDisplayName();
                iVar2 =
                    PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
                        pbVar7, false);
                this_00 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_88 + 8);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, iVar2 + 4);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, param_1);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(this_00, param_2);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00,
                                                                                               (undefined1)local_34);
                lVar4 = shared_ptr<rs2lib::social::ClanChannelUser>::operator->(
                    (shared_ptr<rs2lib::social::ClanChannelUser>*)local_48);
                pbVar7 = (basic_string*)((lVar4 + 16))->GetDisplayName();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                    eastl::basic_string<char, BucketAllocatorEASTL>>(this_00, pbVar7, false);
                pSVar5 = (ServerConnection*)
                             std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                 (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                pSVar5->SendClientMessage(local_88);
                local_88->~ClientMessage();
                local_48->~shared_ptr();
            }
        }
    }

    // 0x1000e0d90, 704 bytes, placed by class name
    // Client::FindObjects(eastl::string, bool)
    /* WARNING: Removing unreachable block (ram,4295888705) */
    /* WARNING: Removing unreachable block (ram,4295888718) */
    /* Client::FindObjects(eastl::string, bool) */

    void Client::FindObjects(basic_string* param_2, char param_3) {
        undefined2 uVar1;
        long lVar2;
        shared_ptr<configdecoder::ObjType>* this_00;
        FoundObject* pFVar3;
        FoundObject* pFVar4;
        undefined2* puVar5;
        int iVar6;
        uint uVar7;
        ulong uVar8;
        uint uVar9;
        eastl::string local_b8[32];
        undefined1 local_98[16];
        FoundObject local_88;
        vector<FoundObject, eastl::allocator> local_70[32];
        Client* local_48;
        vector<short, eastl::allocator>* local_40;
        uint local_34;

        eastl::string::make_lower();
        eastl::vector<FoundObject, eastl::allocator>::vector(local_70);
        local_40 = (vector<short, eastl::allocator>*)&field_52880;
        local_48 = this;
        if (configdecoder::ObjType::m_numDefinitions < 1) {
            uVar7 = 0;
        } else {
            iVar6 = 0;
            local_34 = 0;
            do {
                local_98->List(iVar6);
                if ((param_3 == '\0') || (lVar2 = shared_ptr<configdecoder::ObjType>::operator->(
                                              (shared_ptr<configdecoder::ObjType>*)local_98),
                                          *(char*)(lVar2 + 825) != '\0')) {
                    lVar2 =
                        shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_98);
                    uVar9 = 4;
                    if (*(int*)(lVar2 + 732) == -1) {
                        lVar2 = shared_ptr<configdecoder::ObjType>::operator->(
                            (shared_ptr<configdecoder::ObjType>*)local_98);
                        eastl::string::basic_string(local_b8, (basic_string*)(lVar2 + 8));
                        eastl::string::make_lower();
                        lVar2 = eastl::string::find(local_b8, param_2, 0);
                        if (lVar2 == -1) {
                            uVar9 = 4;
                        } else if ((int)local_34 < 250) {
                            local_88._0_8_ = 0;
                            local_88.field_8 = 0;
                            local_88.field_16 = 0;
                            local_88._18_6_ = 0;
                            new (&local_88) graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
                            eastl::vector<FoundObject, eastl::allocator>::push_back(local_70, &local_88);
                            local_88.~LRUHashCacheWrapper();
                            lVar2 = eastl::vector<FoundObject, eastl::allocator>::back(local_70);
                            *(short*)(lVar2 + 16) = (short)iVar6;
                            this_00 =
                                (shared_ptr<configdecoder::ObjType>*)eastl::vector<FoundObject, eastl::allocator>::back(
                                    local_70);
                            shared_ptr<configdecoder::ObjType>::operator=(this_00, (shared_ptr*)local_98);
                            local_34 = local_34 + 1;
                            uVar9 = 0;
                        } else {
                            *(undefined4*)((long)&local_48->field_52912 + 4) = 4294967295;
                            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                            uVar9 = 1;
                        }
                        eastl::string::~basic_string(local_b8);
                    }
                } else {
                    uVar9 = 4;
                }
                local_98->~shared_ptr();
                uVar7 = local_34;
                if ((uVar9 & 3) != 0) {
                    if (uVar9 != 2)
                        goto LAB_1000e0fe0;
                    break;
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < configdecoder::ObjType::m_numDefinitions);
        }
        pFVar3 = (FoundObject*)local_70->HeapBeginPtr();
        pFVar4 = (FoundObject*)local_70->end();
        std::sort<FoundObject*>(pFVar3, pFVar4);
        eastl::vector<short, eastl::allocator>::resize((ulong)local_40);
        local_34 = uVar7;
        if (0 < (int)uVar7) {
            uVar8 = 0;
            do {
                lVar2 = eastl::vector<FoundObject, eastl::allocator>::operator[](local_70, uVar8);
                uVar1 = *(undefined2*)(lVar2 + 16);
                puVar5 = (undefined2*)eastl::vector<short, eastl::allocator>::operator[](local_40, uVar8);
                *puVar5 = uVar1;
                uVar8 = uVar8 + 1;
            } while (uVar7 != uVar8);
        }
        *(undefined4*)&local_48->field_52912 = 0;
        *(uint*)((long)&local_48->field_52912 + 4) = local_34;
    LAB_1000e0fe0:
        eastl::vector<FoundObject, eastl::allocator>::~vector(local_70);
    }

    // 0x1000e1260, 160 bytes, placed by class name
    // Client::StoreNewPackedUID(core::SuperPacket&, int)
    void Client::StoreNewPackedUID(SuperPacket* param_1, int param_2) {
        vector* pvVar1;
        Array<unsigned char, eastl::allocator>* this_00;
        Array<unsigned char, eastl::allocator> local_40[24];

        pvVar1 = param_1->SSOBeginPtr(param_1);
        this_00 = local_40;
        Array<unsigned char, eastl::allocator>::Array<BucketAllocatorEASTL>(this_00, (Array*)pvVar1);
        CachePackedUID(this, (Array*)this_00, param_2);
        local_40->~Array();
        pvVar1 = param_1->SSOBeginPtr(this_00);
        Array<unsigned char, eastl::allocator>::Array<BucketAllocatorEASTL>(local_40, (Array*)pvVar1);
        GameShell3Cache::StoreUID192((Array*)local_40, param_2);
        local_40->~Array();
    }

    // 0x1000e1300, 160 bytes, placed by class name
    // Client::CachePackedUID(Array<unsigned char, eastl::allocator> const&, int)
    void Client::CachePackedUID(Array* param_1, int param_2) {
        undefined8* puVar1;
        undefined8 uVar2;
        char cVar3;
        ulong uVar4;
        undefined8* puVar5;
        long lVar6;
        undefined1* this_00;

        this_00 = &field_55216;
        cVar3 = this_00->empty();
        if (cVar3 != '\0') {
            this_00->set_max_size(24, 3);
        }
        uVar4 = param_1->end();
        if (uVar4 < (ulong)(long)(param_2 + 24)) {
            /* WARNING: Subroutine does not return */
            LogAssert("data.size() >= static_cast<size_t>(GameShell3Cache::UID_PACKED_SIZE + offset)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      3872, (char*)0);
        }
        puVar5 = (undefined8*)this_00->data();
        lVar6 = param_1->data();
        puVar1 = (undefined8*)(lVar6 + param_2);
        uVar2 = puVar1[1];
        *puVar5 = *puVar1;
        puVar5[1] = uVar2;
        puVar5[2] = *(undefined8*)(lVar6 + 16 + (long)param_2);
    }

    // 0x1000e1430, 176 bytes, placed by class name
    // Client::SerialiseCurrentPackedUIDToPacket(core::SuperPacket&)
    void Client::SerialiseCurrentPackedUIDToPacket(SuperPacket* param_1) {
        long lVar1;
        uchar* puVar2;
        ulong uVar3;
        undefined1* this_00;
        GameShell3Cache local_38;

        this_00 = &field_55216;
        lVar1 = this_00->end();
        if (lVar1 == 0) {
            local_38.LoadUID192();
            puVar2 = (uchar*)local_38.data();
            uVar3 = local_38.end();
            param_1->pArrayBuffer(puVar2, 0, uVar3);
            local_38.~Array();
        } else {
            puVar2 = (uchar*)this_00->data();
            uVar3 = this_00->end();
            param_1->pArrayBuffer(puVar2, 0, uVar3);
        }
    }

    // 0x1000e1600, 176 bytes, placed by class name
    // Client::GetDisplayName() const
    undefined1* Client::GetDisplayName() {
        int iVar2;
        long lVar3;
        undefined1* puVar4;

        if ((GetDisplayName()::empty == '\0') && (iVar2 = ___cxa_guard_acquire(&GetDisplayName()::empty), iVar2 != 0)) {
            new (&GetDisplayName()::empty) rs2lib::social::DisplayName();
            ___cxa_atexit(PTR__pair_100ee6b50, &GetDisplayName()::empty, 4294967296);
            ___cxa_guard_release(&GetDisplayName()::empty);
        }
        if (operator!=((shared_ptr*)field_52016, (_func_decltype_nullptr*)0)) {
            lVar3 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
            puVar4 = (undefined1*)((lVar3 + 992))->end();
            if (puVar4 != (undefined1*)0) {
                return puVar4;
            }
        }
        return &GetDisplayName()::empty;
    }

    // 0x1000e16e0, 208 bytes, placed by class name
    // Client::RemoveChatCrownTags(eastl::string const&)
    Client* Client::RemoveChatCrownTags(basic_string* param_1) {
        Client* pCVar1;
        bool bVar2;
        int* piVar3;
        basic_string* in_RDX;
        int iVar4;
        StringConstants local_58[32];

        iVar4 = 0;
        do {
            piVar3 = (int*)constants::ChatCrownType::FromId(iVar4);
            if (*piVar3 != -1) {
                local_58->TAG_IMG(*piVar3);
                bVar2 =
                    core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL, eastl::allocator>(
                        in_RDX, (basic_string*)local_58);
                local_58->~basic_string();
                if (bVar2) {
                    local_58->to_string(*piVar3);
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    pCVar1 = (Client*)this;
                    eastl::string::substr((ulong)(Client*)this, (ulong)in_RDX);
                    local_58->~basic_string();
                    return pCVar1;
                }
            }
            pCVar1 = (Client*)this;
            iVar4 = iVar4 + 1;
        } while (iVar4 != 17);
        new ((Client*)this) eastl::string(in_RDX);
        return pCVar1;
    }

    // 0x1000e17b0, 480 bytes, placed by class name
    // Client::GetFontFromGroupId(int)
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* Client::GetFontFromGroupId(int param_1) {
        undefined* puVar1;
        long lVar3;
        undefined* puVar4;
        TextureAtlasReference* this_00;
        PacketT<Array<unsigned char, eastl::allocator>>* this_01;
        signed* psVar5;
        shared_ptr<jstring::PixfontGeneric>* this_02;
        hashtable_iterator_base* extraout_RDX;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* this_03;
        PixfontGeneric local_538;
        eastl local_90[16];
        long local_80[3];
        Array<signed char, eastl::allocator> local_68[24];
        long local_50;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48[20];

        local_50 = (long)param_1;
        eastl::hashtable<unsigned long long, eastl::pair<unsigned long long const, jstring::PixfontGeneric>,
                         eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<unsigned long long const, jstring::PixfontGeneric>>,
                         eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)
                                                                                                              local_90);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_90, (hashtable_iterator_base*)&local_538, extraout_RDX)) {
            lVar3 = local_90->HeapBeginPtr();
            this_03 = (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)(lVar3 + 8);
        } else {
            this_03 = local_48;
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(this_03,
                                                                           (_func_decltype_nullptr*)&local_538);
            puVar4 = (undefined*)((shared_ptr*)field_54496, (int)this_03, param_1, (array*)0)->GetFile();
            puVar1 = DataStatus::READY;
            if (puVar4 == DataStatus::READY) {
                this_00 =
                    (TextureAtlasReference*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_48);
                lVar3 = this_00->GetTextureAtlas();
                this_01 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                              shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                  (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_48);
                psVar5 = (signed*)this_01->GetDataPtr();
                Array<signed char, eastl::allocator>::Array(local_68, psVar5, psVar5 + lVar3);
                new (&local_538) jstring::PixfontGeneric(local_68);
                eastl::hashtable<unsigned long long, eastl::pair<unsigned long long const, jstring::PixfontGeneric>,
                                 eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>,
                                 eastl::use_first<eastl::pair<unsigned long long const, jstring::PixfontGeneric>>,
                                 eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>,
                                 eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                 false, true, true>::emplace<int&, jstring::PixfontGeneric>((int*)local_80,
                                                                                            (PixfontGeneric*)
                                                                                                field_7294776);
                local_538.~PixfontGeneric();
                local_80[0] = (long)param_1;
                eastl::hashtable<unsigned long long, eastl::pair<unsigned long long const, jstring::PixfontGeneric>,
                                 eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>,
                                 eastl::use_first<eastl::pair<unsigned long long const, jstring::PixfontGeneric>>,
                                 eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>,
                                 eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                 false, true, true>::find((ulonglong*)&local_538);
                lVar3 = local_538.HeapBeginPtr();
                this_03 = (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)(lVar3 + 8);
                local_68->~Array();
            }
            local_48->~shared_ptr();
            if (puVar4 != puVar1) {
                local_538.field_0 = 1;
                this_02 = (shared_ptr<jstring::PixfontGeneric>*)eastl::hash_map<
                    Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator,
                    false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash,
                                                 eastl::equal_to<Font>, eastl::allocator, false>*)field_19128,
                                       (Font*)&local_538);
                this_03 =
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)shared_ptr<jstring::PixfontGeneric>::operator*(
                        this_02);
            }
        }
        return this_03;
    }

    // 0x1000e1ab0, 4048 bytes, placed by class name
    // Client::Main(Array<eastl::string, BucketAllocatorEASTL> const&)
    undefined8 Client::Main(Array* param_1) {
        Client* pCVar1;
        Client* pCVar2;
        char cVar3;
        bool bVar4;
        int iVar5;
        int iVar6;
        long lVar7;
        undefined8 uVar8;
        ulong uVar9;
        undefined8 uVar10;
        basic_string* pbVar11;
        undefined** ppuVar12;
        char* pcVar13;
        undefined8 uVar14;
        shared_ptr<ApplicationContext>* this_00;
        PathProvider* pPVar15;
        longlong lVar16;
        WindowInitParams* pWVar17;
        DeviceOptions* this_01;
        Layout* this_02;
        vector* pvVar18;
        bool bVar19;
        ulong uVar20;
        eastl::string local_100[32];
        eastl::string* local_e0;
        allocator local_d8[8];
        eastl::string* local_d0;
        undefined1 local_c8[104];
        allocator local_60[32];
        int local_40;
        int local_3c;
        Client* local_38;

        local_38 = this;
        new (local_c8) eastl::allocator("EASTL basic_string");
        eastl::string::basic_string(local_100, "", (allocator*)local_c8);
        lVar7 = param_1->end();
        if (lVar7 != 0) {
            uVar20 = 0;
            do {
                Array<eastl::string, BucketAllocatorEASTL>::operator[](
                    (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar20);
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::string::append_sprintf((char*)local_100, " \"%s\"", uVar8);
                uVar20 = uVar20 + 1;
                uVar9 = param_1->end();
            } while (uVar20 < uVar9);
        }
        uVar8 = logger::default_logger();
        uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar8, 0, 5,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 3402,
            "Evaluating Command-line args: %s", uVar10);
        uVar20 = param_1->end();
        if (uVar20 < 7) {
            Usage();
        } else {
            pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, 0);
            iVar5 = eastl::stoi<eastl::string>(pbVar11, 10);
            local_38->m_worldId = iVar5;
            pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, 1);
            eastl::allocator::allocator(local_60, "EASTL basic_string");
            new (local_c8) eastl::string("live", local_60);
            cVar3 = is_equal_ignore_case(pbVar11, (basic_string*)local_c8);
            local_c8->~basic_string();
            if (cVar3 == '\0') {
                pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                    (Array<eastl::string, BucketAllocatorEASTL>*)param_1, 1);
                eastl::allocator::allocator(local_60, "EASTL basic_string");
                new (local_c8) eastl::string("wtrc", local_60);
                cVar3 = is_equal_ignore_case(pbVar11, (basic_string*)local_c8);
                local_c8->~basic_string();
                if (cVar3 == '\0') {
                    pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                        (Array<eastl::string, BucketAllocatorEASTL>*)param_1, 1);
                    eastl::allocator::allocator(local_60, "EASTL basic_string");
                    new (local_c8) eastl::string("wtqa", local_60);
                    cVar3 = is_equal_ignore_case(pbVar11, (basic_string*)local_c8);
                    local_c8->~basic_string();
                    if (cVar3 == '\0') {
                        pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                            (Array<eastl::string, BucketAllocatorEASTL>*)param_1, 1);
                        eastl::allocator::allocator(local_60, "EASTL basic_string");
                        new (local_c8) eastl::string("wtwip", local_60);
                        cVar3 = is_equal_ignore_case(pbVar11, (basic_string*)local_c8);
                        local_c8->~basic_string();
                        if (cVar3 == '\0') {
                            pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, 1);
                            eastl::allocator::allocator(local_60, "EASTL basic_string");
                            new (local_c8) eastl::string("local", local_60);
                            cVar3 = is_equal_ignore_case(pbVar11, (basic_string*)local_c8);
                            local_c8->~basic_string();
                            if (cVar3 == '\0') {
                                pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                    (Array<eastl::string, BucketAllocatorEASTL>*)param_1, 1);
                                eastl::allocator::allocator(local_60, "EASTL basic_string");
                                new (local_c8) eastl::string("wti", local_60);
                                cVar3 = is_equal_ignore_case(pbVar11, (basic_string*)local_c8);
                                local_c8->~basic_string();
                                if (cVar3 == '\0') {
                                    Usage();
                                    goto LAB_1000e298c;
                                }
                                ppuVar12 = &ModeWhere::WTI;
                            } else {
                                ppuVar12 = &ModeWhere::LOCAL;
                            }
                        } else {
                            ppuVar12 = &ModeWhere::WTWIP;
                        }
                    } else {
                        ppuVar12 = &ModeWhere::WTQA;
                    }
                } else {
                    ppuVar12 = &ModeWhere::WTRC;
                }
            } else {
                ppuVar12 = &ModeWhere::LIVE;
            }
            local_38->field_54168 = *(int*)(*ppuVar12 + 8);
            Array<eastl::string, BucketAllocatorEASTL>::operator[]((Array<eastl::string, BucketAllocatorEASTL>*)param_1,
                                                                   2);
            pcVar13 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::allocator::allocator(local_60, "EASTL basic_string");
            new (local_c8) eastl::string(pcVar13, local_60);
            iVar5 = constants::ContentModeGetByString((basic_string*)local_c8);
            pCVar1 = local_38;
            local_38->m_contentMode = iVar5;
            local_c8->~basic_string();
            if (pCVar1->m_contentMode == -1) {
                Usage();
            } else {
                pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                    (Array<eastl::string, BucketAllocatorEASTL>*)param_1, 3);
                bVar4 = eastl::operator==(pbVar11, (value_type*)"lowmem");
                if (bVar4) {
                    SetLowMem(local_38);
                } else {
                    pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                        (Array<eastl::string, BucketAllocatorEASTL>*)param_1, 3);
                    bVar4 = eastl::operator==(pbVar11, (value_type*)"highmem");
                    if (!bVar4) {
                        Usage();
                        goto LAB_1000e298c;
                    }
                    SetHighMem(local_38);
                }
                pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                    (Array<eastl::string, BucketAllocatorEASTL>*)param_1, 4);
                bVar4 = eastl::operator==(pbVar11, (value_type*)"free");
                if (bVar4) {
                    bVar19 = false;
                } else {
                    pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                        (Array<eastl::string, BucketAllocatorEASTL>*)param_1, 4);
                    bVar4 = eastl::operator==(pbVar11, (value_type*)"members");
                    bVar19 = true;
                    if (!bVar4) {
                        Usage();
                        goto LAB_1000e298c;
                    }
                }
                local_38->field_8424 = bVar19;
                local_38->field_8432 = (Language*)Language::EN;
                pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                    (Array<eastl::string, BucketAllocatorEASTL>*)param_1, 6);
                bVar4 = eastl::operator==(pbVar11, (value_type*)"oldscape");
                if (bVar4) {
                    local_38->field_8440 = (Isaac*)ModeGame::OLDSCAPE;
                    *(undefined4*)&local_38->field_54172 = 0;
                    local_38->field_52992 = 0;
                    local_38->field_54216 = '\0';
                    local_e0 = (eastl::string*)&local_38->field_54224;
                    eastl::string::assign(local_e0, "127.0.0.1");
                    local_d0 = (eastl::string*)&local_38->field_54312;
                    eastl::string::assign(local_d0, "");
                    local_40 = 894;
                    if (local_38->field_8425 == false) {
                        local_40 = 765;
                    }
                    uVar20 = param_1->end();
                    local_3c = 503;
                    bVar4 = true;
                    if (7 < uVar20) {
                        local_3c = 503;
                        uVar20 = 7;
                        do {
                            pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar20);
                            eastl::allocator::allocator(local_60, "EASTL basic_string");
                            new (local_c8) eastl::string("--gameaddress", local_60);
                            cVar3 = is_equal_ignore_case(pbVar11, (basic_string*)local_c8);
                            local_c8->~basic_string();
                            if (cVar3 != '\0') {
                                lVar7 = param_1->end();
                                if (uVar20 != lVar7 - 1U) {
                                    uVar9 = uVar20 + 1;
                                    Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                        (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar9);
                                    cVar3 =
                                        eastl::basic_string<char,
                                                            eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                          eastl::allocator>>::empty();
                                    if (cVar3 == '\0') {
                                        pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                            (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar9);
                                        bVar4 = starts_with<eastl::string>(pbVar11, "--");
                                        if (bVar4) {
                                            uVar8 = logger::default_logger();
                                            Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar9);
                                            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar20);
                                            uVar14 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            logger::Logger::Log(uVar8, 0, 2,
                                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                "OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                                                                3516, "%s is not expected following %s", uVar10,
                                                                uVar14);
                                            Usage();
                                            goto LAB_1000e2685;
                                        }
                                        pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                            (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar9);
                                        eastl::string::operator=(local_e0, pbVar11);
                                        local_38->field_54216 = '\x01';
                                        uVar20 = uVar9;
                                        goto LAB_1000e2065;
                                    }
                                }
                                uVar8 = logger::default_logger();
                                Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                    (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar20);
                                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                logger::Logger::Log(uVar8, 0, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/client.cpp",
                                                    3511, "Expected a value after %s", uVar10);
                                Usage();
                                goto LAB_1000e2685;
                            }
                            pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar20);
                            eastl::allocator::allocator(local_60, "EASTL basic_string");
                            new (local_c8) eastl::string("--frame", local_60);
                            cVar3 = is_equal_ignore_case(pbVar11, (basic_string*)local_c8);
                            local_c8->~basic_string();
                            if (cVar3 != '\0') {
                                lVar7 = param_1->end();
                                if (uVar20 != lVar7 - 1U) {
                                    uVar9 = uVar20 + 1;
                                    Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                        (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar9);
                                    cVar3 =
                                        eastl::basic_string<char,
                                                            eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                          eastl::allocator>>::empty();
                                    if (cVar3 == '\0') {
                                        pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                            (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar9);
                                        bVar4 = starts_with<eastl::string>(pbVar11, "--");
                                        if (bVar4) {
                                            uVar8 = logger::default_logger();
                                            Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar9);
                                            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar20);
                                            uVar14 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            logger::Logger::Log(uVar8, 0, 2,
                                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                "OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                                                                3534, "%s is not expected following %s", uVar10,
                                                                uVar14);
                                            Usage();
                                            goto LAB_1000e2685;
                                        }
                                        pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                            (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar9);
                                        split((jag*)local_c8, pbVar11, ',');
                                        uVar20 = local_c8->size();
                                        if (uVar20 < 4) {
                                            Usage();
                                        LAB_1000e204f:
                                            bVar4 = false;
                                        } else {
                                            pbVar11 = (basic_string*)
                                                eastl::vector<eastl::string, eastl::allocator>::operator[](
                                                    (vector<eastl::string, eastl::allocator>*)local_c8, 0);
                                            iVar5 = eastl::stoi<eastl::string>(pbVar11, 10);
                                            pbVar11 = (basic_string*)
                                                eastl::vector<eastl::string, eastl::allocator>::operator[](
                                                    (vector<eastl::string, eastl::allocator>*)local_c8, 1);
                                            iVar6 = eastl::stoi<eastl::string>(pbVar11, 10);
                                            pbVar11 = (basic_string*)
                                                eastl::vector<eastl::string, eastl::allocator>::operator[](
                                                    (vector<eastl::string, eastl::allocator>*)local_c8, 2);
                                            local_40 = eastl::stoi<eastl::string>(pbVar11, 10);
                                            pbVar11 = (basic_string*)
                                                eastl::vector<eastl::string, eastl::allocator>::operator[](
                                                    (vector<eastl::string, eastl::allocator>*)local_c8, 3);
                                            local_3c = eastl::stoi<eastl::string>(pbVar11, 10);
                                            if ((((iVar5 < 0) || (iVar6 < 0)) || (local_40 < 1)) ||
                                                (bVar4 = true, local_3c < 1)) {
                                                Usage();
                                                goto LAB_1000e204f;
                                            }
                                        }
                                        local_c8->~vector();
                                        uVar20 = uVar9;
                                        if (bVar4)
                                            goto LAB_1000e2065;
                                        goto LAB_1000e2685;
                                    }
                                }
                                uVar8 = logger::default_logger();
                                Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                    (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar20);
                                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                logger::Logger::Log(uVar8, 0, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/client.cpp",
                                                    3529, "Expected a value after %s", uVar10);
                                Usage();
                            LAB_1000e2685:
                                bVar4 = false;
                                goto LAB_1000e2687;
                            }
                            pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar20);
                            eastl::allocator::allocator(local_60, "EASTL basic_string");
                            new (local_c8) eastl::string("--configURI", local_60);
                            cVar3 = is_equal_ignore_case(pbVar11, (basic_string*)local_c8);
                            local_c8->~basic_string();
                            if (cVar3 != '\0') {
                                lVar7 = param_1->end();
                                if (uVar20 != lVar7 - 1U) {
                                    uVar9 = uVar20 + 1;
                                    Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                        (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar9);
                                    cVar3 =
                                        eastl::basic_string<char,
                                                            eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                          eastl::allocator>>::empty();
                                    if (cVar3 == '\0') {
                                        pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                            (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar9);
                                        bVar4 = starts_with<eastl::string>(pbVar11, "--");
                                        if (bVar4) {
                                            uVar8 = logger::default_logger();
                                            Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar9);
                                            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar20);
                                            uVar14 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            logger::Logger::Log(uVar8, 0, 2,
                                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                "OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                                                                3565, "%s is not expected following %s", uVar10,
                                                                uVar14);
                                            Usage();
                                            goto LAB_1000e2685;
                                        }
                                        pbVar11 = (basic_string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                            (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar9);
                                        eastl::string::operator=(local_d0, pbVar11);
                                        uVar20 = uVar9;
                                        goto LAB_1000e2065;
                                    }
                                }
                                uVar8 = logger::default_logger();
                                Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                    (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar20);
                                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                logger::Logger::Log(uVar8, 0, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/client.cpp",
                                                    3560, "Expected a value after %s", uVar10);
                                Usage();
                                goto LAB_1000e2685;
                            }
                            Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar20);
                            pcVar13 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            cVar3 = starts_with(pcVar13, "jagex-jav://");
                            if (cVar3 == '\0') {
                                uVar8 = logger::default_logger();
                                Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                    (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar20);
                                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                logger::Logger::Log(uVar8, 0, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/client.cpp",
                                                    3580, "Argument, %s, is not expected", uVar10);
                                Usage();
                                goto LAB_1000e2685;
                            }
                            eastl::string::assign(local_d0, "http://");
                            Array<eastl::string, BucketAllocatorEASTL>::operator[](
                                (Array<eastl::string, BucketAllocatorEASTL>*)param_1, uVar20);
                            lVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            eastl::string::operator+=(local_d0, (char*)(lVar7 + 12));
                        LAB_1000e2065:
                            uVar20 = uVar20 + 1;
                            uVar9 = param_1->end();
                        } while (uVar20 < uVar9);
                        bVar4 = true;
                    }
                LAB_1000e2687:
                    if (bVar4) {
                        local_c8->GetDeepLink();
                        pCVar1 = local_38;
                        SystemDetails::GetDeepLinkingValuesForKey<int>((basic_string*)local_c8, "os_ids",
                                                                       (vector*)&local_38->field_55240);
                        local_c8->~basic_string();
                        pcVar13 = (char*)constants::ContentModeInternalName(pCVar1->m_contentMode);
                        new (local_c8) eastl::allocator("EASTL basic_string");
                        new (local_60) eastl::string(pcVar13, local_c8);
                        this_00 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)pCVar1)(pCVar1);
                        pPVar15 = (PathProvider*)shared_ptr<ApplicationContext>::operator*(this_00);
                        pcVar13 = pCVar1->field_54768;
                        eastl::allocator::allocator(local_d8, "EASTL basic_string");
                        new (local_c8) eastl::string(pcVar13, local_d8);
                        GameShell3Cache::StartCommon(pPVar15, (basic_string*)local_c8, (basic_string*)local_60, 0, 22);
                        local_c8->~basic_string();
                        local_d8[0] = (allocator)1;
                        std::make_unique<option::DeviceOptions, bool>((bool*)local_c8);
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator=(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&pCVar1
                                ->field_8376,
                            (unique_ptr*)local_c8);
                        local_c8->~unique_ptr();
                        std::make_unique<option::GameOptions, bool&>((bool*)local_c8);
                        std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator=(
                            (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&pCVar1
                                ->field_8384,
                            (unique_ptr*)local_c8);
                        local_c8->~unique_ptr();
                        std::make_unique<TotpPassCodes>();
                        std::unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>::operator=(
                            (unique_ptr<TotpPassCodes, std::default_delete<TotpPassCodes>>*)&pCVar1->field_8392,
                            (unique_ptr*)local_c8);
                        local_c8->~unique_ptr();
                        std::make_unique<DiscordMain>();
                        std::unique_ptr<DiscordMain, std::default_delete<DiscordMain>>::operator=(
                            (unique_ptr<DiscordMain, std::default_delete<DiscordMain>>*)&pCVar1->field_8400,
                            (unique_ptr*)local_c8);
                        pCVar2 = local_38;
                        local_c8->~unique_ptr();
                        lVar16 = std::unique_ptr<DiscordMain, std::default_delete<DiscordMain>>::operator->(
                            (unique_ptr<DiscordMain, std::default_delete<DiscordMain>>*)&pCVar1->field_8400);
                        DiscordMain::Init(lVar16);
                        pWVar17 = (WindowInitParams*)pCVar2->field_152->GetWindowInitParams();
                        new (local_c8) WindowInitParams(pWVar17);
                        if (pCVar1->field_8425 == false) {
                            local_c8._0_8_ = 2881923056705;
                        }
                        local_c8._64_4_ = local_40;
                        local_c8._68_4_ = local_3c;
                        local_c8[9] = 1;
                        this_01 =
                            (DeviceOptions*)
                                std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::
                                operator->(
                                    (unique_ptr<option::DeviceOptions,
                                                std::default_delete<option::DeviceOptions>>*)&pCVar1->field_8376);
                        this_02 = (Layout*)this_01->GetWindowSavedPosition();
                        pvVar18 = eastl::string::Layout::SSOBeginPtr(this_02, (type*)pWVar17);
                        PacketT<Array<unsigned char, eastl::allocator>>::operator=(
                            (PacketT<Array<unsigned char, eastl::allocator>>*)(local_c8 + 72), (PacketT*)pvVar18);
                        (pCVar2->field_152, (WindowInitParams*)local_c8)->SetWindowInitParams();
                        (&pCVar2->field_54280, "https://oldschool.runescape.com/slr.ws?order=LPWM")->assign();
                        (&pCVar2->field_54792, "")->assign();
                        pCVar2->field_54824 = 0;
                        if (pCVar2->field_54168 != *(int*)(ModeWhere::LIVE + 8)) {
                            cVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::empty();
                            if (cVar3 != '\0') {
                                iVar5 = local_e0->compare("127.0.0.1");
                                if ((iVar5 == 0) && (pCVar2->field_54168 != *(int*)(ModeWhere::LOCAL + 8))) {
                                    uVar8 = logger::default_logger();
                                    logger::Logger::Log(uVar8, 0, 2,
                                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                                                        3645, "No suitable URL for downloading the JavConfig");
                                    Usage();
                                }
                            }
                        }
                        local_c8->~WindowInitParams();
                        local_60->~basic_string();
                    }
                } else {
                    Usage();
                }
            }
        }
    LAB_1000e298c:
        eastl::string::~basic_string(local_100);
        return 1;
    }

    // 0x1000e2b00, 64 bytes, placed by class name
    // Client::Usage()
    void Client::Usage() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(
            uVar1, 0, 5,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 3660,
            "\nUsage: [worldid] [live/wtrc/wtqa/wtwip/local/wti] [live/rc/wip] [lowmem/highmem] [free/members] "
            "[english/german] [game] [<additionl args>]\n<additional args>:\n--gameaddress <server>               "
            "Specify a game server to connect to\n--frame <x>,<y>,<width>,<height>     Specfiy the frame size with "
            "four numbers\n--configURI <server>                 Specify a URL to use when fetch the JavConfig\n");
        /* WARNING: Subroutine does not return */
        _exit(1);
    }

    // 0x1000e3080, 224 bytes, placed by class name
    // Client::SetupInterfaceRenderer()
    void Client::SetupInterfaceRenderer() {
        bool bVar1;
        long lVar2;
        SoftwarePix3D* pSVar3;
        SoftwareWorldRenderer* this_00;
        undefined1* this_01;
        _func_decltype_nullptr* in_RSI;

        lVar2 = (*(code*)*field_144->field_0)();
        bVar1 = std::operator==((unique_ptr*)&field_1120496, in_RSI);
        this_01 = &field_1120488;
        if (bVar1) {
            pSVar3 = operator_new(144);
            dash3d::SoftwarePix3D::SoftwarePix3D(pSVar3, (SharedArray*)(lVar2 + 32), *(int*)(lVar2 + 8),
                                                 *(int*)(lVar2 + 12));
            this_01->reset(pSVar3);
            this_00 = operator_new(6437248);
            pSVar3 = (SoftwarePix3D*)this_01->get();
            dash3d::SoftwareWorldRenderer::SoftwareWorldRenderer(this_00, pSVar3);
            (&field_1120496, this_00)->reset();
        } else {
            pSVar3 = (SoftwarePix3D*)
                         std::unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>::operator->(
                             (unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>*)this_01);
            pSVar3->SetDest((SharedArray*)(lVar2 + 32), *(int*)(lVar2 + 8), *(int*)(lVar2 + 12));
        }
    }

    // 0x1000e3160, 64 bytes, placed by class name
    // Client::AnimateInterface(int)
    void Client::AnimateInterface(int param_1) {
        Array* pAVar1;

        if (((ulong)(uint)param_1)->OpenInterface(param_1) != '\0') {
            pAVar1 = (Array*)Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>*)&rs2lib::IfType::m_list,
                (long)param_1);
            AnimateLayer(this, pAVar1, -1);
        }
    }

    // 0x1000e31b0, 304 bytes, placed by class name
    // Client::DrawInterface(int, int, int, int, int, int, int, int)
    void Client::DrawInterface(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                               int param_7, int param_8) {
        int iVar2;
        int iVar3;
        Array* pAVar4;
        undefined1* puVar5;
        ulong uVar6;

        if (((ulong)(uint)param_1)->OpenInterface(param_1) == '\0') {
            if (param_8 == -1) {
                uVar6 = 0;
                do {
                    puVar5 =
                        (undefined1*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)&field_2506576, uVar6);
                    *puVar5 = 1;
                    uVar6 = uVar6 + 1;
                } while (uVar6 != 100);
            } else {
                puVar5 = (undefined1*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)&field_2506576,
                                                                          (long)param_8);
                *puVar5 = 1;
            }
        } else {
            field_2505192 = (Array*)0;
            pAVar4 = (Array*)Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>*)&rs2lib::IfType::m_list,
                (long)param_1);
            DrawLayer(this, pAVar4, -1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
            pAVar4 = field_2505192;
            if (pAVar4 != (Array*)0) {
                iVar2 = (&field_2505200)->GetX();
                iVar3 = (&field_2505204)->GetX();
                DrawLayer(this, pAVar4, -1412584499, param_2, param_3, param_4, param_5, iVar2, iVar3, param_8);
                field_2505192 = (Array*)0;
            }
        }
    }

    // 0x1000e3320, 64 bytes, placed by class name
    // Client::CreateExactTileDestination(int, int)
    Client* Client::CreateExactTileDestination(int param_1, int param_2) {
        undefined4 in_ECX;
        undefined4 in_register_00000034;
        long lVar1;

        lVar1 = CONCAT44(in_register_00000034, param_1);
        *(int*)(lVar1 + 54736) = param_2;
        *(undefined4*)(lVar1 + 54740) = in_ECX;
        *(undefined8*)(lVar1 + 54744) = 4294967297;
        new (this) movement::ExactTileDestination((ExactTileDestination*)(lVar1 + 54728));
        return this;
    }

    // 0x1000e3370, 240 bytes, placed by class name
    // Client::UpdateHeatmap()
    void Client::UpdateHeatmap() {
        uint uVar1;
        int iVar2;
        uint uVar3;
        bool bVar4;
        shared_ptr* this_00;
        Heatmap* this_01;
        long lVar5;
        ulong uVar6;
        Heatmap* in_RSI;
        undefined1* this_02;

        this_02 = &field_52920;
        bVar4 = std::operator!=((unique_ptr*)this_02, (_func_decltype_nullptr*)in_RSI);
        if (bVar4) {
            field_52928 = field_8488;
            this_02->reset(in_RSI);
            uVar6 = 0;
            do {
                this_00 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, uVar6);
                bVar4 = operator!=(this_00, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    this_01 = (Heatmap*)std::unique_ptr<Heatmap, std::default_delete<Heatmap>>::operator->(
                        (unique_ptr<Heatmap, std::default_delete<Heatmap>>*)this_02);
                    uVar1 = field_53220;
                    lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                    iVar2 = *(int*)(lVar5 + 24);
                    uVar3 = field_53224;
                    lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                    this_01->AddDataPoint((iVar2 >> 7) + uVar1, (*(int*)(lVar5 + 28) >> 7) + uVar3);
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 != 2048);
        }
    }

    // 0x1000e3480, 432 bytes, placed by class name
    // Client::GetBuildInfoPrettyPrint()
    void Client::GetBuildInfoPrettyPrint() {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;
        Client* in_RSI;
        allocator local_10d0[8];
        fixed_string<char, 2048, true, eastl::allocator> local_10c8[2088];
        fixed_string<char, 512, true, eastl::allocator> local_8a0[552];
        fixed_string<char, 512, true, eastl::allocator> local_678[552];
        fixed_string<char, 1024, true, eastl::allocator> local_450[1064];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 1024, true, eastl::allocator>::fixed_string(local_450);
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_678);
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_8a0);
        GetServerBuildInfoPrettyPrint<char, 1024>(in_RSI, (fixed_string*)local_450);
        GetClientBuildInfoPrettyPrint<char, 512>(in_RSI, (fixed_string*)local_678);
        GetDeviceBuildInfoPrettyPrint<char, 512>(in_RSI, (fixed_string*)local_8a0);
        eastl::fixed_string<char, 2048, true, eastl::allocator>::fixed_string(local_10c8);
        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        uVar3 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true, eastl::allocator>>::
            sprintf((char*)local_10c8, "Server:<br>%s<br>Client:<br>%s<br>Operating System:<br>%s", uVar1, uVar2,
                    uVar3);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::allocator::allocator(local_10d0, "EASTL basic_string");
        new (this) eastl::string(pcVar4, local_10d0);
        /* WARNING: Subroutine does not return */
        local_10c8->~fixed_string();
    }

    // 0x1000e3810, 32 bytes, placed by class name
    // Client::ForcePlayerCameraPosition(int, int)
    void Client::ForcePlayerCameraPosition(int param_1, int param_2) {
        field_53108 = param_1;
        field_53112 = param_2;
        field_53116 = 0;
        field_53120 = 0;
    }

    // 0x1000e3830, 64 bytes, placed by class name
    // Client::GetTweenedPlayerCameraAngleX(float)
    int Client::GetTweenedPlayerCameraAngleX(float param_1) {
        int iVar1;
        int iVar2;

        iVar1 = (int)((float)field_53116 * param_1 + (float)field_53108);
        iVar2 = 383;
        if (iVar1 < 383) {
            iVar2 = iVar1;
        }
        iVar1 = 128;
        if (128 < iVar2) {
            iVar1 = iVar2;
        }
        return iVar1;
    }

    // 0x1000e3870, 48 bytes, placed by class name
    // Client::GetTweenedPlayerCameraAngleY(float)
    uint Client::GetTweenedPlayerCameraAngleY(float param_1) {
        return (int)((float)field_53120 * param_1 + (float)(int)field_53112) & 2047;
    }

    // 0x1000e38a0, 64 bytes, placed by class name
    // Client::OnWindowTopmostChanged()
    void Client::OnWindowTopmostChanged() {
        long lVar1;
        bool bVar2;
        long* plVar3;
        DeviceOptions* this_00;

        plVar3 = (long*)OSRenderCore_AudioThread::Instance();
        lVar1 = *(long*)(*plVar3 + -24);
        this_00 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        bVar2 = (bool)this_00->GetWindowTopmost();
        (((long)plVar3 + lVar1))->SetWindowTopmost(bVar2);
    }

    // 0x1000e3ab0, 192 bytes, placed by class name
    // Client::SendWindowMode()
    void Client::SendWindowMode() {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00;
        undefined4 uVar1;
        ServerConnection* pSVar2;
        undefined8 uVar3;
        DeviceOptions* this_01;
        undefined1 local_58[64];

        pSVar2 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        uVar3 = pSVar2->GetOutgoingEncryption();
        local_58->MakeClientMessage(90, uVar3);
        this_01 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        uVar1 = this_01->GetWindowMode();
        this_00 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_58 + 8);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(this_00, uVar1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(this_00, javapal::GameShell::m_sWid);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(this_00, javapal::GameShell::m_sHei);
        pSVar2 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        pSVar2->SendClientMessage(local_58);
        local_58->~ClientMessage();
    }

    // 0x1000e3b80, 160 bytes, placed by class name
    // Client::NotifyResize(bool)
    void Client::NotifyResize(bool param_1) {
        int iVar1;
        DeviceOptions* pDVar3;

        field_52448 = CurrentTimeMillis() + 500;
        field_52464 = 1;
        if (field_53216 != -1) {
            InterfaceCalculateSizeAndPosAll(this, true, param_1);
        }
        pDVar3 = (DeviceOptions*)
                     std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                         (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        iVar1 = GetFrameWidth();
        pDVar3->SetWindowWidth(iVar1, false);
        pDVar3 = (DeviceOptions*)
                     std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                         (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        iVar1 = GetFrameHeight();
        pDVar3->SetWindowHeight(iVar1, false);
    }

    // 0x1000e3c20, 144 bytes, placed by class name
    // Client::InterfaceCalculateSizeAndPosAll(bool, bool)
    void Client::InterfaceCalculateSizeAndPosAll(bool param_1, bool param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        WorldmapAreaMetadata* this_00;
        CoordMapSquare local_40;

        this_00 = (WorldmapAreaMetadata*)field_144->GetScreen();
        iVar1 = field_53216;
        local_40.m_x = this_00->GetMinMapX();
        iVar2 = local_40.GetX();
        local_40._8_4_ = this_00->GetUIHeight();
        iVar3 = local_40.field_8.GetX();
        InterfaceCalculateSizeAndPosInterface(this, iVar1, iVar2, iVar3, param_1, param_2);
    }

    // 0x1000e3cf0, 112 bytes, placed by class name
    // Client::GetAdjustedCameraZoom(int, int)
    int Client::GetAdjustedCameraZoom(int param_1, int param_2) {
        int iVar1;
        int iVar2;

        iVar1 = 434;
        if (param_2 < 434) {
            iVar1 = param_2;
        }
        iVar2 = 0;
        if (333 < param_2) {
            iVar2 = iVar1 + -334;
        }
        iVar2 = ((((int)field_52718 - (int)field_52716) * iVar2) / 100 + (int)field_52716) * param_1;
        iVar1 = iVar2 + 255;
        if (-1 < iVar2) {
            iVar1 = iVar2;
        }
        return iVar1 >> 8;
    }

    // 0x1000e3d60, 528 bytes, placed by class name
    // Client::CamFollow(int, int, int, int, int, int, int)
    void Client::CamFollow(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7) {
        undefined1* this_00;
        float fVar1;
        int iVar2;
        array<int, 2048ul>* this_01;
        array<int, 2048ul>* this_02;
        int* piVar3;
        long lVar4;
        uint uVar5;
        int iVar6;
        uint uVar7;
        int iVar8;

        iVar2 = GetAdjustedCameraZoom(this, param_6, param_7);
        uVar7 = -param_5 & 2047;
        this_01 = (array<int, 2048ul>*)dash3d::Pix3D::GetSinTable();
        this_02 = (array<int, 2048ul>*)dash3d::Pix3D::GetCosTable();
        uVar5 = -param_4 & 2047;
        if (uVar5 == 0) {
            iVar8 = 0;
        } else {
            piVar3 = (int*)std::array<int, 2048ul>::operator[](this_01, (ulong)uVar5);
            iVar8 = *piVar3;
            piVar3 = (int*)std::array<int, 2048ul>::operator[](this_02, (ulong)uVar5);
            iVar8 = -(iVar8 * iVar2) >> 16;
            iVar2 = iVar2 * *piVar3 >> 16;
        }
        if (uVar7 == 0) {
            iVar6 = 0;
        } else {
            piVar3 = (int*)std::array<int, 2048ul>::operator[](this_01, (ulong)uVar7);
            iVar6 = *piVar3;
            piVar3 = (int*)std::array<int, 2048ul>::operator[](this_02, (ulong)uVar7);
            iVar6 = iVar6 * iVar2 >> 16;
            iVar2 = iVar2 * *piVar3 >> 16;
        }
        if (field_52997 == '\0') {
            field_53088 = param_1 - iVar6;
            field_53092 = param_2 - iVar8;
            field_53096 = param_3 - iVar2;
            field_53100 = param_4;
            field_53104 = param_5;
            iVar2 = m_cameraMode;
        } else {
            field_53044 = param_1 - iVar6;
            field_53048 = param_2 - iVar8;
            field_53052 = param_3 - iVar2;
            field_53056 = param_4;
            field_53060 = param_5;
            iVar2 = m_cameraMode;
        }
        if (((iVar2 == 1) && (1 < field_53260)) &&
            (uVar5 = field_8488 * -1030792151 + 85899344, (uVar5 >> 1 | (uint)((uVar5 & 1) != 0) << 31) < 85899345)) {
            uVar5 = field_7294716;
            this_00 = field_52016;
            lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
            if ((127 < (uVar5 ^ *(uint*)(lVar4 + 24))) ||
                (fVar1 = field_7294724,
                 lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00),
                 127 < ((uint)fVar1 ^ *(uint*)(lVar4 + 28)))) {
                lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                TelePlayer(this, ((int)field_7294716 >> 7) + field_53220, ((int)field_7294724 >> 7) + field_53224,
                           *(int*)(lVar4 + 1204), true);
            }
        }
    }

    // 0x1000e3f80, 256 bytes, placed by class name
    // Client::TelePlayer(int, int, int, bool)
    void Client::TelePlayer(int param_1, int param_2, int param_3, bool param_4) {
        ServerConnection* pSVar1;
        undefined8 uVar2;
        ShuffledPacket3* this_00;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_01;
        ShuffledPacket4* pSVar3;
        uint uVar4;
        undefined1 local_88[64];
        SuperShuffledPacketFactory local_48;

        pSVar1 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        uVar2 = pSVar1->GetOutgoingEncryption();
        local_88->MakeClientMessage(27, uVar2);
        new (&local_48) SuperShuffledPacketFactory((SuperPacket*)(local_88 + 8));
        this_00 = (ShuffledPacket3*)local_48.HeapBeginPtr();
        ShuffledPacket3::p1<int>(this_00, param_3);
        this_01 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_48.p2_alt2();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(this_01, param_2);
        pSVar3 = (ShuffledPacket4*)local_48.p2_alt2();
        uVar4 = 0;
        if (param_4) {
            uVar4 = field_7294740;
        }
        ShuffledPacket4::p4<unsigned int>(pSVar3, uVar4);
        pSVar3 = (ShuffledPacket4*)local_48.p2_alt2();
        ShuffledPacket4::p2<int>(pSVar3, param_1);
        pSVar1 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        pSVar1->SendClientMessage(local_88);
        local_88->~ClientMessage();
    }

    // 0x1000e4080, 3328 bytes, placed by class name
    // Client::RebuildPacket(bool, core::SuperPacket&)
    void Client::RebuildPacket(bool param_1, SuperPacket* param_2) {
        undefined1* this_00;
        Js5* pJVar1;
        ushort uVar2;
        short sVar3;
        undefined1 uVar4;
        char cVar5;
        undefined2 uVar6;
        ushort uVar7;
        int iVar8;
        undefined4 uVar9;
        int iVar10;
        undefined4 uVar11;
        undefined4 uVar12;
        uint uVar13;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* pPVar14;
        array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>* this_01;
        array<rs2lib::CoordZoneSource, 13ul>* paVar15;
        ClippingRectangle* this_02;
        ShuffledPacket4* this_03;
        undefined4* puVar16;
        undefined8* puVar17;
        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>* psVar18;
        CoordZoneSource* this_04;
        Js5RequestKey* this_05;
        ostream* poVar19;
        char* pcVar20;
        uint uVar21;
        ulong uVar22;
        Array<int, eastl::allocator>* pAVar23;
        undefined7 in_register_00000031;
        Array<int, eastl::allocator>* pAVar24;
        ulong uVar25;
        ulong uVar26;
        Client* pCVar27;
        int iVar28;
        SuperShuffledPacketFactory local_1d0;
        ostream local_1c0[264];
        uint local_b8;
        uint local_b4;
        ulong local_b0;
        SideBarData local_a8[2];
        array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>* local_90;
        undefined1 local_88[16];
        Array<int, eastl::allocator>* local_78;
        Array<int, eastl::allocator>* local_70;
        Array<int, eastl::allocator>* local_68;
        ulong local_60;
        array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>* local_58;
        Array<int, eastl::allocator>* local_50;
        Client* local_48;
        Array<int, eastl::allocator>* local_40;
        Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>* local_38;

        m_mapBuildRegionMode = param_1;
        local_48 = this;
        if ((int)CONCAT71(in_register_00000031, param_1) == 0) {
            new (&local_1d0) SuperShuffledPacketFactory(param_2);
            pPVar14 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_1d0.p2_alt2();
            uVar6 = pPVar14->g2();
            local_70 = (Array<int, eastl::allocator>*)CONCAT62(local_70._2_6_, uVar6);
            this_03 = (ShuffledPacket4*)local_1d0.p2_alt2();
            uVar6 = this_03->g2();
            local_68 = (Array<int, eastl::allocator>*)CONCAT62(local_68._2_6_, uVar6);
            uVar7 = param_2->g2();
            local_58 = (array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>*)&field_1104368;
            pAVar24 = (Array<int, eastl::allocator>*)(ulong)uVar7;
            local_58->set_max_size((ulong)pAVar24, 3);
            if (uVar7 != 0) {
                pAVar23 = (Array<int, eastl::allocator>*)0;
                local_78 = pAVar24;
                do {
                    uVar11 = param_2->g4();
                    local_38 =
                        (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)CONCAT44(
                            local_38._4_4_, uVar11);
                    uVar11 = param_2->g4();
                    uVar12 = param_2->g4();
                    uVar9 = param_2->g4();
                    puVar16 = (undefined4*)Array<std::array<int, 4ul>, eastl::allocator>::operator[](
                        (Array<std::array<int, 4ul>, eastl::allocator>*)local_58, (ulong)pAVar23);
                    *puVar16 = (int)local_38;
                    puVar16[1] = uVar11;
                    puVar16[2] = uVar12;
                    puVar16[3] = uVar9;
                    pAVar23 = pAVar23 + 1;
                    pAVar24 = local_78;
                } while (local_78 != pAVar23);
            }
            pCVar27 = local_48;
            local_58 =
                (array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>*)&local_48->field_1104272;
            local_58->set_max_size((ulong)pAVar24, 3);
            local_40 = (Array<int, eastl::allocator>*)&pCVar27->field_1104296;
            local_40->set_max_size((ulong)pAVar24, 3);
            local_88._8_8_ = &pCVar27->field_1104320;
            local_88._8_8_->set_max_size((ulong)pAVar24, 3);
            local_50 = (Array<int, eastl::allocator>*)&pCVar27->field_1104344;
            local_50->set_max_size((ulong)pAVar24, 3);
            local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)&pCVar27
                           ->field_1104392;
            local_38->set_max_size((ulong)pAVar24, 3);
            (&pCVar27->field_1104416, (ulong)pAVar24, 3)->set_max_size();
            (&pCVar27->field_1104440, (ulong)pAVar24, 3)->set_max_size();
            if (pAVar24 != (Array<int, eastl::allocator>*)0) {
                pAVar23 = (Array<int, eastl::allocator>*)0;
                do {
                    local_1d0.field_0 = (PacketT*)0;
                    new (&local_1d0) game::PlayerModelWearSlot();
                    puVar17 = (undefined8*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                        (Array<rs2lib::CoordMapSquare, eastl::allocator>*)local_58, (ulong)pAVar23);
                    *puVar17 = local_1d0.field_0;
                    puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](local_40, (ulong)pAVar23);
                    *puVar16 = 0;
                    puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)local_88._8_8_, (ulong)pAVar23);
                    *puVar16 = 0;
                    puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](local_50, (ulong)pAVar23);
                    *puVar16 = 0;
                    new (&local_1d0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    psVar18 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                        Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                              eastl::allocator>::operator[](local_38, (ulong)pAVar23);
                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(psVar18,
                                                                                           (shared_ptr*)&local_1d0);
                    local_1d0.~shared_ptr();
                    new (&local_1d0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    psVar18 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                        Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>::
                        operator[]((Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                          eastl::allocator>*)&pCVar27->field_1104416,
                                   (ulong)pAVar23);
                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(psVar18,
                                                                                           (shared_ptr*)&local_1d0);
                    local_1d0.~shared_ptr();
                    new (&local_1d0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    psVar18 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                        Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>::
                        operator[]((Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                          eastl::allocator>*)&pCVar27->field_1104440,
                                   (ulong)pAVar23);
                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(psVar18,
                                                                                           (shared_ptr*)&local_1d0);
                    local_1d0.~shared_ptr();
                    pAVar23 = pAVar23 + 1;
                } while (pAVar24 != pAVar23);
            }
            uVar7 = (ushort)local_70;
            uVar25 = (ulong)local_70 & 65535;
            uVar2 = (ushort)local_68;
            uVar22 = (ulong)local_68 & 65535;
            new (&local_1d0) std::stringstream();
            iVar8 = uVar7 + 1;
            if (-1 < (int)(uVar7 - 6)) {
                iVar8 = uVar7 - 6;
            }
            local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                              eastl::allocator>*)(ulong)(uint)(iVar8 >> 3);
            uVar21 = uVar7 + 6 >> 3;
            iVar10 = uVar2 - 6;
            iVar28 = uVar2 + 1;
            if (-1 < iVar10) {
                iVar28 = iVar10;
            }
            local_70 = (Array<int, eastl::allocator>*)CONCAT44(local_70._4_4_, uVar21);
            pCVar27 = local_48;
            local_b0 = uVar25;
            local_60 = uVar22;
            if (iVar8 >> 3 <= (int)uVar21) {
                uVar21 = iVar28 >> 3;
                uVar13 = (int)uVar22 + 6U >> 3;
                local_68 = (Array<int, eastl::allocator>*)CONCAT44(local_68._4_4_, uVar13);
                if ((int)uVar13 < (int)uVar21) {
                    uVar13 = uVar21;
                }
                local_78 = (Array<int, eastl::allocator>*)CONCAT44(local_78._4_4_, uVar13 + 1);
                uVar25 = 0;
                local_90 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)CONCAT44(local_90._4_4_, uVar21);
                do {
                    if ((int)uVar21 <= (int)local_68) {
                        uVar25 = (ulong)(int)uVar25;
                        do {
                            sidebars::SideBarData::SideBarData(local_a8, (int)local_38, uVar21);
                            puVar17 = (undefined8*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                                (Array<rs2lib::CoordMapSquare, eastl::allocator>*)local_58, uVar25);
                            *puVar17 = local_a8[0]._0_8_;
                            std::string::string<decltype(nullptr)>((string*)local_a8, "");
                            local_1d0.str(local_a8);
                            local_a8->~string();
                            poVar19 = std::operator<<(local_1c0, "m");
                            poVar19 = (ostream*)std::ostream::operator<<(poVar19, (int)local_38);
                            poVar19 = std::operator<<(poVar19, "_");
                            std::ostream::operator<<(poVar19, uVar21);
                            pJVar1 = (Js5*)pCVar27->field_54432;
                            local_a8->str();
                            pcVar20 = (char*)local_a8->c_str();
                            uVar11 = pJVar1->GetGroupId(pcVar20);
                            puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](local_40, uVar25);
                            *puVar16 = uVar11;
                            local_a8->~string();
                            std::string::string<decltype(nullptr)>((string*)local_a8, "");
                            local_1d0.str(local_a8);
                            pCVar27 = local_48;
                            local_a8->~string();
                            poVar19 = std::operator<<(local_1c0, "l");
                            poVar19 = (ostream*)std::ostream::operator<<(poVar19, (int)local_38);
                            poVar19 = std::operator<<(poVar19, "_");
                            std::ostream::operator<<(poVar19, uVar21);
                            pJVar1 = (Js5*)pCVar27->field_54432;
                            local_a8->str();
                            pcVar20 = (char*)local_a8->c_str();
                            uVar11 = pJVar1->GetGroupId(pcVar20);
                            puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)local_88._8_8_, uVar25);
                            *puVar16 = uVar11;
                            local_a8->~string();
                            std::string::string<decltype(nullptr)>((string*)local_a8, "");
                            local_1d0.str(local_a8);
                            local_a8->~string();
                            poVar19 = std::operator<<(local_1c0, "e");
                            poVar19 = (ostream*)std::ostream::operator<<(poVar19, (int)local_38);
                            poVar19 = std::operator<<(poVar19, "_");
                            std::ostream::operator<<(poVar19, uVar21);
                            pJVar1 = (Js5*)pCVar27->field_54432;
                            local_a8->str();
                            pcVar20 = (char*)local_a8->c_str();
                            uVar11 = pJVar1->GetGroupId(pcVar20);
                            puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](local_50, uVar25);
                            *puVar16 = uVar11;
                            local_a8->~string();
                            uVar25 = uVar25 + 1;
                            uVar21 = uVar21 + 1;
                        } while ((uint)local_78 != uVar21);
                        uVar21 = (uint)local_90;
                    }
                    iVar8 = (int)local_38;
                    local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                      eastl::allocator>*)(ulong)(iVar8 + 1);
                } while (iVar8 != (int)local_70);
            }
            StartRebuild(pCVar27, (int)local_b0, (int)local_60, true);
        } else {
            new (&local_1d0) SuperShuffledPacketFactory(param_2);
            pPVar14 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_1d0.p2_alt2();
            uVar4 = pPVar14->g1();
            local_b0 = CONCAT71(local_b0._1_7_, uVar4);
            pPVar14 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_1d0.p2_alt2();
            uVar6 = pPVar14->g2();
            local_90 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)CONCAT62(local_90._2_6_, uVar6);
            pPVar14 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_1d0.p2_alt2();
            uVar6 = pPVar14->g2();
            local_60 = CONCAT62(local_60._2_6_, uVar6);
            uVar6 = param_2->g2();
            local_50 = (Array<int, eastl::allocator>*)CONCAT62(local_50._2_6_, uVar6);
            param_2->GBitStart();
            local_58 = (array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>*)&field_1104468;
            local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)0;
            do {
                uVar25 = 0;
                do {
                    uVar22 = 0;
                    do {
                        iVar8 = param_2->gBit(1);
                        this_01 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)
                            std::array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>::operator[](
                                local_58, (ulong)local_38);
                        paVar15 = (array<rs2lib::CoordZoneSource, 13ul>*)
                            std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>::operator[](this_01, uVar25);
                        this_02 =
                            (ClippingRectangle*)std::array<rs2lib::CoordZoneSource, 13ul>::operator[](paVar15, uVar22);
                        if (iVar8 == 1) {
                            iVar8 = param_2->gBit(26);
                            this_02->SetFromPackedCode(iVar8);
                        } else {
                            jag::graphics::ClippingRectangle::ClippingRectangle(this_02);
                        }
                        uVar22 = uVar22 + 1;
                    } while (uVar22 != 13);
                    uVar25 = uVar25 + 1;
                } while (uVar25 != 13);
                local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                  eastl::allocator>*)((long)local_38 + 1);
            } while (local_38 !=
                     (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)4);
            param_2->GBitEnd();
            local_88._8_8_ = &local_48->field_1104368;
            sVar3 = (short)local_50;
            uVar25 = (ulong)local_50 & 65535;
            local_88._8_8_->set_max_size(uVar25, 3);
            if (sVar3 != 0) {
                uVar22 = 0;
                do {
                    uVar11 = param_2->g4();
                    local_38 =
                        (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)CONCAT44(
                            local_38._4_4_, uVar11);
                    uVar11 = param_2->g4();
                    local_40 = (Array<int, eastl::allocator>*)CONCAT44(local_40._4_4_, uVar11);
                    uVar11 = param_2->g4();
                    uVar12 = param_2->g4();
                    puVar16 = (undefined4*)Array<std::array<int, 4ul>, eastl::allocator>::operator[](
                        (Array<std::array<int, 4ul>, eastl::allocator>*)local_88._8_8_, uVar22);
                    *puVar16 = (int)local_38;
                    puVar16[1] = local_40._0_4_;
                    puVar16[2] = uVar11;
                    puVar16[3] = uVar12;
                    uVar22 = uVar22 + 1;
                } while (uVar25 != uVar22);
            }
            pCVar27 = local_48;
            this_00 = &local_48->field_1104272;
            this_00->set_max_size(uVar25, 3);
            local_78 = (Array<int, eastl::allocator>*)&pCVar27->field_1104296;
            local_78->set_max_size(uVar25, 3);
            local_70 = (Array<int, eastl::allocator>*)&pCVar27->field_1104320;
            local_70->set_max_size(uVar25, 3);
            local_68 = (Array<int, eastl::allocator>*)&pCVar27->field_1104344;
            local_68->set_max_size(uVar25, 3);
            local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)&pCVar27
                           ->field_1104392;
            local_38->set_max_size(uVar25, 3);
            local_40 = (Array<int, eastl::allocator>*)&pCVar27->field_1104416;
            local_40->set_max_size(uVar25, 3);
            (&pCVar27->field_1104440, uVar25, 3)->set_max_size();
            if ((short)local_50 != 0) {
                uVar22 = 0;
                do {
                    local_1d0.field_0 = (PacketT*)0;
                    new (&local_1d0) game::PlayerModelWearSlot();
                    puVar17 = (undefined8*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                        (Array<rs2lib::CoordMapSquare, eastl::allocator>*)this_00, uVar22);
                    *puVar17 = local_1d0.field_0;
                    puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](local_78, uVar22);
                    *puVar16 = 0;
                    puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](local_70, uVar22);
                    *puVar16 = 0;
                    puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](local_68, uVar22);
                    *puVar16 = 0;
                    new (&local_1d0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    psVar18 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                        Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                              eastl::allocator>::operator[](local_38, uVar22);
                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(psVar18,
                                                                                           (shared_ptr*)&local_1d0);
                    local_1d0.~shared_ptr();
                    new (&local_1d0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    psVar18 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                        Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>::
                        operator[](
                            (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)
                                local_40,
                            uVar22);
                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(psVar18,
                                                                                           (shared_ptr*)&local_1d0);
                    local_1d0.~shared_ptr();
                    new (&local_1d0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    psVar18 = (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)
                        Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>::
                        operator[]((Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                                          eastl::allocator>*)&pCVar27->field_1104440,
                                   uVar22);
                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(psVar18,
                                                                                           (shared_ptr*)&local_1d0);
                    local_1d0.~shared_ptr();
                    uVar22 = uVar22 + 1;
                } while (uVar25 != uVar22);
            }
            local_b8 = (uint)(ushort)local_90;
            local_b4 = (uint)(ushort)local_60;
            new (&local_1d0) std::stringstream();
            uVar25 = 0;
            local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>,
                              eastl::allocator>*)((ulong)local_38 & 18446744069414584320);
            do {
                local_60 = uVar25;
                local_90 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)
                    std::array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>::operator[](local_58,
                                                                                                             uVar25);
                pAVar24 = (Array<int, eastl::allocator>*)0;
                do {
                    local_50 = pAVar24;
                    paVar15 = (array<rs2lib::CoordZoneSource, 13ul>*)
                        std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>::operator[](local_90,
                                                                                                (ulong)pAVar24);
                    uVar25 = 0;
                    local_88._8_8_ = paVar15;
                    do {
                        this_04 =
                            (CoordZoneSource*)std::array<rs2lib::CoordZoneSource, 13ul>::operator[](paVar15, uVar25);
                        cVar5 = this_04->IsSet();
                        if (cVar5 != '\0') {
                            new (local_88) rs2lib::CoordMapSquare(this_04);
                            if (0 < (int)local_38) {
                                uVar26 = (ulong)local_38 & 4294967295;
                                uVar22 = 0;
                                do {
                                    this_05 =
                                        (Js5RequestKey*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                                            (Array<rs2lib::CoordMapSquare, eastl::allocator>*)this_00, uVar22);
                                    cVar5 = jagex3::Js5RequestKey::operator==(this_05, (Js5RequestKey*)local_88);
                                    if (cVar5 != '\0')
                                        goto LAB_1000e477d;
                                    uVar22 = uVar22 + 1;
                                } while (uVar26 != uVar22);
                            }
                            local_40 = (Array<int, eastl::allocator>*)(long)(int)local_38;
                            puVar17 = (undefined8*)Array<rs2lib::CoordMapSquare, eastl::allocator>::operator[](
                                (Array<rs2lib::CoordMapSquare, eastl::allocator>*)this_00, (ulong)local_40);
                            *puVar17 = local_88._0_8_;
                            std::string::string<decltype(nullptr)>((string*)local_a8, "");
                            local_1d0.str(local_a8);
                            local_a8->~string();
                            poVar19 = std::operator<<(local_1c0, "m");
                            iVar8 = local_88->GetX();
                            poVar19 = (ostream*)std::ostream::operator<<(poVar19, iVar8);
                            poVar19 = std::operator<<(poVar19, "_");
                            iVar8 = local_88->GetZ();
                            std::ostream::operator<<(poVar19, iVar8);
                            pJVar1 = (Js5*)local_48->field_54432;
                            local_a8->str();
                            pcVar20 = (char*)local_a8->c_str();
                            uVar11 = pJVar1->GetGroupId(pcVar20);
                            puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](local_78, (ulong)local_40);
                            *puVar16 = uVar11;
                            local_a8->~string();
                            std::string::string<decltype(nullptr)>((string*)local_a8, "");
                            local_1d0.str(local_a8);
                            local_a8->~string();
                            poVar19 = std::operator<<(local_1c0, "l");
                            iVar8 = local_88->GetX();
                            poVar19 = (ostream*)std::ostream::operator<<(poVar19, iVar8);
                            poVar19 = std::operator<<(poVar19, "_");
                            iVar8 = local_88->GetZ();
                            std::ostream::operator<<(poVar19, iVar8);
                            pJVar1 = (Js5*)local_48->field_54432;
                            local_a8->str();
                            pcVar20 = (char*)local_a8->c_str();
                            uVar11 = pJVar1->GetGroupId(pcVar20);
                            puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](local_70, (ulong)local_40);
                            *puVar16 = uVar11;
                            local_a8->~string();
                            std::string::string<decltype(nullptr)>((string*)local_a8, "");
                            local_1d0.str(local_a8);
                            local_a8->~string();
                            poVar19 = std::operator<<(local_1c0, "e");
                            poVar19 = (ostream*)std::ostream::operator<<(poVar19, (int)local_50);
                            poVar19 = std::operator<<(poVar19, "_");
                            std::ostream::operator<<(poVar19, (int)uVar25);
                            pJVar1 = (Js5*)local_48->field_54432;
                            local_a8->str();
                            pcVar20 = (char*)local_a8->c_str();
                            uVar11 = pJVar1->GetGroupId(pcVar20);
                            puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](local_68, (ulong)local_40);
                            *puVar16 = uVar11;
                            local_a8->~string();
                            local_38 =
                                (Array<shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)
                                    CONCAT44(local_38._4_4_, (int)local_38 + 1);
                        LAB_1000e477d:
                            paVar15 = (array<rs2lib::CoordZoneSource, 13ul>*)local_88._8_8_;
                        }
                        uVar25 = uVar25 + 1;
                    } while (uVar25 != 13);
                    pAVar24 = local_50 + 1;
                } while (pAVar24 != (Array<int, eastl::allocator>*)13);
                uVar25 = local_60 + 1;
            } while (uVar25 != 4);
            StartRebuild(local_48, local_b4, local_b8, (char)local_b0 != '\x01');
        }
        local_1d0.~stringstream();
    }

    // 0x1000e5430, 1600 bytes, placed by class name
    // Client::StartRebuild(int, int, bool)
    void Client::StartRebuild(int param_1, int param_2, bool param_3) {
        uint uVar1;
        bool bVar2;
        int iVar3;
        undefined8 uVar4;
        ServerConnection* this_00;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long lVar5;
        int* piVar6;
        shared_ptr* this_02;
        Minimap* pMVar7;
        CollisionMap* this_03;
        uint uVar8;
        int iVar9;
        int iVar10;
        uint uVar11;
        int iVar12;
        undefined7 in_register_00000009;
        int iVar13;
        ulong uVar14;
        long lVar15;
        long lVar16;
        ulong uVar17;
        undefined1* puVar18;
        undefined1* puVar19;
        uint uVar20;
        int iVar21;

        if ((((int)CONCAT71(in_register_00000009, param_3) == 0) || (field_53228 != param_1)) ||
            (field_53232 != param_2)) {
            bVar2 = (&field_19120)->operator_cast_to_bool();
            if (bVar2) {
                this_00 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                iVar3 = this_00->GetConnectionState();
                if (iVar3 == 3) {
                    if (field_53216 != -1) {
                        RunHookImmediate(this, field_53216, 26);
                    }
                    if (field_54760 != '\0') {
                        uVar4 = logger::default_logger();
                        logger::Logger::Log(uVar4, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client.cpp",
                                            4431, "Got new build coordinates: %i, %i", param_1, param_2);
                    }
                    field_53228 = param_1;
                    field_53232 = param_2;
                    SetMainState(this, 25);
                    MessageBox(this, (basic_string*)&constants::text::loading, true);
                    uVar11 = field_53220;
                    uVar1 = field_53224;
                    uVar8 = param_1 * 8 - 48;
                    field_53220 = uVar8;
                    uVar20 = param_2 * 8 - 48;
                    field_53224 = uVar20;
                    iVar3 = uVar8 - uVar11;
                    iVar21 = uVar20 - uVar1;
                    uVar14 = 0;
                    do {
                        this_01 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                            std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                                (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, uVar14);
                        lVar5 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                        if (lVar5 != 0) {
                            uVar17 = 0;
                            do {
                                piVar6 =
                                    (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar5 + 444), uVar17);
                                *piVar6 = *piVar6 - iVar3;
                                piVar6 =
                                    (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar5 + 484), uVar17);
                                *piVar6 = *piVar6 - iVar21;
                                uVar17 = uVar17 + 1;
                            } while (uVar17 != 10);
                            *(int*)(lVar5 + 24) = *(int*)(lVar5 + 24) + iVar3 * -128;
                            *(int*)(lVar5 + 28) = *(int*)(lVar5 + 28) + iVar21 * -128;
                        }
                        uVar14 = uVar14 + 1;
                    } while (uVar14 != 65536);
                    uVar14 = 0;
                    do {
                        this_02 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                            (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, uVar14);
                        bVar2 = operator!=(this_02, (_func_decltype_nullptr*)0);
                        if (bVar2) {
                            uVar17 = 0;
                            do {
                                lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_02);
                                piVar6 =
                                    (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar5 + 444), uVar17);
                                *piVar6 = *piVar6 - iVar3;
                                lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_02);
                                piVar6 =
                                    (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar5 + 484), uVar17);
                                *piVar6 = *piVar6 - iVar21;
                                uVar17 = uVar17 + 1;
                            } while (uVar17 != 10);
                            lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_02);
                            *(int*)(lVar5 + 24) = *(int*)(lVar5 + 24) + iVar3 * -128;
                            lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_02);
                            *(int*)(lVar5 + 28) = *(int*)(lVar5 + 28) + iVar21 * -128;
                        }
                        uVar14 = uVar14 + 1;
                    } while (uVar14 != 2048);
                    uVar8 = iVar3 >> 31 & 103;
                    uVar14 = (ulong)uVar8;
                    iVar13 = 104;
                    if (-1 >= iVar3) {
                        iVar13 = -1;
                    }
                    uVar20 = iVar21 >> 31 & 103;
                    iVar9 = 104;
                    if (-1 >= iVar21) {
                        iVar9 = -1;
                    }
                    lVar16 = (ulong)(-1 < iVar21) * 2 + -1;
                    lVar5 = (ulong)(-1 < iVar3) * 2 + -1;
                    puVar18 = field_1120504 + (ulong)uVar20 * 32 + uVar14 * 3328 + 56;
                    iVar10 = ((uVar8 + param_1 * 8) - uVar11) + -48;
                    do {
                        uVar11 = (int)uVar14 + iVar3;
                        puVar19 = puVar18;
                        uVar17 = (ulong)uVar20;
                        iVar12 = ((uVar20 + param_2 * 8) - uVar1) + -48;
                        do {
                            uVar8 = iVar21 + (int)uVar17;
                            lVar15 = 0;
                            do {
                                if ((int)uVar8 < 104 && (-1 < (int)(uVar11 | uVar8) && (int)uVar11 < 104)) {
                                    eastl::list<shared_ptr<ClientObj>, eastl::allocator>::operator=(
                                        (list<shared_ptr<ClientObj>, eastl::allocator>*)(puVar19 + lVar15),
                                        (list*)(field_1120504 + lVar15 + (long)iVar12 * 32 + (long)iVar10 * 3328 + 56));
                                } else {
                                    ((puVar19 + lVar15))->clear();
                                }
                                lVar15 = lVar15 + 346112;
                            } while (lVar15 != 1384448);
                            uVar17 = uVar17 + lVar16;
                            puVar19 = puVar19 + lVar16 * 32;
                            iVar12 = iVar12 + (int)lVar16;
                        } while (iVar9 != (int)uVar17);
                        uVar14 = uVar14 + lVar5;
                        puVar18 = puVar18 + lVar5 * 3328;
                        iVar10 = iVar10 + (int)lVar5;
                    } while (iVar13 != (int)uVar14);
                    eastl::list<LocChange, eastl::allocator>::remove_if<Client::StartRebuild(int, int, bool)::__6>(
                        (list<LocChange, eastl::allocator>*)&field_2505008, CONCAT44(iVar21, iVar3));
                    puVar18 = &field_8152;
                    piVar6 = (int*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                        (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)puVar18);
                    if (*piVar6 != 0) {
                        *piVar6 = *piVar6 - iVar3;
                        lVar5 = std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)puVar18);
                        *(int*)(lVar5 + 4) = *(int*)(lVar5 + 4) - iVar21;
                    }
                    (field_52344, iVar3, iVar21)->OnMapRebuild();
                    field_2508752 = 0;
                    field_52997 = 0;
                    field_53088 = field_53088 + iVar3 * -128;
                    field_53096 = field_53096 + iVar21 * -128;
                    field_7294716 = field_7294716 + iVar3 * -128;
                    field_7294724 = (float)((int)field_7294724 + iVar21 * -128);
                    pMVar7 =
                        (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)puVar18);
                    pMVar7->SetLevel(-1);
                    pMVar7 =
                        (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)puVar18);
                    pMVar7->ResetIcons();
                    (&field_7164616)->clear();
                    (&field_7164584)->clear();
                    uVar14 = 0;
                    do {
                        this_03 = (CollisionMap*)
                            eastl::vector<movement::CollisionMap,
                                          eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[]((vector<movement::CollisionMap,
                                               eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true,
                                                                             eastl::allocator>>*)&field_6814744,
                                       uVar14);
                        this_03->Reset();
                        uVar14 = uVar14 + 1;
                    } while (uVar14 != 4);
                    m_highlightManager->SaveToFiles();
                    (m_highlightManager, field_53220, field_53224, 104, 104)->OnMapRebuild();
                    return;
                }
            }
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 4418,
                "Ignoring build request while disconnected");
        } else if (field_54760 != '\0') {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 4411,
                "Ignoring duplicate build coordinates: %i, %i", param_1, param_2);
        }
    }

    // 0x1000e5b70, 368 bytes, placed by class name
    // Client::WorldCoordToSourceCoord(rs2lib::CoordGrid const&)
    Client* Client::WorldCoordToSourceCoord(CoordGrid* param_1) {
        char cVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>* this_00;
        array<rs2lib::CoordZoneSource, 13ul>* this_01;
        undefined8* puVar6;
        CoordGrid* in_RDX;
        uint uVar7;
        undefined1 local_38[16];

        new (this) rs2lib::CoordGrid(in_RDX);
        if ((char)param_1[69029].m_level != '\0') {
            cVar1 = InRegion();
            if (cVar1 != '\0') {
                iVar2 = GetMapSquareZ();
                uVar7 = iVar2 - ((int)param_1[3326].m_x >> 3);
                iVar2 = GetZoneZ();
                if (((uVar7 < 13) && (iVar2 = iVar2 - ((int)param_1[3326].m_z >> 3), -1 < iVar2)) && (iVar2 < 13)) {
                    iVar3 = GetX();
                    this_00 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)
                        std::array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>::operator[](
                            (array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>*)&param_1[69029]
                                .m_x,
                            (long)iVar3);
                    this_01 = (array<rs2lib::CoordZoneSource, 13ul>*)
                        std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>::operator[](this_00,
                                                                                                (long)(int)uVar7);
                    puVar6 = (undefined8*)std::array<rs2lib::CoordZoneSource, 13ul>::operator[](this_01, (long)iVar2);
                    local_38._0_8_ = *puVar6;
                    local_38._8_8_ = puVar6[1];
                    cVar1 = local_38->IsSet();
                    if (cVar1 != '\0') {
                        iVar2 = local_38->GetX();
                        SetZoneX(iVar2);
                        iVar2 = local_38->GetZ();
                        SetZoneZ(iVar2);
                        iVar2 = local_38->GetLevel();
                        iVar3 = GetZoneTileX();
                        iVar4 = GetZoneTileZ();
                        iVar3 = util::RegionRotate::DX(iVar3, iVar4, -iVar2 & 3U);
                        iVar4 = GetZoneTileX();
                        iVar5 = GetZoneTileZ();
                        iVar2 = util::RegionRotate::DZ(iVar4, iVar5, -iVar2 & 3U);
                        SetZoneTileX(iVar3);
                        SetZoneTileZ(iVar2);
                    }
                }
            }
        }
        return this;
    }

    // 0x1000e5de0, 80 bytes, placed by class name
    // Client::RunHookImmediate(int, rs2lib::IfType::HookTypes)
    void Client::RunHookImmediate(uint param_1, undefined4 param_3) {
        undefined8 uVar1;

        if (((ulong)param_1)->OpenInterface(param_1) != '\0') {
            uVar1 = Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>*)&rs2lib::IfType::m_list,
                (long)(int)param_1);
            RunHookLayer(this, uVar1, param_3);
        }
    }

    // 0x1000e5fa0, 224 bytes, placed by class name
    // Client::PreventTimeout(bool)
    void Client::PreventTimeout(bool param_1) {
        undefined1* this_00;
        ServerConnection* pSVar1;
        ulong uVar2;
        undefined8 uVar3;
        ClientMessage local_60;

        this_00 = &field_19120;
        pSVar1 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
        pSVar1->IncrementNoTimeOutTickCounter();
        pSVar1 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
        uVar2 = pSVar1->GetTicksSinceNoTimeOutPacket();
        if ((49 < uVar2) || (param_1)) {
            pSVar1 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
            pSVar1->ResetNoTimeOutTickCounter();
            if (field_1103920 == '\0') {
                pSVar1 = (ServerConnection*)
                             std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                 (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                if (pSVar1->GetConnectionState() != 0) {
                    pSVar1 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                     (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                    uVar3 = pSVar1->GetOutgoingEncryption();
                    local_60.MakeClientMessage(40, uVar3);
                    pSVar1 = (ServerConnection*)
                                 std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                     (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)this_00);
                    pSVar1->SendClientMessage(&local_60);
                    local_60.~ClientMessage();
                }
            }
        }
    }

    // 0x1000e61b0, 80 bytes, placed by class name
    // Client::OnLoadLocations(eastl::vector<LocInfo, BucketAllocatorEASTL> const&)
    void Client::OnLoadLocations(vector* param_1) {
        LocInfo* pLVar1;
        LocInfo* pLVar2;

        pLVar1 = (LocInfo*)param_1->HeapBeginPtr();
        pLVar2 = (LocInfo*)param_1->end();
        for (; pLVar1 != pLVar2; pLVar1 = pLVar1 + 1) {
            OnLoadLocation(this, pLVar1);
        }
    }

    // 0x1000e6200, 1072 bytes, placed by class name
    // Client::ShowObject(int, int)
    void Client::ShowObject(int param_1, int param_2) {
        int iVar1;
        Client* pCVar2;
        char cVar4;
        bool bVar5;
        int iVar6;
        world* pwVar7;
        shared_ptr* psVar8;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar9;
        long lVar10;
        shared_ptr<ClientObj>* this_00;
        LoginManager* this_01;
        HighlightChannelProperties* pHVar11;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        Client* this_02;
        HighlightChannelProperties* pHVar12;
        shared_ptr local_c8;
        list<console::Line, eastl::allocator> local_b8[8];
        longlong local_a8;
        world* local_a0;
        EntityHighlight local_98;
        shared_ptr local_88;
        shared_ptr local_78;
        shared_ptr local_68;
        shared_ptr local_58;
        shared_ptr local_48;

        iVar1 = m_playerLevel;
        cVar4 = ((field_1120504 + (long)param_2 * 32 + (long)param_1 * 3328 + (long)iVar1 * 346112 + 56))->empty();
        if (cVar4 == '\0') {
            new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            eastl::list<shared_ptr<ClientObj>, eastl::allocator>::sort<Client::ShowObject(int, int)::__12>(
                (hashtable<
                    eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                    eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                    true>*)(field_1120504 + (long)param_2 * 32 + (long)param_1 * 3328 + (long)iVar1 * 346112 + 56));
            psVar8 = (shared_ptr*)eastl::list<shared_ptr<ClientObj>, eastl::allocator>::back();
            shared_ptr<ClientObj>::operator=((shared_ptr<ClientObj>*)&local_68, psVar8);
            bVar5 = operator==(&local_68, (_func_decltype_nullptr*)0);
            if (bVar5) {
                pwVar7 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
                pwVar7->DelObj(m_playerLevel, param_1, param_2);
            } else {
                new (&local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                new (&local_78) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                eastl::list<console::Line, eastl::allocator>::begin(local_b8);
                local_48.end();
                bVar5 = eastl::operator!=((eastl*)local_b8, (hashtable_iterator_base*)&local_48, extraout_RDX);
                if (bVar5) {
                    do {
                        pvVar9 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)local_b8);
                        lVar10 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar9);
                        iVar1 = *(int*)(lVar10 + 24);
                        lVar10 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)&local_68);
                        if (iVar1 != *(int*)(lVar10 + 24)) {
                            bVar5 = operator==(&local_58, (_func_decltype_nullptr*)0);
                            if (bVar5) {
                                psVar8 = (shared_ptr*)
                                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_b8);
                                shared_ptr<ClientObj>::operator=((shared_ptr<ClientObj>*)&local_58, psVar8);
                            }
                            pvVar9 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_b8);
                            lVar10 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar9);
                            iVar1 = *(int*)(lVar10 + 24);
                            lVar10 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)&local_58);
                            if ((iVar1 != *(int*)(lVar10 + 24)) &&
                                (bVar5 = operator==(&local_78, (_func_decltype_nullptr*)0), bVar5)) {
                                psVar8 = (shared_ptr*)
                                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_b8);
                                shared_ptr<ClientObj>::operator=((shared_ptr<ClientObj>*)&local_78, psVar8);
                            }
                        }
                        eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::
                        operator++(
                            (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)&local_48,
                            (int)(eastl*)local_b8);
                        local_48.end();
                        bVar5 =
                            eastl::operator!=((eastl*)local_b8, (hashtable_iterator_base*)&local_48, extraout_RDX_00);
                    } while (bVar5);
                }
                local_48.begin();
                local_88.end();
                bVar5 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_88, extraout_RDX_01);
                pHVar12 = (HighlightChannelProperties*)0;
                if (bVar5) {
                    do {
                        this_00 = (shared_ptr<ClientObj>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_48);
                        this_01 = (LoginManager*)shared_ptr<ClientObj>::operator->(this_00);
                        pHVar11 = (HighlightChannelProperties*)this_01->GetAuthWrapper();
                        if ((pHVar11 != (HighlightChannelProperties*)0) &&
                            ((pHVar12 == (HighlightChannelProperties*)0 ||
                              ((byte)pHVar11->field_10 < (byte)pHVar12->field_10)))) {
                            pHVar12 = pHVar11;
                        }
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_48);
                        bVar5 =
                            eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_88, extraout_RDX_02);
                    } while (bVar5);
                }
                local_98._0_10_ = HighlightChannelProperties::CreateHighlightData(pHVar12);
                iVar6 = param_2;
                pCVar2 = (Client*)this;
                local_a8 = dash3d::MousePickingHelper::GetPackedTypeCode(param_1, param_2,
                                                                         ((Client*)this)->m_playerLevel, 3, false, 0);
                this_02 = (Client*)&pCVar2->field_19184;
                local_a0 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)this_02);
                iVar1 = pCVar2->m_playerLevel;
                iVar6 = GetAvH(this_02, param_1 << 7 | 64, iVar6 << 7 | 64, iVar1);
                new (&local_48) shared_ptr<dash3d::Decor>(&local_68);
                new (&local_88) shared_ptr<dash3d::Decor>(&local_58);
                new (&local_c8) shared_ptr<dash3d::Decor>(&local_78);
                local_a0->SetObj(iVar1, param_1, param_2, iVar6, &local_48, local_a8, &local_88, &local_c8, &local_98);
                local_c8.~shared_ptr();
                local_88.~shared_ptr();
                local_48.~shared_ptr();
                local_78.~shared_ptr();
                local_58.~shared_ptr();
            }
            local_68.~shared_ptr();
        } else {
            pwVar7 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            pwVar7->DelObj(m_playerLevel, param_1, param_2);
        }
    }

    // 0x1000e6630, 128 bytes, placed by class name
    // Client::RunUpdateObjStackTrigger(int, int, int)
    void Client::RunUpdateObjStackTrigger(int param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        undefined* local_40;
        uint local_38;
        undefined* local_30;
        uint local_28;

        new (&local_40) rs2lib::CoordGrid(param_1, param_2, param_3);
        WorldCoordFromBuildCoord((Client*)&local_30, (CoordGrid*)this);
        local_38 = local_28;
        local_40 = local_30;
        iVar1 = local_40.GetZ();
        iVar2 = local_40.GetPos();
        ScriptRunner::SetActiveTile(param_1, iVar1, iVar2);
        ScriptRunner::ExecuteScript(45, 4294967295, 4294967295, 500000);
    }

    // 0x1000e66b0, 160 bytes, placed by class name
    // Client::LocChangePostBuildCorrect()
    void Client::LocChangePostBuildCorrect() {
        bool bVar1;
        LocChange* pLVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<console::Line, eastl::allocator> local_38[8];
        list<console::Line, eastl::allocator> local_30[8];

        eastl::list<LocChange, eastl::allocator>::remove_if<Client::LocChangePostBuildCorrect()::__21>(&field_2505008);
        eastl::list<console::Line, eastl::allocator>::begin(local_38);
        eastl::list<console::Line, eastl::allocator>::end(local_30);
        bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX);
        if (bVar1) {
            do {
                pLVar2 = (LocChange*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                *(undefined4*)&pLVar2->field_48 = 0;
                LocChangeSetOld(this, pLVar2);
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                bVar1 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_30, extraout_RDX_00);
            } while (bVar1);
        }
    }

    // 0x1000e6810, 384 bytes, placed by class name
    // Client::SetPlayerDestination(int, int)
    void Client::SetPlayerDestination(int param_1, int param_2) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        RouteHighlighter* this_01;
        long lVar5;
        CollisionMap* pCVar6;
        undefined1 local_60[16];
        ulong local_50;
        ulong local_48;
        int local_3c;
        int local_38;

        this_00 = &field_8152;
        piVar4 = (int*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)this_00);
        if ((*piVar4 != param_1) || (piVar4[1] != param_2)) {
            this_01 =
                (RouteHighlighter*)std::unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>::operator->(
                    (unique_ptr<RouteHighlighter, std::default_delete<RouteHighlighter>>*)&field_19200);
            if (this_01->field_0 != '\0') {
                local_3c = m_playerLevel;
                lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
                piVar4 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar5 + 444), 0);
                local_38 = *piVar4;
                lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
                piVar4 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar5 + 484), 0);
                iVar1 = *piVar4;
                local_50 = (ulong)field_53220;
                local_48 = (ulong)field_53224;
                pCVar6 = (CollisionMap*)eastl::vector<
                    movement::CollisionMap,
                    eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<movement::CollisionMap,
                            eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_6814744,
                    (long)m_playerLevel);
                this_01->HighlightRoute(local_3c, param_1, param_2, local_38, iVar1, (int)local_50, (int)local_48,
                                        pCVar6);
            }
            piVar4 = (int*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)this_00);
            *piVar4 = param_1;
            lVar5 = std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)this_00);
            *(int*)(lVar5 + 4) = param_2;
            ScriptRunner::SetActivePlayer(field_51988);
            WorldCoordFromBuildCoord((Client*)local_60, (int)this, m_playerLevel, param_1);
            iVar1 = local_60->GetX();
            iVar2 = local_60->GetZ();
            iVar3 = local_60->GetPos();
            ScriptRunner::SetActiveTile(iVar1, iVar2, iVar3);
            ScriptRunner::ExecuteScript(47, 4294967295, 4294967295, 500000);
        }
    }

    // 0x1000e69c0, 320 bytes, placed by class name
    // Client::RecalcCameraFrustumTileVisibility(int, int)
    void Client::RecalcCameraFrustumTileVisibility(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        long lVar3;
        array<int, 2048ul>* this_01;
        int* piVar4;
        ulong uVar5;
        undefined4 in_register_00000014;
        int iVar6;
        ulong uVar7;
        vector<int, BucketAllocatorEASTL> local_78[24];
        vector<int, BucketAllocatorEASTL> local_60[24];
        eastl local_38[8];

        eastl::destruct<highlight::NpcUID*>(local_38, (NpcUID*)"EASTL vector",
                                            (NpcUID*)CONCAT44(in_register_00000014, param_2));
        eastl::vector<int, BucketAllocatorEASTL>::vector(local_60, 9, (BucketAllocatorEASTL*)local_38);
        lVar3 = local_60->size();
        if (lVar3 != 0) {
            iVar6 = 143;
            uVar7 = 0;
            do {
                iVar2 = GetFollowCameraDistance((Client*)this, iVar6);
                this_01 = (array<int, 2048ul>*)dash3d::Pix3D::GetSinTable();
                piVar4 = (int*)std::array<int, 2048ul>::operator[](this_01, (long)iVar6);
                iVar1 = *piVar4;
                iVar2 = GetAdjustedCameraZoom((Client*)this, iVar2, param_2);
                piVar4 = (int*)eastl::vector<int, BucketAllocatorEASTL>::operator[](local_60, uVar7);
                *piVar4 = iVar2 * iVar1 >> 16;
                uVar7 = uVar7 + 1;
                uVar5 = local_60->size();
                iVar6 = iVar6 + 32;
            } while (uVar7 < uVar5);
        }
        eastl::vector<int, BucketAllocatorEASTL>::vector(local_78, (vector*)local_60);
        dash3d::world::ResetVisCalc(local_78, 500, 800, (long)(param_1 * 334) / (long)param_2 & 4294967295, 334);
        local_78->~vector_set();
        local_60->~vector_set();
    }

    // 0x1000e6b40, 144 bytes, placed by class name
    // Client::ExitFreecamMode()
    void Client::ExitFreecamMode() {
        ServerConnection* this_00;
        ServerConnection* this_01;
        undefined8 uVar1;
        ClientMessage local_60;

        this_00 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        this_01 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        uVar1 = this_01->GetOutgoingEncryption();
        local_60.MakeClientMessage(75, uVar1);
        this_00->SendClientMessage(&local_60);
        local_60.~ClientMessage();
        m_cameraMode = 0;
    }

    // 0x1000e6bd0, 32 bytes, placed by class name
    // Client::ForceRecentreFreecam()
    void Client::ForceRecentreFreecam() {
        if (m_cameraMode == 1) {
            field_7294744 = 1;
        }
    }

    // 0x1000e6bf0, 240 bytes, placed by class name
    // Client::CheckRecentreFreecam()
    void Client::CheckRecentreFreecam() {
        undefined1* this_00;
        int iVar2;
        uint uVar3;
        long lVar4;
        int* piVar5;
        Client* this_01;

        if (field_7294744 != '\0') {
            this_00 = field_52016;
            if (operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
                lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                piVar5 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar4 + 444), 0);
                iVar2 = *piVar5;
                lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                piVar5 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)(lVar4 + 484), 0);
                if ((((iVar2 < 104) && (-1 < iVar2)) && (-1 < *piVar5)) && (*piVar5 < 104)) {
                    lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                    field_7294716 = *(uint*)(lVar4 + 24);
                    lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                    iVar2 = *(int*)(lVar4 + 24);
                    this_01 = (Client*)this_00;
                    lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                    iVar2 = GetAvH(this_01, iVar2, *(int*)(lVar4 + 28), m_playerLevel);
                    uVar3 = iVar2 - field_52404;
                    if ((int)uVar3 < (int)field_7294720) {
                        field_7294720 = uVar3;
                    }
                    lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                    field_7294724 = *(float*)(lVar4 + 28);
                    field_7294744 = 0;
                }
            }
        }
    }

    // 0x1000e6ce0, 160 bytes, placed by class name
    // Client::TriggerSeqSound(shared_ptr<configdecoder::SeqType> const&, int, int, int)
    void Client::TriggerSeqSound(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        long lVar1;
        int* piVar2;
        char cVar3;
        int iVar4;

        if (field_2508752 < 50) {
            iVar4 = GetFinalAmbientVolume(this);
            if (iVar4 != 0) {
                lVar1 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)param_1);
                cVar3 = ((lVar1 + 144))->empty();
                if (cVar3 == '\0') {
                    lVar1 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)param_1);
                    iVar4 = ((lVar1 + 144))->end();
                    if (param_2 < iVar4) {
                        lVar1 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)param_1);
                        piVar2 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(lVar1 + 144), (long)param_2);
                        TriggerSeqSound(this, *piVar2, param_3, param_4);
                    }
                }
            }
        }
    }

    // 0x1000e6d80, 304 bytes, placed by class name
    // Client::TriggerSeqSound(int, int, int)
    void Client::TriggerSeqSound(int param_1, int param_2, int param_3) {
        int* piVar1;
        uint* puVar2;
        undefined4* puVar3;
        shared_ptr<sound::JagFX>* this_00;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        shared_ptr local_48;

        if (param_1 != 0) {
            piVar1 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_2508760,
                                                                    (long)field_2508752);
            *piVar1 = param_1 >> 8;
            puVar2 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_2508784,
                                                                     (long)field_2508752);
            *puVar2 = (uint)param_1 >> 4 & 7;
            puVar3 = (undefined4*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)&field_2508808, (long)field_2508752);
            *puVar3 = 0;
            new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            this_00 = (shared_ptr<sound::JagFX>*)Array<shared_ptr<sound::JagFX>, eastl::allocator>::operator[](
                (Array<shared_ptr<sound::JagFX>, eastl::allocator>*)&field_2508856, (long)field_2508752);
            shared_ptr<sound::JagFX>::operator=(this_00, &local_48);
            uVar5 = (uint)param_1 & 15;
            local_48.~shared_ptr();
            uVar4 = param_2 + 63;
            if (-1 < (int)(param_2 - 64U)) {
                uVar4 = param_2 - 64U;
            }
            uVar6 = param_3 + 63;
            if (-1 < (int)(param_3 - 64U)) {
                uVar6 = param_3 - 64U;
            }
            puVar2 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_2508832,
                                                                     (long)field_2508752);
            *puVar2 = (uVar4 & 4294967168) * 512 + (uVar6 & 4294967168) * 2 | uVar5;
            field_2508752 = field_2508752 + 1;
        }
    }

    // 0x1000e6f70, 192 bytes, placed by class name
    // Client::TriggerSeqSoundKeyFramed(shared_ptr<configdecoder::SeqType> const&, int, int, int)
    void Client::TriggerSeqSoundKeyFramed(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        long lVar1;
        int* piVar2;
        char cVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        eastl local_48[20];
        int local_34;

        if (field_2508752 < 50) {
            local_34 = param_2;
            if (GetFinalAmbientVolume(this) != 0) {
                shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)param_1);
                eastl::hashtable<int, eastl::pair<int const, int>, BucketAllocatorEASTL,
                                 eastl::use_first<eastl::pair<int const, int>>, eastl::equal_to<int>, eastl::hash<int>,
                                 eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                 false, true, true>::find((int*)local_48);
                lVar1 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)param_1);
                cVar3 = ((lVar1 + 8))->empty();
                if (cVar3 == '\0') {
                    shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)param_1);
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    if (!eastl::operator==(local_48, local_58, extraout_RDX)) {
                        lVar1 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)param_1);
                        piVar2 =
                            (int*)eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                                  false>::operator[]((hash_map<int, int, eastl::hash<int>,
                                                                               eastl::equal_to<int>, eastl::allocator,
                                                                               false>*)(lVar1 + 8),
                                                                     &local_34);
                        TriggerSeqSound(this, *piVar2, param_3, param_4);
                    }
                }
            }
        }
    }

    // 0x1000e7030, 320 bytes, placed by class name
    // Client::PlaySynth(int, int, int)
    void Client::PlaySynth(int param_1, int param_2, int param_3) {
        undefined8 uVar2;
        int* piVar3;
        shared_ptr<sound::JagFX>* this_00;
        undefined4* puVar4;
        shared_ptr local_38;

        if (field_54760 != '\0') {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 5304,
                "Synth sound:%i loops:%i delay:%i", param_1, param_2, param_3);
        }
        if (((GetFinalWaveVolume(this) != 0) && (param_2 != 0)) && ((long)field_2508752 < 50)) {
            piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_2508760,
                                                                    (long)field_2508752);
            *piVar3 = param_1;
            piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_2508784,
                                                                    (long)field_2508752);
            *piVar3 = param_2;
            piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_2508808,
                                                                    (long)field_2508752);
            *piVar3 = param_3;
            new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            this_00 = (shared_ptr<sound::JagFX>*)Array<shared_ptr<sound::JagFX>, eastl::allocator>::operator[](
                (Array<shared_ptr<sound::JagFX>, eastl::allocator>*)&field_2508856, (long)field_2508752);
            shared_ptr<sound::JagFX>::operator=(this_00, &local_38);
            local_38.~shared_ptr();
            puVar4 = (undefined4*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)&field_2508832, (long)field_2508752);
            *puVar4 = 0;
            field_2508752 = field_2508752 + 1;
        }
    }

    // 0x1000e7170, 112 bytes, placed by class name
    // Client::GetFinalWaveVolume()
    void Client::GetFinalWaveVolume() {
        int iVar1;
        GameOptions* this_00;
        DeviceOptions* this_01;
        float fVar2;

        this_00 =
            (GameOptions*)std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
        iVar1 = this_00->GetWaveVolume();
        this_01 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        fVar2 = (float)this_01->GetMasterVolume();
        jag::math::RoundFloatToInt(fVar2 * (float)((iVar1 * 127) / 100));
    }

    // 0x1000e71e0, 496 bytes, placed by class name
    // Client::PlaySong(int)
    void Client::PlaySong(int param_1) {
        undefined8 uVar3;
        shared_ptr local_68;
        Js5* local_58[4];
        int local_38[2];
        int local_30;
        bool local_29;
        int local_28[4];
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = param_1;
        if (field_54760 != '\0') {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 5323,
                "midi:%i", local_30);
        }
        if (local_30 == -1) {
            if (field_2508680 == '\0') {
                midi2::MidiManager::Stop(0, 0);
            }
        } else {
            if (midi2::MidiManager::HasPreviousSong(local_30) == '\0') {
                if (GetFinalMidiVolume(this) != 0) {
                    local_58[0] = (Js5*)GetMidi(this);
                    local_28[0] = 0;
                    local_38[0] = GetFinalMidiVolume(this);
                    local_29 = false;
                    make_shared<midi2::MidiRequest, jagex3::Js5*, int const&, int, int, bool>(
                        (jag*)&local_68, local_58, &local_30, local_28, local_38, &local_29);
                    if (field_2508680 == '\0') {
                        new (local_28) shared_ptr<dash3d::Decor>(&local_68);
                        new (local_38) eastl::allocator("EASTL vector");
                        eastl::vector<shared_ptr<midi2::MidiRequest>, eastl::allocator>::vector(local_58, local_28, 1,
                                                                                                local_38);
                        midi2::MidiManager::Play((vector*)local_58, 0, 100, 100, 0, false);
                    } else {
                        new (local_28) shared_ptr<dash3d::Decor>(&local_68);
                        new (local_38) eastl::allocator("EASTL vector");
                        eastl::vector<shared_ptr<midi2::MidiRequest>, eastl::allocator>::vector(local_58, local_28, 1,
                                                                                                local_38);
                        midi2::MidiManager::SetPreviousRequests((vector*)local_58, 0, 100, 100, 0);
                    }
                    local_58->~vector();
                    local_28->~shared_ptr();
                    local_68.~shared_ptr();
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000e73d0, 112 bytes, placed by class name
    // Client::GetFinalMidiVolume()
    void Client::GetFinalMidiVolume() {
        int iVar1;
        GameOptions* this_00;
        DeviceOptions* this_01;
        float fVar2;

        this_00 =
            (GameOptions*)std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
        iVar1 = this_00->GetMidiVolume();
        this_01 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        fVar2 = (float)this_01->GetMasterVolume();
        jag::math::RoundFloatToInt(fVar2 * (float)((iVar1 * 255) / 100));
    }

    // 0x1000e7500, 64 bytes, placed by class name
    // Client::GetMidi()
    StockPlayerOffer* Client::GetMidi() {
        if (m_pMidi == (StockPlayerOffer*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pMidi != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      9317, (char*)0);
        }
        return m_pMidi;
    }

    // 0x1000e7560, 432 bytes, placed by class name
    // Client::PlaySongs(eastl::vector<int, eastl::allocator> const&, int, int, int, int)
    void Client::PlaySongs(vector* param_1, int param_2, int param_3, int param_4, int param_5) {
        int* piVar1;
        long lVar2;
        ulong uVar3;
        char cVar4;
        ulong uVar6;
        shared_ptr local_88;
        vector<shared_ptr<midi2::MidiRequest>, eastl::allocator> local_78[32];
        Js5* local_58;
        int local_4c;
        int local_48;
        bool local_31;

        cVar4 = param_1->empty();
        if (cVar4 == '\0') {
            piVar1 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)param_1, 0);
            if ((*piVar1 == -1) && (field_2508680 == '\0')) {
                midi2::MidiManager::Stop(0, 0);
            } else {
                piVar1 =
                    (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)param_1, 0);
                if (*piVar1 != -1) {
                    piVar1 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)param_1, 0);
                    cVar4 = midi2::MidiManager::HasPreviousSong(*piVar1);
                    if (cVar4 == '\0') {
                        if (GetFinalMidiVolume(this) != 0) {
                            eastl::vector<shared_ptr<midi2::MidiRequest>, eastl::allocator>::vector(local_78);
                            lVar2 = param_1->size();
                            if (lVar2 != 0) {
                                uVar6 = 0;
                                do {
                                    local_58 = (Js5*)GetMidi(this);
                                    piVar1 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                        (vector<int, eastl::allocator>*)param_1, uVar6);
                                    local_4c = 0;
                                    local_48 = GetFinalMidiVolume(this);
                                    local_31 = false;
                                    make_shared<midi2::MidiRequest, jagex3::Js5*, int const&, int, int, bool>(
                                        (jag*)&local_88, &local_58, piVar1, &local_4c, &local_48, &local_31);
                                    eastl::vector<shared_ptr<midi2::MidiRequest>, eastl::allocator>::push_back(
                                        local_78, &local_88);
                                    local_88.~shared_ptr();
                                    uVar6 = uVar6 + 1;
                                    uVar3 = param_1->size();
                                } while (uVar6 < uVar3);
                            }
                            if (field_2508680 == '\0') {
                                midi2::MidiManager::Play((vector*)local_78, param_2, param_3, param_4, param_5, false);
                            } else {
                                midi2::MidiManager::SetPreviousRequests((vector*)local_78, param_2, param_3, param_4,
                                                                        param_5);
                            }
                            eastl::vector<shared_ptr<midi2::MidiRequest>, eastl::allocator>::~vector(local_78);
                        }
                    }
                }
            }
        }
    }

    // 0x1000e7780, 384 bytes, placed by class name
    // Client::PlayJingle(int, int)
    void Client::PlayJingle(int param_1, int param_2) {
        undefined8 uVar2;
        shared_ptr local_78;
        int local_68[8];
        allocator local_48[12];
        int local_3c;
        int local_38[4];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_3c = param_1;
        if (field_54760 != '\0') {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 5377,
                "jingle:%i ms:%i", local_3c, param_2);
        }
        if ((GetFinalMidiVolume(this) != 0) && (local_3c != -1)) {
            local_68[0] = 0;
            local_38[0] = GetFinalMidiVolume(this);
            local_48[0] = (allocator)0;
            make_shared<midi2::MidiRequest, jagex3::Js5*, int const&, int, int, bool>(
                (jag*)&local_78, (Js5**)&field_54480, &local_3c, local_68, local_38, (bool*)local_48);
            new (local_38) shared_ptr<dash3d::Decor>(&local_78);
            eastl::allocator::allocator(local_48, "EASTL vector");
            eastl::vector<shared_ptr<midi2::MidiRequest>, eastl::allocator>::vector(local_68, local_38, 1);
            midi2::MidiManager::Play((vector*)local_68, 0, 0, 0, 0, true);
            local_68->~vector();
            local_38->~shared_ptr();
            field_2508680 = 1;
            local_78.~shared_ptr();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000e7900, 176 bytes, placed by class name
    // Client::OnBrightnessChanged()
    void Client::OnBrightnessChanged() {
        DeviceOptions* this_00;
        TextureCache* this_01;
        float fVar2;
        float fVar3;

        this_00 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        fVar2 = (float)this_00->GetGamma();
        fVar3 = (float)field_144->GetGamma();
        if (fVar2 != fVar3) {
            (*(code*)field_144->field_0[6])(fVar2);
            dash3d::Pix3D::InitColourTable((double)fVar2);
            if (field_1120504->operator_cast_to_bool()) {
                this_01 = (TextureCache*)shared_ptr<dash3d::TextureCache>::operator->(
                    (shared_ptr<dash3d::TextureCache>*)field_1120504);
                this_01->SetGamma((double)fVar2);
            }
            configdecoder::ObjType::ResetSpriteCache();
            if (m_usingRSeven != false) {
                RebuildMap(this);
            }
        }
    }

    // 0x1000e79b0, 128 bytes, placed by class name
    // Client::OnMidiVolumeChanged()
    void Client::OnMidiVolumeChanged() {
        Js5* pJVar1;
        char cVar2;
        int iVar3;

        cVar2 = midi2::MidiManager::IsInitialised();
        if (cVar2 == '\0') {
            return;
        }
        iVar3 = GetFinalMidiVolume(this);
        if (iVar3 == 0) {
            midi2::MidiManager::Stop(0, 0);
        } else {
            if (((iVar3 < 1) || (cVar2 = midi2::MidiManager::CanPlayPreviousSongs(), cVar2 == '\0')) ||
                (cVar2 = midi2::MidiManager::IsPlaying(), cVar2 != '\0')) {
                midi2::MidiManager::SetVolume(iVar3);
                return;
            }
            pJVar1 = (Js5*)GetMidi(this);
            iVar3 = GetFinalMidiVolume(this);
            midi2::MidiManager::PlayPreviousSongs(pJVar1, iVar3);
        }
        field_2508680 = 0;
    }

    // 0x1000e7ab0, 1520 bytes, placed by class name
    // Client::GlDoSoundsQueue()
    void Client::GlDoSoundsQueue() {
        undefined4 uVar1;
        uint uVar2;
        uint uVar3;
        undefined8 this_00;
        Array<int, eastl::allocator>* pAVar4;
        Array<shared_ptr<sound::JagFX>, eastl::allocator>* this_01;
        Client* this_02;
        bool bVar5;
        char cVar6;
        int iVar7;
        int* piVar8;
        undefined4* puVar9;
        shared_ptr* psVar10;
        shared_ptr<sound::JagFX>* psVar11;
        JagFX* pJVar12;
        uint* puVar13;
        long lVar14;
        Wave* pWVar15;
        Decimator* pDVar16;
        WaveStream* pWVar17;
        long* plVar18;
        Js5* pJVar19;
        int iVar20;
        Array<int, eastl::allocator>* this_03;
        ulong uVar21;
        ulong uVar22;
        int iVar23;
        int iVar24;
        undefined1 local_c8[24];
        shared_ptr<sound::MixerMainThread>* local_b0;
        undefined1 local_a8[16];
        undefined1 local_98[24];
        Array<int, eastl::allocator>* local_80;
        ulong local_78;
        shared_ptr<ClientPlayer>* local_70;
        shared_ptr local_68;
        Array<shared_ptr<sound::JagFX>, eastl::allocator>* local_58;
        Array<int, eastl::allocator>* local_50;
        Array<int, eastl::allocator>* local_48;
        int local_3c;

        if (0 < field_2508752) {
            this_03 = (Array<int, eastl::allocator>*)&field_2508808;
            local_58 = (Array<shared_ptr<sound::JagFX>, eastl::allocator>*)&field_2508856;
            local_98._16_8_ = &field_2508760;
            local_48 = (Array<int, eastl::allocator>*)&field_2508832;
            local_70 = (shared_ptr<ClientPlayer>*)field_52016;
            local_c8._16_8_ = &field_54200;
            local_80 = (Array<int, eastl::allocator>*)&field_2508784;
            local_b0 = (shared_ptr<sound::MixerMainThread>*)&field_54184;
            uVar22 = 0;
            local_50 = this_03;
            do {
                uVar21 = (ulong)(int)uVar22;
                piVar8 = (int*)Array<int, eastl::allocator>::operator[](this_03, uVar21);
                *piVar8 = *piVar8 + -1;
                piVar8 = (int*)Array<int, eastl::allocator>::operator[](this_03, uVar21);
                local_78 = uVar22;
                if (*piVar8 < -10) {
                    iVar7 = ((Client*)this)->field_2508752 + -1;
                    ((Client*)this)->field_2508752 = iVar7;
                    if ((int)uVar22 < iVar7) {
                        do {
                            this_00 = local_98._16_8_;
                            uVar22 = uVar21 + 1;
                            puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)local_98._16_8_, uVar22);
                            uVar1 = *puVar9;
                            puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, uVar21);
                            this_01 = local_58;
                            *puVar9 = uVar1;
                            psVar10 = (shared_ptr*)Array<shared_ptr<sound::JagFX>, eastl::allocator>::operator[](
                                local_58, uVar22);
                            psVar11 = (shared_ptr<sound::JagFX>*)
                                Array<shared_ptr<sound::JagFX>, eastl::allocator>::operator[](this_01, uVar21);
                            this_03 = local_50;
                            shared_ptr<sound::JagFX>::operator=(psVar11, psVar10);
                            pAVar4 = local_80;
                            puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](local_80, uVar22);
                            uVar1 = *puVar9;
                            puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](pAVar4, uVar21);
                            *puVar9 = uVar1;
                            puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](this_03, uVar22);
                            uVar1 = *puVar9;
                            puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](this_03, uVar21);
                            pAVar4 = local_48;
                            *puVar9 = uVar1;
                            puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](local_48, uVar22);
                            uVar1 = *puVar9;
                            puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](pAVar4, uVar21);
                            *puVar9 = uVar1;
                            uVar21 = uVar22;
                        } while ((long)uVar22 < (long)((Client*)this)->field_2508752);
                    }
                    iVar7 = (int)local_78 + -1;
                } else {
                    psVar10 =
                        (shared_ptr*)Array<shared_ptr<sound::JagFX>, eastl::allocator>::operator[](local_58, uVar21);
                    new (&local_68) shared_ptr<dash3d::Decor>(psVar10);
                    bVar5 = operator==(&local_68, (_func_decltype_nullptr*)0);
                    if (bVar5) {
                        pJVar19 = (Js5*)((Client*)this)->m_pJagFx;
                        piVar8 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)local_98._16_8_, uVar21);
                        local_98->Load(pJVar19, *piVar8, 0);
                        pJVar12 = (JagFX*)local_98->release();
                        shared_ptr<sound::JagFX>::reset<sound::JagFX, void>((shared_ptr<sound::JagFX>*)&local_68,
                                                                            pJVar12);
                        local_98->~unique_ptr();
                        bVar5 = operator!=(&local_68, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                            pJVar12 =
                                (JagFX*)shared_ptr<sound::JagFX>::operator->((shared_ptr<sound::JagFX>*)&local_68);
                            iVar7 = pJVar12->OptimiseStart();
                            piVar8 = (int*)Array<int, eastl::allocator>::operator[](this_03, uVar21);
                            *piVar8 = *piVar8 + iVar7;
                            psVar11 = (shared_ptr<sound::JagFX>*)
                                Array<shared_ptr<sound::JagFX>, eastl::allocator>::operator[](local_58, uVar21);
                            shared_ptr<sound::JagFX>::operator=(psVar11, &local_68);
                            goto LAB_1000e7d5f;
                        }
                    } else {
                    LAB_1000e7d5f:
                        piVar8 = (int*)Array<int, eastl::allocator>::operator[](this_03, uVar21);
                        if (*piVar8 < 0) {
                            local_3c = GetFinalAmbientVolume((Client*)this);
                            piVar8 = (int*)Array<int, eastl::allocator>::operator[](local_48, uVar21);
                            pAVar4 = local_48;
                            if (*piVar8 == 0) {
                                local_3c = GetFinalWaveVolume((Client*)this);
                            } else {
                                puVar13 = (uint*)Array<int, eastl::allocator>::operator[](local_48, uVar21);
                                uVar2 = *puVar13;
                                puVar13 = (uint*)Array<int, eastl::allocator>::operator[](pAVar4, uVar21);
                                uVar3 = *puVar13;
                                lVar14 = shared_ptr<ClientPlayer>::operator->(local_70);
                                iVar23 = (uVar3 >> 9 & 32640 | 64) - *(int*)(lVar14 + 24);
                                iVar7 = -iVar23;
                                if (iVar7 < 0) {
                                    iVar7 = iVar23;
                                }
                                puVar13 = (uint*)Array<int, eastl::allocator>::operator[](local_48, uVar21);
                                uVar3 = *puVar13;
                                lVar14 = shared_ptr<ClientPlayer>::operator->(local_70);
                                iVar20 = (uVar2 & 255) * 128;
                                iVar24 = (uVar3 >> 1 & 32640 | 64) - *(int*)(lVar14 + 28);
                                iVar23 = -iVar24;
                                if (iVar23 < 0) {
                                    iVar23 = iVar24;
                                }
                                iVar7 = iVar7 + iVar23 + -128;
                                if (iVar20 < iVar7) {
                                    puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](local_50, uVar21);
                                    *puVar9 = 4294967196;
                                } else {
                                    iVar23 = 0;
                                    if (-1 < iVar7) {
                                        iVar23 = iVar7;
                                    }
                                    local_3c = ((iVar20 - iVar23) * local_3c) / iVar20;
                                }
                                this_03 = local_50;
                                if (iVar20 < iVar7)
                                    goto LAB_1000e7f90;
                            }
                            if (0 < local_3c) {
                                shared_ptr<sound::JagFX>::operator->((shared_ptr<sound::JagFX>*)&local_68);
                                local_a8->ToWave();
                                pWVar15 = (Wave*)local_a8->release();
                                shared_ptr<sound::Wave>::shared_ptr<sound::Wave, void>(
                                    (shared_ptr<sound::Wave>*)local_98, pWVar15);
                                local_a8->~unique_ptr();
                                pWVar15 =
                                    (Wave*)shared_ptr<sound::Wave>::operator->((shared_ptr<sound::Wave>*)local_98);
                                pDVar16 = (Decimator*)shared_ptr<sound::Decimator>::operator*(
                                    (shared_ptr<sound::Decimator>*)local_c8._16_8_);
                                pWVar15->Decimate(pDVar16);
                                local_c8->NewRatePercent(local_98, 100, local_3c);
                                pWVar17 = (WaveStream*)local_c8->release();
                                shared_ptr<sound::WaveStream>::shared_ptr<sound::WaveStream, void>(
                                    (shared_ptr<sound::WaveStream>*)local_a8, pWVar17);
                                local_c8->~unique_ptr();
                                pWVar17 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                                    (shared_ptr<sound::WaveStream>*)local_a8);
                                piVar8 = (int*)Array<int, eastl::allocator>::operator[](local_80, uVar21);
                                pWVar17->SetLoopCount(*piVar8 + -1);
                                plVar18 = (long*)shared_ptr<sound::MixerMainThread>::operator->(local_b0);
                                new (local_c8) shared_ptr<dash3d::Decor>(local_a8);
                                (**(code**)(*plVar18 + 8))(plVar18, (shared_ptr<dash3d::Decor>*)local_c8);
                                local_c8->~shared_ptr();
                                local_a8->~shared_ptr();
                                local_98->~shared_ptr();
                            }
                            puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](this_03, uVar21);
                            *puVar9 = 4294967196;
                        }
                    }
                LAB_1000e7f90:
                    local_68.~shared_ptr();
                    iVar7 = (int)local_78;
                }
                uVar22 = (ulong)(iVar7 + 1U);
            } while ((int)(iVar7 + 1U) < ((Client*)this)->field_2508752);
        }
        if ((((Client*)this)->field_2508680 != '\0') && (cVar6 = midi2::MidiManager::IsPlaying(), cVar6 == '\0')) {
            iVar7 = GetFinalMidiVolume((Client*)this);
            if ((iVar7 != 0) &&
                (cVar6 = midi2::MidiManager::CanPlayPreviousSongs(), this_02 = (Client*)this, cVar6 != '\0')) {
                pJVar19 = (Js5*)GetMidi((Client*)this);
                iVar7 = GetFinalMidiVolume(this_02);
                midi2::MidiManager::PlayPreviousSongs(pJVar19, iVar7);
            }
            ((Client*)this)->field_2508680 = 0;
        }
    }

    // 0x1000e8180, 128 bytes, placed by class name
    // Client::CopyToClipboard()
    void Client::CopyToClipboard() {
        int iVar1;
        ChatHistory local_38[24];
        Clipboard local_20[8];

        local_38->GetCopyBuffer();
        Clipboard::Clipboard(local_20);
        iVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        Clipboard::SetText((char*)local_20, iVar1);
        local_20->~Clipboard();
        local_38->~basic_string();
    }

    // 0x1000e8200, 192 bytes, placed by class name
    // Client::Vibrate(hal::Haptics::Preset)
    void Client::Vibrate(__7 param_2) {
        OSClient* this_00;
        __7 _Var1;
        int iVar2;
        DeviceOptions* this_01;
        __7 local_d0[2];
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2.field_0 - 4 < 3) {
            this_01 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            iVar2 = this_01->GetHapticFeedbackStrength();
            _Var1.field_0 = iVar2 + 4;
            if (iVar2 + 4 <= (int)param_2.field_0) {
                _Var1.field_0 = param_2.field_0;
            }
            param_2.field_0 = _Var1.field_0;
        }
        this_00 = field_54752;
        local_d0[0].field_0 = param_2.field_0;
        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            Client::Vibrate(hal::Haptics::Preset)::__7, void>(
            (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, local_d0);
        this_00->QueueMainThreadEvent(&local_c8);
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000e82f0, 96 bytes, placed by class name
    // Client::LostCon()
    void Client::LostCon() {
        long lVar1;

        if ((field_54156 < 1) &&
            (lVar1 = CurrentTimeMillis(), lVar1 <= javapal::GameShell::m_lastGameLoopTimeMillis + 60000)) {
            (&field_1104120)->MarkLostCon();
            SetMainState(this, 40);
            return;
        }
        Logout(this);
    }

    // 0x1000f0e30, 240 bytes, placed by class name
    // Client::GlUpdateMouseOverTile()
    void Client::GlUpdateMouseOverTile() {
        int iVar1;
        int iVar2;
        int iVar3;
        CoordMapSquare local_38;

        WorldCoordFromBuildCoord((Client*)&local_38, (int)this, dash3d::world::m_mouseoverGroundY,
                                 dash3d::world::m_mouseoverGroundX);
        iVar1 = dash3d::world::m_mouseoverGroundY;
        if (dash3d::world::m_mouseoverGroundY != -1) {
            iVar2 = local_38.GetZ();
            if (((iVar2 == field_19108) && (iVar2 = local_38.GetPos(), iVar2 == field_19112)) &&
                (iVar1 == field_19116)) {
                return;
            }
            ScriptRunner::SetActivePlayer(field_51988);
            iVar2 = local_38.GetZ();
            iVar3 = local_38.GetPos();
            ScriptRunner::SetActiveTile(iVar1, iVar2, iVar3);
            ScriptRunner::ExecuteScript(48, 4294967295, 4294967295, 500000);
            iVar2 = local_38.GetZ();
            field_19108 = iVar2;
            iVar2 = local_38.GetPos();
            field_19112 = iVar2;
            field_19116 = iVar1;
        }
    }

    // 0x1000f1090, 80 bytes, placed by class name
    // Client::GlCheckFriendChatState()
    void Client::GlCheckFriendChatState() {
        PlayerRegistry<social::FriendChatUser>* this_00;
        _func_decltype_nullptr* in_RSI;

        if (field_2508660 != '\0') {
            if (std::operator!=((unique_ptr*)&field_52544, in_RSI)) {
                this_00 =
                    (PlayerRegistry<social::FriendChatUser>*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)&field_52544);
                this_00->Sort();
            }
            ResetPlayerFriendChatIndicators(this);
            field_2508660 = 0;
        }
    }

    // 0x1000f10e0, 48 bytes, placed by class name
    // Client::GlCheckClanState()
    void Client::GlCheckClanState() {
        if (field_7164882 != '\0') {
            ResetPlayerClanIndicators(this);
            field_7164882 = 0;
        }
    }

    // 0x1000f1110, 128 bytes, placed by class name
    // Client::GlCheckMinimap()
    void Client::GlCheckMinimap() {
        undefined1* this_00;
        int iVar1;
        Minimap* pMVar2;
        world* pwVar3;
        int iVar4;

        iVar1 = m_playerLevel;
        this_00 = &field_8152;
        pMVar2 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)this_00);
        iVar4 = pMVar2->GetLevel();
        if (iVar1 != iVar4) {
            pMVar2 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)this_00);
            pMVar2->SetLevel(m_playerLevel);
            pMVar2 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)this_00);
            iVar1 = m_playerLevel;
            pwVar3 = (world*)(&field_19184)->get();
            pMVar2->BuildBuffer(iVar1, pwVar3);
        }
    }

    // 0x1000f1190, 32 bytes, placed by class name
    // Client::LocChangeDoQueue()
    void Client::LocChangeDoQueue() {
        eastl::list<LocChange, eastl::allocator>::remove_if<Client::LocChangeDoQueue()::__22>(
            (list<LocChange, eastl::allocator>*)&field_2505008, this);
    }

    // 0x1000f11b0, 208 bytes, placed by class name
    // Client::GlMoveNpcs()
    void Client::GlMoveNpcs() {
        int iVar1;
        int iVar2;
        int* piVar3;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ClientEntity* pCVar4;
        ulong uVar5;

        if (0 < (int)m_nPCCount) {
            uVar5 = 0;
            do {
                piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1103856,
                                                                        uVar5);
                iVar1 = *piVar3;
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                        (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)iVar1);
                pCVar4 = (ClientEntity*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                if (pCVar4 != (ClientEntity*)0) {
                    iVar2 = pCVar4->field_440;
                    GlMoveEntity(this, pCVar4);
                    if (pCVar4->field_440 != iVar2) {
                        ScriptRunner::SetActiveNPC(iVar1);
                        ScriptRunner::ExecuteScript(50, 4294967295, 4294967295, 500000);
                    }
                }
                uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)(int)m_nPCCount);
        }
    }

    // 0x1000f1280, 336 bytes, placed by class name
    // Client::GlTimeoutChat()
    void Client::GlTimeoutChat() {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar2;
        int* piVar3;
        shared_ptr* this_01;
        int iVar4;
        long lVar5;
        ulong uVar6;

        if (0 < ReceivePlayerPositions::m_lastNum) {
            lVar5 = 0;
            do {
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                        (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216,
                        (long)(int)(&ReceivePlayerPositions::m_lastID)[lVar5]);
                lVar2 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                if (((lVar2 != 0) && (0 < *(int*)(lVar2 + 148))) &&
                    (iVar4 = *(int*)(lVar2 + 148) + -1, *(int*)(lVar2 + 148) = iVar4, iVar4 == 0)) {
                    ((lVar2 + 112))->assign("");
                }
                lVar5 = lVar5 + 1;
            } while (lVar5 < ReceivePlayerPositions::m_lastNum);
        }
        if (0 < (int)m_nPCCount) {
            uVar6 = 0;
            do {
                piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1103856,
                                                                        uVar6);
                this_01 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                    (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)*piVar3);
                if (operator!=(this_01, (_func_decltype_nullptr*)0)) {
                    lVar5 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                    if (0 < *(int*)(lVar5 + 148)) {
                        lVar5 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                        *(int*)(lVar5 + 148) = *(int*)(lVar5 + 148) + -1;
                        lVar5 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                        if (*(int*)(lVar5 + 148) == 0) {
                            lVar5 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                            ((lVar5 + 112))->assign("");
                        }
                    }
                }
                uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)m_nPCCount);
        }
    }

    // 0x1000f13e0, 96 bytes, placed by class name
    // Client::NeedBuildMinimenu()
    ulong Client::NeedBuildMinimenu() {
        char cVar1;
        ulong uVar2;
        undefined4 local_20[2];

        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_20, -1);
        cVar1 = CoordType<UICoordSpecializer>::operator!=((CoordType<UICoordSpecializer>*)&field_8592, local_20[0]);
        if ((cVar1 == '\0') || (field_52344 == (Minimenu*)0)) {
            uVar2 = 0;
        } else {
            uVar2 = field_52344->IsOpen();
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x1000f1440, 128 bytes, placed by class name
    // Client::LoopInterface(int, int, int, int, int, int, int)
    void Client::LoopInterface(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                               int param_7) {
        Array* pAVar2;

        if (((ulong)(uint)param_1)->OpenInterface(param_1) != '\0') {
            pAVar2 = (Array*)Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>*)&rs2lib::IfType::m_list,
                (long)param_1);
            LoopLayer(this, pAVar2, -1, param_2, param_3, param_4, param_5, param_6, param_7);
        }
    }

    // 0x1000f14c0, 16 bytes, placed by class name
    // Client::PostLoopInterface()
    void Client::PostLoopInterface() {
        field_53256 = 0;
    }

    // 0x1000f1520, 80 bytes, placed by class name
    // Client::GetInterfaceLayer(shared_ptr<rs2lib::IfType>)
    void Client::GetInterfaceLayer(shared_ptr param_1) {
        long lVar1;
        shared_ptr<rs2lib::IfType>* in_RSI;

        lVar1 = shared_ptr<rs2lib::IfType>::operator->(in_RSI);
        if (*(char*)(lVar1 + 24) == '\0') {
            lVar1 = shared_ptr<rs2lib::IfType>::operator->(in_RSI);
            rs2lib::IfType::Get(*(int*)(lVar1 + 88));
        } else {
            lVar1 = shared_ptr<rs2lib::IfType>::operator->(in_RSI);
            (m_entityOverlays, *(int*)(lVar1 + 88))->GetLayer();
        }
    }

    // 0x1000f8100, 144 bytes, placed by class name
    // Client::GlExactMove1(ClientEntity&)
    void Client::GlExactMove1(ClientEntity* param_1) {
        int iVar1;
        int iVar2;
        int* piVar3;
        int iVar4;
        int local_18;
        int local_14;

        _local_18 = CONCAT44(*(int*)&param_1->field_408 - field_8488, 1);
        piVar3 = std::max<int>(&local_18, &local_14);
        iVar1 = *piVar3;
        iVar4 = *(int*)&param_1->field_40 * 64;
        iVar2 = *(int*)((long)&param_1->field_24 + 4);
        *(int*)&param_1->field_24 = ((*(int*)&param_1->field_392 * 128 + iVar4) - *(int*)&param_1->field_24) / iVar1 +
                                    *(int*)&param_1->field_24;
        *(int*)((long)&param_1->field_24 + 4) = ((*(int*)&param_1->field_400 * 128 + iVar4) - iVar2) / iVar1 + iVar2;
        *(undefined4*)&param_1->field_536 = 0;
        *(undefined4*)((long)&param_1->field_424 + 4) = *(undefined4*)&param_1->field_416;
    }

    // 0x1000f8190, 352 bytes, placed by class name
    // Client::GlExactMove2(ClientEntity&)
    void Client::GlExactMove2(ClientEntity* param_1) {
        int iVar1;
        undefined4 uVar2;
        bool bVar3;
        SeqType* this_00;
        long lVar5;
        int* piVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        bool bVar10;
        shared_ptr<configdecoder::SeqType> local_30[16];

        bVar10 = true;
        if ((*(int*)((long)&param_1->field_408 + 4) != field_8488) && (param_1->field_372 != -1)) {
            bVar10 = *(int*)&param_1->field_384 != 0;
        }
        if (!bVar10) {
            local_30->List(param_1->field_372);
            bVar3 = local_30->operator_cast_to_bool();
            bVar10 = true;
            if (bVar3) {
                this_00 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(local_30);
                if (this_00->IsKeyFramed() == '\0') {
                    iVar1 = *(int*)((long)&param_1->field_376 + 4);
                    lVar5 = shared_ptr<configdecoder::SeqType>::operator->(local_30);
                    piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)(lVar5 + 120), (long)*(int*)&param_1->field_376);
                    bVar10 = *piVar6 <= iVar1;
                }
            }
            local_30->~shared_ptr();
        }
        if (bVar10) {
            iVar8 = *(int*)((long)&param_1->field_408 + 4) - *(int*)&param_1->field_408;
            iVar9 = field_8488 - *(int*)&param_1->field_408;
            iVar7 = *(int*)&param_1->field_40 * 64;
            iVar1 = *(int*)((long)&param_1->field_400 + 4);
            *(int*)&param_1->field_24 = ((*(int*)((long)&param_1->field_392 + 4) * 128 + iVar7) * iVar9 +
                                         (*(int*)&param_1->field_392 * 128 + iVar7) * (iVar8 - iVar9)) /
                                        iVar8;
            *(int*)((long)&param_1->field_24 + 4) =
                ((iVar1 * 128 + iVar7) * iVar9 + (iVar8 - iVar9) * (*(int*)&param_1->field_400 * 128 + iVar7)) / iVar8;
        }
        *(undefined4*)&param_1->field_536 = 0;
        uVar2 = *(undefined4*)&param_1->field_416;
        *(undefined4*)((long)&param_1->field_424 + 4) = uVar2;
        *(undefined4*)&param_1->field_32 = uVar2;
    }

    // 0x1000f82f0, 1184 bytes, placed by class name
    // Client::GlRouteMove(ClientEntity&)
    void Client::GlRouteMove(ClientEntity* param_1) {
        char cVar1;
        int iVar2;
        uint uVar4;
        long lVar5;
        int* piVar6;
        char* pcVar7;
        uint uVar8;
        int iVar9;
        int iVar10;
        ulong uVar11;
        int iVar12;
        shared_ptr<configdecoder::SeqType> local_50[20];
        int local_3c;
        int local_38;
        int local_34;

        *(undefined4*)&param_1->field_356 = param_1->field_48;
        if (param_1->field_440 == 0) {
            *(undefined4*)&param_1->field_536 = 0;
            return;
        }
        if ((param_1->field_372 != -1) && (*(int*)&param_1->field_384 == 0)) {
            local_50->List(param_1->field_372);
            if (((0 < *(int*)((long)&param_1->field_536 + 4)) &&
                 (lVar5 = shared_ptr<configdecoder::SeqType>::operator->(local_50), *(int*)(lVar5 + 248) == 0)) ||
                ((*(int*)((long)&param_1->field_536 + 4) < 1 &&
                  (lVar5 = shared_ptr<configdecoder::SeqType>::operator->(local_50), *(int*)(lVar5 + 252) == 0)))) {
                *(int*)&param_1->field_536 = *(int*)&param_1->field_536 + 1;
                local_50->~shared_ptr();
                return;
            }
            local_50->~shared_ptr();
        }
        iVar9 = *(int*)&param_1->field_24;
        local_34 = *(int*)((long)&param_1->field_24 + 4);
        uVar11 = (long)(int)param_1->field_440 - 1;
        piVar6 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&param_1->field_444, uVar11);
        iVar12 = *(int*)&param_1->field_40 * 64;
        iVar10 = *piVar6 * 128 + iVar12;
        piVar6 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&param_1->field_484, uVar11);
        iVar12 = *piVar6 * 128 + iVar12;
        if (iVar10 - iVar9 == 0 || iVar10 < iVar9) {
            if (iVar10 < iVar9) {
                if (local_34 < iVar12) {
                    *(undefined4*)((long)&param_1->field_424 + 4) = 768;
                } else if (iVar12 < local_34) {
                    *(undefined4*)((long)&param_1->field_424 + 4) = 256;
                } else {
                    *(undefined4*)((long)&param_1->field_424 + 4) = 512;
                }
            } else if (local_34 < iVar12) {
                *(undefined4*)((long)&param_1->field_424 + 4) = 1024;
            } else if (iVar12 < local_34) {
                *(undefined4*)((long)&param_1->field_424 + 4) = 0;
            }
        } else if (local_34 < iVar12) {
            *(undefined4*)((long)&param_1->field_424 + 4) = 1280;
        } else if (iVar12 < local_34) {
            *(undefined4*)((long)&param_1->field_424 + 4) = 1792;
        } else {
            *(undefined4*)((long)&param_1->field_424 + 4) = 1536;
        }
        local_3c = iVar10;
        local_38 = iVar9;
        pcVar7 =
            (char*)std::array<signed char, 10ul>::operator[]((array<signed char, 10ul>*)&param_1->field_524, uVar11);
        iVar2 = local_3c;
        if ((512 < (iVar10 - iVar9) + 256U) || (512 < (iVar12 - local_34) + 256U)) {
            *(int*)&param_1->field_24 = local_3c;
            *(int*)((long)&param_1->field_24 + 4) = iVar12;
            param_1->field_440 = (int)uVar11;
            goto LAB_1000f84d1;
        }
        uVar8 = *(int*)((long)&param_1->field_424 + 4) - *(int*)&param_1->field_32 & 2047;
        iVar9 = (uint)(uVar8 < 1025) * 2048;
        if ((iVar9 + uVar8) - 1792 < 513) {
            iVar9 = param_1->field_60;
        } else {
            iVar9 = uVar8 + iVar9;
            if (iVar9 - 2304U < 512) {
                iVar9 = param_1->field_72;
            } else if (iVar9 - 1280U < 513) {
                iVar9 = param_1->field_68;
            } else {
                iVar9 = param_1->field_64;
            }
        }
        if (iVar9 == -1) {
            iVar9 = param_1->field_60;
        }
        cVar1 = *pcVar7;
        *(int*)&param_1->field_356 = iVar9;
        if (((*(code*)param_1->field_0[7])(param_1) == '\0') ||
            (lVar5 = shared_ptr<configdecoder::NpcType>::operator->(
                 (shared_ptr<configdecoder::NpcType>*)&param_1[1].field_64),
             *(char*)(lVar5 + 521) != '\0')) {
            iVar9 = param_1->field_440;
            uVar8 = 6;
            if (iVar9 < 3) {
                uVar8 = (uint)(*(int*)((long)&param_1->field_432 + 4) == 0 ||
                               (param_1->field_328 != -1 ||
                                *(int*)&param_1->field_32 == *(int*)((long)&param_1->field_424 + 4))) *
                            2 +
                        2;
            }
            uVar4 = 8;
            if (iVar9 < 4) {
                uVar4 = uVar8;
            }
            iVar10 = *(int*)&param_1->field_536;
            if (0 < iVar10)
                goto joined_r0x0001000f8604;
        } else {
            iVar9 = param_1->field_440;
            iVar10 = *(int*)&param_1->field_536;
            uVar4 = 8;
            if (iVar9 < 3) {
                uVar4 = (uint)(1 < iVar9) * 2 + 4;
            }
            if (0 < iVar10) {
            joined_r0x0001000f8604:
                if (1 < iVar9) {
                    *(int*)&param_1->field_536 = iVar10 + -1;
                    uVar4 = 8;
                }
            }
        }
        if (cVar1 == '\0') {
            uVar4 = uVar4 >> 1;
        } else if (cVar1 == '\x02') {
            uVar4 = uVar4 * 2;
        }
        if (uVar4 < 8) {
            if (uVar4 < 3) {
                iVar9 = *(int*)&param_1->field_356;
                if ((((iVar9 == param_1->field_60) && (iVar10 = param_1->field_92, iVar10 != -1)) ||
                     ((iVar9 == param_1->field_64 && (iVar10 = param_1->field_96, iVar10 != -1)))) ||
                    ((iVar9 == param_1->field_68 && (iVar10 = param_1->field_100, iVar10 != -1))))
                    goto LAB_1000f86f8;
                if (iVar9 == param_1->field_72) {
                    iVar10 = param_1->field_104;
                    goto LAB_1000f86f3;
                }
            }
        } else {
            iVar9 = *(int*)&param_1->field_356;
            if ((((iVar9 == param_1->field_60) && (iVar10 = param_1->field_76, iVar10 != -1)) ||
                 ((iVar9 == param_1->field_64 && (iVar10 = param_1->field_80, iVar10 != -1)))) ||
                ((iVar9 == param_1->field_68 && (iVar10 = param_1->field_84, iVar10 != -1)))) {
            LAB_1000f86f8:
                *(int*)&param_1->field_356 = iVar10;
            } else if (iVar9 == param_1->field_72) {
                iVar10 = param_1->field_88;
            LAB_1000f86f3:
                if (iVar10 != -1)
                    goto LAB_1000f86f8;
            }
        }
        if ((iVar2 != local_38) || (iVar12 != local_34)) {
            if (local_38 < iVar2) {
                iVar9 = *(int*)&param_1->field_24 + uVar4;
                if (iVar2 < iVar9) {
                    iVar9 = iVar2;
                }
            LAB_1000f872a:
                *(int*)&param_1->field_24 = iVar9;
            } else if (iVar2 < local_38) {
                iVar9 = *(int*)&param_1->field_24 - uVar4;
                if (iVar9 < iVar2) {
                    iVar9 = iVar2;
                }
                goto LAB_1000f872a;
            }
            if (local_34 < iVar12) {
                iVar9 = uVar4 + *(int*)((long)&param_1->field_24 + 4);
                if (iVar12 < iVar9) {
                    iVar9 = iVar12;
                }
            } else {
                if (local_34 <= iVar12)
                    goto LAB_1000f8750;
                iVar9 = *(int*)((long)&param_1->field_24 + 4) - uVar4;
                if (iVar9 < iVar12) {
                    iVar9 = iVar12;
                }
            }
            *(int*)((long)&param_1->field_24 + 4) = iVar9;
        }
    LAB_1000f8750:
        if (*(int*)&param_1->field_24 != iVar2) {
            return;
        }
        if (*(int*)((long)&param_1->field_24 + 4) != iVar12) {
            return;
        }
        param_1->field_440 = param_1->field_440 + -1;
    LAB_1000f84d1:
        iVar9 = *(int*)((long)&param_1->field_536 + 4);
        if (0 < iVar9) {
            *(int*)((long)&param_1->field_536 + 4) = iVar9 + -1;
        }
    }

    // 0x1000f87d0, 688 bytes, placed by class name
    // Client::GlEntityFace(ClientEntity&)
    void Client::GlEntityFace(ClientEntity* param_1) {
        bool bVar1;
        undefined4 uVar3;
        uint uVar4;
        shared_ptr* psVar5;
        long lVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        undefined1 auVar11[16];
        shared_ptr local_50;
        shared_ptr local_40;

        if (param_1->field_328 != -1) {
            new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            iVar10 = param_1->field_328;
            if ((long)iVar10 < 65536) {
                auVar11 = std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                    (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)iVar10);
                static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_50, auVar11._0_8_, auVar11._8_8_);
                shared_ptr<ClientEntity>::operator=((shared_ptr<ClientEntity>*)&local_40, &local_50);
                local_50.~shared_ptr();
            } else {
                psVar5 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (ulong)(iVar10 - 65536));
                shared_ptr<ClientEntity>::operator=((shared_ptr<ClientEntity>*)&local_40, psVar5);
            }
            bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
            if (bVar1) {
                iVar10 = *(int*)&param_1->field_24;
                lVar6 = shared_ptr<ClientEntity>::operator->((shared_ptr<ClientEntity>*)&local_40);
                iVar10 = iVar10 - *(int*)(lVar6 + 24);
                iVar9 = *(int*)((long)&param_1->field_24 + 4);
                lVar6 = shared_ptr<ClientEntity>::operator->((shared_ptr<ClientEntity>*)&local_40);
                iVar9 = iVar9 - *(int*)(lVar6 + 28);
                if (iVar10 != 0 || iVar9 != 0) {
                    uVar3 = game::Conversion::Atan2InOldJagexAngles(iVar10, iVar9);
                    *(undefined4*)((long)&param_1->field_424 + 4) = uVar3;
                }
            } else if (param_1->field_332 != '\0') {
                param_1->field_328 = 4294967295;
                param_1->field_332 = 0;
            }
            local_40.~shared_ptr();
        }
        if ((param_1->field_440 == 0) || (0 < *(int*)&param_1->field_536)) {
            if ((&param_1->field_340)->IsSet() == '\0') {
                iVar10 = param_1->field_336;
            } else {
                BuildCoordFromWorldCoord((Client*)&local_40, (CoordGrid*)this);
                iVar10 = local_40.GetZ();
                iVar9 = local_40.GetPos();
                iVar7 = *(int*)&param_1->field_24 + iVar10 * -128 + -64;
                iVar9 = *(int*)((long)&param_1->field_24 + 4) + iVar9 * -128 + -64;
                iVar10 = -1;
                if (iVar7 != 0 || iVar9 != 0) {
                    iVar10 = game::Conversion::Atan2InOldJagexAngles(iVar7, iVar9);
                }
            }
            if ((iVar10 != -1) && (*(int*)((long)&param_1->field_424 + 4) = iVar10, param_1->field_352 != '\0')) {
                *(int*)&param_1->field_32 = iVar10;
            }
            param_1->ClearPendingFacing();
        }
        iVar10 = *(int*)((long)&param_1->field_424 + 4);
        uVar4 = iVar10 - *(int*)&param_1->field_32 & 2047;
        if (uVar4 == 0) {
            if (param_1->field_332 != '\0') {
                param_1->field_328 = 4294967295;
                param_1->field_332 = 0;
            }
            *(undefined4*)&param_1->field_432 = 0;
        } else {
            iVar9 = *(int*)&param_1->field_432;
            iVar7 = *(int*)((long)&param_1->field_432 + 4);
            *(int*)&param_1->field_432 = iVar9 + 1;
            iVar8 = -iVar7;
            if (uVar4 < 1025) {
                iVar8 = iVar7;
            }
            bVar1 = 2048 - iVar7 < (int)uVar4;
            iVar8 = iVar8 + *(int*)&param_1->field_32;
            if (bVar1 || (int)uVar4 < iVar7) {
                iVar8 = iVar10;
            }
            *(int*)&param_1->field_32 = iVar8;
            if (((0 < iVar7) && (*(int*)&param_1->field_356 == param_1->field_48)) &&
                (24 < iVar9 || !bVar1 && (int)uVar4 >= iVar7)) {
                if (uVar4 < 1025) {
                    iVar10 = param_1->field_56;
                } else {
                    iVar10 = param_1->field_52;
                }
                if (iVar10 == -1) {
                    iVar10 = param_1->field_60;
                }
                *(int*)&param_1->field_356 = iVar10;
            }
            *(uint*)&param_1->field_32 = *(uint*)&param_1->field_32 & 2047;
        }
    }

    // 0x1000f8a80, 2224 bytes, placed by class name
    // Client::GlEntityAnim(ClientEntity&)
    void Client::GlEntityAnim(ClientEntity* param_1) {
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        SeqType* pSVar5;
        long lVar6;
        Layout* this_00;
        int* piVar7;
        int* piVar8;
        int* piVar9;
        shared_ptr local_40;

        param_1->field_36 = 0;
        if (*(int*)&param_1->field_356 != -1) {
            local_40.List(*(int*)&param_1->field_356);
            bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
            if (bVar1) {
                pSVar5 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                    (shared_ptr<configdecoder::SeqType>*)&local_40);
                cVar2 = pSVar5->IsKeyFramed();
                if (cVar2 == '\0') {
                    lVar6 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
                    cVar2 = ((lVar6 + 72))->empty();
                    if (cVar2 != '\0')
                        goto LAB_1000f8afb;
                    *(int*)&param_1->field_364 = *(int*)&param_1->field_364 + 1;
                    iVar3 = *(int*)((long)&param_1->field_356 + 4);
                    lVar6 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
                    piVar7 = (int*)((long)&param_1->field_356 + 4);
                    iVar4 = ((lVar6 + 72))->end();
                    if (iVar3 < iVar4) {
                        iVar3 = *(int*)&param_1->field_364;
                        lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)&local_40);
                        piVar8 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(lVar6 + 120), (long)*piVar7);
                        if (*piVar8 < iVar3) {
                            *(undefined4*)&param_1->field_364 = 1;
                            iVar3 = *(int*)((long)&param_1->field_356 + 4) + 1;
                            *(int*)((long)&param_1->field_356 + 4) = iVar3;
                            TriggerSeqSound(this, &local_40, iVar3, *(int*)&param_1->field_24,
                                            *(int*)((long)&param_1->field_24 + 4));
                        }
                    }
                    iVar3 = *piVar7;
                    lVar6 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
                    iVar4 = ((lVar6 + 72))->end();
                    if (iVar4 <= iVar3) {
                        lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)&local_40);
                        if (*(int*)(lVar6 + 168) < 1) {
                            *(undefined4*)&param_1->field_364 = 0;
                        LAB_1000f92c2:
                            *piVar7 = 0;
                        } else {
                            lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                                (shared_ptr<configdecoder::SeqType>*)&local_40);
                            *piVar7 = *piVar7 - *(int*)(lVar6 + 168);
                            lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                                (shared_ptr<configdecoder::SeqType>*)&local_40);
                            if (*(char*)(lVar6 + 244) != '\0') {
                                piVar8 = (int*)((long)&param_1->field_364 + 4);
                                *piVar8 = *piVar8 + 1;
                            }
                            iVar3 = *piVar7;
                            if (iVar3 < 0) {
                            LAB_1000f8fea:
                                *(undefined8*)((long)&param_1->field_356 + 4) = 0;
                                piVar7 = (int*)((long)&param_1->field_364 + 4);
                                goto LAB_1000f92c2;
                            }
                            lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                                (shared_ptr<configdecoder::SeqType>*)&local_40);
                            iVar4 = ((lVar6 + 72))->end();
                            if ((iVar4 <= iVar3) || ((lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                                                          (shared_ptr<configdecoder::SeqType>*)&local_40),
                                                      *(char*)(lVar6 + 244) != '\0' &&
                                                          (iVar3 = *(int*)((long)&param_1->field_364 + 4),
                                                           lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                                                               (shared_ptr<configdecoder::SeqType>*)&local_40),
                                                           *(int*)(lVar6 + 240) <= iVar3))))
                                goto LAB_1000f8fea;
                        }
                        TriggerSeqSound(this, &local_40, *(int*)((long)&param_1->field_356 + 4),
                                        *(int*)&param_1->field_24, *(int*)((long)&param_1->field_24 + 4));
                    }
                } else {
                LAB_1000f8afb:
                    pSVar5 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                        (shared_ptr<configdecoder::SeqType>*)&local_40);
                    cVar2 = pSVar5->IsKeyFramed();
                    if (cVar2 == '\0')
                        goto LAB_1000f8b58;
                    piVar7 = (int*)((long)&param_1->field_356 + 4);
                    *piVar7 = *piVar7 + 1;
                    pSVar5 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                        (shared_ptr<configdecoder::SeqType>*)&local_40);
                    iVar3 = pSVar5->GetDuration();
                    piVar7 = (int*)((long)&param_1->field_356 + 4);
                    if (*piVar7 < iVar3) {
                        TriggerSeqSoundKeyFramed(this, &local_40, *piVar7, *(int*)&param_1->field_24,
                                                 *(int*)((long)&param_1->field_24 + 4));
                        goto LAB_1000f8b64;
                    }
                    lVar6 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
                    if (*(int*)(lVar6 + 168) < 1) {
                        *(undefined4*)&param_1->field_364 = 0;
                    LAB_1000f928c:
                        *piVar7 = 0;
                    } else {
                        lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)&local_40);
                        *piVar7 = *piVar7 - *(int*)(lVar6 + 168);
                        lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)&local_40);
                        if (*(char*)(lVar6 + 244) != '\0') {
                            piVar8 = (int*)((long)&param_1->field_364 + 4);
                            *piVar8 = *piVar8 + 1;
                        }
                        if (((*piVar7 < 0) || (iVar3 <= *piVar7)) ||
                            ((lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                                  (shared_ptr<configdecoder::SeqType>*)&local_40),
                              *(char*)(lVar6 + 244) != '\0' && (iVar3 = *(int*)((long)&param_1->field_364 + 4),
                                                                lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                                                                    (shared_ptr<configdecoder::SeqType>*)&local_40),
                                                                *(int*)(lVar6 + 240) <= iVar3)))) {
                            *(undefined8*)((long)&param_1->field_356 + 4) = 0;
                            piVar7 = (int*)((long)&param_1->field_364 + 4);
                            goto LAB_1000f928c;
                        }
                    }
                    TriggerSeqSoundKeyFramed(this, &local_40, *(int*)((long)&param_1->field_356 + 4),
                                             *(int*)&param_1->field_24, *(int*)((long)&param_1->field_24 + 4));
                }
            } else {
            LAB_1000f8b58:
                *(undefined4*)&param_1->field_356 = 4294967295;
            }
        LAB_1000f8b64:
            local_40.~shared_ptr();
        }
        this_00 = (Layout*)param_1->GetSpotAnims();
        piVar7 = (int*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        piVar8 = (int*)this_00->end();
        if (piVar7 != piVar8) {
            do {
                if ((piVar7[1] != -1) && (piVar7[4] <= field_8488)) {
                    local_40.List(piVar7[1]);
                    lVar6 = shared_ptr<configdecoder::SpotType>::operator->(
                        (shared_ptr<configdecoder::SpotType>*)&local_40);
                    iVar3 = *(int*)(lVar6 + 8);
                    local_40.~shared_ptr();
                    if (iVar3 == -1) {
                        this_00->erase(piVar7);
                    } else {
                        iVar4 = eastl::max<int>(piVar7[5], 0);
                        piVar7[5] = iVar4;
                        local_40.List(iVar3);
                        lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)&local_40);
                        cVar2 = ((lVar6 + 72))->empty();
                        if (cVar2 == '\0') {
                            pSVar5 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                                (shared_ptr<configdecoder::SeqType>*)&local_40);
                            cVar2 = pSVar5->IsKeyFramed();
                            if (cVar2 != '\0')
                                goto LAB_1000f8c4f;
                            piVar7[2] = piVar7[2] + 1;
                            iVar3 = piVar7[5];
                            lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                                (shared_ptr<configdecoder::SeqType>*)&local_40);
                            iVar4 = ((lVar6 + 72))->end();
                            if (iVar3 < iVar4) {
                                iVar3 = piVar7[2];
                                lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                                    (shared_ptr<configdecoder::SeqType>*)&local_40);
                                piVar9 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)(lVar6 + 120), (long)piVar7[5]);
                                if (*piVar9 < iVar3) {
                                    piVar7[2] = 1;
                                    iVar3 = piVar7[5];
                                    piVar7[5] = iVar3 + 1;
                                    TriggerSeqSound(this, &local_40, iVar3 + 1, *(int*)&param_1->field_24,
                                                    *(int*)((long)&param_1->field_24 + 4));
                                }
                            }
                            iVar3 = piVar7[5];
                            lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                                (shared_ptr<configdecoder::SeqType>*)&local_40);
                            iVar4 = ((lVar6 + 72))->end();
                            if (iVar4 <= iVar3) {
                                this_00->erase(piVar7);
                            }
                        } else {
                        LAB_1000f8c4f:
                            pSVar5 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                                (shared_ptr<configdecoder::SeqType>*)&local_40);
                            cVar2 = pSVar5->IsKeyFramed();
                            if (cVar2 == '\0') {
                                this_00->erase(piVar7);
                            } else {
                                piVar7[5] = piVar7[5] + 1;
                                pSVar5 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                                    (shared_ptr<configdecoder::SeqType>*)&local_40);
                                iVar3 = pSVar5->GetDuration();
                                if (piVar7[5] < iVar3) {
                                    TriggerSeqSound(this, &local_40, piVar7[5], *(int*)&param_1->field_24,
                                                    *(int*)((long)&param_1->field_24 + 4));
                                } else {
                                    this_00->erase(piVar7);
                                }
                            }
                        }
                        local_40.~shared_ptr();
                    }
                }
                piVar7 = piVar7 + 6;
            } while (piVar7 != piVar8);
        }
        if ((param_1->field_372 != -1) && (*(int*)&param_1->field_384 < 2)) {
            local_40.List(param_1->field_372);
            lVar6 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
            if ((*(int*)(lVar6 + 248) == 1) &&
                (((0 < *(int*)((long)&param_1->field_536 + 4) && (*(int*)&param_1->field_408 <= field_8488)) &&
                  (*(int*)((long)&param_1->field_408 + 4) < field_8488)))) {
                *(undefined4*)&param_1->field_384 = 1;
                local_40.~shared_ptr();
                return;
            }
            local_40.~shared_ptr();
        }
        if ((param_1->field_372 == -1) || (*(int*)&param_1->field_384 != 0))
            goto LAB_1000f923c;
        local_40.List(param_1->field_372);
        bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
        if (bVar1) {
            pSVar5 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                (shared_ptr<configdecoder::SeqType>*)&local_40);
            cVar2 = pSVar5->IsKeyFramed();
            if (cVar2 == '\0') {
                lVar6 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
                cVar2 = ((lVar6 + 72))->empty();
                if (cVar2 != '\0')
                    goto LAB_1000f8e49;
                piVar7 = (int*)((long)&param_1->field_376 + 4);
                *piVar7 = *piVar7 + 1;
                iVar3 = *(int*)&param_1->field_376;
                lVar6 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
                iVar4 = ((lVar6 + 72))->end();
                if (iVar3 < iVar4) {
                    iVar3 = *(int*)((long)&param_1->field_376 + 4);
                    lVar6 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
                    piVar7 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)(lVar6 + 120), (long)*(int*)&param_1->field_376);
                    if (*piVar7 < iVar3) {
                        *(undefined4*)((long)&param_1->field_376 + 4) = 1;
                        iVar3 = *(int*)&param_1->field_376 + 1;
                        *(int*)&param_1->field_376 = iVar3;
                        TriggerSeqSound(this, &local_40, iVar3, *(int*)&param_1->field_24,
                                        *(int*)((long)&param_1->field_24 + 4));
                    }
                }
                iVar3 = *(int*)&param_1->field_376;
                lVar6 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
                iVar4 = ((lVar6 + 72))->end();
                if (iVar4 <= iVar3) {
                    lVar6 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
                    *(int*)&param_1->field_376 = *(int*)&param_1->field_376 - *(int*)(lVar6 + 168);
                    iVar3 = *(int*)((long)&param_1->field_384 + 4) + 1;
                    *(int*)((long)&param_1->field_384 + 4) = iVar3;
                    lVar6 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
                    if ((iVar3 < *(int*)(lVar6 + 240)) && (iVar3 = *(int*)&param_1->field_376, -1 < iVar3)) {
                        lVar6 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)&local_40);
                        iVar4 = ((lVar6 + 72))->end();
                        if (iVar3 < iVar4) {
                            TriggerSeqSound(this, &local_40, *(int*)&param_1->field_376, *(int*)&param_1->field_24,
                                            *(int*)((long)&param_1->field_24 + 4));
                            goto LAB_1000f926b;
                        }
                    }
                    param_1->field_372 = 4294967295;
                }
            LAB_1000f926b:
                lVar6 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
                param_1->field_36 = *(undefined1*)(lVar6 + 224);
            } else {
            LAB_1000f8e49:
                pSVar5 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                    (shared_ptr<configdecoder::SeqType>*)&local_40);
                cVar2 = pSVar5->IsKeyFramed();
                if (cVar2 == '\0')
                    goto LAB_1000f9228;
                *(int*)&param_1->field_376 = *(int*)&param_1->field_376 + 1;
                pSVar5 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                    (shared_ptr<configdecoder::SeqType>*)&local_40);
                iVar3 = pSVar5->GetDuration();
                if (*(int*)&param_1->field_376 < iVar3) {
                    TriggerSeqSoundKeyFramed(this, &local_40, *(int*)&param_1->field_376, *(int*)&param_1->field_24,
                                             *(int*)((long)&param_1->field_24 + 4));
                } else {
                    lVar6 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
                    *(int*)&param_1->field_376 = *(int*)&param_1->field_376 - *(int*)(lVar6 + 168);
                    iVar4 = *(int*)((long)&param_1->field_384 + 4) + 1;
                    *(int*)((long)&param_1->field_384 + 4) = iVar4;
                    lVar6 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)&local_40);
                    if (((*(int*)(lVar6 + 240) <= iVar4) || (iVar4 = *(int*)&param_1->field_376, iVar4 < 0)) ||
                        (iVar3 <= iVar4))
                        goto LAB_1000f9228;
                    TriggerSeqSoundKeyFramed(this, &local_40, iVar4, *(int*)&param_1->field_24,
                                             *(int*)((long)&param_1->field_24 + 4));
                }
            }
        } else {
        LAB_1000f9228:
            param_1->field_372 = 4294967295;
        }
        local_40.~shared_ptr();
    LAB_1000f923c:
        if (0 < *(int*)&param_1->field_384) {
            *(int*)&param_1->field_384 = *(int*)&param_1->field_384 + -1;
        }
    }

    // 0x1000f94e0, 352 bytes, placed by class name
    // Client::TriggerPlayerAnim(ClientPlayer&, int, int)
    void Client::TriggerPlayerAnim(ClientPlayer* param_1, int param_2, int param_3) {
        int iVar1;
        bool bVar2;
        long lVar3;
        shared_ptr<configdecoder::SeqType> local_50[16];
        shared_ptr<RSevenDebugPresetProvider> local_40[16];

        if ((param_2 == -1) || (param_1->field_372 != param_2)) {
            bVar2 = true;
            if (param_1->field_372 != -1 && param_2 != -1) {
                local_40->List(param_2);
                lVar3 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)local_40);
                iVar1 = *(int*)(lVar3 + 228);
                local_50->List(param_1->field_372);
                lVar3 = shared_ptr<configdecoder::SeqType>::operator->(local_50);
                bVar2 = *(int*)(lVar3 + 228) <= iVar1;
                local_50->~shared_ptr();
                local_40->~shared_ptr();
            }
            if (bVar2) {
                param_1->field_372 = param_2;
                param_1->field_376 = 0;
                *(int*)&param_1->field_384 = param_3;
                *(undefined4*)((long)&param_1->field_384 + 4) = 0;
                *(uint*)((long)&param_1->field_536 + 4) = param_1->field_440;
            }
        } else {
            local_40->List(param_2);
            lVar3 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)local_40);
            iVar1 = *(int*)(lVar3 + 256);
            local_40->~shared_ptr();
            if (iVar1 != 2) {
                if (iVar1 != 1) {
                    return;
                }
                param_1->field_376 = 0;
                *(int*)&param_1->field_384 = param_3;
            }
            *(undefined4*)((long)&param_1->field_384 + 4) = 0;
        }
    }

    // 0x1000f9640, 2560 bytes, placed by class name
    // Client::GameDrawMain(int, int, int, int, int)
    void Client::GameDrawMain(int param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined1* this_00;
        uint uVar1;
        uint uVar2;
        uint uVar3;
        SoundInstance* this_01;
        char cVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        long* plVar8;
        long lVar9;
        NXTPixToolkit* pNVar10;
        int* piVar11;
        Window* this_02;
        NXTWorldRenderer* pNVar12;
        NXTPix3D* pNVar13;
        NXTPixScreen* pNVar14;
        undefined8 uVar15;
        world* pwVar16;
        TextureCache* this_03;
        Client* this_04;
        ulonglong uVar17;
        bool bVar18;
        shared_ptr* extraout_RDX;
        int iVar19;
        ulong uVar20;
        int iVar21;
        double dVar22;
        undefined1 local_e0[24];
        NXTPix3D* local_c8;
        ulong local_c0;
        ulonglong local_b8;
        NXTWorldRenderer* local_b0;
        int local_a0;
        int local_9c;
        int local_98;
        int local_94;
        uint local_90;
        int local_8c;
        SoundInstance* local_88;
        ulong local_80;
        ulong local_78;
        int local_70;
        int local_6c;
        undefined4 local_68[2];
        shared_ptr local_60;
        int local_4c;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        float local_34;

        local_b8 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this);
        field_7294680 = field_7294680 + 1;
        plVar8 = (long*)OSRenderCore_AudioThread::Instance();
        lVar9 = (((long)plVar8 + *(long*)(*plVar8 + -24)))->HeapBeginPtr();
        *(undefined1*)(lVar9 + 19677506) = 1;
        GdmCheckRemoveMapFlag(this);
        GdmAddSelfPlayerToWorld(this);
        GdmAddPriorityPlayerToWorld(this);
        GdmAddNPCs(this, true);
        GdmAddOtherPlayersToWorld(this);
        GdmAddNPCs(this, false);
        GdmAddProjectiles(this);
        GdmAddMapAnim(this);
        GdmCalcWindowSize(this, param_1, param_2, param_3, param_4, true);
        uVar1 = field_52736;
        uVar2 = field_52740;
        uVar7 = field_52744;
        uVar3 = field_52748;
        pNVar10 = (NXTPixToolkit*)GetMemoryCache();
        local_88 = (SoundInstance*)pNVar10->GetScreen();
        local_34 = (float)local_88->GetSoundSpatialSizeMax();
        local_3c = jag::math::RoundFloatToInt((float)(int)uVar1 * local_34);
        local_38 = jag::math::RoundFloatToInt((float)(int)uVar2 * local_34);
        local_e0._16_8_ = (ulong)uVar1;
        local_c0 = (ulong)uVar7;
        local_40 = jag::math::RoundFloatToInt((float)(int)(uVar1 + uVar7) * local_34);
        local_80 = (ulong)uVar2;
        local_78 = (ulong)uVar3;
        local_44 = jag::math::RoundFloatToInt((float)(int)(uVar3 + uVar2) * local_34);
        local_60._0_4_ = 0;
        piVar11 = std::max<int>(&local_3c, (int*)&local_60);
        local_3c = *piVar11;
        local_60._0_4_ = 0;
        piVar11 = std::max<int>(&local_38, (int*)&local_60);
        this_01 = local_88;
        local_38 = *piVar11;
        local_60._0_4_ = local_88->GetStatus();
        piVar11 = std::min<int>(&local_40, (int*)&local_60);
        local_40 = *piVar11;
        local_60._0_4_ = this_01->GetAliveCount();
        piVar11 = std::min<int>((int*)(GraphicsApp*)&local_44, (int*)&local_60);
        local_44 = *piVar11;
        iVar19 = local_40 - local_3c;
        iVar21 = local_44 - local_38;
        field_52752 = (field_52724 * iVar21) / 334;
        plVar8 = (long*)local_44.Instance();
        this_02 = (Window*)(**(code**)(*plVar8 + 96))(plVar8);
        cVar4 = this_02->IsLiveResizing();
        if ((cVar4 == '\0') && ((iVar19 != field_52756 || (iVar21 != field_52760)))) {
            RecalcCameraFrustumTileVisibility(this, iVar19, iVar21);
            field_52756 = iVar19;
            field_52760 = iVar21;
        }
        pNVar12 = (NXTWorldRenderer*)field_144->GetServerPosition();
        dash3d::WorldRenderer_debugFont = field_1104208->end();
        pNVar13 = (NXTPix3D*)(*(code*)*pNVar12->field_0)(pNVar12);
        local_70 = iVar19;
        (*(code*)pNVar13->field_0[7])(pNVar13);
        pNVar10 = (NXTPixToolkit*)GetMemoryCache();
        iVar19 = pNVar10->GetViewportX();
        pNVar13->SetMaxViewport(iVar19, 0, local_3c, local_38, local_40, local_44);
        pNVar13->SetClipping(local_3c, local_38, local_40, local_44);
        local_c8 = pNVar13;
        pNVar13->SetRenderClipping();
        new (local_e0) dash3d::GridRect(local_e0._16_4_, (int)local_80, local_70, iVar21);
        dash3d::MousePickingHelper::SetViewportDimensions((GridRect*)local_e0, field_52724);
        local_34 = field_2508656;
        iVar5 = GetTweenedPlayerCameraAngleX(this, local_34);
        iVar19 = field_7294756;
        iVar6 = iVar19 + 255;
        if (-1 < iVar19) {
            iVar6 = iVar19;
        }
        iVar19 = iVar6 >> 8;
        if (iVar6 >> 8 <= iVar5) {
            iVar19 = iVar5;
        }
        if ((field_2508884 != '\0') && (iVar6 = field_2508924 + 128, iVar19 < iVar6)) {
            iVar19 = iVar6;
        }
        local_b0 = pNVar12;
        local_8c = iVar21;
        uVar7 = GetTweenedPlayerCameraAngleY(this, local_34);
        uVar1 = field_7294716;
        uVar2 = field_7294720;
        local_34 = field_7294724;
        iVar21 = GetFollowCameraDistance(this, iVar19);
        CamFollow(this, uVar1, uVar2, (int)local_34, iVar19, uVar7 & 2047, iVar21, (int)local_78);
        if (field_52997 == '\0') {
            local_6c = GdmRoofCheck(this);
        } else {
            local_6c = GdmRoofCheck2(this);
        }
        iVar19 = field_53088;
        local_9c = field_53092;
        local_98 = field_53096;
        local_94 = field_53100;
        local_90 = field_53104;
        uVar20 = 0;
        do {
            if (field_2508992[uVar20 - 112] != '\0') {
                local_34 = (float)(&jag::math::g_Rand)
                               ->FRand((float)*(int*)(field_2508992 + uVar20 * 4 + -104) +
                                       (float)*(int*)(field_2508992 + uVar20 * 4 + -104) + 1.0);
                local_88 = (SoundInstance*)CONCAT44(local_88._4_4_, (float)*(int*)(field_2508992 + uVar20 * 4 + -104));
                dVar22 = (double)_sin((double)*(int*)(field_2508992 + uVar20 * 4 + -44) * 0.01 *
                                      (double)*(int*)(field_2508992 + uVar20 * 4 + -64));
                if ((uint)uVar20 < 5) {
                    iVar21 = (int)(dVar22 * (double)*(int*)(field_2508992 + uVar20 * 4 + -84) +
                                   (double)(local_34 - local_88._0_4_));
                    switch (uVar20 & 4294967295) {
                    case 0:
                        field_53088 = field_53088 + iVar21;
                        break;
                    case 1:
                        field_53092 = field_53092 + iVar21;
                        break;
                    case 2:
                        field_53096 = field_53096 + iVar21;
                        break;
                    case 3:
                        field_53104 = iVar21 + field_53104 & 2047;
                        break;
                    case 4:
                        iVar21 = iVar21 + field_53100;
                        field_53100 = iVar21;
                        iVar21 = dash3d::world::ClampPitchAngle(iVar21);
                        field_53100 = iVar21;
                    }
                }
            }
            uVar20 = uVar20 + 1;
        } while (uVar20 != 5);
        local_a0 = iVar19;
        if (m_frozen == false) {
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)&local_60, -1);
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_68, -1);
            cVar4 = NeedBuildMinimenu(this);
            pNVar12 = local_b0;
            if (cVar4 != '\0') {
                local_60._0_4_ = field_8592;
                local_68[0] = field_8596;
            }
            cVar4 = field_52344->IsOpen();
            if (cVar4 == '\0') {
                pNVar10 = (NXTPixToolkit*)GetMemoryCache();
                pNVar14 = (NXTPixScreen*)pNVar10->GetScreen();
                pNVar14->CalculateCanvasCoords(local_60._0_4_, local_68[0], &local_4c, &local_48);
                bVar18 = false;
                if ((local_3c <= local_4c) && (local_4c < local_3c + local_70)) {
                    bVar18 = false;
                    if ((local_38 <= local_48) &&
                        ((local_48 < local_38 + local_8c && (bVar18 = true, field_54760 != '\0')))) {
                        uVar15 = logger::default_logger();
                        logger::Logger::Log(uVar15, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client.cpp",
                                            8405, "SetMouseCoords x: %i, y: %i", local_4c - local_3c,
                                            local_48 - local_38);
                    }
                }
                iVar19 = local_4c - local_3c;
                local_48 = local_48 - local_38;
            } else {
                iVar19 = dash3d::MousePickingHelper::GetMouseScreenX();
                local_48 = dash3d::MousePickingHelper::GetMouseScreenY();
                bVar18 = false;
            }
            dash3d::MousePickingHelper::SetMouseCoords(iVar19, local_48, bVar18);
        } else {
            dash3d::MousePickingHelper::SetMouseCoords(-1, -1, false);
            pNVar12 = local_b0;
        }
        (*(code*)pNVar12->field_0[2])(pNVar12, field_8488);
        pNVar13 = local_c8;
        iVar21 = local_c8->GetZoom();
        (*(code*)pNVar13->field_0[2])(pNVar13, field_52752, field_52724);
        dash3d::world::m_pix3D = (*(code*)*pNVar12->field_0)(pNVar12);
        dash3d::ModelLitRenderer_lastModelLitUploadTotal = 0;
        dash3d::ModelLitRenderer_lastModelLitWorldRenderTotal = 0;
        dash3d::ModelLitRenderer_lastModelLitWorldRenderTotalNanos = 0;
        plVar8 = (long*)OSRenderCore_AudioThread::Instance();
        iVar19 = local_6c;
        (((long)plVar8 + *(long*)(*plVar8 + -24)))
            ->SetCameraPos(field_53088, field_53092, field_53096, field_53100, field_53104, local_6c);
        if (field_8160 != '\0') {
            this_00 = &field_19184;
            pwVar16 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)this_00);
            pwVar16->PrepRender(field_53088, field_53092, field_53096, field_53100, field_53104, iVar19);
            pwVar16 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)this_00);
            pwVar16->Render(pNVar12, field_53088, field_53092, field_53096, field_53100, field_53104, iVar19,
                            field_8488);
            if (m_usingRSeven == false) {
                pwVar16 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)this_00);
                pwVar16->RenderAlwaysOnTopHighlights(field_8488);
            }
            lVar9 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
            iVar6 = *(int*)(lVar9 + 24) >> 7;
            lVar9 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
            uVar17 = local_b8;
            iVar19 = *(int*)(lVar9 + 28) >> 7;
            iVar19 = ((iVar6 + 1) * m_playerLevel + iVar6) * (iVar19 + 1) + iVar19;
            GdmDrawSkybox(this, iVar19, local_b8);
            GdmDrawFog(this, iVar19, uVar17);
        }
        local_c8->SetZoom(iVar21);
        pwVar16 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
        pwVar16->RemoveSprites();
        uVar15 = local_e0._16_8_;
        iVar21 = local_e0._16_4_;
        iVar19 = (int)local_80;
        GdmEntityOverlays(this, iVar21, iVar19, (int)local_c0, (int)local_78, param_5);
        GdmCoordArrow(this, iVar21, iVar19);
        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_60, (jag*)&dash3d::Pix3D::m_textureProvider,
                                                                 extraout_RDX);
        this_03 =
            (TextureCache*)shared_ptr<dash3d::TextureCache>::operator->((shared_ptr<dash3d::TextureCache>*)&local_60);
        this_03->RunAnims(field_1115692);
        local_60.~shared_ptr();
        this_04 = this;
        GdmOtherOverlays(this);
        field_53088 = local_a0;
        field_53092 = local_9c;
        field_53096 = local_98;
        field_53100 = local_94;
        field_53104 = local_90;
        if (field_54832 != '\0') {
            this_04 = (Client*)std::unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>::operator->(
                (unique_ptr<jagex3::Js5Loader, std::default_delete<jagex3::Js5Loader>>*)&field_2508480);
            cVar4 = jagex3::Js5Loader::HasUrgentInProgress();
            if (cVar4 == '\0') {
                field_54832 = 0;
            }
        }
        if (field_54832 != '\0') {
            plVar8 = (long*)(*(code*)*field_144->field_0)();
            (**(code**)(*plVar8 + 32))(plVar8, uVar15 & 4294967295, local_80, local_c0, local_78, 4278190080);
            this_04 = this;
            MessageBox(this, (basic_string*)&constants::text::loading, false);
        }
        uVar17 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_04);
        (field_6814944, uVar17 - local_b8)->AddSample();
    }

    // 0x1000fa040, 112 bytes, placed by class name
    // Client::GdmCheckRemoveMapFlag()
    void Client::GdmCheckRemoveMapFlag() {
        int iVar1;
        long lVar2;
        int* piVar3;

        lVar2 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
        iVar1 = *(int*)(lVar2 + 24);
        piVar3 = (int*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&field_8152);
        if (iVar1 >> 7 == *piVar3) {
            lVar2 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
            iVar1 = *(int*)(lVar2 + 28);
            lVar2 = std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&field_8152);
            if (iVar1 >> 7 == *(int*)(lVar2 + 4)) {
                SetPlayerDestination(this, 0, 0);
            }
        }
    }

    // 0x1000fa0b0, 32 bytes, placed by class name
    // Client::GdmAddSelfPlayerToWorld()
    void Client::GdmAddSelfPlayerToWorld() {
        if (field_52033 != 0) {
            GdmAddPlayerToWorld(this, (shared_ptr*)field_52016, false);
        }
    }

    // 0x1000fa0d0, 96 bytes, placed by class name
    // Client::GdmAddPriorityPlayerToWorld()
    void Client::GdmAddPriorityPlayerToWorld() {
        shared_ptr* psVar1;

        if (-1 < (long)(int)m_priorityPlayerId) {
            psVar1 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)(int)m_priorityPlayerId);
            if (operator!=(psVar1, (_func_decltype_nullptr*)0)) {
                psVar1 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)(int)m_priorityPlayerId);
                GdmAddPlayerToWorld(this, psVar1, false);
            }
        }
    }

    // 0x1000fa130, 1104 bytes, placed by class name
    // Client::GdmAddNPCs(bool)
    void Client::GdmAddNPCs(bool param_1) {
        undefined1* this_00;
        uint uVar1;
        int iVar2;
        int iVar3;
        bool bVar4;
        char cVar5;
        int* piVar6;
        Client* this_01;
        ClientNpc* pCVar7;
        long lVar8;
        NpcType* this_02;
        undefined4* puVar9;
        ClientEntity* pCVar10;
        HighlightChannelProperties* pHVar11;
        ulong uVar12;
        undefined7 in_register_00000031;
        Client* this_03;
        ulong uVar13;
        undefined1 auVar14[16];
        unkbyte10 Var15;
        undefined1 local_b0[24];
        unique_ptr<dash3d::world, std::default_delete<dash3d::world>>* local_98;
        EntityHighlight local_90;
        shared_ptr local_80;
        Client* local_70;
        int local_68;
        int local_64;
        int local_60;
        int local_5c;
        int local_58;
        int local_54;
        longlong local_50;
        uint local_44;
        world* local_40;
        int local_38;
        bool local_31;

        if (0 < (int)m_nPCCount) {
            uVar12 = CONCAT71(in_register_00000031, param_1) & 4294967295;
            local_b0._16_8_ = &field_55272;
            this_00 = &field_1103856;
            local_98 = (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184;
            uVar13 = 0;
            local_70 = this;
            do {
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar13);
                this_01 = (Client*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                    (array<shared_ptr<ClientNpc>, 65536ul>*)local_b0._16_8_, (long)*piVar6);
                bVar4 = operator!=((shared_ptr*)this_01, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    pCVar7 = (ClientNpc*)shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                    cVar5 = pCVar7->Ready();
                    if (cVar5 != '\0') {
                        lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                        lVar8 = shared_ptr<configdecoder::NpcType>::operator->(
                            (shared_ptr<configdecoder::NpcType>*)(lVar8 + 1024));
                        if (*(char*)(lVar8 + 472) == (char)uVar12) {
                            lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                            this_02 = (NpcType*)shared_ptr<configdecoder::NpcType>::operator->(
                                (shared_ptr<configdecoder::NpcType>*)(lVar8 + 1024));
                            cVar5 = this_02->IsMultiNpcVisible();
                            if (cVar5 != '\0') {
                                lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                uVar1 = *(uint*)(lVar8 + 24);
                                lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                this = local_70;
                                if (((uVar1 < 13312) && (iVar2 = *(int*)(lVar8 + 28), -1 < iVar2)) && (iVar2 < 13312)) {
                                    local_44 = (uint)uVar12;
                                    local_38 = (int)uVar1 >> 7;
                                    local_50 = CONCAT44(local_50._4_4_, iVar2 >> 7);
                                    lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    if (*(int*)(lVar8 + 40) == 1) {
                                        lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                        if ((*(uint*)(lVar8 + 24) & 127) == 64) {
                                            lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                            if ((*(uint*)(lVar8 + 28) & 127) == 64) {
                                                local_40 = (world*)(long)local_38;
                                                lVar8 = (long)(int)local_50;
                                                if (*(int*)(field_7164656 + lVar8 * 4 + (long)local_40 * 416 + 228) ==
                                                    field_7294680) {
                                                    pCVar10 = (ClientEntity*)shared_ptr<ClientNpc>::operator->(
                                                        (shared_ptr<ClientNpc>*)this_01);
                                                    pCVar10->SetHiddenBy((ClientEntityID*)(field_7164656 + lVar8 * 8 +
                                                                                           (long)local_40 * 832 +
                                                                                           43492));
                                                    uVar12 = (ulong)local_44;
                                                    goto LAB_1000fa1b0;
                                                }
                                                *(int*)(field_7164656 + lVar8 * 4 + (long)local_40 * 416 + 228) =
                                                    field_7294680;
                                                puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                                    (Array<int, eastl::allocator>*)this_00, uVar13);
                                                new (&local_80)
                                                    game::LightProbeManager::MapSquareUpdateInfo(0, *puVar9);
                                                *(undefined8*)(field_7164656 + lVar8 * 8 + (long)local_40 * 832 +
                                                               43492) = local_80._0_8_;
                                            }
                                        }
                                    }
                                    pCVar10 = (ClientEntity*)shared_ptr<ClientNpc>::operator->(
                                        (shared_ptr<ClientNpc>*)this_01);
                                    pCVar10->SetUnhidden();
                                    local_40 = (world*)CONCAT44(local_40._4_4_, m_playerLevel);
                                    lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    lVar8 = shared_ptr<configdecoder::NpcType>::operator->(
                                        (shared_ptr<configdecoder::NpcType>*)(lVar8 + 1024));
                                    cVar5 = *(char*)(lVar8 + 520);
                                    piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)this_00, uVar13);
                                    local_50 = dash3d::MousePickingHelper::GetPackedTypeCode(
                                        local_38, (int)local_50, (int)local_40, 1, cVar5 == '\0', *piVar6);
                                    pCVar7 =
                                        (ClientNpc*)shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    pHVar11 = (HighlightChannelProperties*)pCVar7->GetHighlight();
                                    Var15 = HighlightChannelProperties::CreateHighlightData(pHVar11);
                                    iVar2 = field_8488;
                                    local_90._0_10_ = Var15;
                                    lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    *(int*)(lVar8 + 44) = iVar2;
                                    local_40 =
                                        (world*)std::unique_ptr<
                                            dash3d::world, std::default_delete<dash3d::world>>::operator->(local_98);
                                    local_68 = m_playerLevel;
                                    lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    local_64 = *(int*)(lVar8 + 24);
                                    lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    local_60 = *(int*)(lVar8 + 28);
                                    lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    iVar2 = *(int*)(lVar8 + 24);
                                    lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    local_38 = *(int*)(lVar8 + 40) * 64 + iVar2 + -64;
                                    lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    iVar2 = *(int*)(lVar8 + 28);
                                    this_03 = this_01;
                                    lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    local_38 = GetAvH(this_03, local_38, iVar2 + *(int*)(lVar8 + 40) * 64 + -64,
                                                      m_playerLevel);
                                    auVar14 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    iVar2 = *(int*)(auVar14._0_8_ + 40);
                                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_80, (jag*)this_01,
                                                                                             auVar14._8_8_);
                                    lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    local_5c = *(int*)(lVar8 + 32);
                                    lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    local_31 = *(bool*)(lVar8 + 36);
                                    pCVar10 = (ClientEntity*)shared_ptr<ClientNpc>::operator->(
                                        (shared_ptr<ClientNpc>*)this_01);
                                    local_58 = pCVar10->GetServerX();
                                    pCVar10 = (ClientEntity*)shared_ptr<ClientNpc>::operator->(
                                        (shared_ptr<ClientNpc>*)this_01);
                                    local_54 = pCVar10->GetServerZ();
                                    lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    iVar3 = *(int*)(lVar8 + 40);
                                    lVar8 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_01);
                                    new (local_b0) dash3d::GridRect(local_58, local_54, iVar3, *(int*)(lVar8 + 40));
                                    local_40->AddDynamic(local_68, local_64, local_60, local_38, iVar2 * 64 + -4,
                                                         &local_80, local_5c, local_50, local_31, &local_90, local_b0);
                                    local_80.~shared_ptr();
                                    uVar12 = (ulong)local_44;
                                    this = local_70;
                                }
                            }
                        }
                    }
                }
            LAB_1000fa1b0:
                uVar13 = uVar13 + 1;
            } while ((long)uVar13 < (long)(int)m_nPCCount);
        }
    }

    // 0x1000fa580, 32 bytes, placed by class name
    // Client::GdmAddProjectiles()
    void Client::GdmAddProjectiles() {
        eastl::list<shared_ptr<ClientProj>, eastl::allocator>::remove_if<Client::GdmAddProjectiles()::__10>(
            (list<shared_ptr<ClientProj>, eastl::allocator>*)&field_7164584, this);
    }

    // 0x1000fa5a0, 32 bytes, placed by class name
    // Client::GdmAddMapAnim()
    void Client::GdmAddMapAnim() {
        eastl::list<shared_ptr<MapSpotAnim>, eastl::allocator>::remove_if<Client::GdmAddMapAnim()::__11>(
            (list<shared_ptr<MapSpotAnim>, eastl::allocator>*)&field_7164616, this);
    }

    // 0x1000fa5c0, 608 bytes, placed by class name
    // Client::GdmCalcWindowSize(int, int, int, int, bool)
    void Client::GdmCalcWindowSize(int param_1, int param_2, int param_3, int param_4, bool param_5) {
        int iVar1;
        Pix2D* this_00;
        int iVar2;
        undefined4 in_register_00000014;
        undefined8 uVar3;
        int iVar4;
        undefined4 in_register_00000034;
        undefined8 uVar5;
        int iVar6;
        uint uVar7;
        int iVar8;

        uVar5 = CONCAT44(in_register_00000034, param_1);
        uVar3 = CONCAT44(in_register_00000014, param_2);
        this_00 = (Pix2D*)(*(code*)*field_144->field_0)();
        if (param_3 < 1) {
            param_3 = 1;
        }
        uVar7 = 1;
        if (0 < param_4) {
            uVar7 = param_4;
        }
        if ((int)uVar7 < 334) {
            iVar8 = (int)field_52712;
        } else if ((int)uVar7 < 434) {
            iVar8 = (int)(((int)field_52714 - (int)field_52712) * (uVar7 - 334)) / 100 + (int)field_52712;
        } else {
            iVar8 = (int)field_52714;
        }
        iVar2 = uVar7 * 512;
        iVar4 = param_3 * 334;
        iVar1 = (iVar2 * iVar8) / iVar4;
        iVar6 = (int)field_52730;
        if (iVar1 < iVar6) {
            iVar1 = (iVar4 * iVar6) / iVar2;
            iVar8 = (int)field_52728;
            if (iVar8 < iVar1) {
                iVar1 = (param_3 - (iVar2 * iVar8) / (iVar6 * 334)) / 2;
                if (param_5) {
                    this_00->ResetClipping();
                    (**(code**)(this_00->field_0 + 32))(this_00, uVar5, uVar3, iVar1, uVar7, 4278190080);
                    (**(code**)(this_00->field_0 + 32))(this_00, (param_3 + param_1) - iVar1, uVar3, iVar1, uVar7,
                                                        4278190080);
                }
                param_1 = param_1 + iVar1;
                param_3 = param_3 + iVar1 * -2;
                goto LAB_1000fa7dd;
            }
        } else {
            if (iVar1 <= field_52732)
                goto LAB_1000fa7dd;
            iVar4 = iVar4 * field_52732;
            iVar1 = iVar4 / iVar2;
            iVar8 = (int)field_52720;
            if (iVar1 < iVar8) {
                iVar1 = (int)(uVar7 - iVar4 / (iVar8 << 9)) / 2;
                if (param_5) {
                    this_00->ResetClipping();
                    (**(code**)(this_00->field_0 + 32))(this_00, uVar5, uVar3, param_3, iVar1, 4278190080);
                    (**(code**)(this_00->field_0 + 32))(this_00, uVar5, (param_2 + uVar7) - iVar1, param_3, iVar1,
                                                        4278190080);
                }
                param_2 = param_2 + iVar1;
                uVar7 = uVar7 + iVar1 * -2;
                goto LAB_1000fa7dd;
            }
        }
        iVar8 = iVar1;
    LAB_1000fa7dd:
        field_52724 = iVar8;
        field_52736 = param_1;
        field_52740 = param_2;
        field_52744 = param_3;
        field_52748 = uVar7;
    }

    // 0x1000fa870, 1008 bytes, placed by class name
    // Client::GdmRoofCheck()
    /* WARNING: Removing unreachable block (ram,4295993832) */
    /* WARNING: Removing unreachable block (ram,4295994060) */
    /* Client::GdmRoofCheck() */

    int Client::GdmRoofCheck() {
        undefined1* this_00;
        float fVar1;
        uint uVar3;
        GameOptions* this_01;
        ulong uVar4;
        long lVar5;
        int iVar6;
        float* pfVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        int local_34;

        this_01 =
            (GameOptions*)std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
        if (this_01->GetRemoveRoof() == '\0') {
            local_34 = 3;
            if (field_53100 < 310) {
                if (m_cameraMode == 1) {
                    uVar3 = field_7294716;
                    pfVar7 = &field_7294724;
                } else {
                    lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
                    uVar3 = *(uint*)(lVar5 + 24);
                    lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
                    pfVar7 = (float*)(lVar5 + 28);
                }
                iVar8 = field_53088;
                if ((((13311 < iVar8) || (iVar8 < 0)) || (iVar11 = field_53096, iVar11 < 0)) || (13311 < iVar11)) {
                    return m_playerLevel;
                }
                iVar6 = m_playerLevel;
                if (13311 < (int)uVar3) {
                    return iVar6;
                }
                if ((int)uVar3 < 0) {
                    return iVar6;
                }
                fVar1 = *pfVar7;
                if ((int)fVar1 < 0) {
                    return iVar6;
                }
                if (13311 < (int)fVar1) {
                    return iVar6;
                }
                iVar12 = (int)fVar1 >> 7;
                iVar14 = (int)uVar3 >> 7;
                iVar8 = iVar8 >> 7;
                iVar11 = iVar11 >> 7;
                uVar4 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl, iVar6, iVar8, iVar11);
                local_34 = 3;
                if ((uVar4 & 4) != 0) {
                    local_34 = m_playerLevel;
                }
                iVar6 = iVar12 - iVar11;
                if (iVar12 - iVar11 == 0 || iVar12 < iVar11) {
                    iVar6 = -(iVar12 - iVar11);
                }
                iVar10 = iVar14 - iVar8;
                if (iVar14 - iVar8 == 0 || iVar14 < iVar8) {
                    iVar10 = -(iVar14 - iVar8);
                }
                if (iVar6 < iVar10) {
                    if (iVar8 != iVar14) {
                        iVar13 = 32768;
                        do {
                            iVar9 = -(uint)(iVar14 < iVar8);
                            if (iVar8 < iVar14) {
                                iVar9 = 1;
                            }
                            iVar8 = iVar9 + iVar8;
                            uVar4 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl, m_playerLevel,
                                                                          iVar8, iVar11);
                            if ((uVar4 & 4) != 0) {
                                local_34 = m_playerLevel;
                            }
                            iVar13 = iVar13 + (iVar6 << 16) / iVar10;
                            if (65535 < iVar13) {
                                iVar9 = -(uint)(iVar12 < iVar11);
                                if (iVar11 < iVar12) {
                                    iVar9 = 1;
                                }
                                iVar13 = iVar13 + -65536;
                                iVar11 = iVar9 + iVar11;
                                uVar4 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl,
                                                                              m_playerLevel, iVar8, iVar11);
                                if ((uVar4 & 4) != 0) {
                                    local_34 = m_playerLevel;
                                }
                            }
                        } while (iVar8 != iVar14);
                    }
                } else if ((0 < iVar6) && (iVar11 != iVar12)) {
                    iVar13 = 32768;
                    do {
                        iVar9 = -(uint)(iVar12 < iVar11);
                        if (iVar11 < iVar12) {
                            iVar9 = 1;
                        }
                        iVar11 = iVar9 + iVar11;
                        uVar4 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl, m_playerLevel,
                                                                      iVar8, iVar11);
                        if ((uVar4 & 4) != 0) {
                            local_34 = m_playerLevel;
                        }
                        iVar13 = iVar13 + (iVar10 << 16) / iVar6;
                        if (65535 < iVar13) {
                            iVar9 = -(uint)(iVar14 < iVar8);
                            if (iVar8 < iVar14) {
                                iVar9 = 1;
                            }
                            iVar13 = iVar13 + -65536;
                            iVar8 = iVar9 + iVar8;
                            uVar4 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl, m_playerLevel,
                                                                          iVar8, iVar11);
                            if ((uVar4 & 4) != 0) {
                                local_34 = m_playerLevel;
                            }
                        }
                    } while (iVar11 != iVar12);
                }
            }
            this_00 = field_52016;
            lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
            if (((-1 < *(int*)(lVar5 + 24)) &&
                 (lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00),
                  -1 < *(int*)(lVar5 + 28))) &&
                ((lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00),
                  *(int*)(lVar5 + 24) < 13312 &&
                      (lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00),
                       *(int*)(lVar5 + 28) < 13312)))) {
                iVar8 = m_playerLevel;
                lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                iVar11 = *(int*)(lVar5 + 24);
                lVar5 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00);
                uVar3 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl, iVar8, iVar11 >> 7,
                                                              *(int*)(lVar5 + 28) >> 7);
                if ((uVar3 & 4) == 0) {
                    return local_34;
                }
            }
        }
        return m_playerLevel;
    }

    // 0x1000fac60, 144 bytes, placed by class name
    // Client::GdmRoofCheck2()
    int Client::GdmRoofCheck2() {
        int iVar2;
        Client* this_00;
        ulong uVar3;

        this_00 = (Client*)std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
            (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
        if (this_00->GetRemoveRoof() == '\0') {
            iVar2 = GetAvH(this_00, field_53088, field_53096, m_playerLevel);
            if (799 < iVar2 - field_53092) {
                return 3;
            }
            uVar3 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl, m_playerLevel, field_53088 >> 7,
                                                          field_53096 >> 7);
            if ((uVar3 & 4) == 0) {
                return 3;
            }
        }
        return m_playerLevel;
    }

    // 0x1000fad10, 192 bytes, placed by class name
    // Client::GdmDrawSkybox(int, long long)
    void Client::GdmDrawSkybox(int param_1, longlong param_2) {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;
        char cVar3;
        undefined8* puVar4;
        float local_48;
        float local_38;
        float fStack_34;

        this_00 = field_7164656;
        cVar3 = this_00->ShowSkybox();
        if (cVar3 == '\0') {
            return;
        }
        if (field_7164648 == '\0') {
            puVar4 = (undefined8*)Array<jag::math::Vector4T<float>, eastl::allocator>::operator[](
                (Array<jag::math::Vector4T<float>, eastl::allocator>*)&ClientBuild::m_skyboxColour, (long)param_1);
            uVar1 = *puVar4;
            uVar2 = puVar4[1];
            cVar3 = Skybox::IsNewColour(this_00, param_2);
            if ((cVar3 == '\0') || (field_7164753 != '\0'))
                goto LAB_1000fadaa;
            local_38 = (float)uVar1;
            fStack_34 = (float)((ulong)uVar1 >> 32);
            local_48 = (float)uVar2;
        } else {
            if (field_7164753 != '\0')
                goto LAB_1000fadaa;
            local_38 = 0.0;
            fStack_34 = 0.0;
            local_48 = 0.0;
        }
        Skybox::SetSkyboxColour(local_38, fStack_34, local_48, (ulonglong)this_00);
    LAB_1000fadaa:
        this_00->RenderSkybox(param_2);
    }

    // 0x1000fadd0, 224 bytes, placed by class name
    // Client::GdmDrawFog(int, long long)
    void Client::GdmDrawFog(int param_1, longlong param_2) {
        char cVar1;
        ulonglong uVar2;
        int iVar3;
        int* piVar4;

        uVar2 = param_2 / 1000000;
        if (field_7164648 == '\0') {
            if (*(char*)&field_7164880 != '\0')
                goto LAB_1000fae3c;
            piVar4 = (int*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)&ClientBuild::m_fogStartDistance, (long)param_1);
            iVar3 = *piVar4;
        } else {
            if (*(char*)&field_7164880 != '\0')
                goto LAB_1000fae3c;
            iVar3 = 7;
        }
        (&field_7164760, iVar3, uVar2)->SetFogDistance();
    LAB_1000fae3c:
        if (*(char*)((long)&field_7164880 + 1) == '\0') {
            std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            iVar3 = dash3d::world::GetDrawDistance();
            (&field_7164760, iVar3, uVar2)->UpdateFogViaDrawDistance();
            cVar1 = m_usingRSeven;
        } else {
            cVar1 = m_usingRSeven;
        }
        if (cVar1 == '\0') {
            (field_144, 0.0, 0.0)->SetFogParams();
        } else {
            (&field_7164760, uVar2)->UpdateFog();
        }
    }

    // 0x1000fc8d0, 48 bytes, placed by class name
    // Client::SetDrawDistance(int)
    void Client::SetDrawDistance(int param_1) {
        DeviceOptions* this_00;

        this_00 = (DeviceOptions*)
                      std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                          (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
        this_00->SetDrawDistance(param_1);
    }

    // 0x1000fc920, 80 bytes, placed by class name
    // Client::OnDrawDistanceChange()
    void Client::OnDrawDistanceChange() {
        DeviceOptions* this_00;
        int iVar2;
        _func_decltype_nullptr* in_RSI;

        if (std::operator!=((unique_ptr*)&field_19184, in_RSI)) {
            iVar2 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            this_00 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            this_00->GetDrawDistance();
            dash3d::world::SetDrawDistance(iVar2);
        }
    }

    // 0x1000fc990, 240 bytes, placed by class name
    // Client::GdmGetSpecialArea()
    void Client::GdmGetSpecialArea() {
        uint uVar1;
        int iVar2;
        long lVar3;
        int iVar4;

        field_52440 = 0;
        lVar3 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
        iVar4 = *(int*)(lVar3 + 24) >> 7;
        uVar1 = field_53220;
        lVar3 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
        iVar2 = (*(int*)(lVar3 + 28) >> 7) + field_53224;
        if (((3055 < iVar2 && (iVar4 + uVar1) - 3053 < 104) && iVar2 < 3137) ||
            (((iVar4 + uVar1) - 3072 < 47 && 9491 < iVar2) && iVar2 < 9536)) {
            field_52440 = 1;
        }
        if ((((field_52440 == 1) && (3138 < (int)(iVar4 + uVar1))) && ((int)(iVar4 + uVar1) < 3200)) &&
            ((3007 < iVar2 && (iVar2 < 3063)))) {
            field_52440 = 0;
        }
    }

    // 0x1000fcbc0, 272 bytes, placed by class name
    // Client::PauseContinue(int, int)
    void Client::PauseContinue(int param_1, int param_2) {
        undefined4 uVar1;
        undefined8 uVar2;
        ServerConnection* pSVar3;
        ShuffledPacket2* pSVar4;
        undefined1 local_78[64];
        SuperShuffledPacketFactory local_38;

        if (field_54760 != '\0') {
            uVar2 = logger::default_logger();
            uVar1 = core::math::MathTool::UnsignedRightShift(param_1, '\x10');
            logger::Logger::Log(
                uVar2, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 9183,
                "Sending pausecontinue prot - com:%i if:%u subid:%i", param_1, uVar1, param_2);
        }
        pSVar3 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        uVar2 = pSVar3->GetOutgoingEncryption();
        local_78->MakeClientMessage(56, uVar2);
        new (&local_38) SuperShuffledPacketFactory((SuperPacket*)(local_78 + 8));
        pSVar4 = (ShuffledPacket2*)local_38.p2_alt2();
        ShuffledPacket2::p4<unsigned int>(pSVar4, param_1);
        pSVar4 = (ShuffledPacket2*)local_38.p2_alt2();
        ShuffledPacket2::p2<int>(pSVar4, param_2);
        pSVar3 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        pSVar3->SendClientMessage(local_78);
        local_78->~ClientMessage();
    }

    // 0x1000fcce0, 32 bytes, placed by class name
    // Client::InitHostPlatformStats()
    void Client::InitHostPlatformStats() {
        field_2508992->Init();
    }

    // 0x1000fcd00, 128 bytes, placed by class name
    // Client::GetApplicationContext()
    undefined1* Client::GetApplicationContext() {
        bool bVar1;
        unique_ptr* puVar2;
        shared_ptr local_20;

        bVar1 = operator==((shared_ptr*)&javapal::GameShell::m_pApplicationContext, (_func_decltype_nullptr*)0);
        if (bVar1) {
            puVar2 = (unique_ptr*)field_54752->GetSteamSDK();
            make_shared<DesktopApplicationContext, std::unique_ptr<Steam, std::default_delete<Steam>>&>((jag*)&local_20,
                                                                                                        puVar2);
            shared_ptr<ApplicationContext>::operator=(
                (shared_ptr<ApplicationContext>*)&javapal::GameShell::m_pApplicationContext, &local_20);
            local_20.~shared_ptr();
        }
        return &javapal::GameShell::m_pApplicationContext;
    }

    // 0x1000fce70, 32 bytes, placed by class name
    // Client::CheckResize()
    void Client::CheckResize() {
        ProcessSideBarRequests(this);
        CheckResize();
    }

    // 0x1000fcf00, 64 bytes, placed by class name
    // Client::QuickResize()
    void Client::QuickResize() {
        long* plVar1;

        if (field_8425 == false) {
            plVar1 = (long*)OSRenderCore_AudioThread::Instance();
            (((long)plVar1 + *(long*)(*plVar1 + -24)))->SetMinClientSize(field_120, field_124);
        }
        QuickResize();
    }

    // 0x1000fcf60, 32 bytes, placed by class name
    // Client::GetSteamSDK()
    void Client::GetSteamSDK() {
        unique_ptr<Steam, std::default_delete<Steam>>* this_00;

        this_00 = (unique_ptr<Steam, std::default_delete<Steam>>*)field_54752->GetSteamSDK();
        std::unique_ptr<Steam, std::default_delete<Steam>>::get(this_00);
    }

    // 0x1000fcf90, 64 bytes, placed by class name
    // Client::SaveWindowPosition(WindowSavedPosition&&)
    void Client::SaveWindowPosition(WindowSavedPosition* param_1) {
        DeviceOptions* this_00;

        if ((&field_8376)->operator_cast_to_bool()) {
            this_00 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            this_00->SetWindowSavedPosition(param_1);
        }
    }

    // 0x1000fd070, 80 bytes, placed by class name
    // Client::AcceptTermsAndPrivacy()
    void Client::AcceptTermsAndPrivacy() {
        DeviceOptions* this_00;
        shared_ptr<ApplicationContext>* this_01;
        ApplicationContext* this_02;

        if (HasAcceptedTermsAndPrivacy(this) == '\0') {
            this_00 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            this_00->SetTermsAndPrivacyVersion(field_54828);
            this_01 = (shared_ptr<ApplicationContext>*)(**(code**)*m_pMyThis)();
            this_02 = (ApplicationContext*)shared_ptr<ApplicationContext>::operator->(this_01);
            this_02->InitServices();
        }
    }

    // 0x1000fd0e0, 64 bytes, placed by class name
    // Client::GetClientScripts()
    StockPlayerOffer* Client::GetClientScripts() {
        if (m_pClientScripts == (StockPlayerOffer*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pClientScripts != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      9305, (char*)0);
        }
        return m_pClientScripts;
    }

    // 0x1000fd120, 64 bytes, placed by class name
    // Client::GetSprites()
    StockPlayerOffer* Client::GetSprites() {
        if (m_pSprites == (StockPlayerOffer*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pSprites != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      9311, (char*)0);
        }
        return m_pSprites;
    }

    // 0x1000fd160, 16 bytes, placed by class name
    // Client::SetLoginProgress(int)
    void Client::SetLoginProgress(int param_1) {}

    // 0x1000fd170, 64 bytes, placed by class name
    // Client::LoginProgressToString(int)
    eastl::string* Client::LoginProgressToString(int param_1) {
        undefined4 in_register_0000003c;
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (CONCAT44(in_register_0000003c, param_1)) eastl::string("", local_20);
        return (eastl::string*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1000fd1b0, 64 bytes, placed by class name
    // Client::MainStateToString(int)
    eastl::string* Client::MainStateToString(int param_1) {
        undefined4 in_register_0000003c;
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (CONCAT44(in_register_0000003c, param_1)) eastl::string("", local_20);
        return (eastl::string*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1000fd1f0, 112 bytes, placed by class name
    // Client::StockMarketOfferComparator::operator()(rs2lib::ActiveOffersReply::ActiveOffer const&, rs2lib::ActiveOffersReply::ActiveOffer const&) const
    /* Client::StockMarketOfferComparator::TEMPNAMEPLACEHOLDERVALUE(rs2lib::ActiveOffersReply::ActiveOffer
   const&, rs2lib::ActiveOffersReply::ActiveOffer const&) const */

    bool Client::StockMarketOfferComparator::operator()(ActiveOffer* param_1, ActiveOffer* param_2) {
        int iVar1;
        int iVar2;
        Client* this_00;

        if (*this != (StockMarketOfferComparator)0) {
            this_00 = (Client*)Client::Instance();
            iVar1 = GetWorldId(this_00);
            iVar2 = param_1->GetPos();
            if (iVar2 == iVar1) {
                return true;
            }
            iVar2 = param_2->GetPos();
            if (iVar2 == iVar1) {
                return false;
            }
        }
        iVar1 = param_1->GetPos();
        iVar2 = param_2->GetPos();
        return iVar1 < iVar2;
    }

    // 0x1000fd270, 256 bytes, placed by class name
    // Client::WriteToPublicStorage(Filename const&, Filename&, char const*, Error&)
    undefined4 Client::WriteToPublicStorage(Filename* param_1, Filename* param_2, char* param_3, Error* param_4) {
        undefined4 uVar1;
        shared_ptr<ApplicationContext>* this_00;
        long* plVar2;
        char* pcVar3;
        Filename local_298[19];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)();
        plVar2 = (long*)shared_ptr<ApplicationContext>::operator->(this_00);
        pcVar3 = (char*)GameShell3Cache::GetOSRSCacheFolderName();
        Filename::Filename(local_298, pcVar3);
        Filename::operator/(local_168, local_298);
        uVar1 = (**(code**)(*plVar2 + 40))(plVar2, local_168, param_2, param_3, param_4);
        local_168->~pair();
        local_298->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar1;
    }

    // 0x1000fd370, 144 bytes, placed by class name
    // Client::PreloadKeyFrameSet(int)
    void Client::PreloadKeyFrameSet(int param_1) {
        SeqType* this_00;
        int* piVar1;
        shared_ptr<configdecoder::SeqType> local_28[16];

        local_28->List(param_1);
        this_00 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(local_28);
        if (this_00->IsKeyFramed() != '\0') {
            piVar1 = (int*)shared_ptr<configdecoder::SeqType>::operator->(local_28);
            if ((undefined*)(*piVar1)->GetKeyFrameSetStatus() == DataStatus::MISSING) {
                piVar1 = (int*)shared_ptr<configdecoder::SeqType>::operator->(local_28);
                (&field_7306808, piVar1)->push_back();
            }
        }
        local_28->~shared_ptr();
    }

    // 0x1000fd4a0, 16 bytes, placed by class name
    // Client::Frozen() const
    undefined1 Client::Frozen() {
        return m_frozen;
    }

    // 0x1000fd4b0, 16 bytes, placed by class name
    // Client::SetFrozen(bool)
    void Client::SetFrozen(bool param_1) {
        m_frozen = param_1;
    }

    // 0x10010c1a0, 528 bytes, placed by class name
    // Client::CloseModal()
    void Client::CloseModal() {
        undefined1* this_00;
        int iVar1;
        ServerConnection* this_01;
        ServerConnection* this_02;
        undefined8 uVar2;
        int* piVar3;
        long lVar4;
        bool bVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base local_b0[16];
        ClientMessage local_a0;
        list<console::Line, eastl::allocator> local_60[8];
        list<console::Line, eastl::allocator> local_58[8];
        undefined1* local_50;
        shared_ptr local_48;

        this_01 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        this_02 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        uVar2 = this_02->GetOutgoingEncryption();
        local_a0.MakeClientMessage(8, uVar2);
        this_01->SendClientMessage(&local_a0);
        local_a0.~ClientMessage();
        ScriptRunner::DisallowIfClose();
        helpers::GetKeysIf<int, SubInterface, Client::CloseModal()::__15>(&local_a0, &field_53160);
        eastl::list<console::Line, eastl::allocator>::begin(local_60);
        eastl::list<console::Line, eastl::allocator>::end(local_58);
        bVar5 = eastl::operator!=((eastl*)local_60, (hashtable_iterator_base*)local_58, extraout_RDX);
        if (bVar5) {
            local_50 = &field_53160;
            do {
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_60);
                eastl::hashtable<
                    int,
                    eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                           std::default_delete<ChatHistory::HistoryBuffer>>>,
                    eastl::allocator,
                    eastl::use_first<
                        eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                               std::default_delete<ChatHistory::HistoryBuffer>>>>,
                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::find((int*)&local_48);
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar5 = eastl::operator!=((eastl*)&local_48, local_b0, extraout_RDX_01);
                if (bVar5) {
                    piVar3 = (int*)local_48.HeapBeginPtr();
                    iVar1 = *piVar3;
                    lVar4 = local_48.HeapBeginPtr();
                    CloseSubinterface((Client*)this, iVar1, *(int*)(lVar4 + 4), true);
                }
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_60);
                bVar5 = eastl::operator!=((eastl*)local_60, (hashtable_iterator_base*)local_58, extraout_RDX_00);
            } while (bVar5);
        }
        this_00 = ((Client*)this)->field_52424;
        bVar5 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if (bVar5) {
            ComponentUpdated((Client*)this, (shared_ptr*)this_00);
            new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)this_00, &local_48);
            local_48.~shared_ptr();
        }
        ScriptRunner::AllowIfClose();
        local_a0.~list();
    }

    // 0x10010c3b0, 1008 bytes, placed by class name
    // Client::ClientVar(int)
    void Client::ClientVar(int param_1) {
        uint uVar1;
        uint uVar2;
        shared_ptr<configdecoder::VarpType>* this_00;
        int* piVar3;
        uint* puVar4;
        DeviceOptions* this_01;
        GameOptions* pGVar5;
        int iVar6;

        LegacyUpdated(this);
        bgsound::RecalculateMultilocs();
        this_00 = (shared_ptr<configdecoder::VarpType>*)configdecoder::VarpType::List(param_1);
        piVar3 = (int*)shared_ptr<configdecoder::VarpType>::operator->(this_00);
        iVar6 = *piVar3;
        if (iVar6 == 0) {
            return;
        }
        puVar4 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&ClientVarCache::m_var,
                                                                 (long)param_1);
        if (21 < iVar6 - 1U) {
            return;
        }
        uVar1 = *puVar4;
        switch (iVar6) {
        case 1:
            iVar6 = 80;
            if (uVar1 - 1 < 3) {
                iVar6 = (uVar1 - 1) * 20 + 20;
            }
            this_01 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
            this_01->SetBrightness(iVar6);
            return;
        default:
            goto switchD_10010c411_caseD_2;
        case 3:
            if (uVar1 < 5) {
                pGVar5 =
                    (GameOptions*)
                        std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                            (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
                pGVar5->SetMidiVolume(uVar1 * -25 + 100);
            }
            switch (iVar6) {
            case 4:
                goto switchD_10010c411_caseD_4;
            case 5:
                goto switchD_10010c411_caseD_5;
            case 6:
                goto switchD_10010c411_caseD_6;
            default:
                goto switchD_10010c411_caseD_2;
            case 9:
                goto switchD_10010c411_caseD_9;
            case 10:
                goto switchD_10010c411_caseD_a;
            case 17:
                goto switchD_10010c411_caseD_11;
            case 18:
                goto switchD_10010c411_caseD_12;
            case 19:
                goto switchD_10010c411_caseD_13;
            case 22:
                break;
            }
        case 4:
        switchD_10010c411_caseD_4:
            if (uVar1 < 5) {
                pGVar5 =
                    (GameOptions*)
                        std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                            (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
                pGVar5->SetWaveVolume(uVar1 * -25 + 100);
            }
            switch (iVar6) {
            case 5:
                goto switchD_10010c411_caseD_5;
            case 6:
                goto switchD_10010c411_caseD_6;
            default:
                goto switchD_10010c411_caseD_2;
            case 9:
                goto switchD_10010c411_caseD_9;
            case 10:
                goto switchD_10010c411_caseD_a;
            case 17:
                goto switchD_10010c411_caseD_11;
            case 18:
                goto switchD_10010c411_caseD_12;
            case 19:
                goto switchD_10010c411_caseD_13;
            case 22:
                break;
            }
        case 5:
        switchD_10010c411_caseD_5:
            m_usingOneButtonMouse = uVar1 == 1;
            switch (iVar6) {
            case 6:
                goto switchD_10010c411_caseD_6;
            default:
                goto switchD_10010c411_caseD_2;
            case 9:
                goto switchD_10010c411_caseD_9;
            case 10:
                goto switchD_10010c411_caseD_a;
            case 17:
                goto switchD_10010c411_caseD_11;
            case 18:
                goto switchD_10010c411_caseD_12;
            case 19:
                goto switchD_10010c411_caseD_13;
            case 22:
                break;
            }
        case 6:
        switchD_10010c411_caseD_6:
            field_2505096 = uVar1;
            switch (iVar6) {
            case 9:
                goto switchD_10010c411_caseD_9;
            case 10:
                goto switchD_10010c411_caseD_a;
            default:
                goto switchD_10010c411_caseD_2;
            case 17:
                goto switchD_10010c411_caseD_11;
            case 18:
                goto switchD_10010c411_caseD_12;
            case 19:
                goto switchD_10010c411_caseD_13;
            case 22:
                break;
            }
        case 9:
        switchD_10010c411_caseD_9:
            field_2505100 = uVar1;
            switch (iVar6) {
            case 10:
                goto switchD_10010c411_caseD_a;
            default:
                goto switchD_10010c411_caseD_2;
            case 17:
                goto switchD_10010c411_caseD_11;
            case 18:
                goto switchD_10010c411_caseD_12;
            case 19:
                goto switchD_10010c411_caseD_13;
            case 22:
                break;
            }
        case 10:
        switchD_10010c411_caseD_a:
            if (uVar1 < 5) {
                pGVar5 =
                    (GameOptions*)
                        std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                            (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
                pGVar5->SetAmbientVolume(uVar1 * -25 + 100);
            }
            switch (iVar6) {
            case 17:
                goto switchD_10010c411_caseD_11;
            case 18:
                goto switchD_10010c411_caseD_12;
            case 19:
                goto switchD_10010c411_caseD_13;
            default:
                goto switchD_10010c411_caseD_2;
            case 22:
                break;
            }
        case 17:
        switchD_10010c411_caseD_11:
            field_52468 = uVar1 & 65535;
            if (iVar6 != 22) {
                if (iVar6 != 19) {
                    if (iVar6 != 18) {
                        return;
                    }
                    goto switchD_10010c411_caseD_12;
                }
                goto switchD_10010c411_caseD_13;
            }
            break;
        case 18:
        switchD_10010c411_caseD_12:
            uVar2 = 0;
            if (uVar1 < 5) {
                uVar2 = uVar1;
            }
            (field_52344, uVar2)->SetAttackPriorityPlayer();
            if (iVar6 != 22) {
                if (iVar6 != 19) {
                    return;
                }
                goto switchD_10010c411_caseD_13;
            }
            break;
        case 19:
        switchD_10010c411_caseD_13:
            uVar2 = uVar1 & 2047;
            if (uVar1 == 4294967295) {
                uVar2 = 4294967295;
            }
            m_priorityPlayerId = uVar2;
            if (iVar6 != 22) {
                return;
            }
            break;
        case 22:
            break;
        }
        uVar2 = 0;
        if (uVar1 < 4) {
            uVar2 = uVar1;
        }
        (field_52344, uVar2)->SetAttackPriorityNpc();
    switchD_10010c411_caseD_2:
    }

    // 0x10010c7a0, 192 bytes, placed by class name
    // Client::SetDeferredGroundOp(int, int, int, int)
    void Client::SetDeferredGroundOp(int param_1, int param_2, int param_3, int param_4) {
        NXTPixToolkit* this_00;
        NXTPixScreen* pNVar1;
        world* this_01;
        int local_38;
        int local_34;
        undefined4 local_30[2];
        undefined4 local_28[2];

        field_7294760 = param_1;
        field_7294764 = param_2;
        if (field_52344->IsOpen() == '\0') {
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_30, param_3);
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_28, param_4);
            this_00 = (NXTPixToolkit*)GetMemoryCache();
            pNVar1 = (NXTPixScreen*)this_00->GetScreen();
            pNVar1->CalculateCanvasCoords(local_30[0], local_28[0], &local_38, &local_34);
            this_01 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            this_01->RequestGroundCoordsForOp(m_playerLevel, local_38, local_34, true);
        } else {
            std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
            dash3d::world::RequestExecuteGroundOp();
        }
    }

    // 0x10010ca50, 144 bytes, placed by class name
    // Client::CloseSubinterface(int, int, bool)
    void Client::CloseSubinterface(int param_1, int param_2, bool param_3) {
        shared_ptr* psVar2;
        undefined3 in_register_00000009;
        int local_24;

        (&field_53160, &local_24)->erase();
        if (CONCAT31(in_register_00000009, param_3) != 0) {
            rs2lib::IfType::CloseInterface(param_2);
        }
        PurgeServerActive(this, param_2);
        psVar2 = (shared_ptr*)rs2lib::IfType::Get(param_1);
        if (operator!=(psVar2, (_func_decltype_nullptr*)0)) {
            ComponentUpdated(this, psVar2);
        }
        if (field_53216 != -1) {
            RunHookImmediate(this, field_53216, 24);
        }
    }

    // 0x10010cae0, 320 bytes, placed by class name
    // Client::OpenSubinterface(int, int, int)
    int* Client::OpenSubinterface(int param_1, int param_2, int param_3) {
        undefined1* this_00;
        int* piVar2;
        shared_ptr* psVar3;
        Array* pAVar4;
        shared_ptr local_60;
        shared_ptr local_48;
        int local_34;

        local_34 = param_1;
        eastl::hash_map<int, SubInterface, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::insert(
            (int*)&local_60);
        piVar2 = (int*)
            eastl::hash_map<int, SubInterface, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, SubInterface, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&field_53160,
                                               &local_34);
        *piVar2 = param_2;
        piVar2[1] = param_3;
        IfAnimReset(this, param_2);
        psVar3 = (shared_ptr*)rs2lib::IfType::Get(local_34);
        new (&local_60) shared_ptr<dash3d::Decor>(psVar3);
        ComponentUpdated(this, &local_60);
        this_00 = field_52424;
        if (operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
            ComponentUpdated(this, (shared_ptr*)this_00);
            new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)this_00, &local_48);
            local_48.~shared_ptr();
        }
        pAVar4 = (Array*)Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>*)&rs2lib::IfType::m_list,
            (long)(local_34 >> 16));
        InterfaceCalculateSizeAndPosSubcomponents(this, pAVar4, &local_60, false);
        ScriptRunner::OnLoad(param_2);
        if (field_53216 != -1) {
            RunHookImmediate(this, field_53216, 24);
        }
        local_60.~shared_ptr();
        return piVar2;
    }

    // 0x10010cd40, 208 bytes, placed by class name
    // Client::PurgeServerActive(int)
    void Client::PurgeServerActive(int param_1) {
        bool bVar1;
        ulonglong* puVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        helpers local_60[2];
        list<console::Line, eastl::allocator> local_40[8];
        list<console::Line, eastl::allocator> local_38[8];
        ulonglong local_30;

        helpers::GetKeysIf<unsigned long long, int, int->PurgeServerActive()::__16>(local_60, &field_2506512, param_1);
        eastl::list<console::Line, eastl::allocator>::begin(local_40);
        eastl::list<console::Line, eastl::allocator>::end(local_38);
        bVar1 = eastl::operator!=((eastl*)local_40, (hashtable_iterator_base*)local_38, extraout_RDX);
        if (bVar1) {
            do {
                puVar2 = (ulonglong*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_40);
                local_30 = *puVar2;
                (&field_2506512, &local_30)->erase();
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_40);
                bVar1 = eastl::operator!=((eastl*)local_40, (hashtable_iterator_base*)local_38, extraout_RDX_00);
            } while (bVar1);
        }
        local_60->~list();
    }

    // 0x10010cf80, 64 bytes, placed by class name
    // Client::GetMinimapFlagCoord()
    Client* Client::GetMinimapFlagCoord() {
        int iVar1;
        long in_RSI;

        iVar1 = std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)(in_RSI + 8152));
        GetFlagCoord(iVar1);
        return this;
    }

    // 0x100110480, 208 bytes, placed by class name
    // Client::GetAllOverlayPositionsLoc(int, int, int, int)
    Client* Client::GetAllOverlayPositionsLoc(int param_1, int param_2, int param_3, int param_4) {
        undefined4 in_register_00000034;
        Client* this_00;
        int in_R9D;

        this_00 = (Client*)CONCAT44(in_register_00000034, param_1);
        new (this) OverlayPos();
        GetOverlayPos(this_00, param_2, param_3, param_4, in_R9D + 15);
        field_0 = this_00->field_1120480;
        field_4 = this_00->field_1120484;
        GetOverlayPos(this_00, param_2, param_3, param_4, in_R9D / 2);
        *(uint*)field_8 = this_00->field_1120480;
        *(uint*)(field_8 + 4) = this_00->field_1120484;
        GetOverlayPos(this_00, param_2, param_3, param_4, 0);
        *(uint*)(field_8 + 8) = this_00->field_1120480;
        *(uint*)(field_8 + 12) = this_00->field_1120484;
        field_8[16] = 1;
        return this;
    }

    // 0x100110840, 480 bytes, placed by class name
    // Client::GetOverlayPos(int, int, int, int)
    void Client::GetOverlayPos(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        array<int, 2048ul>* paVar8;
        int* piVar9;
        NXTPixToolkit* this_00;
        SoundInstance* this_01;
        int iVar10;
        int iVar11;
        int iVar12;
        float fVar13;

        if ((((param_2 < 13057) && (127 < param_2)) && (127 < param_3)) && (param_3 < 13057)) {
            iVar5 = GetAvH(this, param_2, param_3, param_1);
            iVar11 = param_2 - field_53088;
            iVar5 = iVar5 - (param_4 + field_53092);
            iVar12 = param_3 - field_53096;
            paVar8 = (array<int, 2048ul>*)dash3d::Pix3D::GetSinTable();
            piVar9 = (int*)std::array<int, 2048ul>::operator[](paVar8, (long)field_53100);
            iVar1 = *piVar9;
            paVar8 = (array<int, 2048ul>*)dash3d::Pix3D::GetCosTable();
            piVar9 = (int*)std::array<int, 2048ul>::operator[](paVar8, (long)field_53100);
            iVar2 = *piVar9;
            paVar8 = (array<int, 2048ul>*)dash3d::Pix3D::GetSinTable();
            piVar9 = (int*)std::array<int, 2048ul>::operator[](paVar8, (long)(int)field_53104);
            iVar3 = *piVar9;
            paVar8 = (array<int, 2048ul>*)dash3d::Pix3D::GetCosTable();
            piVar9 = (int*)std::array<int, 2048ul>::operator[](paVar8, (long)(int)field_53104);
            iVar4 = *piVar9;
            iVar6 = iVar4 * iVar12 - iVar3 * iVar11 >> 16;
            iVar10 = iVar6 * iVar2 + iVar1 * iVar5;
            if (3276799 < iVar10) {
                this_00 = (NXTPixToolkit*)GetMemoryCache();
                this_01 = (SoundInstance*)this_00->GetScreen();
                fVar13 = (float)this_01->GetSoundSpatialSizeMax();
                fVar13 = 1.0 / (fVar13 * (float)(iVar10 >> 16));
                field_1120480 = (int)((float)((iVar4 * iVar11 + iVar3 * iVar12 >> 16) * field_52752) * fVar13) +
                                (int)field_52744 / 2;
                uVar7 =
                    (int)((float)((iVar2 * iVar5 - iVar6 * iVar1 >> 16) * field_52752) * fVar13) + (int)field_52748 / 2;
                goto LAB_100110a04;
            }
        }
        field_1120480 = 4294967295;
        uVar7 = 4294967295;
    LAB_100110a04:
        field_1120484 = uVar7;
    }

    // 0x100110aa0, 32 bytes, placed by class name
    // Client::GetOverlayPos(ClientEntity*, int)
    void Client::GetOverlayPos(ClientEntity* param_1, int param_2) {
        GetOverlayPos(this, m_playerLevel, *(int*)&param_1->field_24, *(int*)((long)&param_1->field_24 + 4), param_2);
    }

    // 0x1001110e0, 464 bytes, placed by class name
    // Client::GdmEntityOverlayScriptedInner(Array<shared_ptr<rs2lib::IfType>, eastl::allocator> const&, shared_ptr<rs2lib::IfType> const&, unsigned long, OverlayPos&, int, int, int, int, int)
    void Client::GdmEntityOverlayScriptedInner(Array* param_1, shared_ptr* param_2, ulong param_3, OverlayPos* param_4,
                                               int param_5, int param_6, int param_7, int param_8, int param_9) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        long lVar4;

        InterfaceCalculateSize(this, param_2, param_7, param_8, false, false);
        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        if (*(int*)(lVar4 + 112) == 0) {
            iVar1 = *(int*)&param_4->field_8;
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
            iVar2 = *(int*)(lVar4 + 72);
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
            *(int*)(lVar4 + 48) = iVar1 - iVar2 / 2;
            iVar1 = *(int*)&param_4->field_12;
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
            iVar2 = *(int*)(lVar4 + 76);
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
            *(int*)(lVar4 + 52) = iVar1 - iVar2 / 2;
        } else {
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
            iVar1 = *(int*)(lVar4 + 112);
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
            if (iVar1 == 1) {
                *(int*)&param_4->field_4 = *(int*)&param_4->field_4 - *(int*)(lVar4 + 76);
                iVar1 = *(int*)param_4;
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
                iVar2 = *(int*)(lVar4 + 72);
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
                *(int*)(lVar4 + 48) = iVar1 - iVar2 / 2;
                uVar3 = *(undefined4*)&param_4->field_4;
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
                *(undefined4*)(lVar4 + 52) = uVar3;
            } else if (*(int*)(lVar4 + 112) == 2) {
                iVar1 = *(int*)&param_4->field_16;
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
                iVar2 = *(int*)(lVar4 + 72);
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
                *(int*)(lVar4 + 48) = iVar1 - iVar2 / 2;
                uVar3 = *(undefined4*)&param_4->field_20;
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
                *(undefined4*)(lVar4 + 52) = uVar3;
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
                *(int*)&param_4->field_20 = *(int*)&param_4->field_20 + *(int*)(lVar4 + 76);
            }
        }
        InterfaceCalculatePosition(this, param_2, param_7, param_8);
        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        InterfaceCalculateSizeAndPosSubcomponents(this, (Array*)(lVar4 + 2000), param_2, true);
        DrawLayer(this, param_1, -1, param_5, param_6, param_7 + param_5, param_8 + param_6, param_5, param_6, param_9);
        eastl::fixed_vector<unsigned long, 64ul, true, eastl::allocator>::push_back(&field_2505256);
    }

    // 0x100111890, 2496 bytes, placed by class name
    // Client::LoginDone()
    void Client::LoginDone() {
        int iVar1;
        Client* pCVar2;
        Client* this_00;
        char cVar3;
        bool bVar4;
        undefined1 uVar5;
        LoginManager* pLVar6;
        Minimap* pMVar7;
        undefined4* puVar8;
        long lVar9;
        FriendSystem* this_01;
        shared_ptr* psVar10;
        ClientVarValues* this_02;
        int* piVar11;
        int* piVar12;
        PlayerModel* this_03;
        unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>* this_04;
        unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>* puVar13;
        StockPlayerOffer* this_05;
        long* plVar14;
        ServerConnection* pSVar15;
        undefined8 uVar16;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar17;
        long lVar18;
        _func_decltype_nullptr* p_Var19;
        _func_decltype_nullptr* p_Var20;
        long lVar21;
        undefined1* puVar22;
        undefined1* puVar23;
        helpers local_188[2];
        int* local_168;
        unique_ptr<LoginManager, std::default_delete<LoginManager>>* local_160;
        allocator local_158[8];
        Client* local_150;
        undefined8 local_148;
        undefined8 uStack_140;
        undefined4 local_138;
        eastl::string local_128[64];
        eastl::string local_e8[88];
        undefined1 local_90[88];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_188) eastl::allocator("EASTL basic_string");
        new (local_90) eastl::string("Success!", local_188);
        new (&local_148) eastl::allocator("EASTL basic_string");
        eastl::string::basic_string(local_e8, "Login completed", (allocator*)&local_148);
        eastl::allocator::allocator(local_158, "EASTL basic_string");
        eastl::string::basic_string(local_128, "but logindone isn\'t implemented yet", local_158);
        TitleScreen::LoginMes((basic_string*)local_90, (basic_string*)local_e8, (basic_string*)local_128);
        eastl::string::~basic_string(local_128);
        eastl::string::~basic_string(local_e8);
        local_90->~basic_string();
        field_54848 = -1;
        field_54872 = 4294967295;
        javapal::GameShell::m_focus = 1;
        field_54876 = 1;
        field_1115864 = 18446744073709551615;
        cVar3 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if ((cVar3 == '\0') &&
            (cVar3 = eastl::basic_string<
                 char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty(),
             cVar3 == '\0')) {
            pLVar6 = (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(
                (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)(m_pMyThis + 2506376));
            pLVar6->SaveDevCredentialsToFile();
        }
        InitAndLoadPerAccountData(this);
        local_160 = (unique_ptr<LoginManager, std::default_delete<LoginManager>>*)&field_2506376;
        pLVar6 = (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(local_160);
        pLVar6->ResetLoginCredentials();
        field_53268 = 0;
        field_54156 = 0;
        field_54888 = 0;
        field_52344->Reset();
        ResetIdleTimeRemaining(this);
        (&field_8496)->ResetOnLogin();
        ChatHistory::SetTimestampMode(0);
        if (((field_55192 != 0) && (field_55192 + 900000 < field_55032)) || (field_52440 == 1)) {
            ChatHistory::ResetHistory();
        }
        field_52352 = 0;
        uVar17 = 0;
        p_Var19 = (_func_decltype_nullptr*)0;
        (field_52344, false)->SetTargetMode();
        field_2508752 = 0;
        field_53112 = 0;
        m_cameraMode = 0;
        std::unique_ptr<Heatmap, std::default_delete<Heatmap>>::operator=(
            (unique_ptr<Heatmap, std::default_delete<Heatmap>>*)&field_52920, p_Var19);
        puVar23 = &field_8152;
        pMVar7 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)puVar23);
        pMVar7->SetToggle(0);
        pMVar7 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)puVar23);
        pMVar7->SetLevel(-1);
        puVar8 = (undefined4*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)puVar23);
        *puVar8 = 0;
        lVar9 = std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)puVar23);
        *(undefined4*)(lVar9 + 4) = 0;
        (field_52344, 3)->SetAttackPriorityPlayer();
        (field_52344, 3)->SetAttackPriorityNpc();
        m_nPCCount = 0;
        ReceivePlayerPositions::Reset();
        do {
            std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, uVar17);
            shared_ptr<ClientPlayer>::reset();
            uVar17 = uVar17 + 1;
        } while (uVar17 != 2048);
        uVar17 = 0;
        do {
            std::array<shared_ptr<ClientNpc>, 65536ul>::operator[]((array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272,
                                                                   uVar17);
            shared_ptr<ClientNpc>::reset();
            uVar17 = uVar17 + 1;
        } while (uVar17 != 65536);
        m_priorityPlayerId = 4294967295;
        (&field_7164584)->clear();
        (&field_7164616)->clear();
        puVar23 = &field_1120560;
        lVar9 = 0;
        local_150 = this;
        do {
            lVar21 = 0;
            puVar22 = puVar23;
            do {
                lVar18 = 0;
                do {
                    ((puVar22 + lVar18))->clear();
                    pCVar2 = local_150;
                    lVar18 = lVar18 + 32;
                } while (lVar18 != 3328);
                lVar21 = lVar21 + 1;
                puVar22 = puVar22 + 3328;
            } while (lVar21 != 104);
            lVar9 = lVar9 + 1;
            puVar23 = puVar23 + 346112;
        } while (lVar9 != 4);
        (&local_150->field_2505008)->clear();
        this_01 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
            (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&pCVar2->field_52768);
        this_01->Reset();
        if (0 < configdecoder::VarpType::m_numDefinitions) {
            uVar17 = 0;
            do {
                psVar10 = (shared_ptr*)configdecoder::VarpType::List((int)uVar17);
                new (local_90) shared_ptr<dash3d::Decor>(psVar10);
                bVar4 = operator!=((shared_ptr*)local_90, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&ClientVarCache::m_varServ, uVar17);
                    *puVar8 = 0;
                    puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&ClientVarCache::m_var, uVar17);
                    *puVar8 = 0;
                }
                local_90->~shared_ptr();
                uVar17 = uVar17 + 1;
            } while ((long)uVar17 < (long)configdecoder::VarpType::m_numDefinitions);
        }
        pCVar2 = local_150;
        this_02 = (ClientVarValues*)std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
            (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)&local_150->field_52488);
        this_02->ResetTempVars();
        pCVar2->field_52468 = 4294967295;
        if (pCVar2->field_53216 != -1) {
            rs2lib::IfType::CloseInterface(pCVar2->field_53216);
        }
        helpers::GetKeys<int, SubInterface>(local_188, (hash_map*)&pCVar2->field_53160);
        piVar11 = (int*)local_188->HeapBeginPtr();
        piVar12 = (int*)local_188->end();
        if (piVar11 != piVar12) {
            local_168 = piVar12;
            do {
                eastl::hashtable<
                    int,
                    eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                           std::default_delete<ChatHistory::HistoryBuffer>>>,
                    eastl::allocator,
                    eastl::use_first<
                        eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                               std::default_delete<ChatHistory::HistoryBuffer>>>>,
                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::find((int*)local_90);
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar4 = eastl::operator!=((eastl*)local_90, (hashtable_iterator_base*)local_e8, extraout_RDX);
                if (bVar4) {
                    iVar1 = *piVar11;
                    lVar9 = local_90->HeapBeginPtr();
                    piVar12 = local_168;
                    CloseSubinterface(local_150, iVar1, *(int*)(lVar9 + 4), true);
                }
                piVar11 = piVar11 + 1;
            } while (piVar11 != piVar12);
        }
        this_00 = local_150;
        local_150->field_53216 = -1;
        (&pCVar2->field_53160)->clear();
        new (local_90) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)this_00->field_52424, (shared_ptr*)local_90);
        local_90->~shared_ptr();
        this_00->field_52344->Reset();
        this_03 = (PlayerModel*)shared_ptr<rs2lib::PlayerModel>::operator->(
            (shared_ptr<rs2lib::PlayerModel>*)&this_00->field_2508968);
        new (local_90) eastl::fixed_vector<int, 12ul, true, eastl::allocator>();
        new (local_e8) eastl::fixed_vector<int, 12ul, true, eastl::allocator>();
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        eastl::allocator::allocator(local_158, "EASTL fixed_vector");
        eastl::fixed_vector<int, 5ul, true, eastl::allocator>::fixed_vector(local_128, &local_148, 5, local_158);
        this_03->SetAppearance(local_90, local_e8, local_128, 0, -1);
        local_128->~fixed_vector();
        local_e8->~fixed_vector();
        local_90->~fixed_vector();
        this_00->field_52344->ResetPlayerOpChoices();
        ClientInvCache::DeleteAll();
        this_00->field_54832 = 1;
        p_Var19 = (_func_decltype_nullptr*)0;
        do {
            p_Var20 = p_Var19;
            puVar23 = (undefined1*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)&this_00->field_2506576,
                                                                       (ulong)p_Var19);
            *puVar23 = 1;
            p_Var19 = p_Var19 + 1;
        } while (p_Var19 != (_func_decltype_nullptr*)100);
        SendWindowMode(this_00);
        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::operator=(
            (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)&this_00
                ->field_52544,
            p_Var20);
        new (local_90) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<rs2lib::social::ClanSettings>::operator=(
            (shared_ptr<rs2lib::social::ClanSettings>*)&this_00->field_52552, (shared_ptr*)local_90);
        local_90->~shared_ptr();
        new (local_90) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&this_00->field_52568, (shared_ptr*)local_90)->fill();
        local_90->~shared_ptr();
        new (local_90) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<rs2lib::social::ClanChannel>::operator=(
            (shared_ptr<rs2lib::social::ClanChannel>*)this_00->field_52632, (shared_ptr*)local_90);
        local_90->~shared_ptr();
        new (local_90) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&this_00->field_52648, (shared_ptr*)local_90)->fill();
        local_90->~shared_ptr();
        this_04 =
            (unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>*)(&this_00
                                                                                                          ->field_52784)
                ->begin();
        puVar13 =
            (unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>*)(&this_00
                                                                                                          ->field_52784)
                ->end();
        for (; this_04 != puVar13; this_04 = this_04 + 8) {
            this_05 = operator_new(32);
            rs2lib::StockPlayerOffer::StockPlayerOffer(this_05);
            eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>::reset(
                this_04, this_05);
        }
        (&this_00->field_52848, (ActiveOffersReply*)0)->reset();
        pLVar6 = (LoginManager*)std::unique_ptr<LoginManager, std::default_delete<LoginManager>>::operator->(local_160);
        plVar14 = (long*)pLVar6->GetAuthWrapper();
        if (plVar14 != (long*)0) {
            pSVar15 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&this_00->field_19120);
            uVar16 = pSVar15->GetOutgoingEncryption();
            local_90->MakeClientMessage(0, uVar16);
            uVar5 = (**(code**)(*plVar14 + 440))(plVar14);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_90 + 8), uVar5);
            uVar5 = (**(code**)(*plVar14 + 432))(plVar14);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_90 + 8), uVar5);
            pSVar15 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&this_00->field_19120);
            pSVar15->SendClientMessage(local_90);
            local_90->~ClientMessage();
        }
        this_00->field_8452 = 0;
        local_188->~vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100112250, 384 bytes, placed by class name
    // Client::ReconnectDone()
    void Client::ReconnectDone() {
        Minimap* this_00;
        undefined4* puVar1;
        shared_ptr<ClientPlayer>* this_01;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        long lVar2;
        undefined1* puVar3;
        ulong uVar4;
        shared_ptr local_38;

        field_53268 = 0;
        field_52344->Reset();
        this_00 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&field_8152);
        uVar4 = 0;
        this_00->SetToggle(0);
        puVar1 = (undefined4*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&field_8152);
        *puVar1 = 0;
        do {
            new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            this_01 = (shared_ptr<ClientPlayer>*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, uVar4);
            shared_ptr<ClientPlayer>::operator=(this_01, &local_38);
            local_38.~shared_ptr();
            uVar4 = uVar4 + 1;
        } while (uVar4 != 2048);
        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<ClientPlayer>::operator=((shared_ptr<ClientPlayer>*)field_52016, &local_38);
        local_38.~shared_ptr();
        uVar4 = 0;
        do {
            this_02 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                    (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, uVar4);
            lVar2 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
            if (lVar2 != 0) {
                *(undefined4*)(lVar2 + 328) = 4294967295;
                *(undefined1*)(lVar2 + 332) = 0;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 != 65536);
        ClientInvCache::DeleteAll();
        SetMainState(this, 30);
        uVar4 = 0;
        do {
            puVar3 = (undefined1*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)&field_2506576, uVar4);
            *puVar3 = 1;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 100);
        SendWindowMode(this);
    }

    // 0x100112460, 208 bytes, placed by class name
    // Client::InitAndLoadPerAccountData()
    void Client::InitAndLoadPerAccountData() {
        ClientVarValues* pCVar1;
        ObjTagManager* pOVar2;
        eastl local_40[32];

        eastl::to_string(local_40, field_52008);
        GameShell3Cache::SetLoggedInAccountId((basic_string*)local_40);
        GameShell3Cache::CreateCache();
        m_highlightManager->ResetAll();
        m_highlightManager->LoadFromFiles();
        m_lootTrackerSaveHandler->Init();
        pCVar1 = (ClientVarValues*)std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
            (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)&field_52488);
        pCVar1->ResetForNewLogin();
        pCVar1 = (ClientVarValues*)std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
            (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)&field_52488);
        pCVar1->LoadPermVars();
        pOVar2 = (ObjTagManager*)
                     std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->((
                         unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
        pOVar2->ResetAll();
        pOVar2 = (ObjTagManager*)
                     std::unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>::operator->((
                         unique_ptr<objtags::ObjTagManager, std::default_delete<objtags::ObjTagManager>>*)&field_54720);
        pOVar2->LoadTags();
        local_40->~basic_string();
    }

    // 0x1001171a0, 480 bytes, placed by class name
    // Client::LocChangeCreate(int, int, int, LocLayer, int, int, int, unsigned char, int, int)
    void Client::LocChangeCreate(undefined4 param_1, uint param_2, undefined4 param_3, uint param_5, undefined4 param_6,
                                 undefined4 param_7, undefined4 param_8, undefined1 param_9, undefined4 param_10,
                                 undefined4 param_11) {
        undefined8* puVar2;
        undefined4* puVar3;
        long lVar4;
        LocChange* pLVar5;
        hashtable_iterator_base* extraout_RDX;
        LocChange local_b8;
        list<console::Line, eastl::allocator> local_70[8];
        list<console::Line, eastl::allocator> local_68[8];
        undefined8 local_38;

        eastl::list<console::Line, eastl::allocator>::begin(local_70);
        eastl::list<console::Line, eastl::allocator>::end(local_68);
        eastl::find_if<eastl::ListIterator<LocChange, LocChange*, LocChange&>,
                       int->LocChangeCreate(int, int, LocLayer, int, int, int, unsigned char, int, int)::__19>(
            (eastl*)&local_38, local_70, local_68, CONCAT44(param_2, param_1), CONCAT44(param_5, param_3));
        local_b8.end();
        if (eastl::operator==((eastl*)&local_38, (hashtable_iterator_base*)&local_b8, extraout_RDX)) {
            local_b8._32_8_ = 0;
            local_b8._40_4_ = 0;
            local_b8._16_8_ = 0;
            local_b8._24_8_ = 0;
            local_b8._0_8_ = 0;
            local_b8._8_8_ = 0;
            local_b8.field_44 = 31;
            local_b8._45_3_ = 0;
            local_b8.field_48._0_1_ = 0;
            local_b8.field_48._1_7_ = 72057594021150720;
            local_b8.field_56 = 0;
            eastl::list<LocChange, eastl::allocator>::emplace_back<LocChange>(
                (list<LocChange, eastl::allocator>*)&field_2505008, &local_b8);
            local_b8.end();
            puVar2 = (undefined8*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator--(
                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_b8);
            local_38 = *puVar2;
            puVar3 = (undefined4*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
            *puVar3 = param_1;
            lVar4 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
            *(char*)(lVar4 + 12) = (char)(ulong)param_5;
            lVar4 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
            *(int*)(lVar4 + 4) = (int)(ulong)param_2;
            lVar4 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
            *(undefined4*)(lVar4 + 8) = param_3;
            lVar4 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
            *(undefined4*)(lVar4 + 40) = 4294967295;
            pLVar5 = (LocChange*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
            LocChangeSetOld((Client*)this, pLVar5);
        }
        lVar4 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
        *(undefined4*)(lVar4 + 28) = param_6;
        lVar4 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
        *(undefined4*)(lVar4 + 36) = param_7;
        lVar4 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
        *(undefined4*)(lVar4 + 32) = param_8;
        lVar4 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
        *(undefined4*)(lVar4 + 48) = param_10;
        lVar4 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
        *(undefined4*)(lVar4 + 52) = param_11;
        lVar4 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
        *(undefined1*)(lVar4 + 44) = param_9;
    }

    // 0x100117380, 176 bytes, placed by class name
    // Client::LocChangeAnim(int, int, int, LocLayer, int)
    ulong Client::LocChangeAnim(undefined8 param_1_00, undefined4 param_1, undefined4 param_2, undefined4 param_3,
                                undefined4 param_5, undefined4 param_6) {
        bool bVar1;
        undefined7 extraout_var;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        list<console::Line, eastl::allocator> local_58[8];
        eastl local_50[8];
        list<console::Line, eastl::allocator> local_48[8];
        list<console::Line, eastl::allocator> local_40[12];

        eastl::list<console::Line, eastl::allocator>::begin(local_48);
        eastl::list<console::Line, eastl::allocator>::end(local_40);
        eastl::find_if<eastl::ListIterator<LocChange, LocChange*, LocChange&>,
                       int->LocChangeAnim(int, int, LocLayer, int)::__20>(
            local_50, local_48, local_40, CONCAT44(param_2, param_1), CONCAT44(param_5, param_3));
        eastl::list<console::Line, eastl::allocator>::end(local_58);
        bVar1 = eastl::operator!=(local_50, (hashtable_iterator_base*)local_58, extraout_RDX);
        if (bVar1) {
            lVar2 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                (ListIterator<console::Line, console::Line*, console::Line&>*)local_50);
            *(undefined4*)(lVar2 + 40) = param_6;
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x10013b6c0, 176 bytes, placed by class name
    // Client::MainLoop()::$_2::operator()(BaseApp*) const
    /* Client::MainLoop()::$_2::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const */

    void Client::MainLoop()::$_2::operator()(BaseApp* param_1) {
        Input* this_00;
        NpcUID* extraout_RDX;
        basic_string<char, BucketAllocatorEASTL> local_40[24];
        eastl local_28[8];

        this_00 = (Input*)(*(code*)param_1->field_0[11])(param_1);
        if (this_00->IsOnScreenKeyboardVisible() == '\0') {
            if (*this != (__2)0) {
                eastl::destruct<highlight::NpcUID*>(local_28, (NpcUID*)"EASTL basic_string", extraout_RDX);
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_40,
                                                                              (BucketAllocatorEASTL*)"");
                this_00->ShowOnScreenKeyboard(0, local_40, 4294967295, 0);
                eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_40);
            }
        } else if (*this == (__2)0) {
            jag::input::Input::HideOnScreenKeyboard();
        }
    }

    // 0x100143df0, 16 bytes, placed by class name
    // Client::ProcessSideBarRequests()::$_4::operator()(sidebars::SideBarData&) const
    /* Client::ProcessSideBarRequests()::$_4::TEMPNAMEPLACEHOLDERVALUE(sidebars::SideBarData&)
   const */

    undefined4 Client::ProcessSideBarRequests()::$_4::operator()(SideBarData* param_1) {
        return CONCAT31((int3)((uint) * *(int**)this >> 8), **(int**)this == param_1->field_0);
    }

    // 0x100143e50, 16 bytes, placed by class name
    // Client::ProcessSideBarRequests()::$_5::operator()(sidebars::SideBarData&) const
    /* Client::ProcessSideBarRequests()::$_5::TEMPNAMEPLACEHOLDERVALUE(sidebars::SideBarData&)
   const */

    undefined4 Client::ProcessSideBarRequests()::$_5::operator()(SideBarData* param_1) {
        return CONCAT31((int3)((uint) * (int*)this >> 8), *(int*)this == param_1->field_0);
    }

    // 0x100146660, 48 bytes, placed by class name
    // Client::StartRebuild(int, int, bool)::$_6::operator()(LocChange&) const
    /* Client::StartRebuild(int, int,
   bool)::$_6::TEMPNAMEPLACEHOLDERVALUE(LocChange&) const */

    undefined4 Client::StartRebuild(int, int, bool)::$_6::operator()(LocChange* param_1) {
        uint uVar1;
        uint uVar2;

        uVar1 = *(int*)&param_1->field_4 - *(int*)this;
        *(uint*)&param_1->field_4 = uVar1;
        uVar2 = *(int*)&param_1->field_8 - *(int*)(this + 4);
        *(uint*)&param_1->field_8 = uVar2;
        return CONCAT31((int3)(uVar1 >> 8), 103 < (int)uVar2 || (103 < (int)uVar1 || (int)(uVar1 | uVar2) < 0));
    }

    // 0x100147ce0, 32 bytes, placed by class name
    // Client::Vibrate(hal::Haptics::Preset)::$_7::operator()(BaseApp*) const
    /* Client::Vibrate(hal::Haptics::Preset)::$_7::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const */

    void Client::Vibrate(hal::Haptics::Preset)::$_7::operator()(BaseApp* param_1) {
        undefined8 uVar1;

        uVar1 = Instance();
        hal::Haptics::Vibrate(uVar1, field_0);
    }

    // 0x10014adb0, 176 bytes, placed by class name
    // Client::SteamShop()::$_9::operator()() const
    /* Client::SteamShop()::$_9::TEMPNAMEPLACEHOLDERVALUE() const */

    uint Client::SteamShop()::$_9::operator()() {
        long* plVar1;
        undefined4 uVar2;
        uint uVar3;
        eastl::string local_50[32];
        allocator local_30[8];

        (**(code**)(**(long**)this + 504))();
        uVar2 = (**(code**)(**(long**)this + 512))();
        uVar3 = jag::auth::TokenAuthLoginHandler::IsFinished(uVar2);
        if ((char)uVar3 != '\0') {
            plVar1 = *(long**)this;
            eastl::allocator::allocator(local_30, "EASTL basic_string");
            eastl::string::basic_string(local_50, "store/runescape/keys", local_30);
            (**(code**)(*plVar1 + 144))(plVar1, 10, local_50);
            eastl::string::~basic_string(local_50);
        }
        return uVar3 ^ 1;
    }

    // 0x10014f1d0, 112 bytes, placed by class name
    // Client::ClearHookQueueMouseEvents(bool)::$_14::operator()(HookReq&) const
    /* Client::ClearHookQueueMouseEvents(bool)::$_14::TEMPNAMEPLACEHOLDERVALUE(HookReq&)
   const */

    ulong Client::ClearHookQueueMouseEvents(bool)::$_14::operator()(HookReq* param_1) {
        char cVar1;
        long lVar2;
        undefined8 unaff_R14;
        ulong uVar3;

        if (param_1->field_24 == '\0') {
        LAB_10014f225:
            uVar3 = 0;
        } else {
            if (*this != (__14)0) {
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&param_1->field_32);
                cVar1 = Array<HookArg, eastl::allocator>::operator==((Array<HookArg, eastl::allocator>*)param_1,
                                                                     (Array*)(lVar2 + 1360));
                if (cVar1 == '\0')
                    goto LAB_10014f225;
            }
            uVar3 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
            if (*this == (__14)0) {
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&param_1->field_32);
                *(undefined1*)(lVar2 + 2024) = 0;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100153bb0, 48 bytes, placed by class name
    // Client::LocChangeCreate(int, int, int, LocLayer, int, int, int, unsigned char, int, int)::$_19::operator()(LocChange&) const
    /* Client::LocChangeCreate(int, int, int, LocLayer, int, int, int,
   unsigned char, int, int)::$_19::TEMPNAMEPLACEHOLDERVALUE(LocChange&) const */

    undefined4 Client::LocChangeCreate(int, int, int, LocLayer, int, int, int, unsigned char, int,
                                       int)::$_19::operator()(LocChange* param_1) {
        if (((*(int*)param_1 == *(int*)this) && (*(int*)&param_1->field_4 == *(int*)(this + 4))) &&
            (*(int*)&param_1->field_8 == *(int*)(this + 8))) {
            return CONCAT31((int3)((uint) * (int*)&param_1->field_8 >> 8), (__19)param_1->field_12 == this[12]);
        }
        return 0;
    }

    // 0x100153d00, 48 bytes, placed by class name
    // Client::LocChangeAnim(int, int, int, LocLayer, int)::$_20::operator()(LocChange&) const
    /* Client::LocChangeAnim(int, int, int, LocLayer,
   int)::$_20::TEMPNAMEPLACEHOLDERVALUE(LocChange&) const */

    undefined4 Client::LocChangeAnim(int, int, int, LocLayer, int)::$_20::operator()(LocChange* param_1) {
        if (((*(int*)param_1 == *(int*)this) && (*(int*)&param_1->field_4 == *(int*)(this + 4))) &&
            (*(int*)&param_1->field_8 == *(int*)(this + 8))) {
            return CONCAT31((int3)((uint) * (int*)&param_1->field_8 >> 8), (__20)param_1->field_12 == this[12]);
        }
        return 0;
    }

    // 0x100153d30, 16 bytes, placed by class name
    // Client::LocChangePostBuildCorrect()::$_21::operator()(LocChange&) const
    /* Client::LocChangePostBuildCorrect()::$_21::TEMPNAMEPLACEHOLDERVALUE(LocChange&)
   const */

    bool Client::LocChangePostBuildCorrect()::$_21::operator()(LocChange* param_1) {
        return *(int*)(this + 52) != -1;
    }

    // 0x100153d40, 304 bytes, placed by class name
    // Client::LocChangeDoQueue()::$_22::operator()(LocChange&) const
    /* Client::LocChangeDoQueue()::$_22::TEMPNAMEPLACEHOLDERVALUE(LocChange&)
   const */

    undefined8 Client::LocChangeDoQueue()::$_22::operator()(LocChange* param_1) {
        int iVar1;
        Client* pCVar2;
        char cVar3;

        pCVar2 = *(Client**)this;
        iVar1 = *(int*)((long)&param_1->field_48 + 4);
        if (0 < iVar1) {
            *(int*)((long)&param_1->field_48 + 4) = iVar1 + -1;
        }
        if (*(int*)((long)&param_1->field_48 + 4) == 0) {
            if ((*(int*)&param_1->field_16 < 0) ||
                (cVar3 = ClientBuild::ChangeLocAvailable(*(int*)&param_1->field_16, *(int*)&param_1->field_24),
                 cVar3 != '\0')) {
                LocChangeUnchecked(pCVar2, *(undefined4*)param_1, param_1->field_12, *(undefined4*)&param_1->field_4,
                                   *(undefined4*)&param_1->field_8, *(undefined4*)&param_1->field_16,
                                   *(undefined4*)&param_1->field_20, *(undefined4*)&param_1->field_24,
                                   *(undefined4*)&param_1->field_40);
                return 1;
            }
        } else {
            if (0 < *(int*)&param_1->field_48) {
                *(int*)&param_1->field_48 = *(int*)&param_1->field_48 + -1;
            }
            if ((((*(int*)&param_1->field_48 == 0) && (0 < *(int*)&param_1->field_4)) &&
                 (*(int*)&param_1->field_8 < 103)) &&
                (((0 < *(int*)&param_1->field_8 && (*(int*)&param_1->field_4 < 103)) &&
                  ((*(int*)&param_1->field_28 < 0 ||
                    (cVar3 = ClientBuild::ChangeLocAvailable(*(int*)&param_1->field_28, *(int*)&param_1->field_36),
                     cVar3 != '\0')))))) {
                LocChangeUnchecked(pCVar2, *(undefined4*)param_1, param_1->field_12, *(undefined4*)&param_1->field_4,
                                   *(undefined4*)&param_1->field_8, *(undefined4*)&param_1->field_28,
                                   *(undefined4*)&param_1->field_32, *(undefined4*)&param_1->field_36,
                                   *(undefined4*)&param_1->field_40);
                *(undefined4*)&param_1->field_48 = 4294967295;
                iVar1 = *(int*)&param_1->field_16;
                if ((*(int*)&param_1->field_28 == iVar1) && (iVar1 == -1)) {
                    return 1;
                }
                if (((*(int*)&param_1->field_28 == iVar1) &&
                     (*(int*)&param_1->field_32 == *(int*)&param_1->field_20)) &&
                    (*(int*)&param_1->field_36 == *(int*)&param_1->field_24)) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100157dc0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.139
    void ___cxx_global_var_init_139() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&Client::BETA_CACHE_DIR_SUFFIX) eastl::string("beta", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &Client::BETA_CACHE_DIR_SUFFIX, 4294967296);
    }

    // 0x100157e20, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.297
    void ___cxx_global_var_init_297() {
        Client::VIEWPORT_FOV_EXPONENT_BASE_LOG = 4604418534313441775;
    }

    // 0x100157e40, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.299
    void ___cxx_global_var_init_299() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&Client::m_gitBranchName) eastl::string("usurper-216", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &Client::m_gitBranchName, 4294967296);
    }

    // 0x100157ea0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.301
    void ___cxx_global_var_init_301() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&Client::m_gitCommitHash) eastl::string("b5f9a203463a87d88338bff708d461408f61f275", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &Client::m_gitCommitHash, 4294967296);
    }

} // namespace jag::oldscape

namespace jag::graphics {
    // 0x1000e5b10: the linker folded this into oldscape::rs2lib::CoordZoneSource::Unset(), which has identical code
    ClippingRectangle::ClippingRectangle();

} // namespace jag::graphics

namespace jag::game {
    // 0x1000e5b50: the linker folded this into oldscape::rs2lib::CoordMapSquare::operator==(oldscape::rs2lib::CoordMapSquare const&) const, which has identical code
    PlayerModelWearSlot::operator==(PlayerModelWearSlot const&) const;

} // namespace jag::game

namespace jag::oldscape::jagex3 {
    // 0x1000e5b50: the linker folded this into rs2lib::CoordMapSquare::operator==(rs2lib::CoordMapSquare const&) const, which has identical code
    Js5RequestKey::operator==(Js5RequestKey const&) const;

} // namespace jag::oldscape::jagex3

namespace jag::oldscape::graphics {
    // 0x100102480, 16 bytes, placed by neighbouring functions
    // TransparencyToAlpha(int)
    uint TransparencyToAlpha(int param_1) {
        return ~param_1 & 255;
    }

} // namespace jag::oldscape::graphics
