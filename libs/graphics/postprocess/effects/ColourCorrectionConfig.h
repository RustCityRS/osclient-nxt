// libs/graphics/postprocess/effects/ColourCorrectionConfig.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class ColourCorrectionConfig {
    public:
        class Remapping;
        ColourCorrectionConfig();
        ~ColourCorrectionConfig();
        void Reset();
        ColourCorrectionConfig* operator=(ColourCorrectionConfig const&);
        ColourCorrectionConfig(ColourCorrectionConfig&&);
        void SetColourRemap(std::array<Remapping, 3ul> const&, long long, unsigned long long);
        int CountColourMappings() const;
        void DoTransition(unsigned long long);
        ColourCorrectionConfig(ColourCorrectionConfig const&);
        static ImGuiStyleMod /* 24 bytes */ COLOURREMAP_DEFAULT[3]; // initialised in its definition

        // data members, from how the methods use this: 152 bytes
        undefined2 field_0; // offset 0
        undefined6 field_2; // offset 2
        char _unknown_8[4];
        undefined8 field_12; // offset 12
        undefined8 field_20; // offset 20
        char _unknown_28[52];
        undefined8 field_80;  // offset 80
        undefined8 field_88;  // offset 88
        undefined8 field_96;  // offset 96
        ulonglong field_104;  // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        undefined8 field_128; // offset 128
        ulonglong field_136;  // offset 136
        bool field_144;       // offset 144
        bool field_145;       // offset 145
        char _unknown_146[6];
    };

    class ColourCorrectionConfig::Remapping {
    public:
        Remapping(int, float);
        operator==(Remapping const&) const;

        // data members, from how the methods use this: 12 bytes
        int field_0;   // offset 0
        float field_4; // offset 4
        char _unknown_8[4];
    };

    // 0x1001d4d10, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ColourCorrectionConfig::ColourCorrectionConfig(): jumps straight to the base-object constructor

    // 0x1001d4d20, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ColourCorrectionConfig::~ColourCorrectionConfig(): jumps straight to the base-object destructor

    // 0x1001d4d30, 128 bytes, base-object constructor, inline, placed by class name and debug map
    // ColourCorrectionConfig::ColourCorrectionConfig()
    void ColourCorrectionConfig::ColourCorrectionConfig() {
        field_0 = 1;
        new (((long)&field_2 + 2)) std::array<ColourCorrectionConfig::Remapping, 3ul>();
        std::array<shared_ptr<render::Texture>, 3ul>::array();
        new (&field_80) std::array<ColourCorrectionConfig::Remapping, 3ul>();
        field_104 = 0;
        new (&field_112) std::array<ColourCorrectionConfig::Remapping, 3ul>();
        field_136 = 0;
        field_144 = true;
        field_145 = true;
        Reset(this);
    }

    // 0x1001d4dd0, 96 bytes, inline, placed by class name and debug map
    // ColourCorrectionConfig::Reset()
    void ColourCorrectionConfig::Reset() {
        shared_ptr local_28;

        new (&local_28) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_32, &local_28)->fill();
        local_28.~shared_ptr();
    }

    // 0x1001d4e60, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ColourCorrectionConfig::Remapping::Remapping(int, float): jumps straight to the base-object constructor

    // 0x1001d4e70, 16 bytes, base-object constructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ColourCorrectionConfig::Remapping::Remapping(int, float)
    /* ImGuiStyleMod::ImGuiStyleMod(int, float) */

    void ImGuiStyleMod::ImGuiStyleMod(int param_1, float param_2) {
        *(int*)this = param_1;
        *(float*)(this + 4) = param_2;
    }

    // 0x1001d5030, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // ColourCorrectionConfig::~ColourCorrectionConfig()
    void ColourCorrectionConfig::~ColourCorrectionConfig() {
        (&field_32)->~array();
    }

    // 0x1001d5040, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OutlineAndShadowEffectConfig::OutlineAndShadowEffectConfig()
    void OutlineAndShadowEffectConfig::OutlineAndShadowEffectConfig() {
        field_0 = 4294967296;
        field_8 = 0;
    }

    // 0x1001d5060, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DepthOfFieldEffectConfig::DepthOfFieldEffectConfig()
    void DepthOfFieldEffectConfig::DepthOfFieldEffectConfig() {
        field_0 = 4934256342897278976;
        field_8 = 5047585205411979264;
        field_16 = 4503599628539387904;
        field_24 = 4575657222467066266;
        field_32 = 5360320512;
        field_40 = 1;
        field_48 = 72058693549555715;
        field_56 = 12884901888;
        field_64 = 2;
    }

    // 0x1001d5300, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ColourGradingBloomEffectConfig::~ColourGradingBloomEffectConfig(): jumps straight to the base-object destructor

    // 0x1001d5310, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ColourGradingBloomEffectConfig::~ColourGradingBloomEffectConfig()
    void ColourGradingBloomEffectConfig::~ColourGradingBloomEffectConfig() {
        field_16->~ColourCorrectionConfig();
    }

    // 0x1001d9bc0, 112 bytes, inline, placed by class name
    // ColourCorrectionConfig::operator=(ColourCorrectionConfig const&)
    /* ColourCorrectionConfig::TEMPNAMEPLACEHOLDERVALUE(ColourCorrectionConfig
   const&) */

    ColourCorrectionConfig* ColourCorrectionConfig::operator=(ColourCorrectionConfig* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        ulonglong uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        ulonglong uVar7;
        undefined2 uVar8;
        undefined6 uVar9;
        bool bVar10;

        uVar8 = param_1->field_0;
        uVar9 = param_1->field_2;
        uVar1 = *(undefined8*)&param_1->field_8;
        uVar2 = param_1->field_20;
        field_12 = param_1->field_12;
        field_20 = uVar2;
        field_0 = uVar8;
        field_2 = uVar9;
        *(undefined8*)&field_8 = uVar1;
        std::array<shared_ptr<render::Texture>, 3ul>::operator=((array<shared_ptr<render::Texture>, 3ul>*)&field_32,
                                                                (array*)&param_1->field_32);
        uVar1 = param_1->field_88;
        uVar2 = param_1->field_96;
        uVar3 = param_1->field_104;
        uVar4 = param_1->field_112;
        uVar5 = param_1->field_120;
        uVar6 = param_1->field_128;
        uVar7 = param_1->field_136;
        field_80 = param_1->field_80;
        field_88 = uVar1;
        field_96 = uVar2;
        field_104 = uVar3;
        field_112 = uVar4;
        field_120 = uVar5;
        field_128 = uVar6;
        field_136 = uVar7;
        bVar10 = param_1->field_145;
        field_144 = param_1->field_144;
        field_145 = bVar10;
        return this;
    }

    // 0x1007fe150, 16 bytes, complete-object constructor, inline, placed by class name
    // ColourCorrectionConfig::ColourCorrectionConfig(ColourCorrectionConfig&&): jumps straight to the base-object constructor

    // 0x1007fe160, 112 bytes, base-object constructor, inline, placed by class name
    // ColourCorrectionConfig::ColourCorrectionConfig(ColourCorrectionConfig&&)
    void ColourCorrectionConfig::ColourCorrectionConfig(ColourCorrectionConfig* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        ulonglong uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        ulonglong uVar7;
        undefined2 uVar8;
        undefined6 uVar9;
        bool bVar10;

        uVar8 = param_1->field_0;
        uVar9 = param_1->field_2;
        uVar1 = *(undefined8*)&param_1->field_8;
        uVar2 = param_1->field_20;
        field_12 = param_1->field_12;
        field_20 = uVar2;
        field_0 = uVar8;
        field_2 = uVar9;
        *(undefined8*)&field_8 = uVar1;
        new (&field_32, (array*)&param_1->field_32) std::array<shared_ptr<render::Texture>, 3ul>();
        bVar10 = param_1->field_145;
        field_144 = param_1->field_144;
        field_145 = bVar10;
        uVar1 = param_1->field_80;
        uVar2 = param_1->field_88;
        uVar3 = param_1->field_96;
        uVar4 = param_1->field_104;
        uVar5 = param_1->field_112;
        uVar6 = param_1->field_120;
        uVar7 = param_1->field_136;
        field_128 = param_1->field_128;
        field_136 = uVar7;
        field_112 = uVar5;
        field_120 = uVar6;
        field_96 = uVar3;
        field_104 = uVar4;
        field_80 = uVar1;
        field_88 = uVar2;
    }

    // 0x1009bcad0, 32 bytes, inline, placed by class name
    // ColourCorrectionConfig::Remapping::operator==(ColourCorrectionConfig::Remapping const&) const
    /* ColourCorrectionConfig::Remapping::TEMPNAMEPLACEHOLDERVALUE(ColourCorrectionConfig::Remapping
   const&) const */

    undefined4 ColourCorrectionConfig::Remapping::operator==(Remapping* param_1) {
        if (field_0 == param_1->field_0) {
            return CONCAT31((int3)((uint)field_0 >> 8), field_4 == param_1->field_4);
        }
        return 0;
    }

    // 0x1009bd390, 16 bytes, complete-object constructor, inline, placed by class name
    // ColourCorrectionConfig::ColourCorrectionConfig(ColourCorrectionConfig const&): jumps straight to the base-object constructor

    // 0x1009bd3a0, 112 bytes, base-object constructor, inline, placed by class name
    // ColourCorrectionConfig::ColourCorrectionConfig(ColourCorrectionConfig const&)
    void ColourCorrectionConfig::ColourCorrectionConfig(ColourCorrectionConfig* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        ulonglong uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        ulonglong uVar7;
        undefined2 uVar8;
        undefined6 uVar9;
        bool bVar10;

        uVar8 = param_1->field_0;
        uVar9 = param_1->field_2;
        uVar1 = *(undefined8*)&param_1->field_8;
        uVar2 = param_1->field_20;
        field_12 = param_1->field_12;
        field_20 = uVar2;
        field_0 = uVar8;
        field_2 = uVar9;
        *(undefined8*)&field_8 = uVar1;
        new (&field_32, (array*)&param_1->field_32) std::array<shared_ptr<render::Texture>, 3ul>();
        bVar10 = param_1->field_145;
        field_144 = param_1->field_144;
        field_145 = bVar10;
        uVar1 = param_1->field_80;
        uVar2 = param_1->field_88;
        uVar3 = param_1->field_96;
        uVar4 = param_1->field_104;
        uVar5 = param_1->field_112;
        uVar6 = param_1->field_120;
        uVar7 = param_1->field_136;
        field_128 = param_1->field_128;
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
        SimpleScatteringParams* operator=(SimpleScatteringParams&&);
        SimpleScatteringParams* operator=(SimpleScatteringParams const&);
        SimpleScatteringParams();
        bool operator==(SimpleScatteringParams const&) const;
        ulong hash() const;

        // data members, from how the methods use this: 56 bytes
        float field_0;       // offset 0
        float field_4;       // offset 4
        float field_8;       // offset 8
        undefined4 field_12; // offset 12
        undefined8 field_16; // offset 16
        undefined4 field_24; // offset 24
        undefined4 field_28; // offset 28
        undefined8 field_32; // offset 32
        undefined4 field_40; // offset 40
        undefined4 field_44; // offset 44
        char _unknown_48[8];
    };

    class VolumetricScatteringParams {
    public:
        VolumetricScatteringParams();
        VolumetricScatteringParams* operator=(VolumetricScatteringParams&&);
        VolumetricScatteringParams* operator=(VolumetricScatteringParams const&);

        // data members, from how the methods use this: 68 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        ColourHSL field_32;  // offset 32
        ColourHSL field_48;  // offset 48
        char _unknown_64[4];
    };

    // 0x1001d50b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SSAOParams::SSAOParams()
    void SSAOParams::SSAOParams() {
        field_0 = 4453159313468293120;
        field_8 = 4561245703459831808;
        field_16 = 12;
        field_20 = 4568451461360386048;
        field_28 = 4216233945198493696;
        field_36 = 1092616192;
        field_40 = 1;
        field_44 = 1056964608;
    }

    // 0x1001d5120, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SimpleScatteringParams::SimpleScatteringParams(): jumps straight to the base-object constructor

    // 0x1001d5130, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SimpleScatteringParams::SimpleScatteringParams()
    void SimpleScatteringParams::SimpleScatteringParams() {
        undefined4 uVar1;

        field_8 = DAT_103bc0834;
        uVar1 = DEF_OUTSCATTERING_AMOUNT._4_4_;
        field_0 = (float)(undefined4)DEF_OUTSCATTERING_AMOUNT;
        field_4 = (float)uVar1;
        field_16 = DEF_INSCATTERING_AMOUNT;
        field_24 = DAT_103bc0840;
        field_32 = DEF_SCATTERING_TINT;
        field_40 = DAT_103bc084c;
        new (&field_48, 1e-05, 17500.0, 8.0, 1.5) ImVec4();
    }

    // 0x1001d51d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // VolumetricScatteringParams::VolumetricScatteringParams(): jumps straight to the base-object constructor

    // 0x1001d51e0, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VolumetricScatteringParams::VolumetricScatteringParams()
    void VolumetricScatteringParams::VolumetricScatteringParams() {
        field_0 = 4575657222473777152;
        field_8 = 4575657222473777152;
        field_16 = 4561245704525185024;
        field_24 = 4764808406819982541;
        new (field_32, 1.0, 0.7, 0.5) math::ColourHSL();
        new (field_48, 0.025, 0.025, 0.025) math::ColourHSL();
        *(undefined8*)(field_48 + 12) = 4575657222473777152;
    }

    // 0x1004ab550, 96 bytes, inline, placed by class header (inline)
    // SimpleScatteringParams::operator==(SimpleScatteringParams const&) const
    /* SimpleScatteringParams::TEMPNAMEPLACEHOLDERVALUE(SimpleScatteringParams
   const&) const */

    bool SimpleScatteringParams::operator==(SimpleScatteringParams* param_1) {
        bool bVar1;

        bVar1 = math::operator==((Vector3T*)this, (Vector3T*)param_1);
        if (((bVar1) && (bVar1 = math::operator==((Vector3T*)&field_16, (Vector3T*)&param_1->field_16), bVar1)) &&
            (bVar1 = math::operator==((Vector3T*)&field_32, (Vector3T*)&param_1->field_32), bVar1)) {
            bVar1 = math::operator==((Vector4T*)&field_48, (Vector4T*)&param_1->field_48);
            return bVar1;
        }
        return false;
    }

    // 0x1004ab600, 128 bytes, inline, placed by class header (inline)
    // SimpleScatteringParams::hash() const
    ulong SimpleScatteringParams::hash() {
        ulong uVar1;
        ulong local_20;

        local_20 = 0;
        uVar1 = hash();
        hash_combine(&local_20, uVar1);
        uVar1 = (&field_16)->hash();
        hash_combine(&local_20, uVar1);
        uVar1 = (&field_32)->hash();
        hash_combine(&local_20, uVar1);
        uVar1 = (&field_48)->hash();
        hash_combine(&local_20, uVar1);
        return local_20;
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001d5890, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::~OSRenderCore_LogicThread_RSeven()
    void OSRenderCore_LogicThread_RSeven::~OSRenderCore_LogicThread_RSeven() {
        undefined8* in_RSI;

        field_0 = *in_RSI;
        (&field_672)->~unique_ptr();
        (&field_16)->~RSevenModelLitRenderer();
    }

} // namespace jag::oldscape
