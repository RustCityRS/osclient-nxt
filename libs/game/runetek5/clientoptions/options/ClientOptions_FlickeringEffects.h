// libs/game/runetek5/clientoptions/options/ClientOptions_FlickeringEffects.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    class FlickeringEffects {
    public:
        // virtual methods in vtable order
        virtual ~FlickeringEffects();
        virtual uint64_t GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumOptionToggle enumOptionToggle);
        FlickeringEffects(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<EnumOptionToggle>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[153];
    };

    // 0x10060f600
    FlickeringEffects::FlickeringEffects(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumOptionToggle>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(rt7Core, settings, str, local_30);
    }

} // namespace jag::game::option
