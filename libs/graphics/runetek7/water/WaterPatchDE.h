// libs/graphics/runetek7/water/WaterPatchDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class WaterPatch_DE {
    public:
        // virtual methods in vtable order
        virtual ~WaterPatch_DE();
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                            const SceneViewData& sceneViewData, RenderPassType renderPassType,
                            EffectManager& effectManager);
        virtual void GetRenderer(RT7Core& rt7Core);
        WaterPatch_DE(const WaterPatch& waterPatch, const math::OBB& obb, float arg3,
                      const render::InputAssemblerState* inputAssemblerState);

    private:
        uint8_t _unknown_8[168];
        WaterMaterial* field_176;
        InputAssemblerState* field_184;
    };

    // 0x1007c8a30
    WaterPatch_DE::WaterPatch_DE(const WaterPatch& waterPatch, const math::OBB& obb, float arg3,
                                 const render::InputAssemblerState* inputAssemblerState) {
        unsigned int arg2 = waterPatch.GetPos();
        new (this) DrawableElementPool<WaterPatch_DE>(obb, arg2, arg3);
        field_112.GetWorldTransform();
        field_176 = (WaterMaterial*)waterPatch.GetMaterial();
        field_184 = inputAssemblerState;
        ApplyPrecisionOffset((Matrix44T<float>*)&field_112);
    }

    // 0x1007c8ad0
    DrawableElementPool<WaterPatch_DE>::DrawableElementPool(const math::OBB& obb, unsigned int arg2, float arg3)
        : DrawableElement(obb, arg2, arg3) {}

    // 0x1007c8b40
    void DrawableElementPool<WaterPatch_DE>::Release() {
        auto this_00 = GetDrawableElementPool();
        if (this_00->is_owner(this) == '\0') {
            if (this != nullptr) {
                ~();
            }
        } else {
            this_00->Destroy(this);
        }
    }

    // 0x1007c8b90
    void WaterPatch_DE::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                               const SceneViewData& sceneViewData, RenderPassType renderPassType,
                               EffectManager& effectManager) {
        auto waterPatch_DE = rt7Core.GetWaterPatchRenderer();
        auto drawCallState_00 = rt7Core.GetRenderContext();
        WaterPatchRenderer::Render(*waterPatch_DE, *this, *drawCallState_00, drawCallState,
                                   (RenderPassType)sceneViewData, *((EffectManager*)(unsigned long)renderPassType));
    }

    // 0x1007c8bf0
    void WaterPatch_DE::GetRenderer(RT7Core& rt7Core) {
        rt7Core.GetWaterPatchRenderer();
    }

} // namespace jag::graphics
