// libs/graphics/runetek7/effects/lighting/SSAOEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SSAOEffect {
    public:
        // virtual methods in vtable order
        virtual ~SSAOEffect();
        virtual bool Initialise();
        virtual byte IsSupported() const;
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        void SetSSAORT(shared_ptr<render::RenderTargets> const&);
        SSAOEffect(RT7Core&);
        GetHighestSupporedMode();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        uint field_24;     // offset 24
        char _unknown_28[12];
    };

    // 0x1001d0780, 16 bytes, inline, placed by class name and debug map
    // SSAOEffect::SetSSAORT(shared_ptr<render::RenderTargets> const&)
    void SSAOEffect::SetSSAORT(shared_ptr* param_1) {
        weak_ptr<render::RenderTargets>::operator=((weak_ptr<render::RenderTargets>*)&field_32, param_1);
    }

    // 0x100937e60, 16 bytes, complete-object destructor, inline, placed by class name
    // SSAOEffect::~SSAOEffect(): jumps straight to the base-object destructor

    // 0x100937e70, 32 bytes, deleting destructor, inline, placed by class name
    // SSAOEffect::~SSAOEffect()
    void SSAOEffect::~SSAOEffect() {
        ~SSAOEffect(this);
        operator_delete(this);
    }

    // 0x1009396e0, 48 bytes, base-object destructor, inline, placed by class name
    // SSAOEffect::~SSAOEffect()
    void SSAOEffect::~SSAOEffect() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__SSAOEffect_100f19f48;
        (&field_32)->~weak_ptr();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

} // namespace jag::graphics
