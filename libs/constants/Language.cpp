// libs/constants/Language.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.constants

#include "Language.h"
#include "libs/game/runetek5/clientoptions/options/ClientOptions_Language.h"

namespace jag {
    // 0x100f481f8
    Language const* Language::EN = &enumArray;

    // 0x100f48200
    Language const* Language::DE = &enumArray[1] /* Language(1, "de", "German", (ModeWhere *)ModeWhere::LIVE, "DE") */;

    // 0x100f48208
    Language const* Language::FR = &enumArray[2] /* Language(2, "fr", "French", (ModeWhere *)ModeWhere::LIVE, "FR") */;

    // 0x100f48210
    Language const* Language::PT =
        &enumArray[3] /* Language(3, "pt", "Portuguese", (ModeWhere *)ModeWhere::LIVE, "BR") */;

    // 0x100f48218
    Language const* Language::NL = &enumArray[4] /* Language(4, "nl", "Dutch", (ModeWhere *)ModeWhere::WTWIP, "NL") */;

    // 0x100f48220
    Language const* Language::ES =
        &enumArray[5] /* Language(5, "es", "Spanish", (ModeWhere *)ModeWhere::WTWIP, "ES") */;

    // 0x100f48228
    Language const* Language::ES_MX =
        &enumArray[6] /* Language(6, "es-mx", "Spanish (Latin American)", (ModeWhere *)ModeWhere::WTWIP, "MX") */;

    // 0x103bc2340, set at startup by ___cxx_global_var_init.15
    Language Language::enumArray[7] = {
        /* [0] */ Language(0, "en", "English", (ModeWhere*)ModeWhere::LIVE, "GB"),
        /* [1] */ Language(1, "de", "German", (ModeWhere*)ModeWhere::LIVE, "DE"),
        /* [2] */ Language(2, "fr", "French", (ModeWhere*)ModeWhere::LIVE, "FR"),
        /* [3] */ Language(3, "pt", "Portuguese", (ModeWhere*)ModeWhere::LIVE, "BR"),
        /* [4] */ Language(4, "nl", "Dutch", (ModeWhere*)ModeWhere::WTWIP, "NL"),
        /* [5] */ Language(5, "es", "Spanish", (ModeWhere*)ModeWhere::WTWIP, "ES"),
        /* [6] */ Language(6, "es-mx", "Spanish (Latin American)", (ModeWhere*)ModeWhere::WTWIP, "MX"),
    };

    // 0x100b89390
    void Language::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (6 < (unsigned int)this) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/constants/Language.cpp", 36,
                "Language: Invalid Language ID requested, falling back to English");
        }
        (*((array<Language, 7ul>*)((unsigned long)this &
                                   4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

    // 0x100b893f0
    uint8_t* Language::GetByCode(const char* str) {
        uint8_t* puVar2;
        uint8_t* unaff_R14;

        unsigned int uVar3 = 0;
        bool bVar4 = true;
        while (true) {
            puVar2 = (uint8_t*)GetByID((Language*)(unsigned long)uVar3, (unsigned int)str);
            str = *(char**)(puVar2 + 16);
            if ((_strcmp((char*)this, str) == 0) && (*(uint8_t**)(puVar2 + 24) == ModeWhere::LIVE))
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

} // namespace jag

namespace jag::game::option {
    // 0x100029ea0: Language::GetDefault() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1005fa390: Language::IsAvailable(OptionClient) const has the same machine code as WindowMode::IsAvailable(OptionClient) const

    // 0x100610050: Language::~Language() has the same machine code as Option<LanguageID>::~Option()

} // namespace jag::game::option
