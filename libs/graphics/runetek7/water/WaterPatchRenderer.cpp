// libs/graphics/runetek7/water/WaterPatchRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "WaterPatchRenderer.h"

namespace jag::graphics {
    // 0x1039bd0e8, set at startup by ___cxx_global_var_init.8
    render::VertexDeclaration WaterPatchRenderer::m_vertexDeclaration = VertexDeclaration();

    // 0x1007a25d0
    WaterPatchRenderer::WaterPatchRenderer()
        : DrawableRenderer(), field_8(4294967295), field_12(4294967295), field_16(4294967295), field_20(4294967295),
          field_20(4294967295), field_24(4294967295), field_28(4294967295), field_32(4294967295) {}

    // 0x1007a2610
    WaterPatchRenderer::~WaterPatchRenderer() {
        Destroy();
    }

    // 0x1007a2650
    void WaterPatchRenderer::Destroy() {
        DestroyRenderingResources();
    }

    // 0x1007a2690
    uint64_t WaterPatchRenderer::Initialise(RT7Core& rt7Core) {
        unsigned int uVar2 = rt7Core.GetPSTextureSlotManager();
        uint32_t uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        uint32_t* puVar5 = &field_8;
        uint32_t* puVar4 = (uint32_t*)(*puVar5)[0];
        *puVar4 = uVar3;
        uVar2 = rt7Core.GetPSTextureSlotManager();
        uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        puVar4 = (uint32_t*)(*puVar5)[1];
        *puVar4 = uVar3;
        uVar2 = rt7Core.GetPSTextureSlotManager();
        uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        puVar5 = (uint32_t*)(*puVar5)[2];
        *puVar5 = uVar3;
        uVar2 = rt7Core.GetPSTextureSlotManager();
        uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        field_20 = uVar3;
        uVar2 = rt7Core.GetPSTextureSlotManager();
        uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        field_24 = uVar3;
        uVar2 = rt7Core.GetPSTextureSlotManager();
        uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        field_32 = uVar3;
        if (rt7Core.GetEffectManager()->GetEffect<SunlightDirectLighting>(44)->IsValidValue() != '\0') {
            uVar2 = rt7Core.GetPSTextureSlotManager();
            uVar3 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
            field_28 = uVar3;
        }
        CreateRenderingResources();
        return 1;
    }

    // 0x1007a27c0
    void WaterPatchRenderer::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10;

        InitialiseVertexDeclaration();
        return 1;
    }

    // 0x1007a27f0
    void WaterPatchRenderer::DestroyRenderingResources() {
        Instance()->Unregister(&m_vertexDeclaration);
        m_vertexDeclaration.Destroy();
    }

    // 0x1007a2820
    void WaterPatchRenderer::InitialiseVertexDeclaration() {
        VertexElementDesc* vertexElementDesc;

        auto pSVar2 = graphics::operator*(258);
        VertexElementDesc local_130 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(235);
        VertexElementDesc local_108 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(259);
        VertexElementDesc local_e0 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(260);
        VertexElementDesc local_b8 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(261);
        VertexElementDesc local_90 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(262);
        VertexElementDesc local_68 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(263);
        VertexElementDesc local_40 = pSVar2->GetVertexElementDesc(0);
        vertexElementDesc = (VertexElementDesc*)local_130.data();
        m_vertexDeclaration.Create(vertexElementDesc, 7, nullptr, 0);
        Singleton<render::VertexDeclarationManager>* this_00 =
            (Singleton<render::VertexDeclarationManager>*)&m_vertexDeclaration;
        if (m_vertexDeclaration.GetVertexStride(0) != 32) {
            LogAssert("m_vertexDeclaration.GetVertexStride() == sizeof(WaterPatchVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/water/"
                      "WaterPatchRenderer.cpp",
                      191, nullptr);
        }
        this_00->Instance()->Register(&m_vertexDeclaration);
    }

    // 0x1007a2970
    void WaterPatchRenderer::Render(const WaterPatch_DE& waterPatch_DE, render::RenderContext& renderContext,
                                    const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                                    RenderPassType renderPassType, EffectManager& effectManager) {
        int arg3;
        unsigned int uVar3;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        ShaderProgram* this_03;
        RenderPipelineState* pRVar4;
        WaterParameters* waterParameters;
        LoginManager* this_05;
        CausticsManager* this_06;
        Texture* pTVar5;
        HashedString* pHVar6;
        AnimationDescriptor* this_07;
        uint32_t in_register_00000084;
        EffectManager* in_stack_00000008;
        EffectList in_stack_ffffffffffffff78;
        DrawCallState local_80;

        SceneViewData* sceneViewData_00 =
            (SceneViewData*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)renderPassType);
        WaterPatch_DE* local_50 = waterPatch_DE;
        bool local_31 = (bool)in_stack_00000008->IsEnabled(108);
        WaterMaterial* waterMaterial = *(WaterMaterial**)(renderContext.m_immediateContext + 160);
        RenderPassEffect* this_00 =
            (RenderPassEffect*)waterMaterial->GetRenderPassEffect((RenderPassType)effectManager);
        midiPlayerMainThread =
            (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_00->GetShader(*sceneViewData_00);
        if (!*midiPlayerMainThread != nullptr) {
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/water/"
                      "WaterPatchRenderer.cpp",
                      95, "No shader program available for waterMaterial render pass");
        }
        auto this_01 = this_00->GetShader(*sceneViewData_00);
        Shader* this_02 = (Shader*)**this_01;
        if (this_02->IsReady()) {
            local_80 = render::DrawCallState(sceneViewData);
            this_03 = this_02->GetProgram();
            this_03->GetNativeShaderProgram();
            ((Layout*)this_02->second())->SSOBeginPtr();
            pRVar4 = (RenderPipelineState*)local_80.GetRenderPipelineState();
            pRVar4->SetShaderProgram(this_03);
            waterParameters = waterMaterial->GetWaterParameters();
            SetEffectParameters((WaterPatchRenderer*)local_50, this_00, in_stack_00000008, waterParameters,
                                sceneViewData_00);
            in_stack_00000008->SetShaderConstants(local_80, drawCallState, *this_02, in_stack_ffffffffffffff78);
            if ((RenderPassType)effectManager == 7) {
                this_05 = (LoginManager*)in_stack_00000008->GetEffect<SunlightDirectLighting>(44);
                this_06 = (CausticsManager*)this_05->GetDevCredentialsOutputDirectory();
                if (!(this_00->field_16.Contains(46))) {
                    pTVar5 = (Texture*)this_06->GetCausticsIntegerMapAtlas();
                    drawCallState.BindImageTexture(0, pTVar5, 0, 3);
                } else {
                    pRVar4 = (RenderPipelineState*)local_80.GetRenderPipelineState();
                    uVar3 = *(unsigned int*)&local_50->field_28;
                    pTVar5 = (Texture*)this_06->GetCausticsIntegerMapAtlas();
                    pHVar6 = (HashedString*)graphics::operator*(70);
                    arg3 = this_03->GetConstIndex(*pHVar6);
                    pRVar4->SetPSTextureSamplerPair(uVar3, pTVar5, arg3, nullptr, false);
                }
            }
            pHVar6 = (HashedString*)graphics::operator*(0);
            this_03->SetShaderConstMatrix4(pHVar6, 1, (renderContext.m_immediateContext + 96), 0);
            DebugReturn::SetShaderConstants(*this_03);
            SetPipelineState((WaterPatchRenderer*)this_03, this_00, &local_80, (RenderPassType)effectManager, local_31,
                             (WaterPatch_DE*)renderContext);
            this_07 = (AnimationDescriptor*)(*(InputAssemblerState**)(renderContext.m_immediateContext + 168))
                          ->GetIndexBuffer();
            if (this_07 == nullptr) {
                LogAssert("pIndexBuffer != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "water/WaterPatchRenderer.cpp",
                          140, nullptr);
            }
            uVar3 = this_07->GetLoopLength();
            drawCallState.DrawIndexedPrimitives(&local_80, 4, uVar3, 0);
        }
    }

    // 0x1007a2c10
    void WaterPatchRenderer::SetEffectParameters(const RenderPassEffect& renderPassEffect, EffectManager& effectManager,
                                                 const WaterParameters& waterParameters,
                                                 const SceneViewData& sceneViewData) {
        FogEffect* pFVar2;
        Matrix44T<float>* matrix44;

        uint8_t* this_03 = &renderPassEffect.field_16;
        if (this_03->Contains(107)) {
            ((PlanarReflection*)effectManager.GetEffect<SunlightDirectLighting>(107))
                ->SetWaterReflectionStrength((float)waterParameters.GetReflectionStrength());
        }
        if (this_03->Contains(99)) {
            ((WaterNormalMapsShaderEffect*)effectManager.GetEffect<SunlightDirectLighting>(99))
                ->SetParameters(waterParameters, field_8);
        }
        if (this_03->Contains(101)) {
            pFVar2 = effectManager.GetEffect<SunlightDirectLighting>(101);
            matrix44 = (Matrix44T<float>*)sceneViewData.GetImmediateThreadPool();
            pFVar2->SetParameters(waterParameters, *matrix44);
        }
        if (this_03->Contains(44)) {
            ((Caustics*)effectManager.GetEffect<SunlightDirectLighting>(44))->SetParameters(waterParameters);
        }
        if (this_03->Contains(102)) {
            pFVar2 = effectManager.GetEffect<SunlightDirectLighting>(102);
            pFVar2->SetParameters(waterParameters, field_32);
        }
        if (this_03->Contains(100)) {
            pFVar2 = effectManager.GetEffect<SunlightDirectLighting>(100);
            pFVar2->SetParameters(waterParameters, field_20);
        }
        if (this_03->Contains(98)) {
            pFVar2 = effectManager.GetEffect<SunlightDirectLighting>(98);
            pFVar2->SetParameters(waterParameters);
        }
    }

    // 0x1007a2da0
    void WaterPatchRenderer::SetPipelineState(const RenderPassEffect& renderPassEffect,
                                              render::DrawCallState& drawCallState, RenderPassType renderPassType,
                                              bool arg4, const WaterPatch_DE& waterPatch_DE) {
        RenderPipelineState* this_00;
        long lVar1;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        DrawCallState* pDVar3;

        if (renderPassEffect.field_16.Contains(0) != '\0') {
            pDVar3 = drawCallState;
            this_00 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            lVar1 = pDVar3->Instance();
            this_00->SetRasteriserState((lVar1 + 1236));
        }
        if ((renderPassType != 6) && ((arg4 || (renderPassType == 5)))) {
            pDVar3 = drawCallState;
            this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          drawCallState.GetRenderPipelineState();
            lVar1 = pDVar3->Instance();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                compressed_pair_imp(this_01, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar1 + 1524));
        }
        drawCallState.SetInputAssemblerState(waterPatch_DE.field_184);
    }

} // namespace jag::graphics
