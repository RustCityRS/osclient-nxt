// projects/osclient/camera/CinemaCameraData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class CinemaCameraData {
    public:
        CinemaCameraData();

        // data members, from how the methods use this: 48 bytes
        undefined4 field_0; // offset 0
        undefined1 field_4; // offset 4
        char _unknown_5[3];
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
    };

    // 0x1000c42c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // CinemaCameraData::CinemaCameraData(): jumps straight to the base-object constructor

    // 0x100128650, 48 bytes, base-object constructor, inline, placed by class name
    // CinemaCameraData::CinemaCameraData()
    void CinemaCameraData::CinemaCameraData() {
        field_4 = 0;
        field_0 = 0;
        field_8 = 0;
        field_16 = 0;
        field_24 = 0;
        field_32 = 0;
        field_40 = 0;
    }

} // namespace jag::oldscape
