// libs/oldscape/rs2lib/constants/PublicChatMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::constants {
    class PublicChatMode {
    public:
        PublicChatMode(int arg1);
        int GetId() const;

    private:
        int m_id;
    };

    // 0x100264800
    PublicChatMode::PublicChatMode(int arg1) : m_id(arg1) {}

    // 0x100264820
    int PublicChatMode::GetId() const {
        return m_id;
    }

} // namespace jag::oldscape::constants
