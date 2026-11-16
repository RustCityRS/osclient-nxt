// libs/game/runetek5/scene/regions/RegionRotate.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class RegionRotate {
    public:
        int RegionRotateX(int arg1, int arg2, Rotation90 rotation90);
        int RegionRotateZ(int arg1, int arg2, Rotation90 rotation90);
        int RegionRotateFineX(int arg1, int arg2, Rotation90 rotation90);
        int RegionRotateFineZ(int arg1, int arg2, Rotation90 rotation90);
        int RegionRotateLocationX(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        int RegionRotateLocationZ(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
    };

    // 0x1003c5470
    int RegionRotate::RegionRotateX(int arg1, int arg2, Rotation90 rotation90) {
        if (rotation90 != 0) {
            if ((char)rotation90 == '\x02') {
                return 7 - arg1;
            }
            if ((char)rotation90 == '\x01') {
                return arg2;
            }
            arg1 = 7 - arg2;
        }
        return arg1;
    }

    // 0x1003c54a0
    int RegionRotate::RegionRotateZ(int arg1, int arg2, Rotation90 rotation90) {
        if (rotation90 == 0) {
            return arg2;
        }
        if ((char)rotation90 == '\x02') {
            arg1 = 7 - arg2;
        } else if ((char)rotation90 == '\x01') {
            return 7 - arg1;
        }
        return arg1;
    }

    // 0x1003c54d0
    int RegionRotate::RegionRotateFineX(int arg1, int arg2, Rotation90 rotation90) {
        if (rotation90 != 0) {
            if ((char)rotation90 == '\x02') {
                return 1023 - arg1;
            }
            if ((char)rotation90 == '\x01') {
                return arg2;
            }
            arg1 = 1023 - arg2;
        }
        return arg1;
    }

    // 0x1003c5500
    int RegionRotate::RegionRotateFineZ(int arg1, int arg2, Rotation90 rotation90) {
        if (rotation90 == 0) {
            return arg2;
        }
        if ((char)rotation90 == '\x02') {
            arg1 = 1023 - arg2;
        } else if ((char)rotation90 == '\x01') {
            return 1023 - arg1;
        }
        return arg1;
    }

    // 0x1003c5530
    int RegionRotate::RegionRotateLocationX(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
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

    // 0x1003c5580
    int RegionRotate::RegionRotateLocationZ(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
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

} // namespace jag::game
