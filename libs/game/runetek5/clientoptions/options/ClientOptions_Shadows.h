// libs/game/runetek5/clientoptions/options/ClientOptions_Shadows.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    class Shadows : public SmoothClipPlaneFade // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Shadows();
        virtual bool DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumOptionToggle enumOptionToggle);
        Shadows(graphics::RT7Core& rt7Core, Settings& settings, const char* str, ShadowQuality* shadowQuality);

    private:
        uint8_t _unknown_193[7];
        ShadowQuality* field_200;
    };

    // 0x1005fe390
    Shadows::~Shadows() {
        operator delete(this);
    }

} // namespace jag::game::option
