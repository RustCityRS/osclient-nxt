// libs/graphics/runetek7/effects/water/WaterFoamShaderEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class WaterFoamShaderEffect {
    public:
        // virtual methods in vtable order
        virtual ~WaterFoamShaderEffect();
        virtual Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void SetParameters(WaterParameters const&, int);
        WaterFoamShaderEffect(RT7Core&, int);

        // data members, from how the methods use this: 60 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        uint field_24;     // offset 24
        char _unknown_28[4];
        shared_ptr field_32; // offset 32
        float field_48;      // offset 48
        float field_52;      // offset 52
        char _unknown_56[4];
    };

    // 0x1009220c0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // WaterFoamShaderEffect::~WaterFoamShaderEffect(): jumps straight to the base-object destructor

    // 0x1009220d0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // WaterFoamShaderEffect::~WaterFoamShaderEffect()
    void WaterFoamShaderEffect::~WaterFoamShaderEffect() {
        ~WaterFoamShaderEffect(this);
        operator_delete(this);
    }

    // 0x100923810, 48 bytes, base-object destructor, inline, placed by class name
    // WaterFoamShaderEffect::~WaterFoamShaderEffect()
    void WaterFoamShaderEffect::~WaterFoamShaderEffect() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__WaterFoamShaderEffect_100f19a08;
        field_32->~shared_ptr();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x10093cf50, 16 bytes, complete-object constructor, inline, placed by class name
    // WaterFoamShaderEffect::WaterFoamShaderEffect(RT7Core&, int): jumps straight to the base-object constructor

    // 0x10093cf70, 80 bytes, base-object constructor, inline, placed by class name
    // WaterFoamShaderEffect::WaterFoamShaderEffect(RT7Core&, int)
    void WaterFoamShaderEffect::WaterFoamShaderEffect(RT7Core* param_1, int param_2) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__WaterFoamShaderEffect_100f19a08;
        field_24 = 4294967295;
        new (field_32, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_48 = 0.0;
        field_52 = 0.0;
    }

} // namespace jag::graphics
