// libs/oldscape/jagex3/core/stringtools/general/CP1252Tools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "CP1252Tools.h"

namespace jag::oldscape::core::stringtools::general {
    // 0x100d42420
    int32_t CP1252Tools::m_attribs1252[64] = {
        134744072,  134744072,  134744072,  134744072,  134744072,  134744072,  134744072,  134744072,
        134744072,  134744072,  134744072,  134744072,  134744072,  134744072,  134744072,  134744072,
        842150408,  842150450,  842150450,  842150450,  842150450,  842150450,  137507378,  134744072,
        1381126664, 1381126738, 1381126738, 1381126738, 1381126738, 1381126738, 139612754,  134744072,
        134742024,  134744072,  137431048,  3211313,    134744064,  134744072,  139528200,  911278161,
        134744072,  134744072,  135268360,  134744072,  134744072,  134746120,  135268360,  134744072,
        842150450,  842150450,  842150450,  842150450,  842150450,  137507378,  842150450,  271725106,
        1381126738, 1381126738, 1381126738, 1381126738, 1381126738, 139612754,  1381126738, 1448235602,
    };

    // 0x100f37db6
    uint8_t CP1252Tools::m_cp1252Mapping[74] = {
        172, 32, 0,  0,   26, 32, 146, 1, 30, 32, 38,  32, 32,  32, 33, 32, 198, 2,  48, 32, 96, 1,  57, 32,  82,
        1,   0,  0,  125, 1,  0,  0,   0, 0,  24, 32,  25, 32,  28, 32, 29, 32,  34, 32, 19, 32, 20, 32, 220, 2,
        34,  33, 97, 1,   58, 32, 83,  1, 0,  0,  126, 1,  120, 1,  0,  0,  0,   0,  0,  0,  0,  0,  0,  0,
    };

    // 0x100348900
    int CP1252Tools::ComputeLowerCp1252HashFromUtf8(const char* str) {
        uint8_t bVar1;
        char16_t arg1_00;
        int iVar2;

        if (*str == '\0') {
            iVar2 = 0;
        } else {
            iVar2 = 0;
            do {
                arg1_00 = jag::stringtools::GetUTF8NextChar16(str, 0);
                bVar1 = ToLower(jag::stringtools::WideToCP1252(arg1_00));
                iVar2 = (unsigned int)bVar1 + iVar2 * 31;
            } while (str[0] != '\0');
        }
        return iVar2;
    }

} // namespace jag::oldscape::core::stringtools::general
