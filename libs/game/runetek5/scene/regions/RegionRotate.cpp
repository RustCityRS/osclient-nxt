// libs/game/runetek5/scene/regions/RegionRotate.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class RegionRotate {
    public:
        int RegionRotateX(int, int, Rotation90);
        int RegionRotateZ(int, int, Rotation90);
        int RegionRotateFineX(int, int, Rotation90);
        int RegionRotateFineZ(int, int, Rotation90);
        ulong RegionRotateLocationX(int, int, int, int, int, int);
        ulong RegionRotateLocationZ(int, int, int, int, int, int);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1003c5470, 48 bytes, placed by class name and debug map
    // RegionRotate::RegionRotateX(int, int, Rotation90)
    int RegionRotate::RegionRotateX(int param_1_00, int param_1, int param_2) {
        if (param_2 != 0) {
            if ((char)param_2 == '\x02') {
                return 7 - param_1_00;
            }
            if ((char)param_2 == '\x01') {
                return param_1;
            }
            param_1_00 = 7 - param_1;
        }
        return param_1_00;
    }

    // 0x1003c54a0, 48 bytes, placed by class name and debug map
    // RegionRotate::RegionRotateZ(int, int, Rotation90)
    int RegionRotate::RegionRotateZ(int param_1_00, int param_1, int param_2) {
        if (param_2 == 0) {
            return param_1;
        }
        if ((char)param_2 == '\x02') {
            param_1_00 = 7 - param_1;
        } else if ((char)param_2 == '\x01') {
            return 7 - param_1_00;
        }
        return param_1_00;
    }

    // 0x1003c54d0, 48 bytes, placed by class name and debug map
    // RegionRotate::RegionRotateFineX(int, int, Rotation90)
    int RegionRotate::RegionRotateFineX(int param_1_00, int param_1, int param_2) {
        if (param_2 != 0) {
            if ((char)param_2 == '\x02') {
                return 1023 - param_1_00;
            }
            if ((char)param_2 == '\x01') {
                return param_1;
            }
            param_1_00 = 1023 - param_1;
        }
        return param_1_00;
    }

    // 0x1003c5500, 48 bytes, placed by class name and debug map
    // RegionRotate::RegionRotateFineZ(int, int, Rotation90)
    int RegionRotate::RegionRotateFineZ(int param_1_00, int param_1, int param_2) {
        if (param_2 == 0) {
            return param_1;
        }
        if ((char)param_2 == '\x02') {
            param_1_00 = 1023 - param_1;
        } else if ((char)param_2 == '\x01') {
            return 1023 - param_1_00;
        }
        return param_1_00;
    }

    // 0x1003c5530, 80 bytes, placed by class name and debug map
    // RegionRotate::RegionRotateLocationX(int, int, int, int, int, int)
    ulong RegionRotate::RegionRotateLocationX(int param_1, int param_2, int param_3, int param_4, int param_5,
                                              int param_6) {
        ulong uVar1;
        uint uVar2;

        uVar1 = (ulong)this & 4294967295;
        uVar2 = param_2 & 3;
        if (uVar2 != 0) {
            if (uVar2 == 2) {
                if ((param_5 & 1U) == 0) {
                    param_4 = param_3;
                }
                return (ulong)(8 - (param_4 + (int)this));
            }
            if (uVar2 == 1) {
                return (ulong)(uint)param_1;
            }
            if ((param_5 & 1U) == 0) {
                param_3 = param_4;
            }
            uVar1 = (ulong)(8 - (param_3 + param_1));
        }
        return uVar1;
    }

    // 0x1003c5580, 80 bytes, placed by class name and debug map
    // RegionRotate::RegionRotateLocationZ(int, int, int, int, int, int)
    ulong RegionRotate::RegionRotateLocationZ(int param_1, int param_2, int param_3, int param_4, int param_5,
                                              int param_6) {
        ulong uVar1;
        uint uVar2;

        uVar2 = param_2 & 3;
        if (uVar2 == 0) {
            return (ulong)(uint)param_1;
        }
        if (uVar2 == 2) {
            if ((param_5 & 1U) == 0) {
                param_3 = param_4;
            }
            uVar1 = (ulong)(8 - (param_3 + param_1));
        } else {
            uVar1 = (ulong)this & 4294967295;
            if (uVar2 == 1) {
                if ((param_5 & 1U) == 0) {
                    param_4 = param_3;
                }
                return (ulong)(8 - (param_4 + (int)this));
            }
        }
        return uVar1;
    }

} // namespace jag::game
