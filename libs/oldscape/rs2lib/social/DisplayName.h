// libs/oldscape/rs2lib/social/DisplayName.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::rs2lib::social {
    class DisplayName {
    public:
        DisplayName(DisplayName&& displayName);
        ~DisplayName();
        DisplayName* operator=(DisplayName&& consoleCommandHelp);
        DisplayName();
        DisplayName(const DisplayName& displayName);
        void Equals(const shared_ptr<DisplayName>& displayName) const;
        bool IsValid() const;
        void Equals(const DisplayName& displayName) const;
        DisplayName(const eastl::string& str, NameSpace nameSpace);
        DisplayName(const eastl::string& str);
        DisplayName(eastl::string&& str, NameSpace nameSpace);
        eastl::string* GetDisplayName() const;
        uint8_t* GetBaseDisplayName() const;
        uint64_t HashCode() const;
        void ToString() const;
        unsigned int CompareTo(const DisplayName& displayName) const;
        void operator==(const DisplayName& displayName) const;
        static hash<eastl::string> m_hasher;

        uint8_t _unknown_0[40];
    };

    // 0x100056a40
    DisplayName::DisplayName(DisplayName&& displayName) : eastl::string(displayName), field_32(displayName.field_32) {}

    // 0x10012d170
    DisplayName::DisplayName() {

        new (this) eastl::string("");
        new (&field_32) eastl::string("");
    }

    // 0x10012eea0
    DisplayName::DisplayName(const DisplayName& displayName)
        : eastl::string(displayName), field_32(displayName.field_32) {}

    // 0x100185b30
    void DisplayName::Equals(const shared_ptr<DisplayName>& displayName) const {
        DisplayName* displayName_00;

        if (displayName == nullptr) {
            field_32.empty();
        } else {
            displayName_00 = (DisplayName*)displayName;
            *this == *displayName_00;
        }
    }

    // 0x100185cf0
    bool DisplayName::IsValid() const {
        return empty() ^ 1;
    }

    // 0x100185db0
    void DisplayName::Equals(const DisplayName& displayName) const {
        *this == displayName;
    }

} // namespace jag::oldscape::rs2lib::social

namespace jag::oldscape {
    // 0x100056a40: ConsoleCommandHelp::ConsoleCommandHelp(ConsoleCommandHelp&&) has the same machine code as rs2lib::social::DisplayName::DisplayName(rs2lib::social::DisplayName&&)

} // namespace jag::oldscape
