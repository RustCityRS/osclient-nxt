// libs/graphics/runetek7/effects/water/WaterEmissiveShaderEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class WaterEmissiveShaderEffect {
    public:
        // virtual methods in vtable order
        virtual ~WaterEmissiveShaderEffect();
        virtual Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void SetUniforms(render::ShaderProgram const&) const;
        void SetParameters(WaterParameters const&, unsigned int);
        WaterEmissiveShaderEffect(RT7Core&, int);

        // data members, from how the methods use this: 112 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        uint field_24;     // offset 24
        char _unknown_28[4];
        shared_ptr field_32; // offset 32
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        undefined8 field_64; // offset 64
        undefined8 field_72; // offset 72
        char _unknown_80[16];
        undefined4 field_96; // offset 96
        float field_100;     // offset 100
        float field_104;     // offset 104
        char _unknown_108[4];
    };

    // 0x100922090, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // WaterEmissiveShaderEffect::~WaterEmissiveShaderEffect(): jumps straight to the base-object destructor

    // 0x1009220a0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // WaterEmissiveShaderEffect::~WaterEmissiveShaderEffect()
    void WaterEmissiveShaderEffect::~WaterEmissiveShaderEffect() {
        ~WaterEmissiveShaderEffect(this);
        operator_delete(this);
    }

    // 0x1009237e0, 48 bytes, base-object destructor, inline, placed by class name
    // WaterEmissiveShaderEffect::~WaterEmissiveShaderEffect()
    void WaterEmissiveShaderEffect::~WaterEmissiveShaderEffect() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__WaterEmissiveShaderEffect_100f19908;
        field_32->~shared_ptr();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x10093d360, 16 bytes, complete-object constructor, inline, placed by class name
    // WaterEmissiveShaderEffect::WaterEmissiveShaderEffect(RT7Core&, int): jumps straight to the base-object constructor

    // 0x10093d380, 176 bytes, base-object constructor, inline, placed by class name
    // WaterEmissiveShaderEffect::WaterEmissiveShaderEffect(RT7Core&, int)
    void WaterEmissiveShaderEffect::WaterEmissiveShaderEffect(RT7Core* param_1, int param_2) {
        undefined8 uVar1;

        new (this) ShaderEffect(param_1);
        field_0 = &PTR__WaterEmissiveShaderEffect_100f19908;
        field_24 = 4294967295;
        new (field_32, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        uVar1 = *(undefined8*)(PTR_ONE_100ee6700 + 8);
        field_48 = *(undefined8*)PTR_ONE_100ee6700;
        field_56 = uVar1;
        uVar1 = *(undefined8*)(PTR_ZERO_100ee6708 + 8);
        field_64 = *(undefined8*)PTR_ZERO_100ee6708;
        field_72 = uVar1;
        new (&field_80, 1.0, 0.0, 1.0, 1.0) ImVec4();
        new (&field_96, 1.0, 0.0) math::Point<float>();
        field_104 = 0.0;
    }

} // namespace jag::graphics
