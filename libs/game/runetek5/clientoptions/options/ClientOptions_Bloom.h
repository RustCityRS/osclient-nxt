// libs/game/runetek5/clientoptions/options/ClientOptions_Bloom.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    class Bloom {
    public:
        // virtual methods in vtable order
        virtual ~Bloom();
        virtual uint64_t GetDefault();
        virtual uint8_t DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumBloom enumBloom);
        Bloom(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        MinimenuEntry field_28;
        uint8_t _unknown_144[49];
    };

    // 0x1006114f0
    Bloom::~Bloom() {
        ~Option(this);
    }

} // namespace jag::game::option
