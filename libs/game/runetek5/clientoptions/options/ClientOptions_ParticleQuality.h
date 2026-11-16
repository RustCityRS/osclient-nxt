// libs/game/runetek5/clientoptions/options/ClientOptions_ParticleQuality.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    class ParticleQuality {
    public:
        // virtual methods in vtable order
        virtual ~ParticleQuality();
        virtual uint64_t GetDefault();
        virtual uint8_t DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumParticleQualityLevel enumParticleQualityLevel);
        ParticleQuality(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<EnumParticleQualityLevel>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[153];
    };

    // 0x100611040
    ParticleQuality::~ParticleQuality() {
        ~Option(this);
    }

} // namespace jag::game::option
