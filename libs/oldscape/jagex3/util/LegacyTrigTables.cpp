// libs/oldscape/jagex3/util/LegacyTrigTables.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::util {
    class LegacyTrigTables {
    public:
        void Init();
        float ToDegrees(int);
        ToRadians(int);
        static /* 128 bytes */ TRIG_ANGLEREVERSEFACTOR; // initialised in its definition
        static /* 8192 bytes */ SINTAB;
        static /* 8192 bytes */ COSTAB;
    };

    // 0x100d41920, 128 bytes, __const
    LegacyTrigTables::TRIG_ANGLEREVERSEFACTOR = {
        1841940611, 1081368368, 1191182336,  939524096,   1011421147, 1159920003,  1202590843, 1064598241,
        1717986918, 1072064102, 0,           1075052544,  0,          -1077936128, 0,          1075576832,
        1431655765, 1071994197, -2130574328, 1061167168,  1431655765, 1054168405,  0,          1080033280,
        1431655765, 1060459861, 1202590843,  -1091274015, 0,          1061289984,  0,          1094713344,
    };

    // 0x1016c1e90, 8192 bytes, __common; zero-initialised
    LegacyTrigTables::SINTAB;

    // 0x1016c3e90, 8192 bytes, __common; zero-initialised
    LegacyTrigTables::COSTAB;

    // 0x1002a7440, 112 bytes, placed by class name and debug map
    // LegacyTrigTables::Init()
    void LegacyTrigTables::Init() {
        long lVar1;
        long lVar2;
        double dVar3;
        double in_XMM1_Qa;

        lVar2 = 0;
        lVar1 = 0;
        do {
            dVar3 = (double)___sincos_stret((double)(int)lVar1 * 0.0030679615757712823);
            *(int*)((long)&SINTAB + lVar2) = (int)(dVar3 * 65536.0);
            in_XMM1_Qa = in_XMM1_Qa * 65536.0;
            *(int*)((long)&COSTAB + lVar2) = (int)in_XMM1_Qa;
            lVar1 = lVar1 + 1;
            lVar2 = lVar2 + 4;
        } while (lVar1 != 2048);
    }

    // 0x1002a74b0, 32 bytes, placed by class name and debug map
    // LegacyTrigTables::ToDegrees(int)
    float LegacyTrigTables::ToDegrees(int param_1) {
        return (float)(param_1 & 2047) * 0.17578125;
    }

    // 0x1002a74d0, 48 bytes, placed by class name and debug map
    // LegacyTrigTables::ToRadians(int)
    undefined8 LegacyTrigTables::ToRadians(int param_1) {
        double dVar1;

        dVar1 = (double)((float)(param_1 & 2047) * 0.00048828125) * 6.283185307179586;
        return CONCAT44((int)((ulong)dVar1 >> 32), (float)dVar1);
    }

} // namespace jag::oldscape::util
