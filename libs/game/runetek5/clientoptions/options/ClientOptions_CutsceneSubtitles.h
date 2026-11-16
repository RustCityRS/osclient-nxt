// libs/game/runetek5/clientoptions/options/ClientOptions_CutsceneSubtitles.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game::option {
    class CutsceneSubtitles {
    public:
        // virtual methods in vtable order
        virtual ~CutsceneSubtitles();
        virtual uint64_t GetDefault();
        CutsceneSubtitles(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<EnumOptionToggle>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[153];
    };

    // 0x100269960: CutsceneSubtitles::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x10060f700: CutsceneSubtitles::~CutsceneSubtitles() has the same machine code as Option<EnumOptionToggle>::~Option()

    // 0x1006105d0
    CutsceneSubtitles::CutsceneSubtitles(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumOptionToggle>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(rt7Core, settings, str, local_30);
    }

} // namespace jag::game::option
