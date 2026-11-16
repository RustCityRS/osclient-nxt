// libs/oldscape/jagex3/core/stringtools/general/CP1252Tools.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::core::stringtools::general {
    class CP1252Tools {
    public:
        IsPrintableCP1252Char(char16_t);
        char ToLower(unsigned char);
        char ToUpper(unsigned char);
        byte IsAlpha(char);
        int ComputeLowerCp1252HashFromUtf8(char const*);
        bool CanEncodeToCP1252(int);
        static /* 256 bytes */ m_attribs1252;  // initialised in its definition
        static /* 74 bytes */ m_cp1252Mapping; // initialised in its definition
    };

    // 0x10011fbb0, 112 bytes, inline, placed by class name and debug map
    // CP1252Tools::IsPrintableCP1252Char(char16_t)
    undefined1 CP1252Tools::IsPrintableCP1252Char(wchar16 param_1) {
        undefined1 uVar1;
        wchar16* pwVar2;
        ulong uVar3;
        bool bVar4;

        uVar1 = 1;
        if (((94 < (ushort)(param_1 + L'￠')) && ((param_1 & 65504U) != 128)) && (94 < (ushort)(param_1 + L'｟'))) {
            if (param_1 == L'\0') {
                uVar1 = 0;
            } else {
                uVar3 = 0;
                do {
                    pwVar2 = (wchar16*)std::array<char16_t, 32ul>::operator[](uVar3);
                    if (*pwVar2 == param_1) {
                        return 1;
                    }
                    bVar4 = uVar3 != 31;
                    uVar1 = 0;
                    uVar3 = uVar3 + 1;
                } while (bVar4);
            }
        }
        return uVar1;
    }

    // 0x1001a2300, 48 bytes, inline, placed by class name
    // CP1252Tools::ToLower(unsigned char)
    char CP1252Tools::ToLower(uchar param_1) {
        undefined3 in_register_00000039;

        return (PTR_m_attribs1252_100ee6af8[CONCAT31(in_register_00000039, param_1)] << 4 &
                (char)(PTR_m_attribs1252_100ee6af8[CONCAT31(in_register_00000039, param_1)] * '\x04') >> 7 & 112U) +
               param_1;
    }

    // 0x1001a2330, 48 bytes, inline, placed by class name
    // CP1252Tools::ToUpper(unsigned char)
    char CP1252Tools::ToUpper(uchar param_1) {
        undefined3 in_register_00000039;

        return param_1 - (PTR_m_attribs1252_100ee6af8[CONCAT31(in_register_00000039, param_1)] << 4 &
                          (char)(PTR_m_attribs1252_100ee6af8[CONCAT31(in_register_00000039, param_1)] * '\x02') >> 7 &
                          112U);
    }

    // 0x1001a2360, 32 bytes, inline, placed by class name
    // CP1252Tools::IsAlpha(char)
    byte CP1252Tools::IsAlpha(char param_1) {
        return (byte)PTR_m_attribs1252_100ee6af8[(byte)param_1] >> 4 & 1;
    }

    // 0x100394480, 64 bytes, inline, placed by class name
    // CP1252Tools::CanEncodeToCP1252(int)
    bool CP1252Tools::CanEncodeToCP1252(int param_1) {
        bool bVar2;

        bVar2 = true;
        if ((((126 < param_1 - 1U) && (95 < param_1 - 160U)) && (bVar2 = false, param_1 < 65536)) && (param_1 != 0)) {
            bVar2 = jag::stringtools::WideToCP1252((wchar16)param_1) != '?';
        }
        return bVar2;
    }

} // namespace jag::oldscape::core::stringtools::general
