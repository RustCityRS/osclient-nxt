// libs/hal/system/discord/richpresence/DiscordRichPresence_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.discord

namespace jag {
    class DiscordRichPresence {
    public:
        ~DiscordRichPresence();
        void SetDiscordActivityDetails(const eastl::string& str1, const eastl::string& str2);
        void UnsetDiscordActivityDetails();

        uint8_t _unknown_0[1];
    };

    // 0x1001b78e0
    void DiscordRichPresence::SetDiscordActivityDetails(const eastl::string& str1, const eastl::string& str2) {}

    // 0x1001b78f0
    void DiscordRichPresence::UnsetDiscordActivityDetails() {}

} // namespace jag
