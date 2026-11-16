// libs/graphics/runetek7/effects/vertextransforms/ClipPlaneEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ClipPlaneEffect {
    public:
        // virtual methods in vtable order
        virtual ~ClipPlaneEffect();
        virtual Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void UpdateShaderConstants();
        void SetClipPlane(math::Vector4T<float> const&);
        ClipPlaneEffect(RT7Core&, int);

        // data members, from how the methods use this: 160 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[96];
        uint field_120; // offset 120
        char _unknown_124[36];
    };

    // 0x100921fd0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ClipPlaneEffect::~ClipPlaneEffect(): jumps straight to the base-object destructor

    // 0x100921fe0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ClipPlaneEffect::~ClipPlaneEffect()
    void ClipPlaneEffect::~ClipPlaneEffect() {
        ~ClipPlaneEffect(this);
        operator_delete(this);
    }

    // 0x100923660, 48 bytes, base-object destructor, inline, placed by class name
    // ClipPlaneEffect::~ClipPlaneEffect()
    void ClipPlaneEffect::~ClipPlaneEffect() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__ClipPlaneEffect_100f19708;
        (&field_48)->~TypedShaderConstBuffer();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x10093c710, 16 bytes, complete-object constructor, inline, placed by class name
    // ClipPlaneEffect::ClipPlaneEffect(RT7Core&, int): jumps straight to the base-object constructor

    // 0x10093c730, 80 bytes, base-object constructor, inline, placed by class name
    // ClipPlaneEffect::ClipPlaneEffect(RT7Core&, int)
    void ClipPlaneEffect::ClipPlaneEffect(RT7Core* param_1, int param_2) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__ClipPlaneEffect_100f19708;
        new (&field_32) ClipPlaneShaderConsts();
        new (&field_48) render::TypedShaderConstBuffer<DirLightCsmManager::ShaderConsts>();
        field_120 = param_2;
    }

} // namespace jag::graphics
