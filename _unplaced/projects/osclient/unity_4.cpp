// _unplaced/projects/osclient/unity_4.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "libs/clientstream/standard/standard_ClientStream_impl.h"
#include "libs/console/Command.h"
#include "libs/console/ConsoleArgs.h"
#include "libs/game/runetek5/config/iftype/cutscenes/Cutscene2DElements.h"
#include "libs/game/runetek5/config/vartype/BaseVarType.h"
#include "libs/game/runetek5/config/vartype/VarType.h"
#include "libs/game/runetek5/config/vartype/constants/VarDomainType.h"
#include "libs/graphics/runetek7/particles/modules/FlowModule.h"
#include "libs/graphics/runetek7/particles/modules/VisualModules.h"
#include "libs/graphics/runetek7/renderer/Drawable.h"
#include "libs/hal/render/Render.h"
#include "libs/jtl/allocator/Bucket.h"
#include "libs/jtl/allocator/BucketAllocator.h"
#include "libs/jtl/multibuffer/MultiBuffer.h"
#include "libs/logger/Logger.h"
#include "libs/oldscape/clientlib/auth/GameToken.h"
#include "libs/oldscape/jagex3/dash3d/AnimFrameSet.h"
#include "libs/oldscape/jagex3/dash3d/DeferredHighlight.h"
#include "libs/oldscape/jagex3/dash3d/ModelSource.h"
#include "libs/oldscape/jagex3/javapal/loading/LoadingScreen.h"
#include "libs/oldscape/jagex3/sound/NXTPCMPlayer.h"
#include "libs/testframework/gaia/GaiaSinks.h"
#include "libs/ui/components/Component.h"
#include "projects/osclient/loottracker/LootTrackerUtils.h"
#include "projects/osclient/minimenu/Minimenu.h"

namespace jag {
    // 0x1000296e0, 48 bytes, inline, placed by nothing (unplaced)
    // bool operator==<oldscape::rs2lib::worldmap::WorldmapAreaMetadata, oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> const&, shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(shared_ptr<oldscape::rs2lib::IfType> const&,
   shared_ptr<oldscape::rs2lib::IfType> const&) */

    bool operator==(shared_ptr* param_1, shared_ptr* param_2) {
        long lVar1;
        long lVar2;

        lVar1 = end();
        lVar2 = param_1->end();
        return lVar1 == lVar2;
    }

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    BucketManager::StaticDestructor::StaticDestructor();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    BucketManager::SafeStaticDestructor::SafeStaticDestructor();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    LoadingScreenScript::SpriteLayer::~SpriteLayer();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    LoadingScreenScript::ChildAnimLayer::~ChildAnimLayer();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    LoadingScreenScript::RectLayer::~RectLayer();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    BucketAllocatorEASTL::BucketAllocatorEASTL(char const*);

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    SafeBucketAllocatorEASTL::SafeBucketAllocatorEASTL(char const*);

    // 0x100057990, 80 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::worldmap::WorldmapAreaMetadata* placement_new<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(void*)
    WorldmapAreaMetadata* placement_new<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(void* param_1) {
        *(undefined8*)((long)param_1 + 128) = 0;
        *(undefined8*)((long)param_1 + 136) = 0;
        *(undefined8*)((long)param_1 + 112) = 0;
        *(undefined8*)((long)param_1 + 120) = 0;
        *(undefined8*)((long)param_1 + 96) = 0;
        *(undefined8*)((long)param_1 + 104) = 0;
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        oldscape::rs2lib::worldmap::WorldmapAreaMetadata::WorldmapAreaMetadata(param_1);
        return param_1;
    }

    // 0x1000579e0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>* placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>, int, oldscape::rs2lib::worldmap::WorldmapAreaMetadata*&>(void*, int&&, oldscape::rs2lib::worldmap::WorldmapAreaMetadata*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>, int,
                       oldscape::rs2lib::worldmap::WorldmapAreaMetadata*&>(void* param_1, int* param_2,
                                                                           WorldmapAreaMetadata** param_3) {
        ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::game {
    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    BaseVarTypeLong::~BaseVarTypeLong();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DelayedVariable::DelayedVariable();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    BaseVarTypeString::~BaseVarTypeString();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    BaseVarTypeInteger::~BaseVarTypeInteger();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    VarDomainTypeNormal::~VarDomainTypeNormal();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    BaseVarTypeCoordFine::~BaseVarTypeCoordFine();

    // 0x100049400: the linker folded this into std::__tuple_leaf<1ul, eastl::fixed_string<char, 256, true, eastl::allocator>, false>::~__tuple_leaf(), which has identical code
    Cutscene2DAudioElement::~Cutscene2DAudioElement();

    // 0x100049400: the linker folded this into std::__tuple_leaf<1ul, eastl::fixed_string<char, 256, true, eastl::allocator>, false>::~__tuple_leaf(), which has identical code
    Cutscene2DSubtitleElement::~Cutscene2DSubtitleElement();

} // namespace jag::game

namespace jag::anim_ns {
    // 0x100f30f20, 272 bytes, __data
    bend1_imgdata = {
        1196314761,  169478669,  218103808,   1380206665,  419430400,   268435456,   1544,        -723066112,
        171,         1094994391, 1674262612,  -1741512608, -812752,     -15983643,   -127869137,  -955358401,
        101058175,   1516905990, -98409888,   1005967839,  862830492,   768934679,   49827209,    -868409497,
        -479612735,  1521108539, -97885598,   -519714337,  -1201951349, 1504341216,  99946770,    -367411323,
        -1571182069, -537778265, -1948183587, 1350044485,  1231202788,  341303900,   398948222,   -1571116474,
        -1947824217, 1780014329, 774157864,   -1659384575, 1789466975,  -802191863,  -1775598878, 403409424,
        -1665377952, 103890933,  1873662818,  1595350664,  2092821425,  893378947,   112105554,   793802582,
        -1832636663, 1803702434, -598844162,  1147428942,  -330946035,  -1531938006, 244264,      -901701559,
        -272880417,  0,          1145980233,  -2107620690,
    };

    // 0x100f31030, 384 bytes, __data
    ne32_imgdata = {
        1196314761,  169478669,   218103808,   1380206665,  369098752,   536870912,   1544,        -2003364352,
        139,         1196122630,  16711748,    -1593900801, 9676733,     1227751680,  1213481284,  1003793863,
        273728110,   -720777211,  303533888,   453420603,   184881398,   848594038,   -31429870,   918555428,
        -1425211303, 692622152,   -40762073,   -1717961662, -1685235737, -114578525,  1995443202,  1597662159,
        -1609052544, 1195415,     -1122580288, 1460280695,  1542968639,  -532577994,  -581567640,  1042354855,
        -1017520516, -1202656338, -1480666196, 220129939,   -2009024874, -1385582753, 1385944928,  -1377829712,
        -1100145611, 271367083,   447554322,   -1697485066, -775857443,  597379286,   -1260392156, -1736714198,
        -278125870,  -577041066,  -633194218,  -552839536,  1458204070,  383621893,   1765049415,  2105682766,
        -800742945,  1578675679,  750774895,   493101631,   1068554601,  -266442637,  -1883171398, -1881508529,
        -1152704238, -1226788141, -611928643,  -301279498,  -1205117990, 1893035883,  -508895521,  -1051345474,
        -1051345508, -1021985380, -1021985316, -1055539748, -1055539822, -1016742510, -1016742446, -1050296878,
        2079178138,  -1532405313, -221123479,  64,          1313163520,  1614982724,  130,         0,
    };

    // 0x100f311b0, 320 bytes, __data
    bend2_imgdata = {
        1196314761,  169478669,   218103808,   1380206665,  503316480,   301989888,   1544,        1861372928,
        16777433,    1094994183,  -976795564,  -1039516271, 1736773696,  -1651940027, 616815760,   1151323846,
        -1979649701, 2015584386,  1299909415,  -785381470,  1327172434,  -2111265951, 275478064,   -1001793028,
        -986510585,  510638028,   -1450815232, -502305054,  -1803986123, -1051635815, -733352291,  998477995,
        -2086686659, -1488628915, -1023602319, -1871207341, -1000432192, -1648246675, -2128234039, 1988797133,
        -294198787,  1386783787,  51229297,    -1379852786, 769259572,   940727077,   -457675366,  -1221281312,
        -758423470,  1742894800,  2003701035,  -1777425777, 1847131164,  626722495,   844000013,   -2021569831,
        -676822109,  796657249,   -1062216802, 1963879061,  2004494051,  -198933094,  1239672817,  -1682472870,
        1333926196,  -895764560,  -478870251,  2122512940,  -151739261,  365034964,   -1483233922, -736798930,
        2065239715,  -191313859,  1000800169,  -2074638856, -1810864873, 0,           1145980233,  -2107620690,
    };

    // 0x100f312f0, 320 bytes, __data
    bend2b_imgdata = {
        1196314761,  169478669,   218103808,   1380206665,  503316480,   301989888,   1544,        1861372928,
        217,         1094994428,  1674004564,  403906656,   -1073837925, -1912503428, -24902915,   -1986026861,
        -480015524,  1205452991,  1815113871,  -1852903206, -1734666522, 1987575432,  1877413629,  -1304048421,
        475620377,   -605781861,  -1693705021, 1541837366,  825633970,   -454034155,  -689049470,  1164205101,
        1898255125,  120644731,   2083677891,  -389696949,  1848059326,  957919945,   -501444754,  -1984112544,
        1687347004,  -661022287,  -899209345,  -1956342045, -1019223453, 1896843225,  -1063162832, 1817920695,
        -537514394,  1899665873,  -641363381,  -320802951,  425215843,   -861508426,  1817789623,  -537018129,
        -1676674872, 453208511,   1090532611,  -899928169,  -562514174,  1778781724,  -619267071,  -1610779687,
        52163386,    -1596063699, -906277298,  -2101335232, 1544468435,  2132351487,  -952132559,  11284674,
        1431481600,  -1700762939, 130,         1313163520,  1614982724,  130,         0,           0,
    };

    // 0x100f31430, 128 bytes, __data
    we32_imgdata = {
        1196314761, 169478669,  218103808,  1380206665,  536870912,   100663296,   1544,       -1668308480,
        223,        1094994233, 1674520660, -1067444128, -887527240,  -1573604737, -683075472, 2092634883,
        1090511235, 1087570054, -590675641, 90500313,    -1671775701, 820421034,   1952258194, -1502019581,
        1699237126, 40838,      1162412032, 1118717006,  33376,       0,           0,          0,
    };

    // 0x100f314b0, 1760 bytes, __data
    fill_imgdata = {
        1196314761,  169478669,   218103808,   1380206665,  469827584,   -33554432,   1544,        -1173362688,
        100663517,   1094994333,  -304449452,  477213149,   -788197327,  -1853713349, -1593574205, 1260678307,
        1573499989,  494459648,   -2093778688, -244727813,  -169346563,  2091484663,  1841135356,  -35771039,
        -1405126758, 2142725057,  1533567692,  -1632849152, 2069457121,  -104645433,  1879064218,  472964503,
        -1730188435, 120338543,   -1015620160, 1034859632,  -1327395485, -629735396,  -1093549299, -2039116810,
        -603950397,  1191982949,  -701768949,  30084634,    819824496,   -1407471588, -476701641,  1834746379,
        -1039725513, 236485403,   21361099,    -2045004626, 2106433795,  -119175412,  -648609598,  -1333673203,
        -1014604090, -2140046222, -511577429,  795035712,   -1103535677, -1189756864, -1675595584, -1327390799,
        -534487268,  1891662247,  -1926130656, -871476233,  -530861906,  -1624837908, -2117911754, -1103838800,
        -1842661355, 1321386973,  -2121688144, 1276882947,  60169229,    409912182,   2047727630,  -1066220666,
        1892600942,  -540250432,  60169268,    -2039058675, -26284797,   481354150,   867399784,   -210278372,
        -444134089,  -1650736320, -1682226975, 741894591,   -320988665,  -572913908,  1640189436,  1727057977,
        -288343961,  236613606,   931561931,   1988215611,  1892908855,  -1137439144, -1274144295, -2036598341,
        -509578557,  -1603219763, 887082461,   218338844,   59143791,    -1493274899, 1746710753,  473150328,
        938702696,   1088784141,  -509764669,  -1080313024, 120338537,   216849946,   -52569593,   962707677,
        -823707808,  -576687922,  470736845,   1937114006,  118287590,   -956162598,  1859995395,  -708330410,
        -1881960525, -2045779698, -526667773,  -474684436,  58087019,    -1682963578, 656369155,   -888339906,
        7389294,     2107511670,  962707611,   118228716,   -1494468768, -2027145191, 14778589,    886933228,
        -1327134973, -2145636325, 1721479389,  1981591776,  -1341946365, 215184923,   1858311708,  1979740352,
        -2120585533, 232288963,   1858080280,  1882410456,  29036120,    336855491,   235301307,   1614242251,
        1639645240,  1640025399,  201780281,   -331915257,  741874086,   -511648377,  -578360320,  -444136652,
        472914864,   -1682907776, 481353830,   59114358,    934508648,   -1327134973, 940587803,   2067236480,
        -1906806733, -2130462874, -1283954685, -444136649,  272332392,   931561528,   1483748219,  1089329550,
        -568721184,  1640025580,  62285369,    2020082561,  -2029832269, 248879333,   -509604348,  470605517,
        994468758,   -2038417392, 1882422071,  -321286568,  436265024,   -1060246306, -1301923487, -1341947645,
        526893979,   890087182,   470293947,   196311144,   -1209268452, 62351010,    1863123841,  -1864138378,
        -321620307,  -1603264394, 1882115553,  -1831488484, 68083098,    -645786610,  -1228698107, -609004838,
        578928769,   1908456240,  1785419488,  940587894,   392560720,   1792871992,  -2129736369, 236962051,
        1858966493,  -1696076680, -1065239804, 929546369,   1873004290,  -1313143527, 1058242935,  -1225922052,
        1155272419,  -624213792,  1886503103,  -2116232627, 1746667739,  940603223,   -1690194674, -2128383941,
        518696195,   897697538,   1845982055,  1302360101,  954222045,   -294861140,  235195840,   150710452,
        -1797978340, -1648878131, 1962312128,  -1864138457, 62501402,    -801631177,  1881534106,  909332508,
        43442295,    -573384185,  1774423556,  -603003196,  -578756524,  1640013752,  -1180242889, 940947203,
        686700384,   -1156720528, -1911021775, 175866966,   -39619044,   544262605,   45015404,    2104024455,
        1746668275,  703576129,   -1267809407, 235256253,   -1176756300, 1189885973,  -530605109,  -1111364800,
        1858306395,  138263476,   -1204066276, -663737477,  263673485,   120390529,   235237367,   -152645189,
        -576688094,  45358560,    1902697863,  -801611269,  1511977066,  -1267809407, 472989111,   393753448,
        929153197,   415161178,   -1139231730, -1327475057, 1869442331,  198838028,   1881885150,  -1231647272,
        -1392277953, 363196165,   994503736,   -2117917733, -747142474,  -1552540662, -510399083,  -71218368,
        -1156709015, -889796911,  -529612688,  -2029865699, -77502243,   929052773,   -2124767504, -1347129661,
        -1340329155, -1386776549, 1513578944,  236568279,   -1346630184, 464576598,   217017197,   -569971705,
        -663737511,  2142606989,  58065798,    940944879,   -2101655828, 109576417,   1506503423,  -609798122,
        -1279022387, -2145636325, 962665701,   -578354613,  472914864,   363277312,   -578360264,  1610670464,
        1640017209,  201780279,   1774911495,  1639648773,  29556791,    850710104,   -662588132,  -1023296755,
        -294469631,  -1015669745, 59113582,    -437674832,  4103736,     1614242235,  -833093576,  929153212,
        945817324,   1448725248,  527033238,   464575896,   738204720,   -1327464857, 805533211,   753238044,
        -72233169,   -331914233,  117902342,   -833085641,  929153266,   -1070633474, -602000272,  489855868,
        1981840827,  1746677763,  -174280646,  -663829631,  879804429,   -310264804,  -22252086,   1611066368,
        -261304264,  -651219434,  -1290278223, 1088520219,  -1197751901, -322474835,  7260255,     105710470,
        -1078305060, -1393634658, -1022894590, 598850305,   -531661023,  201331048,   -1362922681, 1858306394,
        389348352,   -1228501480, 177469491,   -965554368,  -1710211115, 1891692250,  -1665717248, -2112891535,
        809744006,   1490747420,  -1707646770, 1891708633,  1730995200,  1821186992,  3694759,     -667707790,
        1538664077,  956308528,   1189878219,  405920515,   -442728434,  2040755724,  118233837,   108187200,
        1991823803,  537101838,   -2046871197, 1293660262,  945878891,   -641961472,  1497204365,  778137077,
        -543424257,  -99928528,   2573,        1162412032,  1118717006,  33376,       0,           0,
    };

} // namespace jag::anim_ns

namespace jag::oldscape::highlight {
    // 0x100015cb0, 80 bytes, inline, placed by nothing (unplaced)
    // bool IsNumber<eastl::string >(eastl::string const&)
    bool IsNumber<eastl::string>(basic_string* param_1) {
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;
        char* pcVar5;
        bool bVar6;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
            pcVar4 =
                std::find_if<char const*, IsNumber<eastl::string>(eastl::stringconst&)::_lambda(unsigned char) _1_>(
                    uVar2, uVar3);
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            bVar6 = pcVar4 == pcVar5;
        } else {
            bVar6 = false;
        }
        return bVar6;
    }

    // 0x100015e70, 96 bytes, inline, placed by nothing (unplaced)
    // bool IsNumber<std::string >(std::string const&)
    /* bool IsNumber<std::string >(std::string const&) */

    bool IsNumber<std::string>(string* param_1) {
        bool bVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 local_28;
        undefined8 local_20;

        if (std::string::empty(param_1) == '\0') {
            uVar3 = std::string::begin(param_1);
            uVar4 = std::string::end(param_1);
            local_28 =
                std::find_if<std::__wrap_iter<char const*>,
                             IsNumber<std::string>(std::string_const&)::_lambda(unsigned char) _1_>(uVar3, uVar4);
            local_20 = std::string::end(param_1);
            bVar2 = std::operator==((__wrap_iter*)&local_28, (__wrap_iter*)&local_20);
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x100016230, 80 bytes, inline, placed by nothing (unplaced)
    // bool IsNumber<eastl::basic_string<char, BucketAllocatorEASTL> >(eastl::basic_string<char, BucketAllocatorEASTL> const&)
    bool IsNumber<eastl::basic_string<char, BucketAllocatorEASTL>>(basic_string* param_1) {
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;
        char* pcVar5;
        bool bVar6;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
            pcVar4 =
                std::find_if<char const*,
                             IsNumber<eastl::basic_string<char, BucketAllocatorEASTL>>(
                                 eastl::basic_string<char, BucketAllocatorEASTL> const&)::_lambda(unsigned char) _1_>(
                    uVar2, uVar3);
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            bVar6 = pcVar4 == pcVar5;
        } else {
            bVar6 = false;
        }
        return bVar6;
    }

    // 0x100016cc0, 48 bytes, inline, placed by nothing (unplaced)
    // GetMapSquareIndex(rs2lib::CoordMapSquare const&)
    void GetMapSquareIndex(CoordMapSquare* param_1) {
        int iVar1;
        int iVar2;

        iVar1 = param_1->GetX();
        iVar2 = param_1->GetZ();
        GetMapSquareIndex(iVar1, iVar2);
    }

    // 0x100039190, 32 bytes, inline, placed by nothing (unplaced)
    // IsNumber<eastl::string >(eastl::string const&)::{lambda(unsigned char)#1}::operator()(unsigned char) const
    /* IsNumber<std::string >(std::string const&)::{lambda(unsigned
   char)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned char) const */

    bool IsNumber<std::string>(std::string_const&)::{
        lambda(unsigned char) #1
    }
    ::operator()(uchar param_1) {
        undefined3 in_register_00000031;

        return isdigit(CONCAT31(in_register_00000031, param_1)) == 0;
    }

} // namespace jag::oldscape::highlight

namespace jag::oldscape::dash3d {
    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    UniqueModelSource::~UniqueModelSource();

    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    DeferredModelHighlight::~DeferredModelHighlight();

    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    DeferredGroundFineHighlight::~DeferredGroundFineHighlight();

    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    DeferredGroundGridHighlight::~DeferredGroundGridHighlight();

    // 0x10002afb0: the linker folded this into highlight::NpcUID::NpcUID(int, int), which has identical code
    AnimateBaseOperation::SeparatedIndexCount::SeparatedIndexCount(unsigned long, unsigned long);

} // namespace jag::oldscape::dash3d

namespace jag::spinner_ns {
    // 0x100f31b90, 528 bytes, __data
    SpinBg_imgdata = {
        1196314761,  169478669,   218103808,   1380206665,  1073741824,  1073741824,  1544,        1902750208,
        16777438,    1094994387,  -304449452,  1284489177,  -238675887,  911842767,   -1571536463, 1458079153,
        153752084,   -1861615362, -1589361528, 1128992019,  303277735,   1250098949,  631382358,   580156964,
        -1346099045, -1933856696, -919370471,  1389327204,  -207854376,  -598502530,  -277644391,  -409016516,
        1412685437,  -1634961586, -482984603,  953581115,   -2135922919, 461928695,   1668121912,  -961851082,
        -967177127,  585211394,   1428791990,  18471808,    -332937402,  -315123716,  1795199372,  -1482890498,
        10641016,    -1782500787, -1452875752, -1815750394, -1351425036, -877892609,  856848264,   1527299071,
        1892092848,  26382085,    -845675250,  -1962903716, 773618345,   -658823991,  -1013419122, 913544870,
        1216923106,  379365707,   -1724172713, 750087887,   1655578261,  1893528738,  2117222152,  -1829124143,
        1803764531,  634204287,   234434332,   -917796008,  2082632448,  1167236800,  -132995864,  255861549,
        173951511,   1651566019,  -534984359,  1502481933,  290807258,   -198732954,  1312106353,  1519464789,
        1419301864,  910236969,   -440144299,  684851738,   -1740658285, -2019486389, -2060667427, -1593874013,
        1547349183,  -1149221457, -1892651879, 943987369,   -1006947630, 226451774,   -284198482,  1868667186,
        -964951539,  1362498947,  403034778,   -1142522144, 1420870429,  -1401393030, 58004349,    168842662,
        1764140382,  -1746953942, -632095628,  386559621,   -1036346464, -962889585,  2147467095,  136348172,
        -2113396606, 545392672,   136348168,   -2113396606, 545392672,   400599560,   -1953643393, 396144071,
        0,           1145980233,  -2107620690, 0,
    };

    // 0x100f31da0, 256 bytes, __data
    Spin1_imgdata = {
        1196314761,  169478669,  218103808,  1380206665,  1073741824,  1073741824,  1544,       1902750208,
        222,         1094994373, -304449452, 1091449301,  -511700927,  -1606711937, -964143453, -586525687,
        -2110205045, 2055471556, 928653359,  -1422645040, 586434896,   626944482,   197491361,  653154303,
        -644664389,  192925785,  -886699435, -1507676869, -236385205,  22545807,    -334831533, 95427969,
        -73125618,   -887089329, 1984471355, 83212020,    -1743601586, 1701744839,  -659858466, -2004980589,
        -2121528399, 1788918738, 119863301,  1738813718,  735512537,   -1743952748, 127943425,  -1317633548,
        1060505214,  1725891647, 1573698,    1125703699,  1265236826,  -1840700270, 613566756,  1227133513,
        -1840700270, -191739612, 612174805,  -1459982301, 11631,       1162412032,  1118717006, 33376,
    };

    // 0x100f31ea0, 288 bytes, __data
    Spin2_imgdata = {
        1196314761,  169478669,   218103808,   1380206665,  1073741824,  1073741824, 1544,       1902750208,
        222,         1094994401,  -304449452,  1129193942,  -511700927,  1531059071, 326251852,  -1428127212,
        1032489338,  -2145474560, 596271243,   1364754561,  467229017,   -163035104, 579347462,  -1709658104,
        -1207093964, 1853880254,  643969911,   1224840115,  -1774345070, 446995562,  454295375,  972853274,
        -2143419216, -245035407,  -1630603113, -603685081,  6323456,     395137996,  1879058861, -835253243,
        1788502109,  -1071026868, 1975447579,  -1487140745, 853200666,   62965251,   2054872016, -1808169471,
        7808727,     1880724537,  923024377,   -1495039827, 292913535,   -267812578, 1996585993, -226023232,
        -1594479692, 767617857,   54264432,    1871985143,  -1840700361, 613566756,  1227133513, -1840700270,
        1263683876,  557842685,   -988823252,  36495,       1162412032,  1118717006, 33376,      0,
    };

    // 0x100f31fc0, 256 bytes, __data
    Spin3_imgdata = {
        1196314761, 169478669,   218103808,  1380206665,  1073741824, 1073741824,  1544,        1902750208,
        222,        1094994372,  -304449452, -1039293994, -242805696, 214650287,   638636600,   -1018419168,
        62562306,   -2137515618, 302037545,  1348472899,  20792344,   -1709660283, -200078028,  -876896322,
        796915507,  613549945,   1227133513, -2062400878, -828192528, -1543413662, -2081598363, -1280794615,
        1795250180, -1060239584, 1336577212, -1124822189, -748659719, 404026474,   273896705,   1669348599,
        1616104039, 2078813913,  -706738432, 159632313,   -139817824, 1505133615,  1350788945,  -723517402,
        1233194809, -10747576,   678559404,  249561179,   1881637100, -977265149,  1227137071,  -1840700270,
        613566756,  -251489719,  467620613,  214168848,   169,        1313163520,  1614982724,  130,
    };

} // namespace jag::spinner_ns

namespace jag::internal {
    class PThreadStart {
    public:
        PThreadStart(void* (*)(void*), void*);
    };

    // 0x10002e210: the linker folded this into eastl::hashtable_iterator_base<eastl::string, false>::hashtable_iterator_base(eastl::hash_node<eastl::string, false>*, eastl::hash_node<eastl::string, false>**), which has identical code
    PThreadStart::PThreadStart(void* (*)(void*), void*);

    // 0x1000302e0: the linker folded this into eastl::hashtable_iterator<eastl::pair<int const, oldscape::graphics::Pix32>, false, false>::hashtable_iterator(eastl::hash_node<eastl::pair<int const, oldscape::graphics::Pix32>, false>*, eastl::hash_node<eastl::pair<int const, oldscape::graphics::Pix32>, false>**), which has identical code
    PThreadStart::PThreadStart(void* (*)(void*), void*);

} // namespace jag::internal

namespace jag::graphics {
    // 0x103c04b60, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x103c04ba0, 12 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DrawableBatchRenderer::~DrawableBatchRenderer();

} // namespace jag::graphics

namespace jag::ui {
    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ComponentMultiValueMixin::~ComponentMultiValueMixin();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ComponentSingleValueMixin::~ComponentSingleValueMixin();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ComponentSingleValueMultiOptionMixin::~ComponentSingleValueMultiOptionMixin();

} // namespace jag::ui

namespace jag::graphics::particlemodules {
    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    Flow::~Flow();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    Flipbook::~Flipbook();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    Lighting::~Lighting();

} // namespace jag::graphics::particlemodules

namespace jag::font_ns {
    // 0x100f320c0, 19728 bytes, __data
    font_sprite = {
        0,         0,         0,         0,         0,         0,         0,         0,         16842752,  16843009,
        16843009,  16843009,  257,       16843009,  257,       65792,     16843008,  16777217,  257,       65792,
        16843008,  16777217,  1,         65536,     16777216,  0,         256,       65536,     16777216,  0,
        1,         16843009,  16843009,  16777473,  16843009,  16843009,  1,         1,         256,       65536,
        16777216,  16777216,  16843009,  16843009,  16842753,  16843009,  16843009,  65536,     16777216,  0,
        256,       65536,     0,         0,         1,         0,         256,       0,         16843009,  257,
        16777473,  16842752,  257,       16777217,  65793,     256,       16777216,  65793,     0,         16777216,
        65793,     0,         16777217,  65793,     256,       16843009,  65536,     257,       16843009,  257,
        0,         1,         0,         256,       65536,     16843009,  1,         16842752,  16843009,  1,
        256,       16777216,  0,         1,         65536,     16777216,  0,         256,       16842752,  16843009,
        1,         16842753,  65793,     65792,     0,         16842752,  0,         0,         1,         0,
        65792,     0,         16842752,  16842752,  65793,     1,         16843009,  65793,     16777216,  0,
        256,       65536,     0,         1,         256,       16777216,  0,         16843009,  65793,     0,
        16843009,  65537,     0,         16843008,  16777216,  16777473,  16843009,  16843008,  65793,     16842752,
        1,         1,         16842752,  16777216,  1,         16843008,  16843009,  1,         16842753,  16777217,
        16777217,  0,         16777216,  257,       16777216,  16843009,  1,         16842752,  16777217,  1,
        0,         16777216,  16843008,  16843009,  257,       16777216,  16843009,  0,         0,         16843009,
        16843009,  1,         16842752,  1,         16842752,  1,         257,       0,         16777216,  16842753,
        0,         0,         16777216,  257,       0,         0,         16777216,  257,       0,         0,
        16777216,  257,       0,         0,         65792,     257,       0,         16777216,  1,         65793,
        0,         65793,     0,         16843009,  16843009,  1,         0,         16843008,  257,       16777216,
        256,       256,       16777472,  0,         256,       16843008,  16843009,  16777216,  0,         16777472,
        16777216,  16777216,  0,         65536,     0,         16777216,  0,         0,         1,         0,
        256,       16842752,  16843009,  65793,     16777216,  0,         0,         1,         0,         256,
        0,         65536,     16777216,  0,         16843009,  16843009,  16843009,  65536,     0,         16843008,
        16777473,  16843009,  257,       0,         0,         16842752,  0,         0,         16842752,  257,
        0,         16842752,  257,       0,         16842752,  257,       0,         16842752,  257,       0,
        16842752,  257,       0,         16842752,  257,       0,         0,         257,       0,         0,
        65536,     16843008,  16843009,  16777216,  16843009,  16843009,  65792,     0,         16842752,  1,
        0,         16842752,  0,         0,         65792,     0,         0,         65793,     0,         16842752,
        16843008,  16843009,  257,       16843008,  16843009,  65536,     1,         0,         16777472,  0,
        0,         16843009,  16843009,  16843009,  16843009,  16843009,  65793,     0,         0,         256,
        0,         0,         16777217,  16843009,  16777217,  1,         65792,     257,       16777216,  1,
        0,         257,       0,         257,       0,         257,       0,         257,       0,         257,
        0,         257,       0,         257,       0,         16843009,  16843009,  16777217,  16843009,  16777217,
        1,         65792,     257,       16777216,  1,         0,         257,       0,         257,       16842752,
        257,       0,         16842752,  0,         0,         16843009,  0,         16843008,  1,         65792,
        16843008,  65793,     256,       0,         257,       0,         65536,     1,         0,         16777217,
        0,         65536,     65536,     0,         1,         256,       65536,     0,         1,         16843009,
        16843009,  16843009,  16843009,  16843009,  257,       0,         256,       0,         0,         1,
        16842752,  16843009,  16777473,  1,         0,         257,       0,         65792,     0,         16842752,
        16843009,  0,         0,         257,       0,         16842752,  0,         16777216,  65793,     0,
        16843009,  0,         257,       16843009,  257,       0,         16843009,  1,         257,       0,
        257,       0,         257,       0,         65792,     16843009,  16842752,  1,         16777473,  1,
        16842752,  257,       16777216,  65793,     0,         16777473,  1,         257,       16843008,  257,
        16843008,  16843009,  257,       0,         65792,     0,         65792,     0,         16842752,  0,
        16842752,  0,         16777216,  1,         16777216,  1,         0,         257,       0,         257,
        0,         65792,     0,         65792,     0,         16777216,  16843009,  16777216,  1,         16777473,
        1,         16842752,  257,       16777216,  16842753,  16777216,  1,         16843009,  1,         257,
        65792,     257,       16777216,  65793,     0,         16777473,  1,         257,       16843008,  257,
        16777216,  16843009,  16777216,  1,         16777473,  1,         16842752,  257,       16777216,  65793,
        0,         16777473,  1,         65793,     16843008,  16842753,  0,         16777216,  1,         16777216,
        1,         16777216,  1,         16843009,  1,         16843008,  65793,     16777216,  16843009,  257,
        0,         16777216,  16843009,  16842752,  16843009,  65793,     16843008,  1,         0,         1,
        0,         0,         16777216,  0,         16842752,  0,         65792,     0,         257,       16777216,
        1,         0,         257,       0,         16777216,  1,         0,         16842752,  0,         0,
        65792,     0,         0,         16842753,  16843009,  65793,     0,         0,         0,         0,
        0,         0,         16842752,  16843009,  65793,     1,         0,         16842752,  0,         0,
        65792,     0,         0,         257,       0,         16777216,  1,         0,         257,       16777216,
        1,         16842752,  0,         65792,     0,         256,       0,         65536,     1,         0,
        16842752,  0,         0,         256,       16777216,  16842753,  1,         16843008,  16843008,  16777216,
        1,         16842752,  65793,     0,         16842752,  1,         0,         1,         16843008,  257,
        0,         257,       16777216,  1,         1,         0,         65536,     256,       16843009,  16777217,
        256,       16843009,  65793,     65792,     256,       16777216,  16842752,  65536,     0,         16777217,
        16777217,  16843009,  257,       65537,     16843009,  65793,     16777472,  0,         16777216,  0,
        65792,     0,         1,         0,         16843009,  1,         256,       0,         16777216,  1,
        16777216,  16843009,  0,         16843009,  1,         16843008,  65537,     16842752,  257,       256,
        16843008,  1,         1,         16842752,  16777473,  0,         16777216,  16843009,  0,         0,
        16843009,  1,         0,         16842752,  16843009,  16843009,  16843009,  16843009,  16843009,  16843009,
        0,         1,         65792,     16777216,  0,         257,       65536,     16777216,  1,         257,
        16842752,  16843009,  257,       16777473,  257,       16843009,  0,         0,         257,       1,
        16843009,  1,         16843008,  16843009,  257,       257,       16777216,  16842753,  0,         16777216,
        257,       0,         16777216,  1,         0,         16842752,  0,         0,         16843008,  1,
        16842752,  16842753,  0,         65792,     16843009,  16843009,  16843009,  16843009,  16843009,  16843009,
        0,         0,         65792,     0,         0,         257,       0,         16777216,  1,         0,
        16842752,  1,         0,         16777473,  1,         16842752,  16842752,  16843009,  65793,     16777216,
        16843009,  0,         16843009,  16843009,  257,       0,         257,       0,         257,       0,
        257,       0,         16843009,  16843009,  257,       0,         257,       0,         257,       0,
        257,       0,         16843009,  16843009,  16843008,  16843009,  65793,     0,         65792,     0,
        65792,     0,         65792,     0,         16843008,  16843009,  65793,     0,         65792,     0,
        65792,     0,         65792,     0,         65792,     0,         0,         16843008,  65793,     16843008,
        0,         16777473,  1,         16842752,  257,       0,         16842752,  0,         0,         257,
        16843008,  16843009,  0,         16842752,  257,       0,         16777473,  1,         16842752,  16843008,
        0,         257,       16843008,  65793,     16843009,  16843009,  16843009,  16843009,  16843009,  65793,
        0,         1,         0,         16777216,  0,         0,         65536,     0,         0,         256,
        0,         0,         1,         0,         16777216,  0,         16843008,  16843009,  16843009,  16843009,
        16843009,  16843009,  1,         0,         16842752,  0,         0,         16843008,  16843009,  16843009,
        16843009,  16843009,  16843009,  1,         0,         16842752,  0,         0,         65792,     0,
        0,         256,       0,         0,         257,       0,         16777216,  1,         0,         16842752,
        0,         0,         16843009,  16843009,  16843009,  16843008,  16843009,  257,       16843009,  16843009,
        16843009,  16843009,  16843009,  65793,     0,         65792,     0,         16777216,  1,         0,
        16843008,  0,         16777216,  16842753,  0,         65792,     16842752,  16777216,  1,         16842752,
        65792,     0,         16842752,  1,         0,         16842752,  16843009,  16843009,  16843009,  16843009,
        16843009,  257,       0,         0,         1,         0,         16777216,  0,         0,         65536,
        0,         0,         256,       0,         0,         1,         0,         16777216,  16843009,  16843009,
        16843009,  65793,     0,         0,         16843009,  0,         0,         16843008,  1,         0,
        16842752,  257,       0,         16777216,  257,       0,         16843008,  0,         16842752,  1,
        16777216,  257,       0,         65793,     0,         16777216,  16843009,  16843009,  16843009,  16843009,
        16843009,  16843009,  16843009,  16843009,  65793,     0,         0,         65793,     0,         0,
        16843008,  0,         0,         16843008,  0,         0,         16842752,  1,         0,         16842752,
        1,         0,         16777216,  257,       0,         16777216,  16843009,  16843009,  16843009,  1,
        16843009,  1,         16843008,  16843009,  257,       257,       16777216,  16842753,  0,         16777216,
        257,       0,         16777216,  1,         0,         16842752,  0,         0,         16843008,  0,
        16777216,  16842753,  0,         65792,     16843008,  16843009,  257,       16842752,  65793,     16842752,
        16843009,  16843009,  16843009,  16843009,  16843009,  257,       16777216,  0,         1,         65536,
        16777216,  0,         256,       65536,     0,         1,         65792,     16842752,  0,         16843008,
        257,       0,         16843008,  0,         0,         16842752,  65793,     16777216,  257,       16843008,
        16842752,  0,         65792,     257,       0,         16843008,  1,         0,         16843009,  0,
        16777216,  65793,     0,         16842752,  257,       0,         65792,     257,       16777216,  16777217,
        257,       16843008,  0,         16843009,  1,         0,         65792,     0,         0,         65793,
        0,         0,         16843009,  16843009,  16843009,  16843009,  16843009,  16843009,  16843009,  1,
        65536,     16777216,  0,         256,       65536,     0,         1,         256,       16777216,  0,
        257,       16843008,  0,         16843009,  16842753,  0,         65793,     16842752,  0,         0,
        16842752,  0,         0,         65536,     16842752,  16843009,  16842752,  0,         16843009,  0,
        16843008,  1,         0,         16843009,  1,         16842752,  16843009,  1,         16777216,  65793,
        0,         16842752,  257,       16777216,  65793,     16777216,  16777217,  16843009,  16777217,  1,
        0,         16777216,  0,         0,         65536,     0,         0,         16843008,  16843009,  16843009,
        16843009,  16843009,  16843009,  0,         0,         65536,     0,         0,         256,       0,
        0,         16843009,  16843009,  257,       16843009,  16843009,  257,       0,         0,         257,
        0,         0,         1,         0,         16777216,  0,         0,         65536,     0,         0,
        256,       0,         16777216,  16843009,  16843009,  65793,     16843009,  16843009,  16777217,  65793,
        0,         16777216,  16843009,  1,         0,         16843008,  65793,     0,         16777216,  16843009,
        0,         0,         65792,     0,         16843008,  257,       16843008,  65793,     16843008,  65793,
        0,         65793,     0,         16777216,  65793,     0,         16777216,  16843009,  1,         0,
        16843008,  65793,     0,         16777216,  16843009,  0,         16842752,  65793,     16843008,  257,
        16842752,  257,       0,         16843008,  1,         0,         16842752,  65793,     0,         0,
        16843008,  257,       0,         16843009,  1,         16843009,  257,       16843009,  257,       16777216,
        257,       0,         16842752,  0,         0,         16843008,  1,         16842752,  16842753,  1,
        65793,     16777216,  16843009,  0,         16777216,  257,       0,         16843008,  257,       16842752,
        1,         65793,     65793,     0,         16843009,  0,         0,         16843008,  0,         0,
        16842752,  1,         0,         16842752,  1,         0,         16777216,  257,       0,         16777216,
        16843009,  257,       16842752,  16843009,  1,         65793,     0,         16843008,  0,         16777216,
        257,       0,         65536,     0,         0,         16842752,  16843009,  257,       0,         257,
        16777216,  1,         16842752,  0,         16842752,  0,         65792,     0,         257,       0,
        257,       16777216,  1,         16842752,  0,         16842752,  16843009,  16843009,  16843009,  16843009,
        16843009,  16843009,  16843009,  16843009,  16843009,  257,       0,         0,         16777216,  1,
        0,         0,         16842752,  0,         0,         0,         16843008,  1,         0,         0,
        16843008,  1,         0,         0,         16843008,  1,         0,         0,         16843008,  1,
        0,         0,         16843008,  1,         0,         0,         16843008,  1,         0,         0,
        16843008,  1,         0,         0,         16843008,  1,         0,         0,         16842752,  0,
        0,         0,         65792,     0,         0,         0,         16843009,  16843009,  16843009,  16843009,
        16843009,  16843009,  16843009,  65793,     0,         257,       0,         16843008,  1,         16842752,
        16842752,  16777216,  1,         65792,     257,       0,         16777473,  16843009,  16843009,  16843009,
        16777217,  65793,     65792,     16843008,  65793,     0,         16842752,  0,         16842752,  16843008,
        16843009,  257,       16842752,  257,       16842752,  257,       16843008,  16843008,  16842753,  16843009,
        16843009,  16843009,  16843009,  16843009,  16843009,  1,         65536,     0,         1,         256,
        0,         1,         256,       0,         1,         65792,     16777216,  1,         16842752,  16843009,
        0,         16777216,  65793,     0,         16843009,  16842752,  16842752,  257,       16777216,  1,
        16842752,  0,         65792,     0,         65792,     65792,     16843008,  65537,     0,         16843008,
        1,         0,         16843009,  257,       16777216,  1,         65792,     16777216,  0,         65536,
        16777216,  0,         65536,     16777216,  0,         16777472,  16843009,  16843009,  16843009,  16843009,
        16843009,  65793,     16842752,  257,       65792,     65792,     257,       16842752,  16843009,  16843009,
        257,       0,         257,       0,         65792,     16842752,  16842752,  65793,     1,         256,
        0,         16842752,  16843009,  16843009,  16843009,  16843009,  16843009,  257,       256,       0,
        256,       256,       0,         256,       16843009,  0,         16842752,  16843009,  16777216,  257,
        16842752,  16842752,  0,         65536,     65792,     0,         256,       257,       16777216,  16842752,
        16843009,  16843009,  16777473,  16843009,  16843009,  16842752,  16843009,  16843009,  16843009,  16843009,
        16843009,  65793,     0,         1,         0,         16777216,  0,         0,         16777216,  0,
        0,         16777216,  0,         0,         16777216,  16843009,  65793,     0,         16843009,  65793,
        16843009,  0,         16843009,  16843009,  16843009,  16843009,  1,         0,         0,         16777216,
        0,         1,         0,         65536,     16777216,  0,         0,         16843008,  16842752,  16843009,
        16843009,  65793,     16843008,  16843009,  65793,     16843009,  16843009,  16843009,  16843009,  16843009,
        16843009,  1,         0,         65792,     0,         0,         257,       0,         16777216,  257,
        0,         16842752,  65792,     0,         65792,     16842752,  0,         256,       16777216,  1,
        0,         0,         16842753,  16843009,  16843009,  16843009,  16843009,  16843009,  16843009,  16843009,
        16843009,  16843009,  65793,     1,         16777216,  0,         16777216,  0,         16777216,  0,
        16777216,  16843009,  65793,     16843009,  65793,     1,         16777216,  0,         16777216,  0,
        16777216,  0,         16777216,  16843009,  65793,     16843009,  16843009,  16843009,  16843009,  16843009,
        16843009,  256,       0,         1,         0,         1,         0,         1,         0,         16843009,
        16843009,  16843008,  16843009,  16777217,  65793,     16842752,  16843009,  65792,     16777216,  257,
        0,         257,       0,         65793,     16777216,  16842753,  16843009,  16777216,  65793,     16843008,
        16843009,  16843009,  16843009,  16843009,  16843009,  256,       16777216,  16777216,  0,         65536,
        65536,     0,         256,       65792,     16777216,  1,         16843008,  65793,     0,         16843008,
        1,         65536,     16843008,  1,         16777216,  16843009,  1,         65792,     16777216,  1,
        1,         16777216,  16777216,  0,         65536,     65536,     0,         1,         16843008,  16843009,
        16843009,  16843009,  16843009,  16843009,  16843009,  16843009,  16843009,  16843009,  256,       0,
        257,       0,         257,       0,         257,       0,         16842752,  65793,     257,       16842752,
        1,         16842752,  16843009,  16842752,  16843009,  0,         16843008,  0,         16777473,  16843009,
        256,       1,         0,         16843009,  16843009,  16842753,  16843009,  16843009,  65536,     0,
        256,       1,         16777216,  65536,     0,         16843008,  16843009,  16777473,  16843009,  65793,
        0,         65536,     0,         65536,     0,         65536,     0,         16777472,  16843009,  16843009,
        16843009,  16843009,  257,       0,         16843009,  1,         16842752,  65793,     0,         16843008,
        0,         16843008,  16842752,  65793,     16843009,  1,         257,       0,         16843009,  0,
        16843008,  65793,     0,         16843009,  1,         16842752,  1,         65793,     16843008,  1,
        16843008,  1,         0,         65793,     0,         16842752,  1,         16843009,  16843009,  65793,
        16843008,  0,         65792,     0,         16843008,  16777217,  16777473,  16843009,  1,         65792,
        0,         65792,     16777216,  16843009,  16842753,  16777217,  65793,     0,         16843008,  1,
        0,         16842752,  65793,     0,         16777216,  16843009,  16842752,  0,         16843008,  65793,
        0,         16843009,  0,         16843009,  1,         16843008,  257,       0,         257,       0,
        0,         16843009,  65793,     0,         257,       16842752,  0,         257,       16842752,  0,
        257,       16842752,  0,         16843008,  16843009,  1,         0,         1,         0,         0,
        16777216,  0,         0,         0,         16843008,  0,         16777216,  16843009,  16842753,  16843009,
        16843008,  65793,     16842752,  16843009,  1,         0,         0,         16842752,  0,         0,
        0,         65792,     0,         0,         0,         16842753,  16843009,  16843009,  16843009,  16843009,
        16843009,  16843009,  16843009,  257,       0,         0,         16777216,  1,         0,         0,
        16842752,  0,         0,         0,         16843008,  16843009,  16777216,  16843009,  16842753,  16843009,
        16843008,  65793,     0,         16842752,  1,         0,         0,         65536,     0,         0,
        0,         256,       0,         0,         257,       0,         65537,     256,       16777216,  1,
        256,       16842752,  0,         256,       65537,     0,         65792,     0,         16777216,  16843009,
        16777216,  257,       65792,     65792,     16777216,  16842753,  0,         16777216,  16843009,  1,
        16842752,  0,         16777216,  16843009,  0,         16842752,  0,         0,         65792,     16777216,
        16777217,  257,       65792,     16777216,  16843009,  0,         0,         0,         0,         16843009,
        16843009,  16843009,  16843008,  0,         257,       0,         257,       16777216,  1,         16842752,
        0,         16842752,  0,         65792,     0,         65792,     0,         257,       0,         16843009,
        16843009,  1,         16777216,  1,         16842752,  0,         16842752,  0,         16842752,  0,
        65792,     0,         16843008,  0,         257,       0,         16842752,  16843009,  16843009,  257,
        0,         0,         0,         0,         16843009,  16842752,  257,       65792,     16843008,  16777217,
        16842753,  0,         257,       16842752,  257,       16842752,  16843009,  16843009,  0,         257,
        0,         257,       16842752,  0,         16777216,  16777217,  65793,     16842752,  16842752,  257,
        16843009,  1,         16777216,  65793,     16843008,  16843009,  16843009,  16843009,  257,       16842752,
        257,       0,         16843008,  65793,     0,         257,       16842752,  0,         1,         16777216,
        16842752,  16843009,  16843009,  257,       1,         16777216,  0,         1,         16777216,  0,
        65793,     16843008,  0,         65792,     65792,     0,         16842752,  65793,     16842752,  16777216,
        16842753,  0,         16777473,  1,         0,         257,       0,         16843009,  65793,     16842752,
        0,         16777216,  1,         0,         257,       0,         257,       0,         16843008,  16843009,
        16777473,  0,         65536,     16842753,  256,       256,       1,         1,         256,       1,
        256,       256,       1,         16842753,  16777472,  0,         65536,     257,       16842752,  65792,
        65792,     65792,     65792,     16842752,  257,       16842752,  257,       16842752,  257,       16777216,
        1,         16843008,  65793,     16777216,  1,         16843008,  65793,     16777216,  1,         16843008,
        16843009,  65793,     0,         16843008,  16843009,  16843009,  1,         16843009,  16777217,  1,
        65536,     257,       65536,     16842752,  16843009,  16777216,  0,         16843009,  1,         16842752,
        65793,     16777216,  16777216,  16843009,  1,         0,         65792,     1,         16842752,  16842752,
        65793,     65792,     16842752,  16842752,  257,       65793,     16842752,  16842752,  257,       257,
        16777216,  65793,     0,         65792,     16777216,  1,         1,         0,         256,       16777217,
        65793,     16777472,  16842752,  16842752,  16842752,  16842752,  0,         16842752,  16842752,  0,
        16842752,  16842752,  16842752,  65536,     16777217,  65793,     256,       1,         0,         256,
        65792,     16777216,  1,         16777216,  65793,     0,         16843008,  257,       0,         257,
        16777216,  16842753,  16843009,  257,       16843008,  1,         16777473,  16843009,  1,         0,
        65536,     0,         0,         65536,     0,         65792,     0,         0,         65792,     0,
        257,       0,         0,         257,       16777216,  1,         0,         16777216,  1,         16842752,
        0,         0,         16842752,  0,         16777216,  1,         0,         16777216,  1,         0,
        16842752,  0,         0,         16842752,  0,         0,         65792,     0,         0,         65792,
        0,         0,         257,       0,         0,         257,       0,         16777216,  0,         0,
        16777216,  16843008,  16843009,  257,       0,         65536,     0,         16777216,  0,         0,
        1,         0,         256,       0,         65536,     16843009,  257,       16842752,  257,       0,
        257,       16842752,  16777216,  0,         0,         16777217,  0,         0,         65537,     16843008,
        65793,     65792,     16843008,  65793,     65792,     256,       1,         65792,     16843008,  257,
        16777472,  16842752,  65792,     16777217,  0,         65536,     1,         257,       16842752,  0,
        16842752,  257,       16777216,  16843009,  16843009,  257,       65792,     65536,     16777472,  0,
        257,       65536,     16777217,  16777216,  1,         0,         1,         0,         256,       0,
        65536,     0,         16777216,  0,         16843009,  16843009,  1,         256,       0,         65536,
        0,         16777216,  0,         0,         1,         16843008,  16843009,  16777473,  65793,     16777216,
        1,         257,       65792,     65792,     65792,     16843008,  16777473,  65793,     16777216,  1,
        16777473,  257,       16842752,  16777216,  16843009,  1,         16843009,  16843008,  16843009,  16843009,
        16843009,  16843009,  16843009,  0,         16777216,  0,         0,         65536,     0,         0,
        256,       0,         0,         1,         16843009,  16843009,  16777216,  16843009,  65793,     65536,
        16843008,  0,         0,         16842752,  65793,     0,         16777216,  16843009,  257,       0,
        16843008,  16843009,  0,         16777216,  16843009,  16843009,  16843009,  257,       0,         0,
        16777216,  0,         0,         0,         16843008,  16843009,  16843009,  65793,     16843009,  257,
        65536,     16842752,  16777473,  256,       65536,     1,         16843008,  16843009,  16843009,  16843009,
        0,         65536,     0,         65792,     16843009,  16842753,  16843009,  257,       16777216,  1,
        16842752,  0,         16843008,  16843009,  16842753,  65793,     256,       0,         0,         65536,
        0,         16777216,  257,       0,         0,         65793,     0,         16843008,  257,       0,
        16842752,  65793,     0,         16842752,  65793,     0,         16777216,  16843009,  0,         16842752,
        257,       0,         16777216,  65793,     0,         16843008,  0,         0,         16842752,  1,
        16843009,  1,         0,         16843008,  257,       16843009,  1,         0,         16843008,  257,
        16843008,  0,         0,         16842752,  1,         16777216,  0,         0,         0,         1,
        0,         16777472,  0,         0,         65536,     0,         0,         16843009,  65793,     16777216,
        16843009,  257,       0,         0,         16777216,  1,         0,         257,       0,         65792,
        0,         16777216,  0,         0,         257,       0,         65792,     0,         257,       0,
        65536,     1,         0,         16777217,  0,         16842752,  16843009,  1,         16843008,  16843009,
        0,         0,         16777217,  256,       0,         0,         1,         0,         16842752,  16843009,
        1,         16843008,  16843009,  0,         0,         0,         65792,     0,         16842752,  0,
        16777216,  1,         0,         256,       0,         16842752,  0,         16777216,  1,         0,
        0,         65536,     0,         1,         256,       16842752,  0,         1,         65793,     16777216,
        16843009,  256,       16777216,  257,       65793,     0,         1,         256,       16777217,  0,
        16777217,  65536,     16777216,  16843009,  257,       16777216,  16842753,  16777216,  1,         0,
        257,       0,         65792,     0,         16777216,  0,         0,         257,       65792,     65792,
        16777216,  256,       0,         256,       1,         16777216,  16843009,  257,       16842752,  16843009,
        1,         0,         256,       1,         0,         65793,     0,         16842752,  65793,     0,
        257,       16843008,  16843008,  0,         65793,     257,       16777216,  0,         0,         65792,
        0,         0,         65537,     0,         0,         16777216,  1,         0,         16842752,  65793,
        0,         16842752,  65793,     256,       16842752,  16777473,  16777216,  16842753,  257,       256,
        65536,     16843009,  16777216,  0,         0,         16843009,  256,       0,         0,         16843009,
        1,         0,         0,         16843009,  1,         0,         0,         16843008,  0,         0,
        0,         257,       0,         16777216,  16843009,  0,         16777216,  16843009,  0,         16777216,
        65793,     1,         16777472,  65793,     65536,     16842752,  16843008,  1,         1,         1,
        16843008,  65537,     0,         0,         16843008,  257,       0,         0,         16843008,  257,
        0,         0,         16842752,  0,         65793,     0,         65792,     257,       0,         0,
        0,         16777216,  1,         0,         65792,     0,         16842752,  257,       0,         16843009,
        0,         65792,     65792,     16777216,  16777217,  1,         257,       16842752,  16842752,  16843009,
        257,       257,       16842752,  65792,     0,         16843008,  1,         16777216,  1,         65792,
        256,       65536,     65792,     0,         0,         0,         0,         257,       0,         16842752,
        0,         16777216,  65793,     0,         16843008,  1,         16842752,  16842752,  0,         257,
        257,       65792,     16777216,  16777217,  16843009,  65793,     65792,     16777216,  16842753,  0,
        16842752,  257,       0,         65793,     0,         0,         16777216,  1,         0,         16842752,
        16843009,  1,         16842752,  65793,     65792,     16842752,  16777473,  0,         16842752,  257,
        256,       0,         16843009,  16777216,  16777216,  1,         16843009,  256,       65792,     0,
        16843009,  1,         0,         0,         16843009,  1,         0,         0,         65792,     16777216,
        65793,     0,         1,         256,       65536,     16777216,  0,         16843008,  1,         0,
        257,       0,         16843008,  1,         16777216,  65793,     0,         257,       257,       16842752,
        16842752,  16777216,  1,         65792,     16843008,  16843009,  16777217,  1,         65792,     257,
        0,         16843009,  0,         16842752,  0,         16843008,  16843009,  65793,     16842752,  16842752,
        0,         0,         257,       257,       0,         65792,     16842752,  0,         16777216,  1,
        257,       0,         65792,     16842752,  16843009,  16842753,  0,         257,       0,         16843009,
        16843009,  0,         65792,     0,         257,       16777216,  1,         16842752,  0,         65792,
        0,         16843009,  16843009,  16777216,  16843009,  0,         16777216,  16843009,  16843009,  0,
        65792,     0,         257,       16843008,  0,         16777216,  16777217,  1,         0,         65536,
        65792,     0,         0,         65793,     1,         0,         65536,     16842752,  1,         16842752,
        1,         65792,     0,         257,       0,         65792,     0,         16842752,  0,         0,
        16777216,  16843009,  16843009,  1,         16777216,  1,         16777216,  1,         16777216,  1,
        16777216,  16843009,  16843009,  1,         16777216,  1,         16777216,  1,         16777216,  1,
        16777216,  16843009,  65793,     0,         257,       16777216,  1,         0,         0,         16843009,
        16843009,  257,       0,         257,       0,         257,       0,         257,       0,         16843009,
        16843009,  257,       0,         257,       0,         257,       0,         257,       0,         16843009,
        16843009,  0,         65793,     16777216,  16842753,  0,         0,         16843008,  16843009,  65793,
        0,         65792,     0,         65792,     0,         65792,     0,         16843008,  16843009,  65793,
        0,         65792,     0,         65792,     0,         65792,     0,         16843008,  16843009,  16777217,
        16777217,  16777217,  16777217,  1,         0,         16842752,  16843009,  16843009,  0,         16842752,
        0,         16842752,  0,         16842752,  0,         16842752,  16843009,  16843009,  0,         16842752,
        0,         16842752,  0,         16842752,  0,         16842752,  16843009,  65793,     65536,     0,
        0,         257,       1,         0,         16842752,  16842753,  16843009,  16843009,  65537,     16843009,
        16843009,  65793,     65536,     0,         0,         1,         1,         0,         16842752,  16777216,
        0,         0,         256,       256,       0,         16777216,  16777472,  16843009,  16843009,  16843009,
        16843008,  16843009,  16843009,  16777217,  0,         0,         256,       256,       0,         16777216,
        1,         1,         0,         65536,     65537,     0,         0,         65793,     16843009,  16843009,
        16843009,  16842752,  16843009,  16843009,  65793,     1,         0,         65536,     65537,     0,
        0,         16843009,  256,       0,         16777216,  16777473,  0,         0,         256,       16843008,
        16843009,  16843009,  16777216,  16843009,  16843009,  16843009,  256,       0,         16777216,  16777473,
        0,         0,         65792,     0,         1,         16842752,  16843009,  16843009,  16843009,  16843009,
        16843009,  1,         256,       16842752,  0,         1,         65792,     16777216,  0,         257,
        0,         16777216,  257,       0,         65792,     257,       16777216,  16777217,  16843009,  16843009,
        0,         16843009,  1,         1,         16843009,  16843009,  65793,     16842752,  0,         0,
        65536,     65793,     0,         16777216,  0,         65793,     0,         256,       16777216,  257,
        0,         1,         16777216,  257,       65536,     0,         16842752,  16777217,  0,         0,
        16842752,  1,         0,         0,         65792,     16842752,  16843009,  16843009,  1,         16842752,
        0,         0,         16842752,  0,         0,         0,         0,         16842752,  65793,     16777216,
        257,       16843008,  16842752,  0,         65792,     257,       0,         16843008,  1,         0,
        16843009,  0,         16777216,  65793,     0,         16842752,  257,       0,         65792,     257,
        16777216,  16777217,  257,       16843008,  0,         16843009,  1,         0,         16777216,  1,
        0,         65792,     0,         0,         0,         0,         16843008,  257,       16842752,  1,
        65793,     65792,     0,         16777473,  1,         0,         16843009,  0,         16777216,  65793,
        0,         16842752,  257,       0,         16843008,  1,         0,         16777473,  1,         16842752,
        16842752,  1,         65793,     16777216,  16843009,  0,         0,         65793,     0,         16842752,
        65792,     0,         0,         0,         0,         16843009,  1,         16843008,  16777216,  257,
        257,       16777216,  16842753,  0,         16777216,  65793,     0,         16842752,  257,       0,
        16843008,  1,         0,         16843009,  0,         16777216,  16842753,  0,         65792,     16843008,
        16777216,  257,       16842752,  65793,     0,         16777216,  16777217,  0,         256,       257,
        0,         0,         0,         16777216,  16843009,  0,         65793,     16842752,  16777217,  1,
        16842752,  65792,     0,         16842752,  257,       0,         16843008,  1,         0,         16843009,
        0,         16777216,  65793,     0,         16842752,  65792,     0,         257,       65793,     16842752,
        1,         16843008,  257,       0,         257,       65792,     16777216,  1,         257,       0,
        0,         0,         16842752,  65793,     16777216,  257,       16843008,  16842752,  0,         65792,
        257,       0,         16843008,  1,         0,         16843009,  0,         16777216,  65793,     0,
        16842752,  257,       0,         65792,     257,       16777216,  16777217,  257,       16843008,  0,
        16843009,  1,         256,       16777216,  256,       256,       16777472,  0,         256,       16777216,
        256,       256,       16777472,  0,         256,       0,         0,         256,       16843008,  16777473,
        16842752,  1,         65793,     65792,     0,         16777473,  1,         65536,     16843009,  0,
        16777217,  65793,     65536,     16842752,  257,       1,         16843008,  65537,     0,         16777473,
        1,         16842752,  16842752,  1,         65793,     16777472,  16843009,  16777216,  0,         0,
        65536,     16842752,  16843009,  65793,     0,         16843009,  16843009,  257,       0,         0,
        16777216,  257,       0,         0,         16842752,  1,         0,         0,         65537,     0,
        0,         65536,     0,         0,         0,         1,         0,         0,         65792,     16842752,
        16843009,  16843009,  0,         16843009,  16843009,  16777217,  16777216,  16843009,  16843009,  0,
        16843008,  16843009,  65793,     0,         0,         0,         257,       0,         0,         16777216,
        256,       0,         0,         16843008,  0,         0,         16777216,  1,         0,         0,
        256,       0,         0,         16842752,  16777216,  16843009,  16843009,  1,         16843008,  16843009,
        257,       1,         16843009,  16843009,  1,         16842752,  16843009,  16843009,  0,         0,
        0,         65792,     1,         0,         0,         65793,     0,         0,         16842752,  0,
        0,         0,         65793,     0,         0,         65536,     1,         0,         16777216,  1,
        16843009,  16843009,  257,       16842752,  16843009,  65793,     256,       16843008,  16843009,  257,
        16777216,  16843009,  16843009,  16842753,  0,         0,         16842752,  257,       0,         0,
        256,       0,         0,         16777216,  0,         0,         0,         16843008,  0,         0,
        16777216,  257,       0,         0,         257,       16843008,  16843009,  65793,     16777216,  16843009,
        16843009,  65536,     65536,     0,         0,         0,         65793,     0,         0,         16777216,
        257,       0,         0,         16777216,  257,       0,         1,         16842752,  16843009,  65793,
        0,         16843009,  16843009,  0,         16843008,  0,         0,         16843008,  0,         0,
        16842752,  1,         0,         0,         1,         0,         16777216,  16843009,  16843009,  16843009,
        16843009,  16843009,  16843009,  16843009,  257,       16777216,  0,         256,       0,         256,
        0,         1,         0,         1,         16777216,  0,         16777216,  1,         65792,     0,
        16777216,  16843009,  1,         0,         16777216,  65793,     0,         16777217,  16843009,  16843009,
        16842753,  16843009,  16843009,  65793,     0,         0,         256,       0,         0,         256,
        65536,     0,         257,       65536,     0,         16843009,  16843009,  16777216,  16842753,  16777217,
        16843009,  0,         0,         65793,     0,         65792,     0,         16842752,  0,         0,
        16777216,  16843009,  1,         0,         257,       0,         16777473,  16843009,  16843009,  0,
        16843009,  0,         16843009,  16777216,  16777473,  65793,     257,       16777216,  1,         16842752,
        0,         0,         0,         16843009,  257,       0,         65792,     0,         65792,     16843009,
        16843009,  1,         16843008,  1,         16843008,  1,         65793,     16843009,  65792,     16842752,
        1,         65792,     257,       0,         0,         16843008,  65793,     0,         16842752,  0,
        16842752,  16843008,  16843009,  257,       16842752,  257,       16842752,  257,       16843008,  16843008,
        16842753,  16777216,  16777217,  65536,     65792,     0,         0,         16842752,  16843009,  0,
        16777216,  1,         16777216,  16842753,  16843009,  65793,     16777216,  65793,     16777216,  65793,
        16842752,  16842753,  16777473,  16777217,  16777217,  16777217,  16777217,  1,         0,         16777216,
        16843009,  1,         0,         257,       0,         16777473,  16843009,  16843009,  0,         16843009,
        0,         16843009,  16777216,  16777473,  65793,     257,       16842752,  1,         256,       256,
        256,       256,       16842752,  1,         16843009,  257,       0,         65792,     0,         65792,
        16843009,  16843009,  1,         16843008,  1,         16843008,  1,         65793,     16843009,  65792,
        16843008,  16777473,  65793,     0,         16842752,  16777217,  1,         16777216,  1,         65792,
        16843009,  16843009,  16843009,  257,       65792,     0,         65792,     16842752,  0,         16842752,
        16777216,  257,       65792,     16843009,  16842752,  65793,     16777216,  65793,     65792,     16843008,
        1,         16842752,  0,         65792,     0,         257,       0,         257,       257,       16843009,
        0,         256,       0,         1,         65793,     0,         65792,     0,         16842752,  0,
        0,         0,         16843008,  1,         257,       16777473,  1,         16843008,  16843009,  16843009,
        1,         16777216,  1,         0,         257,       65792,     16843008,  257,       0,         257,
        16777216,  1,         0,         0,         16842752,  257,       65792,     65792,     257,       16842752,
        16843009,  16843009,  257,       0,         257,       0,         65792,     16842752,  16842752,  65793,
        0,         65793,     16777216,  16842753,  0,         0,         16777216,  65793,     16842752,  16842752,
        65792,     16777216,  16843009,  16843009,  65793,     0,         65792,     0,         16842752,  16777216,
        16777217,  16843009,  16777216,  16777217,  16777217,  16777217,  1,         0,         0,         16843009,
        16777216,  16777217,  16842753,  0,         16843009,  16843009,  16843009,  0,         16842752,  0,
        16777216,  1,         257,       16843009,  16842753,  0,         0,         16842752,  16843008,  16843009,
        65537,     16843009,  16843009,  65537,     16843009,  16843009,  16777473,  16843009,  16843009,  0,
        0,         65536,     256,       0,         16777216,  16777217,  16843009,  16843009,  16777217,  16843009,
        65793,     256,       0,         16777216,  257,       0,         0,         16842752,  16843009,  257,
        16843008,  16843009,  65793,     0,         0,         1,         16777216,  65793,     0,         16842752,
        16843009,  0,         65792,     16777216,  16777473,  256,       0,         65793,     256,       0,
        16842753,  257,       16777216,  16777473,  16843009,  16843009,  0,         16843008,  65793,     256,
        16843008,  16843009,  65537,     16843009,  16843009,  1,         1,         16777216,  65536,     0,
        16777216,  256,       0,         65536,     1,         0,         16777217,  16843009,  65793,     16777216,
        16843009,  257,       65792,     0,         16842752,  0,         0,         0,         16843008,  1,
        257,       16777473,  1,         16843008,  1,         16843008,  1,         16843008,  1,         65792,
        257,       257,       16843008,  1,         0,         257,       16777216,  1,         0,         0,
        16842752,  257,       65792,     65792,     257,       16842752,  257,       16842752,  257,       16842752,
        257,       16842752,  65792,     65792,     16842752,  257,       0,         65793,     16777216,  16842753,
        0,         0,         16777216,  65793,     16842752,  16842752,  65792,     16777216,  65793,     16777216,
        65793,     16777216,  65793,     16777216,  16842753,  16842752,  16777216,  65793,     0,         257,
        16777217,  16842752,  0,         0,         0,         16843009,  16777216,  16777217,  16842753,  0,
        16843009,  0,         16843009,  0,         16843009,  0,         16777473,  16777217,  1,         16843009,
        65536,     0,         16843009,  16842752,  16842752,  16843009,  65792,     257,       16842752,  16777216,
        0,         65536,     65536,     0,         16843008,  65792,     16777216,  65793,     16843008,  65793,
        0,         16843008,  1,         0,         257,       0,         16842752,  0,         0,         0,
        0,         0,         0,         16843009,  16843009,  257,       0,         0,         0,         0,
        0,         16842752,  0,         0,         257,       65536,     16843008,  65537,     16843009,  16777473,
        1,         16843009,  16777216,  16842752,  65536,     16842752,  257,       65792,     16843009,  16777473,
        16843008,  16777217,  16777216,  16843009,  257,       16842752,  16843009,  65793,     0,         0,
        65793,     0,         16777216,  256,       0,         65536,     0,         0,         1,         16843008,
        16843009,  1,         16843009,  16843009,  1,         16843009,  65793,     16777216,  16843009,  65793,
        0,         0,         16777472,  0,         0,         65793,     0,         16777216,  1,         0,
        256,       16842752,  16843009,  257,       16843008,  16843009,  257,       16843008,  16843009,  0,
        16843009,  16843009,  256,       0,         16842752,  1,         0,         65792,     0,         0,
        65793,     0,         65536,     16777472,  16843009,  65793,     16842752,  16843009,  65793,     16842752,
        16843009,  16842753,  16843008,  16843009,  65793,     0,         16777216,  0,         0,         65536,
        0,         0,         16843008,  0,         16777216,  65792,     16843009,  16843009,  16777216,  16843009,
        16843009,  16777216,  1,         0,         0,         16843008,  257,       0,         0,         16843008,
        257,       16777473,  0,         16842752,  16843009,  257,       0,         16843009,  65536,     16777216,
        16843009,  0,         16777216,  16843009,  0,         0,         65792,     0,         0,         16843009,
        16843009,  16843009,  16843009,  16843009,  16843009,  16843009,  65793,     0,         1,         65536,
        0,         65536,     0,         256,       0,         256,       0,         1,         0,         257,
        16842752,  0,         0,         16843009,  257,       0,         0,         16843009,  0,         256,
        65792,     0,         0,         16777473,  16843009,  0,         16842752,  16777216,  16843009,  16842752,
        0,         0,         16843009,  257,       0,         16842752,  257,       257,       16843008,  257,
        16842752,  16843008,  257,       0,         16777216,  1,         0,         -65536,    1573119,   294,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         256,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         419436544, 352327680, 402659328, 335549952, 436212736, 520099840,
        536878080, 402658560, 402659328, 402659328, 402659328, 402659328, 436213760, 419437056, 419437312, 369104896,
        402659328, 402659328, 402659328, 402659328, 402659328, 402659328, 402659328, 402659328, 402659328, 402659328,
        402659328, 402659328, 402659328, 352326656, 402658304, 419438848, 385882880, 385882880, 385882880, 385882880,
        369104640, 385881856, 452991744, 452991744, 452991744, 419437312, 452991744, 452991744, 452991744, 335549440,
        469767168, 402653184, 0,         0,         0,         0,         0,         402653184, 0,         0,
        0,         0,         0,         0,         0,         452984832, 0,         0,         385882112, 436213760,
        352327680, 436213760, 419436288, 486545408, 385883392, 469769728, 402659584, 419436544, 369105152, 536879104,
        419437312, 402659584, 402659328, 352327680, 352326912, 352326912, 402658560, 352327680, 352326912, 352326912,
        352326912, 402658560, 352326912, 352326912, 352326912, 369105408, 352326912, 352326912, 352326912, 402659072,
        402659328, 402659328, 452990720, 402660096, 402659328, 402659328, 385882112, 385882112, 402659328, 402659328,
        402659328, 436214016, 402659328, 402659328, 352327168, 5632,      0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        0,         0,         134218240, 150997760, 184553728, 100663808, 117442048, 67111168,  33555712,  150996992,
        150996480, 167774464, 150997248, 150997248, 33556736,  150995968, 150997248, 201328384, 150997504, 167774464,
        134219776, 167774720, 117442048, 134220288, 167775232, 150997760, 184552192, 134220032, 150997504, 150998528,
        134220288, 134219008, 167773440, 50334464,  134219776, 134219520, 83888128,  134219776, 83886592,  33556736,
        134221312, 134219776, 100665344, 100665088, 134219776, 134220800, 117442560, 33556480,  184551424, 167772160,
        0,         0,         0,         0,         0,         251658240, 0,         0,         0,         0,
        0,         0,         0,         234881024, 0,         0,         150995456, 134220032, 33556480,  134220032,
        117443584, 151000320, 201327872, 100666112, 83888384,  50332928,  134219776, 67109376,  117442048, 251663872,
        234884864, 167773952, 167774720, 167774720, 234883584, 134220032, 134219776, 100665344, 100664832, 184550912,
        184551936, 184552192, 184552192, 184551168, 167774720, 167774720, 134220288, 134220032, 134219776, 134219776,
        218105856, 134219520, 134219776, 50333696,  67109632,  134218752, 134219776, 134219776, 134219776, 134220288,
        134219776, 134219776, 134219776, 2048,      0,         0,         0,         0,         0,         0,
        0,         0,         0,         0,         0,         0,         0,         0,         0,         0,
        67111680,  234883840, 184552192, 251659264, 117444352, 100665600, 50331904,  184552960, 184552192, 184552192,
        184552192, 184552192, 134220544, 167774976, 167773440, 218106624, 184552192, 184552192, 184552192, 184552192,
        184552192, 184552192, 184552192, 184552192, 184552960, 184552192, 184552192, 184552192, 184552192, 234884864,
        83889920,  67109120,  201328640, 201328640, 201328640, 201329408, 251661312, 201329664, 134219776, 184551424,
        134220544, 167774208, 134219776, 134219776, 134220544, 251662080, 83889920,  184549376, 0,         0,
        0,         0,         0,         184549376, 0,         0,         0,         0,         0,         0,
        0,         134217728, 0,         0,         201329408, 134220544, 234883840, 67111680,  117443584, 100665856,
        201326848, 100663552, 117443072, 33556224,  234883840, 50332416,  117442304, 184551936, 184552192, 234883840,
        234884608, 234884608, 184552960, 234884608, 234884608, 234884608, 234884608, 184552960, 234884608, 234884608,
        234884608, 218105600, 234884608, 234884608, 251661824, 184552448, 184552192, 184552192, 134220800, 184552192,
        184552192, 184552192, 201329408, 201329408, 184552192, 184552192, 184552192, 134220032, 184552192, 184552192,
        251661824, 69120,
    };

    // 0x100f36dd0, 272 bytes, __data
    font_metrics = {
        0,         0,         0,         0,         0,         0,         0,         0,         218760196, 67965707,
        185141256, 168036102, 185272331, 185273100, 100928267, 151718667, 185273358, 201984524, 201918476, 218893834,
        185404683, 269159434, 118098955, 218892042, 151652869, 168233482, 185009162, 168431620, 151521802, 235538952,
        168364554, 854532,    12,        0,         0,         17,        0,         0,         0,         16,
        185271300, 184814090, 386469386, 219023115, 117902088, 67766789,  403245062, 152047889, 202116108, 185601036,
        168430090, 134744072, 218958861, 151850253, 202116109, 185207820, 168430090, 151980554, 168430090, 101057797,
        168430090, 201984522, 168430090, 168430090, 35,        0,         0,         0,
    };

} // namespace jag::font_ns

namespace jag::auth {
    // 0x100024070: the linker folded this into eastl::pair<eastl::string, oldscape::option::IOption*>::~pair(), which has identical code
    GameTokenResult::~GameTokenResult();

    // 0x10002dfe0: the linker folded this into eastl::hash_node<eastl::string, false>::~hash_node(), which has identical code
    GameTokenResult::~GameTokenResult();

} // namespace jag::auth

namespace jag::oldscape::loottracker {
    // 0x100024070: the linker folded this into eastl::pair<eastl::string, option::IOption*>::~pair(), which has identical code
    SourceItem::~SourceItem();

    // 0x10002dfe0: the linker folded this into eastl::hash_node<eastl::string, false>::~hash_node(), which has identical code
    SourceItem::~SourceItem();

} // namespace jag::oldscape::loottracker

namespace jag::oldscape::minimenu {
    // 0x100024070: the linker folded this into eastl::pair<eastl::string, option::IOption*>::~pair(), which has identical code
    MinimenuGlobalEntryData::~MinimenuGlobalEntryData();

    // 0x10002dfe0: the linker folded this into eastl::hash_node<eastl::string, false>::~hash_node(), which has identical code
    MinimenuGlobalEntryData::~MinimenuGlobalEntryData();

} // namespace jag::oldscape::minimenu

namespace jag::render {
    // 0x1000296e0: the linker folded this into bool operator==<oldscape::rs2lib::worldmap::WorldmapAreaMetadata, oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> const&, shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> const&), which has identical code
    KeepAliveSharedPtrAndOwner::operator==(KeepAliveSharedPtrAndOwner const&) const;

    // 0x10002a630: the linker folded this into eastl::fixed_vector_allocator<8ul, 20ul, 4ul, 0ul, true, eastl::allocator>::set_name(char const*), which has identical code
    ZoneObjectMemory::ZoneObjectMemory(unsigned long long);

} // namespace jag::render

namespace jag::console {
    // 0x10002a630: the linker folded this into eastl::fixed_vector_allocator<8ul, 20ul, 4ul, 0ul, true, eastl::allocator>::set_name(char const*), which has identical code
    RegisteredCommand::RegisteredCommand(CommandData&);

    // 0x100049400: the linker folded this into std::__tuple_leaf<1ul, eastl::fixed_string<char, 256, true, eastl::allocator>, false>::~__tuple_leaf(), which has identical code
    VarAny::~VarAny();

} // namespace jag::console

namespace jag::root_ns {
    // 0x100f309c0, 1376 bytes, __data
    x_imgdata = {
        1196314761,  169478669,   218103808,   1380206665,  1174405120,  1174405120,  1544,        -500272896,
        83886212,    1094994209,  -304449452,  1449680795,  1070012533,  424328175,   168233902,   1172826899,
        -1257945628, 1095898693,  -49065606,   -1128102207, 1412022608,  -1674025658, 1957890987,  -2093798109,
        90443820,    -1824777730, 1349392234,  189839633,   390532012,   50629406,    -669497157,  -1889342608,
        -152685836,  -1661477124, -417612045,  -69717125,   -813827076,  -207750157,  -1875253444, 210125601,
        173290009,   872256370,   -532545806,  -1619092016, -232308352,  640427366,   1617821426,  208945561,
        -2042304808, 659654786,   1661911197,  -1858490548, -900937201,  1190903979,  -769184015,  2118161718,
        -2116362358, -39607426,   -898893935,  1612368456,  1606177215,  -1782704425, 70130698,    216662654,
        1736541966,  -1799763811, -132351671,  -2009683962, 1931347295,  329701154,   1348676252,  -2000630525,
        540371393,   1401681809,  540108068,   -2142875066, -752284826,  -1662737646, 1662612997,  595198893,
        1084614639,  -677364534,  -1157575272, 1120152948,  -1606557044, 687548615,   -1091421072, -1437449942,
        -873798784,  56434306,    1155732145,  -1068662586, 400401189,   319073920,   1484606374,  -1529345680,
        971843691,   -181695898,  -597151696,  992936147,   1731314577,  1203784651,  1617031494,  637080473,
        1144934356,  158080344,   2031630672,  1380330175,  50790742,    1125430868,  348549194,   -1339426812,
        58599641,    776269400,   600459414,   -1925122112, 657712465,   -1079223598, -612724356,  -649720960,
        1052041242,  -901049069,  7659586,     -969664727,  1663396728,  7075760,     1052836277,  59131117,
        -553429763,  -1790511871, 331170027,   822760121,   -368286011,  1679205240,  -956050410,  32763682,
        1669457060,  25994241,    -1524282597, -1667997148, 13533487,    1331701397,  -719389568,  1666425521,
        -591090526,  -838557058,  -1930442748, -932520004,  -826233450,  40352512,    999542942,   1647060579,
        -1952770431, -1071437172, -530297101,  60749326,    -1917091590, -489357578,  579514352,   -1527572666,
        418888022,   -1643708843, -768812902,  -1072703194, 2141037436,  1262463669,  1707591820,  258671432,
        -200304304,  1712698985,  687890270,   -1821250304, -866684926,  -567275786,  -902402982,  578421039,
        336877551,   -66958469,   -1314958691, -1044965597, -2122581048, 17023219,    -538239126,  2121532183,
        -929293821,  411185983,   -534649051,  862093511,   331399956,   -1529355186, 310179786,   1457534278,
        -1838464110, -1941560156, 1879438226,  1205010724,  -1842137388, 2049688856,  -209337122,  -462343318,
        2031122066,  -63004801,   -362244395,  -37470534,   1227949726,  -1866855321, 157859853,   226575974,
        177377641,   1473137201,  1276296896,  -870624276,  1863606826,  -398123775,  -1288787851, -2061920107,
        500795700,   -332821544,  -1689326391, 1310350488,  421261090,   2065095151,  -712948191,  -650928535,
        1528609517,  -1904283095, 833997910,   1255517080,  946654844,   436485731,   -1596476318, 1458464566,
        24099978,    -53981378,   -1511283462, 378596780,   1789090097,  -1066249614, 1303243785,  2099216152,
        265926075,   1037045548,  487435269,   -507041551,  689994491,   656834967,   -594947214,  -622461852,
        1727856869,  431577589,   -1723941485, -1073376100, 1179779273,  1292634996,  17795410,    1141748075,
        374292130,   145327806,   2076570722,  -1866992073, 1033190960,  1654342960,  -1909346176, -931708859,
        421150912,   850398963,   330268224,   557475065,   1612437909,  1388750199,  -193699202,  -1522520661,
        -752373721,  341474689,   -777114208,  678456502,   -1131836210, 475536287,   1125777758,  892195145,
        -1918225396, 1853055632,  -1580026311, 1131948928,  -1965610629, 1467306509,  -368366165,  -1997224395,
        -1889551223, 385049213,   -991276336,  292786854,   379277672,   -1822894484, 28468031,    -1442592280,
        1254636241,  1236828618,  -1942369071, 446952573,   -944660168,  -2028565425, 1185251655,  -10264645,
        -333926854,  739647312,   451579397,   932761442,   -28356688,   578006028,   1164087991,  1599319917,
        451490838,   -1268565022, -619250632,  -581574496,  43024339,    1101939700,  -1926439060, -1957114112,
        -1076630323, 530886096,   1226536267,  1927009561,  -1226267478, 1907861306,  -1656696629, -1521116394,
        -219205220,  980248447,   -1121814676, 2078935444,  -2055450181, 729558446,   1738809189,  1126273224,
        -2070606714, 1776550143,  -2145102879, 51650,       1162412032,  1118717006,  33376,       0,
    };

} // namespace jag::root_ns

namespace jag::oldscape::defaults {
    // 0x103c04bac, 4 bytes, __bss; zero-initialised
    DefaultsGroup::GRAPHICS;

} // namespace jag::oldscape::defaults

namespace jag::oldscape {
    // 0x103c04bb0, 24 bytes, __bss; zero-initialised
    AllFonts;

} // namespace jag::oldscape

namespace jag::testframework {
    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    GaiaConsoleSink::~GaiaConsoleSink();

} // namespace jag::testframework

namespace jag::logger {
    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DebugOutputSink::~DebugOutputSink();

} // namespace jag::logger

namespace jag::oldscape::sound {
    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    NXTPCMPlayerFactory::~NXTPCMPlayerFactory();

} // namespace jag::oldscape::sound

namespace jag::oldscape::rs2lib::worldmap {
    // 0x10002a770: the linker folded this into void eastl::destruct<CoordMapSquare*>(CoordMapSquare*, CoordMapSquare*), which has identical code
    RenderBounds::RenderBounds();

} // namespace jag::oldscape::rs2lib::worldmap
