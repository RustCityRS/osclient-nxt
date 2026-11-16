// libs/game/runetek5/clientoptions/options/ClientOptions_Textures.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    class Textures {
    public:
        // virtual methods in vtable order
        virtual ~Textures();
        virtual bool DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumTextureMode enumTextureMode);
        Textures(graphics::RT7Core& rt7Core, Settings& settings, const char* str, GroundBlending* groundBlending);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        MinimenuEntry field_28;
        uint8_t _unknown_144[56];
        GroundBlending* field_200;
    };

} // namespace jag::game::option
