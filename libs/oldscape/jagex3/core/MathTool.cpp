// libs/oldscape/jagex3/core/MathTool.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::core::math {
    class MathTool {
    public:
        uint UnsignedLeftShift(signed char, unsigned char);
        int UnsignedLeftShift(int, unsigned char);
        long UnsignedLeftShift(long long, unsigned char);
        byte UnsignedRightShift(signed char, unsigned char);
        uint UnsignedRightShift(int, unsigned char);
        ulong UnsignedRightShift(long long, unsigned char);
        int BitsRequired(int);
        int BitReverse(int, int);
        int SaneDiv(int, int);
        int Hcf(int, int);
    };

    // 0x1003481b0, 32 bytes, placed by class name and debug map
    // MathTool::UnsignedLeftShift(signed char, unsigned char)
    uint MathTool::UnsignedLeftShift(byte param_1, byte param_2) {
        return (uint)param_1 << (param_2 & 31) & 255;
    }

    // 0x1003481d0, 16 bytes, placed by class name and debug map
    // MathTool::UnsignedLeftShift(int, unsigned char)
    int MathTool::UnsignedLeftShift(int param_1, uchar param_2) {
        return param_1 << (param_2 & 31);
    }

    // 0x1003481e0, 16 bytes, placed by class name and debug map
    // MathTool::UnsignedLeftShift(long long, unsigned char)
    long MathTool::UnsignedLeftShift(longlong param_1, uchar param_2) {
        return param_1 << (param_2 & 63);
    }

    // 0x1003481f0, 16 bytes, placed by class name and debug map
    // MathTool::UnsignedRightShift(signed char, unsigned char)
    byte MathTool::UnsignedRightShift(byte param_1, byte param_2) {
        return param_1 >> (param_2 & 31);
    }

    // 0x100348200, 16 bytes, placed by class name and debug map
    // MathTool::UnsignedRightShift(int, unsigned char)
    uint MathTool::UnsignedRightShift(int param_1, uchar param_2) {
        return (uint)param_1 >> (param_2 & 31);
    }

    // 0x100348210, 16 bytes, placed by class name and debug map
    // MathTool::UnsignedRightShift(long long, unsigned char)
    ulong MathTool::UnsignedRightShift(longlong param_1, uchar param_2) {
        return (ulong)param_1 >> (param_2 & 63);
    }

    // 0x100348220, 96 bytes, placed by class name and debug map
    // MathTool::BitsRequired(int)
    int MathTool::BitsRequired(int param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;

        iVar2 = param_1 >> 16;
        if (65535U >= (uint)param_1) {
            iVar2 = param_1;
        }
        iVar3 = (uint)(65535U < (uint)param_1) * 16;
        iVar4 = iVar3 + 8;
        iVar1 = iVar2 >> 8;
        if (iVar2 < 256) {
            iVar4 = iVar3;
            iVar1 = iVar2;
        }
        iVar3 = iVar4 + 4;
        iVar2 = iVar1 >> 4;
        if (iVar1 < 16) {
            iVar3 = iVar4;
            iVar2 = iVar1;
        }
        iVar4 = iVar3 + 2;
        iVar1 = iVar2 >> 2;
        if (iVar2 < 4) {
            iVar4 = iVar3;
            iVar1 = iVar2;
        }
        return iVar4 + (uint)(0 < iVar1) + (iVar1 >> (0 < iVar1));
    }

    // 0x100348280, 48 bytes, placed by class name and debug map
    // MathTool::BitReverse(int, int)
    int MathTool::BitReverse(int param_1, int param_2) {
        int iVar1;
        int iVar2;

        if (param_2 < 1) {
            return 0;
        }
        iVar2 = param_2 + 1;
        iVar1 = 0;
        do {
            iVar1 = (param_1 & 1U) + iVar1 * 2;
            param_1 = param_1 >> 1;
            iVar2 = iVar2 + -1;
        } while (1 < iVar2);
        return iVar1;
    }

    // 0x1003482b0, 32 bytes, placed by class name and debug map
    // MathTool::SaneDiv(int, int)
    int MathTool::SaneDiv(int param_1, int param_2) {
        return (param_1 + (param_1 >> 31)) / param_2 - (param_1 >> 31);
    }

    // 0x1003482d0, 64 bytes, placed by class name and debug map
    // MathTool::Hcf(int, int)
    int MathTool::Hcf(int param_1, int param_2) {
        int iVar1;
        int iVar2;

        iVar1 = param_1;
        if (param_1 < param_2) {
            iVar1 = param_2;
            param_2 = param_1;
        }
        if (param_2 == 0) {
            iVar2 = iVar1;
        } else {
            do {
                iVar2 = param_2;
                param_2 = iVar1 % iVar2;
                iVar1 = iVar2;
            } while (param_2 != 0);
        }
        return iVar2;
    }

} // namespace jag::oldscape::core::math
