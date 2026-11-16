// projects/osclient/social/IgnoreList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    class IgnoreList {
    public:
        // virtual methods in vtable order
        virtual IgnoreList* CreatePlayerData() const;
        void ProcessUpdate(PacketJ<Array<unsigned char>>& packetJ, int arg2, ErrorCapture& errorCapture);
        IgnoreList(rs2lib::social::NameSpace nameSpace);
        ~IgnoreList();

    private:
        int field_8;
        int field_12;
        uint8_t _unknown_16[144];
        NameSpace field_160;
        uint8_t _unknown_164[4];
    };

    // 0x10013a050
    IgnoreList::IgnoreList(rs2lib::social::NameSpace nameSpace)
        : PlayerRegistry<IgnoreData>(400), field_160(nameSpace) {}

    // 0x10013a1a0
    IgnoreList* IgnoreList::CreatePlayerData() const {
        *this = std::make_unique<IgnoreData>();
        return this;
    }

    // 0x10013d010
    IgnoreList::~IgnoreList() {}

} // namespace jag::oldscape::social
