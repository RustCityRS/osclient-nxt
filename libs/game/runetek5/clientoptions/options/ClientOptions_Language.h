// libs/game/runetek5/clientoptions/options/ClientOptions_Language.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    class Language {
    public:
        // virtual methods in vtable order
        virtual ~Language();
        virtual uint64_t GetDefault();
        virtual bool IsAvailable(OptionClient optionClient) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      LanguageID languageID);
        Language(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        int field_24;
        Range<LanguageID>* field_28;
        int field_36;
        uint8_t _unknown_40[153];
    };

} // namespace jag::game::option
