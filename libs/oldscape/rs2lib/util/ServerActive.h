// libs/oldscape/rs2lib/util/ServerActive.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib {
    class ServerActive {
    public:
        uint IsUseTarget(int);
        uint PauseButton(int);
        uint TargetMask(int);
        uint IsDragTarget(int);
        uint IsCRMTarget(int);
        bool HasOp(int, int);
        uint ServerDraggable(int);
    };

    // 0x100072a10, 16 bytes, inline, placed by class name and debug map
    // ServerActive::IsUseTarget(int)
    uint ServerActive::IsUseTarget(int param_1) {
        return (uint)param_1 >> 21 & 1;
    }

    // 0x100072bb0, 16 bytes, inline, placed by class name and debug map
    // ServerActive::PauseButton(int)
    uint ServerActive::PauseButton(int param_1) {
        return param_1 & 4294967041;
    }

    // 0x100106380, 16 bytes, inline, placed by class name
    // ServerActive::TargetMask(int)
    uint ServerActive::TargetMask(int param_1) {
        return (uint)param_1 >> 11 & 63;
    }

    // 0x100106510, 16 bytes, inline, placed by class name
    // ServerActive::IsDragTarget(int)
    uint ServerActive::IsDragTarget(int param_1) {
        return (uint)param_1 >> 20 & 1;
    }

    // 0x1001066d0, 16 bytes, inline, placed by class name
    // ServerActive::IsCRMTarget(int)
    uint ServerActive::IsCRMTarget(int param_1) {
        return (uint)param_1 >> 22 & 1;
    }

    // 0x10010c8a0, 32 bytes, inline, placed by class name
    // ServerActive::HasOp(int, int)
    bool ServerActive::HasOp(int param_1, int param_2) {
        return ((uint)param_1 >> ((byte)((char)param_2 + 1) & 31) & 1) != 0;
    }

    // 0x10010cf70, 16 bytes, inline, placed by class name
    // ServerActive::ServerDraggable(int)
    uint ServerActive::ServerDraggable(int param_1) {
        return (uint)param_1 >> 17 & 7;
    }

} // namespace jag::oldscape::rs2lib

namespace jag::ui {
    class ServerActiveProperties {
    public:
        ServerActiveProperties(unsigned int, int);
        ServerActiveProperties();

        // data members, from how the methods use this: 12 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[4];
    };

} // namespace jag::ui
