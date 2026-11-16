// libs/oldscape/jagex3/core/stringtools/general/CP1252Tools.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::core::stringtools::general {
    class CP1252Tools {
    public:
        bool IsPrintableCP1252Char(char16_t arg1);
        char ToLower(unsigned char arg1);
        char ToUpper(unsigned char arg1);
        bool IsAlpha(char arg1);
        int ComputeLowerCp1252HashFromUtf8(const char* str);
        bool CanEncodeToCP1252(int arg1);
        static int32_t m_attribs1252[64];   // initialised in its definition
        static uint8_t m_cp1252Mapping[74]; // initialised in its definition
    };

    // 0x10011fbb0
    bool CP1252Tools::IsPrintableCP1252Char(char16_t arg1) {
        short* extraout_RAX;
        array<char16_t, 32ul>* this_00;
        uint64_t in_register_00000032;
        bool bVar3;

        uint8_t uVar2 = 1;
        if (((94 < (unsigned short)((short)this - 32U)) && (((unsigned int)this & 65504) != 128)) &&
            (94 < (unsigned short)((short)this - 161U))) {
            if ((short)this == 0) {
                uVar2 = 0;
            } else {
                this_00 = nullptr;
                do {
                    (*this_00)[(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1)];
                    if (*extraout_RAX == (short)this) {
                        return 1;
                    }
                    bVar3 = this_00 != (array<char16_t, 32ul>*)31;
                    uVar2 = 0;
                    this_00 = this_00 + 1;
                } while (bVar3);
            }
        }
        return uVar2;
    }

    // 0x1001a2300
    char CP1252Tools::ToLower(unsigned char arg1) {
        uint32_t in_register_00000039;

        return (PTR_m_attribs1252_100ee6af8[(((uint32_t)in_register_00000039 << 8) | (uint8_t)arg1)] << 4 &
                (char)(PTR_m_attribs1252_100ee6af8[(((uint32_t)in_register_00000039 << 8) | (uint8_t)arg1)] * '\x04') >>
                    7 &
                112U) +
               arg1;
    }

    // 0x1001a2330
    char CP1252Tools::ToUpper(unsigned char arg1) {
        uint32_t in_register_00000039;

        return arg1 -
               (PTR_m_attribs1252_100ee6af8[(((uint32_t)in_register_00000039 << 8) | (uint8_t)arg1)] << 4 &
                (char)(PTR_m_attribs1252_100ee6af8[(((uint32_t)in_register_00000039 << 8) | (uint8_t)arg1)] * '\x02') >>
                    7 &
                112U);
    }

    // 0x1001a2360
    bool CP1252Tools::IsAlpha(char arg1) {
        return (uint8_t)PTR_m_attribs1252_100ee6af8[(uint8_t)arg1] >> 4 & 1;
    }

    // 0x100394480
    bool CP1252Tools::CanEncodeToCP1252(int arg1) {
        bool bVar2 = true;
        if ((((126 < arg1 - 1U) && (95 < arg1 - 160U)) && (bVar2 = false, arg1 < 65536)) && (arg1 != 0)) {
            bVar2 = jag::stringtools::WideToCP1252((char16_t)arg1) != '?';
        }
        return bVar2;
    }

} // namespace jag::oldscape::core::stringtools::general
