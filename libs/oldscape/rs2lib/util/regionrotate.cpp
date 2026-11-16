// libs/oldscape/rs2lib/util/regionrotate.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::util {
    class RegionRotate {
    public:
        int DX(int arg1, int arg2, int arg3);
        int DX(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        int DZ(int arg1, int arg2, int arg3);
        int DZ(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
    };

    // 0x100206640
    int RegionRotate::DX(int arg1, int arg2, int arg3) {
        unsigned int uVar1 = arg3 & 3;
        if (uVar1 != 0) {
            if (uVar1 == 2) {
                return 7 - arg1;
            }
            if (uVar1 == 1) {
                return arg2;
            }
            arg1 = 7 - arg2;
        }
        return arg1;
    }

    // 0x100206670
    int RegionRotate::DX(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        unsigned int uVar1 = arg3 & 3;
        if (uVar1 != 0) {
            if (uVar1 == 2) {
                if ((arg6 & 1U) == 0) {
                    arg5 = arg4;
                }
                return 8 - (arg5 + arg1);
            }
            if (uVar1 == 1) {
                return arg2;
            }
            if ((arg6 & 1U) == 0) {
                arg4 = arg5;
            }
            arg1 = 8 - (arg4 + arg2);
        }
        return arg1;
    }

    // 0x1002066c0
    int RegionRotate::DZ(int arg1, int arg2, int arg3) {
        unsigned int uVar1 = arg3 & 3;
        if (uVar1 == 0) {
            return arg2;
        }
        if (uVar1 == 2) {
            arg1 = 7 - arg2;
        } else if (uVar1 == 1) {
            return 7 - arg1;
        }
        return arg1;
    }

    // 0x1002066f0
    int RegionRotate::DZ(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        unsigned int uVar1 = arg3 & 3;
        if (uVar1 == 0) {
            return arg2;
        }
        if (uVar1 == 2) {
            if ((arg6 & 1U) == 0) {
                arg4 = arg5;
            }
            arg1 = 8 - (arg4 + arg2);
        } else if (uVar1 == 1) {
            if ((arg6 & 1U) == 0) {
                arg5 = arg4;
            }
            return 8 - (arg5 + arg1);
        }
        return arg1;
    }

} // namespace jag::oldscape::util
