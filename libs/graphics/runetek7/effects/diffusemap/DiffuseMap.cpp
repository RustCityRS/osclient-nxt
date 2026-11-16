// libs/graphics/runetek7/effects/diffusemap/DiffuseMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class DiffuseMap {
    public:
        void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                Shader& shader, const render::Texture& texture, unsigned int arg5,
                                const render::SamplerState* samplerState);
        void SetShaderConstantsMask(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                    Shader& shader, const render::Texture& texture, unsigned int arg5,
                                    const render::SamplerState* samplerState);
    };

    // 0x10092d4d0
    void DiffuseMap::SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader, const render::Texture& texture, unsigned int arg5,
                                        const render::SamplerState* samplerState) {
        auto shaderProgram = shader.GetProgram();
        RenderPipelineState* this_00 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        auto hashedString = graphics::operator*(18);
        int arg3 = shaderProgram->GetConstIndex(*hashedString);
        this_00->SetPSTextureSamplerPair(arg5, texture, arg3, samplerState, false);
    }

    // 0x10092d540
    void DiffuseMap::SetShaderConstantsMask(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                            Shader& shader, const render::Texture& texture, unsigned int arg5,
                                            const render::SamplerState* samplerState) {
        auto shaderProgram = shader.GetProgram();
        RenderPipelineState* this_00 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        auto hashedString = graphics::operator*(19);
        int arg3 = shaderProgram->GetConstIndex(*hashedString);
        this_00->SetPSTextureSamplerPair(arg5, texture, arg3, samplerState, false);
    }

} // namespace jag::graphics
