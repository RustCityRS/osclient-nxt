// libs/graphics/runetek7/water/WaterPatchRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "WaterPatchRenderer.h"

namespace jag::graphics {
    // 0x1039bd0e8, 96 bytes, __common; set at startup by ___cxx_global_var_init.8
    render::VertexDeclaration WaterPatchRenderer::m_vertexDeclaration = VertexDeclaration();

    // 0x1007a25d0, 48 bytes, base-object constructor, placed by class name
    // WaterPatchRenderer::WaterPatchRenderer()
    void WaterPatchRenderer::WaterPatchRenderer() {
        new (this) DrawableRenderer();
        field_0 = &PTR__WaterPatchRenderer_100f14090;
        field_8 = 4294967295;
        field_12 = 4294967295;
        field_16 = 4294967295;
        field_20 = 4294967295;
        field_20 = 4294967295;
        field_24 = 4294967295;
        field_28 = 4294967295;
        field_32 = 4294967295;
    }

    // 0x1007a2600, 16 bytes, complete-object constructor, placed by class name
    // WaterPatchRenderer::WaterPatchRenderer(): jumps straight to the base-object constructor

    // 0x1007a2610, 64 bytes, base-object destructor, placed by class name
    // WaterPatchRenderer::~WaterPatchRenderer()
    void WaterPatchRenderer::~WaterPatchRenderer() {
        field_0 = &PTR__WaterPatchRenderer_100f14090;
        Destroy(this);
        ~AutoSingleton();
    }

    // 0x1007a2650, 16 bytes, placed by class name
    // WaterPatchRenderer::Destroy()
    void WaterPatchRenderer::Destroy() {
        DestroyRenderingResources(this);
    }

    // 0x1007a2660, 16 bytes, complete-object destructor, placed by class name
    // WaterPatchRenderer::~WaterPatchRenderer(): jumps straight to the base-object destructor

    // 0x1007a2670, 32 bytes, deleting destructor, placed by class name
    // WaterPatchRenderer::~WaterPatchRenderer()
    void WaterPatchRenderer::~WaterPatchRenderer() {
        ~WaterPatchRenderer(this);
        operator_delete(this);
    }

    // 0x1007a2690, 288 bytes, placed by class name
    // WaterPatchRenderer::Initialise(RT7Core&)
    undefined8 WaterPatchRenderer::Initialise(RT7Core* param_1) {
        uint uVar2;
        undefined4 uVar3;
        undefined4* puVar4;
        undefined4* puVar5;
        EffectManager* pEVar6;
        SunlightDirectLighting* pSVar7;

        uVar2 = param_1->GetPSTextureSlotManager();
        uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        puVar5 = &field_8;
        puVar4 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)puVar5, 0);
        *puVar4 = uVar3;
        uVar2 = param_1->GetPSTextureSlotManager();
        uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        puVar4 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)puVar5, 1);
        *puVar4 = uVar3;
        uVar2 = param_1->GetPSTextureSlotManager();
        uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        puVar5 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)puVar5, 2);
        *puVar5 = uVar3;
        uVar2 = param_1->GetPSTextureSlotManager();
        uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        field_20 = uVar3;
        uVar2 = param_1->GetPSTextureSlotManager();
        uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        field_24 = uVar3;
        uVar2 = param_1->GetPSTextureSlotManager();
        uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        field_32 = uVar3;
        pEVar6 = (EffectManager*)param_1->GetEffectManager();
        pSVar7 = EffectManager::GetEffect<SunlightDirectLighting>(pEVar6, 44);
        if ((*(code*)pSVar7->field_0[5])(pSVar7) != '\0') {
            uVar2 = param_1->GetPSTextureSlotManager();
            uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
            field_28 = uVar3;
        }
        CreateRenderingResources();
        return 1;
    }

    // 0x1007a27c0, 48 bytes, placed by class name
    // WaterPatchRenderer::CreateRenderingResources()
    undefined8 WaterPatchRenderer::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10[8];

        local_10->~AutoSingleton("WaterPatchRenderer");
        InitialiseVertexDeclaration();
        return 1;
    }

    // 0x1007a27f0, 48 bytes, placed by class name
    // WaterPatchRenderer::DestroyRenderingResources()
    void WaterPatchRenderer::DestroyRenderingResources() {
        VertexDeclarationManager* this_00;

        this_00 = (VertexDeclarationManager*)Instance();
        this_00->Unregister((VertexDeclaration*)&m_vertexDeclaration);
        m_vertexDeclaration.Destroy();
    }

    // 0x1007a2820, 336 bytes, placed by class name
    // WaterPatchRenderer::InitialiseVertexDeclaration()
    void WaterPatchRenderer::InitialiseVertexDeclaration() {
        uint uVar1;
        int iVar2;
        ulong uVar3;
        VertexDeclarationManager* this;
        Singleton<render::VertexDeclarationManager>* this_00;
        ShaderProgramVariable local_130;
        ShaderProgramVariable local_108;
        ShaderProgramVariable local_e0;
        ShaderProgramVariable local_b8;
        ShaderProgramVariable local_90;
        ShaderProgramVariable local_68;
        ShaderProgramVariable local_40;

        uVar1 = graphics::operator*((graphics*)258);
        local_130.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)235);
        local_108.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)259);
        local_e0.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)260);
        local_b8.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)261);
        local_90.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)262);
        local_68.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)263);
        local_40.GetVertexElementDesc(uVar1);
        uVar3 = local_130.data();
        render::VertexDeclaration::Create((VertexElementDesc*)&m_vertexDeclaration, uVar3, (void*)7, 0);
        this_00 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDeclaration;
        iVar2 = m_vertexDeclaration.GetVertexStride(0);
        if (iVar2 != 32) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDeclaration.GetVertexStride() == sizeof(WaterPatchVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/water/"
                      "WaterPatchRenderer.cpp",
                      191, (char*)0);
        }
        this = (VertexDeclarationManager*)this_00->Instance();
        Register((VertexDeclaration*)&m_vertexDeclaration);
    }

    // 0x1007a2970, 672 bytes, placed by class name
    // WaterPatchRenderer::Render(WaterPatch_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void WaterPatchRenderer::Render(long param_1, RenderContext* param_2, DrawCallState* param_3,
                                    SceneViewData* param_4, int param_6, EffectManager* param_7) {
        uint uVar1;
        WaterMaterial* this_00;
        char cVar3;
        int iVar4;
        undefined4 uVar5;
        RenderPassEffect* this_01;
        shared_ptr* psVar6;
        shared_ptr<Shader>* this_02;
        Shader* this_03;
        ShaderProgram* this_04;
        Layout* this_05;
        RenderPipelineState* pRVar7;
        WaterParameters* pWVar8;
        SunlightDirectLighting* this_06;
        CausticsManager* this_07;
        Texture* pTVar9;
        HashedString* pHVar10;
        undefined8 uVar11;
        AnimationDescriptor* this_08;
        EffectList in_stack_ffffffffffffff78;
        DrawCallState local_80;
        undefined1 local_31;

        local_31 = param_7->IsEnabled(108);
        this_00 = *(WaterMaterial**)(param_1 + 176);
        this_01 = (RenderPassEffect*)this_00->GetRenderPassEffect(param_6);
        psVar6 = (shared_ptr*)this_01->GetShader(param_4);
        if (!operator!=(psVar6, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/water/"
                      "WaterPatchRenderer.cpp",
                      95, "No shader program available for this render pass");
        }
        this_02 = (shared_ptr<Shader>*)this_01->GetShader(param_4);
        this_03 = (Shader*)shared_ptr<Shader>::operator*(this_02);
        cVar3 = this_03->IsReady();
        if (cVar3 != '\0') {
            new (&local_80) render::DrawCallState(param_3);
            this_04 = (ShaderProgram*)this_03->GetProgram();
            this_04->GetNativeShaderProgram();
            this_05 = (Layout*)this_03->second();
            eastl::string::Layout::SSOBeginPtr(this_05, (type*)param_3);
            pRVar7 = (RenderPipelineState*)local_80.GetRenderPipelineState();
            pRVar7->SetShaderProgram(this_04);
            pWVar8 = (WaterParameters*)this_00->GetWaterParameters();
            SetEffectParameters((WaterPatchRenderer*)this, this_01, param_7, pWVar8, param_4);
            EffectManager::SetShaderConstants((DrawCallState*)param_7, (RenderContext*)&local_80, (Shader*)param_2,
                                              in_stack_ffffffffffffff78);
            if (param_6 == 7) {
                this_06 = EffectManager::GetEffect<SunlightDirectLighting>(param_7, 44);
                this_07 = (CausticsManager*)this_06->GetDevCredentialsOutputDirectory();
                cVar3 = (&this_01->field_16, 46)->Contains();
                if (cVar3 == '\0') {
                    uVar11 = this_07->GetCausticsIntegerMapAtlas();
                    param_2->BindImageTexture(0, uVar11, 0);
                } else {
                    pRVar7 = (RenderPipelineState*)local_80.GetRenderPipelineState();
                    uVar1 = ((WaterPatchRenderer*)this)->field_28;
                    pTVar9 = (Texture*)this_07->GetCausticsIntegerMapAtlas();
                    pHVar10 = (HashedString*)graphics::operator*((graphics*)70);
                    iVar4 = this_04->GetConstIndex(pHVar10);
                    pRVar7->SetPSTextureSamplerPair(uVar1, pTVar9, iVar4, 0, false);
                }
            }
            pHVar10 = (HashedString*)graphics::operator*((graphics*)0);
            this_04->SetShaderConstMatrix4(pHVar10, 1, (Matrix44T*)(param_1 + 112), 0);
            DebugReturn::SetShaderConstants(this_04);
            SetPipelineState();
            this_08 = (AnimationDescriptor*)(*(InputAssemblerState**)(param_1 + 184))->GetIndexBuffer();
            if (this_08 == (AnimationDescriptor*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("pIndexBuffer != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "water/WaterPatchRenderer.cpp",
                          140, (char*)0);
            }
            uVar5 = this_08->GetLoopLength();
            param_2->DrawIndexedPrimitives(&local_80, 4, uVar5, 0);
            local_80.~DrawCallState();
        }
    }

    // 0x1007a2c10, 384 bytes, placed by class name
    // WaterPatchRenderer::SetEffectParameters(RenderPassEffect const&, EffectManager&, WaterParameters const&, SceneViewData const&)
    void WaterPatchRenderer::SetEffectParameters(RenderPassEffect* param_1, EffectManager* param_2,
                                                 WaterParameters* param_3, SceneViewData* param_4) {
        char cVar1;
        PlanarReflection* this_00;
        WaterNormalMapsShaderEffect* this_01;
        SunlightDirectLighting* pSVar2;
        Matrix44T* pMVar3;
        Caustics* this_02;
        undefined8* puVar4;
        float fVar5;

        puVar4 = &param_1->field_16;
        cVar1 = puVar4->Contains(107);
        if (cVar1 != '\0') {
            this_00 = (PlanarReflection*)EffectManager::GetEffect<SunlightDirectLighting>(param_2, 107);
            fVar5 = (float)param_3->GetReflectionStrength();
            this_00->SetWaterReflectionStrength(fVar5);
        }
        cVar1 = puVar4->Contains(99);
        if (cVar1 != '\0') {
            this_01 = (WaterNormalMapsShaderEffect*)EffectManager::GetEffect<SunlightDirectLighting>(param_2, 99);
            this_01->SetParameters(param_3, (array*)&field_8);
        }
        cVar1 = puVar4->Contains(101);
        if (cVar1 != '\0') {
            pSVar2 = EffectManager::GetEffect<SunlightDirectLighting>(param_2, 101);
            pMVar3 = (Matrix44T*)param_4->GetImmediateThreadPool();
            pSVar2->SetParameters(param_3, pMVar3);
        }
        cVar1 = puVar4->Contains(44);
        if (cVar1 != '\0') {
            this_02 = (Caustics*)EffectManager::GetEffect<SunlightDirectLighting>(param_2, 44);
            this_02->SetParameters(param_3);
        }
        cVar1 = puVar4->Contains(102);
        if (cVar1 != '\0') {
            pSVar2 = EffectManager::GetEffect<SunlightDirectLighting>(param_2, 102);
            pSVar2->SetParameters(param_3, field_32);
        }
        cVar1 = puVar4->Contains(100);
        if (cVar1 != '\0') {
            pSVar2 = EffectManager::GetEffect<SunlightDirectLighting>(param_2, 100);
            pSVar2->SetParameters(param_3, field_20);
        }
        cVar1 = puVar4->Contains(98);
        if (cVar1 != '\0') {
            pSVar2 = EffectManager::GetEffect<SunlightDirectLighting>(param_2, 98);
            pSVar2->SetParameters(param_3);
        }
    }

    // 0x1007a2da0, 160 bytes, placed by class name
    // WaterPatchRenderer::SetPipelineState(RenderPassEffect const&, render::DrawCallState&, RenderPassType, bool, WaterPatch_DE const&)
    void WaterPatchRenderer::SetPipelineState(undefined8 param_1_00, long param_1, DrawCallState* param_2, int param_4,
                                              char param_5, long param_6) {
        RenderPipelineState* this;
        long lVar1;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        char cVar2;
        BucketAllocatorEASTL* extraout_RDX;
        DrawCallState* pDVar3;

        cVar2 = ((param_1 + 16))->Contains(0);
        if (cVar2 != '\0') {
            pDVar3 = param_2;
            this = (RenderPipelineState*)param_2->GetRenderPipelineState();
            lVar1 = pDVar3->Instance();
            SetRasteriserState((RasteriserState*)(lVar1 + 1236));
        }
        if ((param_4 != 6) && ((param_5 != '\0' || (param_4 == 5)))) {
            pDVar3 = param_2;
            this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          param_2->GetRenderPipelineState();
            lVar1 = pDVar3->Instance();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                       2>::compressed_pair_imp(this_00, (EntityHighlight**)(lVar1 + 1524),
                                                               extraout_RDX);
        }
        param_2->SetInputAssemblerState(*(InputAssemblerState**)(param_6 + 184));
    }

    // 0x1007a3b80, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.8
    void ___cxx_global_var_init_8() {
        new (&WaterPatchRenderer::m_vertexDeclaration) render::VertexDeclaration();
        ___cxa_atexit(render::VertexDeclaration::~VertexDeclaration, &WaterPatchRenderer::m_vertexDeclaration,
                      4294967296);
    }

} // namespace jag::graphics
