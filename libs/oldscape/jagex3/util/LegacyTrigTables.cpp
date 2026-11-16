// libs/oldscape/jagex3/util/LegacyTrigTables.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::util {
    class LegacyTrigTables {
    public:
        void Init();
        float ToDegrees(int arg1);
        void ToRadians(int arg1);
        static int32_t TRIG_ANGLEREVERSEFACTOR[32]; // initialised in its definition
        static uint8_t SINTAB[8192];
        static uint8_t COSTAB[8192];

        uint8_t _unknown_0[1];
    };

    // 0x100d41920
    int32_t LegacyTrigTables::TRIG_ANGLEREVERSEFACTOR[32] = {
        1841940611, 1081368368, 1191182336,  939524096,   1011421147, 1159920003,  1202590843, 1064598241,
        1717986918, 1072064102, 0,           1075052544,  0,          -1077936128, 0,          1075576832,
        1431655765, 1071994197, -2130574328, 1061167168,  1431655765, 1054168405,  0,          1080033280,
        1431655765, 1060459861, 1202590843,  -1091274015, 0,          1061289984,  0,          1094713344,
    };

    // 0x1016c1e90
    uint8_t LegacyTrigTables::SINTAB[8192];

    // 0x1016c3e90
    uint8_t LegacyTrigTables::COSTAB[8192];

    // 0x1002a7440
    void LegacyTrigTables::Init() {
        double dVar3;
        double in_XMM1_Qa;

        long lVar2 = 0;
        long lVar1 = 0;
        do {
            dVar3 = (double)___sincos_stret((double)(int)lVar1 * 0.0030679615757712823);
            *(int*)((long)&SINTAB + lVar2) = (int)(dVar3 * 65536.0);
            in_XMM1_Qa = in_XMM1_Qa * 65536.0;
            *(int*)((long)&COSTAB + lVar2) = (int)in_XMM1_Qa;
            lVar1 = lVar1 + 1;
            lVar2 = lVar2 + 4;
        } while (lVar1 != 2048);
    }

    // 0x1002a74b0
    float LegacyTrigTables::ToDegrees(int arg1) {
        return (float)(arg1 & 2047) * 0.17578125f;
    }

    // 0x1002a74d0
    void LegacyTrigTables::ToRadians(int arg1) {
        double dVar1 = (double)((float)(arg1 & 2047) * 0.00048828125f) * 6.283185307179586;
        return (((uint64_t)((int)((unsigned long)dVar1 >> 32)) << 32) | (uint32_t)((float)dVar1));
    }

} // namespace jag::oldscape::util
