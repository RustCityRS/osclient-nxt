// libs/graphics/runetek7/water/WaterPatchConfig.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class WaterPatchConfig {
    public:
        WaterPatchConfig(WaterPatchConfig&&);
        WaterPatchConfig();
        bool IsPointInside(unsigned int, unsigned int, float);

        // data members, from how the methods use this: 508 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[4];
        undefined8 field_8; // offset 8
        int field_16;       // offset 16
        int field_20;       // offset 20
        char _unknown_24[16];
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        undefined8 field_64; // offset 64
        undefined4 field_72; // offset 72
        char _unknown_76[4];
        undefined8 field_80;  // offset 80
        undefined8 field_88;  // offset 88
        undefined8 field_96;  // offset 96
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        char _unknown_128[1];
        undefined1 field_129; // offset 129
        char _unknown_130[2];
        undefined8 field_132; // offset 132
        undefined8 field_140; // offset 140
        char _unknown_148[240];
        undefined8 field_388; // offset 388
        undefined8 field_396; // offset 396
        undefined8 field_404; // offset 404
        undefined8 field_412; // offset 412
        undefined8 field_420; // offset 420
        undefined8 field_428; // offset 428
        undefined8 field_436; // offset 436
        undefined8 field_444; // offset 444
        undefined8 field_452; // offset 452
        undefined8 field_460; // offset 460
        undefined4 field_468; // offset 468
        char _unknown_472[4];
        undefined8 field_476; // offset 476
        undefined8 field_484; // offset 484
        undefined8 field_492; // offset 492
        undefined8 field_500; // offset 500
    };

    // 0x1003e6330, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // WaterPatchConfig::WaterPatchConfig(WaterPatchConfig&&): jumps straight to the base-object constructor

    // 0x1003e6420, 368 bytes, base-object constructor, inline, placed by class name and debug map
    // WaterPatchConfig::WaterPatchConfig(WaterPatchConfig&&)
    void WaterPatchConfig::WaterPatchConfig(WaterPatchConfig* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        int iVar8;
        undefined4 uVar9;
        undefined4 uVar10;
        long lVar11;

        iVar8 = param_1->field_20;
        field_16 = param_1->field_16;
        field_20 = iVar8;
        uVar9 = *(undefined4*)&param_1->field_4;
        uVar1 = param_1->field_8;
        field_0 = param_1->field_0;
        *(undefined4*)&field_4 = uVar9;
        field_8 = uVar1;
        new (&field_24, (QuaternionT*)&param_1->field_24) math::QuaternionT<float>();
        uVar1 = param_1->field_140;
        field_132 = param_1->field_132;
        field_140 = uVar1;
        uVar1 = *(undefined8*)&param_1->field_128;
        field_120 = param_1->field_120;
        *(undefined8*)&field_128 = uVar1;
        uVar1 = param_1->field_112;
        field_104 = param_1->field_104;
        field_112 = uVar1;
        uVar1 = param_1->field_40;
        uVar2 = param_1->field_48;
        uVar3 = param_1->field_56;
        uVar4 = param_1->field_64;
        uVar9 = param_1->field_72;
        uVar10 = *(undefined4*)&param_1->field_76;
        uVar5 = param_1->field_80;
        uVar6 = param_1->field_96;
        field_88 = param_1->field_88;
        field_96 = uVar6;
        field_72 = uVar9;
        *(undefined4*)&field_76 = uVar10;
        field_80 = uVar5;
        field_56 = uVar3;
        field_64 = uVar4;
        field_40 = uVar1;
        field_48 = uVar2;
        lVar11 = 0;
        do {
            *(undefined8*)(&field_180 + lVar11) = *(undefined8*)(&param_1->field_180 + lVar11);
            uVar1 = *(undefined8*)(&param_1->field_148 + lVar11);
            uVar2 = *(undefined8*)((long)(&param_1->field_148 + lVar11) + 8);
            uVar3 = *(undefined8*)((long)(&param_1->field_164 + lVar11) + 8);
            *(undefined8*)(&field_164 + lVar11) = *(undefined8*)(&param_1->field_164 + lVar11);
            *(undefined8*)((long)(&field_164 + lVar11) + 8) = uVar3;
            *(undefined8*)(&field_148 + lVar11) = uVar1;
            *(undefined8*)((long)(&field_148 + lVar11) + 8) = uVar2;
            lVar11 = lVar11 + 40;
        } while (lVar11 != 120);
        lVar11 = 0;
        do {
            *(undefined8*)(&field_300 + lVar11) = *(undefined8*)(&param_1->field_300 + lVar11);
            uVar1 = *(undefined8*)(&param_1->field_268 + lVar11);
            uVar2 = *(undefined8*)((long)(&param_1->field_268 + lVar11) + 8);
            uVar3 = *(undefined8*)((long)(&param_1->field_284 + lVar11) + 8);
            *(undefined8*)(&field_284 + lVar11) = *(undefined8*)(&param_1->field_284 + lVar11);
            *(undefined8*)((long)(&field_284 + lVar11) + 8) = uVar3;
            *(undefined8*)(&field_268 + lVar11) = uVar1;
            *(undefined8*)((long)(&field_268 + lVar11) + 8) = uVar2;
            lVar11 = lVar11 + 40;
        } while (lVar11 != 120);
        field_500 = param_1->field_500;
        uVar1 = param_1->field_492;
        field_484 = param_1->field_484;
        field_492 = uVar1;
        uVar9 = *(undefined4*)&param_1->field_472;
        uVar1 = param_1->field_476;
        field_468 = param_1->field_468;
        *(undefined4*)&field_472 = uVar9;
        field_476 = uVar1;
        uVar1 = param_1->field_460;
        field_452 = param_1->field_452;
        field_460 = uVar1;
        uVar1 = param_1->field_388;
        uVar2 = param_1->field_396;
        uVar3 = param_1->field_404;
        uVar4 = param_1->field_412;
        uVar5 = param_1->field_420;
        uVar6 = param_1->field_428;
        uVar7 = param_1->field_444;
        field_436 = param_1->field_436;
        field_444 = uVar7;
        field_420 = uVar5;
        field_428 = uVar6;
        field_404 = uVar3;
        field_412 = uVar4;
        field_388 = uVar1;
        field_396 = uVar2;
    }

    // 0x1004c7ae0, 16 bytes, complete-object constructor, inline, placed by class name
    // WaterPatchConfig::WaterPatchConfig(): jumps straight to the base-object constructor

    // 0x1004c9020, 432 bytes, base-object constructor, inline, placed by class name
    // WaterPatchConfig::WaterPatchConfig()
    void WaterPatchConfig::WaterPatchConfig() {
        undefined* puVar1;
        long lVar2;

        field_0 = 4294967295;
        puVar1 = PTR_ZERO_100ee66e8;
        *(undefined8*)&field_4 = *(undefined8*)PTR_ZERO_100ee66e8;
        *(undefined4*)((long)&field_8 + 4) = *(undefined4*)(puVar1 + 8);
        field_16 = 0;
        field_20 = 0;
        new (&field_24, (QuaternionT*)PTR_IDENTITY_100ee6678) math::QuaternionT<float>();
        field_40 = 0;
        field_48 = 0;
        field_56 = 4294967295;
        field_64 = 18446744073709551615;
        field_72 = 4294967295;
        *(undefined8*)&field_76 = 4575657222473777152;
        *(undefined8*)((long)&field_80 + 4) = 18446744070479937536;
        *(undefined4*)((long)&field_88 + 4) = 1065353216;
        field_96 = *(undefined8*)PTR_ONE_100ee66a0;
        new (&field_104) math::Vector3T<int>();
        *(undefined8*)((long)&field_112 + 4) = 4575657222473777152;
        *(undefined4*)((long)&field_120 + 4) = 0;
        field_129 = 1;
        field_132 = 0;
        field_140 = 4539628424389459968;
        lVar2 = 0;
        do {
            new ((&field_148 + lVar2)) WaterNormalMapParams();
            lVar2 = lVar2 + 40;
        } while (lVar2 != 120);
        lVar2 = 0;
        do {
            new ((&field_268 + lVar2)) WaterNormalMapParams();
            lVar2 = lVar2 + 40;
        } while (lVar2 != 120);
        field_388 = 0;
        field_396 = 4575657221408423936;
        new (&field_404, 45.0, 75.0, 300.0) math::ColourHSL();
        new (((long)&field_412 + 4), 0.616, 0.616, 0.616) math::ColourHSL();
        field_428 = 4656722015813107712;
        field_436 = 4978166439148540396;
        field_444 = 4812096202923311104;
        field_452 = 4913145719613292544;
        field_460 = 1158660096;
        field_468 = 0;
        new (&field_472) math::Matrix33T<float>();
    }

} // namespace jag::graphics
