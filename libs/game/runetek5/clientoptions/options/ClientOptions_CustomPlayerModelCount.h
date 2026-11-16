// libs/game/runetek5/clientoptions/options/ClientOptions_CustomPlayerModelCount.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game::option {
    class CustomPlayerModelCount {
    public:
        // virtual methods in vtable order
        virtual ~CustomPlayerModelCount();
        virtual uint64_t GetDefault();
        virtual void DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      graphics::GraphicsQuality graphicsQuality);
        CustomPlayerModelCount(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<graphics::GraphicsQuality>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[153];
    };

    // 0x100610f30
    CustomPlayerModelCount::~CustomPlayerModelCount() {
        ~Option(this);
    }

    // 0x100610f30: LightingQuality::~LightingQuality() has the same machine code as CustomPlayerModelCount::~CustomPlayerModelCount()

    // 0x100610f30: AntialiasingQuality::~AntialiasingQuality() has the same machine code as CustomPlayerModelCount::~CustomPlayerModelCount()

} // namespace jag::game::option
