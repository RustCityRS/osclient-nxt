// libs/game/runetek5/clientoptions/options/ClientOptions_CustomCursors.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game::option {
    class CustomCursors {
    public:
        // virtual methods in vtable order
        virtual ~CustomCursors();
        virtual bool IsAvailable(OptionClient optionClient) const;
        virtual uint64_t GetDefault();
        CustomCursors(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<EnumOptionToggle>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[153];
    };

    // 0x100269960: CustomCursors::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x1005fa390: CustomCursors::IsAvailable(OptionClient) const has the same machine code as WindowMode::IsAvailable(OptionClient) const

    // 0x10060f700: CustomCursors::~CustomCursors() has the same machine code as Option<EnumOptionToggle>::~Option()

    // 0x10060fc00
    CustomCursors::CustomCursors(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumOptionToggle>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(rt7Core, settings, str, local_30);
    }

} // namespace jag::game::option
