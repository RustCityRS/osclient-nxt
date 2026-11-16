// projects/osclient/entity/SpotAnimClient.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class SpotAnimClient {
    public:
        SpotAnimClient(int arg1, int arg2, int arg3, int arg4);
        SpotAnimClient();

    private:
        int field_0;
        uint32_t field_4;
        int field_8;
        int field_12;
        int field_16;
        uint8_t _unknown_20[4];
    };

    // 0x100130b20
    SpotAnimClient::SpotAnimClient(int arg1, int arg2, int arg3, int arg4)
        : field_0(arg1), field_4(0), field_8(arg2), field_12(arg3), field_16(arg4) {}

    // 0x1001553e0
    SpotAnimClient::SpotAnimClient() : field_0(-1), field_4(0), field_8(0), field_12(0), field_16(0) {}

} // namespace jag::oldscape
