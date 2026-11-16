// libs/game/runetek5/clientoptions/options/ClientOptions_AmbientOcclusion.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    class AmbientOcclusion {
    public:
        // virtual methods in vtable order
        virtual ~AmbientOcclusion();
        virtual bool IsModifiable(const graphics::RT7Core* rt7Core) const;
        virtual uint64_t GetDefault();
        virtual char DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& arg1, graphics::EffectManager& effectManager,
                                      graphics::SSAOPass::Mode arg3);
        AmbientOcclusion(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        MinimenuEntry field_28;
        uint8_t _unknown_144[49];
    };

} // namespace jag::game::option

namespace jag::graphics {
    class AmbientOcclusion {
    public:
        auto BuildUniforms();
    };

} // namespace jag::graphics
