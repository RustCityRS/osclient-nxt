// libs/oldscape/rs2lib/util/regionrotate.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::util {
    class RegionRotate {
    public:
        int DX(int, int, int);
        int DX(int, int, int, int, int, int);
        int DZ(int, int, int);
        int DZ(int, int, int, int, int, int);
    };

    // 0x100206640, 48 bytes, placed by class name and debug map
    // RegionRotate::DX(int, int, int)
    int RegionRotate::DX(int param_1, int param_2, int param_3) {
        uint uVar1;

        uVar1 = param_3 & 3;
        if (uVar1 != 0) {
            if (uVar1 == 2) {
                return 7 - param_1;
            }
            if (uVar1 == 1) {
                return param_2;
            }
            param_1 = 7 - param_2;
        }
        return param_1;
    }

    // 0x100206670, 80 bytes, placed by class name and debug map
    // RegionRotate::DX(int, int, int, int, int, int)
    int RegionRotate::DX(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        uint uVar1;

        uVar1 = param_3 & 3;
        if (uVar1 != 0) {
            if (uVar1 == 2) {
                if ((param_6 & 1U) == 0) {
                    param_5 = param_4;
                }
                return 8 - (param_5 + param_1);
            }
            if (uVar1 == 1) {
                return param_2;
            }
            if ((param_6 & 1U) == 0) {
                param_4 = param_5;
            }
            param_1 = 8 - (param_4 + param_2);
        }
        return param_1;
    }

    // 0x1002066c0, 48 bytes, placed by class name and debug map
    // RegionRotate::DZ(int, int, int)
    int RegionRotate::DZ(int param_1, int param_2, int param_3) {
        uint uVar1;

        uVar1 = param_3 & 3;
        if (uVar1 == 0) {
            return param_2;
        }
        if (uVar1 == 2) {
            param_1 = 7 - param_2;
        } else if (uVar1 == 1) {
            return 7 - param_1;
        }
        return param_1;
    }

    // 0x1002066f0, 80 bytes, placed by class name and debug map
    // RegionRotate::DZ(int, int, int, int, int, int)
    int RegionRotate::DZ(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        uint uVar1;

        uVar1 = param_3 & 3;
        if (uVar1 == 0) {
            return param_2;
        }
        if (uVar1 == 2) {
            if ((param_6 & 1U) == 0) {
                param_4 = param_5;
            }
            param_1 = 8 - (param_4 + param_2);
        } else if (uVar1 == 1) {
            if ((param_6 & 1U) == 0) {
                param_5 = param_4;
            }
            return 8 - (param_5 + param_1);
        }
        return param_1;
    }

} // namespace jag::oldscape::util
