// libs/game/runetek5/clientoptions/options/ClientOptions_HapticFeedback.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game::option {
    class HapticFeedback : public FlickeringEffects // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~HapticFeedback();
        virtual bool IsAvailable(OptionClient) const;
        virtual GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle);
        HapticFeedback(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes, the first 193 are FlickeringEffects
    };

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    HapticFeedback::GetDefault();

    // 0x1005fa390: the linker folded this into WindowMode::IsAvailable(OptionClient) const, which has identical code
    HapticFeedback::IsAvailable(OptionClient) const;

    // 0x1005fe390: the linker folded this into Shadows::~Shadows(), which has identical code
    HapticFeedback::~HapticFeedback();

    // 0x1005ffc90, 96 bytes, base-object constructor, placed by class name and debug map
    // HapticFeedback::HapticFeedback(graphics::RT7Core&, Settings&, char const*)
    void HapticFeedback::HapticFeedback(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__HapticFeedback_100f0a1a0;
    }

    // 0x1005ffcf0, 16 bytes, complete-object constructor, placed by class name and debug map
    // HapticFeedback::HapticFeedback(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x1005ffd00, 48 bytes, placed by class name and debug map
    // HapticFeedback::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle)
    void HapticFeedback::ApplySettingImpl() {
        __cxx_atomic_base_impl<bool>* this_00;

        this_00 = (__cxx_atomic_base_impl<bool>*)Instance();
        std::__cxx_atomic_base_impl<bool>::__cxx_atomic_base_impl(this_00, field_24 == 1);
    }

    // 0x100609140: the linker folded this into CutsceneSubtitles::~CutsceneSubtitles(), which has identical code
    HapticFeedback::~HapticFeedback();

    // 0x10060f700: the linker folded this into Option<EnumOptionToggle>::~Option(), which has identical code
    HapticFeedback::~HapticFeedback();

} // namespace jag::game::option
