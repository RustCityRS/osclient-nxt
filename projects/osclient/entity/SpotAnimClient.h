// projects/osclient/entity/SpotAnimClient.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class SpotAnimClient {
    public:
        SpotAnimClient(int, int, int, int);
        SpotAnimClient();

        // data members, from how the methods use this: 24 bytes
        int field_0;        // offset 0
        undefined4 field_4; // offset 4
        int field_8;        // offset 8
        int field_12;       // offset 12
        int field_16;       // offset 16
        char _unknown_20[4];
    };

    // 0x10011c7e0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SpotAnimClient::SpotAnimClient(int, int, int, int): jumps straight to the base-object constructor

    // 0x10011c980, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SpotAnimAppendList::SpotAnimAppendList(eastl::vector_map<int, SpotAnimClient, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, SpotAnimClient>, eastl::allocator> > const&): jumps straight to the base-object constructor

    // 0x100130b20, 32 bytes, base-object constructor, inline, placed by class name
    // SpotAnimClient::SpotAnimClient(int, int, int, int)
    void SpotAnimClient::SpotAnimClient(int param_1, int param_2, int param_3, int param_4) {
        field_0 = param_1;
        field_4 = 0;
        field_8 = param_2;
        field_12 = param_3;
        field_16 = param_4;
    }

    // 0x100154dd0, 16 bytes, complete-object constructor, inline, placed by class name
    // SpotAnimClient::SpotAnimClient(): jumps straight to the base-object constructor

    // 0x1001553e0, 32 bytes, base-object constructor, inline, placed by class name
    // SpotAnimClient::SpotAnimClient()
    void SpotAnimClient::SpotAnimClient() {
        field_0 = -1;
        field_4 = 0;
        field_8 = 0;
        field_12 = 0;
        field_16 = 0;
    }

} // namespace jag::oldscape
