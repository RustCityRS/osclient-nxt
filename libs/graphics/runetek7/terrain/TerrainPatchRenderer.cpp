// libs/graphics/runetek7/terrain/TerrainPatchRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TerrainPatchRenderer.h"

namespace jag::graphics {
    // 0x1039bd258, set at startup by ___cxx_global_var_init.164
    render::VertexDeclaration TerrainPatchRenderer::m_vertexDecl = VertexDeclaration();

    // 0x1039bd2b8, set at startup by ___cxx_global_var_init.165
    render::VertexDeclaration TerrainPatchRenderer::m_vertexDeclPos = VertexDeclaration();

    // 0x1007b8ae0
    TerrainPatchRenderer::TerrainPatchRenderer() : DrawableRenderer(), field_8(4294967295), field_12(4294967295) {}

    // 0x1007b8b20
    TerrainPatchRenderer::~TerrainPatchRenderer() {
        Destroy();
    }

    // 0x1007b8b60
    void TerrainPatchRenderer::Destroy() {
        DestroyRenderingResources();
    }

    // 0x1007b8ba0
    uint32_t TerrainPatchRenderer::Initialise(RT7Core& rt7Core) {
        unsigned int uVar1 = rt7Core.GetPSTextureSlotManager();
        uint32_t uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_8 = uVar2;
        uVar1 = rt7Core.GetPSTextureSlotManager();
        uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_12 = uVar2;
        CreateRenderingResources();
        return 1;
    }

    // 0x1007b8bf0
    void TerrainPatchRenderer::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10;

        InitialiseVertexDeclarations();
        return 1;
    }

    // 0x1007b8c20
    void TerrainPatchRenderer::DestroyRenderingResources() {
        auto pVVar1 = Instance();
        pVVar1->Unregister(&m_vertexDecl);
        Singleton<render::VertexDeclarationManager>* this_00 =
            (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        m_vertexDecl.Destroy();
        pVVar1 = this_00->Instance();
        pVVar1->Unregister(&m_vertexDeclPos);
        m_vertexDeclPos.Destroy();
    }

    // 0x1007b8c70
    void TerrainPatchRenderer::Render(const TerrainPatch_DE& terrainPatch_DE, render::RenderContext& renderContext,
                                      const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                                      RenderPassType renderPassType, EffectManager& effectManager) {
        uint8_t* puVar1;
        SceneViewData sceneViewData;
        TerrainPatch* pTVar2;
        ShaderProgram* shaderProgram;
        int iVar5;
        unsigned int arg3;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        RenderPipelineState* pRVar6;
        HashedString* pHVar7;
        FogEffect* pFVar8;
        long lVar9;
        TextureAtlasReference* textureAtlasReference;
        WorldmapAreaMetadata* this_04;
        Vector4T<float>* vector4;
        uint32_t* puVar10;
        float* pfVar11;
        AlphaMode* alphaMode;
        InputAssemblerState* inputAssemblerState;
        char* pcVar12;
        uint8_t* pbVar13;
        uint8_t* pbVar14;
        Layout* pLVar15;
        int* arg4;
        int* arg5;
        DrawCallState* pDVar16;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_06;
        uint32_t in_register_00000084;
        float arg2;
        uint8_t auVar17[16];
        EffectManager* in_stack_00000008;
        DrawCallState aDStack_2128;
        EffectList in_stack_fffffffffffff6d8;
        uint8_t local_8f8[16];
        uint8_t local_8e8[16];
        float local_89c;
        ShaderProgram* local_890;
        float local_888[532];

        TerrainPatch* local_898 = *(TerrainPatch**)(renderContext.m_immediateContext + 168);
        TerrainPatch_DE* local_8c8 = terrainPatch_DE;
        if (local_898 == nullptr) {
            LogAssert("pTerrainPatch != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatchRenderer.cpp",
                      55, nullptr);
        }
        auto local_8a8 = local_898->GetMaterial();
        auto this_00 = local_8a8->GetRenderPassEffect((RenderPassType)effectManager);
        SceneViewData* local_8d8 = (SceneViewData*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)renderPassType);
        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_00->GetShader(
            *((SceneViewData*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)renderPassType)));
        if (!*midiPlayerMainThread != nullptr) {
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatchRenderer.cpp",
                      60, "No shader program available for sceneViewData render pass");
        }
        auto this_01 = this_00->GetShader(*local_8d8);
        Shader* this_02 = (Shader*)**this_01;
        if (this_02->IsReady()) {
            new (&aDStack_2128 + 128) render::DrawCallState(sceneViewData);
            local_890 = this_02->GetProgram();
            local_890->GetNativeShaderProgram();
            ((Layout*)this_02->second())->SSOBeginPtr();
            pRVar6 = (RenderPipelineState*)(&aDStack_2128 + 128)->GetRenderPipelineState();
            shaderProgram = local_890;
            pRVar6->SetShaderProgram(local_890);
            DebugReturn::SetShaderConstants(*shaderProgram);
            pbVar13 = &this_00->field_16;
            if (pbVar13->Contains(54)) {
                local_888[0] = (float)FrameTime::GetSecondsSinceProgramStart();
                local_8f8._0_8_ = local_8f8._0_8_ & 18446744069414584320;
                local_8e8._0_4_ = 1199570688;
                local_89c = math::Wrap<float>(*local_888, *local_8f8, *local_8e8);
                pHVar7 = (HashedString*)graphics::operator*(24);
                local_890->SetShaderConstFloat1(pHVar7, local_89c);
                pFVar8 = in_stack_00000008->GetEffect<SunlightDirectLighting>(54);
                iVar5 = local_8a8->GetEndPosition();
                pFVar8->SetViewportMapID(iVar5);
            }
            in_stack_00000008->SetShaderConstants(*(&aDStack_2128 + 128), drawCallState, *this_02,
                                                  in_stack_fffffffffffff6d8);
            lVar9 = local_8a8->GetTextureAtlasReference();
            if (lVar9 != 0) {
                if (pbVar13->Contains(63)) {
                    if (in_stack_00000008->IsEnabled(27)) {
                        lVar9 = local_8a8->GetTextureAtlasReference();
                        if (lVar9 == 0) {
                            LogAssert("material.GetTextureAtlasReference() != nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/terrain/TerrainPatchRenderer.cpp",
                                      89, nullptr);
                        }
                        textureAtlasReference = (TextureAtlasReference*)local_8a8->GetTextureAtlasReference();
                        TextureAtlasing::SetShaderConstants(*(&aDStack_2128 + 128), drawCallState, *this_02,
                                                            *textureAtlasReference, *(int*)&local_8c8->field_8,
                                                            *(int*)&local_8c8->field_12);
                        pHVar7 = (HashedString*)graphics::operator*(117);
                        local_890->SetShaderConstFloat1(pHVar7, (float)local_898->m_gridSize);
                    }
                }
            }
            pHVar7 = (HashedString*)graphics::operator*(116);
            if (!(in_stack_00000008->IsEnabled(94))) {
                arg2 = 0.0;
            } else {
                arg2 = *(float*)(renderContext.m_immediateContext + 160);
            }
            local_890->SetShaderConstFloat1(pHVar7, arg2);
            if (pbVar13->Contains(21)) {
                if (!(in_stack_00000008->IsEnabled(40))) {
                    local_898->field_13120.SetShaderConstants(*this_02);
                } else {
                    this_02->SetIdentityShaderConstants(*40);
                }
            }
            if (pbVar13->Contains(26)) {
                this_04 = (WorldmapAreaMetadata*)local_898->field_13232.end();
                if (this_04 != nullptr) {
                    if (this_04->IsReady()) {
                        this_04->SetLevel(local_898->field_600);
                        vector4 = (Vector4T<float>*)this_04->GetOrigin();
                        this_04->SetFineCoordBounds(*vector4);
                        (**(void (**)(...))(*(long*)this_04 + 56))(this_04, &aDStack_2128 + 128,
                                                                   (RenderContext*)drawCallState, this_02);
                    }
                }
            }
            if (!(IsShadowPass((RenderPassType)effectManager))) {
                pHVar7 = (HashedString*)graphics::operator*(0);
                local_890->SetShaderConstMatrix4(pHVar7, 1, (renderContext.m_immediateContext + 96), 0);
            } else {
                pFVar8 = in_stack_00000008->GetEffect<SunlightDirectLighting>(79);
                puVar1 = renderContext.m_immediateContext;
                ((RT7Core*)pFVar8->GetDefaultValue())->GetImmediateThreadPool();
                *local_888*(*((puVar1 + 96)));
                pHVar7 = (HashedString*)graphics::operator*(0);
                local_890->SetShaderConstMatrix4(pHVar7, 1, local_888, 0);
            }
            if (pbVar13->Contains(116)) {
                pHVar7 = (HashedString*)graphics::operator*(205);
                sceneViewData = local_8d8;
                puVar10 = (uint32_t*)local_8d8->GetStippleNearClipParams();
                local_8a8 = (ParticleMaterial*)(((uint64_t)local_8a8._4_4_ << 32) | (uint32_t)(*puVar10));
                lVar9 = sceneViewData.GetStippleNearClipParams();
                local_8c8 =
                    (TerrainPatch_DE*)(((uint64_t)local_8c8._4_4_ << 32) | (uint32_t)(1.0 / *(float*)(lVar9 + 4)));
                pfVar11 = (float*)sceneViewData.GetStippleFarClipParams();
                local_89c = *pfVar11;
                lVar9 = sceneViewData.GetStippleFarClipParams();
                local_890->SetShaderConstFloat4(pHVar7, local_8a8._0_4_, local_8c8._0_4_, local_89c,
                                                1.0 / *(float*)(lVar9 + 4));
            }
            if (IsShadowPass((RenderPassType)effectManager)) {
                if (local_898->field_600 == 0) {
                    pDVar16 = &aDStack_2128 + 128;
                    pRVar6 = (RenderPipelineState*)pDVar16->GetRenderPipelineState();
                    lVar9 = pDVar16->Instance();
                    alphaMode = (AlphaMode*)(lVar9 + 1272);
                } else {
                    pDVar16 = &aDStack_2128 + 128;
                    pRVar6 = (RenderPipelineState*)pDVar16->GetRenderPipelineState();
                    lVar9 = pDVar16->Instance();
                    alphaMode = (AlphaMode*)(lVar9 + 1200);
                }
                pRVar6->SetRasteriserState(alphaMode);
            }
            if (pbVar13->Contains(0)) {
                pDVar16 = &aDStack_2128 + 128;
                pRVar6 = (RenderPipelineState*)pDVar16->GetRenderPipelineState();
                lVar9 = pDVar16->Instance();
                pRVar6->SetRasteriserState((lVar9 + 1236));
            }
            inputAssemblerState =
                (InputAssemblerState*)((renderContext.m_immediateContext + 176))->GetInputAssemblerState();
            (&aDStack_2128 + 128)->SetInputAssemblerState(inputAssemblerState);
            this_06 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(renderContext
                                                                                                  .m_immediateContext +
                                                                                              224);
            if (!(this_06->empty())) {
                new (local_888) render::FixedPrimitiveBatchData<256ul>();
                pTVar2 = local_898;
                pcVar12 = (char*)this_06->back();
                if (*pcVar12 != '\0') {
                    pcVar12 = (char*)this_06->front();
                    if (*pcVar12 != '\0') {
                        LogAssert("chunkIDList.back() == 0 || chunkIDList.front() == 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/terrain/TerrainPatchRenderer.cpp",
                                  190, nullptr);
                    }
                }
                pbVar13 = (uint8_t*)this_06->HeapBeginPtr();
                pbVar14 = (uint8_t*)this_06->end();
                if (pbVar13 != pbVar14) {
                    do {
                        auVar17 = pTVar2->field_632.find((unsigned int)*pbVar13);
                        local_8f8 = auVar17;
                        auVar17 = pTVar2->field_632.end();
                        local_8e8 = auVar17;
                        if (*local_8f8 != *local_8e8) {
                            lVar9 = local_8f8->HeapBeginPtr();
                            iVar5 = *(int*)(lVar9 + 4);
                            lVar9 = local_8f8->HeapBeginPtr();
                            if (*(int*)(lVar9 + 12) != 0) {
                                local_888->AddPrimitiveBatch(iVar5, *(int*)(lVar9 + 12) * 3);
                            }
                        }
                        pbVar13 = pbVar13 + 1;
                    } while (pbVar13 != pbVar14);
                }
                arg3 = local_888->GetBatchCount();
                pLVar15 = (Layout*)local_888->SSOBeginPtr();
                arg4 = (int*)pLVar15->HeapBeginPtr();
                pLVar15 = (Layout*)local_888->GetVertexCount();
                arg5 = (int*)pLVar15->HeapBeginPtr();
                drawCallState.DrawMultiPrimitives(*(&aDStack_2128 + 128), 4, arg3, arg4, arg5);
            } else {
                iVar5 = local_898->GetFaceCount();
                drawCallState.DrawPrimitives(*(&aDStack_2128 + 128), 4, 0, iVar5 * 3);
            }
            (&aDStack_2128 + 128)->~DrawCallState();
        }
    }

    // 0x1007b9670
    void TerrainPatchRenderer::InitialiseVertexDeclarations() {
        auto pSVar2 = graphics::operator*(209);
        VertexElementDesc local_1d0 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(264);
        VertexElementDesc local_1a8 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(234);
        VertexElementDesc local_180 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(230);
        VertexElementDesc local_158 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(225);
        VertexElementDesc local_130 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(242);
        VertexElementDesc local_108 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(235);
        VertexElementDesc local_e0 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(243);
        VertexElementDesc local_b8 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(251);
        VertexElementDesc local_90 = pSVar2->GetVertexElementDesc(0);
        auto pVVar3 = local_1d0.data();
        m_vertexDecl.Create(pVVar3, 9, nullptr, 0);
        Singleton<render::VertexDeclarationManager>* pSVar5 =
            (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        int iVar1 = m_vertexDecl.GetVertexStride(0);
        if (iVar1 != 36) {
            LogAssert("m_vertexDecl.GetVertexStride() == sizeof(TerrainPatchVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatchRenderer.cpp",
                      263, nullptr);
        }
        auto pVVar4 = pSVar5->Instance();
        pVVar4->Register(&m_vertexDecl);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(209);
        VertexElementDesc local_68 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(264);
        VertexElementDesc local_40 = pSVar2->GetVertexElementDesc(0);
        pVVar3 = (VertexElementDesc*)local_68.data();
        m_vertexDeclPos.Create(pVVar3, 2, nullptr, 0);
        pSVar5 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDeclPos;
        iVar1 = m_vertexDeclPos.GetVertexStride(0);
        if (iVar1 != 8) {
            LogAssert("m_vertexDeclPos.GetVertexStride() == sizeof(TerrainPatchVertexPos)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatchRenderer.cpp",
                      276, nullptr);
        }
        pVVar4 = pSVar5->Instance();
        pVVar4->Register(&m_vertexDeclPos);
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1007b9490
    float Wrap<float>(const float& arg1, const float& arg2, const float& arg3) {
        float fVar2 = arg1;
        if (fVar2 < (float)arg2) {
            do {
                fVar2 = (fVar2 - (float)arg2) + arg3;
            } while (fVar2 < (float)arg2);
        }
        for (; arg3 <= fVar2; fVar2 = (fVar2 + (float)arg2) - arg3) {
        }
        return fVar2;
    }

} // namespace jag::math
