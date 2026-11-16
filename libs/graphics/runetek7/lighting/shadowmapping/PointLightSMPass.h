// libs/graphics/runetek7/lighting/shadowmapping/PointLightSMPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class PointLightSMPass : public ShadowPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~PointLightSMPass();
        virtual void PreparePass(RT7Core& rt7Core, EffectManager& effectManager, const SceneViewData& sceneViewData,
                                 DrawableQueue& drawableQueue);
        virtual uint64_t BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                   EffectManager& effectManager, const SceneViewData& sceneViewData,
                                   const DrawableQueue& drawableQueue);
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        virtual void RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue);
        PointLightSMPass(PointLightSM* pointLightSM, render::CubeFace cubeFace, ThreadPool* threadPool);
        void Reset();
        uint64_t UpdateLightViewMatrices(float& arg1, float& arg2, unsigned long& arg3, unsigned long& arg4,
                                         math::AABB& aabb1, math::AABB& aabb2, const math::Matrix44T<float>& matrix44,
                                         const DrawableQueue& drawableQueue);

    private:
        uint8_t _unknown_796[4];
        PointLightSM* field_800;
        uint8_t _unknown_808[8];
        ViewTransforms field_816;
        uint8_t _unknown_968[56];
        OBB field_1024;
        uint8_t _unknown_1096[8];
        Sphere field_1104;
        uint8_t _unknown_1124[4];
        uint64_t field_1128;
        uint8_t _unknown_1136[6515520];
    };

    // 0x1008ae3c0
    void PointLightSMPass::Reset() {
        *(uint64_t*)(field_1104 + 16) = 4294967295;
        field_1128 = 4294967295;
    }

} // namespace jag::graphics
