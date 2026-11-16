// libs/game/runetek5/clientoptions/options/ClientOptions_RichPresence.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game::option {
    class RichPresence : public CustomCursors // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~RichPresence();
        virtual bool IsAvailable(OptionClient) const;
        virtual GetDefault();
        RichPresence(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes, the first 193 are CustomCursors
    };

    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    RichPresence::GetDefault();

    // 0x1005fa390: the linker folded this into WindowMode::IsAvailable(OptionClient) const, which has identical code
    RichPresence::IsAvailable(OptionClient) const;

    // 0x1005fe390: the linker folded this into Shadows::~Shadows(), which has identical code
    RichPresence::~RichPresence();

    // 0x100608ab0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // RichPresence::RichPresence(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100609140: the linker folded this into CutsceneSubtitles::~CutsceneSubtitles(), which has identical code
    RichPresence::~RichPresence();

    // 0x10060f700: the linker folded this into Option<EnumOptionToggle>::~Option(), which has identical code
    RichPresence::~RichPresence();

    // 0x100610570, 96 bytes, base-object constructor, inline, placed by class name
    // RichPresence::RichPresence(graphics::RT7Core&, Settings&, char const*)
    void RichPresence::RichPresence(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(param_1, param_2, param_3, local_30);
        field_0 = PTR_vtable_100ee8500 + 16;
    }

} // namespace jag::game::option
