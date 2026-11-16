// libs/graphics/runetek7/terrain/TerrainPatchDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class TerrainPatch_DE {
    public:
        // virtual methods in vtable order
        virtual ~TerrainPatch_DE();
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                            const SceneViewData& sceneViewData, RenderPassType renderPassType,
                            EffectManager& effectManager);
        virtual void GetRenderer(RT7Core& rt7Core);
        TerrainPatch_DE(const TerrainPatch& terrainPatch, const eastl::fixed_vector<unsigned char, 256ul>& arg2,
                        const math::OBB& obb, float arg4, render::InputAssemblerState* inputAssemblerState,
                        render::RenderPipelineState* renderPipelineState);

    private:
        uint8_t _unknown_8[104];
        TerrainPatch field_112;
    };

    // 0x1007c5e60
    TerrainPatch_DE::TerrainPatch_DE(const TerrainPatch& terrainPatch,
                                     const eastl::fixed_vector<unsigned char, 256ul>& arg2, const math::OBB& obb,
                                     float arg4, render::InputAssemblerState* inputAssemblerState,
                                     render::RenderPipelineState* renderPipelineState) {
        unsigned int arg2_00 = terrainPatch.GetPos();
        new (this) DrawableElementPool<TerrainPatch_DE>(obb, arg2_00, arg4);
        field_112->GetWorldTransform();
        uint32_t uVar1 = terrainPatch.GetFade();
        *(uint32_t*)(field_112 + 64) = uVar1;
        *(TerrainPatch**)(field_112 + 72) = terrainPatch;
        DrawCallState* this_00 = (DrawCallState*)(field_112 + 80);
        new (this_00) render::DrawCallState();
        new ((field_112 + 128)) eastl::fixed_vector<unsigned char, 256ul>(arg2);
        ApplyPrecisionOffset((Matrix44T<float>*)field_112);
        this_00->SetInputAssemblerState(inputAssemblerState);
        this_00->SetRenderPipelineState(renderPipelineState);
    }

    // 0x1007c5f60
    DrawableElementPool<TerrainPatch_DE>::DrawableElementPool(const math::OBB& obb, unsigned int arg2, float arg3)
        : DrawableElement(obb, arg2, arg3) {}

    // 0x1007c6090
    void TerrainPatch_DE::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                 const SceneViewData& sceneViewData, RenderPassType renderPassType,
                                 EffectManager& effectManager) {
        auto terrainPatch_DE = rt7Core.GetTerrainPatchRenderer();
        auto drawCallState_00 = rt7Core.GetRenderContext();
        TerrainPatchRenderer::Render(*terrainPatch_DE, *this, *drawCallState_00, drawCallState,
                                     (RenderPassType)sceneViewData, *((EffectManager*)(unsigned long)renderPassType));
    }

    // 0x1007c60f0
    void TerrainPatch_DE::GetRenderer(RT7Core& rt7Core) {
        rt7Core.GetTerrainPatchRenderer();
    }

    // 0x1007c6450
    TerrainPatch_DE::~TerrainPatch_DE() {
        ((field_112 + 128))->~fixed_vector();
        ((field_112 + 80))->~DrawCallState();
        destruct<oldscape::highlight::NpcUID*>();
    }

} // namespace jag::graphics
