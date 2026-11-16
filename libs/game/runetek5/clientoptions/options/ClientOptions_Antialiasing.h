// libs/game/runetek5/clientoptions/options/ClientOptions_Antialiasing.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::option {
    class AntialiasingMode {
    public:
        // virtual methods in vtable order
        virtual ~AntialiasingMode();
        virtual uint64_t GetDefault();
        virtual uint8_t DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumAntialiasingMode enumAntialiasingMode);
        AntialiasingMode(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                         AntialiasingQuality* antialiasingQuality);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        MinimenuEntry field_28;
        uint8_t _unknown_144[56];
        AntialiasingQuality* field_200;
    };

    class AntialiasingQuality {
    public:
        // virtual methods in vtable order
        virtual ~AntialiasingQuality();
        virtual uint64_t GetDefault();
        virtual uint8_t DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      graphics::GraphicsQuality graphicsQuality);
        AntialiasingQuality(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                            const AntialiasingMode* antialiasingMode);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<graphics::GraphicsQuality>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[160];
        AntialiasingMode* field_200;
    };

    // 0x1006048c0
    AntialiasingMode::~AntialiasingMode() {
        ~AntialiasingMode(this);
        operator delete(this);
    }

} // namespace jag::game::option
