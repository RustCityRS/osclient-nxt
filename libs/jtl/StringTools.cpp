// libs/jtl/StringTools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

#include "StringTools.h"

namespace jag::stringtools {
    // 0x100d9ee24
    int32_t UNICODE_CODEPOINT_BYTE_MAX[3] = {127, 2047, 32767};

    // 0x100f4dd00
    int32_t UTF8_size_mask = -253706240;

    // 0x100f4dd04
    int32_t UTF8_value_mask = 118431615;

    // 0x100f4dd08
    int32_t wdata[128] = {
        65536,    196610,   327684,    458758,    589832,    720906,    851980,    983054,    1114128,   1245202,
        1376276,  1507350,  1638424,   1769498,   1900572,   2031646,   2162720,   2293794,   2424868,   2555942,
        2687016,  2818090,  2949164,   3080238,   3211312,   3342386,   3473460,   3604534,   3735608,   3866682,
        3997756,  4128830,  4259904,   4390978,   4522052,   4653126,   4784200,   4915274,   5046348,   5177422,
        5308496,  5439570,  5570644,   5701718,   5832792,   5963866,   6094940,   6226014,   6357088,   6488162,
        6619236,  6750310,  6881384,   7012458,   7143532,   7274606,   7405680,   7536754,   7667828,   7798902,
        7929976,  8061050,  8192124,   8323198,   8364,      26353690,  539369502, 539041824, 540017350, 540606816,
        338,      381,      538443776, 538714137, 539107357, 538189843, 555877084, 540672353, 339,       24641918,
        10551456, 10682530, 10813604,  10944678,  11075752,  11206826,  11337900,  11468974,  11600048,  11731122,
        11862196, 11993270, 12124344,  12255418,  12386492,  12517566,  12648640,  12779714,  12910788,  13041862,
        13172936, 13304010, 13435084,  13566158,  13697232,  13828306,  13959380,  14090454,  14221528,  14352602,
        14483676, 14614750, 14745824,  14876898,  15007972,  15139046,  15270120,  15401194,  15532268,  15663342,
        15794416, 15925490, 16056564,  16187638,  16318712,  16449786,  16580860,  16711934,
    };

    // 0x100cb7bd0
    void WideToCP1252(char16_t arg1) {
        uint8_t uVar1;
        char16_t wVar2;

        if (arg1 < L'–') {
            switch (arg1) {
            case L'Œ':
                uVar1 = 140;
                break;
            case L'œ':
                uVar1 = 156;
                break;
            case L'Ŕ':
            case L'ŕ':
            case L'Ŗ':
            case L'ŗ':
            case L'Ř':
            case L'ř':
            case L'Ś':
            case L'ś':
            case L'Ŝ':
            case L'ŝ':
            case L'Ş':
            case L'ş':
            case L'Ţ':
            case L'ţ':
            case L'Ť':
            case L'ť':
            case L'Ŧ':
            case L'ŧ':
            case L'Ũ':
            case L'ũ':
            case L'Ū':
            case L'ū':
            case L'Ŭ':
            case L'ŭ':
            case L'Ů':
            case L'ů':
            case L'Ű':
            case L'ű':
            case L'Ų':
            case L'ų':
            case L'Ŵ':
            case L'ŵ':
            case L'Ŷ':
            case L'ŷ':
            case L'Ź':
            case L'ź':
            case L'Ż':
            case L'ż':
            case L'ſ':
            case L'ƀ':
            case L'Ɓ':
            case L'Ƃ':
            case L'ƃ':
            case L'Ƅ':
            case L'ƅ':
            case L'Ɔ':
            case L'Ƈ':
            case L'ƈ':
            case L'Ɖ':
            case L'Ɗ':
            case L'Ƌ':
            case L'ƌ':
            case L'ƍ':
            case L'Ǝ':
            case L'Ə':
            case L'Ɛ':
            case L'Ƒ':
                goto switchD_100cb7c01_caseD_2015;
            case L'Š':
                uVar1 = 138;
                break;
            case L'š':
                uVar1 = 154;
                break;
            case L'Ÿ':
                uVar1 = 159;
                break;
            case L'Ž':
                uVar1 = 142;
                break;
            case L'ž':
                uVar1 = 158;
                break;
            case L'ƒ':
                uVar1 = 131;
                break;
            default:
                if (arg1 == L'ˆ') {
                    return 136;
                }
                if (arg1 == L'˜') {
                    return 152;
                }
                goto switchD_100cb7c01_caseD_2015;
            }
        } else {
            uVar1 = 128;
            switch (arg1) {
            case L'–':
                uVar1 = 150;
                break;
            case L'—':
                uVar1 = 151;
                break;
            case L'‘':
                uVar1 = 145;
                break;
            case L'’':
                uVar1 = 146;
                break;
            case L'‚':
                uVar1 = 130;
                break;
            case L'“':
                uVar1 = 147;
                break;
            case L'”':
                uVar1 = 148;
                break;
            case L'„':
                uVar1 = 132;
                break;
            case L'†':
                uVar1 = 134;
                break;
            case L'‡':
                uVar1 = 135;
                break;
            case L'•':
                uVar1 = 149;
                break;
            case L'…':
                uVar1 = 133;
                break;
            case L'‰':
                uVar1 = 137;
                break;
            case L'‹':
                uVar1 = 139;
                break;
            case L'›':
                uVar1 = 155;
                break;
            case L'€':
                break;
            default:
                if (arg1 == L'™') {
                    return 153;
                }
            case L'―':
            case L'‖':
            case L'‗':
            case L'‛':
            case L'‟':
            case L'‣':
            case L'․':
            case L'‥':
            case L'‧':
            case L'\x2028':
            case L'\x2029':
            case L'\x202a':
            case L'\x202b':
            case L'\x202c':
            case L'\x202d':
            case L'\x202e':
            case L'\x202f':
            case L'‱':
            case L'′':
            case L'″':
            case L'‴':
            case L'‵':
            case L'‶':
            case L'‷':
            case L'‸':
            case L'※':
            case L'‼':
            case L'‽':
            case L'‾':
            case L'‿':
            case L'⁀':
            case L'⁁':
            case L'⁂':
            case L'⁃':
            case L'⁄':
            case L'⁅':
            case L'⁆':
            case L'⁇':
            case L'⁈':
            case L'⁉':
            case L'⁊':
            case L'⁋':
            case L'⁌':
            case L'⁍':
            case L'⁎':
            case L'⁏':
            case L'⁐':
            case L'⁑':
            case L'⁒':
            case L'⁓':
            case L'⁔':
            case L'⁕':
            case L'⁖':
            case L'⁗':
            case L'⁘':
            case L'⁙':
            case L'⁚':
            case L'⁛':
            case L'⁜':
            case L'⁝':
            case L'⁞':
            case L'\x205f':
            case L'\x2060':
            case L'⁡':
            case L'⁢':
            case L'⁣':
            case L'⁤':
            case L'⁥':
            case L'\x2066':
            case L'\x2067':
            case L'\x2068':
            case L'\x2069':
            case L'\x206a':
            case L'\x206b':
            case L'\x206c':
            case L'\x206d':
            case L'\x206e':
            case L'\x206f':
            case L'⁰':
            case L'ⁱ':
            case L'⁲':
            case L'⁳':
            case L'⁴':
            case L'⁵':
            case L'⁶':
            case L'⁷':
            case L'⁸':
            case L'⁹':
            case L'⁺':
            case L'⁻':
            case L'⁼':
            case L'⁽':
            case L'⁾':
            case L'ⁿ':
            case L'₀':
            case L'₁':
            case L'₂':
            case L'₃':
            case L'₄':
            case L'₅':
            case L'₆':
            case L'₇':
            case L'₈':
            case L'₉':
            case L'₊':
            case L'₋':
            case L'₌':
            case L'₍':
            case L'₎':
            case L'₏':
            case L'ₐ':
            case L'ₑ':
            case L'ₒ':
            case L'ₓ':
            case L'ₔ':
            case L'ₕ':
            case L'ₖ':
            case L'ₗ':
            case L'ₘ':
            case L'ₙ':
            case L'ₚ':
            case L'ₛ':
            case L'ₜ':
            case L'₝':
            case L'₞':
            case L'₟':
            case L'₠':
            case L'₡':
            case L'₢':
            case L'₣':
            case L'₤':
            case L'₥':
            case L'₦':
            case L'₧':
            case L'₨':
            case L'₩':
            case L'₪':
            case L'₫':
            switchD_100cb7c01_caseD_2015:
                wVar2 = L'?';
                if ((unsigned short)(arg1 + L'｠') < 96) {
                    wVar2 = arg1;
                }
                if ((unsigned short)arg1 < 128) {
                    wVar2 = arg1;
                }
                uVar1 = (uint8_t)wVar2;
            }
        }
        return uVar1;
    }

    // 0x100cb8050
    unsigned long WideToCP1252(const char16_t* arg1, unsigned long arg2, char* str, unsigned long arg4,
                               unsigned long arg5) {
        unsigned long uVar2;

        char* pcVar3 = str + arg4;
        if (str + arg5 < pcVar3 + arg2) {
            LogAssert("destPtr + size <= endPtr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringTools.cpp", 79,
                      nullptr);
        }
        if (arg2 != 0) {
            uVar2 = 0;
            do {
                pcVar3[uVar2] = WideToCP1252(arg1[uVar2]);
                uVar2 = uVar2 + 1;
            } while (arg2 != uVar2);
            pcVar3 = pcVar3 + uVar2;
        }
        *pcVar3 = '\0';
        return arg2;
    }

    // 0x100cb80d0
    unsigned long WideToCP1252(const wchar_t* arg1, unsigned long arg2, char* str, unsigned long arg4,
                               unsigned long arg5) {
        unsigned long uVar2;

        char* pcVar3 = str + arg4;
        if (str + arg5 < pcVar3 + arg2) {
            LogAssert("destPtr + size <= endPtr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringTools.cpp", 99,
                      nullptr);
        }
        if (arg2 != 0) {
            uVar2 = 0;
            do {
                pcVar3[uVar2] = WideToCP1252((char16_t)arg1[uVar2]);
                uVar2 = uVar2 + 1;
            } while (arg2 != uVar2);
            pcVar3 = pcVar3 + uVar2;
        }
        *pcVar3 = '\0';
        return arg2;
    }

    // 0x100cb8150
    void CP1252ToWide(const char* str1, unsigned long arg2, eastl::basic_string<char16_t>& str2) {
        uint8_t bVar1;
        char16_t* pwVar2;
        unsigned long uVar3;
        array<char16_t, 256ul>* array;

        basic_string<char16_t> local_50;
        array<char16_t, 256ul>* arg1 = (array<char16_t, 256ul>*)arg2;
        local_50.reserve(arg2);
        if (arg2 != 0) {
            uVar3 = 0;
            do {
                bVar1 = str1[uVar3];
                array = (array<char16_t, 256ul>*)(unsigned long)bVar1;
                if (array != nullptr) {
                    if (((char)bVar1 < '\0') && (bVar1 < 160)) {
                        pwVar2 = (char16_t*)(*array)[(unsigned long)arg1];
                        arg1 = (array<char16_t, 256ul>*)(unsigned long)(unsigned short)*pwVar2;
                        local_50.push_back(*pwVar2);
                    } else {
                        local_50.push_back((unsigned short)bVar1);
                        arg1 = array;
                    }
                }
                uVar3 = uVar3 + 1;
            } while (arg2 != uVar3);
        }
        str2.swap(local_50);
    }

    // 0x100cb8390
    unsigned int GetUTF8NextChar(const char* str, unsigned long& arg2) {
        uint8_t bVar1;
        uint8_t bVar2;
        unsigned long uVar3;
        uint8_t* pbVar4;
        unsigned int uVar5;

        if (str == nullptr) {
            uVar5 = 0;
        } else {
            uVar3 = arg2;
            arg2 = uVar3 + 1;
            bVar1 = str[uVar3];
            pbVar4 = &UTF8_size_mask[2];
            if ((*pbVar4 & ~bVar1) == 0) {
                pbVar4 = &UTF8_value_mask[2];
                bVar2 = *pbVar4;
                arg2 = uVar3 + 2;
                uVar5 = ((uint8_t)str[uVar3 + 1] & 63) << 6 | (unsigned int)(bVar2 & bVar1) << 12;
                arg2 = uVar3 + 3;
                bVar1 = str[uVar3 + 2];
            } else {
                pbVar4 = &UTF8_size_mask[1];
                if ((*pbVar4 & ~bVar1) != 0) {
                    pbVar4 = &UTF8_value_mask[0];
                    return (unsigned int)(bVar1 & *pbVar4);
                }
                pbVar4 = &UTF8_value_mask[1];
                uVar5 = (unsigned int)(*pbVar4 & bVar1) << 6;
                arg2 = uVar3 + 2;
                bVar1 = str[uVar3 + 1];
            }
            uVar5 = bVar1 & 63 | uVar5;
        }
        return uVar5;
    }

    // 0x100cb8490
    unsigned int GetUTF8NextChar(const char* str, unsigned long& arg2, unsigned long arg3) {
        uint8_t bVar1;
        uint8_t bVar2;
        uint8_t bVar3;
        unsigned long uVar4;
        uint8_t* pbVar5;

        unsigned int uVar6 = 0;
        if ((str != nullptr) && (uVar4 = arg2, uVar4 < arg3)) {
            arg2 = uVar4 + 1;
            bVar1 = str[uVar4];
            pbVar5 = &UTF8_size_mask[2];
            if ((*pbVar5 & ~bVar1) == 0) {
                if (uVar4 + 3 <= arg3) {
                    pbVar5 = &UTF8_value_mask[2];
                    bVar2 = *pbVar5;
                    arg2 = uVar4 + 2;
                    bVar3 = str[uVar4 + 1];
                    arg2 = uVar4 + 3;
                    uVar6 = (uint8_t)str[uVar4 + 2] & 63 | (bVar3 & 63) << 6 | (unsigned int)(bVar2 & bVar1) << 12;
                }
            } else {
                pbVar5 = &UTF8_size_mask[1];
                if ((*pbVar5 & ~bVar1) == 0) {
                    if (uVar4 + 2 <= arg3) {
                        pbVar5 = &UTF8_value_mask[1];
                        bVar2 = *pbVar5;
                        arg2 = uVar4 + 2;
                        uVar6 = (uint8_t)str[uVar4 + 1] & 63 | (unsigned int)(bVar2 & bVar1) << 6;
                    }
                } else {
                    pbVar5 = &UTF8_value_mask[0];
                    uVar6 = (unsigned int)(bVar1 & *pbVar5);
                }
            }
        }
        return uVar6;
    }

    // 0x100cb85c0
    unsigned int GetUTF8PrevChar(const char* str, unsigned long& arg2) {
        uint8_t bVar1;
        uint8_t* pbVar3;
        unsigned int uVar4;
        unsigned long uVar5;

        unsigned long uVar2 = arg2;
        if (uVar2 == 0) {
            return 0;
        }
        if (str == nullptr) {
            return 0;
        }
        if (uVar2 < 2) {
        LAB_100cb8631:
            if (2 < uVar2) {
                bVar1 = str[uVar2 - 3];
                pbVar3 = &UTF8_size_mask[2];
                if ((*pbVar3 & ~bVar1) == 0) {
                    uVar5 = uVar2 - 3;
                    pbVar3 = &UTF8_value_mask[2];
                    uVar4 = ((uint8_t)str[uVar2 - 2] & 63) << 6 | (unsigned int)(*pbVar3 & bVar1) << 12;
                    goto LAB_100cb8683;
                }
            }
            arg2 = uVar2 - 1;
            bVar1 = str[uVar2 - 1];
            pbVar3 = &UTF8_value_mask[0];
            uVar4 = (unsigned int)(bVar1 & *pbVar3);
        } else {
            bVar1 = str[uVar2 - 2];
            pbVar3 = &UTF8_size_mask[1];
            if ((*pbVar3 & ~bVar1) != 0)
                goto LAB_100cb8631;
            uVar5 = uVar2 - 2;
            pbVar3 = &UTF8_value_mask[1];
            uVar4 = (unsigned int)(*pbVar3 & bVar1) << 6;
        LAB_100cb8683:
            uVar4 = (uint8_t)str[uVar2 - 1] & 63 | uVar4;
            arg2 = uVar5;
        }
        return uVar4;
    }

    // 0x100cb86d0
    char* CodepointToUTF8(unsigned int arg1, char* str) {
        uint8_t bVar1;
        uint8_t* pbVar4;

        char* arg1_00 = str;
        unsigned int* puVar3 = &nullptr[(unsigned long)str];
        if (*puVar3 < arg1) {
            puVar3 = &DAT_00000001[(unsigned long)arg1_00];
            if (*puVar3 < arg1) {
                puVar3 = (unsigned int*)(*2)[(unsigned long)arg1_00];
                if (arg1 <= *puVar3) {
                    pbVar4 = &UTF8_value_mask[2];
                    bVar1 = *pbVar4;
                    pbVar4 = &UTF8_size_mask[2];
                    *str = bVar1 & (uint8_t)arg1 | *pbVar4;
                    str[1] = (uint8_t)(arg1 >> 6) & 63;
                    str[2] = (uint8_t)(arg1 >> 12) & 63;
                    str = str + 3;
                }
            } else {
                pbVar4 = &UTF8_value_mask[1];
                bVar1 = *pbVar4;
                pbVar4 = &UTF8_size_mask[1];
                *str = bVar1 & (uint8_t)arg1 | *pbVar4;
                str[1] = (uint8_t)(arg1 >> 6) & 63;
                str = str + 2;
            }
        } else {
            *str = (uint8_t)arg1;
            str = str + 1;
        }
        return str;
    }

} // namespace jag::stringtools
