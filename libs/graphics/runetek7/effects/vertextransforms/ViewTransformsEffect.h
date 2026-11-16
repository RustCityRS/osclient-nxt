// libs/graphics/runetek7/effects/vertextransforms/ViewTransformsEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ViewTransformsEffect {
    public:
        class ShaderConsts;
        // virtual methods in vtable order
        virtual ~ViewTransformsEffect();
        virtual Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        GetViewTransforms() const;
        void SetViewTransforms(math::Matrix44T<float> const&, math::Matrix44T<float> const&, float, float);
        ViewTransformsEffect(RT7Core&, int);

        // data members, from how the methods use this: 6515872 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[304];
        int field_328; // offset 328
        char _unknown_332[6515540];
    };

    class ViewTransformsEffect::ShaderConsts {
    public:
        ShaderConsts();

        // data members, from how the methods use this: 216 bytes
        char _unknown_0[216];
    };

    // 0x100922000, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ViewTransformsEffect::~ViewTransformsEffect(): jumps straight to the base-object destructor

    // 0x100922010, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ViewTransformsEffect::~ViewTransformsEffect()
    void ViewTransformsEffect::~ViewTransformsEffect() {
        ~ViewTransformsEffect(this);
        operator_delete(this);
    }

    // 0x100923690, 48 bytes, base-object destructor, inline, placed by class name
    // ViewTransformsEffect::~ViewTransformsEffect()
    void ViewTransformsEffect::~ViewTransformsEffect() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__ViewTransformsEffect_100f19788;
        (&field_256)->~TypedShaderConstBuffer();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x10093c2e0, 16 bytes, complete-object constructor, inline, placed by class name
    // ViewTransformsEffect::ViewTransformsEffect(RT7Core&, int): jumps straight to the base-object constructor

    // 0x10093c300, 96 bytes, base-object constructor, inline, placed by class name
    // ViewTransformsEffect::ViewTransformsEffect(RT7Core&, int)
    void ViewTransformsEffect::ViewTransformsEffect(RT7Core* param_1, int param_2) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__ViewTransformsEffect_100f19788;
        new (&field_32) ShaderConsts();
        new (&field_256) render::TypedShaderConstBuffer<DirLightCsmManager::ShaderConsts>();
        field_328 = param_2;
    }

    // 0x10093c360, 16 bytes, complete-object constructor, inline, placed by class name
    // ViewTransformsEffect::ShaderConsts::ShaderConsts(): jumps straight to the base-object constructor

    // 0x10093c370, 48 bytes, base-object constructor, inline, placed by class name
    // ViewTransformsEffect::ShaderConsts::ShaderConsts()
    void ViewTransformsEffect::ShaderConsts::ShaderConsts() {
        new (this) ViewTransforms();
        new (&field_208) math::Vector4T<float>();
    }

} // namespace jag::graphics
