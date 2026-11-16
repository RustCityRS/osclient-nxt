// libs/oldscape/jagex3/core/MathTool.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::core::math {
    class MathTool {
    public:
        unsigned int UnsignedLeftShift(signed char arg1, unsigned char arg2);
        int UnsignedLeftShift(int arg1, unsigned char arg2);
        long UnsignedLeftShift(long long arg1, unsigned char arg2);
        uint8_t UnsignedRightShift(signed char arg1, unsigned char arg2);
        unsigned int UnsignedRightShift(int arg1, unsigned char arg2);
        unsigned long UnsignedRightShift(long long arg1, unsigned char arg2);
        int BitsRequired(int arg1);
        int BitReverse(int arg1, int arg2);
        int SaneDiv(int arg1, int arg2);
        int Hcf(int arg1, int arg2);
    };

    // 0x1003481b0
    unsigned int MathTool::UnsignedLeftShift(signed char arg1, unsigned char arg2) {
        return (unsigned int)(uint8_t)arg1 << (arg2 & 31) & 255;
    }

    // 0x1003481d0
    int MathTool::UnsignedLeftShift(int arg1, unsigned char arg2) {
        return arg1 << (arg2 & 31);
    }

    // 0x1003481e0
    long MathTool::UnsignedLeftShift(long long arg1, unsigned char arg2) {
        return arg1 << (arg2 & 63);
    }

    // 0x1003481f0
    uint8_t MathTool::UnsignedRightShift(signed char arg1, unsigned char arg2) {
        return (uint8_t)arg1 >> (arg2 & 31);
    }

    // 0x100348200
    unsigned int MathTool::UnsignedRightShift(int arg1, unsigned char arg2) {
        return (unsigned int)arg1 >> (arg2 & 31);
    }

    // 0x100348210
    unsigned long MathTool::UnsignedRightShift(long long arg1, unsigned char arg2) {
        return (unsigned long)arg1 >> (arg2 & 63);
    }

    // 0x100348220
    int MathTool::BitsRequired(int arg1) {
        int iVar2 = arg1 >> 16;
        if (65535U >= (unsigned int)arg1) {
            iVar2 = arg1;
        }
        int iVar3 = (unsigned int)(65535U < (unsigned int)arg1) * 16;
        int iVar4 = iVar3 + 8;
        int iVar1 = iVar2 >> 8;
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
        return iVar4 + (unsigned int)(0 < iVar1) + (iVar1 >> (0 < iVar1));
    }

    // 0x100348280
    int MathTool::BitReverse(int arg1, int arg2) {
        if (arg2 < 1) {
            return 0;
        }
        int iVar2 = arg2 + 1;
        int iVar1 = 0;
        do {
            iVar1 = (arg1 & 1U) + iVar1 * 2;
            arg1 = arg1 >> 1;
            iVar2 = iVar2 - 1;
        } while (1 < iVar2);
        return iVar1;
    }

    // 0x1003482b0
    int MathTool::SaneDiv(int arg1, int arg2) {
        return (arg1 + (arg1 >> 31)) / arg2 - (arg1 >> 31);
    }

    // 0x1003482d0
    int MathTool::Hcf(int arg1, int arg2) {
        int iVar2;

        int iVar1 = arg1;
        if (arg1 < arg2) {
            iVar1 = arg2;
            arg2 = arg1;
        }
        if (arg2 == 0) {
            iVar2 = iVar1;
        } else {
            do {
                iVar2 = arg2;
                arg2 = iVar1 % iVar2;
                iVar1 = iVar2;
            } while (arg2 != 0);
        }
        return iVar2;
    }

} // namespace jag::oldscape::core::math
