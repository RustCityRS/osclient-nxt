// libs/graphics/postprocess/effects/ColourCorrectionConfig.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    class ColourCorrectionConfig {
    public:
        class Remapping;
        ColourCorrectionConfig();
        ~ColourCorrectionConfig();
        void Reset();
        ColourCorrectionConfig* operator=(const ColourCorrectionConfig& colourCorrectionConfig);
        ColourCorrectionConfig(ColourCorrectionConfig&& colourCorrectionConfig);
        void SetColourRemap(const std::array<Remapping, 3ul>& remappings, long long arg2, unsigned long long arg3);
        int CountColourMappings() const;
        void DoTransition(unsigned long long arg1);
        ColourCorrectionConfig(const ColourCorrectionConfig& colourCorrectionConfig);
        static ImGuiStyleMod COLOURREMAP_DEFAULT[3]; // initialised in its definition

    private:
        uint16_t field_0;
        uint8_t field_2[6];
        uint8_t _unknown_8[4];
        uint64_t field_12;
        uint64_t field_20;
        uint8_t _unknown_28[52];
        uint64_t field_80;
        uint64_t field_88;
        uint64_t field_96;
        unsigned long long field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint64_t field_128;
        unsigned long long field_136;
        bool field_144;
        bool field_145;
        uint8_t _unknown_146[6];
    };

    class ColourCorrectionConfig::Remapping {
    public:
        Remapping(int arg1, float arg2);
        uint32_t operator==(const Remapping& remapping) const;

    private:
        int field_0;
        float field_4;
        uint8_t _unknown_8[4];
    };

    // 0x1001d4d30
    ColourCorrectionConfig::ColourCorrectionConfig() : field_0(1) {
        new ((array<ColourCorrectionConfig::Remapping, 3ul>*)((long)&field_2 + 2))
            std::array<ColourCorrectionConfig::Remapping, 3ul>();
        new (&field_32) std::array<shared_ptr<render::Texture>, 3ul>();
        new (&field_80) std::array<ColourCorrectionConfig::Remapping, 3ul>();
        field_104 = 0;
        new (&field_112) std::array<ColourCorrectionConfig::Remapping, 3ul>();
        field_136 = 0;
        field_144 = true;
        field_145 = true;
        Reset();
    }

    // 0x1001d4dd0
    void ColourCorrectionConfig::Reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        field_32.fill(local_28);
    }

    // 0x1001d4e70
    ColourCorrectionConfig::Remapping::Remapping(int arg1, float arg2) {
        *(int*)this = arg1;
        *(float*)(this + 4) = arg2;
    }

    // 0x1001d5030
    ColourCorrectionConfig::~ColourCorrectionConfig() {
        field_32.~array();
    }

    // 0x1001d5040
    OutlineAndShadowEffectConfig::OutlineAndShadowEffectConfig() : field_0(4294967296), field_8(0) {}

    // 0x1001d5060
    DepthOfFieldEffectConfig::DepthOfFieldEffectConfig()
        : field_0(4934256342897278976), field_8(5047585205411979264), field_16(4503599628539387904),
          field_24(4575657222467066266), field_32(5360320512), field_40(1), field_48(72058693549555715),
          field_56(12884901888), field_64(2) {}

    // 0x1001d5310
    ColourGradingBloomEffectConfig::~ColourGradingBloomEffectConfig() {
        field_16->~ColourCorrectionConfig();
    }

    // 0x1001d9bc0
    ColourCorrectionConfig* ColourCorrectionConfig::operator=(const ColourCorrectionConfig& colourCorrectionConfig) {
        uint16_t uVar8 = colourCorrectionConfig.field_0;
        uint64_t uVar9 = colourCorrectionConfig.field_2;
        uint64_t uVar1 = *(uint64_t*)&colourCorrectionConfig.field_8;
        uint64_t uVar2 = colourCorrectionConfig.field_20;
        field_12 = colourCorrectionConfig.field_12;
        field_20 = uVar2;
        field_0 = uVar8;
        field_2 = uVar9;
        *(uint64_t*)&field_8 = uVar1;
        field_32 = colourCorrectionConfig.field_32;
        uVar1 = colourCorrectionConfig.field_88;
        uVar2 = colourCorrectionConfig.field_96;
        unsigned long long uVar3 = colourCorrectionConfig.field_104;
        uint64_t uVar4 = colourCorrectionConfig.field_112;
        uint64_t uVar5 = colourCorrectionConfig.field_120;
        uint64_t uVar6 = colourCorrectionConfig.field_128;
        unsigned long long uVar7 = colourCorrectionConfig.field_136;
        field_80 = colourCorrectionConfig.field_80;
        field_88 = uVar1;
        field_96 = uVar2;
        field_104 = uVar3;
        field_112 = uVar4;
        field_120 = uVar5;
        field_128 = uVar6;
        field_136 = uVar7;
        bool bVar10 = colourCorrectionConfig.field_145;
        field_144 = colourCorrectionConfig.field_144;
        field_145 = bVar10;
        return this;
    }

    // 0x1007fe160
    ColourCorrectionConfig::ColourCorrectionConfig(ColourCorrectionConfig&& colourCorrectionConfig) {
        uint16_t uVar8 = colourCorrectionConfig.field_0;
        uint64_t uVar9 = colourCorrectionConfig.field_2;
        uint64_t uVar1 = *(uint64_t*)&colourCorrectionConfig.field_8;
        uint64_t uVar2 = colourCorrectionConfig.field_20;
        field_12 = colourCorrectionConfig.field_12;
        field_20 = uVar2;
        field_0 = uVar8;
        field_2 = uVar9;
        *(uint64_t*)&field_8 = uVar1;
        new (&field_32) std::array<shared_ptr<render::Texture>, 3ul>(colourCorrectionConfig.field_32);
        bool bVar10 = colourCorrectionConfig.field_145;
        field_144 = colourCorrectionConfig.field_144;
        field_145 = bVar10;
        uVar1 = colourCorrectionConfig.field_80;
        uVar2 = colourCorrectionConfig.field_88;
        uint64_t uVar3 = colourCorrectionConfig.field_96;
        unsigned long long uVar4 = colourCorrectionConfig.field_104;
        uint64_t uVar5 = colourCorrectionConfig.field_112;
        uint64_t uVar6 = colourCorrectionConfig.field_120;
        unsigned long long uVar7 = colourCorrectionConfig.field_136;
        field_128 = colourCorrectionConfig.field_128;
        field_136 = uVar7;
        field_112 = uVar5;
        field_120 = uVar6;
        field_96 = uVar3;
        field_104 = uVar4;
        field_80 = uVar1;
        field_88 = uVar2;
    }

    // 0x1009bcad0
    uint32_t ColourCorrectionConfig::Remapping::operator==(const ColourCorrectionConfig::Remapping& remapping) const {
        if (field_0 == remapping.field_0) {
            return field_4 == remapping.field_4;
        }
        return 0;
    }

    // 0x1009bd3a0
    ColourCorrectionConfig::ColourCorrectionConfig(const ColourCorrectionConfig& colourCorrectionConfig) {
        uint16_t uVar8 = colourCorrectionConfig.field_0;
        uint64_t uVar9 = colourCorrectionConfig.field_2;
        uint64_t uVar1 = *(uint64_t*)&colourCorrectionConfig.field_8;
        uint64_t uVar2 = colourCorrectionConfig.field_20;
        field_12 = colourCorrectionConfig.field_12;
        field_20 = uVar2;
        field_0 = uVar8;
        field_2 = uVar9;
        *(uint64_t*)&field_8 = uVar1;
        new (&field_32) std::array<shared_ptr<render::Texture>, 3ul>(colourCorrectionConfig.field_32);
        bool bVar10 = colourCorrectionConfig.field_145;
        field_144 = colourCorrectionConfig.field_144;
        field_145 = bVar10;
        uVar1 = colourCorrectionConfig.field_80;
        uVar2 = colourCorrectionConfig.field_88;
        uint64_t uVar3 = colourCorrectionConfig.field_96;
        unsigned long long uVar4 = colourCorrectionConfig.field_104;
        uint64_t uVar5 = colourCorrectionConfig.field_112;
        uint64_t uVar6 = colourCorrectionConfig.field_120;
        unsigned long long uVar7 = colourCorrectionConfig.field_136;
        field_128 = colourCorrectionConfig.field_128;
        field_136 = uVar7;
        field_112 = uVar5;
        field_120 = uVar6;
        field_96 = uVar3;
        field_104 = uVar4;
        field_80 = uVar1;
        field_88 = uVar2;
    }

} // namespace jag::postprocess

namespace jag::graphics {
    class SimpleScatteringParams {
    public:
        SimpleScatteringParams* operator=(SimpleScatteringParams&& simpleScatteringParams);
        SimpleScatteringParams* operator=(const SimpleScatteringParams& simpleScatteringParams);
        SimpleScatteringParams();
        bool operator==(const SimpleScatteringParams& simpleScatteringParams) const;
        unsigned long hash() const;

    private:
        float field_0;
        float field_4;
        float field_8;
        uint32_t field_12;
        uint64_t field_16;
        uint32_t field_24;
        uint32_t field_28;
        uint64_t field_32;
        uint32_t field_40;
        uint32_t field_44;
        uint8_t _unknown_48[8];
    };

    class VolumetricScatteringParams {
    public:
        VolumetricScatteringParams();
        VolumetricScatteringParams* operator=(VolumetricScatteringParams&& volumetricScatteringParams);
        VolumetricScatteringParams* operator=(const VolumetricScatteringParams& volumetricScatteringParams);

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        ColourHSL field_32;
        ColourHSL field_48;
        uint8_t _unknown_64[4];
    };

    // 0x1001d50b0
    SSAOParams::SSAOParams()
        : field_0(4453159313468293120), field_8(4561245703459831808), field_16(12), field_20(4568451461360386048),
          field_28(4216233945198493696), field_36(1092616192), field_40(1), field_44(1056964608) {}

    // 0x1001d5130
    SimpleScatteringParams::SimpleScatteringParams() : field_8(DEF_OUTSCATTERING_AMOUNT.field_8) {
        uint32_t uVar1 = DEF_OUTSCATTERING_AMOUNT._4_4_;
        field_0 = (float)(uint32_t)DEF_OUTSCATTERING_AMOUNT;
        field_4 = (float)uVar1;
        field_16 = DEF_INSCATTERING_AMOUNT;
        field_24 = DEF_INSCATTERING_AMOUNT.field_8;
        field_32 = DEF_SCATTERING_TINT;
        field_40 = DEF_SCATTERING_TINT.field_8;
        new (&field_48) ImVec4(1e-05, 17500.0, 8.0, 1.5);
    }

    // 0x1001d51e0
    VolumetricScatteringParams::VolumetricScatteringParams()
        : field_0(4575657222473777152), field_8(4575657222473777152), field_16(4561245704525185024),
          field_24(4764808406819982541), field_32(1.0, 0.7, 0.5), field_48(0.025, 0.025, 0.025) {
        *(uint64_t*)(field_48 + 12) = 4575657222473777152;
    }

    // 0x1004ab550
    bool SimpleScatteringParams::operator==(const SimpleScatteringParams& simpleScatteringParams) const {
        bool bVar1 = *this == simpleScatteringParams;
        if (((bVar1) && (bVar1 = field_16 == simpleScatteringParams.field_16, bVar1)) &&
            (bVar1 = field_32 == simpleScatteringParams.field_32, bVar1)) {
            bVar1 = field_48 == simpleScatteringParams.field_48;
            return bVar1;
        }
        return false;
    }

    // 0x1004ab600
    unsigned long SimpleScatteringParams::hash() const {
        return local_20 = 0;
        unsigned long uVar1 = hash();
        hash_combine(&local_20, uVar1);
        uVar1 = field_16.hash();
        hash_combine(&local_20, uVar1);
        uVar1 = field_32.hash();
        hash_combine(&local_20, uVar1);
        uVar1 = field_48.hash();
        hash_combine(&local_20, uVar1);
        return local_20;
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001d5890
    OSRenderCore_LogicThread_RSeven::~OSRenderCore_LogicThread_RSeven() {
        field_672.~unique_ptr();
        field_16.~RSevenModelLitRenderer();
    }

} // namespace jag::oldscape
