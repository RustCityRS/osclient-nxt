// libs/game/runetek5/clientoptions/options/ClientOptions_AutoSetup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::game::option {
    class AutoSetup {
    public:
        // virtual methods in vtable order
        virtual ~AutoSetup();
        virtual uint64_t GetDefault();
        AutoSetup(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<EnumAutoSetup>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[153];
    };

    // 0x100029ea0: AutoSetup::GetDefault() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10060efd0
    AutoSetup::AutoSetup(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumAutoSetup>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 5);
        new (this) Option<EnumAutoSetup>(rt7Core, settings, str, local_30);
    }

    // 0x10060f130: AutoSetup::~AutoSetup() has the same machine code as Option<EnumAutoSetup>::~Option()

} // namespace jag::game::option
