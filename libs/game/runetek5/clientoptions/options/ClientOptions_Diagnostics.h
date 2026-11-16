// libs/game/runetek5/clientoptions/options/ClientOptions_Diagnostics.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    class Diagnostics : public FlickeringEffects // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Diagnostics();
        virtual uint64_t GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumOptionToggle enumOptionToggle);
        void UpdateDiagnosticsVisibility();
        Diagnostics(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        uint8_t _unknown_193[7];
        shared_ptr field_200;
    };

    // 0x100610630
    Diagnostics::Diagnostics(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumOptionToggle>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(rt7Core, settings, str, local_30);
        new (field_200) shared_ptr();
    }

    // 0x1006106d0
    void Diagnostics::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                       EnumOptionToggle enumOptionToggle) {
        UpdateDiagnosticsVisibility();
    }

    // 0x100610e80
    Diagnostics::~Diagnostics() {
        field_200->~shared_ptr();
    }

} // namespace jag::game::option
