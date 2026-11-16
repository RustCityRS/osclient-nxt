// libs/game/runetek5/clientoptions/options/ClientOptions_Brightness.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::game::option {
    class Brightness {
    public:
        // virtual methods in vtable order
        virtual ~Brightness();
        virtual uint64_t GetDefault();
        Brightness(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<EnumBrightness>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[153];
    };

    // 0x1002699e0: Brightness::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const

    // 0x10060f370
    Brightness::Brightness(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumBrightness>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 4);
        new (this) Option<EnumBrightness>(rt7Core, settings, str, local_30);
    }

    // 0x10060f4c0: Brightness::~Brightness() has the same machine code as Option<EnumBrightness>::~Option()

} // namespace jag::game::option
