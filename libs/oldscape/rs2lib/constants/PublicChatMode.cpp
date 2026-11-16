// libs/oldscape/rs2lib/constants/PublicChatMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::constants {
    class PublicChatMode {
    public:
        PublicChatMode(int);
        int GetId() const;

        // data members, from how the methods use this: 4 bytes
        int m_id; // offset 0
    };

    // 0x100264800, 16 bytes, base-object constructor, placed by class name and debug map
    // PublicChatMode::PublicChatMode(int)
    void PublicChatMode::PublicChatMode(int param_1) {
        m_id = param_1;
    }

    // 0x100264810, 16 bytes, complete-object constructor, placed by class name and debug map
    // PublicChatMode::PublicChatMode(int): jumps straight to the base-object constructor

    // 0x100264820, 16 bytes, placed by class name and debug map
    // PublicChatMode::GetId() const
    int PublicChatMode::GetId() {
        return m_id;
    }

} // namespace jag::oldscape::constants
