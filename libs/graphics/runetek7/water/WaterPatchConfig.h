// libs/graphics/runetek7/water/WaterPatchConfig.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class WaterPatchConfig {
    public:
        WaterPatchConfig(WaterPatchConfig&& waterPatchConfig);
        WaterPatchConfig();
        bool IsPointInside(unsigned int arg1, unsigned int arg2, float arg3);

    private:
        uint32_t field_0;
        uint8_t _unknown_4[4];
        uint64_t field_8;
        int field_16;
        int field_20;
        uint8_t _unknown_24[16];
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint64_t field_64;
        uint32_t field_72;
        uint8_t _unknown_76[4];
        uint64_t field_80;
        uint64_t field_88;
        uint64_t field_96;
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint8_t _unknown_128[1];
        uint8_t field_129;
        uint8_t _unknown_130[2];
        uint64_t field_132;
        uint64_t field_140;
        uint8_t _unknown_148[240];
        uint64_t field_388;
        uint64_t field_396;
        uint64_t field_404;
        uint64_t field_412;
        uint64_t field_420;
        uint64_t field_428;
        uint64_t field_436;
        uint64_t field_444;
        uint64_t field_452;
        uint64_t field_460;
        uint32_t field_468;
        uint8_t _unknown_472[4];
        uint64_t field_476;
        uint64_t field_484;
        uint64_t field_492;
        uint64_t field_500;
    };

    // 0x1003e6420
    WaterPatchConfig::WaterPatchConfig(WaterPatchConfig&& waterPatchConfig) {
        int iVar8 = waterPatchConfig.field_20;
        field_16 = waterPatchConfig.field_16;
        field_20 = iVar8;
        uint32_t uVar9 = *(uint32_t*)&waterPatchConfig.field_4;
        uint64_t uVar1 = waterPatchConfig.field_8;
        field_0 = waterPatchConfig.field_0;
        *(uint32_t*)&field_4 = uVar9;
        field_8 = uVar1;
        new (&field_24) math::QuaternionT<float>(waterPatchConfig.field_24);
        uVar1 = waterPatchConfig.field_140;
        field_132 = waterPatchConfig.field_132;
        field_140 = uVar1;
        uVar1 = *(uint64_t*)&waterPatchConfig.field_128;
        field_120 = waterPatchConfig.field_120;
        *(uint64_t*)&field_128 = uVar1;
        uVar1 = waterPatchConfig.field_112;
        field_104 = waterPatchConfig.field_104;
        field_112 = uVar1;
        uVar1 = waterPatchConfig.field_40;
        uint64_t uVar2 = waterPatchConfig.field_48;
        uint64_t uVar3 = waterPatchConfig.field_56;
        uint64_t uVar4 = waterPatchConfig.field_64;
        uVar9 = waterPatchConfig.field_72;
        uint32_t uVar10 = *(uint32_t*)&waterPatchConfig.field_76;
        uint64_t uVar5 = waterPatchConfig.field_80;
        uint64_t uVar6 = waterPatchConfig.field_96;
        field_88 = waterPatchConfig.field_88;
        field_96 = uVar6;
        field_72 = uVar9;
        *(uint32_t*)&field_76 = uVar10;
        field_80 = uVar5;
        field_56 = uVar3;
        field_64 = uVar4;
        field_40 = uVar1;
        field_48 = uVar2;
        long lVar11 = 0;
        do {
            *(uint64_t*)(&field_180 + lVar11) = *(uint64_t*)(&waterPatchConfig.field_180 + lVar11);
            uVar1 = *(uint64_t*)(&waterPatchConfig.field_148 + lVar11);
            uVar2 = *(uint64_t*)((long)(&waterPatchConfig.field_148 + lVar11) + 8);
            uVar3 = *(uint64_t*)((long)(&waterPatchConfig.field_164 + lVar11) + 8);
            *(uint64_t*)(&field_164 + lVar11) = *(uint64_t*)(&waterPatchConfig.field_164 + lVar11);
            *(uint64_t*)((long)(&field_164 + lVar11) + 8) = uVar3;
            *(uint64_t*)(&field_148 + lVar11) = uVar1;
            *(uint64_t*)((long)(&field_148 + lVar11) + 8) = uVar2;
            lVar11 = lVar11 + 40;
        } while (lVar11 != 120);
        lVar11 = 0;
        do {
            *(uint64_t*)(&field_300 + lVar11) = *(uint64_t*)(&waterPatchConfig.field_300 + lVar11);
            uVar1 = *(uint64_t*)(&waterPatchConfig.field_268 + lVar11);
            uVar2 = *(uint64_t*)((long)(&waterPatchConfig.field_268 + lVar11) + 8);
            uVar3 = *(uint64_t*)((long)(&waterPatchConfig.field_284 + lVar11) + 8);
            *(uint64_t*)(&field_284 + lVar11) = *(uint64_t*)(&waterPatchConfig.field_284 + lVar11);
            *(uint64_t*)((long)(&field_284 + lVar11) + 8) = uVar3;
            *(uint64_t*)(&field_268 + lVar11) = uVar1;
            *(uint64_t*)((long)(&field_268 + lVar11) + 8) = uVar2;
            lVar11 = lVar11 + 40;
        } while (lVar11 != 120);
        field_500 = waterPatchConfig.field_500;
        uVar1 = waterPatchConfig.field_492;
        field_484 = waterPatchConfig.field_484;
        field_492 = uVar1;
        uVar9 = *(uint32_t*)&waterPatchConfig.field_472;
        uVar1 = waterPatchConfig.field_476;
        field_468 = waterPatchConfig.field_468;
        *(uint32_t*)&field_472 = uVar9;
        field_476 = uVar1;
        uVar1 = waterPatchConfig.field_460;
        field_452 = waterPatchConfig.field_452;
        field_460 = uVar1;
        uVar1 = waterPatchConfig.field_388;
        uVar2 = waterPatchConfig.field_396;
        uVar3 = waterPatchConfig.field_404;
        uVar4 = waterPatchConfig.field_412;
        uVar5 = waterPatchConfig.field_420;
        uVar6 = waterPatchConfig.field_428;
        uint64_t uVar7 = waterPatchConfig.field_444;
        field_436 = waterPatchConfig.field_436;
        field_444 = uVar7;
        field_420 = uVar5;
        field_428 = uVar6;
        field_404 = uVar3;
        field_412 = uVar4;
        field_388 = uVar1;
        field_396 = uVar2;
    }

    // 0x1004c9020
    WaterPatchConfig::WaterPatchConfig() : field_0(4294967295) {
        uint8_t* puVar1 = PTR_ZERO_100ee66e8;
        *(uint64_t*)&field_4 = *(uint64_t*)PTR_ZERO_100ee66e8;
        *(uint32_t*)((long)&field_8 + 4) = *(uint32_t*)(puVar1 + 8);
        field_16 = 0;
        field_20 = 0;
        new (&field_24) math::QuaternionT<float>(*PTR_IDENTITY_100ee6678);
        field_40 = 0;
        field_48 = 0;
        field_56 = 4294967295;
        field_64 = 18446744073709551615;
        field_72 = 4294967295;
        *(uint64_t*)&field_76 = 4575657222473777152;
        *(uint64_t*)((long)&field_80 + 4) = 18446744070479937536;
        *(uint32_t*)((long)&field_88 + 4) = 1065353216;
        field_96 = *(uint64_t*)PTR_ONE_100ee66a0;
        new (&field_104) math::Vector3T();
        *(uint64_t*)((long)&field_112 + 4) = 4575657222473777152;
        *(uint32_t*)((long)&field_120 + 4) = 0;
        field_129 = 1;
        field_132 = 0;
        field_140 = 4539628424389459968;
        long lVar2 = 0;
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
        new (&field_404) math::ColourHSL(45.0, 75.0, 300.0);
        new ((ColourHSL*)((long)&field_412 + 4)) math::ColourHSL(0.616, 0.616, 0.616);
        field_428 = 4656722015813107712;
        field_436 = 4978166439148540396;
        field_444 = 4812096202923311104;
        field_452 = 4913145719613292544;
        field_460 = 1158660096;
        field_468 = 0;
        new (&field_472) math::Matrix33T<float>();
    }

} // namespace jag::graphics
