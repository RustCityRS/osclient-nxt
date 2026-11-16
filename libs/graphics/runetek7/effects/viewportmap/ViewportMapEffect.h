// libs/graphics/runetek7/effects/viewportmap/ViewportMapEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class ViewportMapEffect : public Effect // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ViewportMapEffect();
        virtual bool Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual uint8_t CreateRenderingResources();
        virtual void DestroyRenderingResources();
        Option<float>* GetViewportMapManager();
        ViewportMapEffect(RT7Core& rt7Core);
        void SetViewportMapID(int arg1);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        int field_24;
        int m_viewportMapID;
        ViewportMapManager field_32;
    };

    // 0x10002d850: ViewportMapEffect::GetViewportMapManager() has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x10091f6d0
    ViewportMapEffect::ViewportMapEffect(RT7Core& rt7Core) : ShaderEffect(rt7Core), field_24(-1), m_viewportMapID(-1) {
        auto textureManager = rt7Core.GetTextureManager();
        auto skyBoxManager = rt7Core.GetSkyBoxManager();
        new (field_32) ViewportMapManager(*textureManager, *skyBoxManager);
    }

    // 0x10091f760
    bool ViewportMapEffect::Initialise() {
        int iVar1 = ShaderResourceSlotManager::RegisterSlotID(field_16->GetPSTextureSlotManager());
        field_24 = iVar1;
        return iVar1 != -1;
    }

    // 0x10091f790
    void ViewportMapEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                               render::RenderContext& renderContext, Shader& shader) const {
        unsigned int uVar1;
        int arg3;
        ShaderProgram* this_00;
        Texture* texture;
        HashedString* pHVar3;
        unsigned int* puVar4;

        long lVar2 = field_32->GetViewportMapTexture(m_viewportMapID);
        if (lVar2 != 0) {
            this_00 = shader.GetProgram();
            texture = (Texture*)field_32->GetViewportMapTexture(m_viewportMapID);
            pHVar3 = (HashedString*)graphics::operator*(82);
            puVar4 = (unsigned int*)texture->second();
            uVar1 = *puVar4;
            lVar2 = texture->second();
            this_00->SetShaderConstFloat2(pHVar3, (float)uVar1, (float)*(unsigned int*)(lVar2 + 4));
            pHVar3 = (HashedString*)graphics::operator*(98);
            arg3 = this_00->GetConstIndex(*pHVar3);
            ((RenderPipelineState*)drawCallState.GetRenderPipelineState())
                ->SetPSTextureSamplerPair(field_24, texture, arg3, nullptr, true);
        }
    }

    // 0x10091f8f0
    uint8_t ViewportMapEffect::CreateRenderingResources() {
        return 1;
    }

    // 0x10091f900
    void ViewportMapEffect::DestroyRenderingResources() {}

    // 0x10091f910
    void ViewportMapEffect::SetViewportMapID(int arg1) {
        m_viewportMapID = arg1;
        field_32->RegisterViewportMapID(arg1);
    }

    // 0x1009236f0
    ViewportMapEffect::~ViewportMapEffect() {
        field_32->~ViewportMapManager();
        destruct<oldscape::highlight::NpcUID*>();
    }

} // namespace jag::graphics
