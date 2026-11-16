// projects/osclient/camera/CinemaCameraData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class CinemaCameraData {
    public:
        CinemaCameraData();

    private:
        uint32_t field_0;
        uint8_t field_4;
        uint8_t _unknown_5[3];
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
    };

    // 0x100128650
    CinemaCameraData::CinemaCameraData()
        : field_4(0), field_0(0), field_8(0), field_16(0), field_24(0), field_32(0), field_40(0) {}

} // namespace jag::oldscape
