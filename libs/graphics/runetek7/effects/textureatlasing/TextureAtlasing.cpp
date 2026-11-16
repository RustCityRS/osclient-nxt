// libs/graphics/runetek7/effects/textureatlasing/TextureAtlasing.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TextureAtlasing {
    public:
        void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                Shader& shader, const TextureAtlasReference& textureAtlasReference, int arg5, int arg6);
    };

    // 0x10091e4a0
    void TextureAtlasing::SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                             Shader& shader, const TextureAtlasReference& textureAtlasReference,
                                             int arg5, int arg6) {
        unsigned int uVar1;
        int iVar2;
        ShaderProgram* pSVar3;
        RenderPipelineState* pRVar4;
        Texture* pTVar5;
        HashedString* pHVar6;
        ImVec4 local_58;
        ShaderProgram* local_48;
        DrawCallState* local_40;
        float local_34;

        auto textureAtlas = textureAtlasReference.GetTextureAtlas();
        if ((textureAtlas != nullptr) && (arg5 != -1)) {
            uVar1 = textureAtlas->GetSlotCount();
            local_48 = (ShaderProgram*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)((float)uVar1));
            uVar1 = textureAtlas->GetSlotPixelResolution();
            local_40 = (DrawCallState*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)((float)uVar1));
            uVar1 = textureAtlas->GetAtlasPixelResolution();
            local_34 = 1.0 / (float)uVar1;
            iVar2 = textureAtlas->GetMipLimit();
            local_58 = ImVec4(local_48._0_4_, local_40._0_4_, local_34, (float)(iVar2 - 1));
            pSVar3 = shader.GetProgram();
            local_34 = (float)arg5;
            pRVar4 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            local_40 = drawCallState;
            pTVar5 = (Texture*)textureAtlas->GetTexture();
            pHVar6 = (HashedString*)graphics::operator*(22);
            local_48 = pSVar3;
            iVar2 = pSVar3->GetConstIndex(*pHVar6);
            pRVar4->SetPSTextureSamplerPair((unsigned int)local_34, pTVar5, iVar2, nullptr, true);
            if (arg6 == -1) {
                LogAssert("settingsTextureUnit != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "effects/textureatlasing/TextureAtlasing.cpp",
                          26, nullptr);
            }
            pRVar4 = (RenderPipelineState*)local_40->GetRenderPipelineState();
            pTVar5 = (Texture*)textureAtlas->GetSettingsTexture();
            pHVar6 = (HashedString*)graphics::operator*(23);
            pSVar3 = local_48;
            iVar2 = local_48->GetConstIndex(*pHVar6);
            pRVar4->SetPSTextureSamplerPair(arg6, pTVar5, iVar2, nullptr, true);
            pHVar6 = (HashedString*)graphics::operator*(21);
            pSVar3->SetShaderConstVector4(pHVar6, &local_58);
        }
    }

} // namespace jag::graphics
