// libs/graphics/runetek7/effects/textureatlasing/TextureAtlasing.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class TextureAtlasing {
    public:
        void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&, TextureAtlasReference const&,
                                int, int);
    };

    // 0x10091e4a0, 432 bytes, placed by class name and debug map
    // TextureAtlasing::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&, TextureAtlasReference const&, int, int)
    void TextureAtlasing::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3,
                                             TextureAtlasReference* param_4, int param_5, int param_6) {
        uint uVar1;
        int iVar2;
        TextureAtlas* this;
        ShaderProgram* pSVar3;
        RenderPipelineState* pRVar4;
        Texture* pTVar5;
        HashedString* pHVar6;
        ImVec4 local_58[16];
        ShaderProgram* local_48;
        DrawCallState* local_40;
        float local_34;

        this = (TextureAtlas*)param_4->GetTextureAtlas();
        if ((this != (TextureAtlas*)0) && (param_5 != -1)) {
            uVar1 = GetSlotCount();
            local_48 = (ShaderProgram*)CONCAT44(local_48._4_4_, (float)uVar1);
            uVar1 = GetSlotPixelResolution();
            local_40 = (DrawCallState*)CONCAT44(local_40._4_4_, (float)uVar1);
            uVar1 = GetAtlasPixelResolution();
            local_34 = 1.0 / (float)uVar1;
            iVar2 = GetMipLimit();
            ImVec4::ImVec4(local_58, local_48._0_4_, local_40._0_4_, local_34, (float)(iVar2 - 1));
            pSVar3 = (ShaderProgram*)param_3->GetProgram();
            local_34 = (float)param_5;
            pRVar4 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            local_40 = param_1;
            pTVar5 = (Texture*)GetTexture();
            pHVar6 = (HashedString*)graphics::operator*((graphics*)22);
            local_48 = pSVar3;
            iVar2 = pSVar3->GetConstIndex(pHVar6);
            pRVar4->SetPSTextureSamplerPair((uint)local_34, pTVar5, iVar2, 0, true);
            if (param_6 == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("settingsTextureUnit != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "effects/textureatlasing/TextureAtlasing.cpp",
                          26, (char*)0);
            }
            pRVar4 = (RenderPipelineState*)local_40->GetRenderPipelineState();
            pTVar5 = (Texture*)GetSettingsTexture();
            pHVar6 = (HashedString*)graphics::operator*((graphics*)23);
            pSVar3 = local_48;
            iVar2 = local_48->GetConstIndex(pHVar6);
            pRVar4->SetPSTextureSamplerPair(param_6, pTVar5, iVar2, 0, true);
            pHVar6 = (HashedString*)graphics::operator*((graphics*)21);
            pSVar3->SetShaderConstVector4(pHVar6, local_58);
        }
    }

} // namespace jag::graphics
