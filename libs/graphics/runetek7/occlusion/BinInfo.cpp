// libs/graphics/runetek7/occlusion/BinInfo.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class BinInfo {
    public:
        BinInfo(int, int);
        ~BinInfo();
        void FullReset();

        // data members, from how the methods use this: 52 bytes
        void* field_0;  // offset 0
        void* field_8;  // offset 8
        void* field_16; // offset 16
        void* field_24; // offset 24
        void* field_32; // offset 32
        int field_40;   // offset 40
        int field_44;   // offset 44
        char _unknown_48[4];
    };

    class BinInfoSSE {
    public:
        BinInfoSSE(int, int);
        ~BinInfoSSE();
        void FullReset();

        // data members, from how the methods use this: 28 bytes
        void* field_0; // offset 0
        void* field_8; // offset 8
        int field_16;  // offset 16
        int field_20;  // offset 20
        char _unknown_24[4];
    };

    // 0x100822500, 208 bytes, base-object constructor, placed by class name and debug map
    // BinInfo::BinInfo(int, int)
    void BinInfo::BinInfo(int param_1, int param_2) {
        undefined1 auVar1[16];
        undefined1 auVar2[16];
        undefined1 auVar3[16];
        ulong uVar4;
        void* pvVar5;
        ulong uVar6;

        uVar6 = (ulong)(param_2 * param_1);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar6;
        uVar4 = SUB168(auVar1 * ZEXT816(4), 0);
        if (SUB168(auVar1 * ZEXT816(4), 8) != 0) {
            uVar4 = 18446744073709551615;
        }
        pvVar5 = operator_new__(uVar4);
        field_0 = pvVar5;
        uVar4 = uVar6 * 2;
        if (CARRY8(uVar6, uVar6)) {
            uVar4 = 18446744073709551615;
        }
        pvVar5 = operator_new__(uVar4);
        field_8 = pvVar5;
        pvVar5 = operator_new__(uVar4);
        field_16 = pvVar5;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar6;
        uVar4 = SUB168(auVar2 * ZEXT816(8), 0);
        if (SUB168(auVar2 * ZEXT816(8), 8) != 0) {
            uVar4 = 18446744073709551615;
        }
        pvVar5 = operator_new__(uVar4);
        field_32 = pvVar5;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (long)param_1;
        uVar4 = SUB168(auVar3 * ZEXT816(4), 0);
        if (SUB168(auVar3 * ZEXT816(4), 8) != 0) {
            uVar4 = 18446744073709551615;
        }
        pvVar5 = operator_new__(uVar4);
        ___bzero(pvVar5, uVar4);
        field_24 = pvVar5;
        field_40 = param_1;
        field_44 = param_2;
    }

    // 0x1008225d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // BinInfo::BinInfo(int, int): jumps straight to the base-object constructor

    // 0x1008225e0, 96 bytes, base-object destructor, placed by class name and debug map
    // BinInfo::~BinInfo()
    void BinInfo::~BinInfo() {
        if (field_32 != (void*)0) {
            operator_delete__(field_32);
        }
        if (field_0 != (void*)0) {
            operator_delete__(field_0);
        }
        if (field_8 != (void*)0) {
            operator_delete__(field_8);
        }
        if (field_16 != (void*)0) {
            operator_delete__(field_16);
        }
        if (field_24 != (void*)0) {
            operator_delete__(field_24);
        }
    }

    // 0x100822640, 16 bytes, complete-object destructor, placed by class name and debug map
    // BinInfo::~BinInfo(): jumps straight to the base-object destructor

    // 0x100822650, 128 bytes, placed by class name and debug map
    // BinInfo::FullReset()
    void BinInfo::FullReset() {
        void* pvVar1;
        uint uVar2;
        ulong uVar3;
        long lVar4;

        uVar2 = field_44 * field_40;
        if (uVar2 != 0) {
            uVar3 = 0;
            do {
                *(undefined4*)((long)field_0 + uVar3 * 4) = 0;
                *(undefined2*)((long)field_8 + uVar3 * 2) = 0;
                *(undefined2*)((long)field_16 + uVar3 * 2) = 0;
                *(undefined8*)((long)field_32 + uVar3 * 8) = 0;
                uVar3 = uVar3 + 1;
            } while (uVar2 != uVar3);
        }
        if (0 < field_40) {
            pvVar1 = field_24;
            lVar4 = 0;
            do {
                *(undefined4*)((long)pvVar1 + lVar4 * 4) = 0;
                lVar4 = lVar4 + 1;
            } while (lVar4 < field_40);
        }
    }

    // 0x1008226d0, 144 bytes, base-object constructor, placed by debug map only (low confidence)
    // BinInfoSSE::BinInfoSSE(int, int)
    void BinInfoSSE::BinInfoSSE(int param_1, int param_2) {
        undefined1 auVar1[16];
        undefined1 auVar2[16];
        ulong uVar3;
        void* pvVar4;

        auVar1._8_8_ = 0;
        auVar1._0_8_ = (long)(param_2 * param_1);
        uVar3 = SUB168(auVar1 * ZEXT816(24), 0);
        if (SUB168(auVar1 * ZEXT816(24), 8) != 0) {
            uVar3 = 18446744073709551615;
        }
        pvVar4 = operator_new__(uVar3);
        field_0 = pvVar4;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (long)param_1;
        uVar3 = SUB168(auVar2 * ZEXT816(4), 0);
        if (SUB168(auVar2 * ZEXT816(4), 8) != 0) {
            uVar3 = 18446744073709551615;
        }
        pvVar4 = operator_new__(uVar3);
        ___bzero(pvVar4, uVar3);
        field_8 = pvVar4;
        field_16 = param_1;
        field_20 = param_2;
    }

    // 0x100822760, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // BinInfoSSE::BinInfoSSE(int, int): jumps straight to the base-object constructor

    // 0x100822770, 48 bytes, base-object destructor, placed by debug map only (low confidence)
    // BinInfoSSE::~BinInfoSSE()
    void BinInfoSSE::~BinInfoSSE() {
        if (field_0 != (void*)0) {
            operator_delete__(field_0);
        }
        if (field_8 != (void*)0) {
            operator_delete__(field_8);
        }
    }

    // 0x1008227a0, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // BinInfoSSE::~BinInfoSSE(): jumps straight to the base-object destructor

    // 0x1008227b0, 48 bytes, placed by debug map only (low confidence)
    // BinInfoSSE::FullReset()
    void BinInfoSSE::FullReset() {
        void* pvVar1;
        long lVar2;

        if (0 < field_16) {
            pvVar1 = field_8;
            lVar2 = 0;
            do {
                *(undefined4*)((long)pvVar1 + lVar2 * 4) = 0;
                lVar2 = lVar2 + 1;
            } while (lVar2 < field_16);
        }
    }

} // namespace jag::graphics
