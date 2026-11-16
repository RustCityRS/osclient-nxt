// libs/game/runetek5/clientoptions/options/ClientOptions_RichPresence.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game::option {
    class RichPresence : public CustomCursors // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~RichPresence();
        virtual bool IsAvailable(OptionClient optionClient) const;
        virtual uint64_t GetDefault();
        RichPresence(graphics::RT7Core& rt7Core, Settings& settings, const char* str);
    };

    // 0x100269960: RichPresence::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x1005fa390: RichPresence::IsAvailable(OptionClient) const has the same machine code as WindowMode::IsAvailable(OptionClient) const

    // 0x10060f700: RichPresence::~RichPresence() has the same machine code as Option<EnumOptionToggle>::~Option()

    // 0x100610570
    RichPresence::RichPresence(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumOptionToggle>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(rt7Core, settings, str, local_30);
    }

} // namespace jag::game::option
