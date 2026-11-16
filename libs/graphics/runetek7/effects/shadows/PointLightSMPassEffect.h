// libs/graphics/runetek7/effects/shadows/PointLightSMPassEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class PointLightSMPassEffect {
    public:
        class ShaderConsts;
        // virtual methods in vtable order
        virtual ~PointLightSMPassEffect();
        virtual Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void SetShaderConstants(render::DrawCallState&, render::RenderContext&, render::ShaderProgram const&) const;
        void SetLightViewProjTrans(math::Matrix44T<float> const&);
        void SetLightPos(math::Vector3T<float> const&);
        void SetNearFarClip(float, float);
        PointLightSMPassEffect(RT7Core&, int);

        // data members, from how the methods use this: 240 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[176];
        uint field_200; // offset 200
        char _unknown_204[36];
    };

    class PointLightSMPassEffect::ShaderConsts {
    public:
        ShaderConsts();

        // data members, from how the methods use this: 88 bytes
        char _unknown_0[88];
    };

    // 0x100921ee0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // PointLightSMPassEffect::~PointLightSMPassEffect(): jumps straight to the base-object destructor

    // 0x100921ef0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // PointLightSMPassEffect::~PointLightSMPassEffect()
    void PointLightSMPassEffect::~PointLightSMPassEffect() {
        ~PointLightSMPassEffect(this);
        operator_delete(this);
    }

    // 0x100921f70, 80 bytes, inline, placed by debug map only (low confidence)
    // DrawableElementPool<SkyBox_DE>::Release()
    void DrawableElementPool<SkyBox_DE>::Release() {
        char cVar1;

        GetDrawableElementPool();
        cVar1 = (&GetDrawableElementPool()::pool)->is_owner(this);
        if (cVar1 == '\0') {
            if (this != (DrawableElementPool<SkyBox_DE>*)0) {
                (**(code**)(*(long*)this + 8))(this);
            }
        } else {
            (&GetDrawableElementPool()::pool)->Destroy(this);
        }
    }

    // 0x1009233b0, 48 bytes, base-object destructor, inline, placed by class name
    // PointLightSMPassEffect::~PointLightSMPassEffect()
    void PointLightSMPassEffect::~PointLightSMPassEffect() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__PointLightSMPassEffect_100f195d0;
        (&field_128)->~TypedShaderConstBuffer();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x10093b440, 16 bytes, complete-object constructor, inline, placed by class name
    // PointLightSMPassEffect::PointLightSMPassEffect(RT7Core&, int): jumps straight to the base-object constructor

    // 0x10093b460, 96 bytes, base-object constructor, inline, placed by class name
    // PointLightSMPassEffect::PointLightSMPassEffect(RT7Core&, int)
    void PointLightSMPassEffect::PointLightSMPassEffect(RT7Core* param_1, int param_2) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__PointLightSMPassEffect_100f195d0;
        new (&field_32) ShaderConsts();
        new (&field_128) render::TypedShaderConstBuffer<DirLightCsmManager::ShaderConsts>();
        field_200 = param_2;
    }

    // 0x10093b4c0, 16 bytes, complete-object constructor, inline, placed by class name
    // PointLightSMPassEffect::ShaderConsts::ShaderConsts(): jumps straight to the base-object constructor

    // 0x10093b4d0, 48 bytes, base-object constructor, inline, placed by class name
    // PointLightSMPassEffect::ShaderConsts::ShaderConsts()
    void PointLightSMPassEffect::ShaderConsts::ShaderConsts() {
        new (this) math::Matrix44T<float>();
        new (&field_64) math::Vector4T<float>();
        new (&field_80) math::Vector4T<float>();
    }

} // namespace jag::graphics
