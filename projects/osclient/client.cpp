// projects/osclient/client.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "client.h"
#include "libs/game/runetek5/player/PlayerModel.h"
#include "libs/graphics/runetek7/model/GeometryQueryManager.h"
#include "libs/oldscape/jagex3/midi2/miditask/FadeInTask.h"

namespace jag::oldscape {
    // 0x100d3d7b0
    int32_t Client::FACING_MAP[8] = {768, 1024, 1280, 512, 1536, 256, 0, 1792};

    // 0x100d3d848
    int32_t Client::DEFAULT_MINIMUM_INGAME_ASPECT_RATIO[42] = {
        1071877708, 0,          -1077342245, 1059760811, 1125515264, 861323157,  1176256512, 0,          -1717986918,
        1070176665, -842150451, -842150451,  -842150451, -842150451, -572662307, -572662307, -572662307, -572662307,
        0,          0,          -1,          -1,         1,          -1,         1,          -1,         -1,
        0,          0,          0,           0,          0,          0,          0,          0,          1,
        2,          3,          4,           5,          0,          0,
    };

    // 0x100f36fb8
    const char* Client::LOG_FILE_DIR = "logs";

    // 0x100f8a780, set at startup by ___cxx_global_var_init.139
    eastl::string Client::BETA_CACHE_DIR_SUFFIX = "beta";

    // 0x100f8a7a0
    int64_t Client::m_pMyThis;

    // 0x100f8a7d0, set at startup by ___cxx_global_var_init.297
    int64_t Client::VIEWPORT_FOV_EXPONENT_BASE_LOG = 4604418534313441775;

    // 0x100f8a7d8, set at startup by ___cxx_global_var_init.299
    eastl::string Client::m_gitBranchName = "usurper-216";

    // 0x100f8a7f8, set at startup by ___cxx_global_var_init.301
    eastl::string Client::m_gitCommitHash = "b5f9a203463a87d88338bff708d461408f61f275";

    // 0x1000b75a0
    uint64_t Client::GetClientNpc(int arg1) {
        if ((unsigned int)arg1 < 65536) {
            return ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_55272[(long)arg1])->end();
        }
        return 0;
    }

    // 0x1000c14b0
    void Client::GetFinalAmbientVolume() {
        int iVar1 = ((GameOptions*)field_8384.operator->())->GetAmbientVolume();
        auto this_01 = field_8376.operator->();
        jag::math::RoundFloatToInt((float)this_01->GetMasterVolume() * (float)((iVar1 * 127) / 100));
    }

    // 0x1000c1520
    Js5* Client::GetJagFx() {
        if (m_pJagFx == nullptr) {
            LogAssert("m_pJagFx != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      9323, nullptr);
        }
        return (Js5*)m_pJagFx;
    }

    // 0x1000c1770
    Client::Client(OSClient& osClient) : javapal::GameShell(osClient) {
        uint8_t local_d8[48];
        uint64_t local_a8;
        uint64_t uStack_a0;

        new (&field_8144) social::DisplayNameQueryable();
        *(uint8_t***)this = &PTR_GetApplicationContext_100ef3fe0;
        field_8144 = &PTR_GetDisplayName_100ef4040;
        field_8152.unique_ptr<true, void>();
        *(uint16_t*)&field_8160 = 257;
        new (&field_8168) eastl::fixed_vector<sidebars::SideBarData, 8ul, false, eastl::dummy_allocator>();
        new (&field_8256) eastl::fixed_vector<sidebars::SideBarRequest, 8ul, false, eastl::dummy_allocator>();
        field_8376.unique_ptr<true, void>();
        field_8384.unique_ptr<true, void>();
        field_8392.unique_ptr<true, void>();
        field_8400.unique_ptr<true, void>();
        new (&field_8408) shared_ptr();
        field_8424 = false;
        field_8432 = (Language*)Language::EN;
        field_8440 = (ModeGame*)ModeGame::OLDSCAPE;
        field_8448 = 2;
        field_8452 = 0;
        new (&field_8456) eastl::string();
        ___bzero(&field_8488, 10568);
        new (&field_8496) ClientInputHandler();
        field_19056.XPlotBlender<int>(4294967295);
        field_19060.XPlotBlender<int>(4294967295);
        field_19064.XPlotBlender<int>(4294967295);
        field_19068.XPlotBlender<int>(4294967295);
        new (field_19072) InputFieldKeyboardHandler();
        field_19104 = '\0';
        field_19108 = -1;
        field_19112 = -1;
        field_19116 = -1;
        field_19120.unique_ptr<true, void>();
        new (local_d8) eastl::allocator("EASTL hash_map");
        new (&field_19128) eastl::hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash>(*local_d8);
        field_19184.unique_ptr<true, void>();
        field_19192 = 1;
        field_19200.unique_ptr<true, void>();
        field_19208.unique_ptr<true, void>();
        new (&field_19216) shared_ptr();
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>* this_03 =
            (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&field_19232;
        long lVar3 = 1;
        do {
            new (this_03) shared_ptr();
            lVar3 = lVar3 + 1;
            this_03 = this_03 + 16;
        } while (lVar3 != 2048);
        field_51984 = 0;
        field_51988 = -1;
        field_51992 = 0;
        m_accountID = 18446744073709551615;
        new (&field_52016) shared_ptr();
        *(uint16_t*)&field_52032 = 256;
        field_52036 = 0;
        field_52344 = nullptr;
        field_52352 = 0;
        field_52356 = 0;
        field_52360 = 0;
        field_52364 = 0;
        new (&field_52368) eastl::string();
        m_cameraMode = 0;
        field_52404 = 50;
        field_52408 = 25769803788;
        field_52416 = 1;
        new (&field_52424) shared_ptr();
        field_52440 = 0;
        field_52448 = 0;
        field_52456 = 1;
        field_52460 = 1071877708;
        field_52464 = 0;
        field_52468 = 4294967295;
        new (&field_52472) shared_ptr();
        field_52488.unique_ptr<true, void>();
        new (&field_52496) shared_ptr();
        new (&field_52512) shared_ptr();
        new (&field_52528) shared_ptr();
        field_52544.unique_ptr<true, void>();
        new (&field_52552) shared_ptr();
        new (&field_52568) std::array<shared_ptr<rs2lib::social::ClanSettings>, 4ul>();
        new (&field_52632) shared_ptr();
        new (&field_52648) std::array<shared_ptr<rs2lib::social::ClanChannel>, 4ul>();
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
        field_52768.unique_ptr<true, void>();
        field_52776.unique_ptr<true, void>();
        new (&field_52784) std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer>, 8ul>();
        new (&field_52848) eastl::unique_ptr();
        field_52856 = 0;
        new (&field_52872) StockPriceCache();
        new (&field_52880) eastl::vector<short>();
        field_52912 = 0;
        field_52920.unique_ptr<true, void>();
        field_52928 = 0;
        new (field_52936) datastructure::RollingAverageCounter(15);
        field_52992 = 0;
        new (&field_52996) CinemaCameraData();
        field_53064.unique_ptr<true, void>();
        field_53072.unique_ptr<true, void>();
        field_53080.unique_ptr<true, void>();
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
        field_53132.XPlotBlender<int>(0);
        field_53136.XPlotBlender<int>(0);
        *(uint64_t*)&field_53140 = 0;
        field_53148 = 0;
        new (local_d8) eastl::allocator("EASTL hash_map");
        new (field_53160) eastl::hash_map<int, SubInterface>(*local_d8);
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
        *(uint16_t*)&field_53264 = 0;
        *(uint64_t*)&field_53268 = 0;
        field_53276 = 0;
        *(uint32_t*)((long)&field_53252 + 3) = 0;
        field_53280 = 71776119077994240;
        field_53288 = 281470681808640;
        field_53296 = 72057589759672575;
        field_53304 = 0;
        field_53312 = 0;
        new (&field_53320) eastl::string();
        *(uint64_t*)&field_54152 = 0;
        field_54160 = 18446744069414584320;
        field_54168 = 0;
        field_54176.unique_ptr<true, void>();
        new (&field_54184) shared_ptr();
        new (&field_54200) shared_ptr();
        field_54216 = '\0';
        new (&field_54224) eastl::string();
        field_54256 = 0;
        field_54260 = 0;
        field_54264 = 0;
        field_54272.unique_ptr<true, void>();
        new (&field_54280) eastl::string();
        new (&field_54312) eastl::string();
        field_54344 = 0;
        new (local_d8) eastl::allocator("EASTL basic_string");
        new (&field_54352) eastl::string("http://oldschool.runescape.com/jav_config.ws?m=0", local_d8);
        field_54384 = 0;
        field_54392 = nullptr;
        field_54400 = nullptr;
        field_54408 = nullptr;
        field_54416 = nullptr;
        m_pJagFx = nullptr;
        field_54432 = nullptr;
        m_pMidi = nullptr;
        field_54448 = nullptr;
        m_pSprites = nullptr;
        field_54464 = nullptr;
        field_54472 = nullptr;
        field_54480 = nullptr;
        m_pClientScripts = nullptr;
        field_54496 = nullptr;
        field_54504 = nullptr;
        field_54512 = nullptr;
        field_54520 = nullptr;
        field_54528 = nullptr;
        field_54536 = nullptr;
        field_54544 = nullptr;
        field_54552 = nullptr;
        field_54560.unique_ptr<true, void>();
        new (local_d8) eastl::allocator("EASTL basic_string");
        new (&field_54568) eastl::string("unknown", local_d8);
        new (local_d8) eastl::allocator("EASTL basic_string");
        new (&field_54600) eastl::string("unknown", local_d8);
        new (local_d8) eastl::allocator("EASTL basic_string");
        new (&field_54632) eastl::string("unknown", local_d8);
        new (local_d8) eastl::allocator("EASTL basic_string");
        new (&field_54664) eastl::string("unknown", local_d8);
        field_54696 = -1;
        m_serverMajorVersion = 216;
        field_54704 = 1;
        field_54708 = 0;
        field_54712 = 0;
        field_54716 = 0;
        field_54720.unique_ptr<true, void>();
        new (field_54728) movement::ExactTileDestination();
        field_54752 = osClient;
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
        field_54856.XPlotBlender<int>(4294967295);
        field_54860.XPlotBlender<int>(4294967295);
        field_54864 = 0;
        field_54872 = 4294967295;
        *(uint16_t*)&field_54876 = 257;
        field_54880 = 0;
        field_54884 = 0;
        *(uint64_t*)&field_54888 = 0;
        *(uint64_t*)&field_54896 = 0;
        field_54904 = 0;
        field_54908 = 0;
        field_54912 = 0;
        field_54916 = 0;
        new (&field_54920) eastl::string();
        field_54952 = 0;
        *(uint64_t*)&field_54956 = 0;
        field_54964 = 0;
        field_54972 = 0;
        new (&field_54980) defaults::GraphicsDefaults();
        field_55032 = 0;
        *(uint64_t*)&field_55040 = 0;
        field_55048 = 0;
        field_55056 = 2;
        new (&field_55064) eastl::string();
        new (&field_55096) eastl::string();
        new (&field_55128) eastl::string();
        new (&field_55160) eastl::string();
        field_55192 = 0;
        new (&field_55216) Array<unsigned char>();
        new (&field_55240) eastl::vector<int>();
        new (&field_55272) std::array<shared_ptr<ClientNpc>, 65536ul>();
        m_nPCCount = 0;
        new (&field_1103856) Array<int>(65536);
        field_1103880 = 0;
        new (&field_1103888) Array<int>(250);
        field_1103912 = 0;
        field_1103920 = 0;
        new (&field_1103928) eastl::string();
        new (&field_1103960) eastl::string();
        new (&field_1103992) eastl::string();
        new (&field_1104024) eastl::string();
        new (&field_1104056) eastl::string();
        new (&field_1104088) eastl::string();
        new (&field_1104120) shared::ConnectionTelemetry();
        new (&field_1104184) EndpointURLProvider(*this);
        field_1104200.unique_ptr<true, void>();
        new (&field_1104208) shared_ptr();
        new (&field_1104224) shared_ptr();
        new (&field_1104240) shared_ptr();
        new (&field_1104256) shared_ptr();
        new (&field_1104272) Array<rs2lib::CoordMapSquare>();
        new (&field_1104296) Array<int>();
        new (&field_1104320) Array<int>();
        new (&field_1104344) Array<int>();
        new (&field_1104368) Array<std::array<int, 4ul>>();
        new (&field_1104392) Array<shared_ptr<PacketJ<Array<unsigned char>>>>();
        new (&field_1104416) Array<shared_ptr<PacketJ<Array<unsigned char>>>>();
        new (&field_1104440) Array<shared_ptr<PacketJ<Array<unsigned char>>>>();
        m_mapBuildRegionMode = false;
        new (&field_1104468) std::array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>();
        ___bzero(&field_1115284, 412);
        new (&field_1115696) shared_ptr();
        new (&field_1115712) Array<graphics::Pix32>();
        new (&field_1115736) Array<graphics::Pix32>();
        new (&field_1115760) Array<graphics::Pix32>();
        new (&field_1115784) shared_ptr();
        new (&field_1115800) Array<graphics::Pix8>();
        new (&field_1115824) shared_ptr();
        field_1115840 = 2301979;
        field_1115844 = 5063219;
        field_1115848 = 3353893;
        field_1115852 = 7759444;
        field_1115856 = 0;
        *(uint64_t*)&field_1115860 = 0;
        *(uint64_t*)((long)&field_1115864 + 4) = 0;
        new (&field_1117280) std::array<eastl::vector<int>, 50ul>();
        new (&field_1118880) std::array<eastl::string, 50ul>();
        field_1120480 = -1;
        field_1120484 = -1;
        field_1120488.unique_ptr<true, void>();
        field_1120496.unique_ptr<true, void>();
        new (field_1120504) shared_ptr();
        field_1120520 = 0;
        new (&field_1120528) Array<int>(1000);
        m_priorityPlayerId = 4294967295;
        list<shared_ptr<ClientObj>>* this_05 = (list<shared_ptr<ClientObj>>*)&field_1120560;
        lVar3 = 0;
        do {
            new (this_05) eastl::list<shared_ptr<ClientObj>>();
            lVar3 = lVar3 - 32;
            this_05 = this_05 + 32;
        } while (lVar3 != -1384448);
        new (&field_2505008) eastl::list<LocChange>();
        m_usingOneButtonMouse = false;
        field_2505044 = 18446744073709551615;
        field_2505052 = 4294967295;
        new (&field_2505056) shared_ptr();
        new (&field_2505072) shared_ptr();
        field_2505088 = 214748364800;
        field_2505096 = 0;
        field_2505100 = 0;
        new (&field_2505104) shared_ptr();
        new (&field_2505120) shared_ptr();
        field_2505136.XPlotBlender<int>(0);
        field_2505140.XPlotBlender<int>(0);
        new (&field_2505144) shared_ptr();
        field_2505164.XPlotBlender<int>(4294967295);
        field_2505168.XPlotBlender<int>(4294967295);
        field_2505176.XPlotBlender<int>(4294967295);
        field_2505180.XPlotBlender<int>(4294967295);
        field_2505184 = 0;
        field_2505188 = 0;
        field_2505192 = nullptr;
        field_2505200.XPlotBlender<int>(0);
        field_2505204->XPlotBlender<int>(0);
        new ((field_2505204 + 4)) shared_ptr();
        field_2505224 = 0;
        field_2505225 = 0;
        field_2505228.XPlotBlender<int>(0);
        field_2505232.XPlotBlender<int>(0);
        field_2505236.XPlotBlender<int>(0);
        field_2505240.XPlotBlender<int>(0);
        field_2505244.XPlotBlender<int>(0);
        field_2505248.XPlotBlender<int>(0);
        new (&field_2505256) eastl::fixed_vector<unsigned long, 64ul>();
        field_2505808 = -1;
        field_2505940 = 0;
        field_2506072 = 0;
        field_2506204 = 0;
        *(uint64_t*)&field_2506336 = 0;
        field_2506344 = 0;
        field_2506348 = 0;
        field_2506352 = 0;
        field_2506356 = 0;
        field_2506360 = 0;
        field_2506368 = 0;
        field_2506376.unique_ptr<true, void>();
        new (&field_2506384) eastl::list<HookReq>();
        new (&field_2506416) eastl::list<HookReq>();
        new (&field_2506448) eastl::list<HookReq>();
        new (&field_2506480) eastl::list<InterfaceMouseEvent>();
        new (local_d8) eastl::allocator("EASTL hash_map");
        new (field_2506512) eastl::hash_map<unsigned long long, int>(*local_d8);
        field_2506568 = 0;
        field_2506572 = -2;
        field_2508476 = 2;
        field_2508480.unique_ptr<true, void>();
        field_2508488.unique_ptr<true, void>();
        new (&field_2508496) SystemSettings();
        field_2508656 = 0.0;
        field_2508660 = 0;
        new (&field_2508664) shared_ptr();
        field_2508680 = 0;
        new (&field_2508688) std::array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>();
        field_2508736.unique_ptr<true, void>();
        field_2508744.unique_ptr<true, void>();
        field_2508752 = 0;
        new (&field_2508760) Array<int>(50);
        new (&field_2508784) Array<int>(50);
        new (&field_2508808) Array<int>(50);
        new (&field_2508832) Array<int>(50);
        new (&field_2508856) Array<shared_ptr<sound::JagFX>>(50);
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
        make_shared<rs2lib::PlayerModel>((ReturnValue*)&field_2508968);
        field_2508984 = -1;
        field_2508988 = 4294967295;
        new (field_2508992) game::HostPlatformStats();
        m_pWorldmap = nullptr;
        new (m_highlightManager) highlight::HighlightManager();
        field_6814736 = 0;
        new (local_d8) movement::CollisionMap(104, 104);
        new ((local_d8 + 40)) movement::CollisionMap(104, 104);
        CollisionMap local_88(104, 104);
        CollisionMap local_60(104, 104);
        new (&field_6814744) eastl::fixed_vector<movement::CollisionMap, 4ul>(local_d8, *4);
        lVar3 = 120;
        do {
            ((local_d8 + lVar3))->~CollisionMap();
            lVar3 = lVar3 - 40;
        } while (lVar3 != -40);
        new (field_6814944) datastructure::RollingAverageCounter(15);
        new (field_6815000) datastructure::RollingAverageCounter(15);
        new (m_entityOverlays) EntityOverlays();
        new (m_lootTrackerSaveHandler) loottracker::LootTrackerSaveHandler();
        new (&field_7164584) eastl::list<shared_ptr<ClientProj>>();
        new (&field_7164616) eastl::list<shared_ptr<MapSpotAnim>>();
        field_7164648 = 0;
        new (field_7164656) Skybox();
        field_7164752 = false;
        field_7164753 = 0;
        new (&field_7164760) Fog();
        field_7164880 = 257;
        field_7164882 = 0;
        lVar3 = 7208148;
        do {
            new ((field_8 + lVar3 - 8)) ClientEntityID();
            lVar3 = lVar3 + 8;
        } while (lVar3 != 7294676);
        field_7294676 = 0;
        field_7294680 = 0;
        new (&field_7294688) eastl::vector<Client::LandscapeTileOutlineEntry, BucketAllocatorEASTL>();
        field_7294712 = 8880;
        field_7294748 = 0;
        field_7294752 = 0;
        field_7294756 = 0;
        field_7294716 = 0;
        field_7294720 = 0;
        field_7294724 = 0.0;
        field_7294728 = 0;
        *(uint64_t*)((long)&field_7294728 + 1) = 0;
        *(uint64_t*)((long)&field_7294736 + 1) = 0;
        field_7294760 = -1;
        field_7294764 = -1;
        field_7294768 = 1;
        new (&field_7294776)
            eastl::fixed_hash_map<unsigned long long, jstring::PixfontGeneric, 8ul, 9ul, true,
                                  eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                *local_d8, local_120);
        new (&field_7305840) LRUHashCache<graphics::Pix32, 8ul, 9ul, false, unsigned long long>(8, "LRUHashCache");
        new (local_d8) eastl::allocator("EASTL hash_map");
        new (&field_7306736) eastl::hash_map<long long, Client::ScheduledFunction>(*local_d8);
        field_7306792 = 0;
        field_7306800 = std::make_unique<OSClientConsole, Client&>(*this);
        UpdateUserDetailsV2* this_04 = (UpdateUserDetailsV2*)&field_7306808;
        new (this_04) eastl::vector<int>();
        m_frozen = false;
        field_7306841 = '\0';
        if (m_pMyThis != nullptr) {
            LogAssert("m_pMyThis == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      185, nullptr);
        }
        m_pMyThis = this;
        int iVar1 = this_04->GetID();
        bool bVar4 = true;
        if (iVar1 != 7) {
            iVar1 = this_04->GetID();
            bVar4 = iVar1 == 8;
        }
        field_8425 = bVar4;
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
        *(uint64_t*)&field_1104120 = local_d8._0_8_;
        field_1104128 = local_d8._8_8_;
        auto this_00 = logger::default_logger();
        auto this_01 = this_00->GetLogStreams();
        new (local_d8) eastl::fixed_string<char, 32>("Render");
        map<eastl::fixed_string<char, 32>, logger::LogLevel>* this_02 =
            (map<eastl::fixed_string<char, 32>, logger::LogLevel>*)(*this_01)[*local_d8];
        local_120 = eastl::fixed_string<char, 32>("Spike");
        uint32_t* puVar2 = (uint32_t*)(*this_02)[local_120];
        *puVar2 = 0;
    }

    // 0x1000c4cb0
    unsigned long Client::ReadJavConfigParameters() {
        uint8_t* str1;
        bool cVar1;
        unsigned int uVar3;
        int iVar4;
        UpdateUserDetailsV2* this_00;
        char* pcVar6;
        ModeGame* pMVar7;
        unsigned int uVar8;
        UpdateUserDetailsV2* this_02;
        ReturnValue local_58;

        eastl::string* local_b8 = (eastl::string*)&field_54664;
        eastl::string* local_b0 = (eastl::string*)&field_54632;
        int* local_60 = &m_serverMajorVersion;
        int* local_38 = &field_54704;
        eastl::string* local_a8 = (eastl::string*)&field_54600;
        eastl::string* local_a0 = (eastl::string*)&field_54568;
        eastl::string* local_98 = (eastl::string*)&field_1104056;
        eastl::string* local_90 = (eastl::string*)&field_1103992;
        eastl::string* local_88 = (eastl::string*)&field_1103960;
        eastl::string* local_80 = (eastl::string*)&field_1103928;
        eastl::string* local_78 = (eastl::string*)&field_1104024;
        eastl::string* local_70 = (eastl::string*)&field_54792;
        bool bVar9 = true;
        eastl::string* local_68 = (eastl::string*)&field_54280;
        unsigned int uVar2 = 0;
        do {
            local_58 = eastl::string();
            local_58.append_sprintf("%i", (unsigned long)uVar2);
            this_00 = (UpdateUserDetailsV2*)GetParameter(local_58);
            this_02 = this_00;
            cVar1 = this_00->empty();
            if (!cVar1) {
                switch (uVar2) {
                case 2:
                    *local_78 = this_00;
                    break;
                case 3:
                    iVar4 = this_00->comparei("true");
                    field_8424 = iVar4 == 0;
                    break;
                case 4:
                    this_02->GetID();
                    break;
                case 5:
                    pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    iVar4 = _atoi(pcVar6);
                    field_52992 = iVar4;
                    break;
                case 6:
                    uVar8 = 10;
                    uVar3 = eastl::stoi<eastl::string>(*this_00, 10);
                    field_8432 = (Language*)((Language*)(unsigned long)uVar3)->GetByID(uVar8);
                    break;
                case 7:
                    iVar4 = eastl::stoi<eastl::string>(*this_00, 10);
                    m_contentMode = iVar4;
                    break;
                case 8:
                    iVar4 = this_00->comparei("true");
                    if (iVar4 == 0) {
                        field_54788 = 0;
                    } else {
                        field_54788 = 1;
                    }
                    break;
                case 9:
                    *local_70 = this_00;
                    break;
                case 10:
                    uVar8 = 10;
                    uVar3 = eastl::stoi<eastl::string>(*this_00, 10);
                    pMVar7 = ((ModeGame*)(unsigned long)uVar3)->GetByID(uVar8);
                    field_8440 = pMVar7;
                    if (pMVar7 == (ModeGame*)ModeGame::OLDSCAPE) {
                        field_54172 = 0;
                    } else {
                        field_54172 = 4294967295;
                    }
                    break;
                case 11:
                    *local_80 = this_00;
                    break;
                case 12:
                    iVar4 = eastl::stoi<eastl::string>(*this_00, 10);
                    m_worldId = iVar4;
                    break;
                case 14:
                    pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    uVar3 = _atoi(pcVar6);
                    field_54824 = uVar3;
                    break;
                case 15:
                    iVar4 = eastl::stoi<eastl::string>(*this_00, 10);
                    field_54168 = iVar4;
                    if ((iVar4 == 0) && (cVar1 = CheckHost(), !cVar1)) {
                        (logger::default_logger())
                            ->Log(false, 3,
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client.cpp",
                                  229, "Environment is LIVE, but Config URL is not compatible!");
                        goto LAB_1000c513e;
                    }
                    break;
                case 17:
                    *local_68 = this_00;
                    break;
                case 19:
                    *local_98 = this_00;
                    break;
                case 20:
                    *local_90 = this_00;
                    break;
                case 21:
                    iVar4 = eastl::stoi<eastl::string>(*this_00, 10);
                    field_54828 = iVar4;
                    break;
                case 23:
                    *local_a0 = this_00;
                    break;
                case 24:
                    *local_a8 = this_00;
                    break;
                case 25:
                    *local_b0 = this_00;
                    pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    iVar4 = _sscanf(pcVar6, "%d.%d", local_60, local_38);
                    if (iVar4 == 1) {
                        *local_38 = 1;
                    }
                    break;
                case 26:
                    iVar4 = eastl::stoi<eastl::string>(*this_00, 10);
                    field_54696 = iVar4;
                    break;
                case 27:
                    *local_b8 = this_00;
                    break;
                case 28:
                    *local_88 = this_00;
                }
            }
            bVar9 = uVar2 < 28;
            uVar2 = uVar2 + 1;
            if (uVar2 == 29) {
                if ((field_52992 & 65536) != 0) {
                    field_8456 = &BETA_CACHE_DIR_SUFFIX;
                }
                str1 = &field_1104088;
                local_58 = eastl::string("gedigesturl");
                cVar1 = GetAppletConfigString(*str1, local_58);
                if (!cVar1) {
                    cVar1 = field_54216;
                } else {
                    cVar1 = core::stringtools::general::StringTools::StartsWith(*str1, "http");
                    if (!cVar1) {
                        str1->assign("");
                    }
                    cVar1 = field_54216;
                }
                if (!cVar1) {
                    local_58 = GetCodeBaseHost();
                    field_54224 = &local_58;
                LAB_1000c513e:
                }
                return ~bVar9 & 4294967041;
            }
        } while (true);
    }

    // 0x1000c52d0
    void Client::FinishInitialization() {
        Client* this_00;
        unsigned int uVar3;
        uint32_t* puVar7;
        AuthLibWrapper* local_1a8[4];

        field_54956 = 0;
        if (field_54168 == *(int*)(ModeWhere::LIVE + 8)) {
            field_54256 = 43594;
            uVar3 = 443;
        } else {
            field_54256 = m_worldId + 40000;
            uVar3 = m_worldId + 50000;
        }
        field_54260 = uVar3;
        reinterpret_cast<const uint64_t*>(&m_recol1s)[1] = 4550;
        rs2lib::PlayerModel::m_recol1s = 1302211639220968078;
        (*((array<Array<short>, 5ul>*)&rs2lib::PlayerModel::m_recol1d)) =
            (*((array<Array<short>, _5ul>*)&rs2lib::RecolsRunescape::m_recol1d));
        rs2lib::PlayerModel::m_recol2s = 18446744070011279296;
        reinterpret_cast<const uint64_t*>(&m_recol2s)[1] = 65535;
        (*((array<Array<short>, 5ul>*)&rs2lib::PlayerModel::m_recol2d)) =
            (*((array<Array<short>, _5ul>*)&rs2lib::RecolsRunescape::m_recol2d));
        if (!(InitJs5RemoteLoader())) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      364, "Couldn\'t set up Js5Localloader. Quitting...");
            _exit(-1);
        }
        shared_ptr<ApplicationContext>* psVar4 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this)(this);
        long* plVar5 = (long*)(*psVar4).operator->();
        new (local_1a8) eastl::string("secure");
        GetBaseUrl(&local_168, this, (eastl::string*)local_1a8, true);
        (**(void (**)(...))(*plVar5 + 48))(plVar5, &field_1103928, &field_1103960, &field_1103992, &field_1104024,
                                           &local_168);
        psVar4 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this)(this);
        plVar5 = (long*)(*psVar4).operator->();
        local_1a8[0] = (AuthLibWrapper*)(**(void (**)(...))(*plVar5 + 72))(plVar5);
        auto local_168 = std::make_unique<LoginManager, auth::AuthLibWrapper*&>(*local_1a8);
        uint8_t* puVar1 = &field_2506376;
        *puVar1 = local_168;
        SetPublishingPlatformType(GetPlatformPublishingType());
        LoginManager* pLVar6 = (LoginManager*)(*puVar1).operator->();
        local_168 = GameShell3Cache::GetRootStorage();
        pLVar6->SetDevCredentialsOutputDirectory(local_168);
        pLVar6 = (LoginManager*)(*puVar1).operator->();
        local_168 = Filename("devCredentials.txt");
        pLVar6->SetDevCredentialsFilename(local_168);
        if (local_1a8[0] != nullptr) {
            (*local_1a8[0]->_vptr[26]._dtor)();
        }
        OnScaledUIQualityChanged();
        local_168 = std::make_unique<FriendSystem, rs2lib::social::NameSpace&>(field_54172);
        field_52768 = local_168;
        array<int, 50ul>* local_188 = (array<int, 50ul>*)&field_1115876;
        array<int, 50ul>* local_180 = (array<int, 50ul>*)&field_1116076;
        array<int, 50ul>* local_178 = (array<int, 50ul>*)&field_1116276;
        unsigned long arg1 = 0;
        Client* local_170 = this;
        do {
            puVar7 = (uint32_t*)(*local_188)[arg1];
            *puVar7 = 0;
            puVar7 = (uint32_t*)(*local_180)[arg1];
            *puVar7 = 0;
            puVar7 = (uint32_t*)(*local_178)[arg1];
            *puVar7 = 0;
            puVar7 = &field_1116476[arg1];
            *puVar7 = 0;
            puVar7 = &field_1116676[arg1];
            *puVar7 = 0;
            puVar7 = &field_1116876[arg1];
            *puVar7 = 0;
            puVar7 = &field_1117076[arg1];
            this_00 = local_170;
            *puVar7 = 0;
            arg1 = arg1 + 1;
        } while (arg1 != 50);
        puVar1 = &local_170->field_1104088;
        if (!(puVar1->empty())) {
            this_00->field_52872.Init(*puVar1);
        }
        local_168 = std::make_unique<objtags::ObjTagManager>();
        this_00->field_54720 = local_168;
        local_168 = std::make_unique<HiscoresManager>();
        this_00->field_52776 = local_168;
        ClientGameInit(this_00);
    }

    // 0x1000c57f0
    unsigned int Client::InitJs5RemoteLoader() {
        uint8_t* this_00;
        Logger* this_01;
        uint64_t uVar5;
        Js5Loader* pJVar6;
        WaterNormalParamsTarget local_648;
        ReturnValue local_518;
        ReturnValue local_3e8;
        Js5RemoteServerInfo local_58;

        auto local_650 = std::make_unique<jagex3::Js5RemoteLoader>();
        eastl::string local_690(field_54224);
        local_690.append_sprintf(":%d", (unsigned long)field_54256);
        eastl::string local_670(field_54224);
        local_670.append_sprintf(":%d", (unsigned long)field_54260);
        local_58.field_0 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t local_50 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t local_48 = 0;
        auto pcVar3 = GameShell3Cache::GetOSRSCacheFolderName();
        Filename local_188(pcVar3);
        pcVar3 = (char*)GameShell3Cache::GetDataFolderName();
        local_188 /= pcVar3;
        auto pJVar4 = local_650.operator->();
        pJVar4->RequestCacheDirectoryPermissions(local_188);
        auto local_2b8 = GameShell3Cache::GetDataDirectory();
        if (field_8456.empty() == '\0') {
            local_648 = GameShell3Cache::GetDataDirectory();
            local_518 = local_648 + "-";
            local_3e8 = local_518 + &field_8456;
            local_2b8 = local_3e8;
        }
        pJVar4 = (Js5RemoteLoader*)local_650.operator->();
        local_648[0].field_0 = pJVar4->Initialize(local_2b8, &local_58);
        unsigned int uVar2 = local_648.IsValid();
        if ((char)uVar2 == '\0') {
            this_00 = &field_2508496;
            this_00->SetEnc(*field_8440);
            this_00->SetLanguage(field_8432);
            pJVar6 = (Js5Loader*)std::unique_ptr<jagex3::Js5RemoteLoader>::release();
            local_3e8.unique_ptr<true, void>(pJVar6);
            field_2508480 = local_3e8;
            local_518[0] = (ReturnValue)this_00;
            pJVar6 = (Js5Loader*)*field_2508480;
            local_3e8 = std::make_unique<js5::OldscapeJs5ResourceProvider, SystemSettings*, jagex3::Js5Loader&>(
                local_518, *pJVar6);
            (&field_2508488)->operator=(&local_3e8);
        } else {
            this_01 = logger::default_logger();
            local_3e8 = local_648.GetErrorString();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_01->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 3708,
                "Error initializing remote loader: %s\n", uVar5);
        }
        return uVar2 ^ 1;
    }

    // 0x1000c5be0
    auto Client::GetBaseUrl(const eastl::string& str, bool arg2) {
        uint64_t in_register_00000009;
        char* local_38;

        char* str_00 = "http://";
        if ((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg2) != 0) {
            str_00 = "https://";
        }
        char* local_40 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        int iVar1 = field_54168;
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
        eastl::string local_80("");
        if (field_54792.size() != 0) {
            local_60 + (*((eastl::string*)"/p="));
            local_80 = &local_60;
        }
        char* pcVar3 = field_8432->field_16;
        unsigned int uVar2 = field_54824;
        uint64_t uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        auto result((CtorSprintf*)"%s%s%s.%s/l=%s/a=%i%s/", str_00, local_40, local_38, "runescape.com", pcVar3, uVar2,
                    uVar5);
        return result;
    }

    // 0x1000c5e40
    unsigned int Client::GetPlatformPublishingType() {
        uint8_t bVar2;

        auto this_00 = GraphicsApp::Instance();
        auto this_01 = this_00->GetSteamSDK();
        bool cVar1 = this_01->operator_cast_to_bool();
        unsigned int uVar4 = 1;
        if (!cVar1) {
            if (field_8425 == false) {
                bVar2 = GetLoginManager()->IsUsingJagexLauncher();
                uVar4 = (unsigned int)bVar2 * 5;
            } else {
                uVar4 = this_01->GetID() == 7 ^ 3;
            }
        }
        return uVar4;
    }

    // 0x1000c5ef0
    bool Client::HasAcceptedTermsAndPrivacy() {
        int iVar1 = ((DeviceOptions*)field_8376.operator->())->GetTermsAndPrivacyVersion();
        return field_54828 <= iVar1;
    }

    // 0x1000c5f80
    void Client::OnScaledUIQualityChanged() {
        field_144->SetScaledUIQuality(((DeviceOptions*)field_8376.operator->())->GetUIQuality());
    }

    // 0x1000c6160
    void Client::ClientGameInit() {
        long lVar1 = -5;
        do {
            field_2508992[lVar1 - 107] = 0;
            *(uint32_t*)(field_2508992 + lVar1 * 4 - 84) = 0;
            *(uint32_t*)(field_2508992 + lVar1 * 4 - 64) = 0;
            *(uint32_t*)(field_2508992 + lVar1 * 4 - 44) = 0;
            *(uint32_t*)(field_2508992 + lVar1 * 4 - 24) = 0;
            lVar1 = lVar1 + 1;
        } while (lVar1 != 0);
    }

    // 0x1000c61b0
    void Client::ResetIdleTimeRemaining() {
        field_54864 = core::SafeTime::CurrentTimeMillis();
    }

    // 0x1000c61d0
    int Client::GetIdleTimeRemaining() {
        int iVar1;

        if (field_54864 < 0) {
            iVar1 = 300000;
        } else {
            iVar1 = core::SafeTime::CurrentTimeMillis();
            iVar1 = ((int)field_54864 - iVar1) + 300000;
            if (iVar1 < 0) {
                iVar1 = 0;
            }
        }
        return iVar1;
    }

    // 0x1000c6210
    void Client::DispatchInput() {
        *(uint64_t*)&field_53140 = 0;
        *(uint32_t*)((long)&field_53148 + 4) = 0;
        int iVar2 = field_7280->GetAndResetWheelRotation();
        if (iVar2 != 0) {
            field_53140 = iVar2;
        }
        field_8496.ServicePreDispatch();
        if (field_160->Dispatch() != '\0') {
            ResetIdleTimeRemaining();
        }
    }

    // 0x1000c6270
    void Client::MainLoop() {
        GraphicsApp* this_00;
        bool cVar3;
        long* plVar8;
        uint64_t extraout_var;
        PixfontGeneric* pPVar9;
        PixfontGeneric* pPVar10;
        Logger* pLVar11;
        uint64_t uVar12;
        MainState mainState;
        eastl::string* pbVar13;
        Client* this_07;
        char* pcVar14;
        ReturnValue local_f8;
        ReturnValue local_d8;

        if ((field_54716 != '\0') ||
            (((this_07 = this, field_8448 < 6 && ((37U >> ((uint8_t)field_8448 & 31) & 1) != 0)) &&
              (cVar3 = javapal::GameShell::IsForceCrashQueued(), cVar3)))) {
            pcVar14 = "!m_forceCrash && !(clientLoading && GameShell::IsForceCrashQueued())";
            LogFatalError(
                "!m_forceCrash && !(clientLoading && GameShell::IsForceCrashQueued())",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 463, 0,
                "Client was forced to crash!");
            pcVar14->~OptionStore();
        }
        if (m_frozen == false) {
            field_8488 = field_8488 + 1;
        }
        auto this_01 = this_07->Instance();
        int iVar6 = this_01->GetReadyState();
        if ((iVar6 == 0) && (field_54785 != false)) {
            javapal::GameShell::DoneSlowUpdate();
        }
        auto this_02 = this_01->Instance();
        ReturnValue* this_06 = (ReturnValue*)&DAT_00000001;
        this_02->MainLogic(true);
        ImGuiIO IVar1 = ImGui::GetIO()[202];
        if ((ImGuiIO)field_7306841 != IVar1) {
            field_7306841 = (char)IVar1;
            this_00 = field_152;
            this_06 = &local_d8;
            local_f8[0]._0_1_ = IVar1;
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                Client::MainLoop()::__2, void>(
                (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)this_06, &local_f8);
            this_00->QueueMainThreadEvent(*this_06);
        }
        field_54785 = iVar6 != 0;
        if (field_8448 != 0) {
            ExecuteScheduledFunctions();
            ServiceNetClient();
            if (((field_54785 == false) && (cVar3 = midi2::MidiManager::Service(), cVar3)) && (field_2508680 != '\0')) {
                if (&field_2508736 != this_06) {
                    plVar8 = (long*)field_2508736.operator->();
                    (**(void (**)(...))(*plVar8 + 24))(plVar8);
                }
            }
            if ((field_54785 == false) &&
                ((40 < (unsigned long)field_8448 || ((1100618924032U >> ((unsigned long)field_8448 & 63) & 1) == 0)))) {
                DispatchInput();
                cVar3 = field_54785;
            } else {
                cVar3 = field_54785;
            }
            if (!cVar3) {
                ((OSClientConsole*)field_7306800.operator->())->MainLogic(field_2508656);
            }
            plVar8 = (long*)field_8376.operator->();
            (**(void (**)(...))(*plVar8 + 16))(plVar8);
            plVar8 = (long*)field_8384.operator->();
            (**(void (**)(...))(*plVar8 + 16))(plVar8);
            ((TotpPassCodes*)field_8392.operator->())->MainLogic();
        }
        uint8_t uVar5 = field_144->GetPix2D();
        Pix2D* pix2D = (Pix2D*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar5);
        if (field_54785 != false)
            goto switchD_1000c64cd_caseD_1;
        switch (field_8448) {
        case 0:
            (*((eastl::string*)&TitleScreen::m_loadString)) = ((eastl::string*)&constants::text::mainloadjc);
            if (field_54344 == 0) {
                local_d8 = eastl::string();
                local_f8 = SystemDetails::GetDeepLink();
                SystemDetails::GetDeepLinkingValueForKey<eastl::string>(local_f8, "launchurl", local_d8);
                if ((field_54168 == *(int*)(ModeWhere::LIVE + 8)) || (cVar3 = field_54312.empty(), !cVar3)) {
                    cVar3 = field_54312.empty();
                    pbVar13 = (eastl::string*)&field_54352;
                    if (!cVar3) {
                        pbVar13 = (eastl::string*)&field_54312;
                    }
                    SetJavConfigReader(*pbVar13);
                } else {
                    cVar3 = local_d8.empty();
                    if (!cVar3) {
                        local_f8 = eastl::string();
                        pLVar11 = logger::default_logger();
                        pLVar11->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client.cpp",
                                     568, "Attempting to download JavConfig using deeplink.");
                        uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        local_f8.append_sprintf("http://%s/jav_config.ws?binaryType=%s", uVar12, "NXT_BINARY_TYPE");
                        SetJavConfigReader(local_f8);
                    } else {
                        iVar6 = field_54224.compare("127.0.0.1");
                        if (iVar6 == 0) {
                            if (field_54168 == *(int*)(ModeWhere::LOCAL + 8)) {
                                pLVar11 = logger::default_logger();
                                pLVar11->Log(false, 5,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/client.cpp",
                                             582, "Local modewhere: Continuing without JavConfig data");
                                FinishInitialization();
                                SetMainState(2);
                            }
                            goto LAB_1000c6809;
                        }
                        ConstructRentalJavConfigUrl(&local_f8, this, "https", 50000);
                        pLVar11 = logger::default_logger();
                        uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pLVar11->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client.cpp",
                                     576, "Attempting to download JavConfig from a rental server: %s", uVar12);
                        SetJavConfigReader(local_f8);
                    }
                }
            LAB_1000c6809:
                field_54344 = 1;
            }
            if (field_54344 == 1) {
                iVar6 = LoadJavConfigFromUrl();
                if (iVar6 == 3) {
                    if (field_54168 == *(int*)(ModeWhere::LIVE + 8)) {
                        pLVar11 = logger::default_logger();
                        uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pcVar14 = "Failed to download JavConfig for live server: %s";
                        iVar6 = 616;
                    } else {
                        cVar3 = field_54312.empty();
                        if (cVar3) {
                            iVar6 = field_54224.compare("127.0.0.1");
                            if (iVar6 != 0) {
                                pLVar11 = logger::default_logger();
                                pLVar11->Log(false, 5,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/client.cpp",
                                             630, "Failed first attempt to download JavConfig. Retrying...");
                                ConstructRentalJavConfigUrl(&local_d8, this, "http", 7000);
                                pLVar11 = logger::default_logger();
                                uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                pLVar11->Log(false, 5,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/client.cpp",
                                             633, "Attempting to download JavConfig from a rental server: %s", uVar12);
                                SetJavConfigReader(local_d8);
                                field_54344 = field_54344 + 1;
                            }
                            goto LAB_1000c6a02;
                        }
                        pLVar11 = logger::default_logger();
                        uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pcVar14 = "Failed to download JavConfig from specific URL: %s";
                        iVar6 = 623;
                    }
                    pLVar11->Log(
                        false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        iVar6, pcVar14, uVar12);
                    pbVar13 = (eastl::string*)&constants::text::loading_nojavcfg;
                LAB_1000c69f0:
                    (*((eastl::string*)&TitleScreen::m_loadString)) = pbVar13;
                    mainState = 1000;
                } else {
                    if (iVar6 != 2)
                        goto LAB_1000c6a02;
                    cVar3 = ReadJavConfigParameters();
                    if (!cVar3) {
                        pbVar13 = (eastl::string*)&constants::text::loading_badjavcfg;
                        goto LAB_1000c69f0;
                    }
                    FinishInitialization();
                    mainState = 2;
                }
                SetMainState(mainState);
            }
        LAB_1000c6a02:
            if (field_54344 == 2) {
                iVar6 = LoadJavConfigFromUrl();
                if (iVar6 == 3) {
                    pLVar11 = logger::default_logger();
                    pLVar11->Log(
                        false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        655, "Failed to download JavConfig after two attempts");
                    pLVar11 = logger::default_logger();
                    pLVar11->Log(
                        false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        656, "Attemting to continue with out JavConfig paramters");
                } else {
                    if (iVar6 != 2)
                        break;
                    ReadJavConfigParameters();
                }
                FinishInitialization();
                SetMainState(2);
            }
            break;
        case 5:
            pPVar9 = (PixfontGeneric*)*field_1104208;
            pPVar10 = (PixfontGeneric*)*field_1104224;
            TitleScreen::Loop(*this, *pix2D, *pPVar9, *pPVar10);
        case 2:
            MainLoad();
            javapal::GameShell::DoneSlowUpdate();
            break;
        case 10:
        case 11:
            pPVar9 = (PixfontGeneric*)*field_1104208;
            pPVar10 = (PixfontGeneric*)*field_1104224;
            TitleScreen::Loop(*this, *pix2D, *pPVar9, *pPVar10);
            field_7164656->ResetColour();
            break;
        case 20:
        case 50:
            pPVar9 = (PixfontGeneric*)*field_1104208;
            pPVar10 = (PixfontGeneric*)*field_1104224;
            TitleScreen::Loop(*this, *pix2D, *pPVar9, *pPVar10);
            LoginPoll();
            break;
        case 25:
            MapBuildLoop();
        }
    switchD_1000c64cd_caseD_1:
        unsigned int uVar2 = field_8448;
        if (uVar2 == 45) {
            if (field_54785 == false) {
                pPVar9 = (PixfontGeneric*)*field_1104208;
                pPVar10 = (PixfontGeneric*)*field_1104224;
                TitleScreen::Loop(*this, *pix2D, *pPVar9, *pPVar10);
            }
        } else if (uVar2 == 40) {
            LoginPoll();
        } else if (uVar2 == 30) {
            GameLoop();
        }
        ((DiscordMain*)field_8400.operator->())->MainLogic(field_8488);
    }

    // 0x1000c6d30
    void Client::ExecuteScheduledFunctions() {
        long lVar3;
        long lVar4;
        uint64_t uStack_60;
        hashtable_iterator<eastl::pair<long long const, Client::ScheduledFunction>, true, false>* local_58[2];
        uint64_t uStack_40;

        unsigned long long uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        uint8_t* this_00 = &field_7306736;
        auto local_48 = this_00->begin();
        auto local_78 = this_00->end();
        bool cVar1 = local_48 != local_78;
        if (cVar1) {
            do {
                lVar4 = local_48.HeapBeginPtr();
                if (uVar2 < *(unsigned long*)(lVar4 + 16)) {
                LAB_1000c6dab:
                    ++local_48;
                } else {
                    lVar4 = local_48.HeapBeginPtr();
                    cVar1 = std::function<bool()>::operator()((function<bool()>*)(lVar4 + 32));
                    if (cVar1) {
                        lVar4 = local_48.HeapBeginPtr();
                        lVar4 = *(long*)(lVar4 + 24);
                        lVar3 = local_48.HeapBeginPtr();
                        *(unsigned long long*)(lVar3 + 16) = lVar4 + uVar2;
                        goto LAB_1000c6dab;
                    }
                    new (local_58) eastl::hashtable_iterator(&local_48);
                    local_48 = this_00->erase(local_58[0]);
                    uStack_40 = uStack_60;
                }
                cVar1 = local_48 != local_78;
            } while (cVar1);
        }
    }

    // 0x1000c6e20
    void Client::ServiceNetClient() {
        uint64_t* puVar1;

        if (field_8448 != 1000) {
            puVar1 = (uint64_t*)field_2508480.operator->();
            (**(void (**)(...))*puVar1)(puVar1);
        }
    }

    // 0x1000c6e70
    void Client::PcmPlayerService() {}

    // 0x1000c6f70
    auto Client::ConstructRentalJavConfigUrl(const char* str, unsigned short arg2) const {
        uint64_t in_register_0000000a;

        auto result;
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        result.append_sprintf(
            "%s://%s:%i/jav_config.ws", str, uVar1,
            (unsigned long)(unsigned int)((int)(((uint64_t)in_register_0000000a << 16) | (uint16_t)arg2) + m_worldId));
        return result;
    }

    // 0x1000c6fe0
    void Client::SetMainState(MainState mainState) {
        uint64_t in_RAX;
        Logger* pLVar2;
        long lVar3;
        int arg4;
        bool arg3;
        Js5* js52;
        Js5* js51;
        uint64_t uVar4;

        uint32_t uVar5 = (uint32_t)((unsigned long)in_RAX >> 32);
        MainState MVar1 = field_8448;
        if (MVar1 == mainState) {
            return;
        }
        field_8448 = mainState;
        if (field_54760 != '\0') {
            pLVar2 = logger::default_logger();
            uVar4 = (((uint64_t)uVar5 << 32) | (uint32_t)mainState);
            pLVar2->Log(false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        1207, "Mainstate: %i", uVar4);
            uVar5 = (uint32_t)((unsigned long)uVar4 >> 32);
        }
        if (MVar1 == 2) {
            ~AutoSingleton();
        }
        if ((mainState == 40) || (mainState == 20)) {
            lVar3 = core::SafeTime::CurrentTimeMillis();
            field_55032 = lVar3;
            field_1104120.MarkLoginStarted(mainState);
            if (mainState != 20) {
                DeriveTOTPMode(false);
            }
        }
        if (field_8448 == 25) {
            field_53252 = 0;
            *(mach_header**)&field_53236 = &__mh_execute_header;
            *(mach_header**)&field_53244 = &__mh_execute_header;
        }
        switch (mainState) {
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
            js52 = (Js5*)m_pSprites;
            js51 = (Js5*)field_54472;
            arg3 = false;
            arg4 = 4;
            break;
        case 20:
            arg4 = (unsigned int)(MVar1 == 11) << 2;
            js52 = (Js5*)m_pSprites;
            js51 = (Js5*)field_54472;
            arg3 = false;
            break;
        case 45:
            lVar3 = core::SafeTime::CurrentTimeMillis();
            field_55032 = lVar3;
            field_1104120.MarkLoginStarted(45);
            TitleScreen::OpenInBackgroundMode();
            goto joined_r0x0001000c713f;
        case 50:
            goto switchD_1000c70b9_caseD_32;
        default:
            if (mainState != 1000)
                goto switchD_1000c70b9_caseD_1;
            goto switchD_1000c70b9_caseD_0;
        }
    LAB_1000c70d0:
        TitleScreen::Open(*js51, *js52, arg3, arg4);
    joined_r0x0001000c713f:
        if (mainState != 30) {
            if (mainState != 10) {
                return;
            }
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        1270, "Switching to STATE_TITLESCREEN from state: %i",
                        (((uint64_t)uVar5 << 32) | (uint32_t)MVar1));
        }
        ((OSClientConsole*)field_7306800.operator->())->Reset();
    switchD_1000c70b9_caseD_32:
        return;
    switchD_1000c70b9_caseD_0:
        js52 = (Js5*)m_pSprites;
        js51 = (Js5*)field_54472;
        arg3 = true;
        arg4 = 0;
        goto LAB_1000c70d0;
    }

    // 0x1000c7280
    void Client::MainLoad() {
        StockPlayerOffer** ppSVar1;
        Js5* js52;
        Js5* pJVar2;
        GraphicsDefaults graphicsDefaults;
        uint64_t uVar3;
        uint32_t uVar4;
        uint32_t uVar5;
        uint32_t uVar6;
        uint32_t uVar7;
        uint32_t uVar8;
        uint32_t uVar9;
        uint32_t uVar10;
        uint32_t uVar11;
        uint32_t uVar12;
        Client* pCVar14;
        uint8_t uVar15;
        bool bVar16;
        bool cVar17;
        unsigned short uVar18;
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
        int iVar35;
        int iVar36;
        int iVar37;
        int iVar38;
        uint64_t extraout_var;
        shared_ptr<ApplicationContext>* this_00;
        Option<float>* this_01;
        StockPlayerOffer* pSVar39;
        Js5* pJVar40;
        shared_ptr<midi2::MidiPlayerMainThread>* this_02;
        long* plVar41;
        long* plVar42;
        Array<Font>* fonts;
        unsigned long uVar43;
        unsigned long uVar44;
        PacketJ<Array<unsigned char> _>* packetJ;
        uint8_t* puVar45;
        Worldmap* this_04;
        DeviceOptions* pDVar46;
        GameWorld* gameWorld;
        shared_ptr<jstring::PixfontGeneric>* psVar47;
        Minimap* pMVar48;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        shared_ptr<graphics::Pix32>* this_06;
        Array<graphics::Pix8>* this_08;
        Minimenu* this_10;
        PixfontGeneric* pPVar49;
        GameOptions* this_11;
        long lVar50;
        Js5ResourceProvider* pJVar51;
        unsigned int uVar52;
        Pix3D* this_13;
        FontLoader* this_14;
        uint8_t* puVar53;
        uint32_t in_stack_fffffffffffffe78;
        array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul> aaStack_182;
        shared_ptr<dash3d::Decor> local_120;
        shared_ptr<dash3d::Decor> local_110;
        shared_ptr<dash3d::Decor> local_100;
        shared_ptr<dash3d::Decor> local_f0;
        shared_ptr<Array<graphics::Pix8> _>* local_e0;
        uint32_t local_d4;
        int local_d0[4];
        unique_ptr<sound::PCMPlayerMainThread>* local_c0;
        Client* local_b8;
        array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>* local_b0;
        FontLoader local_a8;
        FontLoader local_88;
        float local_50[8];

        switch (field_54956) {
        case 0:
            local_50[0] = 5.60519e-45;
            local_a8.field_0._0_4_ = 104;
            local_d0[0] = 104;
            pDVar46 = (DeviceOptions*)field_8376.operator->();
            local_d4 = pDVar46->GetDrawDistance();
            uVar15 = field_144->GetPix3D();
            std::make_unique<dash3d::world, int, int, int, int, Array<int>&, dash3d::NXTPix3D&>(
                local_88, *local_50, local_a8, *local_d0, local_d4,
                *((NXTPix3D*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar15)));
            field_19184 = local_88;
            field_7164656->SetPixToolkit(field_144);
            field_7164760.SetPixToolkit(field_144);
            local_88 = std::make_unique<minimap::Minimap>();
            field_8152 = local_88;
            pMVar48 = (Minimap*)field_8152.operator->();
            pMVar48->ResizeBuffer(4);
            this_13 = (Pix3D*)&TitleScreen::m_loadString;
            (*((eastl::string*)&TitleScreen::m_loadString)) = ((eastl::string*)&constants::text::mainload0);
            TitleScreen::m_loadPos = 5;
            this_13->InitTables();
            dash3d::ModelUnlitImpl::Init();
            field_54956 = 1;
            break;
        case 1:
            (*((eastl::string*)&TitleScreen::m_loadString)) = ((eastl::string*)&constants::text::mainload20);
            TitleScreen::m_loadPos = 10;
            field_54956 = 2;
            break;
        case 2:
            this_00 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this)(this);
            this_01 = (Option<float>*)(*this_00).operator->();
            bVar16 = (bool)this_01->IsValidValue();
            pSVar39 = (StockPlayerOffer*)OpenJs5(0, false, true, bVar16, false);
            field_54392 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(1, false, true, bVar16, false);
            field_54400 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(2, true, false, bVar16, false);
            field_54408 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(3, false, true, bVar16, false);
            field_54416 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(4, false, true, bVar16, false);
            m_pJagFx = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(5, true, true, bVar16, false);
            field_54432 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(6, true, true, bVar16, false);
            m_pMidi = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(7, false, true, bVar16, false);
            field_54448 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(8, false, true, bVar16, false);
            m_pSprites = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(9, false, true, bVar16, false);
            field_54464 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(10, false, true, bVar16, false);
            field_54472 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(11, false, true, bVar16, false);
            field_54480 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(12, false, true, bVar16, false);
            m_pClientScripts = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(13, true, false, bVar16, false);
            field_54496 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(14, false, true, bVar16, false);
            field_54504 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(15, false, true, bVar16, false);
            field_54512 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(17, true, true, bVar16, false);
            field_54544 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(18, false, true, bVar16, false);
            field_54528 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(19, false, true, bVar16, false);
            field_54520 = pSVar39;
            pSVar39 = (StockPlayerOffer*)OpenJs5(20, false, true, bVar16, false);
            field_54536 = pSVar39;
            pJVar40 = (Js5*)OpenJs5(21, false, true, bVar16, true);
            field_54552 = pJVar40;
            (*((eastl::string*)&TitleScreen::m_loadString)) = ((eastl::string*)&constants::text::mainload30);
            TitleScreen::m_loadPos = 20;
            field_54956 = 3;
            break;
        case 3:
            iVar35 = field_54392->GetIndexPercentage();
            iVar36 = field_54400->GetIndexPercentage();
            iVar37 = field_54408->GetIndexPercentage();
            iVar38 = field_54416->GetIndexPercentage();
            iVar19 = m_pJagFx->GetIndexPercentage();
            iVar20 = field_54432->GetIndexPercentage();
            iVar21 = m_pMidi->GetIndexPercentage();
            iVar22 = field_54448->GetIndexPercentage();
            iVar23 = m_pSprites->GetIndexPercentage();
            iVar24 = field_54464->GetIndexPercentage();
            iVar25 = field_54472->GetIndexPercentage();
            iVar26 = field_54480->GetIndexPercentage();
            iVar27 = m_pClientScripts->GetIndexPercentage();
            iVar28 = field_54496->GetIndexPercentage();
            iVar29 = field_54504->GetIndexPercentage();
            iVar30 = field_54512->GetIndexPercentage();
            iVar31 = field_54520->GetIndexPercentage();
            iVar32 = field_54528->GetIndexPercentage();
            iVar33 = field_54536->GetIndexPercentage();
            iVar34 = field_54552->GetIndexPercentage();
            cVar17 = field_54544->GetIndexIsReady();
            uVar52 = 0;
            if (cVar17) {
                puVar45 = (uint8_t*)field_54544->RequestFullDownload();
                uVar52 = (unsigned int)(puVar45 == DataStatus::READY);
            }
            iVar35 = iVar34 / 100 + iVar33 / 100 + iVar32 / 100 + iVar31 / 100 + iVar30 / 50 + iVar29 / 50 +
                     iVar28 / 50 + iVar27 / 50 + iVar26 / 50 + iVar25 / 50 + iVar24 / 50 + iVar23 / 50 +
                     (iVar22 * 55) / 100 + iVar21 / 50 + iVar20 / 25 + (iVar19 * 6) / 100 + iVar38 / 50 + iVar37 / 50 +
                     iVar36 / 25 + iVar35 / 25 + uVar52;
            if (iVar35 != 0) {
                if (iVar35 == 100) {
                    new (local_50) eastl::allocator("EASTL basic_string");
                    local_88 = eastl::string("Animations", local_50);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    local_88 = eastl::string("Skeletons", local_50);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    new (&local_88) eastl::string("Sound FX", local_50);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    local_88 = eastl::string("Maps", local_50);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    local_88 = eastl::string("Music Tracks", local_50);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    local_88 = eastl::string("Models", local_50);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    local_88 = eastl::string("Sprites", local_50);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    local_88 = eastl::string("Music Jingles", local_50);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    local_88 = eastl::string("Music Samples", local_50);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    local_88 = eastl::string("Music Patches", local_50);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    local_88 = eastl::string("World Map", local_50);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    local_88 = eastl::string("World Map Geography", local_50);
                    new (local_50) eastl::allocator("EASTL basic_string");
                    local_88 = eastl::string("World Map Ground", local_50);
                    field_54980.Unpack(*field_54544);
                    (*((eastl::string*)&TitleScreen::m_loadString)) = ((eastl::string*)&constants::text::mainload40b);
                    TitleScreen::m_loadPos = 30;
                    field_54956 = 4;
                } else {
                    local_a8 = eastl::to_string(iVar35);
                    *local_50 + (*((eastl::string*)&constants::text::mainload40));
                    local_88 + *local_50;
                    (*((eastl::string*)&TitleScreen::m_loadString)) = &local_88;
                    TitleScreen::m_loadPos = 30;
                }
            }
            break;
        case 4:
            sound::PCMPlayer::Init(22050, m_lowMem == false);
            local_88 = sound::PCMPlayer::GetPlayer(0, 2048);
            local_c0 = (unique_ptr<sound::PCMPlayerMainThread>*)&field_2508744;
            std::unique_ptr<sound::PCMPlayerMainThread>::operator=(local_c0, &local_88);
            make_shared<sound::Mixer>(&local_88);
            (&field_54184)->operator=(&local_88);
            local_b8 = this;
            make_shared<sound::Mixer>((ReturnValue*)local_50);
            lVar50 = local_50->end();
            plVar42 = (long*)(lVar50 + 72);
            if (lVar50 == 0) {
                plVar42 = nullptr;
            }
            local_a8 = shared_ptr(&local_88);
            (**(void (**)(...))(*plVar42 + 8))(plVar42, &local_a8);
            local_b0 = (array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>*)&local_b8->field_2508688;
            uVar43 = 0;
            do {
                make_shared<midi2::MidiPlayer>((ReturnValue*)&local_a8);
                this_02 = (shared_ptr<midi2::MidiPlayerMainThread>*)(*local_b0)[uVar43];
                *this_02 = local_a8;
                plVar41 = (long*)(*this_02).operator->();
                (**(void (**)(...))(*plVar41 + 48))(plVar41, 9, 128);
                new (local_d0) shared_ptr(&local_a8);
                (**(void (**)(...))(*plVar42 + 8))(plVar42, (shared_ptr<dash3d::Decor>*)local_d0);
                uVar43 = uVar43 + 1;
            } while (uVar43 != 3);
            plVar42 = (long*)(*local_c0).operator->();
            local_a8 = shared_ptr(local_50);
            (**(void (**)(...))(*plVar42 + 40))(plVar42, &local_a8);
            pCVar14 = local_b8;
            pJVar40 = (Js5*)pCVar14->field_54512;
            pJVar2 = (Js5*)pCVar14->m_pJagFx;
            js52 = (Js5*)pCVar14->field_54504;
            new (&aaStack_182 - 6) std::array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>(*local_b0);
            midi2::MidiManager::Init(pJVar40, js52, pJVar2, (&aaStack_182 - 6));
            ((&aaStack_182 - 6))->~array();
            local_d0[0] = 22050;
            make_shared<sound::Decimator, int, int&>((ReturnValue*)&local_a8, local_d0, &sound::PCMPlayer::m_frequency);
            pCVar14->field_54200 = local_a8;
            (*((eastl::string*)&TitleScreen::m_loadString)) = ((eastl::string*)&constants::text::mainload45);
            TitleScreen::m_loadPos = 35;
            pCVar14->field_54956 = 5;
            local_a8 =
                std::make_unique<FontLoader, jagex3::Js5*&, jagex3::Js5*&>(pCVar14->m_pSprites, pCVar14->field_54496);
            pCVar14->field_1104200 = local_a8;
            break;
        case 5:
            fonts = (Array<Font>*)field_1104200.operator->();
            local_88.LoadFonts(*fonts);
            puVar53 = &field_19128;
            *puVar53 = local_88;
            uVar43 = puVar53->size();
            uVar44 = AllFonts.end();
            if (uVar43 < uVar44) {
                iVar35 = puVar53->size();
                local_a8 = eastl::to_string((iVar35 * 100) / 6);
                *local_50 + (*((eastl::string*)&constants::text::mainload50));
                local_88 + *local_50;
                (*((eastl::string*)&TitleScreen::m_loadString)) = &local_88;
                TitleScreen::m_loadPos = 40;
            } else {
                local_88[0].field_0._0_4_ = 0;
                psVar47 = (shared_ptr<jstring::PixfontGeneric>*)(*puVar53)[local_88];
                field_1104208 = *psVar47;
                local_88[0].field_0._0_4_ = 1;
                psVar47 = (shared_ptr<jstring::PixfontGeneric>*)(*puVar53)[local_88];
                field_1104224 = *psVar47;
                local_88[0].field_0._0_4_ = 2;
                psVar47 = (shared_ptr<jstring::PixfontGeneric>*)(*puVar53)[local_88];
                field_1104240 = *psVar47;
                local_88[0].field_0._0_4_ = 3;
                psVar47 = (shared_ptr<jstring::PixfontGeneric>*)(*puVar53)[local_88];
                field_1104256 = *psVar47;
                (*((eastl::string*)&TitleScreen::m_loadString)) = ((eastl::string*)&constants::text::mainload50b);
                TitleScreen::m_loadPos = 40;
                field_54956 = 6;
            }
            break;
        case 6:
            iVar35 = TitleScreen::Ready(*field_54472, *m_pSprites);
            iVar36 = TitleScreen::ReadyMax(*m_pSprites);
            if (iVar35 < iVar36) {
                local_a8 = eastl::to_string((iVar35 * 100) / iVar36);
                *local_50 + (*((eastl::string*)&constants::text::mainload60));
                local_88 + *local_50;
                (*((eastl::string*)&TitleScreen::m_loadString)) = &local_88;
                TitleScreen::m_loadPos = 50;
            } else {
                (*((eastl::string*)&TitleScreen::m_loadString)) = ((eastl::string*)&constants::text::mainload60b);
                TitleScreen::m_loadPos = 50;
                SetMainState(5);
                field_54956 = 7;
            }
            break;
        case 7:
            ppSVar1 = &field_54408;
            puVar45 = (uint8_t*)field_54408->RequestFullDownload();
            if (puVar45 == DataStatus::READY) {
                lVar50 = field_54552->RequestFullDownload();
                if (lVar50 != 0) {
                    configdecoder::FloType::Init(field_54408);
                    configdecoder::FluType::Init(field_54408);
                    configdecoder::IdkType::Init(field_54408, field_54448);
                    configdecoder::LocType::Init(field_54408, field_54448, m_lowMem);
                    configdecoder::NpcType::Init(field_54408, field_54448);
                    configdecoder::StructType::Init(field_54408);
                    pJVar40 = (Js5*)field_54408;
                    pJVar2 = (Js5*)field_54448;
                    bVar16 = field_8424;
                    local_b0 = (array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>*)ppSVar1;
                    pPVar49 = (PixfontGeneric*)field_1104208.end();
                    configdecoder::ObjType::Init(pJVar40, pJVar2, bVar16, pPVar49);
                    configdecoder::SeqType::Init(field_54408, field_54392, field_54400);
                    configdecoder::SpotType::Init(field_54408, field_54448);
                    configdecoder::VarBitType::Init(field_54408);
                    configdecoder::VarpType::Init(field_54408);
                    rs2lib::IfType::Init(field_54416, field_54448, m_pSprites, field_54496);
                    configdecoder::InvType::Init(field_54408);
                    configdecoder::EnumType::Init(field_54408);
                    configdecoder::VarcType::Init(field_54408);
                    configdecoder::VeccType::Init(field_54408);
                    configdecoder::ParamType::Init(field_54408);
                    configdecoder::DBRowType::Init(field_54408);
                    configdecoder::DBTableType::Init(field_54408);
                    game::BaseVarType::Initialise();
                    ScriptVarType::Initialise();
                    local_88 = std::make_unique<DBTableIndexCache, jagex3::Js5*&>(field_54552);
                    field_54560 = local_88;
                    pJVar51 = (Js5ResourceProvider*)*field_2508488;
                    make_shared<configdecoder::OldscapeVarTypeList, ModeGame const*&, game::Js5ConfigGroup const*&,
                                Language const*&, Js5ResourceProvider&, jagex3::Js5*&>(
                        &local_88, &field_8440, (Js5ConfigGroup**)&game::Js5ConfigGroup::VARCLANSETTINGTYPE,
                        &field_8432, pJVar51, (Js5**)local_b0);
                    field_52496 = local_88;
                    pJVar51 = (Js5ResourceProvider*)*field_2508488;
                    make_shared<configdecoder::OldscapeVarTypeList, ModeGame const*&, game::Js5ConfigGroup const*&,
                                Language const*&, Js5ResourceProvider&, jagex3::Js5*&>(
                        &local_88, &field_8440, (Js5ConfigGroup**)&game::Js5ConfigGroup::VARCLANTYPE, &field_8432,
                        pJVar51, (Js5**)local_b0);
                    field_52512 = local_88;
                    local_88 = std::make_unique<ClientVarValues>();
                    field_52488 = local_88;
                    configdecoder::HitmarkType::Init(field_54408, m_pSprites, field_54496);
                    configdecoder::HeadbarType::Init(field_54408, m_pSprites);
                    configdecoder::MapElementType::Init(field_54408, m_pSprites);
                    (*((eastl::string*)&TitleScreen::m_loadString)) = ((eastl::string*)&constants::text::mainload70b);
                    TitleScreen::m_loadPos = 60;
                    field_54956 = 8;
                    return;
                }
                iVar35 = (*ppSVar1)->GetDataPercent();
                local_a8 = eastl::to_string(iVar35 / 6 + 80);
                *local_50 + (*((eastl::string*)&constants::text::mainload70));
                local_88 + *local_50;
                (*((eastl::string*)&TitleScreen::m_loadString)) = &local_88;
            } else {
                iVar35 = (*ppSVar1)->GetDataPercent();
                local_a8 = eastl::to_string(iVar35 / 5);
                *local_50 + (*((eastl::string*)&constants::text::mainload70));
                local_88 + *local_50;
                (*((eastl::string*)&TitleScreen::m_loadString)) = &local_88;
            }
            TitleScreen::m_loadPos = 60;
            break;
        case 8:
            local_b0 = (array<shared_ptr<midi2::MidiPlayerMainThread>, 3ul>*)&field_1115696;
            bVar16 = *local_b0 == nullptr;
            iVar35 = 1;
            if (bVar16) {
                iVar35 = 0;
                local_88 = graphics::pixloader::Makepix8Array(*m_pSprites, field_54992, 0);
                cVar17 = local_88.empty();
                if (!cVar17) {
                    make_shared<Array<graphics::Pix8>, Array<graphics::Pix8>>((ReturnValue*)local_50, &local_88);
                    *local_b0 = *local_50;
                }
            }
            cVar17 = field_1115712.empty();
            if (!cVar17) {
                iVar35 = iVar35 + 1;
            } else {
                local_88 = graphics::pixloader::Makepix32Array(*m_pSprites, field_54996, 0);
                field_1115712 = local_88;
            }
            cVar17 = field_1115736.empty();
            if (!cVar17) {
                iVar35 = iVar35 + 1;
            } else {
                local_88 = graphics::pixloader::Makepix32Array(*m_pSprites, field_55000, 0);
                field_1115736 = local_88;
            }
            cVar17 = field_1115760.empty();
            if (!cVar17) {
                iVar35 = iVar35 + 1;
            } else {
                local_88 = graphics::pixloader::Makepix32Array(*m_pSprites, field_55004, 0);
                field_1115760 = local_88;
            }
            puVar53 = &field_1115784;
            bVar16 = *puVar53 == nullptr;
            local_c0 = (unique_ptr<sound::PCMPlayerMainThread>*)puVar53;
            if (bVar16) {
                local_88 = graphics::pixloader::Makepix32Array(*m_pSprites, field_55012, 0);
                cVar17 = local_88.empty();
                if (!cVar17) {
                    make_shared<Array<graphics::Pix32>, Array<graphics::Pix32>>((ReturnValue*)local_50, &local_88);
                    *puVar53 = *local_50;
                }
            } else {
                iVar35 = iVar35 + 1;
            }
            cVar17 = field_1115800.empty();
            if (!cVar17) {
                iVar35 = iVar35 + 1;
            } else {
                local_88 = graphics::pixloader::Makepix8Array(*m_pSprites, field_55020, 0);
                field_1115800 = local_88;
            }
            puVar53 = &field_1115824;
            bVar16 = *puVar53 == nullptr;
            local_e0 = (shared_ptr<Array<graphics::Pix8> _>*)puVar53;
            if (bVar16) {
                local_88 = graphics::pixloader::Makepix8Array(*m_pSprites, field_55024, 0);
                cVar17 = local_88.empty();
                if (!cVar17) {
                    make_shared<Array<graphics::Pix8>, Array<graphics::Pix8>>((ReturnValue*)local_50, &local_88);
                    *puVar53 = *local_50;
                }
            } else {
                iVar35 = iVar35 + 1;
            }
            puVar53 = &field_8152;
            pMVar48 = (Minimap*)(*puVar53).operator->();
            local_120 = shared_ptr(local_b0);
            uVar3 = field_54980;
            uVar4 = field_54988;
            uVar5 = field_54992;
            uVar6 = field_54996;
            uVar7 = field_55000;
            uVar8 = field_55004;
            uVar9 = field_55008;
            uVar10 = field_55012;
            uVar11 = field_55016;
            uVar12 = field_55020;
            graphicsDefaults.field_44 = field_55024;
            graphicsDefaults.field_40 = uVar12;
            graphicsDefaults.field_36 = uVar11;
            graphicsDefaults.field_32 = uVar10;
            graphicsDefaults.field_28 = uVar9;
            graphicsDefaults.field_24 = uVar8;
            graphicsDefaults.field_20 = uVar7;
            graphicsDefaults.field_16 = uVar6;
            graphicsDefaults.field_12 = uVar5;
            graphicsDefaults.field_8 = uVar4;
            graphicsDefaults._0_8_ = uVar3;
            graphicsDefaults._48_4_ = in_stack_fffffffffffffe78;
            local_b8 = this;
            iVar36 = pMVar48->TryLoadResources(&local_120, field_144, graphicsDefaults, m_pSprites);
            if (iVar36 + iVar35 < 11) {
                local_a8 = eastl::to_string(((iVar36 + iVar35) * 100) / 11);
                *local_50 + (*((eastl::string*)&constants::text::mainload80));
                local_88 + *local_50;
                (*((eastl::string*)&TitleScreen::m_loadString)) = &local_88;
                TitleScreen::m_loadPos = 70;
            } else {
                pMVar48 = (Minimap*)(*puVar53).operator->();
                pCVar14 = local_b8;
                local_88[0].field_0._0_4_ = 0;
                groundDecor = &local_b8->field_19128[local_88];
                local_110 = shared_ptr(groundDecor);
                pMVar48->SetDotStyles(&local_110);
                pMVar48 = (Minimap*)(*puVar53).operator->();
                this_06 = (shared_ptr<graphics::Pix32>*)pMVar48->GetMapEdgeArrow();
                ((Pix32*)(*this_06).operator->())->Untrim();
                (*((shared_ptr<Array<graphics::Pix8>>*)&jstring::PixfontGeneric::m_inlineImages)) = *local_e0;
                iVar35 = ((Random*)&jag::math::g_Rand)->Rand(21);
                iVar36 = ((Random*)&jag::math::g_Rand)->Rand(21);
                iVar37 = ((Random*)&jag::math::g_Rand)->Rand(21);
                iVar38 = ((Random*)&jag::math::g_Rand)->Rand(41);
                this_08 = (Array<graphics::Pix8>*)**local_b0;
                ((Pix8*)(*this_08)[0])->RgbAdjust(iVar38 + iVar35 - 30, iVar38 + iVar36 - 30, iVar38 + iVar37 - 30);
                this_10 = (Minimenu*)operator new(69080);
                pPVar49 = (PixfontGeneric*)*pCVar14->field_1104240;
                new (this_10) minimenu::Minimenu(*pPVar49, *local_c0, pCVar14->field_8425, *pCVar14->m_pSprites);
                pCVar14->field_52344 = this_10;
                this_11 = (GameOptions*)pCVar14->field_8384.operator->();
                bVar16 = (bool)this_11->GetDrawMinimenuHeader();
                this_10->SetDrawHeader(bVar16);
                (*((eastl::string*)&TitleScreen::m_loadString)) = ((eastl::string*)&constants::text::mainload80b);
                TitleScreen::m_loadPos = 70;
                pCVar14->field_54956 = 9;
            }
            break;
        case 9:
            puVar45 = (uint8_t*)field_54464->RequestFullDownload();
            if (puVar45 == DataStatus::READY) {
                pDVar46 = (DeviceOptions*)field_8376.operator->();
                local_50[0] = (float)pDVar46->GetGamma();
                local_a8.field_0._0_4_ = 20;
                local_d0[0] = (unsigned int)(m_lowMem == false) * 64 + 64;
                make_shared<dash3d::TextureCache, jagex3::Js5*&, jagex3::Js5*&, int, float const&, int>(
                    &local_88, (Js5**)&field_54464, (Js5**)&m_pSprites, (int*)&local_a8, (float*)local_50, local_d0);
                *field_1120504 = local_88;
                local_100 = shared_ptr(field_1120504);
                dash3d::Pix3D::SetTextures(&local_100);
                dash3d::Pix3D::InitColourTable((double)local_50[0]);
                field_54956 = 10;
                return;
            }
            local_88 + (*((value_type*)&constants::text::mainload90));
            (*((eastl::string*)&TitleScreen::m_loadString)) = &local_88;
            this_14 = &local_88;
            goto LAB_1000c833c;
        case 10:
            iVar35 = ((TextureCache*)(*field_1120504).operator->())->RequestTextureImageDownloadPercent();
            if (99 < iVar35) {
                OSRenderCore_LogicThread_RSeven::Instance()->SetMaterials(*field_54464);
                (*((eastl::string*)&TitleScreen::m_loadString)) = ((eastl::string*)&constants::text::mainload90b);
                TitleScreen::m_loadPos = 90;
                field_54956 = 11;
                return;
            }
            local_a8 = eastl::to_string(iVar35);
            *local_50 + (*((eastl::string*)&constants::text::mainload90));
            local_88 + *local_50;
            (*((eastl::string*)&TitleScreen::m_loadString)) = &local_88;
            this_14 = &local_a8;
        LAB_1000c833c:
            this_14->~basic_string();
            TitleScreen::m_loadPos = 90;
            break;
        case 11:
            cVar17 = field_54472->RequestDownload("huffman", "");
            if (!cVar17) {
                local_88 + (*((value_type*)&constants::text::mainload120));
                (*((eastl::string*)&TitleScreen::m_loadString)) = &local_88;
                TitleScreen::m_loadPos = 94;
            } else {
                local_88 = shared_ptr();
                field_54472->GetFile(local_88, "huffman");
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_88;
                *local_50 = std::make_unique<game::WordPack, PacketJ<Array<unsigned char>>&>(*packetJ);
                field_54176 = *local_50;
                (*((eastl::string*)&TitleScreen::m_loadString)) = ((eastl::string*)&constants::text::mainload120b);
                TitleScreen::m_loadPos = 94;
                field_54956 = 12;
            }
            break;
        case 12:
            puVar45 = (uint8_t*)field_54416->RequestFullDownload();
            if (puVar45 == DataStatus::READY) {
                puVar45 = (uint8_t*)m_pClientScripts->RequestFullDownload();
                if (puVar45 == DataStatus::READY) {
                    puVar45 = (uint8_t*)field_54496->RequestFullDownload();
                    if (puVar45 == DataStatus::READY) {
                        cVar17 = m_pClientScripts->GetDoesFileExist("version.dat", "");
                        if (cVar17) {
                            make_shared<PacketJ<Array<unsigned char>>>(&local_88);
                            m_pClientScripts->GetFile(local_88, "version.dat");
                            uVar18 = ((PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_88.operator->())->g2();
                            field_54708 = (unsigned int)uVar18;
                        }
                        (*((eastl::string*)&TitleScreen::m_loadString)) =
                            ((eastl::string*)&constants::text::mainload130b);
                        TitleScreen::m_loadPos = 98;
                        field_54956 = 13;
                        return;
                    }
                    iVar35 = field_54496->GetDataPercent();
                    local_a8 = eastl::to_string(iVar35 / 50 + 96);
                    *local_50 + (*((eastl::string*)&constants::text::mainload130));
                    local_88 + *local_50;
                    (*((eastl::string*)&TitleScreen::m_loadString)) = &local_88;
                } else {
                    iVar35 = m_pClientScripts->GetDataPercent();
                    local_a8 = eastl::to_string(iVar35 / 6 + 80);
                    *local_50 + (*((eastl::string*)&constants::text::mainload130));
                    local_88 + *local_50;
                    (*((eastl::string*)&TitleScreen::m_loadString)) = &local_88;
                }
            } else {
                iVar35 = field_54416->GetDataPercent();
                local_a8 = eastl::to_string((iVar35 << 2) / 5);
                *local_50 + (*((eastl::string*)&constants::text::mainload130));
                local_88 + *local_50;
                (*((eastl::string*)&TitleScreen::m_loadString)) = &local_88;
            }
            TitleScreen::m_loadPos = 96;
            break;
        case 13:
            TitleScreen::m_loadPos = 100;
            cVar17 = field_54520->RequestGroupDownload("details");
            if (!cVar17) {
                iVar35 = field_54520->GetGroupLoadPercentage("details");
                local_a8 = eastl::to_string(iVar35 / 10);
                *local_50 + (*((eastl::string*)&constants::text::mainload140));
                local_88 + *local_50;
                (*((eastl::string*)&TitleScreen::m_loadString)) = &local_88;
            } else {
                if (m_pWorldmap == nullptr) {
                    this_04 = (Worldmap*)operator new(808);
                    ___bzero(this_04, 808);
                    new (this_04) worldmap::Worldmap();
                    m_pWorldmap = this_04;
                    pJVar40 = (Js5*)field_54520;
                    pJVar2 = (Js5*)field_54528;
                    pSVar39 = field_54536;
                    new (&local_f0) shared_ptr(&field_1104240);
                    local_b8 = this;
                    worldmap::Worldmap::Init(this_04, pJVar40, pJVar2, pSVar39, local_f0, field_19128);
                    this = local_b8;
                }
                (*((eastl::string*)&TitleScreen::m_loadString)) = ((eastl::string*)&constants::text::mainload140b);
                field_54956 = 14;
            }
            break;
        case 14:
            if (field_54168 == *(int*)(ModeWhere::LIVE + 8)) {
                puVar53 = &field_8376;
                pDVar46 = (DeviceOptions*)(*puVar53).operator->();
                iVar35 = pDVar46->GetLastWorldId();
                if (iVar35 != 0) {
                    cVar17 = pDVar46->ListFetch();
                    if (!cVar17)
                        goto switchD_1000c72b5_default;
                    pDVar46 = (DeviceOptions*)(*puVar53).operator->();
                    iVar35 = pDVar46->GetDefaultWorldId();
                    gameWorld = GameWorld::GetByID(iVar35);
                    if (gameWorld == nullptr) {
                        pDVar46 = (DeviceOptions*)(*puVar53).operator->();
                        iVar35 = pDVar46->GetLastWorldId();
                        gameWorld = GameWorld::GetByID(iVar35);
                        if (gameWorld == nullptr)
                            goto LAB_1000c85eb;
                    }
                    TitleScreen::SwitchToWorld(*gameWorld);
                }
            }
        LAB_1000c85eb:
            field_54956 = 15;
        default:
        switchD_1000c72b5_default:
            if (field_54956 == 15) {
                SetMainState(10);
            }
        }
    }

    // 0x1000ce540
    void Client::MapBuildLoop() {
        unsigned int arg4;
        unsigned int uVar1;
        Js5* pJVar2;
        bool bVar3;
        Client* pCVar4;
        Array<shared_ptr<PacketJ<Array<unsigned char>>>>* this_00;
        bool bVar5;
        bool cVar6;
        int iVar7;
        int iVar8;
        uint32_t uVar9;
        unsigned long uVar11;
        int* piVar12;
        shared_ptr<configdecoder::ObjType>* psVar13;
        shared_ptr<PacketJ<Array<unsigned char> _> _>* psVar14;
        array<int, _4ul>* arg4_00;
        CoordMapSquare* pCVar15;
        PacketJ<Array<unsigned char> _>* pPVar16;
        PacketT<Array<unsigned char>>* pPVar17;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar18;
        shared_ptr<PacketJ<Array<unsigned char>>>* psVar19;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar20;
        world* pwVar21;
        Logger* pLVar22;
        Minimap* pMVar23;
        Js5RequestKey* pJVar24;
        array<rs2lib::CoordZoneSource, 13ul>* this_02;
        unsigned long uVar25;
        long lVar26;
        LocInfo* pLVar27;
        LocInfo* pLVar28;
        ClientBuild* pCVar29;
        ServerConnection* pSVar30;
        Isaac* pIVar31;
        fixed_vector<movement::CollisionMap, _4ul>* collisionMaps;
        basic_ostream<char, std::char_traits<char> _>* pbVar32;
        char* pcVar33;
        unsigned int uVar35;
        int iVar36;
        unsigned long uVar37;
        uint8_t* puVar38;
        Client* pCVar39;
        array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>* paVar40;
        uint8_t bVar41;
        int iVar42;
        int iVar43;
        uint32_t in_stack_fffffffffffffdd0;
        uint32_t in_stack_fffffffffffffdd4;
        eastl::string local_228;
        uint8_t local_208[16];
        basic_ostream<char, std::char_traits<char> _> local_1f8;
        array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>* local_f0;
        CoordMapSquare local_e8;
        eastl::string local_c8;
        int local_a4;
        uint64_t local_a0;
        array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>* local_98;
        unsigned long local_90;
        ClientBuild* local_88;
        fixed_vector<movement::CollisionMap, _4ul>* local_80;
        unique_ptr<dash3d::world>* local_78;
        Array<std::array<int, 4ul>>* local_70;
        Array<int>* local_60;
        PacketJ<Array<unsigned char> _>* local_50;
        Array<int>* local_40;

        PreventTimeout(false);
        field_53236 = 0;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar44 =
            (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_1104392;
        Array<shared_ptr<PacketJ<Array<unsigned char>>>>* pAVar34 =
            (Array<shared_ptr<PacketJ<Array<unsigned char>>>>*)&field_1104416;
        Array<shared_ptr<PacketJ<Array<unsigned char>>>>* local_68 =
            (Array<shared_ptr<PacketJ<Array<unsigned char>>>>*)&field_1104440;
        long lVar10 = pvVar44->end();
        Array<shared_ptr<PacketJ<Array<unsigned char>>>>* local_58 = pAVar34;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_48 = pvVar44;
        Client* local_38 = this;
        if (lVar10 == 0) {
            local_50 = (PacketJ<Array<unsigned char> _>*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)1);
        } else {
            local_40 = (Array<int>*)&field_1104320;
            local_70 = (Array<std::array<int, 4ul>>*)&field_1104368;
            local_60 = (Array<int>*)&field_1104344;
            local_50 =
                (PacketJ<Array<unsigned char> _>*)(((uint64_t)local_50._4_4_ << 32) |
                                                   (uint32_t)((
                                                       int)(((uint64_t)((int64_t)((unsigned long)local_60 >> 8)) << 8) |
                                                            (uint8_t)1)));
            uVar37 = 0;
            do {
                piVar12 = &field_1104296[uVar37];
                if (*piVar12 != -1) {
                    psVar13 = (shared_ptr<configdecoder::ObjType>*)(*pvVar44)[uVar37];
                    bVar5 = *psVar13 == nullptr;
                    if (bVar5) {
                        pJVar2 = (Js5*)local_38->field_54432;
                        psVar14 = (shared_ptr<PacketJ<Array<unsigned char> _> _>*)(*pvVar44)[uVar37];
                        piVar12 = &field_1104296[uVar37];
                        pAVar34 = local_58;
                        pJVar2->GetFile(*psVar14, *piVar12, 0, nullptr);
                        psVar13 = (shared_ptr<configdecoder::ObjType>*)(*pvVar44)[uVar37];
                        bVar5 = *psVar13 == nullptr;
                        if (bVar5) {
                            local_38->field_53236 = local_38->field_53236 + 1;
                            local_50 =
                                (PacketJ<Array<unsigned char> _>*)((unsigned long)local_50 & 18446744069414584320);
                        }
                    }
                }
                piVar12 = (int*)(*local_40)[uVar37];
                if (*piVar12 != -1) {
                    psVar13 = (shared_ptr<configdecoder::ObjType>*)(*pAVar34)[uVar37];
                    bVar5 = *psVar13 == nullptr;
                    if (bVar5) {
                        pJVar2 = (Js5*)local_38->field_54432;
                        psVar14 = (shared_ptr<PacketJ<Array<unsigned char> _> _>*)(*pAVar34)[uVar37];
                        piVar12 = (int*)(*local_40)[uVar37];
                        iVar7 = *piVar12;
                        arg4_00 = (array<int, _4ul>*)(*local_70)[uVar37];
                        pvVar44 = local_48;
                        pAVar34 = local_58;
                        pJVar2->GetFile(*psVar14, iVar7, 0, arg4_00);
                        psVar13 = (shared_ptr<configdecoder::ObjType>*)(*pAVar34)[uVar37];
                        bVar5 = *psVar13 == nullptr;
                        if (bVar5) {
                            local_38->field_53236 = local_38->field_53236 + 1;
                            local_50 =
                                (PacketJ<Array<unsigned char> _>*)((unsigned long)local_50 & 18446744069414584320);
                        }
                    }
                }
                piVar12 = (int*)(*local_60)[uVar37];
                this_00 = local_68;
                if (*piVar12 != -1) {
                    psVar13 = (shared_ptr<configdecoder::ObjType>*)(*local_68)[uVar37];
                    bVar5 = *psVar13 == nullptr;
                    if (bVar5) {
                        pJVar2 = (Js5*)local_38->field_54432;
                        psVar14 = (shared_ptr<PacketJ<Array<unsigned char> _> _>*)(*this_00)[uVar37];
                        piVar12 = (int*)(*local_60)[uVar37];
                        pvVar44 = local_48;
                        pAVar34 = local_58;
                        pJVar2->GetFile(*psVar14, *piVar12, 0, nullptr);
                        psVar13 = (shared_ptr<configdecoder::ObjType>*)(*this_00)[uVar37];
                        bVar5 = *psVar13 == nullptr;
                        if (bVar5) {
                            local_38->field_53236 = local_38->field_53236 + 1;
                            local_50 =
                                (PacketJ<Array<unsigned char> _>*)((unsigned long)local_50 & 18446744069414584320);
                        }
                    }
                }
                uVar37 = uVar37 + 1;
                uVar11 = pvVar44->end();
            } while (uVar37 < uVar11);
        }
        if (((unsigned long)local_50 & 1) == 0) {
            local_38->field_53252 = 1;
        } else {
            local_38->field_53244 = 0;
            puVar38 = &local_38->field_1104272;
            lVar10 = pvVar44->end();
            bVar41 = 1;
            if (lVar10 != 0) {
                uVar37 = 0;
                do {
                    psVar18 = (shared_ptr<midi2::MidiPlayerMainThread>*)(*pAVar34)[uVar37];
                    bVar5 = *psVar18 != nullptr;
                    if (bVar5) {
                        local_60 = (Array<int>*)(((uint64_t)local_60._1_7_ << 8) | (uint8_t)bVar41);
                        local_40 = (Array<int>*)psVar18;
                        psVar19 = (shared_ptr<PacketJ<Array<unsigned char>>>*)(*pAVar34)[uVar37];
                        phVar20 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                             eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                             eastl::equal_to<long long>, eastl::hash<long long>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, true, true>*)(*psVar19)
                                      .operator->();
                        lVar10 = phVar20->size();
                        if (lVar10 != 0) {
                            LogAssert("m_mapBuildLocationData[n]->GetPos() == 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                      "osclient/client.cpp",
                                      4681, nullptr);
                        }
                        pCVar15 = (CoordMapSquare*)(*puVar38)[uVar37];
                        iVar7 = pCVar15->GetX();
                        pCVar4 = local_38;
                        iVar42 = iVar7 * 64 - local_38->field_53220;
                        pCVar15 = (CoordMapSquare*)(*puVar38)[uVar37];
                        iVar7 = pCVar15->GetZ();
                        iVar7 = iVar7 * 64 - pCVar4->field_53224;
                        if (pCVar4->m_mapBuildRegionMode != false) {
                            iVar7 = 10;
                            iVar42 = 10;
                        }
                        pPVar16 = (PacketJ<Array<unsigned char> _>*)**local_40;
                        iVar7 = ClientBuild::CheckLocations(*pPVar16, iVar42, iVar7);
                        pCVar4->field_53244 = pCVar4->field_53244 + iVar7;
                        bVar41 = (uint8_t)local_60 & iVar7 == 0;
                        pPVar17 = (PacketT<Array<unsigned char>>*)(*local_40).operator->();
                        pPVar17->SetPos(0);
                        pAVar34 = local_58;
                    }
                    uVar37 = uVar37 + 1;
                    uVar11 = local_48->end();
                } while (uVar37 < uVar11);
            }
            if (bVar41 == 0) {
                local_38->field_53252 = 2;
            } else {
                if (local_38->field_53252 != 0) {
                    local_228 + (*((value_type*)&constants::text::loading));
                    local_e8 + local_228;
                    local_c8 + local_e8;
                    *local_208 + local_c8;
                    MessageBox(local_38, (eastl::string*)local_208, true);
                }
                pCVar4 = local_38;
                local_78 = (unique_ptr<dash3d::world>*)&local_38->field_19184;
                pwVar21 = (world*)(*local_78).operator->();
                pwVar21->ResetMap();
                local_80 = (fixed_vector<movement::CollisionMap, _4ul>*)&pCVar4->field_6814744;
                uVar37 = 0;
                do {
                    ((CollisionMap*)(*local_80)[uVar37])->Reset();
                    uVar37 = uVar37 + 1;
                } while (uVar37 != 4);
                iVar7 = 0;
                do {
                    iVar42 = 0;
                    do {
                        pLVar27 = nullptr;
                        do {
                            pcVar33 = (char*)pLVar27;
                            iVar8 = (int)pcVar33;
                            ClientBuild::Write3DArray<signed char>((Array<signed char>*)&ClientBuild::m_mapl, iVar7,
                                                                   iVar42, iVar8, '\0');
                            pCVar4 = local_38;
                            uVar35 = iVar8 + 1;
                            pLVar27 = (LocInfo*)(unsigned long)uVar35;
                        } while (uVar35 != 104);
                        iVar42 = iVar42 + 1;
                    } while (iVar42 != 104);
                    iVar7 = iVar7 + 1;
                } while (iVar7 != 4);
                local_38->m_entityOverlays->DestroyAllStaticOverlays();
                if (pCVar4->field_54760 != '\0') {
                    pLVar22 = logger::default_logger();
                    pcVar33 =
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp";
                    pLVar22->Log(
                        false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        4740, "clientbuild init");
                }
                ClientBuild::Init();
                local_40 = (Array<int>*)local_48->end();
                bgsound::Reset();
                pCVar4 = local_38;
                PreventTimeout(local_38, true);
                local_c8 = eastl::vector<LocInfo, BucketAllocatorEASTL>();
                if (pCVar4->m_mapBuildRegionMode == false) {
                    if (local_38->field_54760 != '\0') {
                        pLVar22 = logger::default_logger();
                        pcVar33 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client.cpp";
                        pLVar22->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client.cpp",
                                     4760, "loading ground");
                    }
                    if (local_40 != nullptr) {
                        paVar40 = nullptr;
                        do {
                            pCVar15 = (CoordMapSquare*)(*puVar38)[(unsigned long)paVar40];
                            iVar7 = pCVar15->GetX();
                            pCVar4 = local_38;
                            uVar35 = local_38->field_53220;
                            pCVar15 = (CoordMapSquare*)(*puVar38)[(unsigned long)paVar40];
                            iVar42 = pCVar15->GetZ();
                            uVar1 = pCVar4->field_53224;
                            psVar18 = (shared_ptr<midi2::MidiPlayerMainThread>*)(*local_48)[(unsigned long)paVar40];
                            bVar5 = *psVar18 != nullptr;
                            if (bVar5) {
                                phVar20 =
                                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                               eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                               eastl::equal_to<long long>, eastl::hash<long long>,
                                               eastl::mod_range_hashing, eastl::default_ranged_hash,
                                               eastl::prime_rehash_policy, false, true, true>*)(*psVar18)
                                        .operator->();
                                lVar10 = phVar20->size();
                                if (lVar10 != 0) {
                                    LogAssert("packet->GetPos() == 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/client.cpp",
                                              4771, nullptr);
                                }
                                pPVar16 = (PacketJ<Array<unsigned char> _>*)**psVar18;
                                arg4 = local_38->field_53228 * 8 - 48;
                                pcVar33 = (char*)(unsigned long)arg4;
                                ClientBuild::LoadGround(*pPVar16, iVar7 * 64 - uVar35, iVar42 * 64 - uVar1, arg4,
                                                        local_38->field_53232 * 8 - 48, *local_80);
                                pPVar17 = (PacketT<Array<unsigned char>>*)(*psVar18).operator->();
                                pPVar17->SetPos(0);
                            }
                            pCVar4 = local_38;
                            paVar40 = paVar40 + 1;
                        } while (local_40 != (Array<int>*)paVar40);
                        if (local_40 != nullptr) {
                            paVar40 = nullptr;
                            do {
                                pCVar15 = (CoordMapSquare*)(*puVar38)[(unsigned long)paVar40];
                                iVar7 = pCVar15->GetX();
                                uVar35 = pCVar4->field_53220;
                                pCVar15 = (CoordMapSquare*)(*puVar38)[(unsigned long)paVar40];
                                iVar42 = pCVar15->GetZ();
                                uVar1 = pCVar4->field_53224;
                                psVar13 = (shared_ptr<configdecoder::ObjType>*)(*local_48)[(unsigned long)paVar40];
                                bVar5 = *psVar13 == nullptr;
                                if ((bVar5) && (local_38->field_53232 < 800)) {
                                    pcVar33 = (char*)64;
                                    ClientBuild::FadeAdjacent(iVar7 * 64 - uVar35, iVar42 * 64 - uVar1, 64, 64);
                                }
                                paVar40 = paVar40 + 1;
                            } while (local_40 != (Array<int>*)paVar40);
                        }
                    }
                    PreventTimeout(local_38, true);
                    if (local_38->field_54760 != '\0') {
                        pLVar22 = logger::default_logger();
                        pcVar33 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client.cpp";
                        pLVar22->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client.cpp",
                                     4798, "loading locations");
                    }
                    if (local_40 != nullptr) {
                        paVar40 = nullptr;
                        do {
                            psVar18 = (shared_ptr<midi2::MidiPlayerMainThread>*)(*local_58)[(unsigned long)paVar40];
                            bVar5 = *psVar18 != nullptr;
                            if (bVar5) {
                                pCVar15 = (CoordMapSquare*)(*puVar38)[(unsigned long)paVar40];
                                iVar7 = pCVar15->GetX();
                                uVar35 = local_38->field_53220;
                                pCVar15 = (CoordMapSquare*)(*puVar38)[(unsigned long)paVar40];
                                iVar42 = pCVar15->GetZ();
                                uVar1 = local_38->field_53224;
                                phVar20 =
                                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                               eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                               eastl::equal_to<long long>, eastl::hash<long long>,
                                               eastl::mod_range_hashing, eastl::default_ranged_hash,
                                               eastl::prime_rehash_policy, false, true, true>*)(*psVar18)
                                        .operator->();
                                lVar10 = phVar20->size();
                                if (lVar10 != 0) {
                                    LogAssert("packet->GetPos() == 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/client.cpp",
                                              4810, nullptr);
                                }
                                local_60 = (Array<int>*)psVar18;
                                iVar8 = **psVar18;
                                collisionMaps = (fixed_vector<movement::CollisionMap, _4ul>*)**local_78;
                                ClientBuild::LoadLocations(*local_208, iVar8, iVar7 * 64 - uVar35,
                                                           *((world*)(unsigned long)(iVar42 * 64 - uVar1)),
                                                           *collisionMaps, (int)local_80);
                                pPVar17 = (PacketT<Array<unsigned char>>*)(*local_60).operator->();
                                pPVar17->SetPos(0);
                                lVar10 = local_c8.size();
                                lVar26 = local_208->size();
                                local_c8.reserve(lVar10 + lVar26);
                                pLVar27 = (LocInfo*)local_c8.end();
                                pLVar28 = (LocInfo*)local_208->HeapBeginPtr();
                                pcVar33 = (char*)local_208->end();
                                local_c8.insert<LocInfo*>(pLVar27, pLVar28, pcVar33);
                            }
                            paVar40 = paVar40 + 1;
                        } while (local_40 != (Array<int>*)paVar40);
                    }
                }
                if (local_38->m_mapBuildRegionMode != false) {
                    if (local_38->field_54760 != '\0') {
                        pLVar22 = logger::default_logger();
                        pcVar33 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client.cpp";
                        pLVar22->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client.cpp",
                                     4826, "loading regionmode ground");
                    }
                    local_98 = (array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>*)&local_38
                                   ->field_1104468;
                    pPVar16 = nullptr;
                    do {
                        local_50 = pPVar16;
                        local_f0 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)(*local_98)[(
                            unsigned long)pPVar16];
                        paVar40 = nullptr;
                        do {
                            local_40 = (Array<int>*)paVar40;
                            local_60 = (Array<int>*)(*local_f0)[(unsigned long)paVar40];
                            uVar37 = 0;
                            do {
                                pMVar23 = (Minimap*)(*local_60)[uVar37];
                                cVar6 = pMVar23->IsSet();
                                iVar7 = (int)uVar37;
                                if (cVar6) {
                                    new (local_208) rs2lib::CoordMapSquare(*pMVar23);
                                    lVar10 = puVar38->end();
                                    if (lVar10 != 0) {
                                        uVar11 = 0;
                                        do {
                                            pJVar24 = (Js5RequestKey*)(*puVar38)[uVar11];
                                            cVar6 = *pJVar24 == *local_208;
                                            if (cVar6) {
                                                psVar18 = (shared_ptr<midi2::MidiPlayerMainThread>*)(*local_48)[uVar11];
                                                bVar5 = *psVar18 != nullptr;
                                                if (bVar5) {
                                                    psVar19 =
                                                        (shared_ptr<PacketJ<Array<unsigned char>>>*)(*local_48)[uVar11];
                                                    phVar20 =
                                                        (hashtable<
                                                            long long, eastl::pair<long long const, unsigned int>,
                                                            eastl::allocator,
                                                            eastl::use_first<
                                                                eastl::pair<long long const, unsigned int>>,
                                                            eastl::equal_to<long long>, eastl::hash<long long>,
                                                            eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                            eastl::prime_rehash_policy, false, true, true>*)(*psVar19)
                                                            .operator->();
                                                    lVar10 = phVar20->size();
                                                    if (lVar10 != 0) {
                                                        LogAssert("m_mapBuildGroundData[n]->GetPos() == 0",
                                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                  "OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                                                                  4846, nullptr);
                                                    }
                                                    iVar42 = pMVar23->GetX();
                                                    iVar8 = pMVar23->GetZ();
                                                    local_70._0_4_ = iVar8;
                                                    psVar19 =
                                                        (shared_ptr<PacketJ<Array<unsigned char>>>*)(*local_48)[uVar11];
                                                    local_88 = (ClientBuild*)**psVar19;
                                                    local_a4 = (iVar42 - (int)local_40) * 8;
                                                    local_70 =
                                                        (Array<std::array<int, 4ul>>*)(((uint64_t)local_70._4_4_
                                                                                        << 32) |
                                                                                       (uint32_t)(((int)local_70 -
                                                                                                   iVar7) *
                                                                                                  8));
                                                    uVar9 = pMVar23->GetPos();
                                                    local_90 = (((uint64_t)local_90._4_4_ << 32) | (uint32_t)uVar9);
                                                    iVar42 = pMVar23->GetX();
                                                    local_a0 = (array<std::array<rs2lib::CoordZoneSource, 13ul>,
                                                                      13ul>*)((((uint64_t)local_a0._4_4_ << 32) |
                                                                               (uint32_t)(iVar42 * 8)) &
                                                                              18446744069414584376);
                                                    uVar35 = pMVar23->GetZ();
                                                    iVar42 = pMVar23->GetLevel();
                                                    pcVar33 = (char*)(unsigned long)(unsigned int)(iVar7 * 8);
                                                    local_88->LoadGroundRegion(
                                                        *local_50, (int)local_40 * 8, iVar7 * 8, (int)local_90,
                                                        (int)local_a0, (uVar35 & 7) << 3, iVar42, local_a4,
                                                        (int)local_70, (int)local_80,
                                                        *((fixed_vector<movement::CollisionMap,
                                                                        _4ul>*)(((uint64_t)in_stack_fffffffffffffdd4
                                                                                 << 32) |
                                                                                (uint32_t)in_stack_fffffffffffffdd0)));
                                                    psVar19 =
                                                        (shared_ptr<PacketJ<Array<unsigned char>>>*)(*local_48)[uVar11];
                                                    pPVar17 = (PacketT<Array<unsigned char>>*)(*psVar19).operator->();
                                                    pPVar17->SetPos(0);
                                                    goto LAB_1000cec3c;
                                                }
                                            }
                                            uVar11 = uVar11 + 1;
                                            uVar25 = puVar38->end();
                                        } while (uVar11 < uVar25);
                                    }
                                }
                                ClientBuild::AutoGroundRegion((int)local_50, (int)local_40 * 8, iVar7 * 8);
                            LAB_1000cec3c:
                                uVar37 = uVar37 + 1;
                            } while (uVar37 != 13);
                            paVar40 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)(local_40 + 1);
                        } while (paVar40 != (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)13);
                        pPVar16 = local_50 + 1;
                    } while (pPVar16 != (PacketJ<Array<unsigned char> _>*)4);
                    uVar37 = 0;
                    local_40 = (Array<int>*)(*local_98)[0];
                    do {
                        this_02 = (array<rs2lib::CoordZoneSource, 13ul>*)(*local_40)[uVar37];
                        iVar7 = 0;
                        uVar11 = 0;
                        do {
                            cVar6 = ((CoordZoneSource*)(*this_02)[uVar11])->IsSet();
                            if (!cVar6) {
                                pcVar33 = (char*)8;
                                ClientBuild::FadeAdjacent((int)uVar37 * 8, iVar7, 8, 8);
                            }
                            uVar11 = uVar11 + 1;
                            iVar7 = iVar7 + 8;
                        } while (uVar11 != 13);
                        uVar37 = uVar37 + 1;
                    } while (uVar37 != 13);
                    PreventTimeout(local_38, true);
                    if (local_38->field_54760 != '\0') {
                        pLVar22 = logger::default_logger();
                        pcVar33 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "client.cpp";
                        pLVar22->Log(false, 5,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client.cpp",
                                     4903, "loading regionmode locations");
                    }
                    pCVar29 = nullptr;
                    do {
                        local_88 = pCVar29;
                        local_a0 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)(*local_98)[(
                            unsigned long)pCVar29];
                        uVar37 = 0;
                        do {
                            local_90 = uVar37;
                            local_40 = (Array<int>*)(*local_a0)[uVar37];
                            uVar37 = 0;
                            do {
                                pMVar23 = (Minimap*)(*local_40)[uVar37];
                                cVar6 = pMVar23->IsSet();
                                if (cVar6) {
                                    local_e8 = rs2lib::CoordMapSquare(*pMVar23);
                                    lVar10 = puVar38->end();
                                    if (lVar10 != 0) {
                                        uVar11 = 0;
                                        do {
                                            pJVar24 = (Js5RequestKey*)(*puVar38)[uVar11];
                                            cVar6 = *pJVar24 == local_e8;
                                            if (cVar6) {
                                                psVar18 = (shared_ptr<midi2::MidiPlayerMainThread>*)(*local_58)[uVar11];
                                                bVar5 = *psVar18 != nullptr;
                                                if (bVar5) {
                                                    psVar19 =
                                                        (shared_ptr<PacketJ<Array<unsigned char>>>*)(*local_58)[uVar11];
                                                    phVar20 =
                                                        (hashtable<
                                                            long long, eastl::pair<long long const, unsigned int>,
                                                            eastl::allocator,
                                                            eastl::use_first<
                                                                eastl::pair<long long const, unsigned int>>,
                                                            eastl::equal_to<long long>, eastl::hash<long long>,
                                                            eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                            eastl::prime_rehash_policy, false, true, true>*)(*psVar19)
                                                            .operator->();
                                                    lVar10 = phVar20->size();
                                                    if (lVar10 != 0) {
                                                        LogAssert("m_mapBuildLocationData[n]->GetPos() == 0",
                                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                  "OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                                                                  4923, nullptr);
                                                    }
                                                    psVar19 =
                                                        (shared_ptr<PacketJ<Array<unsigned char>>>*)(*local_58)[uVar11];
                                                    local_50 = (PacketJ<Array<unsigned char> _>*)**psVar19;
                                                    uVar9 = pMVar23->GetPos();
                                                    local_60 = (Array<int>*)(((uint64_t)local_60._4_4_ << 32) |
                                                                             (uint32_t)uVar9);
                                                    uVar35 = pMVar23->GetX();
                                                    local_70 =
                                                        (Array<std::array<int, 4ul>>*)(((uint64_t)local_70._4_4_
                                                                                        << 32) |
                                                                                       (uint32_t)((uVar35 & 7) << 3));
                                                    uVar35 = pMVar23->GetZ();
                                                    iVar7 = pMVar23->GetLevel();
                                                    pwVar21 = (world*)**local_78;
                                                    local_208->LoadLocationsRegion(
                                                        *local_50, (int)local_88, (int)local_90 * 8, (int)uVar37 * 8,
                                                        (int)local_60, (int)local_70, (uVar35 & 7) << 3, iVar7,
                                                        *pwVar21, *local_80, local_38->field_8488);
                                                    psVar19 =
                                                        (shared_ptr<PacketJ<Array<unsigned char>>>*)(*local_58)[uVar11];
                                                    pPVar17 = (PacketT<Array<unsigned char>>*)(*psVar19).operator->();
                                                    pPVar17->SetPos(0);
                                                    lVar10 = local_c8.size();
                                                    lVar26 = local_208->size();
                                                    local_c8.reserve(lVar10 + lVar26);
                                                    pLVar27 = (LocInfo*)local_c8.end();
                                                    pLVar28 = (LocInfo*)local_208->HeapBeginPtr();
                                                    pcVar33 = (char*)local_208->end();
                                                    local_c8.insert<LocInfo*>(pLVar27, pLVar28, pcVar33);
                                                    break;
                                                }
                                            }
                                            uVar11 = uVar11 + 1;
                                            uVar25 = puVar38->end();
                                        } while (uVar11 < uVar25);
                                    }
                                }
                                uVar37 = uVar37 + 1;
                            } while (uVar37 != 13);
                            uVar37 = local_90 + 1;
                        } while (uVar37 != 13);
                        pCVar29 = (ClientBuild*)&local_88->field_1;
                    } while (pCVar29 != (ClientBuild*)4);
                }
                lVar10 = local_68->end();
                pAVar34 = local_68;
                if (lVar10 == 0) {
                    iVar7 = 0;
                } else {
                    uVar37 = 0;
                    iVar7 = 0;
                    do {
                        psVar18 = (shared_ptr<midi2::MidiPlayerMainThread>*)(*pAVar34)[uVar37];
                        bVar5 = *psVar18 != nullptr;
                        if (bVar5) {
                            psVar19 = (shared_ptr<PacketJ<Array<unsigned char>>>*)(*local_68)[uVar37];
                            phVar20 =
                                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                           eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                           eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                           true>*)(*psVar19)
                                    .operator->();
                            lVar10 = phVar20->size();
                            if (lVar10 != 0) {
                                LogAssert("m_mapBuildEnvironmentData[n]->GetPos() == 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                          "osclient/client.cpp",
                                          4957, nullptr);
                            }
                            pCVar15 = (CoordMapSquare*)(*puVar38)[uVar37];
                            iVar42 = pCVar15->GetX();
                            uVar35 = local_38->field_53220;
                            pCVar15 = (CoordMapSquare*)(*puVar38)[uVar37];
                            iVar8 = pCVar15->GetZ();
                            uVar1 = local_38->field_53224;
                            psVar19 = (shared_ptr<PacketJ<Array<unsigned char>>>*)(*local_68)[uVar37];
                            pCVar29 = (ClientBuild*)**psVar19;
                            pCVar29->LoadEnvironmentSettings(
                                *((PacketJ<Array<unsigned char> _>*)(unsigned long)(iVar42 * 64 - uVar35)),
                                iVar8 * 64 - uVar1, (int)pcVar33);
                            psVar19 = (shared_ptr<PacketJ<Array<unsigned char>>>*)(*local_68)[uVar37];
                            pPVar17 = (PacketT<Array<unsigned char>>*)(*psVar19).operator->();
                            pPVar17->SetPos(0);
                        } else {
                            iVar7 = iVar7 + 1;
                        }
                        pAVar34 = local_68;
                        uVar37 = uVar37 + 1;
                        uVar11 = local_68->end();
                    } while (uVar37 < uVar11);
                }
                iVar42 = pAVar34->end();
                pCVar4 = local_38;
                local_38->field_7164648 = iVar7 == iVar42;
                PreventTimeout(local_38, true);
                if (pCVar4->field_54760 != '\0') {
                    pLVar22 = logger::default_logger();
                    pLVar22->Log(
                        false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        4976, "finishing map");
                }
                pwVar21 = (world*)**local_78;
                ClientBuild::FinishBuild(*pwVar21, *local_80, pCVar4->m_usingRSeven == false);
                PreventTimeout(pCVar4, true);
                OnLoadLocations(pCVar4, &local_c8);
                iVar7 = 0;
                do {
                    iVar42 = 0;
                    do {
                        iVar8 = 0;
                        do {
                            pCVar4->m_highlightManager->OnTileAdded(iVar7, iVar42, iVar8);
                            iVar36 = ClientBuild::minusedlevel;
                            iVar8 = iVar8 + 1;
                        } while (iVar8 != 104);
                        iVar42 = iVar42 + 1;
                    } while (iVar42 != 104);
                    iVar7 = iVar7 + 1;
                } while (iVar7 != 4);
                if (local_38->m_lowMem == false) {
                    pwVar21 = (world*)(*local_78).operator->();
                    pwVar21->FillBaseLevel(0);
                } else {
                    pwVar21 = (world*)(*local_78).operator->();
                    pwVar21->FillBaseLevel(iVar36);
                }
                if (local_38->field_54760 != '\0') {
                    pLVar22 = logger::default_logger();
                    pLVar22->Log(
                        false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        5023, "adding objects to map");
                }
                pCVar39 = local_38;
                iVar7 = 0;
                do {
                    iVar42 = 0;
                    do {
                        ShowObject(pCVar39, iVar7, iVar42);
                        RunUpdateObjStackTrigger(pCVar39, pCVar39->field_51984, iVar7, iVar42);
                        pvVar44 = local_48;
                        pAVar34 = local_68;
                        iVar42 = iVar42 + 1;
                    } while (iVar42 != 104);
                    iVar7 = iVar7 + 1;
                } while (iVar7 != 104);
                if (local_38->field_54760 != '\0') {
                    pLVar22 = logger::default_logger();
                    pLVar22->Log(
                        false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        5035, "correcting location changes");
                }
                LocChangePostBuildCorrect(local_38);
                ((LRUHashCache<dash3d::ModelUnlit, 500ul, 501ul, false,
                               unsigned long long>*)&configdecoder::LocType::m_mc1)
                    ->Reset();
                pCVar39 = local_38;
                cVar6 = local_38->IsWindowedApplication();
                if (cVar6) {
                    puVar38 = &pCVar39->field_19120;
                    pSVar30 = (ServerConnection*)(*puVar38).operator->();
                    pIVar31 = pSVar30->GetOutgoingEncryption();
                    *local_208 = shared::ClientMessage::MakeClientMessage(88, *pIVar31);
                    ((local_208 + 8))->p4<int>(1057001181);
                    pSVar30 = (ServerConnection*)(*puVar38).operator->();
                    pSVar30->SendClientMessage(*local_208);
                    pCVar39 = local_38;
                }
                if (pCVar39->m_mapBuildRegionMode != false) {
                    pCVar4->m_highlightManager->RebuildRegionHighlights();
                }
                lVar10 = pvVar44->end();
                if (lVar10 != 0) {
                    uVar37 = 0;
                    do {
                        new (local_208) shared_ptr();
                        psVar19 = (shared_ptr<PacketJ<Array<unsigned char>>>*)(*pvVar44)[uVar37];
                        *psVar19 = *local_208;
                        new (local_208) shared_ptr();
                        psVar19 = (shared_ptr<PacketJ<Array<unsigned char>>>*)(*local_58)[uVar37];
                        *psVar19 = *local_208;
                        new (local_208) shared_ptr();
                        psVar19 = (shared_ptr<PacketJ<Array<unsigned char>>>*)(*pAVar34)[uVar37];
                        *psVar19 = *local_208;
                        uVar37 = uVar37 + 1;
                        uVar11 = pvVar44->end();
                    } while (uVar37 < uVar11);
                }
                if (local_38->field_54760 != '\0') {
                    pLVar22 = logger::default_logger();
                    pLVar22->Log(
                        false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        5068, "done build");
                }
                if (local_38->m_mapBuildRegionMode == false) {
                    iVar7 = local_38->field_53228;
                    iVar42 = iVar7 + 1;
                    if (-1 < iVar7 - 6) {
                        iVar42 = iVar7 - 6;
                    }
                    iVar8 = local_38->field_53232;
                    iVar36 = iVar7 + 13;
                    if (-1 < iVar7 + 6) {
                        iVar36 = iVar7 + 6;
                    }
                    iVar7 = iVar8 + 1;
                    if (-1 < iVar8 - 6) {
                        iVar7 = iVar8 - 6;
                    }
                    iVar43 = iVar8 + 13;
                    if (-1 < iVar8 + 6) {
                        iVar43 = iVar8 + 6;
                    }
                    new (local_208) std::stringstream();
                    local_60 = (Array<int>*)(unsigned long)(unsigned int)(iVar42 >> 3);
                    uVar35 = (iVar42 >> 3) - 1;
                    if ((int)uVar35 <= (int)((iVar36 >> 3) + 1U)) {
                        local_58 =
                            (Array<shared_ptr<PacketJ<Array<unsigned char>>>>*)(unsigned long)(unsigned int)(iVar43 >>
                                                                                                             3);
                        local_40 = (Array<int>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)((iVar7 >> 3) - 1));
                        local_50 = (PacketJ<Array<unsigned char> _>*)(((uint64_t)local_50._4_4_ << 32) |
                                                                      (uint32_t)((iVar43 >> 3) + 1));
                        local_70 = (Array<std::array<int, 4ul>>*)(unsigned long)(unsigned int)(iVar36 >> 3);
                        do {
                            local_48 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(unsigned long)uVar35;
                            bVar5 = (int)uVar35 < (int)local_60;
                            iVar42 = (int)local_70;
                            if ((int)local_40 <= (int)local_50) {
                                pAVar34 = local_58;
                                iVar8 = (int)local_40;
                                do {
                                    if ((iVar8 < iVar7 >> 3 || (bVar5 || iVar42 < (int)uVar35)) ||
                                        ((int)pAVar34 < iVar8)) {
                                        pbVar32 = std::operator<<(&local_1f8, "m");
                                        pbVar32 =
                                            (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                                                (ostream*)pbVar32, (int)local_48);
                                        pbVar32 = std::operator<<(pbVar32, "_");
                                        std::ostream::operator<<((ostream*)pbVar32, iVar8);
                                        pJVar2 = (Js5*)local_38->field_54432;
                                        std::stringstream::str(&local_e8, (stringstream*)local_208);
                                        pcVar33 = (char*)std::string::c_str(&local_e8);
                                        pJVar2->UpdateCacheHint(pcVar33);
                                        std::string::~string(&local_e8);
                                        std::string::string<decltype(nullptr)>(&local_e8, "");
                                        std::stringstream::str(
                                            (basic_string<char, std::char_traits<char>, std::allocator<char> _>*)
                                                local_208);
                                        std::string::~string(&local_e8);
                                        pbVar32 = std::operator<<(&local_1f8, "l");
                                        pbVar32 =
                                            (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                                                (ostream*)pbVar32, (int)local_48);
                                        pbVar32 = std::operator<<(pbVar32, "_");
                                        std::ostream::operator<<((ostream*)pbVar32, iVar8);
                                        pJVar2 = (Js5*)local_38->field_54432;
                                        std::stringstream::str(&local_e8, (stringstream*)local_208);
                                        pcVar33 = (char*)std::string::c_str(&local_e8);
                                        pJVar2->UpdateCacheHint(pcVar33);
                                        std::string::~string(&local_e8);
                                        pAVar34 = local_58;
                                    }
                                    bVar3 = iVar8 <= (int)pAVar34;
                                    iVar8 = iVar8 + 1;
                                } while (bVar3);
                            }
                            uVar35 = (int)local_48 + 1;
                        } while ((int)local_48 <= (int)local_70);
                    }
                    cVar6 = local_38->m_usingRSeven;
                    pCVar4 = local_38;
                } else {
                    cVar6 = local_38->m_usingRSeven;
                    pCVar4 = local_38;
                }
                local_38 = pCVar4;
                if (cVar6) {
                    new (local_208) rs2lib::CoordGrid(0, pCVar4->field_53220, pCVar4->field_53224);
                    pwVar21 = (world*)**local_78;
                    rseven::MapRebuildHandler_LogicThread::HandleRebuild(*pwVar21, *local_208, *pCVar4->m_pSprites);
                }
                SetMainState(pCVar4, 30);
                ClientBuild::Quit();
                puVar38 = &local_38->field_19120;
                pSVar30 = (ServerConnection*)(*puVar38).operator->();
                pIVar31 = pSVar30->GetOutgoingEncryption();
                *local_208 = shared::ClientMessage::MakeClientMessage(17, *pIVar31);
                pSVar30 = (ServerConnection*)(*puVar38).operator->();
                pSVar30->SendClientMessage(*local_208);
                javapal::GameShell::DoneSlowUpdate();
                local_38->field_53256 = 1;
            }
        }
    }

    // 0x1000cfe00
    void Client::GameLoop() {
        uint8_t* puVar1;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        SuperPacket* superPacket;
        uint32_t uVar2;
        uint32_t uVar3;
        ClientInputHandler* this_02;
        bool cVar4;
        uint8_t bVar6;
        short sVar7;
        unsigned int uVar8;
        int iVar9;
        int arg5;
        ServerConnection* pSVar10;
        Isaac* pIVar11;
        long lVar12;
        unsigned int* puVar13;
        uint64_t uVar14;
        long* plVar15;
        unsigned long uVar16;
        ShuffledPacket3* pSVar17;
        ShuffledPacket4* pSVar18;
        ShuffledPacket2* pSVar19;
        shared_ptr<rs2lib::IfType>* psVar20;
        int* piVar21;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar22;
        HookReq* pHVar23;
        shared_ptr<configdecoder::ObjType>* psVar24;
        shared_ptr<ClientScript>* psVar25;
        Logger* pLVar26;
        char* pcVar27;
        InterfaceMouseEvent* interfaceMouseEvent;
        HookArg* this_03;
        __atomic_base* p_Var28;
        DeviceOptions* this_06;
        array<int, 128ul>* paVar29;
        int iVar30;
        long lVar31;
        PublishingPlatformType publishingPlatformType;
        unsigned long uVar32;
        shared_ptr<rs2lib::IfType>* psVar33;
        unsigned long uVar34;
        uint8_t* puVar35;
        bool bVar37;
        shared_ptr<dash3d::Decor> local_2a8;
        shared_ptr<dash3d::Decor> local_298;
        shared_ptr<dash3d::Decor> local_288;
        CoordType<UICoordSpecializer>* local_278;
        CoordType<UICoordSpecializer>* local_270;
        CoordType<UICoordSpecializer>* local_268;
        array<CoordType<UICoordSpecializer>, 500ul>* local_260;
        unique_ptr<ServerConnection>* local_258;
        HookArg local_250;
        unsigned int local_208[2];
        unsigned int local_200[2];
        unsigned int local_1f8[2];
        unsigned int local_1f0[2];
        unsigned int local_1e8[2];
        unsigned int local_1e0[2];
        array<CoordType<UICoordSpecializer>, 500ul>* local_1d8;
        unsigned long local_1d0;
        unsigned int local_1c0[4];
        array<unsigned long long, 500ul>* local_1b0;
        int local_1a4;
        CoordMapSquare local_1a0;
        array<int, 128ul>* local_190;
        shared_ptr<rs2lib::IfType>* local_188;
        ClientInputHandler* local_180;
        uint8_t local_178[8];
        uint8_t local_170[16];
        uint8_t local_160[8];
        uint32_t local_e4;

        if (field_54884 != '\0') {
            field_54884 = 0;
            LogAndAbort("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        5621, "Hard error unhandled");
        }
        if (1 < field_53268) {
            field_53268 = field_53268 - 1;
        }
        if (0 < field_54156) {
            field_54156 = field_54156 - 1;
        }
        if (field_1103920 != '\0') {
            field_1103920 = 0;
            LostCon();
            goto LAB_1000d1cc6;
        }
        if (m_frozen == false) {
            iVar30 = 99;
            do {
                pSVar10 = (ServerConnection*)*field_19120;
                cVar4 = TcpIn(*pSVar10);
                bVar37 = iVar30 != 0;
                iVar30 = iVar30 - 1;
                if (!cVar4)
                    break;
            } while (bVar37);
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
        DispatchInput();
        if (m_frozen == false) {
            GlUpdateMouseOverTile();
        }
        local_170._8_8_ = this;
        if (field_1104120 != '\0') {
            pSVar10 = (ServerConnection*)field_19120.operator->();
            pIVar11 = pSVar10->GetOutgoingEncryption();
            *local_160 = shared::ClientMessage::MakeClientMessage(15, *pIVar11);
            pPVar22 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_160 + 8);
            pPVar22->p1<shared::LoginProt::ID>(0);
            cVar4 = pPVar22->size();
            field_1104120.SerialiseTelemetry(*pPVar22);
            pPVar22->pSize1(pPVar22->size() - cVar4);
            pSVar10 = (ServerConnection*)field_19120.operator->();
            pSVar10->SendClientMessage(*local_160);
            field_1104120.MarkTelemetrySent();
        }
        Client* pCVar36 = (Client*)local_170._8_8_;
        WorldmapAreaMetadata* local_1c8 =
            (WorldmapAreaMetadata*)(*(NXTPixToolkit**)(local_170._8_8_ + 144))->GetScreen();
        CoordType<UICoordSpecializer>* this_08 = (CoordType<UICoordSpecializer>*)((long)pCVar36 + 10488);
        local_208->XPlotBlender<int>(4294967295);
        cVar4 = *this_08 != ((CoordType<UICoordSpecializer>*)(unsigned long)local_208[0]);
        if ((cVar4) || (39 < *(int*)((long)pCVar36 + 10520))) {
            new (local_160) shared::ClientMessage();
            local_1d8 = (array<CoordType<UICoordSpecializer>, 500ul>*)((long)pCVar36 + 12524);
            local_260 = (array<CoordType<UICoordSpecializer>, 500ul>*)((long)pCVar36 + 10524);
            local_258 = (unique_ptr<ServerConnection>*)((long)pCVar36 + 19120);
            local_1b0 = (array<unsigned long long, 500ul>*)((long)pCVar36 + 14528);
            local_268 = this_08;
            if (*(int*)((long)pCVar36 + 10520) < 1) {
                local_1d0 = 0;
                local_1a4 = 0;
                uVar8 = 0;
                uVar34 = 0;
                paVar29 = nullptr;
            } else {
                local_278 = (CoordType<UICoordSpecializer>*)((long)pCVar36 + 54856);
                local_270 = (CoordType<UICoordSpecializer>*)((long)pCVar36 + 54860);
                local_180 = (ClientInputHandler*)18446744073709551615;
                psVar20 = nullptr;
                local_190 = nullptr;
                uVar34 = 0;
                uVar32 = 0;
                local_1a4 = 0;
                uVar16 = 0;
                do {
                    uVar8 = (unsigned int)uVar32;
                    if ((((unsigned long)local_190 & 1) != 0) &&
                        (lVar12 = ((local_160 + 8))->size(), 245 < lVar12 - uVar34)) {
                        paVar29 = local_190;
                        pCVar36 = (Client*)local_170._8_8_;
                        local_1d0 = uVar16;
                        goto LAB_1000d066e;
                    }
                    puVar13 = (unsigned int*)(*local_1d8)[(unsigned long)psVar20];
                    local_1a0.m_x = *puVar13;
                    local_1c0->XPlotBlender<int>(4294967295);
                    local_178->XPlotBlender<int>(65534);
                    cVar4 = CoordType<UICoordSpecializer>::operator<(
                        (CoordType<UICoordSpecializer>*)&local_1a0,
                        (CoordType<UICoordSpecializer>*)(unsigned long)local_1c0[0]);
                    if (!cVar4) {
                        cVar4 =
                            local_1a0 > ((CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)local_178._0_4_);
                        if (cVar4) {
                            local_1a0.m_x = local_178._0_4_;
                        }
                    } else {
                        local_1a0.m_x = local_1c0[0];
                    }
                    puVar13 = (unsigned int*)(*local_260)[(unsigned long)psVar20];
                    local_170._0_4_ = *puVar13;
                    cVar4 = CoordType<UICoordSpecializer>::operator<(
                        (CoordType<UICoordSpecializer>*)local_170,
                        (CoordType<UICoordSpecializer>*)(unsigned long)local_1c0[0]);
                    if (!cVar4) {
                        cVar4 =
                            *local_170 > ((CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)local_178._0_4_);
                        if (cVar4) {
                            local_170._0_4_ = local_178._0_4_;
                        }
                    } else {
                        local_170._0_4_ = local_1c0[0];
                    }
                    cVar4 =
                        *local_278 == ((CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)local_170._0_4_);
                    if (!cVar4) {
                    LAB_1000d0220:
                        local_188 = psVar20;
                        if (((unsigned long)local_190 & 1) == 0) {
                            pSVar10 = (ServerConnection*)(*local_258).operator->();
                            pIVar11 = pSVar10->GetOutgoingEncryption();
                            local_250 = shared::ClientMessage::MakeClientMessage(72, *pIVar11);
                            *local_160 = local_250;
                            uVar34 = ((local_160 + 8))->GetTextureAtlas();
                            psVar20 = local_188;
                            if (uVar34 < 260) {
                                LogAssert("mes.p.GetSize() >= 260",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                          "osclient/client.cpp",
                                          5768, nullptr);
                            }
                            ((local_160 + 8))->p1<shared::LoginProt::ID>(0);
                            uVar34 = ((local_160 + 8))->size();
                            uVar14 = ((local_160 + 8))->SetPos(uVar34 + 2);
                            local_190 = (array<int, 128ul>*)(((uint64_t)((int64_t)((unsigned long)uVar14 >> 8)) << 8) |
                                                             (uint8_t)1);
                            uVar16 = 0;
                            local_1a4 = 0;
                        }
                        uVar14 = local_170._8_8_;
                        if (local_180 == (ClientInputHandler*)18446744073709551615) {
                            iVar30 = local_170->GetX();
                            iVar9 = local_1a0.GetX();
                            uVar8 = 2147483647;
                        } else {
                            local_1d0 = uVar16;
                            local_250.m_argType = *local_170 - ((CoordType<UICoordSpecializer>*)(unsigned long)*(
                                                                   unsigned int*)(local_170._8_8_ + 54856));
                            iVar30 = local_250.GetX();
                            local_250.m_argType =
                                local_1a0 -
                                ((CoordType<UICoordSpecializer>*)(unsigned long)*(unsigned int*)(uVar14 + 54860));
                            iVar9 = local_250.GetX();
                            psVar20 = local_188;
                            plVar15 = (long*)(*local_1b0)[(unsigned long)local_188];
                            uVar8 = (unsigned int)((unsigned long)(*plVar15 - (long)local_180) / 20);
                            local_1a4 = local_1a4 + (int)(*plVar15 - (long)local_180) + uVar8 * -20;
                            uVar16 = local_1d0;
                        }
                        *(uint32_t*)(local_170._8_8_ + 54856) = local_170._0_4_;
                        *(unsigned int*)(local_170._8_8_ + 54860) = local_1a0.m_x;
                        if (((((int)uVar8 < 8) && (-33 < iVar30)) && (iVar30 < 32)) &&
                            ((-33 < iVar9 && (iVar9 < 32)))) {
                            ((local_160 + 8))->p2<int>(iVar30 * 64 + iVar9 + uVar8 * 4096 + 2080);
                        } else if ((((int)uVar8 < 32) && (-129 < iVar30)) &&
                                   ((iVar30 < 128 && ((-129 < iVar9 && (iVar9 < 128)))))) {
                            ((local_160 + 8))->p1<shared::LoginProt::ID>(uVar8 + 128);
                            ((local_160 + 8))->p2<int>(iVar9 + iVar30 * 256 + 32896);
                        } else if ((int)uVar8 < 32) {
                            ((local_160 + 8))->p1<shared::LoginProt::ID>(uVar8 + 192);
                            local_200->XPlotBlender<int>(4294967295);
                            cVar4 = *local_170 == ((CoordType<UICoordSpecializer>*)(unsigned long)local_200[0]);
                            if (!cVar4) {
                                local_1f8->XPlotBlender<int>(4294967295);
                                cVar4 = local_1a0 == ((CoordType<UICoordSpecializer>*)(unsigned long)local_1f8[0]);
                                if (!cVar4) {
                                    uVar8 = local_170->GetX();
                                    iVar30 = local_1a0.GetX();
                                    psVar20 = local_188;
                                    ((local_160 + 8))->p4<int>((unsigned long)(uVar8 | iVar30 << 16));
                                    goto LAB_1000d05e0;
                                }
                            }
                            ((local_160 + 8))->p4<int>(2147483648);
                        } else {
                            ((local_160 + 8))->p2<int>(uVar8 & 65535 | 57344);
                            local_1f0->XPlotBlender<int>(4294967295);
                            cVar4 = *local_170 == ((CoordType<UICoordSpecializer>*)(unsigned long)local_1f0[0]);
                            if (!cVar4) {
                                local_1e8->XPlotBlender<int>(4294967295);
                                cVar4 = local_1a0 == ((CoordType<UICoordSpecializer>*)(unsigned long)local_1e8[0]);
                                if (!cVar4) {
                                    uVar8 = local_170->GetX();
                                    iVar30 = local_1a0.GetX();
                                    psVar20 = local_188;
                                    ((local_160 + 8))->p4<int>((unsigned long)(uVar8 | iVar30 << 16));
                                    goto LAB_1000d05e0;
                                }
                            }
                            ((local_160 + 8))->p4<int>(2147483648);
                        }
                    LAB_1000d05e0:
                        uVar16 = (unsigned long)((int)uVar16 + 1);
                        plVar15 = (long*)(*local_1b0)[(unsigned long)psVar20];
                        local_180 = (ClientInputHandler*)*plVar15;
                        psVar33 = psVar20;
                        if (*(long*)(local_170._8_8_ + 54864) < (long)local_180) {
                            *(ClientInputHandler**)(local_170._8_8_ + 54864) = local_180;
                        }
                    } else {
                        cVar4 = *local_270 == ((CoordType<UICoordSpecializer>*)(unsigned long)local_1a0.m_x);
                        psVar33 = psVar20;
                        if (!cVar4)
                            goto LAB_1000d0220;
                    }
                    psVar20 = psVar33 + 1;
                    uVar32 = (unsigned long)psVar33 & 4294967295;
                } while ((long)psVar20 < (long)*(int*)(local_170._8_8_ + 10520));
                uVar8 = (int)psVar20 - 1;
                paVar29 = local_190;
                pCVar36 = (Client*)local_170._8_8_;
                local_1d0 = uVar16;
            }
        LAB_1000d066e:
            this_00 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)(local_160 + 8);
            if (((unsigned long)paVar29 & 1) != 0) {
                cVar4 = this_00->size();
                this_00->pSize1(cVar4 - (char)uVar34);
                uVar16 = this_00->size();
                this_00->SetPos(uVar34);
                publishingPlatformType = local_1a4 % (int)local_1d0;
                this_00->p1<shared::LoginProt::ID>(local_1a4 / (int)local_1d0);
                this_00->p1<shared::LoginProt::ID>(publishingPlatformType);
                this_00->SetPos(uVar16);
                pSVar10 = (ServerConnection*)(*local_258).operator->();
                pSVar10->SendClientMessage(*local_160);
            }
            iVar30 = pCVar36->field_10520 - uVar8;
            if (iVar30 == 0 || pCVar36->field_10520 < (int)uVar8) {
                pCVar36->field_10520 = 0;
            } else {
                pCVar36->field_10520 = iVar30;
                uVar34 = (unsigned long)uVar8;
                ArrayCopy<CoordType<UICoordSpecializer>, 500ul>(
                    (array<CoordType<UICoordSpecializer>, _500ul>*)local_260, uVar34,
                    (array<CoordType<UICoordSpecializer>, _500ul>*)local_260, 0, (long)iVar30);
                ArrayCopy<CoordType<UICoordSpecializer>, 500ul>(
                    (array<CoordType<UICoordSpecializer>, _500ul>*)local_1d8, uVar34,
                    (array<CoordType<UICoordSpecializer>, _500ul>*)local_1d8, 0, (long)pCVar36->field_10520);
                ArrayCopy<unsigned long long, 500ul>((array<unsigned long long, _500ul>*)local_1b0, uVar34,
                                                     (array<unsigned long long, _500ul>*)local_1b0, 0,
                                                     (long)pCVar36->field_10520);
            }
            this_08 = local_268;
        }
        local_1e0->XPlotBlender<int>(4294967295);
        cVar4 = *this_08 != ((CoordType<UICoordSpecializer>*)(unsigned long)local_1e0[0]);
        if (cVar4) {
            uVar16 = pCVar36->field_10512 - pCVar36->field_54848;
            uVar34 = 32767;
            if (uVar16 < 32767) {
                uVar34 = uVar16;
            }
            pCVar36->field_54848 = pCVar36->field_10512;
            local_1a0.m_x = pCVar36->field_10492;
            local_1c0->XPlotBlender<int>(0);
            cVar4 =
                CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)&local_1a0,
                                                         (CoordType<UICoordSpecializer>*)(unsigned long)local_1c0[0]);
            if (!cVar4) {
                uVar8 = local_1c8->GetUIHeight();
                cVar4 = local_1a0 > ((CoordType<UICoordSpecializer>*)(unsigned long)uVar8);
                if (cVar4) {
                    local_1a0.m_x = local_1c8->GetUIHeight();
                }
            } else {
                local_1a0.m_x = local_1c0[0];
            }
            local_178._0_4_ = *(uint32_t*)this_08;
            cVar4 = CoordType<UICoordSpecializer>::operator<(
                (CoordType<UICoordSpecializer>*)local_178, (CoordType<UICoordSpecializer>*)(unsigned long)local_1c0[0]);
            if (!cVar4) {
                uVar8 = local_1c8->GetMinMapX();
                cVar4 = *local_178 > ((CoordType<UICoordSpecializer>*)(unsigned long)uVar8);
                if (cVar4) {
                    local_1c0[0] = local_1c8->GetMinMapX();
                    goto LAB_1000d087f;
                }
            } else {
            LAB_1000d087f:
                local_178._0_4_ = local_1c0[0];
            }
            uVar14 = local_170._8_8_;
            puVar35 = (uint8_t*)(local_170._8_8_ + 19120);
            pSVar10 = (ServerConnection*)(*puVar35).operator->();
            pIVar11 = pSVar10->GetOutgoingEncryption();
            *local_160 = shared::ClientMessage::MakeClientMessage(33, *pIVar11);
            superPacket = (SuperPacket*)(local_160 + 8);
            superPacket->p2<int>((unsigned int)(uint8_t)*(uint8_t*)(uVar14 + 10504) | (int)uVar34 * 2);
            uVar8 = local_178->GetX();
            superPacket->p2<int>(uVar8);
            uVar8 = local_1a0.GetX();
            superPacket->p2<int>(uVar8);
            pSVar10 = (ServerConnection*)(*puVar35).operator->();
            pSVar10->SendClientMessage(*local_160);
            if (*(int*)(local_170._8_8_ + 10500) != -1) {
                pSVar10 = (ServerConnection*)(*puVar35).operator->();
                pIVar11 = pSVar10->GetOutgoingEncryption();
                local_250 = shared::ClientMessage::MakeClientMessage(45, *pIVar11);
                *local_160 = local_250;
                local_250 = SuperShuffledPacketFactory(*superPacket);
                pSVar17 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                uVar8 = local_178->GetX();
                iVar30 = local_1a0.GetX();
                pSVar17->p4<unsigned int>(uVar8 | iVar30 << 16);
                pSVar18 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                pSVar18->p2<int>((int)uVar34);
                pSVar19 = (ShuffledPacket2*)local_250.HeapBeginPtr();
                pSVar19->p1<int>((*(unsigned int*)(local_170._8_8_ + 10500) & 1) +
                                 *(int*)(local_170._8_8_ + 10496) * 2);
                pSVar10 = (ServerConnection*)(*puVar35).operator->();
                pSVar10->SendClientMessage(*local_160);
            }
            pCVar36 = (Client*)local_170._8_8_;
        }
        if ((214 < pCVar36->m_serverMajorVersion) && (pCVar36->field_53140 != 0)) {
            pSVar10 = (ServerConnection*)pCVar36->field_19120.operator->();
            pIVar11 = pSVar10->GetOutgoingEncryption();
            *local_160 = shared::ClientMessage::MakeClientMessage(62, *pIVar11);
            ((local_160 + 8))->p2<int>(pCVar36->field_53140);
            pSVar10 = (ServerConnection*)pCVar36->field_19120.operator->();
            pSVar10->SendClientMessage(*local_160);
        }
        if (pCVar36->field_8608 != 0) {
            pSVar10 = (ServerConnection*)pCVar36->field_19120.operator->();
            pIVar11 = pSVar10->GetOutgoingEncryption();
            *local_160 = shared::ClientMessage::MakeClientMessage(29, *pIVar11);
            ((local_160 + 8))->p2<int>(0);
            local_180 = (ClientInputHandler*)&pCVar36->field_19120;
            psVar20 = (shared_ptr<rs2lib::IfType>*)((local_160 + 8))->size();
            lVar12 = core::SafeTime::CurrentTimeMillis();
            local_188 = psVar20;
            if (pCVar36->field_8608 != 0) {
                local_190 = (array<int, 128ul>*)(local_170._8_8_ + 8616);
                uVar34 = 0;
                do {
                    piVar21 = (int*)(*local_190)[uVar34];
                    iVar30 = *piVar21;
                    if (iVar30 != -1) {
                        lVar31 = lVar12 - *(uint64_t*)(local_170._8_8_ + 1115864);
                        if (16777214 < lVar31) {
                            lVar31 = 16777215;
                        }
                        *(long*)(local_170._8_8_ + 1115864) = lVar12;
                        local_250 = SuperShuffledPacketFactory(*((local_160 + 8)));
                        pSVar17 = (ShuffledPacket3*)local_250.HeapBeginPtr();
                        pSVar17->p1<int>(iVar30);
                        pSVar19 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                        pSVar19->p3<int>((int)lVar31);
                    }
                    uVar34 = uVar34 + 1;
                } while (uVar34 < *(unsigned long*)(local_170._8_8_ + 8608));
            }
            sVar7 = ((local_160 + 8))->size();
            ((local_160 + 8))->pSize2(sVar7 - (short)local_188);
            pCVar36 = (Client*)local_170._8_8_;
            pSVar10 = (ServerConnection*)(*local_180).operator->();
            pSVar10->SendClientMessage(*local_160);
        }
        local_180 = (ClientInputHandler*)&pCVar36->field_8496;
        if (0 < pCVar36->field_7294748) {
            pCVar36->field_7294748 = pCVar36->field_7294748 - 1;
        }
        cVar4 = local_180->KeyHeld(96);
        if ((((cVar4) || (cVar4 = local_180->KeyHeld(97), cVar4)) || (cVar4 = local_180->KeyHeld(98), cVar4)) ||
            (cVar4 = local_180->KeyHeld(99), cVar4)) {
            pCVar36->field_7294752 = 1;
        }
        if ((pCVar36->field_7294752 != '\0') && (pCVar36->field_7294748 < 1)) {
            pCVar36->field_7294748 = 20;
            pCVar36->field_7294752 = 0;
            pSVar10 = (ServerConnection*)pCVar36->field_19120.operator->();
            pIVar11 = pSVar10->GetOutgoingEncryption();
            *local_160 = shared::ClientMessage::MakeClientMessage(23, *pIVar11);
            local_250 = SuperShuffledPacketFactory(*((local_160 + 8)));
            pPVar22 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar22->p2<int>(pCVar36->field_53112);
            pSVar17 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            pSVar17->p2<int>(pCVar36->field_53108);
            pSVar10 = (ServerConnection*)pCVar36->field_19120.operator->();
            pSVar10->SendClientMessage(*local_160);
        }
        GlCheckFriendChatState(pCVar36);
        GlCheckClanState(pCVar36);
        GlCheckMinimap(pCVar36);
        if (pCVar36->field_8448 != 30)
            goto LAB_1000d1cc6;
        if (pCVar36->m_frozen == false) {
            LocChangeDoQueue(pCVar36);
            GlDoSoundsQueue(pCVar36);
            GlMovePlayers(pCVar36);
            GlMoveNpcs(pCVar36);
            GlTimeoutChat(pCVar36);
            pCVar36->field_1115692 = pCVar36->field_1115692 + 1;
        }
        local_1b0 = (array<unsigned long long, 500ul>*)&pCVar36->field_2505056;
        local_1a0.shared_ptr<FileRSevenDebugPresetProvider, void>(*local_1b0);
        local_188 = (shared_ptr<rs2lib::IfType>*)&pCVar36->field_2505072;
        local_1c0->shared_ptr<FileRSevenDebugPresetProvider, void>(*local_188);
        new (local_160) shared_ptr();
        pCVar36->field_2505144 = *local_160;
        pCVar36->field_2505172 = 0;
        pCVar36->field_2505160 = 0;
        pCVar36->field_2505224 = 0;
        cVar4 = IsPlayerAdmin(pCVar36);
        if (cVar4) {
            cVar4 = local_180->KeyHeld(107);
            if (cVar4) {
                cVar4 = local_180->KeyHeld(81);
                if ((cVar4) && (pCVar36->field_53140 != 0)) {
                    puVar35 = &pCVar36->field_52016;
                    lVar12 = (*puVar35).operator->();
                    iVar9 = *(int*)(lVar12 + 1204) - *(int*)(local_170._8_8_ + 53140);
                    iVar30 = 3;
                    if (iVar9 < 3) {
                        iVar30 = iVar9;
                    }
                    iVar9 = 0;
                    if (-1 < iVar30) {
                        iVar9 = iVar30;
                    }
                    lVar12 = (*puVar35).operator->();
                    if (iVar9 != *(int*)(lVar12 + 1204)) {
                        lVar12 = (*puVar35).operator->();
                        piVar21 = (int*)(*((lVar12 + 444)))[0];
                        iVar30 = *piVar21;
                        uVar8 = *(unsigned int*)(local_170._8_8_ + 53220);
                        lVar12 = (*puVar35).operator->();
                        piVar21 = (int*)(*((lVar12 + 484)))[0];
                        TelePlayer((Client*)local_170._8_8_, uVar8 + iVar30,
                                   *(unsigned int*)(local_170._8_8_ + 53224) + *piVar21, iVar9, false);
                    }
                    *(int*)(local_170._8_8_ + 53140) = 0;
                    pCVar36 = (Client*)local_170._8_8_;
                }
            }
        }
        local_1d8 = (array<CoordType<UICoordSpecializer>, 500ul>*)&pCVar36->field_2505104;
        bVar37 = *local_1d8 != nullptr;
        if (bVar37) {
            local_180->RequestMinimenuBuild();
        }
        cVar4 = NeedBuildMinimenu(pCVar36);
        if (cVar4) {
            pCVar36->field_52344->ResetMinimenu();
        }
        if (pCVar36->field_8606 != '\0') {
            pCVar36->field_19072->ClearFocusedComponent();
        }
        WorldmapAreaMetadata* this_01 = local_1c8;
        iVar30 = pCVar36->field_53216;
        if (iVar30 != -1) {
            local_160._0_4_ = local_1c8->GetMinMapX();
            iVar9 = local_160->GetX();
            local_250.m_argType = this_01->GetUIHeight();
            arg5 = local_250.GetX();
            LoopInterface(pCVar36, iVar30, 0, 0, iVar9, arg5, 0, 0);
            PostLoopInterface(pCVar36);
        }
        pCVar36->field_2505808 = pCVar36->field_2505808 + 1;
        pCVar36->field_52344->Sort();
        local_190 = (array<int, 128ul>*)&pCVar36->field_2506416;
        while (true) {
            paVar29 = local_190;
            cVar4 = local_190->empty();
            if (cVar4)
                break;
            pHVar23 = (HookReq*)paVar29->front();
            puVar35 = &pHVar23->field_32;
            lVar12 = (*puVar35).operator->();
            if (*(int*)(lVar12 + 8) < 0) {
            LAB_1000d1040:
                ScriptRunner::ExecuteScript(*pHVar23, 500000);
            } else {
                local_2a8 = shared_ptr(puVar35);
                psVar24 = (shared_ptr<configdecoder::ObjType>*)GetInterfaceLayer((Client*)local_170._8_8_, &local_2a8);
                bVar37 = *psVar24 == nullptr;
                if (!bVar37) {
                    lVar12 = (*psVar24).operator->();
                    cVar4 = ((lVar12 + 2000))->empty();
                    if (!cVar4) {
                        lVar12 = (*puVar35).operator->();
                        iVar30 = *(int*)(lVar12 + 8);
                        lVar12 = (*psVar24).operator->();
                        iVar9 = ((lVar12 + 2000))->end();
                        if (iVar30 < iVar9) {
                            lVar12 = (*psVar24).operator->();
                            lVar31 = (*puVar35).operator->();
                            psVar25 = (shared_ptr<ClientScript>*)(*((lVar12 + 2000)))[(long)*(int*)(lVar31 + 8)];
                            bVar37 = *psVar25 != *puVar35;
                            if (!bVar37)
                                goto LAB_1000d1040;
                        }
                    }
                }
                if (*(char*)(local_170._8_8_ + 54760) != '\0') {
                    pLVar26 = logger::default_logger();
                    lVar12 = (*puVar35).operator->();
                    uVar2 = *(uint32_t*)(lVar12 + 4);
                    lVar12 = (*puVar35).operator->();
                    uVar3 = *(uint32_t*)(lVar12 + 8);
                    lVar12 = (*puVar35).operator->();
                    pcVar27 = " (Entity overlay)";
                    if (*(char*)(lVar12 + 24) == '\0') {
                        pcVar27 = "";
                    }
                    pLVar26->Log(
                        false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        6188, "Skipping script execution for deleted component - com: %i subid: %i%s", uVar2, uVar3,
                        pcVar27);
                }
            }
            local_190->pop_front();
        }
        puVar35 = (uint8_t*)(local_170._8_8_ + 2506448);
        while (cVar4 = puVar35->empty(), !cVar4) {
            pHVar23 = (HookReq*)puVar35->front();
            puVar1 = &pHVar23->field_32;
            lVar12 = (*puVar1).operator->();
            if (*(int*)(lVar12 + 8) < 0) {
            LAB_1000d11f0:
                ScriptRunner::ExecuteScript(*pHVar23, 500000);
            } else {
                local_298 = shared_ptr(puVar1);
                psVar24 = (shared_ptr<configdecoder::ObjType>*)GetInterfaceLayer((Client*)local_170._8_8_, &local_298);
                bVar37 = *psVar24 == nullptr;
                if (!bVar37) {
                    lVar12 = (*psVar24).operator->();
                    cVar4 = ((lVar12 + 2000))->empty();
                    if (!cVar4) {
                        lVar12 = (*puVar1).operator->();
                        iVar30 = *(int*)(lVar12 + 8);
                        lVar12 = (*psVar24).operator->();
                        iVar9 = ((lVar12 + 2000))->end();
                        if (iVar30 < iVar9) {
                            lVar12 = (*psVar24).operator->();
                            lVar31 = (*puVar1).operator->();
                            psVar25 = (shared_ptr<ClientScript>*)(*((lVar12 + 2000)))[(long)*(int*)(lVar31 + 8)];
                            bVar37 = *psVar25 != *puVar1;
                            if (!bVar37)
                                goto LAB_1000d11f0;
                        }
                    }
                }
                if (*(char*)(local_170._8_8_ + 54760) != '\0') {
                    pLVar26 = logger::default_logger();
                    lVar12 = (*puVar1).operator->();
                    uVar2 = *(uint32_t*)(lVar12 + 4);
                    lVar12 = (*puVar1).operator->();
                    uVar3 = *(uint32_t*)(lVar12 + 8);
                    lVar12 = (*puVar1).operator->();
                    pcVar27 = " (Entity overlay)";
                    if (*(char*)(lVar12 + 24) == '\0') {
                        pcVar27 = "";
                    }
                    pLVar26->Log(
                        false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        6222, "Skipping script execution for deleted component - com: %i subid: %i%s", uVar2, uVar3,
                        pcVar27);
                }
            }
            puVar35->pop_front();
        }
        puVar35 = (uint8_t*)(local_170._8_8_ + 2506384);
        while (true) {
            cVar4 = puVar35->empty();
            pCVar36 = (Client*)local_170._8_8_;
            if (cVar4)
                break;
            pHVar23 = (HookReq*)puVar35->front();
            puVar1 = &pHVar23->field_32;
            lVar12 = (*puVar1).operator->();
            if (*(int*)(lVar12 + 8) < 0) {
            LAB_1000d1390:
                ScriptRunner::ExecuteScript(*pHVar23, 500000);
            } else {
                local_288 = shared_ptr(puVar1);
                psVar24 = (shared_ptr<configdecoder::ObjType>*)GetInterfaceLayer((Client*)local_170._8_8_, &local_288);
                bVar37 = *psVar24 == nullptr;
                if (!bVar37) {
                    lVar12 = (*psVar24).operator->();
                    cVar4 = ((lVar12 + 2000))->empty();
                    if (!cVar4) {
                        lVar12 = (*puVar1).operator->();
                        iVar30 = *(int*)(lVar12 + 8);
                        lVar12 = (*psVar24).operator->();
                        iVar9 = ((lVar12 + 2000))->end();
                        if (iVar30 < iVar9) {
                            lVar12 = (*psVar24).operator->();
                            lVar31 = (*puVar1).operator->();
                            psVar25 = (shared_ptr<ClientScript>*)(*((lVar12 + 2000)))[(long)*(int*)(lVar31 + 8)];
                            bVar37 = *psVar25 != *puVar1;
                            if (!bVar37)
                                goto LAB_1000d1390;
                        }
                    }
                }
                if (*(char*)(local_170._8_8_ + 54760) != '\0') {
                    pLVar26 = logger::default_logger();
                    lVar12 = (*puVar1).operator->();
                    uVar2 = *(uint32_t*)(lVar12 + 4);
                    lVar12 = (*puVar1).operator->();
                    uVar3 = *(uint32_t*)(lVar12 + 8);
                    lVar12 = (*puVar1).operator->();
                    pcVar27 = " (Entity overlay)";
                    if (*(char*)(lVar12 + 24) == '\0') {
                        pcVar27 = "";
                    }
                    pLVar26->Log(
                        false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        6256, "Skipping script execution for deleted component - com: %i subid: %i%s", uVar2, uVar3,
                        pcVar27);
                }
            }
            puVar35->pop_front();
        }
        puVar35 = (uint8_t*)(local_170._8_8_ + 2506480);
        while (cVar4 = puVar35->empty(), !cVar4) {
            interfaceMouseEvent = (InterfaceMouseEvent*)puVar35->front();
            ExecuteHardcodedMouseEvent(pCVar36, interfaceMouseEvent);
            puVar35->pop_front();
        }
        (*(Minimenu**)((long)pCVar36 + 52344))->GameLoop();
        GlWorldMap(pCVar36);
        bVar37 = *local_1d8 != nullptr;
        if (bVar37) {
            LoopIf3Drag(pCVar36);
        }
        bVar37 = (*((shared_ptr<midi2::MidiPlayerMainThread>*)((uint8_t*)((long)pCVar36 + 2505204) + 4))) != nullptr;
        if (bVar37) {
            GlIf3DragContents(pCVar36);
        }
        if (*(int*)((long)pCVar36 + 7294760) != -1) {
            puVar35 = (uint8_t*)((long)pCVar36 + 19184);
            (*puVar35).operator->();
            cVar4 = dash3d::world::HasValidGroundOpToExecute();
            if (cVar4) {
                if (*(char*)((long)pCVar36 + 54760) != '\0') {
                    pLVar26 = logger::default_logger();
                    pLVar26->Log(
                        false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        6300, "HasValidGroundMoveToExecute");
                }
                iVar9 = dash3d::world::m_groundZ;
                iVar30 = dash3d::world::m_groundX;
                if (*(int*)((long)pCVar36 + 7294760) == 1854) {
                    new (local_160)
                        rs2lib::CoordGrid(dash3d::world::m_groundY, dash3d::world::m_groundX, dash3d::world::m_groundZ);
                    cVar4 = ClientConstants::IsCoordInBuildArea(*local_160);
                    if (!cVar4) {
                        bVar37 = false;
                        goto LAB_1000d187f;
                    }
                    ScriptRunner::SetActiveTile(dash3d::world::m_groundY,
                                                iVar30 + *(unsigned int*)(local_170._8_8_ + 53220),
                                                iVar9 + *(unsigned int*)(local_170._8_8_ + 53224));
                    new (local_160) HookReq();
                    local_160->set_max_size(1, 3);
                    pCVar36 = (Client*)local_170._8_8_;
                    local_250 = HookArg(*(int*)(local_170._8_8_ + 7294764));
                    this_03 = (HookArg*)(*local_160)[0];
                    *this_03 = local_250;
                    local_e4 = 34;
                    ScriptRunner::ExecuteScript(*local_160, 500000);
                    bVar37 = true;
                } else {
                    if (*(int*)((long)pCVar36 + 7294760) != 23) {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client.cpp",
                                        6364, "m_deferredGroundOp is not a valid ground op ID");
                    }
                    local_190 = (array<int, 128ul>*)(local_170._8_8_ + 19120);
                    pSVar10 = (ServerConnection*)(*local_190).operator->();
                    pIVar11 = pSVar10->GetOutgoingEncryption();
                    *local_160 = shared::ClientMessage::MakeClientMessage(38, *pIVar11);
                    ((local_160 + 8))->p1<shared::LoginProt::ID>(5);
                    local_250 = SuperShuffledPacketFactory(*((local_160 + 8)));
                    pSVar17 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                    uVar14 = local_170._8_8_;
                    pSVar17->p2<int>(*(unsigned int*)(local_170._8_8_ + 53220) + iVar30);
                    pSVar18 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                    pSVar18->p2<int>(*(unsigned int*)(uVar14 + 53224) + iVar9);
                    pSVar18 = (ShuffledPacket4*)local_250.HeapBeginPtr();
                    this_02 = local_180;
                    cVar4 = local_180->KeyHeld(81);
                    if (!cVar4) {
                    LAB_1000d170a:
                        cVar4 = this_02->KeyHeld(81);
                        uVar8 = 0;
                        if (!cVar4) {
                            bVar6 = this_02->KeyHeld(107);
                            uVar8 = (unsigned int)bVar6;
                        }
                    } else {
                        cVar4 = this_02->KeyHeld(107);
                        uVar8 = 2;
                        if (!cVar4)
                            goto LAB_1000d170a;
                    }
                    pSVar18->p1<int>(uVar8);
                    pSVar10 = (ServerConnection*)(*local_190).operator->();
                    pSVar10->SendClientMessage(*local_160);
                    SetPlayerDestination((Client*)local_170._8_8_, iVar30, iVar9);
                    bVar37 = true;
                LAB_1000d187f:
                    pCVar36 = (Client*)local_170._8_8_;
                }
                (*puVar35).operator->();
                dash3d::world::ResetGroundOp();
                pCVar36->field_7294760 = -1;
                pCVar36->field_7294764 = -1;
                if (bVar37) {
                    local_160->destruct<highlight::NpcUID*>();
                    local_250.destruct<highlight::NpcUID*>();
                    cVar4 = local_180->PrimaryOpOnPress();
                    if (!cVar4) {
                        local_1c8->UICoordFromWindowCoord(pCVar36->field_52736 + dash3d::world::m_clickX,
                                                          pCVar36->field_52740 + dash3d::world::m_clickY, *local_160,
                                                          local_250);
                    } else {
                        local_160._0_4_ = *(uint32_t*)&pCVar36->field_19056;
                        local_250.m_argType = *(unsigned int*)&pCVar36->field_19060;
                    }
                    pCVar36->field_52344->StartFeedback(
                        (CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)local_160._0_4_,
                        (CoordType<UICoordSpecializer>*)(unsigned long)local_250.m_argType, false);
                }
            }
        }
        bVar37 = *local_1b0 != local_1a0;
        if (bVar37) {
            bVar37 = local_1a0 != nullptr;
            if (bVar37) {
                ComponentUpdated(pCVar36, (shared_ptr<rs2lib::IfType>*)&local_1a0);
            }
            bVar37 = *local_1b0 != nullptr;
            if (bVar37) {
                ComponentUpdated(pCVar36, (shared_ptr<rs2lib::IfType>*)local_1b0);
            }
        }
        bVar37 = *local_188 != *local_1c0;
        if ((bVar37) && (*(int*)&pCVar36->field_2505088 == *(int*)((long)&pCVar36->field_2505088 + 4))) {
            bVar37 = *local_1c0 != nullptr;
            if (bVar37) {
                ComponentUpdated(pCVar36, (shared_ptr<rs2lib::IfType>*)local_1c0);
            }
            bVar37 = *local_188 != nullptr;
            if (bVar37) {
                ComponentUpdated(pCVar36, local_188);
            }
        }
        bVar37 = *local_188 != nullptr;
        iVar30 = *(int*)&pCVar36->field_2505088;
        if (bVar37) {
            iVar9 = *(int*)((long)&pCVar36->field_2505088 + 4);
            if ((iVar30 < iVar9) && (*(int*)& pCVar36->field_2505088 = iVar30 + 1, iVar30 + 1 == iVar9)) {
                ComponentUpdated(pCVar36, local_188);
            }
        } else if (0 < iVar30) {
            *(int*)&pCVar36->field_2505088 = iVar30 - 1;
        }
        GlFollowCamera(pCVar36);
        if (pCVar36->field_52996 == '\0') {
            if (pCVar36->field_52997 != '\0') {
                GlCinemaCamera(pCVar36);
            }
        } else {
            SmoothResetCamera(pCVar36);
        }
        lVar12 = 627237;
        do {
            *(int*)(pCVar36->field_8 + lVar12 * 4 - 8) = *(int*)(pCVar36->field_8 + lVar12 * 4 - 8) + 1;
            lVar12 = lVar12 + 1;
        } while (lVar12 != 627242);
        ((ClientVarValues*)pCVar36->field_52488.operator->())->Service();
        iVar30 = GetIdleTimeRemaining(pCVar36);
        if (iVar30 < 1) {
            pCVar36->field_54156 = 250;
            pSVar10 = (ServerConnection*)pCVar36->field_19120.operator->();
            pIVar11 = pSVar10->GetOutgoingEncryption();
            *local_160 = shared::ClientMessage::MakeClientMessage(24, *pIVar11);
            pSVar10 = (ServerConnection*)pCVar36->field_19120.operator->();
            pSVar10->SendClientMessage(*local_160);
        }
        ((FriendSystem*)pCVar36->field_52768.operator->())->Service();
        puVar35 = &pCVar36->field_19120;
        pSVar10 = (ServerConnection*)(*puVar35).operator->();
        pSVar10->IncrementNoTimeOutTickCounter();
        pSVar10 = (ServerConnection*)(*puVar35).operator->();
        uVar34 = pSVar10->GetTicksSinceNoTimeOutPacket();
        if (50 < uVar34) {
            pSVar10 = (ServerConnection*)(*puVar35).operator->();
            pIVar11 = pSVar10->GetOutgoingEncryption();
            *local_160 = shared::ClientMessage::MakeClientMessage(40, *pIVar11);
            pSVar10 = (ServerConnection*)(*puVar35).operator->();
            pSVar10->SendClientMessage(*local_160);
            pSVar10 = (ServerConnection*)(*puVar35).operator->();
            pSVar10->ResetNoTimeOutTickCounter();
        }
        puVar35 = &pCVar36->field_8408;
        cVar4 = puVar35->operator_cast_to_bool();
        if (cVar4) {
            p_Var28 = (__atomic_base*)(*puVar35).operator->();
            iVar30 = std::__atomic_base::operator_cast_to_FolderPathRequestStatus(p_Var28);
            if (iVar30 == 1) {
                this_06 = (DeviceOptions*)pCVar36->field_8376.operator->();
                (*puVar35).operator->();
                pcVar27 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (local_160) eastl::fixed_string<char, 256>(pcVar27);
                this_06->SetScreenshotPath(*local_160);
            }
            p_Var28 = (__atomic_base*)(*puVar35).operator->();
            iVar30 = std::__atomic_base::operator_cast_to_FolderPathRequestStatus(p_Var28);
            if (iVar30 != 0) {
                new (local_160) shared_ptr();
                *puVar35 = *local_160;
            }
        }
        if (pCVar36->m_mapBuildRegionMode != false) {
            pCVar36->m_highlightManager->ServiceRegionHighlights();
        }
        ((HiscoresManager*)pCVar36->field_52776.operator->())->ServiceHTTPRequests();
        ServicePendingKeyFrameSets(pCVar36);
        pCVar36->field_7305840.Clean(500);
    LAB_1000d1cc6:
    }

    // 0x1000d2740
    void Client::OnWindowModeChanged() {
        long* plVar7;
        int* piVar9;
        NXTPixToolkit* this_02;
        float* pfVar10;
        Margin local_40;
        float local_2c;

        field_52448 = 0;
        uint8_t* this_00 = &field_8376;
        DeviceOptions* pDVar6 = (DeviceOptions*)(*this_00).operator->();
        int iVar3 = pDVar6->GetWindowWidth();
        pDVar6 = (DeviceOptions*)(*this_00).operator->();
        int iVar4 = pDVar6->GetWindowHeight();
        pDVar6 = (DeviceOptions*)(*this_00).operator->();
        int iVar5 = pDVar6->GetWindowMode();
        uint8_t bVar2 = 1;
        if (iVar5 != 2) {
            bVar2 = field_8425;
        }
        field_52456 = bVar2;
        if (field_8425 == false) {
            plVar7 = (long*)OSRenderCore_AudioThread::Instance();
            ((OSRenderCore_LogicThread_Common*)((long)plVar7 + *(long*)(*plVar7 - 24)))->SetClientSize(iVar3, iVar4);
        }
        plVar7 = (long*)OSRenderCore_AudioThread::Instance();
        long lVar1 = *(long*)(*plVar7 - 24);
        auto plVar8 = GraphicsApp::Instance();
        bVar2 = ((Window*)(**(void (**)(...))(*plVar8 + 96))(plVar8))->IsFullScreen();
        ((OSRenderCore_LogicThread_Common*)((long)plVar7 + lVar1))->SetResizable((bool)(bVar2 ^ 1));
        if (field_52456 == 0) {
            field_7164656->ResetColour();
            this_02 = (NXTPixToolkit*)GetMemoryCache();
            local_40._0_4_ = ((StaticPointLight*)this_02->GetScreen())->GetAttenuationFalloff();
            local_2c = 1.0;
            pfVar10 = std::max<float>(local_2c, local_40);
            local_40._0_4_ = *pfVar10;
            if (field_120 < 765) {
                LogAssert(
                    "m_sWidMin >= ClientConstants::MIN_FIXED_WIDTH",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                    4038, "The fixed canvas width should never be smaller than %i, it is currently set to: %i", 765);
            }
            iVar3 = jag::math::RoundFloatToInt((float)field_120 * (float)local_40._0_4_);
            iVar4 = jag::math::RoundFloatToInt((float)local_40._0_4_ * 503.0);
        } else {
            local_40 = GetTopSize();
            local_2c = 1.0762e-41;
            piVar9 = (int*)local_40.second();
            piVar9 = std::min<int>(local_2c, *piVar9);
            iVar3 = *piVar9;
            local_2c = 3.0268e-42;
            piVar9 = (int*)local_40.qw();
            piVar9 = std::min<int>(local_2c, *piVar9);
            iVar4 = *piVar9;
        }
        SetDesiredCanvasSize(iVar3, iVar4);
        if ((24 < (int)field_8448) && (field_8448 != 1000)) {
            SendWindowMode();
        }
    }

    // 0x1000d6f30
    void Client::DrawBuildInfo() {
        int iVar1;
        uint8_t uVar3;
        long lVar4;
        eastl::string* pbVar5;
        PixfontGeneric* pPVar6;
        char* pcVar7;
        int* piVar8;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        int iVar9;
        int iVar10;
        uint8_t local_8f8[48];
        PixfontGeneric* local_8c0;
        int local_8b4;
        eastl::string local_460;

        uint8_t* objType = &field_1104256;
        if ((!*objType == nullptr) && (field_144 != nullptr)) {
            *local_8f8 = GetTopSize();
            lVar4 = (*objType).operator->();
            iVar9 = *(int*)(lVar4 + 4);
            lVar4 = (*objType).operator->();
            iVar9 = iVar9 + *(int*)(lVar4 + 8);
            pbVar5 = (eastl::string*)(*objType).operator->();
            local_460 = eastl::string("server:");
            field_144->GetPix2D();
            jstring::PixfontGeneric::DrawString(*pbVar5, (int)&local_460, 0, iVar9, 16776960, *4294967295);
            local_8b4 = iVar9;
            local_460 = eastl::fixed_string<char, 1024>();
            GetServerBuildInfoPrettyPrint<char, 1024>(this, &local_460);
            pPVar6 = (PixfontGeneric*)(*objType).operator->();
            pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_688 = eastl::string(pcVar7);
            piVar8 = (int*)local_8f8->second();
            iVar9 = *piVar8;
            piVar8 = (int*)local_8f8->qw();
            iVar1 = *piVar8;
            uVar3 = field_144->GetPix2D();
            iVar9 =
                pPVar6->DrawStringMultiline(local_688, 20, local_8b4, iVar9 - 20, iVar1 - local_8b4, 16776960, -1, 0, 0,
                                            local_8b4, *((Pix2D*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3)));
            pbVar5 = (eastl::string*)(*objType).operator->();
            local_688 = eastl::string("client:");
            field_144->GetPix2D();
            iVar10 = (iVar9 + 2) * local_8b4;
            jstring::PixfontGeneric::DrawString(*pbVar5, (int)&local_688, 0, iVar10, 16776960, *4294967295);
            local_688 = eastl::fixed_string<char, 512>();
            GetClientBuildInfoPrettyPrint<char, 512>(this);
            local_8c0 = (PixfontGeneric*)(*objType).operator->();
            pcVar7 = (char*)local_688.begin();
            new ((local_8f8 + 16)) eastl::allocator("EASTL basic_string");
            local_8b0 = eastl::string(pcVar7, (local_8f8 + 16));
            piVar8 = (int*)local_8f8->second();
            iVar9 = *piVar8;
            piVar8 = (int*)local_8f8->qw();
            iVar1 = *piVar8;
            uVar3 = field_144->GetPix2D();
            iVar9 = local_8c0->DrawStringMultiline(local_8b0, 20, iVar10, iVar9 - 20, iVar1 - iVar10, 16776960, -1, 0,
                                                   0, local_8b4,
                                                   *((Pix2D*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3)));
            pbVar5 = (eastl::string*)(*objType).operator->();
            new ((local_8f8 + 16)) eastl::allocator("EASTL basic_string");
            local_8b0 = eastl::string("operating system:", (local_8f8 + 16));
            field_144->GetPix2D();
            iVar10 = iVar10 + local_8b4 + iVar9 * local_8b4;
            jstring::PixfontGeneric::DrawString(*pbVar5, (int)&local_8b0, 0, iVar10, 16776960, *4294967295);
            local_8b0 = eastl::fixed_string<char, 512>();
            GetDeviceBuildInfoPrettyPrint<char, 512>(this);
            pPVar6 = (PixfontGeneric*)(*objType).operator->();
            pcVar7 = (char*)local_8b0.begin();
            new ((local_8f8 + 16)) eastl::string(pcVar7);
            piVar8 = (int*)local_8f8->second();
            iVar9 = *piVar8;
            piVar8 = (int*)local_8f8->qw();
            iVar1 = *piVar8;
            uVar3 = field_144->GetPix2D();
            pPVar6->DrawStringMultiline(*((local_8f8 + 16)), 20, iVar10, iVar9 - 20, iVar1 - iVar10, 16776960, -1, 0, 0,
                                        local_8b4, *((Pix2D*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar3)));
            ((local_8f8 + 16))->~basic_string();
        }
    }

    // 0x1000d7500
    void Client::RebuildMap() {
        OSRenderCore_LogicThread_RSeven* pOVar2;

        bool bVar1 = field_53258;
        if (bVar1 != m_usingRSeven) {
            m_usingRSeven = bVar1;
            dash3d::g_usingRSeven = bVar1;
            if (bVar1 == false) {
                dash3d::world::m_modelLitRendererRt7 = nullptr;
            } else {
                pOVar2 = OSRenderCore_LogicThread_RSeven::Instance();
                dash3d::world::m_modelLitRendererRt7 = &pOVar2->field_16;
                ((RSevenModelLitRenderer*)dash3d::world::m_modelLitRendererRt7)->SetSpritesJs5(m_pSprites);
            }
        }
        ResetCache();
        StartRebuild(field_53228, field_53232, false);
        field_53257 = 0;
    }

    // 0x1000d7590
    void Client::MainQuit() {
        world* pwVar2;
        long* plVar4;
        void* in_RSI;

        SaveAndClosePerAccountData();
        uint8_t* puVar1 = &field_19120;
        ServerConnection* this_02 = (ServerConnection*)puVar1;
        if (puVar1 != in_RSI) {
            this_02 = (ServerConnection*)(*puVar1).operator->();
            this_02->Close();
        }
        ((DebugUIManager*)this_02->Instance())->UnregisterInputHandler();
        if (&field_2508736 != in_RSI) {
            plVar4 = (long*)field_2508736.operator->();
            (**(void (**)(...))(*plVar4 + 32))(plVar4);
        }
        if (&field_2508744 != in_RSI) {
            plVar4 = (long*)field_2508744.operator->();
            (**(void (**)(...))(*plVar4 + 32))(plVar4);
        }
        if (&field_2508480 != in_RSI) {
            plVar4 = (long*)field_2508480.operator->();
            (**(void (**)(...))(*plVar4 + 32))(plVar4);
        }
        if (&field_2508488 != in_RSI) {
            ((Js5ResourceProvider*)field_2508488.operator->())->Shutdown();
        }
        void* arg2 = nullptr;
        field_54560.reset(nullptr);
        field_7305840.Reset();
        puVar1 = &field_19184;
        if (puVar1 != arg2) {
            pwVar2 = (world*)(*puVar1).operator->();
            pwVar2->ResetMap();
            pwVar2 = (world*)(*puVar1).operator->();
            pwVar2->ResetAll();
        }
        ResetCache();
        TitleScreen::Close();
        ~AutoSingleton();
    }

    // 0x1000d76d0
    void Client::SaveAndClosePerAccountData() {
        ObjTagManager* pOVar1;
        ClientVarValues* pCVar2;

        if (GameShell3Cache::HasLoggedInAccountId() != '\0') {
            m_highlightManager->SaveToFiles();
            m_highlightManager->ResetAll();
            pOVar1 = (ObjTagManager*)field_54720.operator->();
            pOVar1->SaveTags();
            pOVar1 = (ObjTagManager*)field_54720.operator->();
            pOVar1->ResetAll();
            m_lootTrackerSaveHandler->Close();
            pCVar2 = (ClientVarValues*)field_52488.operator->();
            pCVar2->SavePermVars();
            pCVar2 = (ClientVarValues*)field_52488.operator->();
            pCVar2->ResetForNewLogin();
            GameShell3Cache::ClearLoggedInAccountId();
        }
    }

    // 0x1000d7840
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

    // 0x1000d7a40
    void Client::Destroy() {
        field_52424.reset();
        field_52472.reset();
        field_52488.reset(nullptr);
        field_52496.reset();
        field_52512.reset();
        field_52528.reset();
        field_52544.reset(nullptr);
        field_52552.reset();
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        field_52568.fill(local_30);
        field_52632.reset();
        local_30 = shared_ptr();
        field_52648.fill(local_30);
        Heatmap* heatmap = nullptr;
        field_52848.reset(nullptr);
        game::BaseVarType::Destroy();
        ScriptVarType::Destroy();
        field_52920.reset(heatmap);
        field_54176.reset(nullptr);
        field_54184.reset();
        field_54200.reset();
        field_54272.reset(nullptr);
        field_1104200.reset(nullptr);
        field_1104208.reset();
        field_1104224.reset();
        field_1104240.reset();
        field_1115784.reset();
        field_1115824.reset();
        field_1120488.reset(nullptr);
        field_1120496.reset(nullptr);
        field_1120504->reset();
        field_2505056.reset();
        field_2505072.reset();
        field_2505104.reset();
        field_2505120.reset();
        field_2505144.reset();
        ((field_2505204 + 4))->reset();
        field_2506376.reset(nullptr);
        field_2508744.reset(nullptr);
        field_2508736.reset(nullptr);
        field_8392.reset(nullptr);
        local_30 = shared_ptr();
        field_2508688.fill(*&local_30);
        field_7306800.reset(&local_30);
        field_2508968.reset();
        field_1115696.reset();
        field_52768.reset(nullptr);
        field_52016.reset();
        local_30 = shared_ptr();
        field_19216.fill(local_30);
        field_19184.reset(nullptr);
        field_8376.reset(nullptr);
        field_8384.reset(nullptr);
        field_2508480.reset(nullptr);
        field_52344 = nullptr;
        field_2508488.reset(nullptr);
        field_8400.reset(nullptr);
        field_8152.reset(nullptr);
        field_2508992->Reset();
        field_52872.Destroy();
        field_54720.reset(nullptr);
        field_52776.reset(nullptr);
        field_19200.reset(nullptr);
        field_19208.reset(nullptr);
        m_pMyThis = 0;
        Destroy();
    }

    // 0x1000d8770
    void Client::ReloadConfigs() {
        long* plVar4;
        world* pwVar5;

        auto this_00 = logger::default_logger();
        void* pvVar7 = nullptr;
        this_00->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                     1036, "Reloading new config packs.");
        SaveAndClosePerAccountData();
        if (&field_19120 != pvVar7) {
            ((ServerConnection*)field_19120.operator->())->Close();
        }
        uint8_t* puVar1 = &field_2508480;
        if (puVar1 != pvVar7) {
            plVar4 = (long*)(*puVar1).operator->();
            (**(void (**)(...))(*plVar4 + 32))(plVar4);
        }
        uint8_t* puVar2 = &field_2508488;
        if (puVar2 != pvVar7) {
            ((Js5ResourceProvider*)(*puVar2).operator->())->Shutdown();
        }
        DiscardJS5Data();
        puVar1->reset(nullptr);
        puVar2->reset(nullptr);
        pvVar7 = nullptr;
        midi2::MidiManager::Stop(100, 0);
        midi2::MidiManager::ResetPreviousSongs();
        midi2::MidiManager::ResetPendingRequests();
        midi2::MidiManager::ResetTaskList();
        field_2508680 = 0;
        bgsound::Reset();
        puVar1 = &field_2508736;
        if (puVar1 != pvVar7) {
            plVar4 = (long*)(*puVar1).operator->();
            (**(void (**)(...))(*plVar4 + 32))(plVar4);
        }
        puVar2 = &field_2508744;
        if (puVar2 != pvVar7) {
            plVar4 = (long*)(*puVar2).operator->();
            (**(void (**)(...))(*plVar4 + 32))(plVar4);
        }
        field_54184.reset();
        unsigned long uVar6 = 0;
        puVar2->reset(nullptr);
        puVar1->reset(nullptr);
        do {
            ((shared_ptr<midi2::MidiPlayerMainThread>*)field_2508688[uVar6])->reset();
            uVar6 = uVar6 + 1;
        } while (uVar6 != 3);
        field_54200.reset();
        ResetCache();
        ResetSprites();
        field_54560.reset(nullptr);
        field_7305840.Reset();
        pvVar7 = nullptr;
        field_8152.reset(nullptr);
        if (m_pWorldmap != nullptr) {
            pvVar7 = (void*)4294967295;
            m_pWorldmap->Reset(-1, -1, -1);
            m_pWorldmap = nullptr;
        }
        puVar1 = &field_19184;
        if (puVar1 != pvVar7) {
            pwVar5 = (world*)(*puVar1).operator->();
            pwVar5->ResetMap();
            pwVar5 = (world*)(*puVar1).operator->();
            pwVar5->ResetAll();
        }
        uVar6 = 0;
        do {
            ((CollisionMap*)field_6814744[uVar6])->Reset();
            uVar6 = uVar6 + 1;
        } while (uVar6 != 4);
        puVar1->reset(nullptr);
        m_entityOverlays->DestroyAllStaticOverlays();
        field_19072->ClearFocusedComponent();
        TitleScreen::Close();
        if (field_52344 != nullptr) {
            field_52344->Reset();
            field_52344 = nullptr;
        }
        field_1104200.reset(nullptr);
        field_1104208.reset();
        field_1104224.reset();
        field_1104240.reset();
        field_52488.reset(nullptr);
        field_52496.reset();
        field_52512.reset();
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        field_52568.fill(local_38);
        local_38 = shared_ptr();
        field_52648.fill(local_38);
        field_54176.reset(nullptr);
        field_54272.reset(nullptr);
        field_1120504->reset();
        local_38 = shared_ptr();
        field_19216.fill(local_38);
        game::BaseVarType::Destroy();
        ((hashtable<LoadingScreenScript::Keyframe*, eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>,
                    eastl::allocator, eastl::use_first<eastl::pair<LoadingScreenScript::Keyframe* const, unsigned int>>,
                    eastl::equal_to<LoadingScreenScript::Keyframe*>, eastl::hash<LoadingScreenScript::Keyframe*>,
                    eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                    true>*)&ScriptVarType::LOOKUP_MAP)
            ->clear();
        ScriptVarType::Destroy();
        InitJs5RemoteLoader();
        field_54956 = 0;
        SetMainState(2);
    }

    // 0x1000d8ba0
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

    // 0x1000d8d00
    void Client::ResetSprites() {
        field_1115696.reset();
        field_1115712.clear();
        field_1115736.clear();
        field_1115760.clear();
        field_1115784.reset();
        field_1115800.clear();
        field_1115824.reset();
    }

    // 0x1000d8e60
    void Client::DiscardJS5Data()::$_3::operator()(jagex3::Js5* js5) const {
        if (this != nullptr) {
            DiscardAllFiles();
        }
    }

    // 0x1000d8e70
    unsigned int Client::GetNPCCount() const {
        return m_nPCCount;
    }

    // 0x1000d8e80
    void Client::DeriveTOTPMode(bool arg1) {
        int iVar1;
        uint64_t in_register_00000031;

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            iVar1 = GetLoginManager()->GetAuthenticatorUserHash();
            if (iVar1 == 0) {
                iVar1 = 2;
            } else {
                iVar1 = ((TotpPassCodes*)field_8392.operator->())->GetTotpPassCode(iVar1);
                iVar1 = (unsigned int)(iVar1 == 0) * 2;
            }
        } else {
            iVar1 = (unsigned int)(TitleScreen::m_loginTotpRememberUser == '\0') * 2 + 1;
        }
        field_55056 = iVar1;
    }

    // 0x1000d9960
    void Client::OpenJs5(jagex3::Js5ArchiveId js5ArchiveId, bool arg2, bool arg3, bool arg4, bool arg5) {
        Logger* this_01;
        uint64_t uVar3;
        uint64_t in_register_00000009;
        uint64_t in_register_00000011;
        uint64_t in_register_00000081;
        uint64_t in_register_00000089;
        ReturnValue local_68;

        uint32_t local_44 = (uint32_t)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5);
        uint32_t local_40 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        Error local_38;
        auto plVar2 = field_2508480.operator->();
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 =
            (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))(*plVar2 + 24))(
                plVar2, js5ArchiveId, (((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) & 4294967295,
                (((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) & 4294967295, local_40, local_44, &local_38);
        uint32_t uVar5 = (uint32_t)((unsigned long)&local_38 >> 32);
        if (local_38.IsValid() != '\0') {
            this_01 = logger::default_logger();
            local_68 = local_38.GetErrorString();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_01->Log(
                false, 7,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 3727,
                "Failed to open archive %u, error %s", (((uint64_t)uVar5 << 32) | (uint32_t)js5ArchiveId), uVar3);
        }
        this_00->end();
    }

    // 0x1000d9a90
    void Client::AddPrecacheJS5(jagex3::Js5* js5, const eastl::string& str) {}

    // 0x1000db170
    void Client::LoginError(int arg1) {
        shared_ptr<ApplicationContext>* psVar3;
        long* plVar4;
        LoginManager* pLVar5;
        eastl::string* str3;
        eastl::string* str2;
        eastl::string* str1;

        unsigned int uVar1 = field_54712;
        if (uVar1 != 0) {
            field_54712 = 0;
            arg1 = uVar1;
        }
        std::unique_ptr<LoginState>::release();
        MainState mainState = 10;
        if ((arg1 & 4294967294U) == 56) {
            DeriveTOTPMode(true);
            mainState = 11;
        }
        SetMainState(mainState);
        switch (arg1) {
        case 0:
        case 1:
        case 2:
        switchD_1000db1de_caseD_0:
            if ((field_8425 == false) && (arg1 == 6))
                goto LAB_1000db25a;
            switch (arg1) {
            case 7:
                str1 = (eastl::string*)&constants::text::login7_a;
                str2 = (eastl::string*)&constants::text::login7_b;
                str3 = (eastl::string*)&constants::text::login7_c;
                break;
            case 8:
                str1 = (eastl::string*)&constants::text::login8_a;
                str2 = (eastl::string*)&constants::text::login8_b;
                str3 = (eastl::string*)&constants::text::login8_c;
                break;
            case 9:
                str1 = (eastl::string*)&constants::text::login9_a;
                str2 = (eastl::string*)&constants::text::login9_b;
                str3 = (eastl::string*)&constants::text::login9_c;
                break;
            case 10:
                str1 = (eastl::string*)&constants::text::login10_a;
                str2 = (eastl::string*)&constants::text::login10_b;
                str3 = (eastl::string*)&constants::text::login10_c;
                break;
            case 11:
                str1 = (eastl::string*)&constants::text::login11_a;
                str2 = (eastl::string*)&constants::text::login11_b;
                str3 = (eastl::string*)&constants::text::login11_c;
                break;
            case 12:
                str1 = (eastl::string*)&constants::text::login12_a;
                str2 = (eastl::string*)&constants::text::login12_b;
                str3 = (eastl::string*)&constants::text::login12_c;
                break;
            case 13:
                str1 = (eastl::string*)&constants::text::login13_a;
                str2 = (eastl::string*)&constants::text::login13_b;
                str3 = (eastl::string*)&constants::text::login13_c;
                break;
            case 14:
                str1 = (eastl::string*)&constants::text::login14_a;
                str2 = (eastl::string*)&constants::text::login14_b;
                str3 = (eastl::string*)&constants::text::login14_c;
                break;
            default:
                if ((arg1 & 4294967293U) == 65) {
                    TitleScreen::m_loginscreen = 9;
                    TitleScreen::LoginMes(*((eastl::string*)&constants::text::login65_a),
                                          *((eastl::string*)&constants::text::login65_b),
                                          *((eastl::string*)&constants::text::login65_c));
                    return;
                }
                if (arg1 == 73) {
                    TitleScreen::m_loginscreen = 6;
                    str1 = (eastl::string*)&constants::text::dateOfBirthPending1;
                    str2 = (eastl::string*)&constants::text::dateOfBirthPending2;
                    str3 = (eastl::string*)&constants::text::dateOfBirthPending3;
                } else {
                    if (arg1 == 72) {
                        TitleScreen::m_loginscreen = 32;
                        goto LAB_1000db385;
                    }
                    if (arg1 == 71) {
                        TitleScreen::m_loginscreen = 7;
                        str1 = (eastl::string*)&constants::text::dobGenericError1;
                        str2 = (eastl::string*)&constants::text::dobGenericError2;
                        str3 = (eastl::string*)&constants::text::dobGenericError3;
                    } else {
                        if (arg1 == 6) {
                            TitleScreen::m_loginscreen = 22;
                            TitleScreen::LoginMes(*((eastl::string*)&constants::text::login66_a),
                                                  *((eastl::string*)&constants::text::login66_b),
                                                  *((eastl::string*)&constants::text::login66_c));
                            return;
                        }
                        str1 = (eastl::string*)&constants::text::loginmis_a;
                        str2 = (eastl::string*)&constants::text::loginmis_b;
                        str3 = (eastl::string*)&constants::text::loginmis_c;
                    }
                }
                break;
            case 16:
                TitleScreen::LoginMes(*((eastl::string*)&constants::text::login16_a),
                                      *((eastl::string*)&constants::text::login16_b),
                                      *((eastl::string*)&constants::text::login16_c));
                TitleScreen::m_loginscreen = 33;
                return;
            case 17:
                str1 = (eastl::string*)&constants::text::login17_a;
                str2 = (eastl::string*)&constants::text::login17_b;
                str3 = (eastl::string*)&constants::text::login17_c;
                break;
            case 18:
                TitleScreen::SwitchToLoginSupport(1);
                return;
            case 19:
                str1 = (eastl::string*)&constants::text::login19_a;
                str2 = (eastl::string*)&constants::text::login19_b;
                str3 = (eastl::string*)&constants::text::login19_c;
                break;
            case 20:
                str1 = (eastl::string*)&constants::text::login20_a;
                str2 = (eastl::string*)&constants::text::login20_b;
                str3 = (eastl::string*)&constants::text::login20_c;
                break;
            case 22:
                str1 = (eastl::string*)&constants::text::login22_a;
                str2 = (eastl::string*)&constants::text::login22_b;
                str3 = (eastl::string*)&constants::text::login22_c;
                break;
            case 23:
                str1 = (eastl::string*)&constants::text::login23_a;
                str2 = (eastl::string*)&constants::text::login23_b;
                str3 = (eastl::string*)&constants::text::login23_c;
                break;
            case 24:
                str1 = (eastl::string*)&constants::text::login24_a;
                str2 = (eastl::string*)&constants::text::login24_b;
                str3 = (eastl::string*)&constants::text::login24_c;
                break;
            case 25:
                str1 = (eastl::string*)&constants::text::login25_a;
                str2 = (eastl::string*)&constants::text::login25_b;
                str3 = (eastl::string*)&constants::text::login25_c;
                break;
            case 26:
                str1 = (eastl::string*)&constants::text::login26_a;
                str2 = (eastl::string*)&constants::text::login26_b;
                str3 = (eastl::string*)&constants::text::login26_c;
                break;
            case 27:
                str1 = (eastl::string*)&constants::text::login27_a;
                str2 = (eastl::string*)&constants::text::login27_b;
                str3 = (eastl::string*)&constants::text::login27_c;
                break;
            case 31:
                str1 = (eastl::string*)&constants::text::login31_a;
                str2 = (eastl::string*)&constants::text::login31_b;
                str3 = (eastl::string*)&constants::text::login31_c;
                break;
            case 32:
                TitleScreen::SwitchToLoginSupport(2);
                return;
            case 37:
                str1 = (eastl::string*)&constants::text::login37_a;
                str2 = (eastl::string*)&constants::text::login37_b;
                str3 = (eastl::string*)&constants::text::login37_c;
                break;
            case 38:
                str1 = (eastl::string*)&constants::text::login38_a;
                str2 = (eastl::string*)&constants::text::login38_b;
                str3 = (eastl::string*)&constants::text::login38_c;
                break;
            case 55:
                TitleScreen::LoginMes(*((eastl::string*)&constants::text::login55_a),
                                      *((eastl::string*)&constants::text::login55_b),
                                      *((eastl::string*)&constants::text::login55_c));
                TitleScreen::m_loginscreen = 8;
                return;
            case 56:
                TitleScreen::LoginMes(*((eastl::string*)&constants::text::login56_a),
                                      *((eastl::string*)&constants::text::login56_b),
                                      *((eastl::string*)&constants::text::login56_c));
                return;
            case 57:
                TitleScreen::LoginMes(*((eastl::string*)&constants::text::login57_a),
                                      *((eastl::string*)&constants::text::login57_b),
                                      *((eastl::string*)&constants::text::login57_c));
                return;
            case 61:
                TitleScreen::LoginMes(*((eastl::string*)&constants::text::dobPrompt1),
                                      *((eastl::string*)&constants::text::dobPrompt2),
                                      *((eastl::string*)&constants::text::dobPrompt3));
                TitleScreen::m_loginscreen = 7;
                return;
            case 62:
                TitleScreen::m_loginscreen = 9;
                TitleScreen::LoginMes(*((eastl::string*)&constants::text::login62_a),
                                      *((eastl::string*)&constants::text::login62_b),
                                      *((eastl::string*)&constants::text::login62_c));
                return;
            case 63:
                TitleScreen::m_loginscreen = 9;
                TitleScreen::LoginMes(*((eastl::string*)&constants::text::login63_a),
                                      *((eastl::string*)&constants::text::login63_b),
                                      *((eastl::string*)&constants::text::login63_c));
            LAB_1000db309:
                pLVar5 = GetLoginManager();
                pLVar5->InvalidateRefreshToken();
                psVar3 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this)(this);
                plVar4 = (long*)(*psVar3).operator->();
                (**(void (**)(...))(*plVar4 + 176))(plVar4, &ApplicationContext::AUTHENTICATOR_HASH);
                psVar3 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this)(this);
                plVar4 = (long*)(*psVar3).operator->();
                (**(void (**)(...))(*plVar4 + 176))(plVar4, &ApplicationContext::DISPLAYNAME_KEY);
                return;
            }
            break;
        case 3:
            psVar3 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this)(this);
            plVar4 = (long*)(*psVar3).operator->();
            plVar4 = (long*)(**(void (**)(...))(*plVar4 + 72))(plVar4);
            (**(void (**)(...))(*plVar4 + 232))(plVar4, &auth::AppsFlyerEvent::LOGIN_FAILED);
            (**(void (**)(...))(*plVar4 + 224))(plVar4, &auth::AppsFlyerEvent::LOGIN_FAILED);
            TitleScreen::m_loginHelp = 1;
            TitleScreen::m_loginscreen = 3;
            return;
        case 4:
            TitleScreen::SwitchToLoginSupport(0);
            goto LAB_1000db309;
        case 5:
            TitleScreen::m_loginHelp = 2;
            str1 = (eastl::string*)&constants::text::login5_a;
            str2 = (eastl::string*)&constants::text::login5_b;
            str3 = (eastl::string*)&constants::text::login5_c;
            break;
        case -3:
            str1 = (eastl::string*)&constants::text::loginm3_a;
            str2 = (eastl::string*)&constants::text::loginm3_b;
            str3 = (eastl::string*)&constants::text::loginm3_c;
            break;
        case -2:
            str1 = (eastl::string*)&constants::text::loginm2_a;
            str2 = (eastl::string*)&constants::text::loginm2_b;
            str3 = (eastl::string*)&constants::text::loginm2_c;
            break;
        case -1:
            str1 = (eastl::string*)&constants::text::loginm1_a;
            str2 = (eastl::string*)&constants::text::loginm1_b;
            str3 = (eastl::string*)&constants::text::loginm1_c;
            break;
        default:
            if (arg1 != 68)
                goto switchD_1000db1de_caseD_0;
            if (field_8452 == '\0') {
                field_8452 = 1;
                ReloadConfigs();
                return;
            }
            if (field_54761 != '\0') {
                (logger::default_logger())
                    ->Log(
                        false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        1923, "Reload configs was attempted and failed. Not reloading new config packs.");
            }
        LAB_1000db25a:
            str1 = (eastl::string*)&constants::text::login6_a;
            str2 = (eastl::string*)&constants::text::login6_b;
            str3 = (eastl::string*)&constants::text::login6_c;
        }
        TitleScreen::LoginMes(*str1, *str2, *str3);
    LAB_1000db385:
        pLVar5 = GetLoginManager();
        if (pLVar5->IsRefreshTokenAvailable()) {
            if (!(TitleScreen::HasLoginMessage())) {
                pLVar5 = GetLoginManager();
                pLVar5->ResetLoginCredentials();
                pLVar5 = GetLoginManager();
                pLVar5->InvalidateRefreshToken();
                TitleScreen::MoveToInitialScreen(true, true);
            } else {
                TitleScreen::m_loginscreen = 9;
            }
        }
    }

    // 0x1000dbb40
    void Client::SetWorldId(int arg1) {
        m_worldId = arg1;
        ((DeviceOptions*)field_8376.operator->())->SetLastWorldId(arg1);
    }

    // 0x1000dbb90
    void Client::ProcessSideBarRequests() {
        __4 _Var2;
        uint32_t uVar3;
        int iVar5;
        SideBarData* pSVar11;
        SideBarData* pSVar12;
        unsigned long uVar13;
        char* pcVar15;
        Logger* pLVar16;
        DeviceOptions* pDVar18;
        bool bVar19;
        uint8_t local_f8[24];
        uint8_t local_c0[24];
        int local_a8[8];
        uint8_t local_60[20];

        uint8_t* this_00 = &field_8256;
        long lVar6 = this_00->size();
        if (lVar6 == 0) {
            return;
        }
        auto plVar7 = OSRenderCore_AudioThread::Instance();
        lVar6 = ((Layout*)((long)plVar7 + *(long*)(*plVar7 - 24)))->HeapBeginPtr();
        WindowSetOptions* windowSetOptions = (WindowSetOptions*)(lVar6 + 19677508);
        plVar7 = (long*)OSRenderCore_AudioThread::Instance();
        Client* pCVar8 = (Client*)((long)plVar7 + *(long*)(*plVar7 - 24));
        lVar6 = pCVar8->HeapBeginPtr();
        WindowProperties* windowProperties = (WindowProperties*)(lVar6 + 19677552);
        char local_31 = ShouldExpandWindowForSideBars(pCVar8, windowProperties, windowSetOptions);
        *local_c0 = windowProperties->GetWindowFrame(*windowSetOptions);
        Rect<unsigned int> local_80(*local_c0);
        *local_f8 = windowProperties->GetClientRect(*windowSetOptions);
        int local_4c = windowProperties->GetRightMostScreenPointForWindowExpansion(*windowSetOptions);
        int local_64 = GetAdvisedZoom();
        int local_68 = GetMinimumCanvasWidth();
        int local_38 = local_68;
        auto piVar9 = local_f8->second();
        int iVar4 = *piVar9;
        local_f8->qw();
        int local_6c = iVar4;
        int local_3c = iVar4;
        auto puVar10 = this_00->HeapBeginPtr();
        vector<eastl::pair<int, int>>* local_88 = (vector<eastl::pair<int, int>>*)this_00;
        local_c0._16_8_ = this_00->end();
        Layout* this_02 = (Layout*)&field_8168;
        local_60._8_8_ = this_02;
        if (puVar10 != (unsigned long*)local_c0._16_8_) {
            do {
                if ((unsigned int)puVar10[1] == 2) {
                    uVar13 = *puVar10;
                    pSVar11 = (SideBarData*)this_02->HeapBeginPtr();
                    pSVar12 = (SideBarData*)local_60._8_8_->end();
                    this_02 = (Layout*)local_60._8_8_;
                    pSVar11 = eastl::find_if<sidebars::SideBarData*, Client::ProcessSideBarRequests()::__5>(
                        pSVar11, pSVar12, (__5*)(unsigned long)(unsigned int)uVar13);
                    pSVar12 = (SideBarData*)this_02->end();
                    if (pSVar11 != pSVar12) {
                        iVar4 = pSVar11->field_4;
                        this_02->erase(pSVar11);
                        if (local_31 != '\0') {
                            local_3c = local_3c - iVar4;
                            iVar5 = local_80.Right();
                            if (iVar5 == local_4c) {
                                piVar9 = (int*)local_80.SSOBeginPtr();
                                *piVar9 = *piVar9 + iVar4;
                            } else {
                                iVar5 = local_80.Right();
                                local_80.SetRight(iVar5 - iVar4);
                            }
                        }
                        local_38 = local_38 - iVar4;
                        this_02 = (Layout*)local_60._8_8_;
                    }
                } else if ((unsigned int)puVar10[1] == 1) {
                    _Var2.field_0 = (int*)*puVar10;
                    local_60._4_4_ = (uint32_t)((unsigned long)_Var2.field_0 >> 32);
                    local_60._0_8_ = _Var2.field_0;
                    if ((int)local_60._4_4_ < 1) {
                        new (local_a8) eastl::string((CtorSprintf*)"Requesting to open a side-bar with a negative "
                                                                   "size. This is not allowed. Side bar id: %d",
                                                     (char*)((unsigned long)_Var2.field_0 & 4294967295));
                        pLVar16 = logger::default_logger();
                        pcVar15 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pLVar16->Log(false, 2,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/client.cpp",
                                     2195, pcVar15);
                        pcVar15 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        new ((local_f8 + 16)) eastl::allocator("EASTL basic_string");
                        local_e0 = eastl::string(pcVar15, (local_f8 + 16));
                        AddChat(this);
                        this_02 = (Layout*)local_60._8_8_;
                    LAB_1000dbf99:
                    } else {
                        pSVar11 = (SideBarData*)this_02->HeapBeginPtr();
                        pSVar12 = (SideBarData*)this_02->end();
                        pSVar11 = eastl::find_if<sidebars::SideBarData*, Client::ProcessSideBarRequests()::__4>(
                            pSVar11, pSVar12, (__4*)local_60);
                        pSVar12 = (SideBarData*)this_02->end();
                        if (pSVar11 == pSVar12) {
                            uVar13 = this_02->size();
                            if (this_02->capacity() <= uVar13) {
                                pLVar16 = logger::default_logger();
                                pLVar16->Log(false, 2,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/client.cpp",
                                             2223, "Cannot open another side-bar, limit reached!");
                                new (local_a8) eastl::string("Cannot open another side-bar, limit reached!");
                                AddChat(this, (eastl::string*)local_a8);
                                goto LAB_1000dbf99;
                            }
                            this_02->push_back(*local_60);
                            uVar3 = local_60._4_4_;
                            local_38 = local_38 + local_60._4_4_;
                            if (local_31 != '\0') {
                                local_3c = local_3c + local_60._4_4_;
                                iVar4 = local_80.Right();
                                local_80.SetRight(uVar3 + iVar4);
                                iVar4 = local_80.Right();
                                if (local_4c < iVar4) {
                                    iVar4 = local_80.Right();
                                    local_80.Translate(local_4c - iVar4, 0);
                                }
                            }
                        }
                    }
                } else {
                    pLVar16 = logger::default_logger();
                    pLVar16->Log(
                        false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        2306, "Unkown side-bar request type: %d", (unsigned int)puVar10[1]);
                }
                puVar10 = (unsigned long*)((long)puVar10 + 12);
            } while (puVar10 != (unsigned long*)local_c0._16_8_);
        }
        iVar5 = local_38;
        iVar4 = local_68;
        vector<eastl::pair<int, int>>* this_03 = local_88;
        if (local_38 != local_68) {
            if (local_38 < 765) {
                pLVar16 = logger::default_logger();
                pLVar16->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                    2318,
                    "We\'ve calculated a canvas width which is smaller than the minimum fixed size when opening a "
                    "side-bar.This can only happen if the side-bar has a negative size (you should see an error about "
                    "that if that\'s the case)or if the original canvas size was already smaller than the minimum "
                    "fixed width - which should never happen.");
            }
            local_a8[0] = 765;
            piVar9 = std::max<int>(local_38, *local_a8);
            local_38 = *piVar9;
            if (field_8425 != false) {
                local_a8[0] = 894;
                piVar9 = std::max<int>(local_38, *local_a8);
                local_38 = *piVar9;
            }
            this->SetMinimumCanvasSize(local_38, local_64);
        }
        piVar9 = (int*)local_80.SSOBeginPtr();
        int iVar1 = *piVar9;
        piVar9 = (int*)local_c0->SSOBeginPtr();
        if (iVar1 == *piVar9) {
            bVar19 = iVar5 != iVar4;
            piVar9 = (int*)local_80.y();
            iVar4 = *piVar9;
            piVar9 = (int*)local_c0->y();
            if (iVar4 != *piVar9)
                goto LAB_1000dc08a;
        } else {
        LAB_1000dc08a:
            pLVar16 = logger::default_logger();
            piVar9 = (int*)local_c0->SSOBeginPtr();
            iVar4 = *piVar9;
            piVar9 = (int*)local_80.SSOBeginPtr();
            this_03 = local_88;
            iVar5 = *piVar9;
            piVar9 = (int*)local_c0->y();
            iVar1 = *piVar9;
            piVar9 = (int*)local_80.y();
            pLVar16->Log(
                false, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 2332,
                "Window frame position changed: %dx%d", iVar4 - iVar5, iVar1 - *piVar9);
            plVar7 = (long*)OSRenderCore_AudioThread::Instance();
            lVar6 = *(long*)(*plVar7 - 24);
            piVar9 = (int*)local_80.SSOBeginPtr();
            iVar4 = *piVar9;
            piVar9 = (int*)local_80.y();
            ((OSRenderCore_LogicThread_Common*)((long)plVar7 + lVar6))->SetWindowPos(iVar4, *piVar9);
            bVar19 = true;
        }
        pCVar8 = this;
        uint64_t this_01 = local_60._8_8_;
        if (local_3c == local_6c) {
            if (!bVar19)
                goto LAB_1000dc1b9;
        } else {
            if (local_31 == '\0') {
                pLVar16 = logger::default_logger();
                pLVar16->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                    2349,
                    "We are changing the window size due to side-bar changes even though we are not in resizable "
                    "mode.Only resizable mode should change the window size due to side-bar changes.");
            }
            local_a8[0] = 765;
            piVar9 = std::max<int>(local_3c, *local_a8);
            iVar4 = *piVar9;
            local_3c = iVar4;
            pDVar18 = (DeviceOptions*)pCVar8->field_8376.operator->();
            pDVar18->SetWindowWidth(iVar4, true);
        }
        OnWindowModeChanged(pCVar8);
    LAB_1000dc1b9:
        lVar6 = this_01->HeapBeginPtr();
        long lVar17 = this_01->end();
        iVar4 = 0;
        for (; lVar6 != lVar17; lVar6 = lVar6 + 8) {
            iVar4 = iVar4 + *(int*)(lVar6 + 4);
        }
        pDVar18 = (DeviceOptions*)field_8376.operator->();
        pDVar18->SetSideBarsWidth(iVar4);
        this_03->clear();
    }

    // 0x1000dc270
    unsigned long Client::ShouldExpandWindowForSideBars(const RenderState::WindowProperties& windowProperties,
                                                        const RenderState::WindowSetOptions& windowSetOptions) {
        unsigned long uVar2;

        if (windowProperties.GetIsMaximized() == '\0') {
            uVar2 = windowProperties.GetIsFullScreen(windowSetOptions);
            uVar2 = uVar2 ^ 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1000dc690
    void Client::AddChat(const eastl::string& str) {

        eastl::string local_50("");
        AddChat(0, local_50, str);
    }

    // 0x1000dc9d0
    void Client::RequestOpenPopoutSideBar(sidebars::SideBarData sideBarData) {
        SideBarRequest* in_RSI;
        Client* in_RDI;
        SideBarData in_stack_ffffffffffffff98;
        eastl::string abStack_5a;
        SideBarRequest local_38;

        local_38._0_12_ = in_RSI->CreateOpen(in_stack_ffffffffffffff98);
        uint8_t* uint8_t = &in_RDI->field_8256;
        unsigned long uVar1 = uint8_t->size();
        unsigned long uVar2 = uint8_t->capacity();
        if (uVar1 < uVar2) {
            uint8_t->push_back(local_38);
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      2397, "Cannot request another side-bar change, limit reached!");
            new (&abStack_5a - 6) eastl::string("Cannot request another side-bar change, limit reached!");
            AddChat(in_RDI, (eastl::string*)(&abStack_5a - 6));
            (&abStack_5a - 6)->~basic_string();
        }
    }

    // 0x1000dcb20
    void Client::RequestClosePopoutSideBar(int arg1) {
        eastl::string local_60;
        SideBarRequest local_38;

        local_38._0_12_ = sidebars::SideBarRequest::CreateClose(arg1);
        uint8_t* this_00 = &field_8256;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            this_00->push_back(local_38);
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      2414, "Cannot request another side-bar change, limit reached!");
            local_60 = eastl::string("Cannot request another side-bar change, limit reached!");
            AddChat(local_60);
        }
    }

    // 0x1000dcc60
    void Client::ClearSideBars() {
        uint8_t* this_00;
        int iVar1;
        int iVar3;
        int arg2;
        DeviceOptions* pDVar8;
        int* piVar9;
        int local_30;
        int local_2c;

        auto plVar4 = OSRenderCore_AudioThread::Instance();
        long lVar5 = ((Layout*)((long)plVar4 + *(long*)(*plVar4 - 24)))->HeapBeginPtr();
        plVar4 = (long*)OSRenderCore_AudioThread::Instance();
        Client* pCVar6 = (Client*)((long)plVar4 + *(long*)(*plVar4 - 24));
        long lVar7 = pCVar6->HeapBeginPtr();
        if (ShouldExpandWindowForSideBars(pCVar6, (WindowProperties*)(lVar5 + 19677552),
                                          (WindowSetOptions*)(lVar7 + 19677508)) != '\0') {
            this_00 = &field_8376;
            pDVar8 = (DeviceOptions*)(*this_00).operator->();
            iVar3 = pDVar8->GetSideBarsWidth();
            pDVar8 = (DeviceOptions*)(*this_00).operator->();
            local_30 = pDVar8->GetWindowWidth();
            local_30 = local_30 - iVar3;
            local_2c = 765;
            piVar9 = std::max<int>(local_30, local_2c);
            iVar1 = *piVar9;
            local_30 = iVar1;
            pDVar8 = (DeviceOptions*)(*this_00).operator->();
            pDVar8->SetWindowWidth(iVar1, true);
            arg2 = GetAdvisedZoom();
            local_2c = GetMinimumCanvasWidth();
            local_2c = local_2c - iVar3;
            piVar9 = std::max<int>(local_2c, 765);
            iVar1 = *piVar9;
            pCVar6 = Instance();
            pCVar6->SetMinimumCanvasSize(iVar1, arg2);
        }
        field_8168.clear();
        pDVar8 = (DeviceOptions*)field_8376.operator->();
        pDVar8->SetSideBarsWidth(0);
    }

    // 0x1000dcdd0
    void Client::ResetAndStoreLogFile() {
        Logger* pLVar4;
        char* pcVar5;
        Filename* pFVar8;
        time_t tVar9;
        time_t tVar10;
        unsigned long uVar11;
        double dVar12;
        Filename local_3c0;
        ReturnValue local_160;

        if (ResetAndStoreLogFile()::logFileSink == '\0') {
            if (___cxa_guard_acquire(&ResetAndStoreLogFile()::logFileSink) != 0) {
                new ((shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&ResetAndStoreLogFile()::logFileSink)
                    shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee53b0, &ResetAndStoreLogFile()::logFileSink, 4294967296);
                ___cxa_guard_release(&ResetAndStoreLogFile()::logFileSink);
            }
        }
        if ((*((shared_ptr<configdecoder::ObjType>*)&ResetAndStoreLogFile()::logFileSink)) == nullptr) {
            make_shared<LogFileSink>(&local_160);
            (*((shared_ptr<LogFileSink>*)&ResetAndStoreLogFile()::logFileSink)) = local_160;
            pLVar4 = logger::default_logger();
            local_160 = shared_ptr((shared_ptr<dash3d::GroundDecor>*)&ResetAndStoreLogFile()::logFileSink);
            pLVar4->AddSink(local_160);
        }
        GetLogFileDirectory(&local_160);
        bool cVar2 = local_160.Exists();
        if (!cVar2) {
            local_290 = callstack::Callstack();
            local_160.CreateDirectories(&local_290);
            cVar2 = local_290.IsValid();
            if (cVar2) {
                pLVar4 = logger::default_logger();
                pcVar5 = local_160.GetName();
                pLVar4->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                    2493, "Error creating log directory at %s", pcVar5);
                if (cVar2)
                    goto LAB_1000dd09d;
            }
        }
        auto local_400 = datetools::GetLocalDateAndTimeWithDashes();
        local_400.append(".txt");
        pLVar4 = logger::default_logger();
        uint64_t uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pLVar4->Log(false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                    2500, "LOG FILE - FilePath=%s", uVar6);
        Callstack local_290 = local_160 / &local_400;
        auto local_3e0 = local_160.GetAllFiles();
        unsigned long uVar7 = local_3e0.size();
        if (4 < uVar7) {
            pFVar8 = &local_3e0[0];
            local_3c0 = Filename(pFVar8);
            uVar7 = local_3e0.size();
            if (1 < uVar7) {
                uVar7 = 1;
                do {
                    tVar9 = local_3c0.GetLastModified();
                    pFVar8 = &local_3e0[uVar7];
                    tVar10 = pFVar8->GetLastModified();
                    dVar12 = _difftime(tVar9, tVar10);
                    pFVar8 = &local_3c0;
                    if (0.0 < dVar12) {
                        pFVar8 = &local_3e0[uVar7];
                    }
                    local_3c0 = *pFVar8;
                    uVar7 = uVar7 + 1;
                    uVar11 = local_3e0.size();
                } while (uVar7 < uVar11);
            }
            local_3c0.Rename(local_290, nullptr);
        }
        ((LogFileSink*)(*((shared_ptr<LogFileSink>*)&ResetAndStoreLogFile()::logFileSink)).operator->())
            ->SetLogFile(local_290);
    LAB_1000dd09d:
    }

    // 0x1000dd2a0
    auto Client::GetLogFileDirectory() {
        auto filename = SystemPaths::GetDefaultUserFolder();
        auto str = GameShell3Cache::GetOSRSCacheFolderName();
        Filename local_158 = *filename / str;
        auto result = local_158 / LOG_FILE_DIR;
        return result;
    }

    // 0x1000dd500
    void Client::GlMovePlayers() {
        uint8_t* this_00;
        int iVar2;
        unsigned int uVar3;
        Client* pCVar5;
        long lVar9;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        ClientEntity* clientEntity;
        unsigned long uVar10;
        shared_ptr<RSevenDebugPresetProvider> local_50;
        RouteHighlighter* local_40;

        unsigned int uVar4 = ReceivePlayerPositions::m_lastNum;
        unsigned long uVar11 = (unsigned long)ReceivePlayerPositions::m_lastNum;
        uint8_t* puVar1 = &field_19200;
        Client* local_38 = this;
        RouteHighlighter* pRVar8 = (RouteHighlighter*)(*puVar1).operator->();
        if (pRVar8->field_0 != '\0') {
            if (!(pRVar8->Empty())) {
                local_40 = (RouteHighlighter*)(*puVar1).operator->();
                pCVar5 = local_38;
                this_00 = &local_38->field_52016;
                lVar9 = (*this_00).operator->();
                iVar2 = *(int*)(lVar9 + 24);
                uVar3 = pCVar5->field_53220;
                lVar9 = (*this_00).operator->();
                if (local_40->FoundDestination((iVar2 >> 7) + uVar3,
                                               (*(int*)(lVar9 + 28) >> 7) + pCVar5->field_53224)) {
                    pRVar8 = (RouteHighlighter*)(*puVar1).operator->();
                    pRVar8->ClearRoute();
                }
            }
        }
        if (0 < (int)uVar4) {
            puVar1 = &local_38->field_19216;
            uVar10 = 0;
            do {
                groundDecor =
                    (shared_ptr<dash3d::GroundDecor>*)(*puVar1)[(long)(int)(&ReceivePlayerPositions::m_lastID)[uVar10]];
                local_50 = shared_ptr(groundDecor);
                if (local_50 != nullptr) {
                    lVar9 = local_50.operator->();
                    iVar2 = *(int*)(lVar9 + 440);
                    clientEntity = (ClientEntity*)*local_50;
                    GlMoveEntity(local_38, clientEntity);
                    lVar9 = local_50.operator->();
                    if (*(int*)(lVar9 + 440) != iVar2) {
                        lVar9 = local_50.operator->();
                        ScriptRunner::SetActivePlayer(*(int*)(lVar9 + 1208));
                        ScriptRunner::ExecuteScript(49, -1, -1, 500000);
                    }
                }
                uVar10 = uVar10 + 1;
            } while (uVar11 != uVar10);
        }
    }

    // 0x1000dd700
    void Client::GlMoveEntity(ClientEntity& clientEntity) {
        int* piVar1;
        int iVar3;

        if (*(int*)&clientEntity.field_408 < field_8488) {
            if (*(int*)((long)&clientEntity.field_408 + 4) < field_8488) {
                GlRouteMove(clientEntity);
            } else {
                GlExactMove2(clientEntity);
            }
        } else {
            GlExactMove1(clientEntity);
        }
        if ((((*(int*)&clientEntity.field_24 < 128) ||
              (iVar3 = *(int*)((long)&clientEntity.field_24 + 4), 13183 < iVar3)) ||
             (iVar3 < 128)) ||
            (13183 < *(int*)&clientEntity.field_24)) {
            clientEntity.field_372 = 4294967295;
            clientEntity.field_408 = 0;
            clientEntity.ClearSpotAnims();
            piVar1 = &clientEntity.field_444[0];
            iVar3 = *(int*)&clientEntity.field_40 * 64;
            *(int*)&clientEntity.field_24 = *piVar1 * 128 + iVar3;
            piVar1 = &clientEntity.field_484[0];
            *(int*)((long)&clientEntity.field_24 + 4) = *piVar1 * 128 + iVar3;
            clientEntity.AbortRoute();
        }
        if (((ClientEntity*)field_52016.end() == clientEntity) &&
            (((*(int*)&clientEntity.field_24 < 1536 ||
               (iVar3 = *(int*)((long)&clientEntity.field_24 + 4), 11775 < iVar3)) ||
              ((iVar3 < 1536 || (11775 < *(int*)&clientEntity.field_24)))))) {
            clientEntity.field_372 = 4294967295;
            clientEntity.field_408 = 0;
            clientEntity.ClearSpotAnims();
            piVar1 = &clientEntity.field_444[0];
            iVar3 = *(int*)&clientEntity.field_40 * 64;
            *(int*)&clientEntity.field_24 = *piVar1 * 128 + iVar3;
            piVar1 = &clientEntity.field_484[0];
            *(int*)((long)&clientEntity.field_24 + 4) = *piVar1 * 128 + iVar3;
            clientEntity.AbortRoute();
        }
        GlEntityFace(clientEntity);
        GlEntityAnim(clientEntity);
    }

    // 0x1000dd890
    void Client::OpPlayer(int arg1, const eastl::string& str) {
        bool bVar2;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        long lVar3;
        DisplayName* this_00;
        uint64_t uVar4;
        ShuffledPacket3* pSVar5;
        ShuffledPacket4* pSVar6;
        ServerConnection* pSVar7;
        Isaac* pIVar8;
        uint64_t extraout_RAX;
        unsigned long uVar9;
        long lVar10;
        shared_ptr<dash3d::Decor> local_d8;
        uint8_t local_b8[64];
        array<shared_ptr<ClientPlayer>, 2048ul>* local_78;
        shared_ptr<ClientScript>* local_70;
        SuperShuffledPacketFactory local_58;
        unsigned long local_48;
        unique_ptr<ServerConnection>* local_40;
        unsigned int local_34;

        unsigned int uVar1 = ReceivePlayerPositions::m_lastNum;
        unsigned long uVar11 = (unsigned long)ReceivePlayerPositions::m_lastNum;
        eastl::string* local_60 = str;
        DisplayName local_118(str, field_54172);
        if ((int)uVar1 < 1) {
            local_34 = 0;
        } else {
            local_78 = (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216;
            local_70 = (shared_ptr<ClientScript>*)&field_52016;
            local_40 = (unique_ptr<ServerConnection>*)&field_19120;
            uVar9 = (unsigned long)(arg1 - 1);
            local_34 = 0;
            lVar10 = 0;
            local_48 = uVar9;
            do {
                groundDecor = (shared_ptr<dash3d::GroundDecor>*)(*local_78)[(
                    long)(int)(&ReceivePlayerPositions::m_lastID)[lVar10]];
                local_d8 = shared_ptr(groundDecor);
                bVar2 = local_d8 != nullptr;
                if ((bVar2) && (bVar2 = local_d8 != *local_70, bVar2)) {
                    lVar3 = local_d8.operator->();
                    bVar2 = (*((lVar3 + 992))) != nullptr;
                    if (!bVar2)
                        goto LAB_1000dda60;
                    lVar3 = local_d8.operator->();
                    this_00 = (DisplayName*)*(*((lVar3 + 992)));
                    uVar4 = *this_00 == local_118;
                    if ((char)uVar4 == '\0')
                        goto LAB_1000dda60;
                    local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)uVar4 >> 8)) << 8) | (uint8_t)1);
                    bVar2 = true;
                    if ((unsigned int)uVar9 < 7) {
                        switch ((long)&switchD_1000dd9d1::switchdataD_1000ddd54 +
                                (long)(int)(&switchD_1000dd9d1::switchdataD_1000ddd54)[uVar9]) {
                        case 4295875027:
                            pSVar7 = (ServerConnection*)(*local_40).operator->();
                            pIVar8 = pSVar7->GetOutgoingEncryption();
                            *local_b8 = shared::ClientMessage::MakeClientMessage(10, *pIVar8);
                            local_58 = SuperShuffledPacketFactory(*((local_b8 + 8)));
                            pSVar5 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                            pSVar5->p2<int>((&ReceivePlayerPositions::m_lastID)[lVar10]);
                            pSVar6 = (ShuffledPacket4*)local_58.HeapBeginPtr();
                            pSVar6->p1<int>(0);
                            pSVar7 = (ServerConnection*)(*local_40).operator->();
                            pSVar7->SendClientMessage(*local_b8);
                            break;
                        default:
                            goto switchD_1000dd9d1_caseD_dda63;
                        case 4295875210:
                            pSVar7 = (ServerConnection*)(*local_40).operator->();
                            pIVar8 = pSVar7->GetOutgoingEncryption();
                            *local_b8 = shared::ClientMessage::MakeClientMessage(66, *pIVar8);
                            local_58 = SuperShuffledPacketFactory(*((local_b8 + 8)));
                            pSVar6 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                            pSVar6->p2<int>((&ReceivePlayerPositions::m_lastID)[lVar10]);
                            pSVar5 = (ShuffledPacket3*)local_58.HeapBeginPtr();
                            pSVar5->p1<int>(0);
                            pSVar7 = (ServerConnection*)(*local_40).operator->();
                            pSVar7->SendClientMessage(*local_b8);
                            break;
                        case 4295875343:
                            pSVar7 = (ServerConnection*)(*local_40).operator->();
                            pIVar8 = pSVar7->GetOutgoingEncryption();
                            *local_b8 = shared::ClientMessage::MakeClientMessage(48, *pIVar8);
                            local_58 = SuperShuffledPacketFactory(*((local_b8 + 8)));
                            pSVar6 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                            pSVar6->p2<int>((&ReceivePlayerPositions::m_lastID)[lVar10]);
                            pSVar6 = (ShuffledPacket4*)local_58.HeapBeginPtr();
                            pSVar6->p1<int>(0);
                            pSVar7 = (ServerConnection*)(*local_40).operator->();
                            pSVar7->SendClientMessage(*local_b8);
                            break;
                        case 4295875476:
                            pSVar7 = (ServerConnection*)(*local_40).operator->();
                            pIVar8 = pSVar7->GetOutgoingEncryption();
                            *local_b8 = shared::ClientMessage::MakeClientMessage(20, *pIVar8);
                            local_58 = SuperShuffledPacketFactory(*((local_b8 + 8)));
                            ((ShuffledPacket2*)ShuffledPacketFactory::p2_alt2())
                                ->p2<int>((&ReceivePlayerPositions::m_lastID)[lVar10]);
                            ((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_58.HeapBeginPtr())
                                ->p1<shared::LoginProt::ID>(0);
                            pSVar7 = (ServerConnection*)(*local_40).operator->();
                            pSVar7->SendClientMessage(*local_b8);
                        }
                        uVar9 = local_48;
                        bVar2 = true;
                        local_34 =
                            (unsigned int)(((uint64_t)((int64_t)((unsigned long)extraout_RAX >> 8)) << 8) | (uint8_t)1);
                    }
                } else {
                LAB_1000dda60:
                    bVar2 = false;
                }
            switchD_1000dd9d1_caseD_dda63:
            } while ((!bVar2) && (bVar2 = uVar11 - 1 != lVar10, lVar10 = lVar10 + 1, bVar2));
            if ((local_34 & 1) != 0)
                goto LAB_1000ddcb0;
        }
        new (local_b8) eastl::string("");
        local_d8 + (*((eastl::string*)&constants::text::unabletofind));
        AddChat(4, *local_b8, local_d8);
    LAB_1000ddcb0:
    }

    // 0x1000dddc0
    void Client::AddChat(int arg1, const eastl::string& str1, const eastl::string& str2) {

        eastl::string local_58("");
        AddChat(arg1, str1, str2, local_58);
    }

    // 0x1000dde50
    void Client::GdmAddOtherPlayersToWorld() {
        unsigned int uVar1;
        shared_ptr<ClientPlayer>* clientPlayer;
        unsigned long uVar2;

        unsigned long uVar3 = (unsigned long)ReceivePlayerPositions::m_lastNum;
        if (0 < (int)ReceivePlayerPositions::m_lastNum) {
            uVar2 = 0;
            do {
                uVar1 = (&ReceivePlayerPositions::m_lastID)[uVar2];
                if ((uVar1 != m_priorityPlayerId) && (uVar1 != field_51988)) {
                    clientPlayer = &field_19216[(long)(int)uVar1];
                    GdmAddPlayerToWorld(*clientPlayer, true);
                }
                uVar2 = uVar2 + 1;
            } while (uVar3 != uVar2);
        }
    }

    // 0x1000ddee0
    void Client::GdmAddPlayerToWorld(const shared_ptr<ClientPlayer>& clientPlayer, bool arg2) {
        int arg3;
        uint32_t uVar5;
        ClientEntity* pCVar8;
        long lVar9;
        Client* pCVar11;
        int iVar12;
        long lVar13;
        uint8_t local_90[24];
        EntityHighlight local_78;
        int local_68;
        int local_64;
        world* local_60;
        MapSquareUpdateInfo local_58;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        auto pCVar6 = clientPlayer.operator->();
        if (pCVar6->Ready() == '\0') {
            return;
        }
        long lVar7 = clientPlayer.operator->();
        if (*(char*)(lVar7 + 1200) != '\0') {
            return;
        }
        lVar7 = clientPlayer.operator->();
        *(uint8_t*)(lVar7 + 1192) = 0;
        if ((50 < ReceivePlayerPositions::m_lastNum && m_lowMem != false || 200 < ReceivePlayerPositions::m_lastNum) &&
            (arg2)) {
            lVar7 = clientPlayer.operator->();
            iVar12 = *(int*)(lVar7 + 356);
            lVar7 = clientPlayer.operator->();
            if (iVar12 == *(int*)(lVar7 + 48)) {
                lVar7 = clientPlayer.operator->();
                *(uint8_t*)(lVar7 + 1192) = 1;
            }
        }
        lVar7 = clientPlayer.operator->();
        unsigned int uVar1 = *(unsigned int*)(lVar7 + 24);
        lVar7 = clientPlayer.operator->();
        if (13311 < uVar1) {
            return;
        }
        iVar12 = *(int*)(lVar7 + 28);
        if (iVar12 < 0) {
            return;
        }
        if (13311 < iVar12) {
            return;
        }
        int iVar10 = (int)uVar1 >> 7;
        iVar12 = iVar12 >> 7;
        int iVar2 = field_51984;
        lVar7 = clientPlayer.operator->();
        local_90._16_8_ =
            dash3d::MousePickingHelper::GetPackedTypeCode(iVar10, iVar12, iVar2, 0, false, *(int*)(lVar7 + 1208));
        pCVar6 = (ClientPlayer*)clientPlayer.operator->();
        local_78._0_10_ =
            HighlightChannelProperties::CreateHighlightData((HighlightChannelProperties*)pCVar6->GetHighlight());
        lVar7 = clientPlayer.operator->();
        bool bVar4 = (*((lVar7 + 1160))) != nullptr;
        int local_48 = iVar10;
        if (bVar4) {
            iVar2 = field_8488;
            lVar7 = clientPlayer.operator->();
            if (*(int*)(lVar7 + 1140) <= iVar2) {
                iVar2 = field_8488;
                lVar7 = clientPlayer.operator->();
                if (iVar2 < *(int*)(lVar7 + 1144)) {
                    lVar7 = clientPlayer.operator->();
                    *(uint8_t*)(lVar7 + 1192) = 0;
                    lVar7 = clientPlayer.operator->();
                    iVar2 = *(int*)(lVar7 + 24);
                    pCVar11 = (Client*)clientPlayer;
                    lVar7 = clientPlayer.operator->();
                    uVar5 = GetAvH(pCVar11, iVar2, *(int*)(lVar7 + 28), field_51984);
                    lVar7 = clientPlayer.operator->();
                    *(uint32_t*)(lVar7 + 1136) = uVar5;
                    iVar2 = field_8488;
                    lVar7 = clientPlayer.operator->();
                    *(int*)(lVar7 + 44) = iVar2;
                    pCVar8 = (ClientEntity*)clientPlayer.operator->();
                    pCVar8->SetUnhidden();
                    local_60 = (world*)field_19184.operator->();
                    local_44 = field_51984;
                    lVar7 = clientPlayer.operator->();
                    local_40 = *(int*)(lVar7 + 24);
                    lVar7 = clientPlayer.operator->();
                    local_3c = *(int*)(lVar7 + 28);
                    lVar7 = clientPlayer.operator->();
                    local_38 = *(int*)(lVar7 + 1136);
                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>((shared_ptr<ClientNpc>*)&local_58);
                    lVar7 = clientPlayer.operator->();
                    local_34 = *(int*)(lVar7 + 32);
                    lVar7 = clientPlayer.operator->();
                    local_68 = *(int*)(lVar7 + 1176);
                    lVar7 = clientPlayer.operator->();
                    local_64 = *(int*)(lVar7 + 1180);
                    lVar7 = clientPlayer.operator->();
                    iVar2 = *(int*)(lVar7 + 1184);
                    lVar7 = clientPlayer.operator->();
                    iVar10 = *(int*)(lVar7 + 1188);
                    lVar7 = clientPlayer.operator->();
                    arg3 = *(int*)(lVar7 + 40);
                    lVar7 = clientPlayer.operator->();
                    new (local_90) dash3d::GridRect(local_48, iVar12, arg3, *(int*)(lVar7 + 40));
                    local_60->AddDynamic(local_44, local_40, local_3c, local_38, 60, local_58, local_34,
                                         local_90._16_8_, local_68, local_64, iVar2, iVar10, local_78, *local_90);
                    goto LAB_1000de3fa;
                }
            }
        }
        lVar7 = clientPlayer.operator->();
        if ((*(unsigned int*)(lVar7 + 24) & 127) == 64) {
            lVar7 = clientPlayer.operator->();
            if ((*(unsigned int*)(lVar7 + 28) & 127) == 64) {
                lVar13 = (long)iVar10;
                lVar7 = (long)iVar12;
                if (*(int*)(field_7164656 + lVar7 * 4 + lVar13 * 416 + 228) == field_7294680) {
                    pCVar8 = (ClientEntity*)clientPlayer.operator->();
                    pCVar8->SetHiddenBy(*((field_7164656 + lVar7 * 8 + lVar13 * 832 + 43492)));
                    return;
                }
                *(int*)(field_7164656 + lVar7 * 4 + lVar13 * 416 + 228) = field_7294680;
                lVar9 = clientPlayer.operator->();
                local_58 = game::LightProbeManager::MapSquareUpdateInfo(true, *(int*)(lVar9 + 1208));
                *(uint64_t*)(field_7164656 + lVar7 * 8 + lVar13 * 832 + 43492) = local_58._0_8_;
            }
        }
        lVar7 = clientPlayer.operator->();
        iVar2 = *(int*)(lVar7 + 24);
        pCVar11 = (Client*)clientPlayer;
        lVar7 = clientPlayer.operator->();
        uVar5 = GetAvH(pCVar11, iVar2, *(int*)(lVar7 + 28), field_51984);
        lVar7 = clientPlayer.operator->();
        *(uint32_t*)(lVar7 + 1136) = uVar5;
        iVar2 = field_8488;
        lVar7 = clientPlayer.operator->();
        *(int*)(lVar7 + 44) = iVar2;
        pCVar8 = (ClientEntity*)clientPlayer.operator->();
        pCVar8->SetUnhidden();
        local_60 = (world*)field_19184.operator->();
        local_44 = field_51984;
        lVar7 = clientPlayer.operator->();
        local_40 = *(int*)(lVar7 + 24);
        lVar7 = clientPlayer.operator->();
        local_3c = *(int*)(lVar7 + 28);
        lVar7 = clientPlayer.operator->();
        local_38 = *(int*)(lVar7 + 1136);
        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>((shared_ptr<ClientNpc>*)&local_58);
        lVar7 = clientPlayer.operator->();
        local_34 = *(int*)(lVar7 + 32);
        lVar7 = clientPlayer.operator->();
        bVar4 = *(bool*)(lVar7 + 36);
        lVar7 = clientPlayer.operator->();
        iVar2 = *(int*)(lVar7 + 40);
        lVar7 = clientPlayer.operator->();
        new (local_90) dash3d::GridRect(local_48, iVar12, iVar2, *(int*)(lVar7 + 40));
        local_60->AddDynamic(local_44, local_40, local_3c, local_38, 60, local_58, local_34, local_90._16_8_, bVar4,
                             local_78, *local_90);
    LAB_1000de3fa:
    }

    // 0x1000de4b0
    int Client::GetAvH(int arg1, int arg2, int arg3) {
        uint8_t bVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int arg3_00;
        unsigned int uVar6;

        int iVar5 = 0;
        if ((((arg1 < 13312) && (-1 < arg1)) && (-1 < arg2)) && (arg2 < 13312)) {
            arg3_00 = arg1 >> 7;
            iVar5 = arg2 >> 7;
            if (arg3 < 3) {
                bVar1 =
                    ClientBuild::Read3DArray<signed char>((Array<signed char>*)&ClientBuild::m_mapl, 1, arg3_00, iVar5);
                arg3 = arg3 + (unsigned int)(bVar1 >> 1 & 1);
            }
            uVar6 = arg1 & 127;
            iVar2 = ClientBuild::Read3DArray<int>((Array<int>*)&ClientBuild::m_groundh, arg3, arg3_00, iVar5);
            iVar3 = ClientBuild::Read3DArray<int>((Array<int>*)&ClientBuild::m_groundh, arg3, arg3_00 + 1, iVar5);
            iVar4 = ClientBuild::Read3DArray<int>((Array<int>*)&ClientBuild::m_groundh, arg3, arg3_00, iVar5 + 1);
            iVar5 = ClientBuild::Read3DArray<int>((Array<int>*)&ClientBuild::m_groundh, arg3, arg3_00 + 1, iVar5 + 1);
            iVar5 = (int)(((int)(iVar5 * uVar6 + iVar4 * (128 - uVar6)) >> 7) * (arg2 & 127U) +
                          (128 - (arg2 & 127U)) * ((int)(iVar3 * uVar6 + iVar2 * (128 - uVar6)) >> 7)) >>
                    7;
        }
        return iVar5;
    }

    // 0x1000de660
    Client::~Client() {
        *(uint8_t***)this = &PTR_GetApplicationContext_100ef3fe0;
        field_8144 = &PTR_GetDisplayName_100ef4040;
        notifications::DestroyNotificationSystem();
        field_7306808.~vector();
        field_7306800.~unique_ptr();
        field_7306736.~hash_map();
        field_7305840.~LRUHashCache();
        field_7294776.~fixed_hash_map();
        field_7294688.~vector();
        field_7164616.~list();
        field_7164584.~list();
        m_lootTrackerSaveHandler->~LootTrackerSaveHandler();
        m_entityOverlays->~EntityOverlays();
        field_6815000->~RollingAverageCounter();
        field_6814944->~RollingAverageCounter();
        field_6814744.~fixed_vector();
        m_highlightManager->~HighlightManager();
        field_2508992->~HostPlatformStats();
        field_2508968.~shared_ptr();
        field_2508856.~Array();
        field_2508832.~Array();
        field_2508808.~Array();
        field_2508784.~Array();
        field_2508760.~Array();
        field_2508744.~unique_ptr();
        field_2508736.~unique_ptr();
        field_2508688.~array();
        field_2508664.~shared_ptr();
        field_2508496.~SystemSettings();
        field_2508488.~unique_ptr();
        field_2508480.~unique_ptr();
        field_2506512->~hash_map();
        field_2506480.~list();
        field_2506448.~list();
        field_2506416.~list();
        field_2506384.~list();
        field_2506376.~unique_ptr();
        field_2505256.~fixed_vector();
        ((field_2505204 + 4))->~shared_ptr();
        field_2505144.~shared_ptr();
        field_2505120.~shared_ptr();
        field_2505104.~shared_ptr();
        field_2505072.~shared_ptr();
        field_2505056.~shared_ptr();
        field_2505008.~list();
        long lVar1 = 2504976;
        do {
            ((field_8 + lVar1 - 8))->~list();
            lVar1 = lVar1 - 32;
        } while (lVar1 != 1120528);
        field_1120528.~Array();
        field_1120504->~shared_ptr();
        field_1120496.~unique_ptr();
        field_1120488.~unique_ptr();
        field_1118880.~array();
        field_1117280.~array();
        field_1115824.~shared_ptr();
        field_1115800.~Array();
        field_1115784.~shared_ptr();
        field_1115760.~Array();
        field_1115736.~Array();
        field_1115712.~Array();
        field_1115696.~shared_ptr();
        field_1104440.~Array();
        field_1104416.~Array();
        field_1104392.~Array();
        field_1104368.~Array();
        field_1104344.~Array();
        field_1104320.~Array();
        field_1104296.~Array();
        field_1104272.~Array();
        field_1104256.~shared_ptr();
        field_1104240.~shared_ptr();
        field_1104224.~shared_ptr();
        field_1104208.~shared_ptr();
        field_1104200.~unique_ptr();
        field_1104184.~ScriptOption();
        field_1104088.~basic_string();
        field_1104056.~basic_string();
        field_1103888.~Array();
        field_1103856.~Array();
        field_55272.~array();
        field_55240.~vector();
        field_55216.~Array();
        field_55160.~basic_string();
        field_55128.~basic_string();
        field_55096.~basic_string();
        field_55064.~basic_string();
        field_54920.~basic_string();
        field_54792.~basic_string();
        field_54720.~unique_ptr();
        field_54664.~basic_string();
        field_54632.~basic_string();
        field_54600.~basic_string();
        field_54568.~basic_string();
        field_54560.~unique_ptr();
        field_54352.~basic_string();
        field_54312.~basic_string();
        field_54280.~basic_string();
        field_54272.~unique_ptr();
        field_54224.~basic_string();
        field_54200.~shared_ptr();
        field_54184.~shared_ptr();
        field_54176.~unique_ptr();
        field_53320.~basic_string();
        field_53160->~hash_map();
        field_53080.~unique_ptr();
        field_53072.~unique_ptr();
        field_53064.~unique_ptr();
        field_52936->~RollingAverageCounter();
        field_52920.~unique_ptr();
        field_52880.~vector();
        field_52872.~StockPriceCache();
        field_52848.~unique_ptr();
        field_52784.~array();
        field_52776.~unique_ptr();
        field_52768.~unique_ptr();
        field_52648.~array();
        field_52632.~shared_ptr();
        field_52568.~array();
        field_52552.~shared_ptr();
        field_52528.~shared_ptr();
        field_52512.~shared_ptr();
        field_52496.~shared_ptr();
        field_52488.~unique_ptr();
        field_52472.~shared_ptr();
        field_52424.~shared_ptr();
        field_52368.~basic_string();
        field_52016.~shared_ptr();
        field_19216.~array();
        field_19208.~unique_ptr();
        field_19200.~unique_ptr();
        field_19184.~unique_ptr();
        field_19128.~hash_map();
        field_19120.~unique_ptr();
        field_19072->~InputFieldKeyboardHandler();
        field_8496.~ClientInputHandler();
        field_8456.~basic_string();
        field_8408.~shared_ptr();
        field_8400.~unique_ptr();
        field_8392.~unique_ptr();
        field_8384.~unique_ptr();
        field_8376.~unique_ptr();
        field_8256.~fixed_vector();
        field_8168.~fixed_vector();
        field_8152.~unique_ptr();
    }

    // 0x1000df480
    void Client::Init() {
        auto pcVar1 = constants::ContentModeInternalName(m_contentMode);
        eastl::string local_68(pcVar1);
        shared_ptr<ApplicationContext>* this_00 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this)(this);
        PathProvider* pathProvider = (PathProvider*)**this_00;
        pcVar1 = field_54768;
        local_48 = eastl::string(pcVar1);
        GameShell3Cache::StartCommon(*pathProvider, local_48, local_68, 0, 22);
        OldscapeClientError::SetClientType(&local_48->GetID());
        ResetAndStoreLogFile();
    }

    // 0x1000df6f0
    void Client::SetLowMem() {
        dash3d::world::m_lowMem = 1;
        m_lowMem = true;
    }

    // 0x1000df710
    bool Client::GetLowMem() {
        return m_lowMem;
    }

    // 0x1000df720
    void Client::SetHighMem() {
        dash3d::world::m_lowMem = 0;
        m_lowMem = false;
    }

    // 0x1000df790
    void Client::MainInit(jag::input::Input* input, jag::input::InputHandler* inputHandler) {
        int iVar2;
        DeviceOptions* pDVar5;
        uint64_t extraout_var;

        uint8_t* puVar7 = &field_7306800;
        OSClientConsole* pOVar3 = (OSClientConsole*)(*puVar7).operator->();
        auto local_168 = GameShell3Cache::GetRootStorage();
        pOVar3->SetOutputDirectory(local_168);
        pOVar3 = (OSClientConsole*)(*puVar7).operator->();
        local_168 = Filename("commandhistory.txt");
        pOVar3->SetCommandHistoryFilename(local_168);
        long* plVar4 = (long*)(*puVar7).operator->();
        (**(void (**)(...))(*plVar4 + 16))(plVar4);
        bool local_169 = false;
        local_168 = std::make_unique<option::DeviceOptions, bool>(local_169);
        uint8_t* this_00 = &field_8376;
        *this_00 = local_168;
        if (field_8425 != false) {
            pDVar5 = (DeviceOptions*)(*this_00).operator->();
            iVar2 = pDVar5->GetUIQuality();
            if (iVar2 == 2) {
                pDVar5 = (DeviceOptions*)(*this_00).operator->();
                pDVar5->SetUIQuality(1);
            }
        }
        local_168 = std::make_unique<TotpPassCodes>();
        field_8392 = local_168;
        SetupKeyboard(inputHandler);
        SetupMouse(inputHandler);
        uint8_t* this_01 = &field_8496;
        AutoSingleton<jag::debug::DebugUIManager>* this_04 = (AutoSingleton<jag::debug::DebugUIManager>*)this_01;
        this_01->Init();
        auto pDVar6 = this_04->Instance();
        pDVar6->RegisterInputHandler(input);
        NPCType* this_02 = (NPCType*)(*puVar7).operator->();
        RegisterInputHandler((InputHandler*)this_02->GetHeadIconIndex(), '\0');
        RegisterInputHandler(field_19072, '\x01');
        RegisterInputHandler(this_01, '\x03');
        pDVar5 = (DeviceOptions*)(*this_00).operator->();
        iVar2 = pDVar5->GetWindowWidth();
        pDVar5 = (DeviceOptions*)(*this_00).operator->();
        int arg2 = pDVar5->GetWindowHeight();
        int arg3 = 894;
        if (field_8425 == false) {
            arg3 = 765;
        }
        StartApp(iVar2, arg2, arg3, 503, 1, 1);
        SetPixToolkit(1);
        OnWindowModeChanged();
        pDVar6 = (DebugUIManager*)Instance();
        uint8_t uVar1 = field_152->GetWindow();
        local_168 = ((Window*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->GetSafeAreaInsets();
        pDVar6->NotifyFrameStart(0.0, iVar2, arg2, local_168);
        SetMainState(0);
        sound::SetMainThread();
        pDVar5 = (DeviceOptions*)(*this_00).operator->();
        pDVar5->BindHandlers();
        local_168 = std::make_unique<option::GameOptions, bool&>(field_8425);
        field_8384 = local_168;
        ((GameOptions*)field_8384.operator->())->BindHandlers();
        local_168 = std::make_unique<RouteHighlighter, highlight::HighlightManager&>(*m_highlightManager);
        field_19200 = local_168;
        local_168 = std::make_unique<RouteHighlighter, highlight::HighlightManager&>(*m_highlightManager);
        field_19208 = local_168;
        puVar7 = (uint8_t*)field_19208.operator->();
        *puVar7 = 1;
    }

    // 0x1000dff90
    void Client::DirtyArea(int arg1, int arg2, int arg3, int arg4) {
        int iVar2;
        int* piVar3;
        uint8_t* puVar4;
        unsigned long arg1_00;

        unsigned int uVar1 = field_2506568;
        if (0 < (int)uVar1) {
            arg1_00 = 0;
            do {
                piVar3 = &field_2506876[arg1_00];
                iVar2 = *piVar3;
                piVar3 = &field_2507676[arg1_00];
                if ((arg1 < *piVar3 + iVar2) && (iVar2 < arg3 + arg1)) {
                    piVar3 = &field_2507276[arg1_00];
                    iVar2 = *piVar3;
                    piVar3 = &field_2508076[arg1_00];
                    if ((arg2 < *piVar3 + iVar2) && (iVar2 < arg4 + arg2)) {
                        puVar4 = &field_2506576[arg1_00];
                        *puVar4 = 1;
                    }
                }
                arg1_00 = arg1_00 + 1;
            } while (uVar1 != arg1_00);
        }
    }

    // 0x1000e0090
    void Client::BlitArea(int arg1, int arg2, int arg3, int arg4) {
        int iVar2;
        int* piVar3;
        uint8_t* puVar4;
        unsigned long arg1_00;

        unsigned int uVar1 = field_2506568;
        if (0 < (int)uVar1) {
            arg1_00 = 0;
            do {
                piVar3 = &field_2506876[arg1_00];
                iVar2 = *piVar3;
                piVar3 = &field_2507676[arg1_00];
                if ((arg1 < *piVar3 + iVar2) && (iVar2 < arg3 + arg1)) {
                    piVar3 = &field_2507276[arg1_00];
                    iVar2 = *piVar3;
                    piVar3 = &field_2508076[arg1_00];
                    if ((arg2 < *piVar3 + iVar2) && (iVar2 < arg4 + arg2)) {
                        puVar4 = &field_2506676[arg1_00];
                        *puVar4 = 1;
                    }
                }
                arg1_00 = arg1_00 + 1;
            } while (uVar1 != arg1_00);
        }
    }

    // 0x1000e0190
    void Client::AddChat(int arg1, const eastl::string& str1, const eastl::string& str2, const eastl::string& str3) {
        Console* this_00;
        char* str;

        if (arg1 == 99) {
            this_00 = (Console*)GetConsole();
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_00->AddMessage(2, str);
        }
        ChatHistory::AddChat(arg1, str1, str2, str3);
    }

    // 0x1000e01f0
    void Client::AddChat(int arg1, const eastl::string& str) {

        eastl::string local_58("");
        AddChat(arg1, local_58, str);
    }

    // 0x1000e0270
    void Client::SavePermClientVars() {
        ClientVarValues* pCVar1;
        void* in_RSI;

        uint8_t* clientVarValues = &field_52488;
        if (clientVarValues != in_RSI) {
            pCVar1 = (ClientVarValues*)(*clientVarValues).operator->();
            if (pCVar1->ArePermVarsModified() != '\0') {
                pCVar1 = (ClientVarValues*)(*clientVarValues).operator->();
                pCVar1->SavePermVars();
            }
        }
    }

    // 0x1000e02e0
    void Client::ResetPlayerFriendIndicators() {
        shared_ptr<ClientPlayer>* this_00;
        long lVar2;
        void* in_RSI;

        if (0 < ReceivePlayerPositions::m_lastNum) {
            lVar2 = 0;
            do {
                in_RSI = (void*)(long)(int)(&ReceivePlayerPositions::m_lastID)[lVar2];
                this_00 = &field_19216[(unsigned long)in_RSI];
                ((ClientPlayer*)(*this_00).operator->())->ResetIsFriendCachedState();
                lVar2 = lVar2 + 1;
            } while (lVar2 < ReceivePlayerPositions::m_lastNum);
        }
        ChatHistory::ResetFriendIndicators();
        if (&field_52544 != in_RSI) {
            ((FriendChatChannel*)field_52544.operator->())->ResetCachedFriendIndicators();
        }
    }

    // 0x1000e03f0
    void Client::ResetPlayerIgnoreIndicators() {
        void* in_RSI;

        ChatHistory::ResetIgnoreIndicators();
        if (&field_52544 != in_RSI) {
            ((FriendChatChannel*)field_52544.operator->())->ResetCachedIgnoreIndicators();
        }
    }

    // 0x1000e0480
    void Client::ResetPlayerFriendChatIndicators() {
        shared_ptr<ClientPlayer>* this_00;
        long lVar1;

        if (0 < ReceivePlayerPositions::m_lastNum) {
            lVar1 = 0;
            do {
                this_00 = (shared_ptr<ClientPlayer>*)field_19216[(long)(int)(&ReceivePlayerPositions::m_lastID)[lVar1]];
                ((ClientPlayer*)(*this_00).operator->())->ResetIsFriendChatCachedState();
                lVar1 = lVar1 + 1;
            } while (lVar1 < ReceivePlayerPositions::m_lastNum);
        }
    }

    // 0x1000e0500
    void Client::ResetPlayerClanIndicators() {
        shared_ptr<ClientPlayer>* this_00;
        long lVar1;

        if (0 < ReceivePlayerPositions::m_lastNum) {
            lVar1 = 0;
            do {
                this_00 = (shared_ptr<ClientPlayer>*)field_19216[(long)(int)(&ReceivePlayerPositions::m_lastID)[lVar1]];
                ((ClientPlayer*)(*this_00).operator->())->ResetIsClanCachedState();
                lVar1 = lVar1 + 1;
            } while (lVar1 < ReceivePlayerPositions::m_lastNum);
        }
    }

    // 0x1000e0580
    void Client::NotifyFriendSystemUpdate() {
        field_2506344 = field_2505808;
    }

    // 0x1000e05a0
    void Client::NotifyFriendChatUpdate() {
        field_2506348 = field_2505808;
        field_2508660 = 1;
    }

    // 0x1000e05c0
    void Client::NotifyClanSettingsUpdate() {
        field_2506352 = field_2505808;
        field_7164882 = 1;
    }

    // 0x1000e05e0
    void Client::FriendsChatKickUser(const eastl::string& str) {
        PublishingPlatformType publishingPlatformType;
        ServerConnection* pSVar2;
        Isaac* isaac;
        uint8_t local_60[64];

        if (!&field_52544 == str) {
            pSVar2 = (ServerConnection*)field_19120.operator->();
            isaac = pSVar2->GetOutgoingEncryption();
            *local_60 = shared::ClientMessage::MakeClientMessage(87, *isaac);
            publishingPlatformType =
                PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(str, false);
            ((local_60 + 8))->p1<shared::LoginProt::ID>(publishingPlatformType);
            ((local_60 + 8))->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(str, false);
            pSVar2 = (ServerConnection*)field_19120.operator->();
            pSVar2->SendClientMessage(*local_60);
        }
    }

    // 0x1000e06a0
    void Client::FriendsChatJoinChat(const eastl::string& str) {
        PublishingPlatformType publishingPlatformType;
        ServerConnection* pSVar2;
        Isaac* isaac;
        uint8_t local_60[64];

        if (!str == (*((value_type*)""))) {
            pSVar2 = (ServerConnection*)field_19120.operator->();
            isaac = pSVar2->GetOutgoingEncryption();
            *local_60 = shared::ClientMessage::MakeClientMessage(67, *isaac);
            publishingPlatformType =
                PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(str, false);
            ((local_60 + 8))->p1<shared::LoginProt::ID>(publishingPlatformType);
            ((local_60 + 8))->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(str, false);
            pSVar2 = (ServerConnection*)field_19120.operator->();
            pSVar2->SendClientMessage(*local_60);
        }
    }

    // 0x1000e0750
    void Client::FriendsChatLeaveChat() {
        uint8_t local_50[64];

        auto pSVar1 = field_19120.operator->();
        auto isaac = pSVar1->GetOutgoingEncryption();
        *local_50 = shared::ClientMessage::MakeClientMessage(67, *isaac);
        ((local_50 + 8))->p1<shared::LoginProt::ID>(0);
        pSVar1 = (ServerConnection*)field_19120.operator->();
        pSVar1->SendClientMessage(*local_50);
    }

    // 0x1000e07d0
    void Client::ClanChannelKickUser(int arg1, int arg2) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00;
        int iVar2;
        shared_ptr<dash3d::GroundDecor>* psVar3;
        long lVar4;
        eastl::string* str;
        ServerConnection* pSVar5;
        Isaac* isaac;
        uint8_t local_b0[64];
        eastl::string local_70;
        shared_ptr<dash3d::Decor> local_40;

        if (arg1 < 0) {
            psVar3 = (shared_ptr<dash3d::GroundDecor>*)&field_52632;
        } else {
            psVar3 = &field_52648[(long)arg1];
        }
        shared_ptr<dash3d::Decor> local_50(psVar3);
        if (!local_50 == nullptr && -1 < arg2) {
            iVar2 = ((ClanChannel*)local_50.operator->())->GetUserListSize();
            if (arg2 < iVar2) {
                lVar4 = local_50.operator->();
                psVar3 = (shared_ptr<dash3d::GroundDecor>*)(*((lVar4 + 48)))[(long)arg2];
                local_40 = shared_ptr(psVar3);
                lVar4 = local_40.operator->();
                if (*(char*)(lVar4 + 8) == -1) {
                    lVar4 = local_40.operator->();
                    str = ((lVar4 + 16))->GetDisplayName();
                    local_70 = eastl::string(*str);
                    pSVar5 = (ServerConnection*)field_19120.operator->();
                    isaac = pSVar5->GetOutgoingEncryption();
                    *local_b0 = shared::ClientMessage::MakeClientMessage(83, *isaac);
                    iVar2 =
                        PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(local_70, false);
                    this_00 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b0 + 8);
                    this_00->p1<shared::LoginProt::ID>(iVar2 + 3);
                    this_00->p1<shared::LoginProt::ID>(arg1);
                    this_00->p2<int>(arg2);
                    this_00->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(local_70, false);
                    pSVar5 = (ServerConnection*)field_19120.operator->();
                    pSVar5->SendClientMessage(*local_b0);
                }
            }
        }
    }

    // 0x1000e0a80
    void Client::AffinedClanSettingsAddBannedFromChannel(int arg1, int arg2) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00;
        int iVar2;
        long lVar3;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        ServerConnection* pSVar4;
        Isaac* isaac;
        eastl::string* pbVar5;
        uint8_t local_80[64];
        shared_ptr<dash3d::Decor> local_40;

        shared_ptr<configdecoder::ObjType>* objType = &field_52648[(long)arg1];
        if ((!*objType == nullptr) && (-1 < arg2)) {
            iVar2 = ((ClanChannel*)(*objType).operator->())->GetUserListSize();
            if (arg2 < iVar2) {
                lVar3 = (*objType).operator->();
                groundDecor = (shared_ptr<dash3d::GroundDecor>*)(*((lVar3 + 48)))[(long)arg2];
                local_40 = shared_ptr(groundDecor);
                lVar3 = local_40.operator->();
                if (*(char*)(lVar3 + 8) == -1) {
                    pSVar4 = (ServerConnection*)field_19120.operator->();
                    isaac = pSVar4->GetOutgoingEncryption();
                    *local_80 = shared::ClientMessage::MakeClientMessage(70, *isaac);
                    lVar3 = local_40.operator->();
                    pbVar5 = ((lVar3 + 16))->GetDisplayName();
                    iVar2 =
                        PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(*pbVar5, false);
                    this_00 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_80 + 8);
                    this_00->p1<shared::LoginProt::ID>(iVar2 + 3);
                    this_00->p1<shared::LoginProt::ID>(arg1);
                    this_00->p2<int>(arg2);
                    lVar3 = local_40.operator->();
                    pbVar5 = ((lVar3 + 16))->GetDisplayName();
                    this_00->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(*pbVar5, false);
                    pSVar4 = (ServerConnection*)field_19120.operator->();
                    pSVar4->SendClientMessage(*local_80);
                }
            }
        }
    }

    // 0x1000e0c10
    void Client::AffinedClanSettingsSetMutedFromChannel(int arg1, int arg2, bool arg3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00;
        int iVar2;
        long lVar3;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        ServerConnection* pSVar4;
        Isaac* isaac;
        eastl::string* pbVar5;
        uint32_t in_register_00000009;
        uint8_t local_88[64];
        shared_ptr<dash3d::Decor> local_48;
        PublishingPlatformType local_34;

        shared_ptr<configdecoder::ObjType>* objType = &field_52648[(long)arg1];
        if ((!*objType == nullptr) && (-1 < arg2)) {
            iVar2 = ((ClanChannel*)(*objType).operator->())->GetUserListSize();
            if (arg2 < iVar2) {
                local_34 = (((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3);
                lVar3 = (*objType).operator->();
                groundDecor = (shared_ptr<dash3d::GroundDecor>*)(*((lVar3 + 48)))[(long)arg2];
                local_48 = shared_ptr(groundDecor);
                pSVar4 = (ServerConnection*)field_19120.operator->();
                isaac = pSVar4->GetOutgoingEncryption();
                *local_88 = shared::ClientMessage::MakeClientMessage(21, *isaac);
                lVar3 = local_48.operator->();
                pbVar5 = ((lVar3 + 16))->GetDisplayName();
                iVar2 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(*pbVar5, false);
                this_00 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_88 + 8);
                this_00->p1<shared::LoginProt::ID>(iVar2 + 4);
                this_00->p1<shared::LoginProt::ID>(arg1);
                this_00->p2<int>(arg2);
                this_00->p1<shared::LoginProt::ID>(local_34 & 255);
                lVar3 = local_48.operator->();
                pbVar5 = ((lVar3 + 16))->GetDisplayName();
                this_00->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(*pbVar5, false);
                pSVar4 = (ServerConnection*)field_19120.operator->();
                pSVar4->SendClientMessage(*local_88);
            }
        }
    }

    // 0x1000e0d90
    void Client::FindObjects(eastl::string str, bool arg2) {
        uint16_t uVar1;
        long lVar2;
        shared_ptr<configdecoder::ObjType>* this_00;
        uint16_t* puVar3;
        int arg1;
        unsigned int uVar4;
        unsigned long arg1_00;
        unsigned int uVar5;
        eastl::string local_b8;
        ReturnValue local_98;
        FoundObject local_88;
        unsigned int local_34;

        str->make_lower();
        vector<FoundObject> local_70;
        vector<eastl::pair<int, int>>* local_40 = (vector<eastl::pair<int, int>>*)&field_52880;
        Client* local_48 = this;
        if (configdecoder::ObjType::m_numDefinitions < 1) {
            uVar4 = 0;
        } else {
            arg1 = 0;
            local_34 = 0;
            do {
                local_98 = configdecoder::ObjType::List(arg1);
                if ((!arg2) || (lVar2 = local_98.operator->(), *(char*)(lVar2 + 825) != '\0')) {
                    lVar2 = local_98.operator->();
                    uVar5 = 4;
                    if (*(int*)(lVar2 + 732) == -1) {
                        lVar2 = local_98.operator->();
                        local_b8 = eastl::string(*((lVar2 + 8)));
                        local_b8.make_lower();
                        lVar2 = local_b8.find(str, 0);
                        if (lVar2 == -1) {
                            uVar5 = 4;
                        } else if ((int)local_34 < 250) {
                            local_88._0_8_ = 0;
                            local_88.field_8 = 0;
                            local_88.field_16 = 0;
                            local_88._18_6_ = 0;
                            local_88 = graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
                            local_70.push_back(local_88);
                            lVar2 = local_70.back();
                            *(short*)(lVar2 + 16) = (short)arg1;
                            this_00 = (shared_ptr<configdecoder::ObjType>*)local_70.back();
                            *this_00 = local_98;
                            local_34 = local_34 + 1;
                            uVar5 = 0;
                        } else {
                            *(uint32_t*)((long)&local_48->field_52912 + 4) = 4294967295;
                            local_40->clear();
                            uVar5 = 1;
                        }
                    }
                } else {
                    uVar5 = 4;
                }
                uVar4 = local_34;
                if ((uVar5 & 3) != 0) {
                    if (uVar5 != 2)
                        goto LAB_1000e0fe0;
                    break;
                }
                arg1 = arg1 + 1;
            } while (arg1 < configdecoder::ObjType::m_numDefinitions);
        }
        auto foundObject1 = local_70.HeapBeginPtr();
        auto foundObject2 = local_70.end();
        std::sort<FoundObject*>(foundObject1, foundObject2);
        local_40->resize((long)(int)uVar4);
        local_34 = uVar4;
        if (0 < (int)uVar4) {
            arg1_00 = 0;
            do {
                lVar2 = local_70[arg1_00];
                uVar1 = *(uint16_t*)(lVar2 + 16);
                puVar3 = (uint16_t*)(*local_40)[arg1_00];
                *puVar3 = uVar1;
                arg1_00 = arg1_00 + 1;
            } while (uVar4 != arg1_00);
        }
        *(uint32_t*)&local_48->field_52912 = 0;
        *(unsigned int*)((long)&local_48->field_52912 + 4) = local_34;
    LAB_1000e0fe0:
    }

    // 0x1000e1260
    void Client::StoreNewPackedUID(core::SuperPacket& superPacket, int arg2) {
        Array<unsigned char> local_40;

        auto pAVar1 = superPacket.SSOBeginPtr();
        local_40.Array<BucketAllocatorEASTL>(*pAVar1);
        CachePackedUID(local_40, arg2);
        pAVar1 = (Array<unsigned char, BucketAllocatorEASTL>*)superPacket.SSOBeginPtr();
        local_40.Array<BucketAllocatorEASTL>(*pAVar1);
        GameShell3Cache::StoreUID192(local_40, arg2);
    }

    // 0x1000e1300
    void Client::CachePackedUID(const Array<unsigned char>& arg1, int arg2) {
        uint8_t* this_00 = &field_55216;
        if (this_00->empty() != '\0') {
            this_00->set_max_size(24, 3);
        }
        if (arg1.end() < (unsigned long)(long)(arg2 + 24)) {
            LogAssert("data.size() >= static_cast<size_t>(GameShell3Cache::UID_PACKED_SIZE + offset)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      3872, nullptr);
        }
        auto puVar5 = this_00->data();
        long lVar6 = arg1.data();
        uint64_t* puVar1 = (uint64_t*)(lVar6 + arg2);
        uint64_t uVar2 = puVar1[1];
        *puVar5 = *puVar1;
        puVar5[1] = uVar2;
        puVar5[2] = *(uint64_t*)(lVar6 + 16 + (long)arg2);
    }

    // 0x1000e1430
    void Client::SerialiseCurrentPackedUIDToPacket(core::SuperPacket& superPacket) {
        unsigned char* puVar2;
        unsigned long uVar3;
        ReturnValue local_38;

        uint8_t* this_00 = &field_55216;
        if (this_00->end() == 0) {
            local_38 = GameShell3Cache::LoadUID192();
            puVar2 = (unsigned char*)local_38.data();
            uVar3 = local_38.end();
            superPacket.pArrayBuffer(puVar2, 0, uVar3);
            local_38.~Array();
        } else {
            puVar2 = (unsigned char*)this_00->data();
            uVar3 = this_00->end();
            superPacket.pArrayBuffer(puVar2, 0, uVar3);
        }
    }

    // 0x1000e1600
    uint8_t* Client::GetDisplayName() const {
        int iVar2;
        long lVar3;
        uint8_t* puVar4;

        if ((GetDisplayName()::empty == '\0') && (iVar2 = ___cxa_guard_acquire(&GetDisplayName()::empty), iVar2 != 0)) {
            new ((DisplayName*)&GetDisplayName()::empty) rs2lib::social::DisplayName();
            ___cxa_atexit(PTR__pair_100ee6b50, &GetDisplayName()::empty, 4294967296);
            ___cxa_guard_release(&GetDisplayName()::empty);
        }
        if (field_52016 != nullptr) {
            lVar3 = field_52016.operator->();
            puVar4 = (uint8_t*)((lVar3 + 992))->end();
            if (puVar4 != nullptr) {
                return puVar4;
            }
        }
        return &GetDisplayName()::empty;
    }

    // 0x1000e16e0
    Client* Client::RemoveChatCrownTags(const eastl::string& str) {
        Client* pCVar1;
        bool bVar2;
        int* piVar3;
        long lVar4;
        eastl::string* in_RDX;
        ReturnValue local_58;

        int arg1 = 0;
        do {
            piVar3 = (int*)constants::ChatCrownType::FromId(arg1);
            if (*piVar3 != -1) {
                local_58 = StringConstants::TAG_IMG(*piVar3);
                bVar2 =
                    core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(*in_RDX, local_58);
                if (bVar2) {
                    local_58 = eastl::to_string(*piVar3);
                    lVar4 = local_58.size();
                    pCVar1 = this;
                    *this = in_RDX->substr(lVar4 + 6, 18446744073709551615);
                    return pCVar1;
                }
            }
            pCVar1 = this;
            arg1 = arg1 + 1;
        } while (arg1 != 17);
        new (this) eastl::string(*in_RDX);
        return pCVar1;
    }

    // 0x1000e17b0
    PixfontGeneric* Client::GetFontFromGroupId(int arg1) {
        uint8_t* puVar1;
        long lVar3;
        uint8_t* puVar4;
        PacketT<Array<unsigned char>>* this_02;
        schar* arg1_00;
        shared_ptr<jstring::PixfontGeneric>* this_03;
        PixfontGeneric* this_04;
        ReturnValue local_80;
        Array<signed char> local_68;
        shared_ptr<PacketJ<Array<unsigned char>>> local_48;

        uint8_t* this_00 = &field_7294776;
        auto local_90 = this_00->find((unsigned long long)arg1);
        PixfontGeneric local_538 = this_00->end();
        if (local_90 != local_538 == '\0') {
            this_04 = &local_48;
            new (this_04) shared_ptr();
            puVar4 = (uint8_t*)field_54496->GetFile(*this_04, arg1, 0, nullptr);
            puVar1 = DataStatus::READY;
            if (puVar4 == DataStatus::READY) {
                lVar3 = ((TextureAtlasReference*)local_48.operator->())->GetTextureAtlas();
                this_02 = (PacketT<Array<unsigned char>>*)local_48.operator->();
                arg1_00 = (schar*)this_02->GetDataPtr();
                local_68 = Array<signed char>(arg1_00, arg1_00 + lVar3);
                local_538 = jstring::PixfontGeneric(local_68);
                local_80 = this_00->emplace<int&, jstring::PixfontGeneric>(arg1, local_538);
                local_80[0] = (ReturnValue)(long)arg1;
                local_538 = this_00->find(local_80);
                lVar3 = local_538.HeapBeginPtr();
                this_04 = (PixfontGeneric*)(lVar3 + 8);
            }
            if (puVar4 != puVar1) {
                local_538.field_0 = 1;
                this_03 = &field_19128[local_538];
                this_04 = (PixfontGeneric*)**this_03;
            }
        } else {
            lVar3 = local_90.HeapBeginPtr();
            this_04 = (PixfontGeneric*)(lVar3 + 8);
        }
        return this_04;
    }

    // 0x1000e1ab0
    uint64_t Client::Main(const Array<eastl::string, BucketAllocatorEASTL>& strs) {
        Client* pCVar1;
        Client* pCVar2;
        bool cVar3;
        bool bVar4;
        int iVar5;
        int iVar6;
        uint64_t uVar8;
        unsigned long uVar9;
        eastl::string* pbVar11;
        uint8_t** ppuVar12;
        char* pcVar13;
        basic_string<char, BucketAllocatorEASTL>* pbVar14;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* pbVar15;
        uint64_t uVar16;
        shared_ptr<ApplicationContext>* this_00;
        PathProvider* pathProvider;
        WindowInitParams* windowInitParams;
        DeviceOptions* this_02;
        Layout* this_03;
        PacketT<Array<unsigned char> _>* arg1;
        bool bVar17;
        unsigned long uVar18;
        eastl::string* local_e0;
        eastl::string* local_d0;
        uint8_t local_c8[104];
        int local_40;
        int local_3c;

        Client* local_38 = this;
        new (local_c8) eastl::allocator("EASTL basic_string");
        eastl::string local_100("", local_c8);
        long lVar7 = strs.end();
        if (lVar7 != 0) {
            uVar18 = 0;
            do {
                strs[uVar18];
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_100.append_sprintf(" \"%s\"", uVar8);
                uVar18 = uVar18 + 1;
                uVar9 = strs.end();
            } while (uVar18 < uVar9);
        }
        auto pLVar10 = logger::default_logger();
        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pLVar10->Log(false, 5,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                     3402, "Evaluating Command-line args: %s", uVar8);
        uVar18 = strs.end();
        if (uVar18 < 7) {
            Usage();
        } else {
            pbVar11 = &strs[0];
            iVar5 = eastl::stoi<eastl::string>(*pbVar11, 10);
            local_38->m_worldId = iVar5;
            pbVar11 = &strs[1];
            new (local_c8) eastl::string("live");
            cVar3 = is_equal_ignore_case(pbVar11, (eastl::string*)local_c8);
            if (!cVar3) {
                pbVar11 = &strs[1];
                new (local_c8) eastl::string("wtrc");
                cVar3 = is_equal_ignore_case(pbVar11, (eastl::string*)local_c8);
                if (!cVar3) {
                    pbVar11 = &strs[1];
                    new (local_c8) eastl::string("wtqa");
                    cVar3 = is_equal_ignore_case(pbVar11, (eastl::string*)local_c8);
                    if (!cVar3) {
                        pbVar11 = &strs[1];
                        new (local_c8) eastl::string("wtwip");
                        cVar3 = is_equal_ignore_case(pbVar11, (eastl::string*)local_c8);
                        if (!cVar3) {
                            pbVar11 = &strs[1];
                            new (local_c8) eastl::string("local");
                            cVar3 = is_equal_ignore_case(pbVar11, (eastl::string*)local_c8);
                            if (!cVar3) {
                                pbVar11 = &strs[1];
                                new (local_c8) eastl::string("wti");
                                cVar3 = is_equal_ignore_case(pbVar11, (eastl::string*)local_c8);
                                if (!cVar3) {
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
            strs[2];
            pcVar13 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            new (local_c8) eastl::string(pcVar13);
            iVar5 = constants::ContentModeGetByString(*local_c8);
            pCVar1 = local_38;
            local_38->m_contentMode = iVar5;
            if (pCVar1->m_contentMode == -1) {
                Usage();
            } else {
                pbVar14 = &strs[3];
                bVar4 = *pbVar14 == (*((value_type*)"lowmem"));
                if (bVar4) {
                    SetLowMem(local_38);
                } else {
                    pbVar14 = &strs[3];
                    bVar4 = *pbVar14 == (*((value_type*)"highmem"));
                    if (!bVar4) {
                        Usage();
                        goto LAB_1000e298c;
                    }
                    SetHighMem(local_38);
                }
                pbVar14 = &strs[4];
                bVar4 = *pbVar14 == (*((value_type*)"free"));
                if (bVar4) {
                    bVar17 = false;
                } else {
                    pbVar14 = &strs[4];
                    bVar4 = *pbVar14 == (*((value_type*)"members"));
                    bVar17 = true;
                    if (!bVar4) {
                        Usage();
                        goto LAB_1000e298c;
                    }
                }
                local_38->field_8424 = bVar17;
                local_38->field_8432 = (Language*)Language::EN;
                pbVar14 = &strs[6];
                bVar4 = *pbVar14 == (*((value_type*)"oldscape"));
                if (bVar4) {
                    local_38->field_8440 = (ModeGame*)ModeGame::OLDSCAPE;
                    local_38->field_54172 = 0;
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
                    uVar18 = strs.end();
                    local_3c = 503;
                    bVar4 = true;
                    if (7 < uVar18) {
                        local_3c = 503;
                        uVar18 = 7;
                        do {
                            pbVar11 = &strs[uVar18];
                            new (local_c8) eastl::string("--gameaddress");
                            cVar3 = is_equal_ignore_case(pbVar11, (eastl::string*)local_c8);
                            if (cVar3) {
                                lVar7 = strs.end();
                                if (uVar18 != lVar7 - 1U) {
                                    uVar9 = uVar18 + 1;
                                    pbVar15 = &strs[uVar9];
                                    cVar3 = pbVar15->empty();
                                    if (!cVar3) {
                                        pbVar11 = &strs[uVar9];
                                        bVar4 = starts_with<eastl::string>(pbVar11, "--");
                                        if (bVar4) {
                                            pLVar10 = logger::default_logger();
                                            strs[uVar9];
                                            uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            strs[uVar18];
                                            uVar16 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            pLVar10->Log(false, 2,
                                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                         "OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                                                         3516, "%s is not expected following %s", uVar8, uVar16);
                                            Usage();
                                            goto LAB_1000e2685;
                                        }
                                        pbVar11 = &strs[uVar9];
                                        *local_e0 = pbVar11;
                                        local_38->field_54216 = '\x01';
                                        uVar18 = uVar9;
                                        goto LAB_1000e2065;
                                    }
                                }
                                pLVar10 = logger::default_logger();
                                strs[uVar18];
                                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                pLVar10->Log(false, 2,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/client.cpp",
                                             3511, "Expected a value after %s", uVar8);
                                Usage();
                                goto LAB_1000e2685;
                            }
                            pbVar11 = &strs[uVar18];
                            new (local_c8) eastl::string("--frame");
                            cVar3 = is_equal_ignore_case(pbVar11, (eastl::string*)local_c8);
                            if (cVar3) {
                                lVar7 = strs.end();
                                if (uVar18 != lVar7 - 1U) {
                                    uVar9 = uVar18 + 1;
                                    pbVar15 = &strs[uVar9];
                                    cVar3 = pbVar15->empty();
                                    if (!cVar3) {
                                        pbVar11 = &strs[uVar9];
                                        bVar4 = starts_with<eastl::string>(pbVar11, "--");
                                        if (bVar4) {
                                            pLVar10 = logger::default_logger();
                                            strs[uVar9];
                                            uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            strs[uVar18];
                                            uVar16 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            pLVar10->Log(false, 2,
                                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                         "OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                                                         3534, "%s is not expected following %s", uVar8, uVar16);
                                            Usage();
                                            goto LAB_1000e2685;
                                        }
                                        cVar3 = strs[uVar9];
                                        split((eastl::string*)local_c8, cVar3);
                                        uVar18 = local_c8->size();
                                        if (uVar18 < 4) {
                                            Usage();
                                        LAB_1000e204f:
                                            bVar4 = false;
                                        } else {
                                            pbVar11 = (eastl::string*)(*local_c8)[0];
                                            iVar5 = eastl::stoi<eastl::string>(*pbVar11, 10);
                                            pbVar11 = (eastl::string*)(*local_c8)[1];
                                            iVar6 = eastl::stoi<eastl::string>(*pbVar11, 10);
                                            pbVar11 = (eastl::string*)(*local_c8)[2];
                                            local_40 = eastl::stoi<eastl::string>(*pbVar11, 10);
                                            pbVar11 = (eastl::string*)(*local_c8)[3];
                                            local_3c = eastl::stoi<eastl::string>(*pbVar11, 10);
                                            if ((((iVar5 < 0) || (iVar6 < 0)) || (local_40 < 1)) ||
                                                (bVar4 = true, local_3c < 1)) {
                                                Usage();
                                                goto LAB_1000e204f;
                                            }
                                        }
                                        uVar18 = uVar9;
                                        if (bVar4)
                                            goto LAB_1000e2065;
                                        goto LAB_1000e2685;
                                    }
                                }
                                pLVar10 = logger::default_logger();
                                strs[uVar18];
                                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                pLVar10->Log(false, 2,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/client.cpp",
                                             3529, "Expected a value after %s", uVar8);
                                Usage();
                            LAB_1000e2685:
                                bVar4 = false;
                                goto LAB_1000e2687;
                            }
                            pbVar11 = &strs[uVar18];
                            new (local_c8) eastl::string("--configURI");
                            cVar3 = is_equal_ignore_case(pbVar11, (eastl::string*)local_c8);
                            if (cVar3) {
                                lVar7 = strs.end();
                                if (uVar18 != lVar7 - 1U) {
                                    uVar9 = uVar18 + 1;
                                    pbVar15 = &strs[uVar9];
                                    cVar3 = pbVar15->empty();
                                    if (!cVar3) {
                                        pbVar11 = &strs[uVar9];
                                        bVar4 = starts_with<eastl::string>(pbVar11, "--");
                                        if (bVar4) {
                                            pLVar10 = logger::default_logger();
                                            strs[uVar9];
                                            uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            strs[uVar18];
                                            uVar16 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            pLVar10->Log(false, 2,
                                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                         "OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                                                         3565, "%s is not expected following %s", uVar8, uVar16);
                                            Usage();
                                            goto LAB_1000e2685;
                                        }
                                        pbVar11 = &strs[uVar9];
                                        *local_d0 = pbVar11;
                                        uVar18 = uVar9;
                                        goto LAB_1000e2065;
                                    }
                                }
                                pLVar10 = logger::default_logger();
                                strs[uVar18];
                                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                pLVar10->Log(false, 2,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/client.cpp",
                                             3560, "Expected a value after %s", uVar8);
                                Usage();
                                goto LAB_1000e2685;
                            }
                            strs[uVar18];
                            pcVar13 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            cVar3 = starts_with(pcVar13, "jagex-jav://");
                            if (!cVar3) {
                                pLVar10 = logger::default_logger();
                                strs[uVar18];
                                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                pLVar10->Log(false, 2,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/client.cpp",
                                             3580, "Argument, %s, is not expected", uVar8);
                                Usage();
                                goto LAB_1000e2685;
                            }
                            eastl::string::assign(local_d0, "http://");
                            strs[uVar18];
                            lVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            *local_d0 += ((lVar7 + 12));
                        LAB_1000e2065:
                            uVar18 = uVar18 + 1;
                            uVar9 = strs.end();
                        } while (uVar18 < uVar9);
                        bVar4 = true;
                    }
                LAB_1000e2687:
                    if (bVar4) {
                        *local_c8 = SystemDetails::GetDeepLink();
                        pCVar1 = local_38;
                        SystemDetails::GetDeepLinkingValuesForKey<int>(*local_c8, "os_ids", local_38->field_55240);
                        pcVar13 = constants::ContentModeInternalName(pCVar1->m_contentMode);
                        new (local_c8) eastl::allocator("EASTL basic_string");
                        local_60 = eastl::string(pcVar13, local_c8);
                        this_00 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar1)(pCVar1);
                        pathProvider = (PathProvider*)**this_00;
                        pcVar13 = pCVar1->field_54768;
                        new (local_c8) eastl::string(pcVar13);
                        GameShell3Cache::StartCommon(*pathProvider, *local_c8, local_60, 0, 22);
                        local_d8[0] = (allocator)1;
                        *local_c8 = std::make_unique<option::DeviceOptions, bool>(local_d8);
                        pCVar1->field_8376 = *local_c8;
                        *local_c8 = std::make_unique<option::GameOptions, bool&>(pCVar1->field_8425);
                        pCVar1->field_8384 = *local_c8;
                        *local_c8 = std::make_unique<TotpPassCodes>();
                        pCVar1->field_8392 = *local_c8;
                        *local_c8 = std::make_unique<DiscordMain>();
                        pCVar1->field_8400 = *local_c8;
                        pCVar2 = local_38;
                        local_c8->~unique_ptr();
                        ((DiscordMain*)pCVar1->field_8400.operator->())->Init(0);
                        windowInitParams = (WindowInitParams*)pCVar2->field_152->GetWindowInitParams();
                        new (local_c8) WindowInitParams(*windowInitParams);
                        if (pCVar1->field_8425 == false) {
                            local_c8._0_8_ = (ReturnValue)2881923056705;
                        }
                        local_c8._64_4_ = local_40;
                        local_c8._68_4_ = local_3c;
                        local_c8[9] = 1;
                        this_02 = (DeviceOptions*)pCVar1->field_8376.operator->();
                        this_03 = (Layout*)this_02->GetWindowSavedPosition();
                        arg1 = (PacketT<Array<unsigned char> _>*)this_03->SSOBeginPtr();
                        (*((local_c8 + 72))) = *arg1;
                        pCVar2->field_152->SetWindowInitParams(*local_c8);
                        (&pCVar2->field_54280)->assign("https://oldschool.runescape.com/slr.ws?order=LPWM");
                        (&pCVar2->field_54792)->assign("");
                        pCVar2->field_54824 = 0;
                        if (pCVar2->field_54168 != *(int*)(ModeWhere::LIVE + 8)) {
                            cVar3 = local_d0->empty();
                            if (cVar3) {
                                iVar5 = local_e0->compare("127.0.0.1");
                                if ((iVar5 == 0) && (pCVar2->field_54168 != *(int*)(ModeWhere::LOCAL + 8))) {
                                    pLVar10 = logger::default_logger();
                                    pLVar10->Log(false, 2,
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "projects/osclient/client.cpp",
                                                 3645, "No suitable URL for downloading the JavConfig");
                                    Usage();
                                }
                            }
                        }
                    }
                } else {
                    Usage();
                }
            }
        }
    LAB_1000e298c:
        return 1;
    }

    // 0x1000e2b00
    void Client::Usage() {
        (logger::default_logger())
            ->Log(false, 5,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 3660,
                  "\nUsage: [worldid] [live/wtrc/wtqa/wtwip/local/wti] [live/rc/wip] [lowmem/highmem] [free/members] "
                  "[english/german] [game] [<additionl args>]\n<additional args>:\n--gameaddress <server> Specify a "
                  "game server to connect to\n--frame <x>,<y>,<width>,<height> Specfiy the frame size with four "
                  "numbers\n--configURI <server> Specify a URL to use when fetch the JavConfig\n");
        _exit(1);
    }

    // 0x1000e3080
    void Client::SetupInterfaceRenderer() {
        uint64_t extraout_var;
        SoftwarePix3D* pSVar4;
        SoftwareWorldRenderer* this_00;
        void* in_RSI;

        uint8_t uVar1 = field_144->GetPix2D();
        long lVar3 = (((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        bool bVar2 = &field_1120496 == in_RSI;
        uint8_t* this_01 = &field_1120488;
        if (bVar2) {
            pSVar4 = (SoftwarePix3D*)operator new(144);
            new (pSVar4) dash3d::SoftwarePix3D(*((lVar3 + 32)), *(int*)(lVar3 + 8), *(int*)(lVar3 + 12));
            this_01->reset(pSVar4);
            this_00 = (SoftwareWorldRenderer*)operator new(6437248);
            pSVar4 = (SoftwarePix3D*)this_01->get();
            new (this_00) dash3d::SoftwareWorldRenderer(pSVar4);
            field_1120496.reset(this_00);
        } else {
            pSVar4 = (SoftwarePix3D*)(*this_01).operator->();
            pSVar4->SetDest(*((lVar3 + 32)), *(int*)(lVar3 + 8), *(int*)(lVar3 + 12));
        }
    }

    // 0x1000e3160
    void Client::AnimateInterface(int arg1) {
        Array<shared_ptr<rs2lib::IfType>>* ifTypes;

        if (((IfType*)(unsigned long)(unsigned int)arg1)->OpenInterface(arg1) != '\0') {
            ifTypes = (Array<shared_ptr<rs2lib::IfType>>*)(*(
                (Array<Array<shared_ptr<rs2lib::IfType>>>*)&rs2lib::IfType::m_list))[(long)arg1];
            AnimateLayer(*ifTypes, -1);
        }
    }

    // 0x1000e31b0
    void Client::DrawInterface(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8) {
        int arg7_00;
        int arg8_00;
        Array<shared_ptr<rs2lib::IfType>>* pAVar2;
        uint8_t* puVar3;
        unsigned long arg1_00;

        if (((IfType*)(unsigned long)(unsigned int)arg1)->OpenInterface(arg1) == '\0') {
            if (arg8 == -1) {
                arg1_00 = 0;
                do {
                    puVar3 = &field_2506576[arg1_00];
                    *puVar3 = 1;
                    arg1_00 = arg1_00 + 1;
                } while (arg1_00 != 100);
            } else {
                puVar3 = &field_2506576[(long)arg8];
                *puVar3 = 1;
            }
        } else {
            field_2505192 = nullptr;
            pAVar2 = (Array<shared_ptr<rs2lib::IfType>>*)(*(
                (Array<Array<shared_ptr<rs2lib::IfType>>>*)&rs2lib::IfType::m_list))[(long)arg1];
            DrawLayer(*pAVar2, -1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
            pAVar2 = field_2505192;
            if (pAVar2 != nullptr) {
                arg7_00 = field_2505200.GetX();
                arg8_00 = field_2505204->GetX();
                DrawLayer(*pAVar2, -1412584499, arg2, arg3, arg4, arg5, arg7_00, arg8_00, arg8);
                field_2505192 = nullptr;
            }
        }
    }

    // 0x1000e3320
    auto Client::CreateExactTileDestination(int arg1, int arg2) {
        *(int*)(field_54728 + 8) = arg1;
        *(int*)(field_54728 + 12) = arg2;
        *(uint64_t*)(field_54728 + 16) = 4294967297;
        return auto(*field_54728);
    }

    // 0x1000e3370
    void Client::UpdateHeatmap() {
        unsigned int uVar1;
        int iVar2;
        unsigned int uVar3;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        Heatmap* this_00;
        long lVar5;
        unsigned long arg1;
        Heatmap* in_RSI;

        uint8_t* heatmap = &field_52920;
        if (heatmap != in_RSI) {
            field_52928 = field_8488;
            heatmap->reset(in_RSI);
            arg1 = 0;
            do {
                midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)field_19216[arg1];
                if (*midiPlayerMainThread != nullptr) {
                    this_00 = (Heatmap*)(*heatmap).operator->();
                    uVar1 = field_53220;
                    lVar5 = (*midiPlayerMainThread).operator->();
                    iVar2 = *(int*)(lVar5 + 24);
                    uVar3 = field_53224;
                    lVar5 = (*midiPlayerMainThread).operator->();
                    this_00->AddDataPoint((iVar2 >> 7) + uVar1, (*(int*)(lVar5 + 28) >> 7) + uVar3);
                }
                arg1 = arg1 + 1;
            } while (arg1 != 2048);
        }
    }

    // 0x1000e3480
    void Client::GetBuildInfoPrettyPrint() {
        Client* in_RSI;

        fixed_string<char, 1024> local_450;
        fixed_string<char, 512> local_678;
        fixed_string<char, 512> local_8a0;
        GetServerBuildInfoPrettyPrint<char, 1024>(in_RSI, &local_450);
        GetClientBuildInfoPrettyPrint<char, 512>(in_RSI, &local_678);
        GetDeviceBuildInfoPrettyPrint<char, 512>(in_RSI, &local_8a0);
        fixed_string<char, 2048> local_10c8;
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar2 = local_678.begin();
        uint64_t uVar3 = local_8a0.begin();
        local_10c8.sprintf("Server:<br>%s<br>Client:<br>%s<br>Operating System:<br>%s", uVar1, uVar2, uVar3);
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (this) eastl::string(str);
    }

    // 0x1000e3810
    void Client::ForcePlayerCameraPosition(int arg1, int arg2) {
        field_53108 = arg1;
        field_53112 = arg2;
        field_53116 = 0;
        field_53120 = 0;
    }

    // 0x1000e3830
    int Client::GetTweenedPlayerCameraAngleX(float arg1) {
        int iVar1 = (int)((float)field_53116 * arg1 + (float)field_53108);
        int iVar2 = 383;
        if (iVar1 < 383) {
            iVar2 = iVar1;
        }
        iVar1 = 128;
        if (128 < iVar2) {
            iVar1 = iVar2;
        }
        return iVar1;
    }

    // 0x1000e3870
    unsigned int Client::GetTweenedPlayerCameraAngleY(float arg1) {
        return (int)((float)field_53120 * arg1 + (float)(int)field_53112) & 2047;
    }

    // 0x1000e38a0
    void Client::OnWindowTopmostChanged() {
        auto plVar2 = OSRenderCore_AudioThread::Instance();
        long lVar1 = *(long*)(*plVar2 - 24);
        auto this_00 = field_8376.operator->();
        bool arg1 = (bool)this_00->GetWindowTopmost();
        ((OSRenderCore_LogicThread_Common*)((long)plVar2 + lVar1))->SetWindowTopmost(arg1);
    }

    // 0x1000e3ab0
    void Client::SendWindowMode() {
        uint8_t local_58[64];

        auto pSVar1 = field_19120.operator->();
        auto isaac = pSVar1->GetOutgoingEncryption();
        *local_58 = shared::ClientMessage::MakeClientMessage(90, *isaac);
        PublishingPlatformType publishingPlatformType = ((DeviceOptions*)field_8376.operator->())->GetWindowMode();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00 =
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_58 + 8);
        this_00->p1<shared::LoginProt::ID>(publishingPlatformType);
        this_00->p2<int>(javapal::GameShell::m_sWid);
        this_00->p2<int>(javapal::GameShell::m_sHei);
        pSVar1 = (ServerConnection*)field_19120.operator->();
        pSVar1->SendClientMessage(*local_58);
    }

    // 0x1000e3b80
    void Client::NotifyResize(bool arg1) {
        field_52448 = core::SafeTime::CurrentTimeMillis() + 500;
        field_52464 = 1;
        if (field_53216 != -1) {
            InterfaceCalculateSizeAndPosAll(true, arg1);
        }
        auto pDVar3 = field_8376.operator->();
        int iVar1 = GetFrameWidth();
        pDVar3->SetWindowWidth(iVar1, false);
        pDVar3 = (DeviceOptions*)field_8376.operator->();
        iVar1 = GetFrameHeight();
        pDVar3->SetWindowHeight(iVar1, false);
    }

    // 0x1000e3c20
    void Client::InterfaceCalculateSizeAndPosAll(bool arg1, bool arg2) {
        CoordMapSquare local_40;

        auto this_00 = field_144->GetScreen();
        int arg1_00 = field_53216;
        local_40.m_x = this_00->GetMinMapX();
        int arg2_00 = local_40.GetX();
        local_40._8_4_ = this_00->GetUIHeight();
        int arg3 = local_40.field_8.GetX();
        InterfaceCalculateSizeAndPosInterface(arg1_00, arg2_00, arg3, arg1, arg2);
    }

    // 0x1000e3cf0
    int Client::GetAdjustedCameraZoom(int arg1, int arg2) {
        int iVar1 = 434;
        if (arg2 < 434) {
            iVar1 = arg2;
        }
        int iVar2 = 0;
        if (333 < arg2) {
            iVar2 = iVar1 - 334;
        }
        iVar2 = ((((int)field_52718 - (int)field_52716) * iVar2) / 100 + (int)field_52716) * arg1;
        iVar1 = iVar2 + 255;
        if (-1 < iVar2) {
            iVar1 = iVar2;
        }
        return iVar1 >> 8;
    }

    // 0x1000e3d60
    void Client::CamFollow(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
        uint8_t* this_00;
        FollowCameraMode FVar1;
        float fVar2;
        int* piVar4;
        long lVar5;
        int iVar7;
        int iVar9;

        int iVar3 = GetAdjustedCameraZoom(arg6, arg7);
        unsigned int uVar8 = -arg5 & 2047;
        auto this_01 = dash3d::Pix3D::GetSinTable();
        auto this_02 = dash3d::Pix3D::GetCosTable();
        unsigned int uVar6 = -arg4 & 2047;
        if (uVar6 == 0) {
            iVar9 = 0;
        } else {
            piVar4 = (int*)(*this_01)[(unsigned long)uVar6];
            iVar9 = *piVar4;
            piVar4 = (int*)(*this_02)[(unsigned long)uVar6];
            iVar9 = -(iVar9 * iVar3) >> 16;
            iVar3 = iVar3 * *piVar4 >> 16;
        }
        if (uVar8 == 0) {
            iVar7 = 0;
        } else {
            piVar4 = (int*)(*this_01)[(unsigned long)uVar8];
            iVar7 = *piVar4;
            piVar4 = (int*)(*this_02)[(unsigned long)uVar8];
            iVar7 = iVar7 * iVar3 >> 16;
            iVar3 = iVar3 * *piVar4 >> 16;
        }
        if (field_52997 == '\0') {
            field_53088 = arg1 - iVar7;
            field_53092 = arg2 - iVar9;
            field_53096 = arg3 - iVar3;
            field_53100 = arg4;
            field_53104 = arg5;
            FVar1 = m_cameraMode;
        } else {
            field_53044 = arg1 - iVar7;
            field_53048 = arg2 - iVar9;
            field_53052 = arg3 - iVar3;
            field_53056 = arg4;
            field_53060 = arg5;
            FVar1 = m_cameraMode;
        }
        if (((FVar1 == 1) && (1 < field_53260)) && (uVar6 = field_8488 * -1030792151 + 85899344,
                                                    (uVar6 >> 1 | (unsigned int)((uVar6 & 1) != 0) << 31) < 85899345)) {
            uVar6 = field_7294716;
            this_00 = &field_52016;
            lVar5 = (*this_00).operator->();
            if ((127 < (uVar6 ^ *(unsigned int*)(lVar5 + 24))) ||
                (fVar2 = field_7294724, lVar5 = (*this_00).operator->(),
                 127 < ((unsigned int)fVar2 ^ *(unsigned int*)(lVar5 + 28)))) {
                lVar5 = (*this_00).operator->();
                TelePlayer(((int)field_7294716 >> 7) + field_53220, ((int)field_7294724 >> 7) + field_53224,
                           *(int*)(lVar5 + 1204), true);
            }
        }
    }

    // 0x1000e3f80
    void Client::TelePlayer(int arg1, int arg2, int arg3, bool arg4) {
        uint8_t local_88[64];

        auto pSVar1 = field_19120.operator->();
        auto isaac = pSVar1->GetOutgoingEncryption();
        *local_88 = shared::ClientMessage::MakeClientMessage(27, *isaac);
        SuperShuffledPacketFactory local_48(*((local_88 + 8)));
        ((ShuffledPacket3*)local_48.HeapBeginPtr())->p1<int>(arg3);
        ((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2())->p2<int>(arg2);
        auto pSVar2 = ShuffledPacketFactory::p2_alt2();
        int arg1_00 = 0;
        if (arg4) {
            arg1_00 = field_7294740;
        }
        pSVar2->p4<unsigned int>(arg1_00);
        pSVar2 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
        pSVar2->p2<int>(arg1);
        pSVar1 = (ServerConnection*)field_19120.operator->();
        pSVar1->SendClientMessage(*local_88);
    }

    // 0x1000e4080
    void Client::RebuildPacket(bool arg1, core::SuperPacket& superPacket) {
        uint8_t* this_00;
        Js5* pJVar1;
        unsigned short uVar2;
        short sVar3;
        uint8_t uVar4;
        bool cVar5;
        uint16_t uVar6;
        unsigned short uVar7;
        int iVar8;
        uint32_t uVar9;
        int iVar10;
        uint32_t uVar11;
        uint32_t uVar12;
        unsigned int uVar13;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* pPVar14;
        array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>* this_01;
        array<rs2lib::CoordZoneSource, 13ul>* paVar15;
        ClippingRectangle* this_02;
        uint32_t* puVar16;
        uint64_t* puVar17;
        shared_ptr<PacketJ<Array<unsigned char>>>* psVar18;
        CoordZoneSource* this_04;
        Js5RequestKey* this_05;
        basic_ostream<char, std::char_traits<char> _>* pbVar19;
        char* pcVar20;
        unsigned int uVar21;
        unsigned long uVar22;
        Array<int>* pAVar23;
        uint64_t in_register_00000031;
        Array<int>* pAVar24;
        unsigned long uVar25;
        unsigned long uVar26;
        Client* pCVar27;
        int iVar28;
        SuperShuffledPacketFactory local_1d0;
        basic_ostream<char, std::char_traits<char> _> local_1c0;
        unsigned int local_b8;
        unsigned int local_b4;
        unsigned long local_b0;
        SideBarData local_a8;
        array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>* local_90;
        uint8_t local_88[16];
        Array<int>* local_78;
        Array<int>* local_70;
        Array<int>* local_68;
        unsigned long local_60;
        array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>* local_58;
        Array<int>* local_50;
        Array<int>* local_40;
        Array<shared_ptr<PacketJ<Array<unsigned char>>>>* local_38;

        m_mapBuildRegionMode = arg1;
        Client* local_48 = this;
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            local_1d0 = SuperShuffledPacketFactory(superPacket);
            pPVar14 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar6 = pPVar14->g2();
            local_70 = (Array<int>*)(((uint64_t)local_70._2_6_ << 16) | (uint16_t)uVar6);
            uVar6 = ((ShuffledPacket4*)ShuffledPacketFactory::p2_alt2())->g2();
            local_68 = (Array<int>*)(((uint64_t)local_68._2_6_ << 16) | (uint16_t)uVar6);
            uVar7 = superPacket.g2();
            local_58 = (array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>*)&field_1104368;
            pAVar24 = (Array<int>*)(unsigned long)uVar7;
            local_58->set_max_size((unsigned long)pAVar24, 3);
            if (uVar7 != 0) {
                pAVar23 = nullptr;
                local_78 = pAVar24;
                do {
                    uVar11 = superPacket.g4();
                    local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char>>>>*)(((uint64_t)local_38._4_4_ << 32) |
                                                                                   (uint32_t)uVar11);
                    uVar11 = superPacket.g4();
                    uVar12 = superPacket.g4();
                    uVar9 = superPacket.g4();
                    puVar16 = (uint32_t*)(*local_58)[(unsigned long)pAVar23];
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
            local_58->set_max_size((unsigned long)pAVar24, 3);
            local_40 = (Array<int>*)&pCVar27->field_1104296;
            local_40->set_max_size((unsigned long)pAVar24, 3);
            local_88._8_8_ = &pCVar27->field_1104320;
            local_88._8_8_->set_max_size((unsigned long)pAVar24, 3);
            local_50 = (Array<int>*)&pCVar27->field_1104344;
            local_50->set_max_size((unsigned long)pAVar24, 3);
            local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char>>>>*)&pCVar27->field_1104392;
            local_38->set_max_size((unsigned long)pAVar24, 3);
            pCVar27->field_1104416.set_max_size((unsigned long)pAVar24, 3);
            pCVar27->field_1104440.set_max_size((unsigned long)pAVar24, 3);
            if (pAVar24 != nullptr) {
                pAVar23 = nullptr;
                do {
                    local_1d0.field_0 = nullptr;
                    local_1d0 = game::PlayerModelWearSlot();
                    puVar17 = (uint64_t*)(*local_58)[(unsigned long)pAVar23];
                    *puVar17 = local_1d0.field_0;
                    puVar16 = (uint32_t*)(*local_40)[(unsigned long)pAVar23];
                    *puVar16 = 0;
                    puVar16 = (uint32_t*)(*local_88._8_8_)[(unsigned long)pAVar23];
                    *puVar16 = 0;
                    puVar16 = (uint32_t*)(*local_50)[(unsigned long)pAVar23];
                    *puVar16 = 0;
                    local_1d0 = shared_ptr();
                    psVar18 = (shared_ptr<PacketJ<Array<unsigned char>>>*)(*local_38)[(unsigned long)pAVar23];
                    *psVar18 = local_1d0;
                    local_1d0 = shared_ptr();
                    psVar18 = &pCVar27->field_1104416[(unsigned long)pAVar23];
                    *psVar18 = local_1d0;
                    local_1d0 = shared_ptr();
                    psVar18 = &pCVar27->field_1104440[(unsigned long)pAVar23];
                    *psVar18 = local_1d0;
                    pAVar23 = pAVar23 + 1;
                } while (pAVar24 != pAVar23);
            }
            uVar7 = (unsigned short)local_70;
            uVar25 = (unsigned long)local_70 & 65535;
            uVar2 = (unsigned short)local_68;
            uVar22 = (unsigned long)local_68 & 65535;
            local_1d0 = std::stringstream();
            iVar8 = uVar7 + 1;
            if (-1 < (int)(uVar7 - 6)) {
                iVar8 = uVar7 - 6;
            }
            local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char>>>>*)(unsigned long)(unsigned int)(iVar8 >> 3);
            uVar21 = uVar7 + 6 >> 3;
            iVar10 = uVar2 - 6;
            iVar28 = uVar2 + 1;
            if (-1 < iVar10) {
                iVar28 = iVar10;
            }
            local_70 = (Array<int>*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)uVar21);
            pCVar27 = local_48;
            local_b0 = uVar25;
            local_60 = uVar22;
            if (iVar8 >> 3 <= (int)uVar21) {
                uVar21 = iVar28 >> 3;
                uVar13 = (int)uVar22 + 6U >> 3;
                local_68 = (Array<int>*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)uVar13);
                if ((int)uVar13 < (int)uVar21) {
                    uVar13 = uVar21;
                }
                local_78 = (Array<int>*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)(uVar13 + 1));
                uVar25 = 0;
                local_90 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)(((uint64_t)local_90._4_4_ << 32) |
                                                                                     (uint32_t)uVar21);
                do {
                    if ((int)uVar21 <= (int)local_68) {
                        uVar25 = (unsigned long)(int)uVar25;
                        do {
                            local_a8 = sidebars::SideBarData((int)local_38, uVar21);
                            puVar17 = (uint64_t*)(*local_58)[uVar25];
                            *puVar17 = local_a8[0]._0_8_;
                            std::string::string<decltype(nullptr)>(&local_a8, "");
                            std::stringstream::str(
                                (basic_string<char, std::char_traits<char>, std::allocator<char> _>*)&local_1d0);
                            std::string::~string(&local_a8);
                            pbVar19 = std::operator<<(&local_1c0, "m");
                            pbVar19 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                                (ostream*)pbVar19, (int)local_38);
                            pbVar19 = std::operator<<(pbVar19, "_");
                            std::ostream::operator<<((ostream*)pbVar19, uVar21);
                            pJVar1 = (Js5*)pCVar27->field_54432;
                            std::stringstream::str(&local_a8, (stringstream*)&local_1d0);
                            pcVar20 = (char*)std::string::c_str(&local_a8);
                            uVar11 = pJVar1->GetGroupId(pcVar20);
                            puVar16 = (uint32_t*)(*local_40)[uVar25];
                            *puVar16 = uVar11;
                            std::string::~string(&local_a8);
                            std::string::string<decltype(nullptr)>(&local_a8, "");
                            std::stringstream::str(
                                (basic_string<char, std::char_traits<char>, std::allocator<char> _>*)&local_1d0);
                            pCVar27 = local_48;
                            std::string::~string(&local_a8);
                            pbVar19 = std::operator<<(&local_1c0, "l");
                            pbVar19 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                                (ostream*)pbVar19, (int)local_38);
                            pbVar19 = std::operator<<(pbVar19, "_");
                            std::ostream::operator<<((ostream*)pbVar19, uVar21);
                            pJVar1 = (Js5*)pCVar27->field_54432;
                            std::stringstream::str(&local_a8, (stringstream*)&local_1d0);
                            pcVar20 = (char*)std::string::c_str(&local_a8);
                            uVar11 = pJVar1->GetGroupId(pcVar20);
                            puVar16 = (uint32_t*)(*local_88._8_8_)[uVar25];
                            *puVar16 = uVar11;
                            std::string::~string(&local_a8);
                            std::string::string<decltype(nullptr)>(&local_a8, "");
                            std::stringstream::str(
                                (basic_string<char, std::char_traits<char>, std::allocator<char> _>*)&local_1d0);
                            std::string::~string(&local_a8);
                            pbVar19 = std::operator<<(&local_1c0, "e");
                            pbVar19 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                                (ostream*)pbVar19, (int)local_38);
                            pbVar19 = std::operator<<(pbVar19, "_");
                            std::ostream::operator<<((ostream*)pbVar19, uVar21);
                            pJVar1 = (Js5*)pCVar27->field_54432;
                            std::stringstream::str(&local_a8, (stringstream*)&local_1d0);
                            pcVar20 = (char*)std::string::c_str(&local_a8);
                            uVar11 = pJVar1->GetGroupId(pcVar20);
                            puVar16 = (uint32_t*)(*local_50)[uVar25];
                            *puVar16 = uVar11;
                            std::string::~string(&local_a8);
                            uVar25 = uVar25 + 1;
                            uVar21 = uVar21 + 1;
                        } while ((unsigned int)local_78 != uVar21);
                        uVar21 = (unsigned int)local_90;
                    }
                    iVar8 = (int)local_38;
                    local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char>>>>*)(unsigned long)(iVar8 + 1);
                } while (iVar8 != (int)local_70);
            }
            StartRebuild(pCVar27, (int)local_b0, (int)local_60, true);
        } else {
            local_1d0 = SuperShuffledPacketFactory(superPacket);
            pPVar14 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar4 = pPVar14->g1();
            local_b0 = (((uint64_t)local_b0._1_7_ << 8) | (uint8_t)uVar4);
            pPVar14 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar6 = pPVar14->g2();
            local_90 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)(((uint64_t)local_90._2_6_ << 16) |
                                                                                 (uint16_t)uVar6);
            pPVar14 = (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                ShuffledPacketFactory::p2_alt2();
            uVar6 = pPVar14->g2();
            local_60 = (((uint64_t)local_60._2_6_ << 16) | (uint16_t)uVar6);
            uVar6 = superPacket.g2();
            local_50 = (Array<int>*)(((uint64_t)local_50._2_6_ << 16) | (uint16_t)uVar6);
            superPacket.GBitStart();
            local_58 = (array<std::array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>, 4ul>*)&field_1104468;
            local_38 = nullptr;
            do {
                uVar25 = 0;
                do {
                    uVar22 = 0;
                    do {
                        iVar8 = superPacket.gBit(1);
                        this_01 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)(*local_58)[(
                            unsigned long)local_38];
                        paVar15 = (array<rs2lib::CoordZoneSource, 13ul>*)(*this_01)[uVar25];
                        this_02 = (ClippingRectangle*)(*paVar15)[uVar22];
                        if (iVar8 == 1) {
                            iVar8 = superPacket.gBit(26);
                            this_02->SetFromPackedCode(iVar8);
                        } else {
                            new (this_02) jag::graphics::ClippingRectangle();
                        }
                        uVar22 = uVar22 + 1;
                    } while (uVar22 != 13);
                    uVar25 = uVar25 + 1;
                } while (uVar25 != 13);
                local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char>>>>*)((long)local_38 + 1);
            } while (local_38 != (Array<shared_ptr<PacketJ<Array<unsigned char>>>>*)4);
            superPacket.GBitEnd();
            local_88._8_8_ = &local_48->field_1104368;
            sVar3 = (short)local_50;
            uVar25 = (unsigned long)local_50 & 65535;
            local_88._8_8_->set_max_size(uVar25, 3);
            if (sVar3 != 0) {
                uVar22 = 0;
                do {
                    uVar11 = superPacket.g4();
                    local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char>>>>*)(((uint64_t)local_38._4_4_ << 32) |
                                                                                   (uint32_t)uVar11);
                    uVar11 = superPacket.g4();
                    local_40 = (Array<int>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar11);
                    uVar11 = superPacket.g4();
                    uVar12 = superPacket.g4();
                    puVar16 = (uint32_t*)(*local_88._8_8_)[uVar22];
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
            local_78 = (Array<int>*)&pCVar27->field_1104296;
            local_78->set_max_size(uVar25, 3);
            local_70 = (Array<int>*)&pCVar27->field_1104320;
            local_70->set_max_size(uVar25, 3);
            local_68 = (Array<int>*)&pCVar27->field_1104344;
            local_68->set_max_size(uVar25, 3);
            local_38 = (Array<shared_ptr<PacketJ<Array<unsigned char>>>>*)&pCVar27->field_1104392;
            local_38->set_max_size(uVar25, 3);
            local_40 = (Array<int>*)&pCVar27->field_1104416;
            local_40->set_max_size(uVar25, 3);
            pCVar27->field_1104440.set_max_size(uVar25, 3);
            if ((short)local_50 != 0) {
                uVar22 = 0;
                do {
                    local_1d0.field_0 = nullptr;
                    local_1d0 = game::PlayerModelWearSlot();
                    puVar17 = (uint64_t*)(*this_00)[uVar22];
                    *puVar17 = local_1d0.field_0;
                    puVar16 = (uint32_t*)(*local_78)[uVar22];
                    *puVar16 = 0;
                    puVar16 = (uint32_t*)(*local_70)[uVar22];
                    *puVar16 = 0;
                    puVar16 = (uint32_t*)(*local_68)[uVar22];
                    *puVar16 = 0;
                    local_1d0 = shared_ptr();
                    psVar18 = (shared_ptr<PacketJ<Array<unsigned char>>>*)(*local_38)[uVar22];
                    *psVar18 = local_1d0;
                    local_1d0 = shared_ptr();
                    psVar18 = (shared_ptr<PacketJ<Array<unsigned char>>>*)(*local_40)[uVar22];
                    *psVar18 = local_1d0;
                    local_1d0 = shared_ptr();
                    psVar18 = &pCVar27->field_1104440[uVar22];
                    *psVar18 = local_1d0;
                    uVar22 = uVar22 + 1;
                } while (uVar25 != uVar22);
            }
            local_b8 = (unsigned int)(unsigned short)local_90;
            local_b4 = (unsigned int)(unsigned short)local_60;
            local_1d0 = std::stringstream();
            uVar25 = 0;
            local_38 =
                (Array<shared_ptr<PacketJ<Array<unsigned char>>>>*)((unsigned long)local_38 & 18446744069414584320);
            do {
                local_60 = uVar25;
                local_90 = (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)(*local_58)[uVar25];
                pAVar24 = nullptr;
                do {
                    local_50 = pAVar24;
                    paVar15 = (array<rs2lib::CoordZoneSource, 13ul>*)(*local_90)[(unsigned long)pAVar24];
                    uVar25 = 0;
                    local_88._8_8_ = paVar15;
                    do {
                        this_04 = (CoordZoneSource*)(*paVar15)[uVar25];
                        cVar5 = this_04->IsSet();
                        if (cVar5) {
                            new (local_88) rs2lib::CoordMapSquare(*this_04);
                            if (0 < (int)local_38) {
                                uVar26 = (unsigned long)local_38 & 4294967295;
                                uVar22 = 0;
                                do {
                                    this_05 = (Js5RequestKey*)(*this_00)[uVar22];
                                    cVar5 = *this_05 == *local_88;
                                    if (cVar5)
                                        goto LAB_1000e477d;
                                    uVar22 = uVar22 + 1;
                                } while (uVar26 != uVar22);
                            }
                            local_40 = (Array<int>*)(long)(int)local_38;
                            puVar17 = (uint64_t*)(*this_00)[(unsigned long)local_40];
                            *puVar17 = local_88._0_8_;
                            std::string::string<decltype(nullptr)>(&local_a8, "");
                            std::stringstream::str(
                                (basic_string<char, std::char_traits<char>, std::allocator<char> _>*)&local_1d0);
                            std::string::~string(&local_a8);
                            pbVar19 = std::operator<<(&local_1c0, "m");
                            iVar8 = local_88->GetX();
                            pbVar19 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                                (ostream*)pbVar19, iVar8);
                            pbVar19 = std::operator<<(pbVar19, "_");
                            iVar8 = local_88->GetZ();
                            std::ostream::operator<<((ostream*)pbVar19, iVar8);
                            pJVar1 = (Js5*)local_48->field_54432;
                            std::stringstream::str(&local_a8, (stringstream*)&local_1d0);
                            pcVar20 = (char*)std::string::c_str(&local_a8);
                            uVar11 = pJVar1->GetGroupId(pcVar20);
                            puVar16 = (uint32_t*)(*local_78)[(unsigned long)local_40];
                            *puVar16 = uVar11;
                            std::string::~string(&local_a8);
                            std::string::string<decltype(nullptr)>(&local_a8, "");
                            std::stringstream::str(
                                (basic_string<char, std::char_traits<char>, std::allocator<char> _>*)&local_1d0);
                            std::string::~string(&local_a8);
                            pbVar19 = std::operator<<(&local_1c0, "l");
                            iVar8 = local_88->GetX();
                            pbVar19 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                                (ostream*)pbVar19, iVar8);
                            pbVar19 = std::operator<<(pbVar19, "_");
                            iVar8 = local_88->GetZ();
                            std::ostream::operator<<((ostream*)pbVar19, iVar8);
                            pJVar1 = (Js5*)local_48->field_54432;
                            std::stringstream::str(&local_a8, (stringstream*)&local_1d0);
                            pcVar20 = (char*)std::string::c_str(&local_a8);
                            uVar11 = pJVar1->GetGroupId(pcVar20);
                            puVar16 = (uint32_t*)(*local_70)[(unsigned long)local_40];
                            *puVar16 = uVar11;
                            std::string::~string(&local_a8);
                            std::string::string<decltype(nullptr)>(&local_a8, "");
                            std::stringstream::str(
                                (basic_string<char, std::char_traits<char>, std::allocator<char> _>*)&local_1d0);
                            std::string::~string(&local_a8);
                            pbVar19 = std::operator<<(&local_1c0, "e");
                            pbVar19 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                                (ostream*)pbVar19, (int)local_50);
                            pbVar19 = std::operator<<(pbVar19, "_");
                            std::ostream::operator<<((ostream*)pbVar19, (int)uVar25);
                            pJVar1 = (Js5*)local_48->field_54432;
                            std::stringstream::str(&local_a8, (stringstream*)&local_1d0);
                            pcVar20 = (char*)std::string::c_str(&local_a8);
                            uVar11 = pJVar1->GetGroupId(pcVar20);
                            puVar16 = (uint32_t*)(*local_68)[(unsigned long)local_40];
                            *puVar16 = uVar11;
                            std::string::~string(&local_a8);
                            local_38 =
                                (Array<shared_ptr<PacketJ<Array<unsigned char>>>>*)(((uint64_t)local_38._4_4_ << 32) |
                                                                                    (uint32_t)((int)local_38 + 1));
                        LAB_1000e477d:
                            paVar15 = (array<rs2lib::CoordZoneSource, 13ul>*)local_88._8_8_;
                        }
                        uVar25 = uVar25 + 1;
                    } while (uVar25 != 13);
                    pAVar24 = local_50 + 1;
                } while (pAVar24 != (Array<int>*)13);
                uVar25 = local_60 + 1;
            } while (uVar25 != 4);
            StartRebuild(local_48, local_b4, local_b8, (char)local_b0 != '\x01');
        }
    }

    // 0x1000e5430
    void Client::StartRebuild(int arg1, int arg2, bool arg3) {
        unsigned int uVar1;
        int iVar4;
        Logger* pLVar5;
        long lVar6;
        int* piVar7;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        Minimap* pMVar8;
        unsigned int uVar9;
        int iVar10;
        int iVar11;
        unsigned int uVar12;
        int iVar13;
        uint64_t in_register_00000009;
        int iVar14;
        unsigned long uVar15;
        long lVar16;
        long lVar17;
        unsigned long uVar18;
        uint8_t* puVar19;
        uint8_t* puVar20;
        unsigned int uVar21;
        int arg2_00;

        if ((((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) == 0) || (field_53228 != arg1)) ||
            (field_53232 != arg2)) {
            if ((&field_19120)->operator_cast_to_bool() != '\0') {
                iVar4 = ((ServerConnection*)field_19120.operator->())->GetConnectionState();
                if (iVar4 == 3) {
                    if (field_53216 != -1) {
                        RunHookImmediate(field_53216, 26);
                    }
                    if (field_54760 != '\0') {
                        pLVar5 = logger::default_logger();
                        pLVar5->Log(false, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client.cpp",
                                    4431, "Got new build coordinates: %i, %i", (unsigned long)(unsigned int)arg1,
                                    (unsigned long)(unsigned int)arg2);
                    }
                    field_53228 = arg1;
                    field_53232 = arg2;
                    SetMainState(25);
                    MessageBox(*((eastl::string*)&constants::text::loading), true);
                    uVar12 = field_53220;
                    uVar1 = field_53224;
                    uVar9 = arg1 * 8 - 48;
                    field_53220 = uVar9;
                    uVar21 = arg2 * 8 - 48;
                    field_53224 = uVar21;
                    iVar4 = uVar9 - uVar12;
                    arg2_00 = uVar21 - uVar1;
                    uVar15 = 0;
                    do {
                        lVar6 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_55272[uVar15])->end();
                        if (lVar6 != 0) {
                            uVar18 = 0;
                            do {
                                piVar7 = (int*)(*((lVar6 + 444)))[uVar18];
                                *piVar7 = *piVar7 - iVar4;
                                piVar7 = (int*)(*((lVar6 + 484)))[uVar18];
                                *piVar7 = *piVar7 - arg2_00;
                                uVar18 = uVar18 + 1;
                            } while (uVar18 != 10);
                            *(int*)(lVar6 + 24) = *(int*)(lVar6 + 24) + iVar4 * -128;
                            *(int*)(lVar6 + 28) = *(int*)(lVar6 + 28) + arg2_00 * -128;
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 != 65536);
                    uVar15 = 0;
                    do {
                        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)field_19216[uVar15];
                        if (*midiPlayerMainThread != nullptr) {
                            uVar18 = 0;
                            do {
                                lVar6 = (*midiPlayerMainThread).operator->();
                                piVar7 = (int*)(*((lVar6 + 444)))[uVar18];
                                *piVar7 = *piVar7 - iVar4;
                                lVar6 = (*midiPlayerMainThread).operator->();
                                piVar7 = (int*)(*((lVar6 + 484)))[uVar18];
                                *piVar7 = *piVar7 - arg2_00;
                                uVar18 = uVar18 + 1;
                            } while (uVar18 != 10);
                            lVar6 = (*midiPlayerMainThread).operator->();
                            *(int*)(lVar6 + 24) = *(int*)(lVar6 + 24) + iVar4 * -128;
                            lVar6 = (*midiPlayerMainThread).operator->();
                            *(int*)(lVar6 + 28) = *(int*)(lVar6 + 28) + arg2_00 * -128;
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 != 2048);
                    uVar9 = iVar4 >> 31 & 103;
                    uVar15 = (unsigned long)uVar9;
                    iVar14 = 104;
                    if (-1 >= iVar4) {
                        iVar14 = -1;
                    }
                    uVar21 = arg2_00 >> 31 & 103;
                    iVar10 = 104;
                    if (-1 >= arg2_00) {
                        iVar10 = -1;
                    }
                    lVar17 = (unsigned long)(-1 < arg2_00) * 2 - 1;
                    lVar6 = (unsigned long)(-1 < iVar4) * 2 - 1;
                    puVar19 = field_1120504 + (unsigned long)uVar21 * 32 + uVar15 * 3328 + 56;
                    iVar11 = ((uVar9 + arg1 * 8) - uVar12) - 48;
                    do {
                        uVar12 = (int)uVar15 + iVar4;
                        puVar20 = puVar19;
                        uVar18 = (unsigned long)uVar21;
                        iVar13 = ((uVar21 + arg2 * 8) - uVar1) - 48;
                        do {
                            uVar9 = arg2_00 + (int)uVar18;
                            lVar16 = 0;
                            do {
                                if ((int)uVar9 < 104 && (-1 < (int)(uVar12 | uVar9) && (int)uVar12 < 104)) {
                                    (*((puVar20 + lVar16))) =
                                        (*((list<shared_ptr<ClientObj>>*)(field_1120504 + lVar16 + (long)iVar13 * 32 +
                                                                          (long)iVar11 * 3328 + 56)));
                                } else {
                                    ((puVar20 + lVar16))->clear();
                                }
                                lVar16 = lVar16 + 346112;
                            } while (lVar16 != 1384448);
                            uVar18 = uVar18 + lVar17;
                            puVar20 = puVar20 + lVar17 * 32;
                            iVar13 = iVar13 + (int)lVar17;
                        } while (iVar10 != (int)uVar18);
                        uVar15 = uVar15 + lVar6;
                        puVar19 = puVar19 + lVar6 * 3328;
                        iVar11 = iVar11 + (int)lVar6;
                    } while (iVar14 != (int)uVar15);
                    (&field_2505008)
                        ->remove_if<Client::StartRebuild(int, int, bool)::__6>(
                            (__6*)(((uint64_t)arg2_00 << 32) | (uint32_t)iVar4));
                    puVar19 = &field_8152;
                    piVar7 = (int*)(*puVar19).operator->();
                    if (*piVar7 != 0) {
                        *piVar7 = *piVar7 - iVar4;
                        lVar6 = (*puVar19).operator->();
                        *(int*)(lVar6 + 4) = *(int*)(lVar6 + 4) - arg2_00;
                    }
                    field_52344->OnMapRebuild(iVar4, arg2_00);
                    field_2508752 = 0;
                    field_52997 = 0;
                    field_53088 = field_53088 + iVar4 * -128;
                    field_53096 = field_53096 + arg2_00 * -128;
                    field_7294716 = field_7294716 + iVar4 * -128;
                    field_7294724 = (float)((int)field_7294724 + arg2_00 * -128);
                    pMVar8 = (Minimap*)(*puVar19).operator->();
                    pMVar8->SetLevel(-1);
                    pMVar8 = (Minimap*)(*puVar19).operator->();
                    pMVar8->ResetIcons();
                    field_7164616.clear();
                    field_7164584.clear();
                    uVar15 = 0;
                    do {
                        ((CollisionMap*)field_6814744[uVar15])->Reset();
                        uVar15 = uVar15 + 1;
                    } while (uVar15 != 4);
                    m_highlightManager->SaveToFiles();
                    m_highlightManager->OnMapRebuild(field_53220, field_53224, 104, 104);
                    return;
                }
            }
            pLVar5 = logger::default_logger();
            pLVar5->Log(false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        4418, "Ignoring build request while disconnected");
        } else if (field_54760 != '\0') {
            pLVar5 = logger::default_logger();
            pLVar5->Log(false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                        4411, "Ignoring duplicate build coordinates: %i, %i", (unsigned long)(unsigned int)arg1,
                        (unsigned long)(unsigned int)arg2);
        }
    }

    // 0x1000e5b70
    CoordGrid Client::WorldCoordToSourceCoord(const rs2lib::CoordGrid& coordGrid) {
        bool cVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int arg2;
        array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>* this_00;
        array<rs2lib::CoordZoneSource, 13ul>* this_01;
        uint64_t* puVar5;
        CoordGrid* in_RDX;
        uint64_t extraout_RDX;
        uint64_t extraout_RDX_00;
        uint64_t extraout_RDX_01;
        uint64_t extraout_RDX_02;
        uint64_t extraout_RDX_03;
        unsigned int uVar7;
        CoordGrid CVar8;
        uint8_t local_38[16];

        new (this) rs2lib::CoordGrid(in_RDX);
        uint64_t uVar6 = extraout_RDX;
        if ((char)coordGrid[69029].m_level != '\0') {
            cVar1 = InRegion();
            uVar6 = extraout_RDX_00;
            if (cVar1) {
                iVar2 = GetMapSquareZ();
                uVar7 = iVar2 - ((int)coordGrid[3326].m_x >> 3);
                iVar2 = GetZoneZ();
                uVar6 = extraout_RDX_01;
                if (((uVar7 < 13) && (iVar2 = iVar2 - ((int)coordGrid[3326].m_z >> 3), -1 < iVar2)) && (iVar2 < 13)) {
                    iVar3 = GetX();
                    this_00 =
                        (array<std::array<rs2lib::CoordZoneSource, 13ul>, 13ul>*)coordGrid[69029].m_x[(long)iVar3];
                    this_01 = (array<rs2lib::CoordZoneSource, 13ul>*)(*this_00)[(long)(int)uVar7];
                    puVar5 = (uint64_t*)(*this_01)[(long)iVar2];
                    local_38._0_8_ = *puVar5;
                    local_38._8_8_ = puVar5[1];
                    cVar1 = local_38->IsSet();
                    uVar6 = extraout_RDX_02;
                    if (cVar1) {
                        iVar2 = local_38->GetX();
                        SetZoneX(iVar2);
                        iVar2 = local_38->GetZ();
                        SetZoneZ(iVar2);
                        iVar2 = local_38->GetLevel();
                        iVar3 = GetZoneTileX();
                        iVar4 = GetZoneTileZ();
                        iVar3 = util::RegionRotate::DX(iVar3, iVar4, -iVar2 & 3U);
                        iVar4 = GetZoneTileX();
                        arg2 = GetZoneTileZ();
                        iVar2 = util::RegionRotate::DZ(iVar4, arg2, -iVar2 & 3U);
                        SetZoneTileX(iVar3);
                        SetZoneTileZ(iVar2);
                        uVar6 = extraout_RDX_03;
                    }
                }
            }
        }
        CVar8._8_8_ = uVar6;
        CVar8._0_8_ = this;
        return CVar8;
    }

    // 0x1000e5de0
    void Client::RunHookImmediate(int arg1, rs2lib::IfType::HookTypes hookTypes) {
        Array<shared_ptr<rs2lib::IfType>>* ifTypes;

        if (((IfType*)(unsigned long)(unsigned int)arg1)->OpenInterface(arg1) != '\0') {
            ifTypes = (Array<shared_ptr<rs2lib::IfType>>*)(*(
                (Array<Array<shared_ptr<rs2lib::IfType>>>*)&rs2lib::IfType::m_list))[(long)arg1];
            RunHookLayer(*ifTypes, hookTypes);
        }
    }

    // 0x1000e5fa0
    void Client::PreventTimeout(bool arg1) {
        Isaac* isaac;
        ClientMessage local_60;

        uint8_t* this_00 = &field_19120;
        ServerConnection* pSVar2 = (ServerConnection*)(*this_00).operator->();
        pSVar2->IncrementNoTimeOutTickCounter();
        pSVar2 = (ServerConnection*)(*this_00).operator->();
        unsigned long uVar3 = pSVar2->GetTicksSinceNoTimeOutPacket();
        if ((49 < uVar3) || (arg1)) {
            pSVar2 = (ServerConnection*)(*this_00).operator->();
            pSVar2->ResetNoTimeOutTickCounter();
            if (field_1103920 == '\0') {
                pSVar2 = (ServerConnection*)(*this_00).operator->();
                if (pSVar2->GetConnectionState() != 0) {
                    pSVar2 = (ServerConnection*)(*this_00).operator->();
                    isaac = pSVar2->GetOutgoingEncryption();
                    local_60 = shared::ClientMessage::MakeClientMessage(40, *isaac);
                    pSVar2 = (ServerConnection*)(*this_00).operator->();
                    pSVar2->SendClientMessage(local_60);
                }
            }
        }
    }

    // 0x1000e61b0
    void Client::OnLoadLocations(const eastl::vector<LocInfo, BucketAllocatorEASTL>& locInfos) {
        auto locInfo = locInfos.HeapBeginPtr();
        auto pLVar1 = locInfos.end();
        for (; locInfo != pLVar1; locInfo = (LocInfo*)&locInfo[1].field_8) {
            OnLoadLocation(*locInfo);
        }
    }

    // 0x1000e6200
    void Client::ShowObject(int arg1, int arg2) {
        int iVar1;
        Client* pCVar2;
        bool bVar5;
        int iVar6;
        world* pwVar7;
        shared_ptr<ClientObj>* psVar8;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar9;
        long lVar10;
        LoginManager* this_00;
        HighlightChannelProperties* pHVar11;
        Client* this_01;
        HighlightChannelProperties* highlightChannelProperties;
        shared_ptr<dash3d::Decor> local_c8;
        ReturnValue local_b8;
        long long local_a8;
        world* local_a0;
        EntityHighlight local_98;
        ReturnValue local_88;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_78;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_68;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        ReturnValue local_48;

        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_02 =
            (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>, eastl::allocator,
                       eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int>>>,
                       eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                       true>*)(field_1120504 + (long)arg2 * 32 + (long)arg1 * 3328 + (long)field_51984 * 346112 + 56);
        bool cVar4 = this_02->empty();
        if (!cVar4) {
            local_68 = shared_ptr();
            eastl::list<shared_ptr<ClientObj>>::sort<Client::ShowObject(int, int)::__12>((__12*)this_02);
            psVar8 = (shared_ptr<ClientObj>*)this_02->back();
            local_68 = *psVar8;
            bVar5 = local_68 == nullptr;
            if (bVar5) {
                pwVar7 = (world*)field_19184.operator->();
                pwVar7->DelObj(field_51984, arg1, arg2);
            } else {
                local_58 = shared_ptr();
                local_78 = shared_ptr();
                local_b8 = this_02->begin();
                local_48 = this_02->end();
                cVar4 = local_b8 != local_48;
                if (cVar4) {
                    do {
                        pvVar9 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)*local_b8;
                        lVar10 = pvVar9->end();
                        iVar1 = *(int*)(lVar10 + 24);
                        lVar10 = local_68.operator->();
                        if (iVar1 != *(int*)(lVar10 + 24)) {
                            bVar5 = local_58 == nullptr;
                            if (bVar5) {
                                psVar8 = (shared_ptr<ClientObj>*)*local_b8;
                                local_58 = *psVar8;
                            }
                            pvVar9 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)*local_b8;
                            lVar10 = pvVar9->end();
                            iVar1 = *(int*)(lVar10 + 24);
                            lVar10 = local_58.operator->();
                            if ((iVar1 != *(int*)(lVar10 + 24)) && (bVar5 = local_78 == nullptr, bVar5)) {
                                psVar8 = (shared_ptr<ClientObj>*)*local_b8;
                                local_78 = *psVar8;
                            }
                        }
                        local_48++;
                        local_48 = this_02->end();
                        cVar4 = local_b8 != local_48;
                    } while (cVar4);
                }
                local_48 = this_02->begin();
                local_88 = this_02->end();
                cVar4 = local_48 != local_88;
                highlightChannelProperties = nullptr;
                if (cVar4) {
                    do {
                        psVar8 = (shared_ptr<ClientObj>*)*local_48;
                        this_00 = (LoginManager*)(*psVar8).operator->();
                        pHVar11 = (HighlightChannelProperties*)this_00->GetAuthWrapper();
                        if ((pHVar11 != nullptr) &&
                            ((highlightChannelProperties == nullptr ||
                              ((uint8_t)pHVar11->field_10 < (uint8_t)highlightChannelProperties->field_10)))) {
                            highlightChannelProperties = pHVar11;
                        }
                        ++local_48;
                        cVar4 = local_48 != local_88;
                    } while (cVar4);
                }
                local_98._0_10_ = HighlightChannelProperties::CreateHighlightData(highlightChannelProperties);
                iVar6 = arg2;
                pCVar2 = this;
                local_a8 = dash3d::MousePickingHelper::GetPackedTypeCode(arg1, arg2, field_51984, 3, false, 0);
                this_01 = (Client*)&pCVar2->field_19184;
                local_a0 = (world*)(*this_01).operator->();
                iVar1 = pCVar2->field_51984;
                iVar6 = GetAvH(this_01, arg1 << 7 | 64, iVar6 << 7 | 64, iVar1);
                local_48 = shared_ptr(&local_68);
                local_88 = shared_ptr(&local_58);
                local_c8 = shared_ptr(&local_78);
                local_a0->SetObj(iVar1, arg1, arg2, iVar6, local_48, local_a8, local_88, local_c8, local_98);
            }
        } else {
            pwVar7 = (world*)field_19184.operator->();
            pwVar7->DelObj(field_51984, arg1, arg2);
        }
    }

    // 0x1000e6630
    void Client::RunUpdateObjStackTrigger(int arg1, int arg2, int arg3) {
        ReturnValue local_40;
        ReturnValue local_30;
        EnumOptionToggle local_28;

        new (&local_40) rs2lib::CoordGrid(arg1, arg2, arg3);
        WorldCoordFromBuildCoord(&local_30, this, (CoordGrid*)&local_40);
        EnumOptionToggle local_38 = local_28;
        local_40 = local_30;
        int arg2_00 = local_40.GetZ();
        int arg3_00 = local_40.GetPos();
        ScriptRunner::SetActiveTile(arg1, arg2_00, arg3_00);
        ScriptRunner::ExecuteScript(45, -1, -1, 500000);
    }

    // 0x1000e66b0
    void Client::LocChangePostBuildCorrect() {
        LocChange* locChange;

        uint8_t* arg1 = &field_2505008;
        eastl::list<LocChange>::remove_if<Client::LocChangePostBuildCorrect()::__21>((__21*)arg1);
        auto local_38 = arg1->begin();
        auto local_30 = arg1->end();
        bool cVar1 = local_38 != local_30;
        if (cVar1) {
            do {
                locChange = (LocChange*)*local_38;
                *(uint32_t*)&locChange->field_48 = 0;
                LocChangeSetOld(*locChange);
                ++local_38;
                cVar1 = local_38 != local_30;
            } while (cVar1);
        }
    }

    // 0x1000e6810
    void Client::SetPlayerDestination(int arg1, int arg2) {
        int iVar1;
        int arg2_00;
        int arg3;
        RouteHighlighter* this_01;
        long lVar3;
        CollisionMap* collisionMap;
        uint8_t local_60[16];
        unsigned long local_50;
        unsigned long local_48;
        int local_3c;
        int local_38;

        uint8_t* this_00 = &field_8152;
        int* piVar2 = (int*)(*this_00).operator->();
        if ((*piVar2 != arg1) || (piVar2[1] != arg2)) {
            this_01 = (RouteHighlighter*)field_19200.operator->();
            if (this_01->field_0 != '\0') {
                local_3c = field_51984;
                lVar3 = field_52016.operator->();
                piVar2 = (int*)(*((lVar3 + 444)))[0];
                local_38 = *piVar2;
                lVar3 = field_52016.operator->();
                piVar2 = (int*)(*((lVar3 + 484)))[0];
                iVar1 = *piVar2;
                local_50 = (unsigned long)field_53220;
                local_48 = (unsigned long)field_53224;
                collisionMap = &field_6814744[(long)field_51984];
                this_01->HighlightRoute(local_3c, arg1, arg2, local_38, iVar1, (int)local_50, (int)local_48,
                                        *collisionMap);
            }
            piVar2 = (int*)(*this_00).operator->();
            *piVar2 = arg1;
            lVar3 = (*this_00).operator->();
            *(int*)(lVar3 + 4) = arg2;
            ScriptRunner::SetActivePlayer(field_51988);
            WorldCoordFromBuildCoord((Client*)local_60, (int)this, field_51984, arg1);
            iVar1 = local_60->GetX();
            arg2_00 = local_60->GetZ();
            arg3 = local_60->GetPos();
            ScriptRunner::SetActiveTile(iVar1, arg2_00, arg3);
            ScriptRunner::ExecuteScript(47, -1, -1, 500000);
        }
    }

    // 0x1000e69c0
    void Client::RecalcCameraFrustumTileVisibility(int arg1, int arg2) {
        int iVar1;
        int iVar2;
        array<int, _2048ul>* this_01;
        int* piVar4;
        unsigned long uVar5;
        int arg1_00;
        unsigned long arg1_01;
        eastl local_38;

        eastl::destruct<highlight::NpcUID*>(&local_38);
        vector<int, BucketAllocatorEASTL> local_60(9, local_38);
        if (local_60.size() != 0) {
            arg1_00 = 143;
            arg1_01 = 0;
            do {
                iVar2 = GetFollowCameraDistance(arg1_00);
                this_01 = dash3d::Pix3D::GetSinTable();
                piVar4 = (int*)(*this_01)[(long)arg1_00];
                iVar1 = *piVar4;
                iVar2 = GetAdjustedCameraZoom(iVar2, arg2);
                piVar4 = &local_60[arg1_01];
                *piVar4 = iVar2 * iVar1 >> 16;
                arg1_01 = arg1_01 + 1;
                uVar5 = local_60.size();
                arg1_00 = arg1_00 + 32;
            } while (arg1_01 < uVar5);
        }
        vector<int, BucketAllocatorEASTL> local_78(local_60);
        dash3d::world::ResetVisCalc(&local_78, 500, 800, (arg1 * 334) / arg2, 334);
    }

    // 0x1000e6b40
    void Client::ExitFreecamMode() {
        auto this_00 = field_19120.operator->();
        Isaac* isaac = ((ServerConnection*)field_19120.operator->())->GetOutgoingEncryption();
        ClientMessage local_60 = shared::ClientMessage::MakeClientMessage(75, *isaac);
        this_00->SendClientMessage(local_60);
        m_cameraMode = 0;
    }

    // 0x1000e6bd0
    void Client::ForceRecentreFreecam() {
        if (m_cameraMode == 1) {
            field_7294744 = 1;
        }
    }

    // 0x1000e6bf0
    void Client::CheckRecentreFreecam() {
        uint8_t* midiPlayerMainThread;
        int iVar2;
        unsigned int uVar3;
        long lVar4;
        int* piVar5;
        Client* this_00;

        if (field_7294744 != '\0') {
            midiPlayerMainThread = &field_52016;
            if (*midiPlayerMainThread != nullptr) {
                lVar4 = (*midiPlayerMainThread).operator->();
                piVar5 = (int*)(*((lVar4 + 444)))[0];
                iVar2 = *piVar5;
                lVar4 = (*midiPlayerMainThread).operator->();
                piVar5 = (int*)(*((lVar4 + 484)))[0];
                if ((((iVar2 < 104) && (-1 < iVar2)) && (-1 < *piVar5)) && (*piVar5 < 104)) {
                    lVar4 = (*midiPlayerMainThread).operator->();
                    field_7294716 = *(unsigned int*)(lVar4 + 24);
                    lVar4 = (*midiPlayerMainThread).operator->();
                    iVar2 = *(int*)(lVar4 + 24);
                    this_00 = (Client*)midiPlayerMainThread;
                    lVar4 = (*midiPlayerMainThread).operator->();
                    iVar2 = GetAvH(this_00, iVar2, *(int*)(lVar4 + 28), field_51984);
                    uVar3 = iVar2 - field_52404;
                    if ((int)uVar3 < (int)field_7294720) {
                        field_7294720 = uVar3;
                    }
                    lVar4 = (*midiPlayerMainThread).operator->();
                    field_7294724 = *(float*)(lVar4 + 28);
                    field_7294744 = 0;
                }
            }
        }
    }

    // 0x1000e6ce0
    void Client::TriggerSeqSound(const shared_ptr<configdecoder::SeqType>& seqType, int arg2, int arg3, int arg4) {
        long lVar1;
        int* piVar2;
        int iVar4;

        if (field_2508752 < 50) {
            iVar4 = GetFinalAmbientVolume();
            if (iVar4 != 0) {
                lVar1 = seqType.operator->();
                if (((lVar1 + 144))->empty() == '\0') {
                    lVar1 = seqType.operator->();
                    iVar4 = ((lVar1 + 144))->end();
                    if (arg2 < iVar4) {
                        lVar1 = seqType.operator->();
                        piVar2 = (int*)(*((lVar1 + 144)))[(long)arg2];
                        TriggerSeqSound(*piVar2, arg3, arg4);
                    }
                }
            }
        }
    }

    // 0x1000e6d80
    void Client::TriggerSeqSound(int arg1, int arg2, int arg3) {
        int* piVar1;
        unsigned int* puVar2;
        uint32_t* puVar3;
        shared_ptr<sound::JagFX>* this_00;
        unsigned int uVar4;
        unsigned int uVar5;
        unsigned int uVar6;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48;

        if (arg1 != 0) {
            piVar1 = &field_2508760[(long)field_2508752];
            *piVar1 = arg1 >> 8;
            puVar2 = &field_2508784[(long)field_2508752];
            *puVar2 = (unsigned int)arg1 >> 4 & 7;
            puVar3 = &field_2508808[(long)field_2508752];
            *puVar3 = 0;
            local_48 = shared_ptr();
            this_00 = &field_2508856[(long)field_2508752];
            *this_00 = local_48;
            uVar5 = (unsigned int)arg1 & 15;
            uVar4 = arg2 + 63;
            if (-1 < (int)(arg2 - 64U)) {
                uVar4 = arg2 - 64U;
            }
            uVar6 = arg3 + 63;
            if (-1 < (int)(arg3 - 64U)) {
                uVar6 = arg3 - 64U;
            }
            puVar2 = &field_2508832[(long)field_2508752];
            *puVar2 = (uVar4 & 4294967168) * 512 + (uVar6 & 4294967168) * 2 | uVar5;
            field_2508752 = field_2508752 + 1;
        }
    }

    // 0x1000e6f70
    void Client::TriggerSeqSoundKeyFramed(const shared_ptr<configdecoder::SeqType>& seqType, int arg2, int arg3,
                                          int arg4) {
        long lVar3;
        int* piVar4;
        ReturnValue local_58;
        ReturnValue local_48;

        if (field_2508752 < 50) {
            if (GetFinalAmbientVolume() != 0) {
                lVar3 = seqType.operator->();
                local_48 = ((lVar3 + 8))->find(arg2);
                lVar3 = seqType.operator->();
                if (!(((lVar3 + 8))->empty())) {
                    lVar3 = seqType.operator->();
                    local_58 = ((lVar3 + 8))->end();
                    if (!(local_48 == local_58)) {
                        lVar3 = seqType.operator->();
                        piVar4 = (int*)(*((lVar3 + 8)))[arg2];
                        TriggerSeqSound(*piVar4, arg3, arg4);
                    }
                }
            }
        }
    }

    // 0x1000e7030
    void Client::PlaySynth(int arg1, int arg2, int arg3) {
        int* piVar2;
        shared_ptr<sound::JagFX>* this_01;
        uint32_t* puVar3;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;

        if (field_54760 != '\0') {
            (logger::default_logger())
                ->Log(false, 5,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      5304, "Synth sound:%i loops:%i delay:%i", arg1, arg2, arg3);
        }
        if (((GetFinalWaveVolume() != 0) && (arg2 != 0)) && ((long)field_2508752 < 50)) {
            piVar2 = &field_2508760[(long)field_2508752];
            *piVar2 = arg1;
            piVar2 = &field_2508784[(long)field_2508752];
            *piVar2 = arg2;
            piVar2 = &field_2508808[(long)field_2508752];
            *piVar2 = arg3;
            local_38 = shared_ptr();
            this_01 = &field_2508856[(long)field_2508752];
            *this_01 = local_38;
            puVar3 = &field_2508832[(long)field_2508752];
            *puVar3 = 0;
            field_2508752 = field_2508752 + 1;
        }
    }

    // 0x1000e7170
    void Client::GetFinalWaveVolume() {
        int iVar1 = ((GameOptions*)field_8384.operator->())->GetWaveVolume();
        auto this_01 = field_8376.operator->();
        jag::math::RoundFloatToInt((float)this_01->GetMasterVolume() * (float)((iVar1 * 127) / 100));
    }

    // 0x1000e71e0
    void Client::PlaySong(int arg1) {
        ReturnValue local_68;
        Js5* local_58[4];
        int local_38[2];
        bool local_29;
        int local_28[4];

        int local_30 = arg1;
        if (field_54760 != '\0') {
            (logger::default_logger())
                ->Log(false, 5,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      5323, "midi:%i", local_30);
        }
        if (local_30 == -1) {
            if (field_2508680 == '\0') {
                midi2::MidiManager::Stop(0, 0);
            }
        } else {
            if (midi2::MidiManager::HasPreviousSong(local_30) == '\0') {
                if (GetFinalMidiVolume() != 0) {
                    local_58[0] = (Js5*)GetMidi();
                    local_28[0] = 0;
                    local_38[0] = GetFinalMidiVolume();
                    local_29 = false;
                    make_shared<midi2::MidiRequest, jagex3::Js5*, int const&, int, int, bool>(
                        &local_68, local_58, &local_30, local_28, local_38, &local_29);
                    if (field_2508680 == '\0') {
                        new (local_28) shared_ptr(&local_68);
                        new (local_38) eastl::allocator("EASTL vector");
                        new (local_58) eastl::vector<shared_ptr<midi2::MidiRequest>>(local_28, DAT_00000001);
                        midi2::MidiManager::Play(*local_58, 0, 100, 100, 0, false);
                    } else {
                        new (local_28) shared_ptr(&local_68);
                        new (local_38) eastl::allocator("EASTL vector");
                        new (local_58) eastl::vector<shared_ptr<midi2::MidiRequest>>(local_28, DAT_00000001);
                        midi2::MidiManager::SetPreviousRequests(*local_58, 0, 100, 100, 0);
                    }
                }
            }
        }
    }

    // 0x1000e73d0
    void Client::GetFinalMidiVolume() {
        int iVar1 = ((GameOptions*)field_8384.operator->())->GetMidiVolume();
        auto this_01 = field_8376.operator->();
        jag::math::RoundFloatToInt((float)this_01->GetMasterVolume() * (float)((iVar1 * 255) / 100));
    }

    // 0x1000e7500
    StockPlayerOffer* Client::GetMidi() {
        if (m_pMidi == nullptr) {
            LogAssert("m_pMidi != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      9317, nullptr);
        }
        return m_pMidi;
    }

    // 0x1000e7560
    void Client::PlaySongs(const eastl::vector<int>& arg1, int arg2, int arg3, int arg4, int arg5) {
        int* piVar3;
        unsigned long uVar5;
        unsigned long arg1_00;
        ReturnValue local_88;
        vector<shared_ptr<midi2::MidiRequest>> local_78;
        Js5* local_58;
        int local_4c;
        int local_48;
        bool local_31;

        if (!(arg1.empty())) {
            piVar3 = &arg1[0];
            if ((*piVar3 == -1) && (field_2508680 == '\0')) {
                midi2::MidiManager::Stop(0, 0);
            } else {
                piVar3 = &arg1[0];
                if (*piVar3 != -1) {
                    piVar3 = &arg1[0];
                    if (!(midi2::MidiManager::HasPreviousSong(*piVar3))) {
                        if (GetFinalMidiVolume() != 0) {
                            local_78 = eastl::vector<shared_ptr<midi2::MidiRequest>>();
                            if (arg1.size() != 0) {
                                arg1_00 = 0;
                                do {
                                    local_58 = (Js5*)GetMidi();
                                    piVar3 = &arg1[arg1_00];
                                    local_4c = 0;
                                    local_48 = GetFinalMidiVolume();
                                    local_31 = false;
                                    make_shared<midi2::MidiRequest, jagex3::Js5*, int const&, int, int, bool>(
                                        &local_88, &local_58, piVar3, &local_4c, &local_48, &local_31);
                                    local_78.push_back(local_88);
                                    arg1_00 = arg1_00 + 1;
                                    uVar5 = arg1.size();
                                } while (arg1_00 < uVar5);
                            }
                            if (field_2508680 == '\0') {
                                midi2::MidiManager::Play(local_78, arg2, arg3, arg4, arg5, false);
                            } else {
                                midi2::MidiManager::SetPreviousRequests(local_78, arg2, arg3, arg4, arg5);
                            }
                        }
                    }
                }
            }
        }
    }

    // 0x1000e7780
    void Client::PlayJingle(int arg1, int arg2) {
        ReturnValue local_78;
        int local_68[8];
        int local_38[4];

        int local_3c = arg1;
        if (field_54760 != '\0') {
            (logger::default_logger())
                ->Log(false, 5,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      5377, "jingle:%i ms:%i", local_3c, arg2);
        }
        if ((GetFinalMidiVolume() != 0) && (local_3c != -1)) {
            local_68[0] = 0;
            local_38[0] = GetFinalMidiVolume();
            local_48[0] = (allocator)0;
            make_shared<midi2::MidiRequest, jagex3::Js5*, int const&, int, int, bool>(&local_78, (Js5**)&field_54480,
                                                                                      &local_3c, local_68, local_38);
            new (local_38) shared_ptr(&local_78);
            new (local_68) eastl::vector<shared_ptr<midi2::MidiRequest>>(local_38, DAT_00000001);
            midi2::MidiManager::Play(*local_68, 0, 0, 0, 0, true);
            field_2508680 = 1;
        }
    }

    // 0x1000e7900
    void Client::OnBrightnessChanged() {
        auto this_00 = field_8376.operator->();
        float arg1 = (float)this_00->GetGamma();
        float fVar2 = (float)field_144->GetGamma();
        if (arg1 != fVar2) {
            field_144->SetGamma(arg1);
            dash3d::Pix3D::InitColourTable((double)arg1);
            if (field_1120504->operator_cast_to_bool() != '\0') {
                ((TextureCache*)(*field_1120504).operator->())->SetGamma((double)arg1);
            }
            configdecoder::ObjType::ResetSpriteCache();
            if (m_usingRSeven != false) {
                RebuildMap();
            }
        }
    }

    // 0x1000e79b0
    void Client::OnMidiVolumeChanged() {
        Js5* js5;

        bool cVar1 = midi2::MidiManager::IsInitialised();
        if (!cVar1) {
            return;
        }
        int iVar2 = GetFinalMidiVolume();
        if (iVar2 == 0) {
            midi2::MidiManager::Stop(0, 0);
        } else {
            if (((iVar2 < 1) || (cVar1 = midi2::MidiManager::CanPlayPreviousSongs(), !cVar1)) ||
                (cVar1 = midi2::MidiManager::IsPlaying(), cVar1)) {
                midi2::MidiManager::SetVolume(iVar2);
                return;
            }
            js5 = (Js5*)GetMidi();
            iVar2 = GetFinalMidiVolume();
            midi2::MidiManager::PlayPreviousSongs(js5, iVar2);
        }
        field_2508680 = 0;
    }

    // 0x1000e7ab0
    void Client::GlDoSoundsQueue() {
        uint32_t uVar1;
        unsigned int uVar2;
        unsigned int uVar3;
        Array<int>* pAVar4;
        Array<shared_ptr<sound::JagFX>>* this_00;
        Client* this_01;
        bool cVar6;
        int iVar7;
        int* piVar8;
        uint32_t* puVar9;
        shared_ptr<sound::JagFX>* psVar10;
        shared_ptr<sound::JagFX>* this_02;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        JagFX* pJVar11;
        unsigned int* puVar12;
        long lVar13;
        Wave* pWVar14;
        Decimator* decimator;
        WaveStream* pWVar15;
        long* plVar16;
        Js5* pJVar17;
        int iVar18;
        Array<int>* pAVar19;
        unsigned long arg1;
        unsigned long uVar20;
        int iVar21;
        int iVar22;
        ReturnValue local_c8;
        shared_ptr<sound::Decimator>* local_b8;
        shared_ptr<sound::MixerMainThread>* local_b0;
        ReturnValue local_a8;
        ReturnValue local_98;
        Array<int>* local_88;
        Array<int>* local_80;
        unsigned long local_78;
        shared_ptr<ClientPlayer>* local_70;
        shared_ptr<dash3d::Decor> local_68;
        Array<shared_ptr<sound::JagFX>>* local_58;
        Array<int>* local_50;
        Array<int>* local_48;
        int local_3c;

        if (0 < field_2508752) {
            pAVar19 = (Array<int>*)&field_2508808;
            local_58 = (Array<shared_ptr<sound::JagFX>>*)&field_2508856;
            local_88 = (Array<int>*)&field_2508760;
            local_48 = (Array<int>*)&field_2508832;
            local_70 = (shared_ptr<ClientPlayer>*)&field_52016;
            local_b8 = (shared_ptr<sound::Decimator>*)&field_54200;
            local_80 = (Array<int>*)&field_2508784;
            local_b0 = (shared_ptr<sound::MixerMainThread>*)&field_54184;
            uVar20 = 0;
            local_50 = pAVar19;
            do {
                arg1 = (unsigned long)(int)uVar20;
                piVar8 = (int*)(*pAVar19)[arg1];
                *piVar8 = *piVar8 - 1;
                piVar8 = (int*)(*pAVar19)[arg1];
                local_78 = uVar20;
                if (*piVar8 < -10) {
                    iVar7 = field_2508752 - 1;
                    field_2508752 = iVar7;
                    if ((int)uVar20 < iVar7) {
                        do {
                            pAVar19 = local_88;
                            uVar20 = arg1 + 1;
                            puVar9 = (uint32_t*)(*local_88)[uVar20];
                            uVar1 = *puVar9;
                            puVar9 = (uint32_t*)(*pAVar19)[arg1];
                            this_00 = local_58;
                            *puVar9 = uVar1;
                            psVar10 = (shared_ptr<sound::JagFX>*)(*local_58)[uVar20];
                            this_02 = (shared_ptr<sound::JagFX>*)(*this_00)[arg1];
                            pAVar19 = local_50;
                            *this_02 = *psVar10;
                            pAVar4 = local_80;
                            puVar9 = (uint32_t*)(*local_80)[uVar20];
                            uVar1 = *puVar9;
                            puVar9 = (uint32_t*)(*pAVar4)[arg1];
                            *puVar9 = uVar1;
                            puVar9 = (uint32_t*)(*pAVar19)[uVar20];
                            uVar1 = *puVar9;
                            puVar9 = (uint32_t*)(*pAVar19)[arg1];
                            pAVar4 = local_48;
                            *puVar9 = uVar1;
                            puVar9 = (uint32_t*)(*local_48)[uVar20];
                            uVar1 = *puVar9;
                            puVar9 = (uint32_t*)(*pAVar4)[arg1];
                            *puVar9 = uVar1;
                            arg1 = uVar20;
                        } while ((long)uVar20 < (long)field_2508752);
                    }
                    iVar7 = (int)local_78 - 1;
                } else {
                    groundDecor = (shared_ptr<dash3d::GroundDecor>*)(*local_58)[arg1];
                    local_68 = shared_ptr(groundDecor);
                    if (local_68 == nullptr) {
                        pJVar17 = (Js5*)m_pJagFx;
                        piVar8 = (int*)(*local_88)[arg1];
                        local_98 = sound::JagFX::Load(*pJVar17, *piVar8, 0);
                        pJVar11 = (JagFX*)std::unique_ptr<sound::JagFX>::release();
                        local_68.reset<sound::JagFX, void>(pJVar11);
                        if (local_68 != nullptr) {
                            pJVar11 = (JagFX*)local_68.operator->();
                            iVar7 = pJVar11->OptimiseStart();
                            piVar8 = (int*)(*pAVar19)[arg1];
                            *piVar8 = *piVar8 + iVar7;
                            psVar10 = (shared_ptr<sound::JagFX>*)(*local_58)[arg1];
                            *psVar10 = local_68;
                            goto LAB_1000e7d5f;
                        }
                    } else {
                    LAB_1000e7d5f:
                        piVar8 = (int*)(*pAVar19)[arg1];
                        if (*piVar8 < 0) {
                            local_3c = GetFinalAmbientVolume();
                            piVar8 = (int*)(*local_48)[arg1];
                            pAVar4 = local_48;
                            if (*piVar8 == 0) {
                                local_3c = GetFinalWaveVolume();
                            } else {
                                puVar12 = (unsigned int*)(*local_48)[arg1];
                                uVar2 = *puVar12;
                                puVar12 = (unsigned int*)(*pAVar4)[arg1];
                                uVar3 = *puVar12;
                                lVar13 = (*local_70).operator->();
                                iVar21 = (uVar3 >> 9 & 32640 | 64) - *(int*)(lVar13 + 24);
                                iVar7 = -iVar21;
                                if (iVar7 < 0) {
                                    iVar7 = iVar21;
                                }
                                puVar12 = (unsigned int*)(*local_48)[arg1];
                                uVar3 = *puVar12;
                                lVar13 = (*local_70).operator->();
                                iVar18 = (uVar2 & 255) * 128;
                                iVar22 = (uVar3 >> 1 & 32640 | 64) - *(int*)(lVar13 + 28);
                                iVar21 = -iVar22;
                                if (iVar21 < 0) {
                                    iVar21 = iVar22;
                                }
                                iVar7 = iVar7 + iVar21 - 128;
                                if (iVar18 < iVar7) {
                                    puVar9 = (uint32_t*)(*local_50)[arg1];
                                    *puVar9 = 4294967196;
                                } else {
                                    iVar21 = 0;
                                    if (-1 < iVar7) {
                                        iVar21 = iVar7;
                                    }
                                    local_3c = ((iVar18 - iVar21) * local_3c) / iVar18;
                                }
                                pAVar19 = local_50;
                                if (iVar18 < iVar7)
                                    goto LAB_1000e7f90;
                            }
                            if (0 < local_3c) {
                                pJVar11 = (JagFX*)local_68.operator->();
                                local_a8 = pJVar11->ToWave();
                                pWVar14 = (Wave*)std::unique_ptr<sound::Wave>::release();
                                local_98.shared_ptr<sound::Wave, void>(pWVar14);
                                pWVar14 = (Wave*)local_98.operator->();
                                decimator = (Decimator*)**local_b8;
                                pWVar14->Decimate(*decimator);
                                local_c8 = sound::WaveStream::NewRatePercent(local_98, 100, local_3c);
                                pWVar15 = (WaveStream*)std::unique_ptr<sound::WaveStream>::release();
                                local_a8.shared_ptr<sound::WaveStream, void>(pWVar15);
                                pWVar15 = (WaveStream*)local_a8.operator->();
                                piVar8 = (int*)(*local_80)[arg1];
                                pWVar15->SetLoopCount(*piVar8 - 1);
                                plVar16 = (long*)(*local_b0).operator->();
                                local_c8 = shared_ptr(&local_a8);
                                (**(void (**)(...))(*plVar16 + 8))(plVar16, &local_c8);
                            }
                            puVar9 = (uint32_t*)(*pAVar19)[arg1];
                            *puVar9 = 4294967196;
                        }
                    }
                LAB_1000e7f90:
                    iVar7 = (int)local_78;
                }
                uVar20 = (unsigned long)(iVar7 + 1U);
            } while ((int)(iVar7 + 1U) < field_2508752);
        }
        if ((field_2508680 != '\0') && (cVar6 = midi2::MidiManager::IsPlaying(), !cVar6)) {
            iVar7 = GetFinalMidiVolume();
            if ((iVar7 != 0) && (cVar6 = midi2::MidiManager::CanPlayPreviousSongs(), this_01 = this, cVar6)) {
                pJVar17 = (Js5*)GetMidi();
                iVar7 = GetFinalMidiVolume(this_01);
                midi2::MidiManager::PlayPreviousSongs(pJVar17, iVar7);
            }
            field_2508680 = 0;
        }
    }

    // 0x1000e8180
    void Client::CopyToClipboard() {
        auto local_38 = ChatHistory::GetCopyBuffer();
        Clipboard local_20;
        int arg2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_38.size();
        Clipboard::SetText(&local_20, arg2);
    }

    // 0x1000e8200
    void Client::Vibrate(hal::Haptics::Preset preset) {
        int iVar1;
        DeviceOptions* this_01;
        __7 local_d0;
        function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        local_d0[0].field_0 = preset;
        if (preset - 4 < 3) {
            this_01 = (DeviceOptions*)field_8376.operator->();
            iVar1 = this_01->GetHapticFeedbackStrength();
            local_d0[0].field_0 = iVar1 + 4;
            if ((int)(iVar1 + 4) <= (int)preset) {
                local_d0[0].field_0 = preset;
            }
        }
        OSClient* this_00 = field_54752;
        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            Client::Vibrate(hal::Haptics::Preset)::__7, void>(local_c8, &local_d0);
        this_00->QueueMainThreadEvent(*local_c8);
    }

    // 0x1000e82f0
    void Client::LostCon() {
        long lVar1;

        if ((field_54156 < 1) && (lVar1 = core::SafeTime::CurrentTimeMillis(),
                                  lVar1 <= javapal::GameShell::m_lastGameLoopTimeMillis + 60000)) {
            field_1104120.MarkLostCon();
            SetMainState(40);
            return;
        }
        Logout();
    }

    // 0x1000f0e30
    uint64_t Client::GlUpdateMouseOverTile() {
        int iVar1;
        int arg3;
        CoordMapSquare local_38;

        auto CVar3 = WorldCoordFromBuildCoord((Client*)&local_38, (int)this, dash3d::world::m_mouseoverGroundY,
                                              dash3d::world::m_mouseoverGroundX);
        int arg1 = dash3d::world::m_mouseoverGroundY;
        uint64_t uVar2 = CVar3._0_8_;
        if (dash3d::world::m_mouseoverGroundY != -1) {
            iVar1 = local_38.GetZ();
            if (((iVar1 == field_19108) && (uVar2 = local_38.GetPos(), (int)uVar2 == field_19112)) &&
                (arg1 == field_19116)) {
                return uVar2;
            }
            ScriptRunner::SetActivePlayer(field_51988);
            iVar1 = local_38.GetZ();
            arg3 = local_38.GetPos();
            ScriptRunner::SetActiveTile(arg1, iVar1, arg3);
            ScriptRunner::ExecuteScript(48, -1, -1, 500000);
            iVar1 = local_38.GetZ();
            field_19108 = iVar1;
            uVar2 = local_38.GetPos();
            field_19112 = (int)uVar2;
            field_19116 = arg1;
        }
        return uVar2;
    }

    // 0x1000f1090
    void Client::GlCheckFriendChatState() {
        void* in_RSI;

        if (field_2508660 != '\0') {
            if (&field_52544 != in_RSI) {
                ((PlayerRegistry<social::FriendChatUser>*)field_52544.operator->())->Sort();
            }
            ResetPlayerFriendChatIndicators();
            field_2508660 = 0;
        }
    }

    // 0x1000f10e0
    void Client::GlCheckClanState() {
        if (field_7164882 != '\0') {
            ResetPlayerClanIndicators();
            field_7164882 = 0;
        }
    }

    // 0x1000f1110
    void Client::GlCheckMinimap() {
        world* world;

        int iVar1 = field_51984;
        uint8_t* this_00 = &field_8152;
        Minimap* pMVar2 = (Minimap*)(*this_00).operator->();
        int iVar3 = pMVar2->GetLevel();
        if (iVar1 != iVar3) {
            pMVar2 = (Minimap*)(*this_00).operator->();
            pMVar2->SetLevel(field_51984);
            pMVar2 = (Minimap*)(*this_00).operator->();
            iVar1 = field_51984;
            world = (world*)field_19184.get();
            pMVar2->BuildBuffer(iVar1, world);
        }
    }

    // 0x1000f1190
    void Client::LocChangeDoQueue() {
        (&field_2505008)->remove_if<Client::LocChangeDoQueue()::__22>(this);
    }

    // 0x1000f11b0
    void Client::GlMoveNpcs() {
        int arg1;
        int iVar1;
        int* piVar2;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ClientEntity* clientEntity;
        unsigned long arg1_00;

        if (0 < (int)m_nPCCount) {
            arg1_00 = 0;
            do {
                piVar2 = &field_1103856[arg1_00];
                arg1 = *piVar2;
                this_00 = &field_55272[(long)arg1];
                clientEntity = (ClientEntity*)this_00->end();
                if (clientEntity != nullptr) {
                    iVar1 = clientEntity->field_440;
                    GlMoveEntity(*clientEntity);
                    if (clientEntity->field_440 != iVar1) {
                        ScriptRunner::SetActiveNPC(arg1);
                        ScriptRunner::ExecuteScript(50, -1, -1, 500000);
                    }
                }
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(int)m_nPCCount);
        }
    }

    // 0x1000f1280
    void Client::GlTimeoutChat() {
        long lVar2;
        int* piVar3;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        int iVar4;
        long lVar5;
        unsigned long arg1;

        if (0 < ReceivePlayerPositions::m_lastNum) {
            lVar5 = 0;
            do {
                lVar2 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                             field_19216[(long)(int)(&ReceivePlayerPositions::m_lastID)[lVar5]])
                            ->end();
                if (((lVar2 != 0) && (0 < *(int*)(lVar2 + 148))) &&
                    (iVar4 = *(int*)(lVar2 + 148) - 1, *(int*)(lVar2 + 148) = iVar4, iVar4 == 0)) {
                    ((lVar2 + 112))->assign("");
                }
                lVar5 = lVar5 + 1;
            } while (lVar5 < ReceivePlayerPositions::m_lastNum);
        }
        if (0 < (int)m_nPCCount) {
            arg1 = 0;
            do {
                piVar3 = &field_1103856[arg1];
                midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)field_55272[(long)*piVar3];
                if (*midiPlayerMainThread != nullptr) {
                    lVar5 = (*midiPlayerMainThread).operator->();
                    if (0 < *(int*)(lVar5 + 148)) {
                        lVar5 = (*midiPlayerMainThread).operator->();
                        *(int*)(lVar5 + 148) = *(int*)(lVar5 + 148) - 1;
                        lVar5 = (*midiPlayerMainThread).operator->();
                        if (*(int*)(lVar5 + 148) == 0) {
                            lVar5 = (*midiPlayerMainThread).operator->();
                            ((lVar5 + 112))->assign("");
                        }
                    }
                }
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)(int)m_nPCCount);
        }
    }

    // 0x1000f13e0
    unsigned long Client::NeedBuildMinimenu() {
        unsigned long uVar2;
        unsigned int local_20[2];

        local_20->XPlotBlender<int>(4294967295);
        if ((field_8592 != ((CoordType<UICoordSpecializer>*)(unsigned long)local_20[0]) == '\0') ||
            (field_52344 == nullptr)) {
            uVar2 = 0;
        } else {
            uVar2 = field_52344->IsOpen();
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x1000f1440
    void Client::LoopInterface(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
        Array<shared_ptr<rs2lib::IfType>>* ifTypes;

        if (((IfType*)(unsigned long)(unsigned int)arg1)->OpenInterface(arg1) != '\0') {
            ifTypes = (Array<shared_ptr<rs2lib::IfType>>*)(*(
                (Array<Array<shared_ptr<rs2lib::IfType>>>*)&rs2lib::IfType::m_list))[(long)arg1];
            LoopLayer(*ifTypes, -1, arg2, arg3, arg4, arg5, arg6, arg7);
        }
    }

    // 0x1000f14c0
    void Client::PostLoopInterface() {
        field_53256 = 0;
    }

    // 0x1000f1520
    void Client::GetInterfaceLayer(shared_ptr<rs2lib::IfType> ifType) {
        long lVar1 = (*ifType).operator->();
        if (*(char*)(lVar1 + 24) == '\0') {
            lVar1 = (*ifType).operator->();
            rs2lib::IfType::Get(*(int*)(lVar1 + 88));
        } else {
            lVar1 = (*ifType).operator->();
            m_entityOverlays->GetLayer(*(int*)(lVar1 + 88));
        }
    }

    // 0x1000fc8d0
    void Client::SetDrawDistance(int arg1) {
        ((DeviceOptions*)field_8376.operator->())->SetDrawDistance(arg1);
    }

    // 0x1000fc920
    void Client::OnDrawDistanceChange() {
        void* in_RSI;

        if (&field_19184 != in_RSI) {
            ((world*)field_19184.operator->())
                ->SetDrawDistance(((DeviceOptions*)field_8376.operator->())->GetDrawDistance());
        }
    }

    // 0x1000fc990
    void Client::GdmGetSpecialArea() {
        field_52440 = 0;
        long lVar3 = field_52016.operator->();
        int iVar4 = *(int*)(lVar3 + 24) >> 7;
        unsigned int uVar1 = field_53220;
        lVar3 = field_52016.operator->();
        int iVar2 = (*(int*)(lVar3 + 28) >> 7) + field_53224;
        if (((3055 < iVar2 && (iVar4 + uVar1) - 3053 < 104) && iVar2 < 3137) ||
            (((iVar4 + uVar1) - 3072 < 47 && 9491 < iVar2) && iVar2 < 9536)) {
            field_52440 = 1;
        }
        if ((((field_52440 == 1) && (3138 < (int)(iVar4 + uVar1))) && ((int)(iVar4 + uVar1) < 3200)) &&
            ((3007 < iVar2 && (iVar2 < 3063)))) {
            field_52440 = 0;
        }
    }

    // 0x1000fcbc0
    void Client::PauseContinue(int arg1, int arg2) {
        uint32_t uVar1;
        Logger* this_00;
        uint8_t local_78[64];

        if (field_54760 != '\0') {
            this_00 = logger::default_logger();
            uVar1 = core::math::MathTool::UnsignedRightShift(arg1, '\x10');
            this_00->Log(
                false, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp", 9183,
                "Sending pausecontinue prot - com:%i if:%u subid:%i", arg1, uVar1, arg2);
        }
        auto pSVar2 = field_19120.operator->();
        auto isaac = pSVar2->GetOutgoingEncryption();
        *local_78 = shared::ClientMessage::MakeClientMessage(56, *isaac);
        SuperShuffledPacketFactory local_38(*((local_78 + 8)));
        auto pSVar3 = ShuffledPacketFactory::p2_alt2();
        pSVar3->p4<unsigned int>(arg1);
        pSVar3 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
        pSVar3->p2<int>(arg2);
        pSVar2 = (ServerConnection*)field_19120.operator->();
        pSVar2->SendClientMessage(*local_78);
    }

    // 0x1000fcce0
    void Client::InitHostPlatformStats() {
        field_2508992->Init();
    }

    // 0x1000fcd00
    shared_ptr* Client::GetApplicationContext() {
        unique_ptr<Steam, std::default_delete<Steam> _>* steam;
        ReturnValue local_20;

        if ((*((shared_ptr<configdecoder::ObjType>*)&javapal::GameShell::m_pApplicationContext)) == nullptr) {
            steam = (unique_ptr<Steam, std::default_delete<Steam> _>*)field_54752->GetSteamSDK();
            make_shared<DesktopApplicationContext, std::unique_ptr<Steam>&>(&local_20, steam);
            (&javapal::GameShell::m_pApplicationContext)->operator=(&local_20);
        }
        return (shared_ptr*)&javapal::GameShell::m_pApplicationContext;
    }

    // 0x1000fce70
    void Client::CheckResize() {
        ProcessSideBarRequests();
        CheckResize();
    }

    // 0x1000fcf00
    void Client::QuickResize() {
        long* plVar1;

        if (field_8425 == false) {
            plVar1 = (long*)OSRenderCore_AudioThread::Instance();
            ((OSRenderCore_LogicThread_Common*)((long)plVar1 + *(long*)(*plVar1 - 24)))
                ->SetMinClientSize(field_120, field_124);
        }
        QuickResize();
    }

    // 0x1000fcf60
    Steam* Client::GetSteamSDK() {
        auto this_00 = field_54752->GetSteamSDK();
        return (Steam*)this_00->get();
    }

    // 0x1000fcf90
    void Client::SaveWindowPosition(WindowSavedPosition&& windowSavedPosition) {
        if ((&field_8376)->operator_cast_to_bool() != '\0') {
            ((DeviceOptions*)field_8376.operator->())->SetWindowSavedPosition(windowSavedPosition);
        }
    }

    // 0x1000fd070
    void Client::AcceptTermsAndPrivacy() {
        shared_ptr<ApplicationContext>* this_01;

        if (HasAcceptedTermsAndPrivacy() == '\0') {
            ((DeviceOptions*)field_8376.operator->())->SetTermsAndPrivacyVersion(field_54828);
            this_01 = (shared_ptr<ApplicationContext>*)(**(void (**)(...))*m_pMyThis)();
            ((ApplicationContext*)(*this_01).operator->())->InitServices();
        }
    }

    // 0x1000fd0e0
    Js5* Client::GetClientScripts() {
        if (m_pClientScripts == nullptr) {
            LogAssert("m_pClientScripts != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      9305, nullptr);
        }
        return (Js5*)m_pClientScripts;
    }

    // 0x1000fd120
    Js5* Client::GetSprites() {
        if (m_pSprites == nullptr) {
            LogAssert("m_pSprites != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client.cpp",
                      9311, nullptr);
        }
        return (Js5*)m_pSprites;
    }

    // 0x1000fd160
    void Client::SetLoginProgress(int arg1) {}

    // 0x1000fd170
    eastl::string* Client::LoginProgressToString(int arg1) {
        uint32_t in_register_0000003c;

        new ((eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) eastl::string("");
        return (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x1000fd1b0
    eastl::string* Client::MainStateToString(int arg1) {
        uint32_t in_register_0000003c;

        new ((eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) eastl::string("");
        return (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x1000fd1f0
    bool
    Client::StockMarketOfferComparator::operator()(const rs2lib::ActiveOffersReply::ActiveOffer& activeOffer1,
                                                   const rs2lib::ActiveOffersReply::ActiveOffer& activeOffer2) const {
        int iVar1;
        int iVar2;

        if (*this != (StockMarketOfferComparator)0) {
            iVar1 = GetWorldId(Client::Instance());
            iVar2 = activeOffer1.GetPos();
            if (iVar2 == iVar1) {
                return true;
            }
            iVar2 = activeOffer2.GetPos();
            if (iVar2 == iVar1) {
                return false;
            }
        }
        iVar1 = activeOffer1.GetPos();
        iVar2 = activeOffer2.GetPos();
        return iVar1 < iVar2;
    }

    // 0x1000fd270
    uint32_t Client::WriteToPublicStorage(const Filename& filename1, Filename& filename2, const char* str,
                                          Error& error) {
        shared_ptr<ApplicationContext>* this_00 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this)();
        long* plVar2 = (long*)(*this_00).operator->();
        auto str_00 = GameShell3Cache::GetOSRSCacheFolderName();
        Filename local_298(str_00);
        auto local_168 = local_298 / filename1;
        uint32_t uVar1 = (**(void (**)(...))(*plVar2 + 40))(plVar2, &local_168, filename2, str, error);
        return uVar1;
    }

    // 0x1000fd370
    void Client::PreloadKeyFrameSet(int arg1) {
        int* piVar2;

        auto local_28 = configdecoder::SeqType::List(arg1);
        if (((SeqType*)local_28.operator->())->IsKeyFramed() != '\0') {
            piVar2 = (int*)local_28.operator->();
            if ((uint8_t*)(*piVar2)->GetKeyFrameSetStatus() == DataStatus::MISSING) {
                piVar2 = (int*)local_28.operator->();
                field_7306808.push_back(*piVar2);
            }
        }
    }

    // 0x1000fd4a0
    uint8_t Client::Frozen() const {
        return m_frozen;
    }

    // 0x1000fd4b0
    void Client::SetFrozen(bool arg1) {
        m_frozen = arg1;
    }

    // 0x10010c1a0
    void Client::CloseModal() {
        int arg1;
        int* piVar3;
        long lVar4;
        ReturnValue local_b0;
        hashtable<int, eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_50;
        ReturnValue local_48;

        auto this_01 = field_19120.operator->();
        Isaac* isaac = ((ServerConnection*)field_19120.operator->())->GetOutgoingEncryption();
        ClientMessage local_a0 = shared::ClientMessage::MakeClientMessage(8, *isaac);
        this_01->SendClientMessage(local_a0);
        ScriptRunner::DisallowIfClose();
        hashtable<int, eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* arg2 =
            (hashtable<int, eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>, eastl::allocator,
                       eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>>,
                       eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)field_53160;
        Client* local_38 = this;
        helpers::GetKeysIf<int, SubInterface, Client::CloseModal()::__15>((hash_map<int, SubInterface>*)&local_a0,
                                                                          (__15*)arg2);
        auto local_60 = local_a0.begin();
        auto local_58 = local_a0.end();
        bool cVar1 = local_60 != local_58;
        if (cVar1) {
            local_50 = arg2;
            do {
                piVar3 = (int*)*local_60;
                local_48 = arg2->find(*piVar3);
                local_b0 = arg2->end();
                cVar1 = local_48 != local_b0;
                if (cVar1) {
                    piVar3 = (int*)local_48.HeapBeginPtr();
                    arg1 = *piVar3;
                    lVar4 = local_48.HeapBeginPtr();
                    arg2 = local_50;
                    CloseSubinterface(local_38, arg1, *(int*)(lVar4 + 4), true);
                }
                ++local_60;
                cVar1 = local_60 != local_58;
            } while (cVar1);
        }
        Client* this_00 = local_38;
        uint8_t* midiPlayerMainThread = &local_38->field_52424;
        if (*midiPlayerMainThread != nullptr) {
            ComponentUpdated(this_00, (shared_ptr<rs2lib::IfType>*)midiPlayerMainThread);
            local_48 = shared_ptr();
            *midiPlayerMainThread = local_48;
        }
        ScriptRunner::AllowIfClose();
    }

    // 0x10010c3b0
    void Client::ClientVar(int arg1) {
        unsigned int uVar2;
        GameOptions* pGVar5;

        LegacyUpdated();
        bgsound::RecalculateMultilocs();
        auto this_00 = configdecoder::VarpType::List(arg1);
        int* piVar3 = (int*)(*this_00).operator->();
        int iVar6 = *piVar3;
        if (iVar6 == 0) {
            return;
        }
        unsigned int* puVar4 = (unsigned int*)(*((Array<int>*)&ClientVarCache::m_var))[(long)arg1];
        if (21 < iVar6 - 1U) {
            return;
        }
        unsigned int uVar1 = *puVar4;
        switch (iVar6) {
        case 1:
            iVar6 = 80;
            if (uVar1 - 1 < 3) {
                iVar6 = (uVar1 - 1) * 20 + 20;
            }
            ((DeviceOptions*)field_8376.operator->())->SetBrightness(iVar6);
            return;
        default:
            goto switchD_10010c411_caseD_2;
        case 3:
            if (uVar1 < 5) {
                pGVar5 = (GameOptions*)field_8384.operator->();
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
                pGVar5 = (GameOptions*)field_8384.operator->();
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
                pGVar5 = (GameOptions*)field_8384.operator->();
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
            field_52344->SetAttackPriorityPlayer(uVar2);
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
        field_52344->SetAttackPriorityNpc(uVar2);
    switchD_10010c411_caseD_2:
    }

    // 0x10010c7a0
    void Client::SetDeferredGroundOp(int arg1, int arg2, int arg3, int arg4) {
        NXTPixToolkit* this_00;
        int local_38;
        int local_34;
        unsigned int local_30[2];
        unsigned int local_28[2];

        field_7294760 = arg1;
        field_7294764 = arg2;
        if (field_52344->IsOpen() == '\0') {
            local_30->XPlotBlender<int>(arg3);
            local_28->XPlotBlender<int>(arg4);
            this_00 = (NXTPixToolkit*)GetMemoryCache();
            ((NXTPixScreen*)this_00->GetScreen())
                ->CalculateCanvasCoords((CoordType<UICoordSpecializer>*)(unsigned long)local_30[0],
                                        (CoordType<UICoordSpecializer>*)(unsigned long)local_28[0], local_38, local_34);
            ((world*)field_19184.operator->())->RequestGroundCoordsForOp(field_51984, local_38, local_34, true);
        } else {
            field_19184.operator->();
            dash3d::world::RequestExecuteGroundOp();
        }
    }

    // 0x10010ca50
    void Client::CloseSubinterface(int arg1, int arg2, bool arg3) {
        uint32_t in_register_00000009;
        int local_24;

        field_53160->erase(local_24);
        if ((((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3) != 0) {
            rs2lib::IfType::CloseInterface(arg2);
        }
        PurgeServerActive(arg2);
        auto midiPlayerMainThread = rs2lib::IfType::Get(arg1);
        if (*midiPlayerMainThread != nullptr) {
            ComponentUpdated(*midiPlayerMainThread);
        }
        if (field_53216 != -1) {
            RunHookImmediate(field_53216, 24);
        }
    }

    // 0x10010cae0
    int* Client::OpenSubinterface(int arg1, int arg2, int arg3) {
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48;

        eastl::hash_map<int, SubInterface>::insert(local_60);
        int* piVar2 = (int*)(*field_53160)[arg1];
        *piVar2 = arg2;
        piVar2[1] = arg3;
        IfAnimReset(arg2);
        auto groundDecor = rs2lib::IfType::Get(arg1);
        shared_ptr<dash3d::Decor> local_60(groundDecor);
        ComponentUpdated(local_60);
        uint8_t* midiPlayerMainThread = &field_52424;
        if (*midiPlayerMainThread != nullptr) {
            ComponentUpdated(*midiPlayerMainThread);
            local_48 = shared_ptr();
            *midiPlayerMainThread = local_48;
        }
        Array<shared_ptr<rs2lib::IfType>>* ifTypes = (Array<shared_ptr<rs2lib::IfType>>*)(*(
            (Array<Array<shared_ptr<rs2lib::IfType>>>*)&rs2lib::IfType::m_list))[(long)(arg1 >> 16)];
        InterfaceCalculateSizeAndPosSubcomponents(*ifTypes, local_60, false);
        ScriptRunner::OnLoad(arg2);
        if (field_53216 != -1) {
            RunHookImmediate(field_53216, 24);
        }
        return piVar2;
    }

    // 0x10010cd40
    void Client::PurgeServerActive(int arg1) {
        long long* plVar2;
        hash_map<unsigned long long, int> local_60;

        helpers::GetKeysIf<unsigned long long, int, int->PurgeServerActive()::__16>(&local_60, (__16*)field_2506512);
        auto local_40 = local_60.begin();
        auto local_38 = local_60.end();
        bool cVar1 = local_40 != local_38;
        if (cVar1) {
            do {
                plVar2 = (long long*)*local_40;
                field_2506512->erase(*plVar2);
                ++local_40;
                cVar1 = local_40 != local_38;
            } while (cVar1);
        }
    }

    // 0x10010cf80
    auto Client::GetMinimapFlagCoord() {
        auto result;
        result.GetFlagCoord(field_8152.operator->());
        return result;
    }

    // 0x100110480
    OverlayPos Client::GetAllOverlayPositionsLoc(int arg1, int arg2, int arg3, int arg4) {
        OverlayPos result;
        GetOverlayPos(arg1, arg2, arg3, arg4 + 15);
        result = field_1120480;
        *(int*)&result.field_4 = field_1120484;
        GetOverlayPos(arg1, arg2, arg3, arg4 / 2);
        *(int*)(&result + 1) = field_1120480;
        *(int*) && result[1].field_4 = field_1120484;
        GetOverlayPos(arg1, arg2, arg3, 0);
        *(int*)(&result + 2) = field_1120480;
        *(int*) && result[2].field_4 = field_1120484;
        *(uint8_t*)(&result + 3) = 1;
        return result;
    }

    // 0x100110840
    void Client::GetOverlayPos(int arg1, int arg2, int arg3, int arg4) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        array<int, _2048ul>* paVar7;
        int* piVar8;
        NXTPixToolkit* this_00;
        SoundInstance* this_01;
        int iVar9;
        int iVar10;
        int iVar11;
        float fVar12;

        if ((((arg2 < 13057) && (127 < arg2)) && (127 < arg3)) && (arg3 < 13057)) {
            iVar4 = GetAvH(arg2, arg3, arg1);
            iVar10 = arg2 - field_53088;
            iVar4 = iVar4 - (arg4 + field_53092);
            iVar11 = arg3 - field_53096;
            paVar7 = dash3d::Pix3D::GetSinTable();
            piVar8 = (int*)(*paVar7)[(long)field_53100];
            iVar6 = *piVar8;
            paVar7 = dash3d::Pix3D::GetCosTable();
            piVar8 = (int*)(*paVar7)[(long)field_53100];
            iVar1 = *piVar8;
            paVar7 = dash3d::Pix3D::GetSinTable();
            piVar8 = (int*)(*paVar7)[(long)(int)field_53104];
            iVar2 = *piVar8;
            paVar7 = dash3d::Pix3D::GetCosTable();
            piVar8 = (int*)(*paVar7)[(long)(int)field_53104];
            iVar3 = *piVar8;
            iVar5 = iVar3 * iVar11 - iVar2 * iVar10 >> 16;
            iVar9 = iVar5 * iVar1 + iVar6 * iVar4;
            if (3276799 < iVar9) {
                this_00 = (NXTPixToolkit*)GetMemoryCache();
                this_01 = (SoundInstance*)this_00->GetScreen();
                fVar12 = (float)this_01->GetSoundSpatialSizeMax();
                fVar12 = 1.0 / (fVar12 * (float)(iVar9 >> 16));
                field_1120480 = (int)((float)((iVar3 * iVar10 + iVar2 * iVar11 >> 16) * field_52752) * fVar12) +
                                (int)field_52744 / 2;
                iVar6 =
                    (int)((float)((iVar1 * iVar4 - iVar5 * iVar6 >> 16) * field_52752) * fVar12) + (int)field_52748 / 2;
                goto LAB_100110a04;
            }
        }
        field_1120480 = -1;
        iVar6 = -1;
    LAB_100110a04:
        field_1120484 = iVar6;
    }

    // 0x100110aa0
    void Client::GetOverlayPos(ClientEntity* clientEntity, int arg2) {
        GetOverlayPos(field_51984, *(int*)&clientEntity->field_24, *(int*)((long)&clientEntity->field_24 + 4), arg2);
    }

    // 0x1001110e0
    void Client::GdmEntityOverlayScriptedInner(const Array<shared_ptr<rs2lib::IfType>>& ifTypes,
                                               const shared_ptr<rs2lib::IfType>& ifType, unsigned long arg3,
                                               OverlayPos& overlayPos, int arg5, int arg6, int arg7, int arg8,
                                               int arg9) {
        int iVar1;
        uint32_t uVar2;
        int iVar4;
        uint32_t in_register_0000008c;

        uint64_t local_38 = (((uint64_t)in_register_0000008c << 32) | (uint32_t)arg5);
        InterfaceCalculateSize(ifType, arg7, arg8, false, false);
        long lVar3 = ifType.operator->();
        if (*(int*)(lVar3 + 112) == 0) {
            iVar4 = *(int*)&overlayPos.field_8;
            lVar3 = ifType.operator->();
            iVar1 = *(int*)(lVar3 + 72);
            lVar3 = ifType.operator->();
            *(int*)(lVar3 + 48) = iVar4 - iVar1 / 2;
            iVar4 = *(int*)&overlayPos.field_12;
            lVar3 = ifType.operator->();
            iVar1 = *(int*)(lVar3 + 76);
            lVar3 = ifType.operator->();
            *(int*)(lVar3 + 52) = iVar4 - iVar1 / 2;
        } else {
            lVar3 = ifType.operator->();
            iVar4 = *(int*)(lVar3 + 112);
            lVar3 = ifType.operator->();
            if (iVar4 == 1) {
                *(int*)&overlayPos.field_4 = *(int*)&overlayPos.field_4 - *(int*)(lVar3 + 76);
                iVar4 = *(int*)overlayPos;
                lVar3 = ifType.operator->();
                iVar1 = *(int*)(lVar3 + 72);
                lVar3 = ifType.operator->();
                *(int*)(lVar3 + 48) = iVar4 - iVar1 / 2;
                uVar2 = *(uint32_t*)&overlayPos.field_4;
                lVar3 = ifType.operator->();
                *(uint32_t*)(lVar3 + 52) = uVar2;
            } else if (*(int*)(lVar3 + 112) == 2) {
                iVar4 = *(int*)&overlayPos.field_16;
                lVar3 = ifType.operator->();
                iVar1 = *(int*)(lVar3 + 72);
                lVar3 = ifType.operator->();
                *(int*)(lVar3 + 48) = iVar4 - iVar1 / 2;
                uVar2 = *(uint32_t*)&overlayPos.field_20;
                lVar3 = ifType.operator->();
                *(uint32_t*)(lVar3 + 52) = uVar2;
                lVar3 = ifType.operator->();
                *(int*)&overlayPos.field_20 = *(int*)&overlayPos.field_20 + *(int*)(lVar3 + 76);
            }
        }
        InterfaceCalculatePosition(ifType, arg7, arg8);
        lVar3 = ifType.operator->();
        InterfaceCalculateSizeAndPosSubcomponents(*((lVar3 + 2000)), ifType, true);
        iVar4 = (int)local_38;
        DrawLayer(ifTypes, -1, iVar4, arg6, arg7 + iVar4, arg8 + arg6, iVar4, arg6, arg9);
        field_2505256.push_back(arg3);
    }

    // 0x100111890
    void Client::LoginDone() {
        int arg1;
        Client* pCVar1;
        uint8_t bVar4;
        LoginManager* pLVar5;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        StockPlayerOffer* this_06;
        ServerConnection* pSVar12;
        Isaac* isaac;
        long lVar14;
        void* arg1_01;
        long lVar16;
        uint8_t* puVar17;
        int* local_168;
        uint8_t local_90[88];

        new (local_90) eastl::string("Success!");
        eastl::string local_e8("Login completed");
        eastl::string local_128("but logindone isn\'t implemented yet");
        TitleScreen::LoginMes(*local_90, local_e8, local_128);
        field_54848 = -1;
        field_54872 = 4294967295;
        javapal::GameShell::m_focus = 1;
        field_54876 = 1;
        field_1115864 = 18446744073709551615;
        bool cVar2 =
            ((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)&TitleScreen::m_loginUser)
                ->empty();
        if ((!cVar2) &&
            (cVar2 =
                 ((basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)&TitleScreen::m_loginPass)
                     ->empty(),
             !cVar2)) {
            pLVar5 = (LoginManager*)(*((m_pMyThis + 2506376))).operator->();
            pLVar5->SaveDevCredentialsToFile();
        }
        InitAndLoadPerAccountData();
        unique_ptr<LoginManager>* local_160 = (unique_ptr<LoginManager>*)&field_2506376;
        pLVar5 = (LoginManager*)(*local_160).operator->();
        pLVar5->ResetLoginCredentials();
        field_53268 = 0;
        field_54156 = 0;
        field_54888 = 0;
        field_52344->Reset();
        ResetIdleTimeRemaining();
        field_8496.ResetOnLogin();
        ChatHistory::SetTimestampMode(0);
        if (((field_55192 != 0) && (field_55192 + 900000 < field_55032)) || (field_52440 == 1)) {
            ChatHistory::ResetHistory();
        }
        field_52352 = 0;
        unsigned long uVar13 = 0;
        void* pvVar15 = nullptr;
        field_52344->SetTargetMode(false);
        field_2508752 = 0;
        field_53112 = 0;
        m_cameraMode = 0;
        field_52920 = pvVar15;
        uint8_t* puVar18 = &field_8152;
        Minimap* pMVar6 = (Minimap*)(*puVar18).operator->();
        pMVar6->SetToggle(0);
        pMVar6 = (Minimap*)(*puVar18).operator->();
        pMVar6->SetLevel(-1);
        uint32_t* puVar7 = (uint32_t*)(*puVar18).operator->();
        *puVar7 = 0;
        long lVar8 = (*puVar18).operator->();
        *(uint32_t*)(lVar8 + 4) = 0;
        field_52344->SetAttackPriorityPlayer(3);
        field_52344->SetAttackPriorityNpc(3);
        m_nPCCount = 0;
        ReceivePlayerPositions::Reset();
        do {
            ((shared_ptr<ClientPlayer>*)field_19216[uVar13])->reset();
            uVar13 = uVar13 + 1;
        } while (uVar13 != 2048);
        uVar13 = 0;
        do {
            ((shared_ptr<ClientNpc>*)field_55272[uVar13])->reset();
            uVar13 = uVar13 + 1;
        } while (uVar13 != 65536);
        m_priorityPlayerId = 4294967295;
        field_7164584.clear();
        field_7164616.clear();
        puVar18 = &field_1120560;
        lVar8 = 0;
        do {
            lVar16 = 0;
            puVar17 = puVar18;
            do {
                lVar14 = 0;
                do {
                    ((puVar17 + lVar14))->clear();
                    pCVar1 = this;
                    lVar14 = lVar14 + 32;
                } while (lVar14 != 3328);
                lVar16 = lVar16 + 1;
                puVar17 = puVar17 + 3328;
            } while (lVar16 != 104);
            lVar8 = lVar8 + 1;
            puVar18 = puVar18 + 346112;
        } while (lVar8 != 4);
        field_2505008.clear();
        ((FriendSystem*)pCVar1->field_52768.operator->())->Reset();
        if (0 < configdecoder::VarpType::m_numDefinitions) {
            uVar13 = 0;
            do {
                groundDecor = (shared_ptr<dash3d::GroundDecor>*)configdecoder::VarpType::List((int)uVar13);
                new (local_90) shared_ptr(groundDecor);
                if (*local_90 != nullptr) {
                    puVar7 = (uint32_t*)(*((Array<int>*)&ClientVarCache::m_varServ))[uVar13];
                    *puVar7 = 0;
                    puVar7 = (uint32_t*)(*((Array<int>*)&ClientVarCache::m_var))[uVar13];
                    *puVar7 = 0;
                }
                uVar13 = uVar13 + 1;
            } while ((long)uVar13 < (long)configdecoder::VarpType::m_numDefinitions);
        }
        pCVar1 = this;
        ((ClientVarValues*)field_52488.operator->())->ResetTempVars();
        pCVar1->field_52468 = 4294967295;
        if (pCVar1->field_53216 != -1) {
            rs2lib::IfType::CloseInterface(pCVar1->field_53216);
        }
        puVar18 = pCVar1->field_53160;
        helpers::GetKeys<int, SubInterface>(&local_188);
        auto arg1_00 = local_188.HeapBeginPtr();
        auto piVar9 = local_188.end();
        if (arg1_00 != piVar9) {
            local_168 = piVar9;
            do {
                *local_90 = puVar18->find(*arg1_00);
                local_e8 = puVar18->end();
                cVar2 = *local_90 != local_e8;
                if (cVar2) {
                    arg1 = *arg1_00;
                    lVar8 = local_90->HeapBeginPtr();
                    piVar9 = local_168;
                    CloseSubinterface(this, arg1, *(int*)(lVar8 + 4), true);
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != piVar9);
        }
        pCVar1 = this;
        field_53216 = -1;
        puVar18->clear();
        new (local_90) shared_ptr();
        pCVar1->field_52424 = *local_90;
        pCVar1->field_52344->Reset();
        auto this_04 = pCVar1->field_2508968.operator->();
        new (local_90) eastl::fixed_vector<int, 12ul>();
        local_e8 = eastl::fixed_vector<int, 12ul>();
        uint64_t local_148 = 0;
        uint64_t uStack_140 = 0;
        uint32_t local_138 = 0;
        local_128 = eastl::fixed_vector<int, 5ul>(&local_148, *5);
        this_04->SetAppearance(local_90, &local_e8, &local_128, 0, -1);
        pCVar1->field_52344->ResetPlayerOpChoices();
        ClientInvCache::DeleteAll();
        pCVar1->field_54832 = 1;
        pvVar15 = nullptr;
        do {
            arg1_01 = pvVar15;
            puVar18 = &pCVar1->field_2506576[(unsigned long)pvVar15];
            *puVar18 = 1;
            pvVar15 = (void*)((long)pvVar15 + 1);
        } while (pvVar15 != (void*)100);
        SendWindowMode(pCVar1);
        pCVar1->field_52544 = arg1_01;
        new (local_90) shared_ptr();
        pCVar1->field_52552 = *local_90;
        new (local_90) shared_ptr();
        pCVar1->field_52568.fill(*local_90);
        new (local_90) shared_ptr();
        pCVar1->field_52632 = *local_90;
        new (local_90) shared_ptr();
        pCVar1->field_52648.fill(*local_90);
        unique_ptr<rs2lib::StockPlayerOffer>* this_05 = (unique_ptr<rs2lib::StockPlayerOffer>*)
            std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer>, 8ul>::begin();
        unique_ptr<rs2lib::StockPlayerOffer>* puVar10 =
            (unique_ptr<rs2lib::StockPlayerOffer>*)std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer>, 8ul>::end();
        for (; this_05 != puVar10; this_05 = this_05 + 8) {
            this_06 = (StockPlayerOffer*)operator new(32);
            new (this_06) rs2lib::StockPlayerOffer();
            this_05->reset(this_06);
        }
        pCVar1->field_52848.reset(nullptr);
        pLVar5 = (LoginManager*)(*local_160).operator->();
        auto plVar11 = pLVar5->GetAuthWrapper();
        if (plVar11 != nullptr) {
            pSVar12 = (ServerConnection*)pCVar1->field_19120.operator->();
            isaac = pSVar12->GetOutgoingEncryption();
            *local_90 = shared::ClientMessage::MakeClientMessage(0, *isaac);
            bVar4 = (**(void (**)(...))(*plVar11 + 440))(plVar11);
            ((local_90 + 8))->p1<shared::LoginProt::ID>((unsigned int)bVar4);
            bVar4 = (**(void (**)(...))(*plVar11 + 432))(plVar11);
            ((local_90 + 8))->p1<shared::LoginProt::ID>((unsigned int)bVar4);
            pSVar12 = (ServerConnection*)pCVar1->field_19120.operator->();
            pSVar12->SendClientMessage(*local_90);
        }
        pCVar1->field_8452 = 0;
    }

    // 0x100112250
    void Client::ReconnectDone() {
        shared_ptr<ClientPlayer>* this_01;
        long lVar2;
        uint8_t* puVar3;

        field_53268 = 0;
        field_52344->Reset();
        auto this_00 = field_8152.operator->();
        unsigned long uVar4 = 0;
        this_00->SetToggle(0);
        auto puVar1 = field_8152.operator->();
        *puVar1 = 0;
        do {
            local_38 = shared_ptr();
            this_01 = &field_19216[uVar4];
            *this_01 = local_38;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 2048);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        field_52016 = local_38;
        uVar4 = 0;
        do {
            lVar2 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_55272[uVar4])->end();
            if (lVar2 != 0) {
                *(uint32_t*)(lVar2 + 328) = 4294967295;
                *(uint8_t*)(lVar2 + 332) = 0;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 != 65536);
        ClientInvCache::DeleteAll();
        SetMainState(30);
        uVar4 = 0;
        do {
            puVar3 = &field_2506576[uVar4];
            *puVar3 = 1;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 100);
        SendWindowMode();
    }

    // 0x100112460
    void Client::InitAndLoadPerAccountData() {
        auto local_40 = eastl::to_string(field_52008);
        GameShell3Cache::SetLoggedInAccountId(local_40);
        GameShell3Cache::CreateCache();
        m_highlightManager->ResetAll();
        m_highlightManager->LoadFromFiles();
        m_lootTrackerSaveHandler->Init();
        auto pCVar1 = field_52488.operator->();
        pCVar1->ResetForNewLogin();
        pCVar1 = (ClientVarValues*)field_52488.operator->();
        pCVar1->LoadPermVars();
        auto pOVar2 = field_54720.operator->();
        pOVar2->ResetAll();
        pOVar2 = (ObjTagManager*)field_54720.operator->();
        pOVar2->LoadTags();
    }

    // 0x1001171a0
    void Client::LocChangeCreate(int arg1, int arg2, int arg3, LocLayer locLayer, int arg5, int arg6, int arg7,
                                 unsigned char arg8, int arg9, int arg10) {
        uint64_t* puVar2;
        int* piVar3;
        long lVar4;
        LocChange* locChange;
        uint64_t local_38;

        uint8_t* this_00 = &field_2505008;
        auto local_70 = this_00->begin();
        auto local_68 = this_00->end();
        unsigned long local_58 = (unsigned long)(unsigned int)arg2;
        eastl::find_if<eastl::ListIterator<LocChange, LocChange*, LocChange&>,
                       int->LocChangeCreate(int, int, LocLayer, int, int, int, unsigned char, int, int)::__19>(
            (ListIterator<LocChange, LocChange*, LocChange&>*)&local_38,
            (ListIterator<LocChange, LocChange*, LocChange&>*)&local_70, (__19*)&local_68);
        LocChange local_b8 = this_00->end();
        if (local_38 == local_b8 != '\0') {
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
            this_00->emplace_back<LocChange>(local_b8);
            local_b8 = this_00->end();
            puVar2 = (uint64_t*)--local_b8;
            local_38 = *puVar2;
            piVar3 = (int*)*local_38;
            *piVar3 = arg1;
            lVar4 = *local_38;
            *(char*)(lVar4 + 12) = (char)(unsigned long)locLayer;
            lVar4 = *local_38;
            *(int*)(lVar4 + 4) = (int)local_58;
            lVar4 = *local_38;
            *(int*)(lVar4 + 8) = arg3;
            lVar4 = *local_38;
            *(uint32_t*)(lVar4 + 40) = 4294967295;
            locChange = (LocChange*)*local_38;
            LocChangeSetOld(*locChange);
        }
        lVar4 = *local_38;
        *(int*)(lVar4 + 28) = arg5;
        lVar4 = *local_38;
        *(int*)(lVar4 + 36) = arg6;
        lVar4 = *local_38;
        *(int*)(lVar4 + 32) = arg7;
        lVar4 = *local_38;
        *(int*)(lVar4 + 48) = arg9;
        lVar4 = *local_38;
        *(int*)(lVar4 + 52) = arg10;
        lVar4 = *local_38;
        *(unsigned char*)(lVar4 + 44) = arg8;
    }

    // 0x100117380
    uint32_t Client::LocChangeAnim(int arg1, int arg2, int arg3, LocLayer locLayer, int arg5) {
        long lVar2;
        ListIterator<LocChange, LocChange*, LocChange&> local_50[8];

        uint8_t* this_00 = &field_2505008;
        auto local_48 = this_00->begin();
        auto local_40 = this_00->end();
        eastl::find_if<eastl::ListIterator<LocChange, LocChange*, LocChange&>,
                       int->LocChangeAnim(int, int, LocLayer, int)::__20>(
            local_50, (ListIterator<LocChange, LocChange*, LocChange&>*)&local_48, (__20*)&local_40);
        auto local_58 = this_00->end();
        uint32_t uVar1 = *local_50 != local_58;
        if ((char)uVar1 != '\0') {
            lVar2 = **local_50;
            *(int*)(lVar2 + 40) = arg5;
        }
        return uVar1;
    }

    // 0x10013b6c0
    void Client::MainLoop()::$_2::operator()(BaseApp* baseApp) const {
        uint64_t extraout_var;
        basic_string<char, BucketAllocatorEASTL> local_40;
        eastl local_28;

        uint8_t uVar1 = baseApp->GetInputHAL();
        if (((Input*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->IsOnScreenKeyboardVisible() == '\0') {
            if (*this != (__2)0) {
                eastl::destruct<highlight::NpcUID*>(&local_28);
                local_40 = eastl::basic_string<char, BucketAllocatorEASTL>("", &local_28);
                ((Input*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))
                    ->ShowOnScreenKeyboard(0, &local_40, -1, false);
            }
        } else if (*this == (__2)0) {
            jag::input::Input::HideOnScreenKeyboard();
        }
    }

    // 0x100143df0
    uint32_t Client::ProcessSideBarRequests()::$_4::operator()(sidebars::SideBarData& sideBarData) const {
        return *field_0 == sideBarData.field_0;
    }

    // 0x100143e50
    uint32_t Client::ProcessSideBarRequests()::$_5::operator()(sidebars::SideBarData& sideBarData) const {
        return field_0 == sideBarData.field_0;
    }

    // 0x100146660
    uint32_t Client::StartRebuild(int, int, bool)::$_6::operator()(LocChange& locChange) const {
        unsigned int uVar1 = *(int*)&locChange.field_4 - *(int*)this;
        *(unsigned int*)&locChange.field_4 = uVar1;
        unsigned int uVar2 = *(int*)&locChange.field_8 - *(int*)(this + 4);
        *(unsigned int*)&locChange.field_8 = uVar2;
        return 103 < (int)uVar2 || (103 < (int)uVar1 || (int)(uVar1 | uVar2) < 0);
    }

    // 0x100147ce0
    void Client::Vibrate(hal::Haptics::Preset)::$_7::operator()(BaseApp* baseApp) const {
        ((Haptics*)Instance())->Vibrate(field_0);
    }

    // 0x10014adb0
    unsigned int Client::SteamShop()::$_9::operator()() const {
        long* plVar1;
        eastl::string local_50;

        (**(void (**)(...))(*field_0 + 504))();
        unsigned int uVar2 = jag::auth::TokenAuthLoginHandler::IsFinished((**(void (**)(...))(*field_0 + 512))());
        if ((char)uVar2 != '\0') {
            plVar1 = field_0;
            local_50 = eastl::string("store/runescape/keys");
            (**(void (**)(...))(*plVar1 + 144))(plVar1, 10, &local_50);
        }
        return uVar2 ^ 1;
    }

    // 0x10014f1d0
    unsigned long Client::ClearHookQueueMouseEvents(bool)::$_14::operator()(HookReq& hookReq) const {
        long lVar2;
        uint64_t unaff_R14;
        unsigned long uVar3;

        if (hookReq.field_24 == '\0') {
        LAB_10014f225:
            uVar3 = 0;
        } else {
            if (*this != (__14)0) {
                lVar2 = hookReq.field_32.operator->();
                if (hookReq == (*((lVar2 + 1360))) == '\0')
                    goto LAB_10014f225;
            }
            uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
            if (*this == (__14)0) {
                lVar2 = hookReq.field_32.operator->();
                *(uint8_t*)(lVar2 + 2024) = 0;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100153bb0
    uint32_t Client::LocChangeCreate(int, int, int, LocLayer, int, int, int, unsigned char, int,
                                     int)::$_19::operator()(LocChange& locChange) const {
        if (((*(int*)locChange == *(int*)this) && (*(int*)&locChange.field_4 == *(int*)(this + 4))) &&
            (*(int*)&locChange.field_8 == *(int*)(this + 8))) {
            return (__19)locChange.field_12 == this[12];
        }
        return 0;
    }

    // 0x100153d00
    uint32_t Client::LocChangeAnim(int, int, int, LocLayer, int)::$_20::operator()(LocChange& locChange) const {
        if (((*(int*)locChange == *(int*)this) && (*(int*)&locChange.field_4 == *(int*)(this + 4))) &&
            (*(int*)&locChange.field_8 == *(int*)(this + 8))) {
            return (__20)locChange.field_12 == this[12];
        }
        return 0;
    }

    // 0x100153d30
    bool Client::LocChangePostBuildCorrect()::$_21::operator()(LocChange& locChange) const {
        return field_52 != -1;
    }

    // 0x100153d40
    uint64_t Client::LocChangeDoQueue()::$_22::operator()(LocChange& locChange) const {
        bool cVar2;

        Client* this_00 = field_0;
        int iVar1 = *(int*)((long)&locChange.field_48 + 4);
        if (0 < iVar1) {
            *(int*)((long)&locChange.field_48 + 4) = iVar1 - 1;
        }
        if (*(int*)((long)&locChange.field_48 + 4) == 0) {
            if ((*(int*)&locChange.field_16 < 0) ||
                (cVar2 = ClientBuild::ChangeLocAvailable(*(int*)&locChange.field_16, *(int*)&locChange.field_24),
                 cVar2)) {
                LocChangeUnchecked(this_00, *(int*)locChange, (unsigned int)(uint8_t)locChange.field_12,
                                   *(int*)&locChange.field_4, *(int*)&locChange.field_8, *(int*)&locChange.field_16,
                                   *(int*)&locChange.field_20, *(int*)&locChange.field_24, *(int*)&locChange.field_40);
                return 1;
            }
        } else {
            if (0 < *(int*)&locChange.field_48) {
                *(int*)&locChange.field_48 = *(int*)&locChange.field_48 - 1;
            }
            if ((((*(int*)&locChange.field_48 == 0) && (0 < *(int*)&locChange.field_4)) &&
                 (*(int*)&locChange.field_8 < 103)) &&
                (((0 < *(int*)&locChange.field_8 && (*(int*)&locChange.field_4 < 103)) &&
                  ((*(int*)&locChange.field_28 < 0 ||
                    (cVar2 = ClientBuild::ChangeLocAvailable(*(int*)&locChange.field_28, *(int*)&locChange.field_36),
                     cVar2)))))) {
                LocChangeUnchecked(this_00, *(int*)locChange, (unsigned int)(uint8_t)locChange.field_12,
                                   *(int*)&locChange.field_4, *(int*)&locChange.field_8, *(int*)&locChange.field_28,
                                   *(int*)&locChange.field_32, *(int*)&locChange.field_36, *(int*)&locChange.field_40);
                *(uint32_t*)&locChange.field_48 = 4294967295;
                iVar1 = *(int*)&locChange.field_16;
                if ((*(int*)&locChange.field_28 == iVar1) && (iVar1 == -1)) {
                    return 1;
                }
                if (((*(int*)&locChange.field_28 == iVar1) &&
                     (*(int*)&locChange.field_32 == *(int*)&locChange.field_20)) &&
                    (*(int*)&locChange.field_36 == *(int*)&locChange.field_24)) {
                    return 1;
                }
            }
        }
        return 0;
    }

} // namespace jag::oldscape

namespace jag::graphics {
    // 0x1000e5b10: ClippingRectangle::ClippingRectangle() has the same machine code as oldscape::rs2lib::CoordZoneSource::Unset()

} // namespace jag::graphics

namespace jag::game {
    // 0x1000e5b50: PlayerModelWearSlot::operator==(PlayerModelWearSlot const&) const has the same machine code as oldscape::rs2lib::CoordMapSquare::operator==(oldscape::rs2lib::CoordMapSquare const&) const

} // namespace jag::game

namespace jag::oldscape::jagex3 {
    // 0x1000e5b50: Js5RequestKey::operator==(Js5RequestKey const&) const has the same machine code as rs2lib::CoordMapSquare::operator==(rs2lib::CoordMapSquare const&) const

} // namespace jag::oldscape::jagex3

namespace jag::oldscape::graphics {
    // 0x100102480
    unsigned int TransparencyToAlpha(int arg1) {
        return ~arg1 & 255;
    }

} // namespace jag::oldscape::graphics
