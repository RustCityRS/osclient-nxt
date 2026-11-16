// libs/oldscape/jagex3/core/stringtools/general/CP1252Tools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "CP1252Tools.h"

namespace jag::oldscape::core::stringtools::general {
    // 0x100d42420, 256 bytes, __const
    CP1252Tools::m_attribs1252 = {
        134744072,  134744072,  134744072,  134744072,  134744072,  134744072,  134744072,  134744072,
        134744072,  134744072,  134744072,  134744072,  134744072,  134744072,  134744072,  134744072,
        842150408,  842150450,  842150450,  842150450,  842150450,  842150450,  137507378,  134744072,
        1381126664, 1381126738, 1381126738, 1381126738, 1381126738, 1381126738, 139612754,  134744072,
        134742024,  134744072,  137431048,  3211313,    134744064,  134744072,  139528200,  911278161,
        134744072,  134744072,  135268360,  134744072,  134744072,  134746120,  135268360,  134744072,
        842150450,  842150450,  842150450,  842150450,  842150450,  137507378,  842150450,  271725106,
        1381126738, 1381126738, 1381126738, 1381126738, 1381126738, 139612754,  1381126738, 1448235602,
    };

    // 0x100f37db6, 74 bytes, __data
    CP1252Tools::m_cp1252Mapping = {
        172, 32, 0,  0,   26, 32, 146, 1, 30, 32, 38,  32, 32,  32, 33, 32, 198, 2,  48, 32, 96, 1,  57, 32,  82,
        1,   0,  0,  125, 1,  0,  0,   0, 0,  24, 32,  25, 32,  28, 32, 29, 32,  34, 32, 19, 32, 20, 32, 220, 2,
        34,  33, 97, 1,   58, 32, 83,  1, 0,  0,  126, 1,  120, 1,  0,  0,  0,   0,  0,  0,  0,  0,  0,  0,
    };

    // 0x100348900, 112 bytes, placed by class name and debug map
    // CP1252Tools::ComputeLowerCp1252HashFromUtf8(char const*)
    int CP1252Tools::ComputeLowerCp1252HashFromUtf8(char* param_1) {
        uchar uVar1;
        byte bVar2;
        wchar16 wVar3;
        int iVar4;
        ulong local_28;

        local_28 = 0;
        if (*param_1 == '\0') {
            iVar4 = 0;
        } else {
            iVar4 = 0;
            do {
                wVar3 = jag::stringtools::GetUTF8NextChar16(param_1, &local_28);
                uVar1 = jag::stringtools::WideToCP1252(wVar3);
                bVar2 = ToLower(uVar1);
                iVar4 = (uint)bVar2 + iVar4 * 31;
            } while (param_1[local_28] != '\0');
        }
        return iVar4;
    }

} // namespace jag::oldscape::core::stringtools::general
