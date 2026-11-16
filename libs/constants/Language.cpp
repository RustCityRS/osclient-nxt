// libs/constants/Language.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.constants

#include "Language.h"
#include "libs/game/runetek5/clientoptions/options/ClientOptions_Language.h"

namespace jag {
    // 0x100f481f8, 8 bytes, __data
    Language const* Language::EN = &enumArray;

    // 0x100f48200, 8 bytes, __data
    Language const* Language::DE = &enumArray[1] /* Language(1, "de", "German", (ModeWhere *)ModeWhere::LIVE, "DE") */;

    // 0x100f48208, 8 bytes, __data
    Language const* Language::FR = &enumArray[2] /* Language(2, "fr", "French", (ModeWhere *)ModeWhere::LIVE, "FR") */;

    // 0x100f48210, 8 bytes, __data
    Language const* Language::PT =
        &enumArray[3] /* Language(3, "pt", "Portuguese", (ModeWhere *)ModeWhere::LIVE, "BR") */;

    // 0x100f48218, 8 bytes, __data
    Language const* Language::NL = &enumArray[4] /* Language(4, "nl", "Dutch", (ModeWhere *)ModeWhere::WTWIP, "NL") */;

    // 0x100f48220, 8 bytes, __data
    Language const* Language::ES =
        &enumArray[5] /* Language(5, "es", "Spanish", (ModeWhere *)ModeWhere::WTWIP, "ES") */;

    // 0x100f48228, 8 bytes, __data
    Language const* Language::ES_MX =
        &enumArray[6] /* Language(6, "es-mx", "Spanish (Latin American)", (ModeWhere *)ModeWhere::WTWIP, "MX") */;

    // 0x103bc2340, 280 bytes, __common; set at startup by ___cxx_global_var_init.15
    Language Language::enumArray[7] = {
        /* [0] */ Language(0, "en", "English", (ModeWhere*)ModeWhere::LIVE, "GB"),
        /* [1] */ Language(1, "de", "German", (ModeWhere*)ModeWhere::LIVE, "DE"),
        /* [2] */ Language(2, "fr", "French", (ModeWhere*)ModeWhere::LIVE, "FR"),
        /* [3] */ Language(3, "pt", "Portuguese", (ModeWhere*)ModeWhere::LIVE, "BR"),
        /* [4] */ Language(4, "nl", "Dutch", (ModeWhere*)ModeWhere::WTWIP, "NL"),
        /* [5] */ Language(5, "es", "Spanish", (ModeWhere*)ModeWhere::WTWIP, "ES"),
        /* [6] */ Language(6, "es-mx", "Spanish (Latin American)", (ModeWhere*)ModeWhere::WTWIP, "MX"),
    };

    // 0x100b89390, 64 bytes, placed by class name and debug map
    // Language::GetByID(unsigned int)
    void Language::GetByID(uint param_1) {
        if (6 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/constants/Language.cpp", 36,
                "Language: Invalid Language ID requested, falling back to English");
        }
        std::array<Language, 7ul>::operator[]((ulong)param_1);
    }

    // 0x100b893f0, 144 bytes, placed by class name and debug map
    // Language::GetByCode(char const*)
    undefined* Language::GetByCode(char* param_1) {
        undefined* puVar2;
        uint uVar3;
        undefined* unaff_R14;
        bool bVar4;

        uVar3 = 0;
        bVar4 = true;
        while (true) {
            puVar2 = (undefined*)GetByID(uVar3);
            if ((_strcmp(param_1, *(char**)(puVar2 + 16)) == 0) && (*(undefined**)(puVar2 + 24) == ModeWhere::LIVE))
                break;
            bVar4 = uVar3 < 6;
            uVar3 = uVar3 + 1;
            if (uVar3 == 7) {
            LAB_100b8945a:
                if (!bVar4) {
                    unaff_R14 = EN;
                }
                return unaff_R14;
            }
        }
        unaff_R14 = puVar2;
        goto LAB_100b8945a;
    }

    // 0x100b89c20, 320 bytes, placed by the data it initialises
    // ___cxx_global_var_init.15
    void ___cxx_global_var_init_15() {
        new (&Language::enumArray) Language(0, "en", "English", (ModeWhere*)ModeWhere::LIVE, "GB");
        new (&DAT_103bc2368) Language(1, "de", "German", (ModeWhere*)ModeWhere::LIVE, "DE");
        new (&DAT_103bc2390) Language(2, "fr", "French", (ModeWhere*)ModeWhere::LIVE, "FR");
        new (&DAT_103bc23b8) Language(3, "pt", "Portuguese", (ModeWhere*)ModeWhere::LIVE, "BR");
        new (&DAT_103bc23e0) Language(4, "nl", "Dutch", (ModeWhere*)ModeWhere::WTWIP, "NL");
        new (&DAT_103bc2408) Language(5, "es", "Spanish", (ModeWhere*)ModeWhere::WTWIP, "ES");
        new (&DAT_103bc2430) Language(6, "es-mx", "Spanish (Latin American)", (ModeWhere*)ModeWhere::WTWIP, "MX");
    }

} // namespace jag

namespace jag::game::option {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Language::GetDefault();

    // 0x1005fa390: the linker folded this into WindowMode::IsAvailable(OptionClient) const, which has identical code
    Language::IsAvailable(OptionClient) const;

    // 0x100610050: the linker folded this into Option<LanguageID>::~Option(), which has identical code
    Language::~Language();

} // namespace jag::game::option
