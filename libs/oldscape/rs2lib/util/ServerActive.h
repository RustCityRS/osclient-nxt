// libs/oldscape/rs2lib/util/ServerActive.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib {
    class ServerActive {
    public:
        bool IsUseTarget(int arg1);
        unsigned int PauseButton(int arg1);
        unsigned int TargetMask(int arg1);
        bool IsDragTarget(int arg1);
        bool IsCRMTarget(int arg1);
        bool HasOp(int arg1, int arg2);
        unsigned int ServerDraggable(int arg1);
    };

    // 0x100072a10
    bool ServerActive::IsUseTarget(int arg1) {
        return (unsigned int)arg1 >> 21 & 1;
    }

    // 0x100072bb0
    unsigned int ServerActive::PauseButton(int arg1) {
        return arg1 & 4294967041;
    }

    // 0x100106380
    unsigned int ServerActive::TargetMask(int arg1) {
        return (unsigned int)arg1 >> 11 & 63;
    }

    // 0x100106510
    bool ServerActive::IsDragTarget(int arg1) {
        return (unsigned int)arg1 >> 20 & 1;
    }

    // 0x1001066d0
    bool ServerActive::IsCRMTarget(int arg1) {
        return (unsigned int)arg1 >> 22 & 1;
    }

    // 0x10010c8a0
    bool ServerActive::HasOp(int arg1, int arg2) {
        return ((unsigned int)arg1 >> ((uint8_t)((char)arg2 + 1) & 31) & 1) != 0;
    }

    // 0x10010cf70
    unsigned int ServerActive::ServerDraggable(int arg1) {
        return (unsigned int)arg1 >> 17 & 7;
    }

} // namespace jag::oldscape::rs2lib

namespace jag::ui {
    class ServerActiveProperties {
    public:
        ServerActiveProperties(unsigned int arg1, int arg2);
        ServerActiveProperties();

    private:
        uint64_t field_0;
        uint8_t _unknown_8[4];
    };

} // namespace jag::ui
