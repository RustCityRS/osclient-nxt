// libs/graphics/runetek7/effects/viewportmap/ViewportMapEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class ViewportMapEffect : public Effect // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ViewportMapEffect();
        virtual bool Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual CreateRenderingResources();
        virtual void DestroyRenderingResources();
        GetViewportMapManager();
        ViewportMapEffect(RT7Core&);
        void SetViewportMapID(int);

        // data members, from how the methods use this: 68 bytes, the first 8 are Effect
        uint field_8; // offset 8
        char _unknown_12[4];
        RT7Core* field_16;           // offset 16
        int field_24;                // offset 24
        int m_viewportMapID;         // offset 28
        ViewportMapManager field_32; // offset 32
    };

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    ViewportMapEffect::GetViewportMapManager();

    // 0x10091f6d0, 112 bytes, base-object constructor, placed by class name
    // ViewportMapEffect::ViewportMapEffect(RT7Core&)
    void ViewportMapEffect::ViewportMapEffect(RT7Core* param_1) {
        TextureManager* pTVar1;
        SkyBoxManager* pSVar2;

        new (this) ShaderEffect(param_1);
        field_0 = &PTR__ViewportMapEffect_100f19450;
        field_24 = -1;
        m_viewportMapID = -1;
        pTVar1 = (TextureManager*)param_1->GetTextureManager();
        pSVar2 = (SkyBoxManager*)param_1->GetSkyBoxManager();
        new (field_32, pTVar1, pSVar2) ViewportMapManager();
    }

    // 0x10091f750, 16 bytes, complete-object constructor, placed by class name
    // ViewportMapEffect::ViewportMapEffect(RT7Core&): jumps straight to the base-object constructor

    // 0x10091f760, 48 bytes, placed by class name
    // ViewportMapEffect::Initialise()
    bool ViewportMapEffect::Initialise() {
        uint uVar1;
        int iVar2;

        uVar1 = field_16->GetPSTextureSlotManager();
        iVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_24 = iVar2;
        return iVar2 != -1;
    }

    // 0x10091f790, 224 bytes, placed by class name
    // ViewportMapEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void ViewportMapEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        uint uVar1;
        int iVar2;
        long lVar3;
        ShaderProgram* this_00;
        Texture* this_01;
        HashedString* pHVar4;
        uint* puVar5;
        RenderPipelineState* this_02;

        lVar3 = (field_32, m_viewportMapID)->GetViewportMapTexture();
        if (lVar3 != 0) {
            this_00 = (ShaderProgram*)param_3->GetProgram();
            this_01 = (Texture*)(field_32, m_viewportMapID)->GetViewportMapTexture();
            pHVar4 = (HashedString*)graphics::operator*((graphics*)82);
            puVar5 = (uint*)this_01->second();
            uVar1 = *puVar5;
            lVar3 = this_01->second();
            this_00->SetShaderConstFloat2(pHVar4, (float)uVar1, (float)*(uint*)(lVar3 + 4));
            pHVar4 = (HashedString*)graphics::operator*((graphics*)98);
            iVar2 = this_00->GetConstIndex(pHVar4);
            this_02 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            this_02->SetPSTextureSamplerPair(field_24, this_01, iVar2, (SamplerState*)0, true);
        }
    }

    // 0x10091f8f0, 16 bytes, placed by class name
    // ViewportMapEffect::CreateRenderingResources()
    undefined1 ViewportMapEffect::CreateRenderingResources() {
        return 1;
    }

    // 0x10091f900, 16 bytes, placed by class name
    // ViewportMapEffect::DestroyRenderingResources()
    void ViewportMapEffect::DestroyRenderingResources() {}

    // 0x10091f910, 32 bytes, placed by class name
    // ViewportMapEffect::SetViewportMapID(int)
    void ViewportMapEffect::SetViewportMapID(int param_1) {
        m_viewportMapID = param_1;
        (field_32, param_1)->RegisterViewportMapID();
    }

    // 0x100922060, 16 bytes, complete-object destructor, inline, placed by class name
    // ViewportMapEffect::~ViewportMapEffect(): jumps straight to the base-object destructor

    // 0x100922070, 32 bytes, deleting destructor, inline, placed by class name
    // ViewportMapEffect::~ViewportMapEffect()
    void ViewportMapEffect::~ViewportMapEffect() {
        ~ViewportMapEffect(this);
        operator_delete(this);
    }

    // 0x1009236f0, 48 bytes, base-object destructor, inline, placed by class name
    // ViewportMapEffect::~ViewportMapEffect()
    void ViewportMapEffect::~ViewportMapEffect() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__ViewportMapEffect_100f19450;
        field_32->~ViewportMapManager();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

} // namespace jag::graphics
