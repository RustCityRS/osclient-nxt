// libs/graphics/runetek7/occlusion/BinInfo.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class BinInfo {
    public:
        BinInfo(int arg1, int arg2);
        ~BinInfo();
        void FullReset();

    private:
        void* field_0;
        void* field_8;
        void* field_16;
        void* field_24;
        void* field_32;
        int field_40;
        int field_44;
        uint8_t _unknown_48[4];
    };

    class BinInfoSSE {
    public:
        BinInfoSSE(int arg1, int arg2);
        ~BinInfoSSE();
        void FullReset();

    private:
        void* field_0;
        void* field_8;
        int field_16;
        int field_20;
        uint8_t _unknown_24[4];
    };

    // 0x100822500
    BinInfo::BinInfo(int arg1, int arg2) {
        uint8_t auVar1[16];
        uint8_t auVar2[16];
        uint8_t auVar3[16];

        unsigned long uVar6 = (unsigned long)(arg2 * arg1);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar6;
        unsigned long uVar4 = (uint64_t)(auVar1 * (unsigned __int128)4);
        if ((uint64_t)((auVar1 * (unsigned __int128)4) >> 64) != 0) {
            uVar4 = 18446744073709551615;
        }
        auto pvVar5 = operator_new__(uVar4);
        field_0 = pvVar5;
        uVar4 = uVar6 * 2;
        if (CARRY8(uVar6, uVar6)) {
            uVar4 = 18446744073709551615;
        }
        pvVar5 = (void*)operator_new__(uVar4);
        field_8 = pvVar5;
        pvVar5 = (void*)operator_new__(uVar4);
        field_16 = pvVar5;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar6;
        uVar4 = (uint64_t)(auVar2 * (unsigned __int128)8);
        if ((uint64_t)((auVar2 * (unsigned __int128)8) >> 64) != 0) {
            uVar4 = 18446744073709551615;
        }
        pvVar5 = (void*)operator_new__(uVar4);
        field_32 = pvVar5;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (long)arg1;
        uVar4 = (uint64_t)(auVar3 * (unsigned __int128)4);
        if ((uint64_t)((auVar3 * (unsigned __int128)4) >> 64) != 0) {
            uVar4 = 18446744073709551615;
        }
        pvVar5 = (void*)operator_new__(uVar4);
        ___bzero(pvVar5, uVar4);
        field_24 = pvVar5;
        field_40 = arg1;
        field_44 = arg2;
    }

    // 0x1008225e0
    BinInfo::~BinInfo() {
        if (field_32 != nullptr) {
            operator_delete__(field_32);
        }
        if (field_0 != nullptr) {
            operator_delete__(field_0);
        }
        if (field_8 != nullptr) {
            operator_delete__(field_8);
        }
        if (field_16 != nullptr) {
            operator_delete__(field_16);
        }
        if (field_24 != nullptr) {
            operator_delete__(field_24);
        }
    }

    // 0x100822650
    void BinInfo::FullReset() {
        void* pvVar1;
        unsigned long uVar3;
        long lVar4;

        unsigned int uVar2 = field_44 * field_40;
        if (uVar2 != 0) {
            uVar3 = 0;
            do {
                *(uint32_t*)((long)field_0 + uVar3 * 4) = 0;
                *(uint16_t*)((long)field_8 + uVar3 * 2) = 0;
                *(uint16_t*)((long)field_16 + uVar3 * 2) = 0;
                *(uint64_t*)((long)field_32 + uVar3 * 8) = 0;
                uVar3 = uVar3 + 1;
            } while (uVar2 != uVar3);
        }
        if (0 < field_40) {
            pvVar1 = field_24;
            lVar4 = 0;
            do {
                *(uint32_t*)((long)pvVar1 + lVar4 * 4) = 0;
                lVar4 = lVar4 + 1;
            } while (lVar4 < field_40);
        }
    }

    // 0x1008226d0
    BinInfoSSE::BinInfoSSE(int arg1, int arg2) {
        uint8_t auVar1[16];
        uint8_t auVar2[16];

        auVar1._8_8_ = 0;
        auVar1._0_8_ = (long)(arg2 * arg1);
        unsigned long uVar3 = (uint64_t)(auVar1 * (unsigned __int128)24);
        if ((uint64_t)((auVar1 * (unsigned __int128)24) >> 64) != 0) {
            uVar3 = 18446744073709551615;
        }
        auto pvVar4 = operator_new__(uVar3);
        field_0 = pvVar4;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (long)arg1;
        uVar3 = (uint64_t)(auVar2 * (unsigned __int128)4);
        if ((uint64_t)((auVar2 * (unsigned __int128)4) >> 64) != 0) {
            uVar3 = 18446744073709551615;
        }
        pvVar4 = (void*)operator_new__(uVar3);
        ___bzero(pvVar4, uVar3);
        field_8 = pvVar4;
        field_16 = arg1;
        field_20 = arg2;
    }

    // 0x100822770
    BinInfoSSE::~BinInfoSSE() {
        if (field_0 != nullptr) {
            operator_delete__(field_0);
        }
        if (field_8 != nullptr) {
            operator_delete__(field_8);
        }
    }

    // 0x1008227b0
    void BinInfoSSE::FullReset() {
        void* pvVar1;
        long lVar2;

        if (0 < field_16) {
            pvVar1 = field_8;
            lVar2 = 0;
            do {
                *(uint32_t*)((long)pvVar1 + lVar2 * 4) = 0;
                lVar2 = lVar2 + 1;
            } while (lVar2 < field_16);
        }
    }

} // namespace jag::graphics
