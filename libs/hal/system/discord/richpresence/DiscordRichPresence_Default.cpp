// libs/hal/system/discord/richpresence/DiscordRichPresence_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.discord

namespace jag {
    class DiscordRichPresence {
    public:
        ~DiscordRichPresence();
        void SetDiscordActivityDetails(eastl::string const&, eastl::string const&);
        void UnsetDiscordActivityDetails();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1001b78e0, 16 bytes, placed by class name and debug map
    // DiscordRichPresence::SetDiscordActivityDetails(eastl::string const&, eastl::string const&)
    void DiscordRichPresence::SetDiscordActivityDetails(basic_string* param_1, basic_string* param_2) {}

    // 0x1001b78f0, 16 bytes, placed by class name and debug map
    // DiscordRichPresence::UnsetDiscordActivityDetails()
    void DiscordRichPresence::UnsetDiscordActivityDetails() {}

} // namespace jag
