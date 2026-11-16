// libs/game/runetek5/clientoptions/options/ClientOptions_HapticFeedback.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game::option {
    class HapticFeedback : public FlickeringEffects // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~HapticFeedback();
        virtual bool IsAvailable(OptionClient optionClient) const;
        virtual uint64_t GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumOptionToggle enumOptionToggle);
        HapticFeedback(graphics::RT7Core& rt7Core, Settings& settings, const char* str);
    };

    // 0x100029ea0: HapticFeedback::GetDefault() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1005fa390: HapticFeedback::IsAvailable(OptionClient) const has the same machine code as WindowMode::IsAvailable(OptionClient) const

    // 0x1005ffc90
    HapticFeedback::HapticFeedback(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumOptionToggle>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(rt7Core, settings, str, local_30);
    }

    // 0x1005ffd00
    void HapticFeedback::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                          EnumOptionToggle enumOptionToggle) {
        auto this_00 = Instance();
        new (this_00) std::__cxx_atomic_base_impl(field_24 == 1);
    }

    // 0x10060f700: HapticFeedback::~HapticFeedback() has the same machine code as Option<EnumOptionToggle>::~Option()

} // namespace jag::game::option
