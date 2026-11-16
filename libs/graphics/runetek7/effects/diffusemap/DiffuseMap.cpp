// libs/graphics/runetek7/effects/diffusemap/DiffuseMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DiffuseMap {
    public:
        void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&, render::Texture const&,
                                unsigned int, render::SamplerState const*);
        void SetShaderConstantsMask(render::DrawCallState&, render::RenderContext&, Shader&, render::Texture const&,
                                    unsigned int, render::SamplerState const*);
    };

    // 0x10092d4d0, 112 bytes, placed by class name and debug map
    // DiffuseMap::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&, render::Texture const&, unsigned int, render::SamplerState const*)
    void DiffuseMap::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3,
                                        Texture* param_4, uint param_5, SamplerState* param_6) {
        ShaderProgram* this;
        RenderPipelineState* this_00;
        HashedString* pHVar1;
        int iVar2;

        this = (ShaderProgram*)param_3->GetProgram();
        this_00 = (RenderPipelineState*)param_1->GetRenderPipelineState();
        pHVar1 = (HashedString*)graphics::operator*((graphics*)18);
        iVar2 = GetConstIndex(pHVar1);
        this_00->SetPSTextureSamplerPair(param_5, param_4, iVar2, param_6, false);
    }

    // 0x10092d540, 112 bytes, placed by class name and debug map
    // DiffuseMap::SetShaderConstantsMask(render::DrawCallState&, render::RenderContext&, Shader&, render::Texture const&, unsigned int, render::SamplerState const*)
    void DiffuseMap::SetShaderConstantsMask(DrawCallState* param_1, RenderContext* param_2, Shader* param_3,
                                            Texture* param_4, uint param_5, SamplerState* param_6) {
        ShaderProgram* this;
        RenderPipelineState* this_00;
        HashedString* pHVar1;
        int iVar2;

        this = (ShaderProgram*)param_3->GetProgram();
        this_00 = (RenderPipelineState*)param_1->GetRenderPipelineState();
        pHVar1 = (HashedString*)graphics::operator*((graphics*)19);
        iVar2 = GetConstIndex(pHVar1);
        this_00->SetPSTextureSamplerPair(param_5, param_4, iVar2, param_6, false);
    }

} // namespace jag::graphics
