// libs/game/runetek5/clientoptions/options/ClientOptions_Reflections.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game::option {
    class Reflections {
    public:
        // virtual methods in vtable order
        virtual ~Reflections();
        virtual uint64_t GetDefault();
        virtual uint8_t DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      graphics::GraphicsQuality graphicsQuality);
        Reflections(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        MinimenuEntry field_28;
        uint8_t _unknown_144[49];
    };

    // 0x1005fe370
    Reflections::~Reflections() {
        operator delete(this);
    }

    // 0x1005fe370: LightingQuality::~LightingQuality() has the same machine code as Reflections::~Reflections()

    // 0x1005fe370: AntialiasingQuality::~AntialiasingQuality() has the same machine code as Reflections::~Reflections()

} // namespace jag::game::option
