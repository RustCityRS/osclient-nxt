// projects/osclient/social/IgnoreData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    class IgnoreData {
    public:
        // virtual methods in vtable order
        virtual int CompareTo(const IgnoreData& ignoreData) const;
        IgnoreData();
        ~IgnoreData();

    private:
        uint8_t _unknown_8[160];
        int field_168;
        uint8_t _unknown_172[4];
    };

    // 0x10013a920
    IgnoreData::IgnoreData() : PlayerData<IgnoreData>() {}

    // 0x10013a9c0
    int IgnoreData::CompareTo(const IgnoreData& ignoreData) const {
        return field_168 - ignoreData.field_168;
    }

    // 0x1001af9f0
    IgnoreData::~IgnoreData() {
        field_136.~basic_string();
    }

} // namespace jag::oldscape::social
