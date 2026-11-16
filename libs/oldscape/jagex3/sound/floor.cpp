// libs/oldscape/jagex3/sound/floor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "floor.h"

namespace jag::oldscape::sound {
    // 0x100d40508, 1024 bytes, __const
    Floor::m_inverseDBTable = {
        870626366,  871600393,  872526475,  873078844,  873667107,  874293600,  874960807,  875671371,  876428112,
        877234032,  878092323,  879006392,  879979861,  880910216,  881462268,  882050195,  882676329,  883343154,
        884053311,  884809619,  885615076,  886472877,  887386422,  888359334,  889293960,  889845696,  890433286,
        891059062,  891725504,  892435255,  893191130,  893996126,  894853435,  895766457,  896738812,  897677706,
        898229126,  898816380,  899441797,  900107858,  900817203,  901572645,  902377180,  903233998,  904146497,
        905118295,  906061455,  906612559,  907199477,  907824536,  908490216,  909199154,  909954164,  910758238,
        911614565,  912526542,  913497784,  914445207,  914995996,  915582578,  916207279,  916872577,  917581109,
        918335687,  919139300,  919995137,  920906592,  921877278,  922828962,  923379435,  923965681,  924590025,
        925254942,  925963069,  926717214,  927520367,  928375714,  929286647,  930256777,  931212719,  931762878,
        932348788,  932972774,  933637310,  934345031,  935098745,  935901438,  936756295,  937666706,  938636280,
        939596480,  940146323,  940731897,  941355526,  942019682,  942726998,  943480280,  944282514,  945136882,
        946046771,  947015790,  947980243,  948529771,  949115010,  949738282,  950402057,  951108968,  951861819,
        952663593,  953517472,  954426841,  955395304,  956364009,  956913222,  957498126,  958121041,  958784437,
        959490943,  960243362,  961044677,  961898067,  962806915,  963774824,  964747777,  965296676,  965881245,
        966503803,  967166819,  967872921,  968624909,  969425766,  970278667,  971186994,  972154349,  973131549,
        973680133,  974264368,  974886569,  975549205,  976254903,  977006460,  977806858,  978659271,  979567078,
        980533880,  981515323,  982063593,  982647494,  983269339,  983931595,  984636888,  985388015,  986187955,
        987039880,  987947167,  988913415,  989899100,  990447056,  991030622,  991652111,  992313988,  993018877,
        993769575,  994569057,  995420493,  996327261,  997292956,  998282879,  998830522,  999413753,  1000034887,
        1000696385, 1001400871, 1002151138, 1002950162, 1003801111, 1004707360, 1005672501, 1006666662, 1007213991,
        1007796888, 1008417666, 1009078785, 1009782868, 1010532705, 1011331272, 1012181733, 1013087464, 1014052052,
        1015050447, 1015597462, 1016180026, 1016800448, 1017461189, 1018164869, 1018914277, 1019712386, 1020562361,
        1021467572, 1022431609, 1023434235, 1023980937, 1024563167, 1025183234, 1025843597, 1026546873, 1027295853,
        1028093504, 1028942993, 1029847685, 1030811170, 1031818026, 1032364415, 1032946312, 1033566024, 1034226008,
        1034928882, 1035677432, 1036474627, 1037323629, 1038227804, 1039190737, 1040201819, 1040747895, 1041329459,
        1041948816, 1042608423, 1043310894, 1044059015, 1044855754, 1045704269, 1046607927, 1047570308, 1048585615,
        1049131379, 1049712610, 1050331612, 1050990841, 1051692909, 1052440603, 1053236885, 1054084915, 1054988055,
        1055949885, 1056969414, 1057514866, 1058095763, 1058714411, 1059373262, 1060074929, 1060822194, 1061618021,
        1062465565, 1063368187, 1064329467, 1065353216,
    };

    // 0x100d40908, 4112 bytes, __const
    Floor::m_rangeVector = {
        256,         128,         86,          64,          -459907588,  1582048947,  -2015407354, 162443245,
        -2084963976, -1497636485, 1430324487,  1119116808,  1366116242,  -1256614580, 593613511,   545950102,
        -1711461177, -1773194497, -349498583,  125349028,   -1085542765, -131820475,  1627151766,  -499261242,
        -1841018337, 1451581103,  -1319408749, -785173904,  1253635813,  -283007054,  -1050427834, 1263480249,
        -2146920004, -424705911,  228151229,   -1426349700, -1489645726, 538127448,   -2065812013, -271056502,
        -1978638528, 1534811160,  1392063379,  -17599527,   1397187690,  1263422817,  666984618,   -722509744,
        -1865074279, 730953820,   -358940299,  -114662063,  -1293911011, 74185614,    1800727403,  1549471011,
        -1815221205, -1420646830, -1261273767, 627506903,   1325584665,  460388885,   -892654534,  -1086574248,
        -1951298970, 535317442,   1320209895,  1454206067,  -1430394510, -733626007,  -847796757,  395204625,
        -1984950884, 1865159078,  2052239597,  8751870,     1425994358,  -1089970046, 216672824,   -1430700701,
        -1838359803, -37304907,   -1322064189, 1296898554,  -1320658367, -1197661383, 703719781,   -2012310248,
        -1738162463, 1563700081,  -1888434579, -1694203114, 1151550219,  -408546476,  -347839836,  24828107,
        -1976469414, -373803161,  1460714059,  -1478961773, -1466631666, 783528110,   -825522507,  -1438009872,
        -1061343614, -1856833433, -377845515,  -195869155,  1568051768,  30850337,    -1890181788, 1525142914,
        -1010513563, 293604530,   -1279527781, -1575232327, -1459779215, 1321766488,  543808053,   2010183935,
        -607118851,  -1519888752, 249152693,   -271381955,  1166684503,  -1845932041, 1626722788,  -181955164,
        1905819142,  1441774212,  1420408863,  429824304,   -1289209728, -1695253492, -983429075,  1544809942,
        1644542162,  1695884352,  -1561620935, 201599888,   517440936,   -175942540,  -958423176,  -425703251,
        1749937787,  -438865853,  -1174178169, 1447421212,  -344608849,  -1298475053, 591404201,   59114878,
        1920534789,  322936599,   1147482795,  294516442,   253933291,   700441096,   543019480,   191982853,
        1906363796,  730416055,   1529154053,  -842702729,  -226423088,  1185055077,  -1061010871, -1606008779,
        1806482046,  -1690105439, -1555661781, -1169640717, 393160660,   183834847,   -982013566,  16131438,
        1811774627,  1605090796,  -1121697535, -368957057,  -480460877,  -1781253324, 652947155,   -1144959723,
        1911765779,  -276962436,  1171010007,  -455360646,  213615785,   -557311223,  729081606,   -32055194,
        2047594456,  -539545734,  462295033,   -1282208306, -115241524,  -1308653374, -1974902441, 1446022584,
        1745766692,  789958698,   -1460764841, 1193270848,  -1798949426, -21584580,   -859395450,  -49938997,
        1649805975,  -1410558834, -192146567,  416727172,   1626672339,  1837331989,  1834199367,  1303883954,
        2043345999,  -1708512551, 1322002263,  1486635565,  -2061793739, 580802030,   955003934,   -960455199,
        2072754657,  578876121,   271023585,   1333039529,  2025372470,  1303999505,  -1678641265, -361237045,
        666324784,   -999244195,  -1453864501, -1318254683, -1664224493, 1122037305,  -563128098,  188846264,
        620464584,   1413367823,  -149573275,  -459170559,  1665616461,  -1711943706, 2129828107,  -1310704285,
        1046662855,  1691649290,  1299547401,  -1092071802, -2034994836, -724390835,  1900352074,  815682841,
        874919991,   -1811489858, 286784295,   -77432822,   840104234,   -70633164,   282645907,   506017896,
        641629644,   279865340,   -335684711,  -852825426,  -546193353,  952046291,   -1782227360, -1222755021,
        767793984,   -1603752472, 2092803775,  333918562,   718206997,   1739719529,  -159724751,  1185432900,
        1036209337,  -795608791,  14603285,    1186965351,  -821268142,  1753588004,  1994850528,  -321312706,
        933104171,   1817380671,  -1698772933, 71182283,    926632558,   127713503,   293144549,   1702825389,
        748088022,   -318911981,  -461587275,  2037691469,  -791621011,  -864429212,  -1865626316, 1095296470,
        776125724,   -1674578733, 2081719435,  -1346606388, 761723657,   -748257784,  -170693395,  -360740689,
        879459245,   784806085,   58094317,    -1334749088, -913979514,  -1670165005, 1985913788,  1385014781,
        1043827795,  -1708266812, -617194941,  -194393116,  1015700692,  -145601444,  1522606189,  -1850153594,
        765971162,   1522243088,  -447467923,  -2019418648, -243763983,  571385349,   -1686307540, -1122072331,
        636121002,   1783715862,  933566151,   -605386995,  81784319,    758749103,   -1125417219, 470410542,
        938621301,   -695120538,  197615867,   203822211,   -492518258,  1664128080,  2113402144,  -1493279396,
        2090794973,  644522979,   -795927339,  170902039,   520289928,   -2012929735, 1481388593,  802044005,
        1712265230,  -1494450191, -286454669,  1927790771,  -86939739,   -1755698554, -1697530910, 1283020058,
        1682132210,  -1778113099, 915370588,   633109310,   108466167,   -662762643,  -1085473629, -531727032,
        2136845131,  583450917,   1213158322,  -246108870,  -484657424,  -1285097155, 1048270674,  1504186931,
        1972169101,  -1070063838, -768790648,  -1369948270, 1454354076,  1014102146,  1374065667,  -610576448,
        1705000756,  -778947898,  -1354458330, -1466848236, -1169586785, 1796494185,  -797374242,  1915191179,
        1878645486,  1632824534,  822534400,   -774278439,  1297225771,  638411348,   -1329214705, 269521659,
        1828555787,  -1649919848, 1139184910,  118677629,   -1330306964, -1925618242, 928662606,   -1377305728,
        1982155665,  1030640648,  -544952928,  1351545849,  1426557254,  -1036609947, 1449117087,  634507163,
        2084056552,  767987213,   633395614,   483288436,   -1578462381, -1656504760, 1371541134,  -2030918936,
        1867577868,  -652930437,  984270640,   1795657584,  1288288785,  -1772438093, -243431081,  -1371092078,
        -440131945,  1778087419,  -1025857704, 2068782302,  -1189141700, 2038238301,  -1260232058, 288458565,
        -175286161,  -918967825,  -1673946242, -1513780646, 1572084587,  778571620,   528447427,   -796483012,
        -7237647,    -1727961172, 611970000,   -494382889,  -1564233141, 557152907,   1514912784,  2025081679,
        -456005360,  803937064,   2048644590,  -1638874313, 1197582404,  1778700560,  -69977279,   -754768107,
        -496211768,  -1758623364, -915333056,  -853944909,  -1165586142, -2062823063, -1119244144, -211350994,
        -1204511113, -673880994,  -1255057298, 1502676927,  1578907955,  -666901881,  1022783816,  1288727389,
        -1288644201, 1666661067,  802385476,   383760408,   -1417993027, -748272836,  1508638313,  -1933109369,
        -1578561716, -742525301,  1370695394,  1612065428,  1187569624,  474044505,   -629392196,  628439798,
        -1444582416, 594182301,   -1980755300, 894363664,   -232335414,  1935424930,  -1990163,    251851661,
        -1164923869, 595729433,   -1231525326, 1875345340,  -1793724763, 1693032232,  1063207484,  -1163487266,
        -1332184565, -1761552792, 1752849468,  -1165138647, 1758873249,  782798421,   349358437,   814856868,
        -1438376490, 805219174,   1343889554,  -1671301275, -2005377662, -510155266,  -775057756,  -642853925,
        -1470244060, 1326869942,  -2041048910, -1029168957, 1972102366,  -830331775,  -261093515,  2019343944,
        -1290162291, -640372302,  -1120375668, -1818185146, -1867715367, -1853139079, 937918500,   1114217009,
        -1180604333, 1768869812,  1631751714,  1299777742,  1700713913,  -620890382,  393890739,   -941624493,
        -1444107614, -1716894875, 461484556,   674750314,   -1982763610, 1474357389,  -1865951006, 1844981256,
        -1564680918, -1203718847, -2048792862, 1056394726,  2128766592,  818268516,   -237431509,  -1005895045,
        -1330505259, 747891795,   2105793996,  1644056547,  -1828398399, 1809738458,  -196831494,  -1271045376,
        -1167360443, -599973225,  1656990202,  825659469,   1739580279,  -458540111,  533952939,   1065881306,
        -1604343622, 1694359170,  -1700687536, -159448439,  -2108036486, -1951526904, 460257658,   -1816173909,
        -485020078,  1074256512,  -2075531906, -1969123315, 2136625208,  -728259641,  -93228529,   810109840,
        -74819261,   -1865612204, 1982565328,  -1649842272, -1700443873, -1618958412, -34851386,   -1737871642,
        -104161859,  577370228,   1785379838,  -1017053916, 1845879107,  281904152,   475250263,   -1042488643,
        -489170316,  311669539,   -1861695542, 52981544,    -2123179936, 2146983395,  433285894,   1726598094,
        -390124338,  -162443353,  -806848764,  1960917130,  886674020,   786595480,   -1152589609, -828457419,
        -98309605,   1723845031,  1940007214,  678406663,   -669045985,  566710037,   -93248634,   1829556837,
        -243889231,  -701524487,  700587392,   2134319235,  766259739,   -291844881,  1475251269,  1966865182,
        -344040120,  -356226215,  -1750047314, 2113845063,  -925918692,  -2119180096, 343100696,   -593652123,
        -341697892,  168699724,   -554548464,  -2135529494, 879863654,   -1699949767, -1310276919, 988312182,
        -240911321,  -1703218166, 1746090550,  -700918290,  -745357853,  1435570898,  -212254440,  -1823007988,
        -220255761,  720378010,   846810648,   -1957574032, 646255748,   449065452,   1447403017,  -1452992769,
        -389591271,  1309804254,  -837193034,  -578217772,  -881906292,  835659813,   1473945544,  684882598,
        -503146240,  -588719411,  -732233572,  2126547545,  1070118331,  1727695834,  -1335405167, -2068571184,
        -518332696,  1814838377,  725556322,   575151581,   -1036345603, -1461273615, -1309617564, 1728128683,
        -11126689,   277241901,   870181956,   1947125561,  655722228,   -1518109688, 1433213877,  -567128336,
        -135795321,  -1336631489, -845819800,  566707633,   -741986366,  -828877386,  1582480612,  -729504877,
        -1532252308, 549001146,   -705252666,  1267724982,  1012930439,  288188117,   1004500773,  1978893993,
        -1364064008, -797752854,  597085896,   -1676238822, -921989459,  505997064,   -1170086796, -641216904,
        -1133617661, -456020500,  -1194001806, -1998964066, 616343032,   1431557283,  -1644926481, 845193987,
        -1234257189, 1158247196,  -1003061156, -678384622,  -1872840226, 575061209,   1575592638,  571706480,
        756252030,   -1779486960, 441365626,   -1285996617, 1976123485,  -313836748,  2088117611,  -1952060374,
        790178692,   -1593473017, 537707924,   1750199603,  -1935513583, -495056241,  -1142198614, 697467217,
        936234013,   462901447,   -59975254,   1050178429,  1746203430,  -1989932608, -1705709573, -2077869018,
        885037307,   -75817773,   -946880764,  734314712,   -1611150554, -704533896,  1456021538,  508908799,
        781745826,   1807344369,  435095338,   1695450708,  1927078473,  1528599427,  1977586291,  2144481741,
        606910750,   1598174772,  564491144,   -1861804844, -2046133409, 271569388,   -1604182110, -689668938,
        912650197,   -271968224,  -138081370,  -1026584712, 1806258494,  2133484629,  -2080515033, 2019251429,
        1031343205,  254592354,   -1914225254, -1669178883, -1638545360, -396933190,  106977110,   -382846561,
        658065562,   -1678336010, 271008053,   -1991586821, 2071392293,  -1488957728, 1725927559,  -1013130012,
        665100098,   -1558938633, 1782935899,  -412069801,  125950279,   -327549619,  -505800226,  715912213,
        1020033505,  1136174465,  -165404683,  884541059,   -534035382,  -1015243594, -2142904819, -1978820274,
        2127642429,  -244651771,  -1938944009, 1618588686,  359431784,   471961301,   98158028,    360375356,
        1677839044,  -444573931,  319583177,   1060448170,  -102762561,  1461135209,  1852056217,  -1253317625,
        1863175238,  356549202,   1811695463,  1539238182,  205115283,   1511923842,  -360993976,  -1627551408,
        2102660027,  -1241527102, -1113670583, -857310431,  -511510832,  892047773,   -873584559,  919266347,
        1970339201,  624243854,   -2082551577, -1775245179, 1441103044,  -478350748,  139585408,   -953398077,
        1873328704,  1364720296,  2075455681,  -1016889843, -1334360597, -397022578,  231499457,   1209608592,
        1823821500,  -376451528,  -464153409,  -1511316343, 1335397545,  -1488959055, 1817421840,  1621771499,
        1995770919,  1227428221,  -1642615275, -106916028,  -1430539108, 1484613720,  -362075199,  -1013175144,
        1953090519,  -1646011025, 41417273,    1852309984,  1447923603,  322600839,   -1946357612, 1802174914,
        1862548761,  -1391221781, 2014693015,  875680750,   -1276771341, 472094381,   107050317,   -1101179663,
        1695840416,  519922591,   -430066503,  1371359338,  1186216692,  1394062676,  637410861,   352107528,
        1968750162,  -1098908260, -1614821361, 133549767,   -1441561696, -1541888517, -531392002,  1036751186,
        1606535391,  -360218296,  1239414817,  -633463741,  1576569611,  -1377237376, -1035070865, -1625426907,
        1084034855,  1514950216,  1941701643,  -1997140025, -1202802675, -486793347,  131715902,   102931550,
        1119808500,  -492137906,  -1342299451, -1074032277, 1160587384,  768686335,   644177123,   -367742707,
        1482865752,  103868059,   -1786356757, -215784664,  -1581645454, 315022212,   -503672926,  -911877001,
        459962883,   382758075,   1214279517,  -1536429916, 1548794231,  1505741417,  -1058602381, 1623366854,
        20909563,    -1507946451, 1914713971,  2021680640,  -1184390655, 381346002,   207143330,   -93052515,
        154652494,   1189928549,  -1404960419, 713079949,   1300531978,  -1180347972, 801459187,   1598246126,
        181103492,   -230421647,  -803045901,  223194889,   -232123538,  -359575003,  -1370297310, -135191404,
        282737725,   -528058954,  1122569691,  1359292861,  335232617,   -1512557618, -873487061,  -1803288113,
        311884523,   410564998,   1032397669,  -2032288973, -404976047,  -1427141455, 1223762686,  204695740,
        135175426,   -1129109630, -1511304445, -690601930,
    };

    // 0x100296c90, 144 bytes, placed by class name and debug map
    // Floor::LowNeighbour(Array<int, eastl::allocator> const&, int)
    ulong Floor::LowNeighbour(Array* param_1, int param_2) {
        int iVar1;
        int iVar2;
        int* piVar3;
        ulong uVar4;
        int iVar5;
        ulong uVar6;

        piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1, (long)param_2);
        if (param_2 < 1) {
            uVar6 = 4294967295;
        } else {
            iVar1 = *piVar3;
            iVar5 = -2147483648;
            uVar6 = 4294967295;
            uVar4 = 0;
            do {
                piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1, uVar4);
                iVar2 = *piVar3;
                if (iVar2 < iVar1 && iVar5 < iVar2) {
                    uVar6 = uVar4 & 4294967295;
                    iVar5 = iVar2;
                }
                uVar4 = uVar4 + 1;
            } while ((uint)param_2 != uVar4);
        }
        return uVar6;
    }

    // 0x100296d20, 144 bytes, placed by class name and debug map
    // Floor::HighNeighbour(Array<int, eastl::allocator> const&, int)
    ulong Floor::HighNeighbour(Array* param_1, int param_2) {
        int iVar1;
        int iVar2;
        int* piVar3;
        ulong uVar4;
        int iVar5;
        ulong uVar6;

        piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1, (long)param_2);
        if (param_2 < 1) {
            uVar6 = 4294967295;
        } else {
            iVar1 = *piVar3;
            iVar5 = 2147483647;
            uVar6 = 4294967295;
            uVar4 = 0;
            do {
                piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1, uVar4);
                iVar2 = *piVar3;
                if (iVar1 < iVar2 && iVar2 < iVar5) {
                    uVar6 = uVar4 & 4294967295;
                    iVar5 = iVar2;
                }
                uVar4 = uVar4 + 1;
            } while ((uint)param_2 != uVar4);
        }
        return uVar6;
    }

    // 0x100296db0, 48 bytes, placed by class name and debug map
    // Floor::RenderPoint(int, int, int, int, int) const
    int Floor::RenderPoint(int param_1, int param_2, int param_3, int param_4, int param_5) {
        int iVar1;
        int iVar2;

        iVar2 = param_4 - param_2;
        iVar1 = -iVar2;
        if (-iVar2 < 0) {
            iVar1 = iVar2;
        }
        iVar1 = (iVar1 * (param_5 - param_1)) / (param_3 - param_1);
        if (iVar2 < 0) {
            iVar1 = -iVar1;
        }
        return iVar1 + param_2;
    }

    // 0x100296de0, 352 bytes, placed by class name and debug map
    // Floor::RenderLine(int, int, int, int, Array<float, eastl::allocator>&, int) const
    void Floor::RenderLine(int param_1, int param_2, int param_3, int param_4, Array* param_5, int param_6) {
        float fVar1;
        float fVar2;
        uint uVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        float* pfVar7;
        int iVar8;
        int iVar9;
        uint uVar10;
        ulong uVar11;
        int iVar12;
        int iVar13;

        uVar10 = param_4 - param_2;
        iVar9 = param_3 - param_1;
        uVar3 = -uVar10;
        if ((int)-uVar10 < 0) {
            uVar3 = uVar10;
        }
        iVar4 = (int)uVar10 / iVar9;
        iVar5 = -iVar4;
        if (-iVar4 < 0) {
            iVar5 = iVar4;
        }
        pfVar7 =
            (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_5, (long)param_1);
        fVar1 = *pfVar7;
        pfVar7 = (float*)std::array<float, 256ul>::operator[]((long)param_2);
        fVar2 = *pfVar7;
        pfVar7 =
            (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_5, (long)param_1);
        *pfVar7 = fVar1 * fVar2;
        if (param_6 < param_3) {
            param_3 = param_6;
        }
        if (param_1 + 1 < param_3) {
            uVar11 = (ulong)(param_1 + 1);
            iVar13 = ~param_1 + param_3;
            iVar12 = 0;
            do {
                iVar12 = iVar12 + (uVar3 - iVar5 * iVar9);
                iVar8 = iVar9;
                iVar6 = ((int)~uVar10 >> 31) * -2 + -1;
                if (iVar12 < iVar9) {
                    iVar6 = 0;
                    iVar8 = 0;
                }
                iVar12 = iVar12 - iVar8;
                param_2 = param_2 + iVar4 + iVar6;
                pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_5,
                                                                            uVar11);
                fVar1 = *pfVar7;
                pfVar7 = (float*)std::array<float, 256ul>::operator[]((long)param_2);
                fVar2 = *pfVar7;
                pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_5,
                                                                            uVar11);
                *pfVar7 = fVar1 * fVar2;
                uVar11 = uVar11 + 1;
                iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
        }
    }

    // 0x100296f60, 480 bytes, placed by class name and debug map
    // Floor::FloorDecoder::QuickSort(int, int)
    void Floor::FloorDecoder::QuickSort(int param_1, int param_2) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1 uVar1;
        undefined1 uVar2;
        int iVar3;
        undefined4 uVar4;
        int iVar5;
        undefined4 uVar6;
        int* piVar7;
        undefined4* puVar8;
        undefined1* puVar9;
        undefined1* puVar10;
        int iVar11;
        ulong uVar12;
        ulong uVar13;

        if (param_1 < param_2) {
            puVar10 = &field_16;
            uVar13 = (ulong)param_1;
            piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar10, uVar13);
            iVar3 = *piVar7;
            this_00 = &field_40;
            puVar8 =
                (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar13);
            uVar4 = *puVar8;
            this_01 = &field_64;
            puVar9 =
                (undefined1*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)this_01, uVar13);
            uVar1 = *puVar9;
            iVar11 = param_1;
            do {
                uVar13 = uVar13 + 1;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar10, uVar13);
                iVar5 = *piVar7;
                if (iVar5 < iVar3) {
                    uVar12 = (ulong)iVar11;
                    piVar7 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar10, uVar12);
                    *piVar7 = iVar5;
                    puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_00, uVar13);
                    uVar6 = *puVar8;
                    puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_00, uVar12);
                    *puVar8 = uVar6;
                    puVar9 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                        (Array<bool, eastl::allocator>*)this_01, uVar13);
                    uVar2 = *puVar9;
                    puVar9 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                        (Array<bool, eastl::allocator>*)this_01, uVar12);
                    *puVar9 = uVar2;
                    iVar11 = iVar11 + 1;
                    uVar12 = (ulong)iVar11;
                    puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar10, uVar12);
                    uVar6 = *puVar8;
                    puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar10, uVar13);
                    *puVar8 = uVar6;
                    puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_00, uVar12);
                    uVar6 = *puVar8;
                    puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_00, uVar13);
                    *puVar8 = uVar6;
                    puVar9 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                        (Array<bool, eastl::allocator>*)this_01, uVar12);
                    uVar2 = *puVar9;
                    puVar9 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                        (Array<bool, eastl::allocator>*)this_01, uVar13);
                    *puVar9 = uVar2;
                }
            } while (uVar13 != (long)param_2);
            uVar13 = (ulong)iVar11;
            piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar10, uVar13);
            *piVar7 = iVar3;
            puVar8 =
                (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar13);
            *puVar8 = uVar4;
            puVar10 =
                (undefined1*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)this_01, uVar13);
            *puVar10 = uVar1;
            QuickSort(this, param_1, iVar11 + -1);
            QuickSort(this, iVar11 + 1, param_2);
        }
    }

    // 0x100297140, 1216 bytes, base-object constructor, placed by class name
    // Floor::Floor()
    void Floor::Floor() {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        undefined1* this_04;
        int iVar1;
        uint uVar2;
        int iVar3;
        undefined4 uVar4;
        ulong uVar5;
        int* piVar6;
        undefined4* puVar7;
        Array<int, eastl::allocator>* pAVar8;
        ulong uVar9;
        long lVar10;
        long lVar11;
        ulong uVar12;
        uint uVar13;
        uint uVar14;
        ulong uVar15;
        Array<int, eastl::allocator> local_48[24];

        new (this) Array<int, eastl::allocator>();
        field_24 = 0;
        this_00 = &field_32;
        new (this_00) Array<int, eastl::allocator>();
        this_01 = &field_56;
        new (this_01) Array<int, eastl::allocator>();
        this_02 = &field_80;
        new (this_02) Array<int, eastl::allocator>();
        this_03 = &field_104;
        new (this_03) Array<int, eastl::allocator>();
        this_04 = &field_128;
        new (this_04) Array<Array<int, eastl::allocator>, eastl::allocator>();
        uVar2 = (&JagVorbis::m_staticUnpacker)->ReadBits(16);
        if (uVar2 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/floor.cpp",
                201, "Unexpected type: %i", (ulong)uVar2);
        }
        uVar2 = (&JagVorbis::m_staticUnpacker)->ReadBits(5);
        Array<int, eastl::allocator>::Array(local_48, (long)(int)uVar2);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)this_00, (Array*)local_48);
        local_48->~Array();
        uVar5 = (ulong)uVar2;
        if ((int)uVar2 < 1) {
            uVar13 = 0;
        } else {
            uVar12 = 0;
            uVar13 = 0;
            do {
                iVar3 = (&JagVorbis::m_staticUnpacker)->ReadBits(4);
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar12);
                *piVar6 = iVar3;
                uVar14 = iVar3 + 1;
                if (iVar3 < (int)uVar13) {
                    uVar14 = uVar13;
                }
                uVar13 = uVar14;
                uVar12 = uVar12 + 1;
            } while (uVar5 != uVar12);
        }
        uVar12 = (ulong)(int)uVar13;
        Array<int, eastl::allocator>::Array(local_48, uVar12);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)this_01, (Array*)local_48);
        local_48->~Array();
        Array<int, eastl::allocator>::Array(local_48, uVar12);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)this_02, (Array*)local_48);
        local_48->~Array();
        Array<int, eastl::allocator>::Array(local_48, uVar12);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)this_03, (Array*)local_48);
        local_48->~Array();
        new (local_48) Array<Array<int, eastl::allocator>, eastl::allocator>(uVar12);
        Array<Array<int, eastl::allocator>, eastl::allocator>::operator=(
            (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_04, (Array*)local_48);
        local_48->~Array();
        if (0 < (int)uVar13) {
            uVar12 = 0;
            do {
                iVar3 = (&JagVorbis::m_staticUnpacker)->ReadBits(3);
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar12);
                *piVar6 = iVar3 + 1;
                iVar3 = (&JagVorbis::m_staticUnpacker)->ReadBits(2);
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar12);
                *piVar6 = iVar3;
                if (iVar3 != 0) {
                    uVar4 = (&JagVorbis::m_staticUnpacker)->ReadBits(8);
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_03, uVar12);
                    *puVar7 = uVar4;
                }
                uVar14 = 1 << ((byte)iVar3 & 31);
                pAVar8 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_04, uVar12);
                pAVar8->set_max_size((long)(int)uVar14, 5);
                if (iVar3 != 31) {
                    uVar15 = (ulong)uVar14;
                    if ((int)uVar14 < 2) {
                        uVar15 = 1;
                    }
                    uVar9 = 0;
                    do {
                        iVar3 = (&JagVorbis::m_staticUnpacker)->ReadBits(8);
                        pAVar8 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_04, uVar12);
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[](pAVar8, uVar9);
                        *piVar6 = iVar3 + -1;
                        uVar9 = uVar9 + 1;
                    } while (uVar15 != uVar9);
                }
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar13);
        }
        iVar3 = (&JagVorbis::m_staticUnpacker)->ReadBits(2);
        field_24 = iVar3 + 1;
        iVar3 = (&JagVorbis::m_staticUnpacker)->ReadBits(4);
        if ((int)uVar2 < 1) {
            uVar12 = 2;
        } else {
            uVar12 = 2;
            uVar15 = 0;
            do {
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar15);
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01,
                                                                        (long)*piVar6);
                uVar12 = (long)(int)uVar12 + (long)*piVar6;
                uVar15 = uVar15 + 1;
            } while (uVar5 != uVar15);
        }
        set_max_size(uVar12, 5);
        puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this, 0);
        *puVar7 = 0;
        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this, 1);
        *piVar6 = 1 << ((byte)iVar3 & 31);
        if (0 < (int)uVar2) {
            lVar10 = 2;
            uVar12 = 0;
            do {
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar12);
                iVar1 = *piVar6;
                for (lVar11 = 0; piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                                     (Array<int, eastl::allocator>*)this_01, (long)iVar1),
                    (int)lVar11 < *piVar6;
                     lVar11 = lVar11 + 1) {
                    uVar4 = (&JagVorbis::m_staticUnpacker)->ReadBits(iVar3);
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this,
                                                                                   (int)lVar10 + lVar11);
                    *puVar7 = uVar4;
                }
                uVar12 = uVar12 + 1;
                lVar10 = (int)lVar10 + lVar11;
            } while (uVar12 != uVar5);
        }
    }

    // 0x100297630, 16 bytes, complete-object constructor, placed by class name
    // Floor::Floor(): jumps straight to the base-object constructor

    // 0x100297640, 1120 bytes, placed by class name
    // Floor::PacketDecode(JagVorbis const&, BitUnpacker&) const
    Floor* Floor::PacketDecode(JagVorbis* param_1, BitUnpacker* param_2) {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        int iVar1;
        Floor* pFVar2;
        int iVar3;
        undefined4 uVar4;
        uint uVar5;
        ulong uVar6;
        undefined4* puVar7;
        int* piVar8;
        long lVar9;
        CodeBook* pCVar10;
        Array<int, eastl::allocator>* pAVar11;
        BitUnpacker* in_RCX;
        ulong uVar12;
        int iVar13;
        undefined1 local_188[40];
        Array<int, eastl::allocator> local_160[24];
        Array<bool, eastl::allocator> local_148[24];
        Array<int, eastl::allocator> local_130[24];
        Array<int, eastl::allocator> local_118[24];
        Array<bool, eastl::allocator> local_100[24];
        Array<int, eastl::allocator> local_e8[24];
        Array<int, eastl::allocator> local_d0[24];
        Array<bool, eastl::allocator> local_b8[24];
        Array<bool, eastl::allocator> local_a0[24];
        Array<Array<int, eastl::allocator>, eastl::allocator>* local_88;
        ulong local_80;
        Array<int, eastl::allocator>* local_78;
        Array<int, eastl::allocator>* local_70;
        Array<int, eastl::allocator>* local_68;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_60;
        int local_58;
        int local_54;
        Floor* local_50;
        ulong local_48;
        BitUnpacker* local_40;
        uint local_34;

        local_50 = this;
        local_40 = in_RCX;
        iVar3 = in_RCX->ReadBit();
        if (iVar3 == 0) {
            Array<int, eastl::allocator>::Array(local_130);
            Array<int, eastl::allocator>::Array(local_118);
            Array<bool, eastl::allocator>::Array(local_100);
            new (local_50) FloorDecoder(param_1, 0, local_130, local_118, local_100);
            local_100->~Array();
            local_118->~Array();
            local_130->~Array();
        } else {
            Array<int, eastl::allocator>::Array(local_e8);
            Array<int, eastl::allocator>::Array(local_d0);
            Array<bool, eastl::allocator>::Array(local_b8);
            new (local_188) FloorDecoder(param_1, 1, local_e8, local_d0, local_b8);
            local_b8->~Array();
            local_d0->~Array();
            local_e8->~Array();
            uVar6 = param_1->end();
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(local_188 + 16);
            iVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            if ((ulong)(long)iVar3 < uVar6) {
                this_00->set_max_size(uVar6, 1);
                local_160->set_max_size(uVar6, 1);
                Array<bool, eastl::allocator>::Array(local_a0, uVar6);
                Array<bool, eastl::allocator>::operator=(local_148, (Array*)local_a0);
                local_a0->~Array();
            }
            if (uVar6 != 0) {
                uVar12 = 0;
                do {
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)param_1, uVar12);
                    uVar4 = *puVar7;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_00, uVar12);
                    *puVar7 = uVar4;
                    uVar12 = uVar12 + 1;
                } while (uVar6 != uVar12);
            }
            piVar8 = (int*)std::array<int, 4ul>::operator[]((long)*(int*)&param_1->field_24 - 1);
            iVar3 = core::math::MathTool::BitsRequired(*piVar8 + -1);
            uVar4 = local_40->ReadBits(iVar3);
            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](local_160, 0);
            *puVar7 = uVar4;
            uVar4 = local_40->ReadBits(iVar3);
            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](local_160, 1);
            *puVar7 = uVar4;
            pAVar11 = (Array<int, eastl::allocator>*)&param_1->field_32;
            lVar9 = pAVar11->end();
            if (lVar9 != 0) {
                local_78 = (Array<int, eastl::allocator>*)&param_1->field_56;
                local_70 = (Array<int, eastl::allocator>*)&param_1->field_80;
                local_68 = (Array<int, eastl::allocator>*)&param_1->field_104;
                local_88 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)&param_1->field_128;
                iVar3 = 2;
                uVar6 = 0;
                local_60 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pAVar11;
                do {
                    local_80 = uVar6;
                    piVar8 = (int*)Array<int, eastl::allocator>::operator[](pAVar11, uVar6);
                    uVar6 = (ulong)*piVar8;
                    piVar8 = (int*)Array<int, eastl::allocator>::operator[](local_78, uVar6);
                    iVar1 = *piVar8;
                    local_48 = uVar6;
                    piVar8 = (int*)Array<int, eastl::allocator>::operator[](local_70, uVar6);
                    local_58 = *piVar8;
                    local_34 = -1 << ((byte)local_58 & 31);
                    if (local_58 < 1) {
                        uVar5 = 0;
                    } else {
                        piVar8 = (int*)Array<int, eastl::allocator>::operator[](local_68, local_48);
                        pCVar10 = (CodeBook*)Array<CodeBook, eastl::allocator>::operator[](
                            (Array<CodeBook, eastl::allocator>*)&JagVorbis::m_codebook, (long)*piVar8);
                        uVar5 = pCVar10->DecodeScalar(local_40);
                    }
                    if (0 < iVar1) {
                        local_34 = ~local_34;
                        uVar6 = (ulong)iVar3;
                        iVar13 = 0;
                        local_54 = iVar3;
                        do {
                            pAVar11 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](local_88, local_48);
                            piVar8 =
                                (int*)Array<int, eastl::allocator>::operator[](pAVar11, (long)(int)(uVar5 & local_34));
                            uVar5 = (int)uVar5 >> ((byte)local_58 & 31);
                            if ((long)*piVar8 < 0) {
                                uVar4 = 0;
                            } else {
                                pCVar10 = (CodeBook*)Array<CodeBook, eastl::allocator>::operator[](
                                    (Array<CodeBook, eastl::allocator>*)&JagVorbis::m_codebook, (long)*piVar8);
                                uVar4 = pCVar10->DecodeScalar(local_40);
                            }
                            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](local_160, uVar6);
                            uVar6 = uVar6 + 1;
                            *puVar7 = uVar4;
                            iVar13 = iVar13 + -1;
                        } while (-iVar1 != iVar13);
                        iVar3 = local_54 - iVar13;
                        pAVar11 = (Array<int, eastl::allocator>*)local_60;
                    }
                    uVar6 = local_80 + 1;
                    uVar12 = pAVar11->end();
                } while (uVar6 < uVar12);
            }
            pFVar2 = local_50;
            new (local_50) FloorDecoder(local_188);
            local_188->~FloorDecoder();
            local_50 = pFVar2;
        }
        return local_50;
    }

    // 0x100297bb0, 864 bytes, placed by class name
    // Floor::FloorDecoder::SynthMul(Array<float, eastl::allocator>&, int)
    void Floor::FloorDecoder::SynthMul(Array* param_1, int param_2) {
        undefined1* this_00;
        undefined1* this_01;
        float fVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        uint uVar8;
        ulong uVar9;
        int* piVar10;
        undefined1* puVar11;
        uint* puVar12;
        undefined1* puVar13;
        char* pcVar14;
        float* pfVar15;
        uint uVar16;
        ulong uVar17;
        Floor* pFVar18;
        ulong uVar19;
        ulong uVar20;
        uint uVar21;
        int iVar22;
        bool bVar23;
        int local_34;

        uVar9 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_0);
        piVar10 = (int*)std::array<int, 4ul>::operator[]((long)*(int*)(field_0 + 24) - 1);
        iVar2 = *piVar10;
        this_00 = &field_64;
        puVar11 = (undefined1*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)this_00, 1);
        *puVar11 = 1;
        iVar22 = 0;
        puVar11 = (undefined1*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)this_00, 0);
        *puVar11 = 1;
        puVar11 = &field_16;
        this_01 = &field_40;
        if (2 < uVar9) {
            uVar19 = 2;
            do {
                iVar6 = LowNeighbour((Array*)puVar11, (int)uVar19);
                iVar7 = HighNeighbour((Array*)puVar11, (int)uVar19);
                uVar17 = (ulong)iVar6;
                piVar10 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar11, uVar17);
                iVar6 = *piVar10;
                piVar10 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar17);
                iVar3 = *piVar10;
                uVar20 = (ulong)iVar7;
                piVar10 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar11, uVar20);
                iVar7 = *piVar10;
                piVar10 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar20);
                iVar4 = *piVar10;
                pFVar18 = (Floor*)puVar11;
                piVar10 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar11, uVar19);
                uVar8 = RenderPoint(pFVar18, iVar6, iVar3, iVar7, iVar4, *piVar10);
                puVar12 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar19);
                uVar5 = *puVar12;
                if (uVar5 == 0) {
                    puVar13 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                        (Array<bool, eastl::allocator>*)this_00, uVar19);
                    *puVar13 = 0;
                } else {
                    uVar21 = iVar2 - uVar8;
                    uVar16 = uVar8;
                    if ((int)uVar21 < (int)uVar8) {
                        uVar16 = uVar21;
                    }
                    puVar13 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                        (Array<bool, eastl::allocator>*)this_00, uVar20);
                    *puVar13 = 1;
                    puVar13 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                        (Array<bool, eastl::allocator>*)this_00, uVar17);
                    *puVar13 = 1;
                    puVar13 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                        (Array<bool, eastl::allocator>*)this_00, uVar19);
                    *puVar13 = 1;
                    if ((int)uVar5 < (int)(uVar16 * 2)) {
                        if ((uVar5 & 1) == 0) {
                            iVar6 = (int)uVar5 / 2;
                        } else {
                            iVar6 = -((int)((uVar5 - ((int)(uVar5 + 1) >> 31)) + 1) >> 1);
                        }
                        uVar8 = iVar6 + uVar8;
                    } else {
                        bVar23 = (int)uVar8 < (int)uVar21;
                        uVar8 = ~uVar5 + iVar2;
                        if (bVar23) {
                            uVar8 = uVar5;
                        }
                    }
                }
                puVar12 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar19);
                *puVar12 = uVar8;
                uVar19 = uVar19 + 1;
            } while (uVar9 != uVar19);
        }
        QuickSort(this, 0, (int)uVar9 + -1);
        piVar10 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, 0);
        local_34 = *(int*)(field_0 + 24) * *piVar10;
        bVar23 = 1 < uVar9;
        if (bVar23) {
            uVar19 = 1;
            iVar22 = 0;
            do {
                pcVar14 =
                    (char*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)this_00, uVar19);
                if (*pcVar14 != '\0') {
                    piVar10 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar11, uVar19);
                    iVar2 = *piVar10;
                    pFVar18 = (Floor*)this_01;
                    piVar10 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar19);
                    iVar6 = *(int*)(field_0 + 24) * *piVar10;
                    RenderLine(pFVar18, iVar22, local_34, iVar2, iVar6, param_1, param_2);
                    if (param_2 <= iVar2)
                        break;
                    local_34 = iVar6;
                    iVar22 = iVar2;
                }
                uVar19 = uVar19 + 1;
                bVar23 = uVar19 < uVar9;
            } while (uVar9 != uVar19);
        }
        if ((!bVar23) && (pfVar15 = (float*)std::array<float, 256ul>::operator[]((long)local_34), iVar22 < param_2)) {
            fVar1 = *pfVar15;
            uVar9 = (ulong)iVar22;
            iVar22 = param_2 - iVar22;
            do {
                pfVar15 =
                    (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, uVar9);
                *pfVar15 = *pfVar15 * fVar1;
                uVar9 = uVar9 + 1;
                iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
        }
    }

    // 0x100297f10, 16 bytes, placed by class name
    // Floor::FloorDecoder::HasResidue() const
    undefined1 Floor::FloorDecoder::HasResidue() {
        return m_hasResidue;
    }

} // namespace jag::oldscape::sound
