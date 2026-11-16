// libs/graphics/runetek7/effects/Effect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class Effect : public Drawable // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Effect();
        virtual void Initialise();
        virtual OnDisabled();
        virtual CreateRenderingResources();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        OnEndFrame();
        InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&);
        DestroyRenderingResources();
        OnEnabled();
        RenderDebug(render::Viewport const&) const;
        BindConstBufferToShader(render::ShaderProgram const&) const;
        IsSupported() const;
        Effect();
        Effect(RT7Core&);

        // data members, from how the methods use this: 8 bytes
        undefined** field_0; // offset 0, vtable pointer
    };

    // 0x100936d40, 16 bytes, base-object constructor, inline, placed by class name and debug map
    // Effect::Effect()
    /* Effect::Effect(RT7Core&) */

    void Effect::Effect(RT7Core* param_1) {
        field_0 = &PTR_destruct<oldscape::highlight::NpcUID*> _100f19fc8;
    }

    // 0x100936ec0, 112 bytes, inline, placed by debug map only (low confidence)
    // GetKeyFromWorldPos(math::Vector3T<float> const&)
    void GetKeyFromWorldPos(Vector3T* param_1) {
        float fVar1;
        vector* pvVar2;
        float* pfVar3;

        pvVar2 = SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar2;
        pfVar3 = (float*)second();
        if (((int)(fVar1 * 0.00012207031) < 0) || ((int)(*pfVar3 * 0.00012207031) < 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("mapSquareX >= 0 && mapSquareZ >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      21, (char*)0);
        }
        Js5NetQueueRequest::GetKey((int)(fVar1 * 0.00012207031), (int)(*pfVar3 * 0.00012207031));
    }

    // 0x100937190, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GetKeyFromMapSquare(int, int)
    /* Js5NetQueueRequest::GetKey(int, int) */

    uint Js5NetQueueRequest::GetKey(int param_1, int param_2) {
        return param_2 << 8 | param_1;
    }

    // 0x100937db0, 16 bytes, inline, placed by class name
    // Effect::Initialise()
    void Effect::Initialise() {
        (*(code*)field_0[9])();
    }

    // 0x10093a4e0, 16 bytes, complete-object constructor, inline, placed by class name
    // Effect::Effect(RT7Core&): jumps straight to the base-object constructor

} // namespace jag::graphics
