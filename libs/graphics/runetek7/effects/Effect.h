// libs/graphics/runetek7/effects/Effect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class Effect : public Drawable // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Effect();
        virtual void Initialise();
        virtual void OnDisabled();
        virtual uint8_t CreateRenderingResources();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        void OnEndFrame();
        void InitialiseTweakVars(tweak::ContainerGroup& arg1, EffectManager& arg2);
        void DestroyRenderingResources();
        void OnEnabled();
        void RenderDebug(const render::Viewport& arg1) const;
        void BindConstBufferToShader(const render::ShaderProgram& arg1) const;
        bool IsSupported() const;
        Effect();
        Effect(RT7Core& arg1);
        Effect(RT7Core& rt7Core);
    };

    // 0x100936d40
    Effect::Effect() {}

    // 0x100936ec0
    void GetKeyFromWorldPos(const math::Vector3T<float>& vector3) {
        auto pfVar2 = vector3.SSOBeginPtr();
        float fVar1 = *pfVar2;
        pfVar2 = (float*)vector3.second();
        if (((int)(fVar1 * 0.00012207031f) < 0) || ((int)(*pfVar2 * 0.00012207031f) < 0)) {
            LogAssert("mapSquareX >= 0 && mapSquareZ >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/PointLightIndicesEffect.cpp",
                      21, nullptr);
        }
        Js5NetQueueRequest::GetKey((int)(fVar1 * 0.00012207031f), (int)(*pfVar2 * 0.00012207031f));
    }

    // 0x100937190
    void GetKeyFromMapSquare(int arg1, int arg2) {
        return arg2 << 8 | arg1;
    }

    // 0x100937db0
    void Effect::Initialise() {
        IsSupported();
    }

} // namespace jag::graphics
