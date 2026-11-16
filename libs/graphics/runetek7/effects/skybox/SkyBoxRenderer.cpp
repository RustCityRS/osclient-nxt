// libs/graphics/runetek7/effects/skybox/SkyBoxRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SkyBoxRenderer.h"

namespace jag::graphics {
    // 0x103bc0490, set at startup by ___cxx_global_var_init.48
    render::VertexDeclaration SkyBoxRenderer::m_vertexDecl = VertexDeclaration();

    // 0x100414cb0: SkyBoxRenderer::GetDepthStencilState() const has the same machine code as math::Transitionable<IrradianceSHCoefConsts>::GetEndValue()

    // 0x10091c1f0
    void SkyBoxRenderer::Render(const SkyBox_DE& skyBox_DE, render::RenderContext& renderContext,
                                const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                                RenderPassType renderPassType, EffectManager& effectManager) {
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>* fixed_hashtable_allocator;
        uint8_t bVar4;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        Texture* pTVar9;
        shared_ptr* this_05;
        shared_ptr* psVar10;
        uint32_t in_register_00000084;
        EffectManager* in_stack_00000008;
        EffectList in_stack_ffffffffffffff68;

        SceneViewData* sceneViewData_00 =
            (SceneViewData*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)renderPassType);
        fixed_hashtable_allocator =
            *(fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>**)(renderContext.m_immediateContext + 88);
        SkyBoxRenderer* local_50 = (SkyBoxRenderer*)skyBox_DE;
        ShaderProgram* local_38 = (ShaderProgram*)sceneViewData;
        if (fixed_hashtable_allocator == nullptr) {
            LogAssert("pSkyBox != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "skybox/SkyBoxRenderer.cpp",
                      75, nullptr);
        }
        shared_ptr* local_40 = (shared_ptr*)(fixed_hashtable_allocator + 576);
        bool cVar2 = shared_ptr::operator_cast_to_bool(local_40);
        if ((!cVar2) && (cVar2 = ((fixed_hashtable_allocator + 592))->operator_cast_to_bool(), !cVar2)) {
            return;
        }
        auto this_00 = fixed_hashtable_allocator->get_overflow_allocator();
        auto this_01 = this_00->GetRenderPassEffect((RenderPassType)effectManager);
        midiPlayerMainThread =
            (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_01->GetShader(*sceneViewData_00);
        if (!*midiPlayerMainThread != nullptr) {
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "skybox/SkyBoxRenderer.cpp",
                      87, "No shader program available for fixed_hashtable_allocator render pass");
        }
        auto this_02 = this_01->GetShader(*sceneViewData_00);
        Shader* this_03 = (Shader*)**this_02;
        cVar2 = this_03->IsReady();
        if (!cVar2) {
            return;
        }
        DrawCallState local_90(*local_38);
        local_38 = this_03->GetProgram();
        local_38->GetNativeShaderProgram();
        ((Layout*)this_03->second())->SSOBeginPtr();
        auto pRVar6 = local_90.GetRenderPipelineState();
        pRVar6->SetShaderProgram(local_38);
        long lVar7 = sceneViewData_00->field_432[0];
        int iVar5 = *(int*)(lVar7 + 8);
        lVar7 = sceneViewData_00->field_432[0];
        UpdateVertexBuffer(local_50, iVar5, *(int*)(lVar7 + 12), sceneViewData_00);
        in_stack_00000008->SetShaderConstants(local_90, drawCallState, *this_03, in_stack_ffffffffffffff68);
        auto pHVar8 = graphics::operator*(4);
        local_38->SetShaderConstMatrix4(pHVar8, 1, &local_50->field_16, 1);
        cVar2 = shared_ptr::operator_cast_to_bool(local_40);
        if (cVar2) {
            pTVar9 = (Texture*)(*local_40).operator->();
            cVar2 = pTVar9->IsCreated();
            if (cVar2)
                goto LAB_10091c417;
        }
        shared_ptr* psVar1 = (shared_ptr*)(fixed_hashtable_allocator + 592);
        cVar2 = shared_ptr::operator_cast_to_bool(psVar1);
        if (cVar2) {
            pTVar9 = (Texture*)(*psVar1).operator->();
            cVar2 = pTVar9->IsCreated();
            if (cVar2) {
            LAB_10091c417:
                pHVar8 = (HashedString*)graphics::operator*(95);
                bVar4 = shared_ptr::operator_cast_to_bool(local_40);
                local_38->SetShaderConstInt1(pHVar8, (unsigned int)bVar4);
                pRVar6 = (RenderPipelineState*)local_90.GetRenderPipelineState();
                psVar10 = local_40;
                cVar2 = shared_ptr::operator_cast_to_bool(local_40);
                psVar1 = (shared_ptr*)(fixed_hashtable_allocator + 592);
                this_05 = psVar1;
                if (cVar2) {
                    this_05 = psVar10;
                }
                pTVar9 = (Texture*)this_05->end();
                pHVar8 = (HashedString*)graphics::operator*(92);
                iVar5 = local_38->GetConstIndex(*pHVar8);
                pRVar6->SetPSTextureSamplerPair(0, pTVar9, iVar5, nullptr, false);
                pHVar8 = (HashedString*)graphics::operator*(96);
                bVar4 = shared_ptr::operator_cast_to_bool(psVar1);
                local_38->SetShaderConstInt1(pHVar8, (unsigned int)bVar4);
                pRVar6 = (RenderPipelineState*)local_90.GetRenderPipelineState();
                cVar2 = shared_ptr::operator_cast_to_bool(psVar1);
                psVar10 = local_40;
                if (cVar2) {
                    psVar10 = psVar1;
                }
                pTVar9 = (Texture*)psVar10->end();
                pHVar8 = (HashedString*)graphics::operator*(93);
                iVar5 = local_38->GetConstIndex(*pHVar8);
                pRVar6->SetPSTextureSamplerPair(1, pTVar9, iVar5, nullptr, false);
                pHVar8 = (HashedString*)graphics::operator*(94);
                local_38->SetShaderConstFloat1(pHVar8, *(float*)(renderContext.m_immediateContext + 96));
                pHVar8 = (HashedString*)graphics::operator*(97);
                local_38->SetShaderConstFloat1(pHVar8, *(float*)(fixed_hashtable_allocator + 720));
                local_90.SetInputAssemblerState(local_50->field_312);
                drawCallState.DrawPrimitives(local_90, 5, 0, 4);
                return;
            }
        }
        LogAssert("(pSkyBox->m_currentMap && pSkyBox->m_currentMap->IsCreated()) || (pSkyBox->m_targetMap && "
                  "pSkyBox->m_targetMap->IsCreated())",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                  "skybox/SkyBoxRenderer.cpp",
                  106, nullptr);
    }

    // 0x10091d450
    SkyBoxRenderer::SkyBoxRenderer() : DrawableRenderer() {
        new (field_312) render::InputAssemblerState();
    }

    // 0x10091d540
    SkyBoxRenderer::~SkyBoxRenderer() {
        Destroy();
        field_312->~InputAssemblerState();
        field_232.~VertexBuffer();
        field_208.~Array();
        field_144.~DepthStencilState();
    }

    // 0x10091d5e0
    void SkyBoxRenderer::Destroy() {
        DestroyRenderingResources();
    }

    // 0x10091d620
    uint8_t SkyBoxRenderer::Initialise(RT7Core& rt7Core) {
        CreateRenderingResources();
        return 1;
    }

    // 0x10091d630
    uint64_t SkyBoxRenderer::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_28;

        InitialiseVertexDeclaration();
        field_208.set_max_size(4, 0);
        auto arg3 = field_208.data();
        field_232.Create(128, 1, arg3);
        field_312->SetVertexStreamData(&m_vertexDecl, &field_232);
        Desc local_60;
        local_60.field_0 = '\x01';
        local_60.field_2 = '\0';
        local_60.field_12 = 515;
        field_144.Create(local_60);
        return 1;
    }

    // 0x10091d6f0
    void SkyBoxRenderer::DestroyRenderingResources() {
        field_144.Destroy();
        field_312->Destroy();
        Singleton<render::VertexDeclarationManager>* this_01 = (Singleton<render::VertexDeclarationManager>*)&field_232;
        this_01->Destroy();
        this_01->Instance()->Unregister(&m_vertexDecl);
        m_vertexDecl.Destroy();
    }

    // 0x10091d750
    void SkyBoxRenderer::InitialiseVertexDeclaration() {
        VertexElementDesc* vertexElementDesc;

        auto pSVar2 = graphics::operator*(213);
        VertexElementDesc local_90 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(221);
        VertexElementDesc local_68 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(257);
        VertexElementDesc local_40 = pSVar2->GetVertexElementDesc(0);
        vertexElementDesc = (VertexElementDesc*)local_90.data();
        m_vertexDecl.Create(vertexElementDesc, 3, nullptr, 0);
        Singleton<render::VertexDeclarationManager>* this_00 =
            (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        if (m_vertexDecl.GetVertexStride(0) != 32) {
            LogAssert("m_vertexDecl.GetVertexStride() == sizeof(SkyBoxVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "skybox/SkyBoxRenderer.cpp",
                      233, nullptr);
        }
        this_00->Instance()->Register(&m_vertexDecl);
    }

    // 0x10091d990
    void SkyBoxRenderer::UpdateVertexBuffer(int arg1, int arg2, const SceneViewData& sceneViewData) {
        float local_4c = (float)arg1;
        float local_34 = (float)arg2;
        SkyBoxRenderer* local_60 = this;
        math::Matrix44OrthographicLH<float>(field_16, 0.0, local_4c, 0.0, local_34, 0.0, 1.0, 0);
        Vector3T<int> local_70;
        sceneViewData.GetScreen();
        local_118.GetRot();
        Matrix44T<float> local_158(local_118, *PTR_ZERO_100ee66e8);
        Frustum local_118(local_158, field_80);
        Frustum* local_58 = (Frustum*)sceneViewData.m_pViewFrustum;
        uint8_t* this_00 = &field_208;
        Vector2T<float>* pVVar1 = (Vector2T<float>*)(*this_00)[0];
        float fVar5 = local_34;
        pVVar1->Set(0.0, local_34);
        uint64_t local_48 = local_118.GetNearTopLeft();
        float local_40 = fVar5;
        local_70.SetXYZ(local_48);
        long lVar2 = (*this_00)[0];
        float* pfVar3 = &local_70[0];
        float local_38 = *pfVar3;
        pfVar3 = &local_70[1];
        float local_50 = *pfVar3;
        pfVar3 = &local_70[2];
        fVar5 = local_50;
        ((lVar2 + 8))->Set(local_38, local_50, -*pfVar3);
        Frustum* this_01 = local_58;
        local_48 = local_58->GetFarTopLeft();
        local_40 = fVar5;
        local_70.SetXYZ(local_48);
        auto pVVar4 = sceneViewData.SSOBeginPtr();
        local_70 -= *pVVar4;
        local_70 *= 1.0;
        lVar2 = (*this_00)[0];
        pfVar3 = &local_70[0];
        local_38 = *pfVar3;
        pfVar3 = &local_70[1];
        local_50 = *pfVar3;
        pfVar3 = &local_70[2];
        ((lVar2 + 20))->Set(local_38, local_50, *pfVar3);
        pVVar1 = (Vector2T<float>*)(*this_00)[1];
        fVar5 = local_34;
        pVVar1->Set(local_4c, local_34);
        local_48 = local_118.GetNearTopRight();
        local_40 = fVar5;
        local_70.SetXYZ(local_48);
        lVar2 = (*this_00)[1];
        pfVar3 = &local_70[0];
        local_34 = *pfVar3;
        pfVar3 = &local_70[1];
        local_38 = *pfVar3;
        pfVar3 = &local_70[2];
        fVar5 = local_38;
        ((lVar2 + 8))->Set(local_34, local_38, -*pfVar3);
        local_48 = this_01->GetFarTopRight();
        local_40 = fVar5;
        local_70.SetXYZ(local_48);
        pVVar4 = (Vector3T<float>*)sceneViewData.SSOBeginPtr();
        local_70 -= *pVVar4;
        local_70 *= 1.0;
        lVar2 = (*this_00)[1];
        pfVar3 = &local_70[0];
        local_34 = *pfVar3;
        pfVar3 = &local_70[1];
        local_38 = *pfVar3;
        pfVar3 = &local_70[2];
        ((lVar2 + 20))->Set(local_34, local_38, *pfVar3);
        pVVar1 = (Vector2T<float>*)(*this_00)[2];
        uint32_t uVar6 = 0;
        pVVar1->Set(0.0, 0.0);
        local_48 = local_118.GetNearBottomLeft();
        local_40 = (float)uVar6;
        local_70.SetXYZ(local_48);
        lVar2 = (*this_00)[2];
        pfVar3 = &local_70[0];
        local_34 = *pfVar3;
        pfVar3 = &local_70[1];
        local_38 = *pfVar3;
        pfVar3 = &local_70[2];
        fVar5 = local_38;
        ((lVar2 + 8))->Set(local_34, local_38, -*pfVar3);
        local_48 = this_01->GetFarBottomLeft();
        local_40 = fVar5;
        local_70.SetXYZ(local_48);
        pVVar4 = (Vector3T<float>*)sceneViewData.SSOBeginPtr();
        local_70 -= *pVVar4;
        local_70 *= 1.0;
        lVar2 = (*this_00)[2];
        pfVar3 = &local_70[0];
        local_34 = *pfVar3;
        pfVar3 = &local_70[1];
        local_38 = *pfVar3;
        pfVar3 = &local_70[2];
        ((lVar2 + 20))->Set(local_34, local_38, *pfVar3);
        pVVar1 = (Vector2T<float>*)(*this_00)[3];
        uVar6 = 0;
        pVVar1->Set(local_4c, 0.0);
        local_48 = local_118.GetNearBottomRight();
        local_40 = (float)uVar6;
        local_70.SetXYZ(local_48);
        lVar2 = (*this_00)[3];
        pfVar3 = &local_70[0];
        local_4c = *pfVar3;
        pfVar3 = &local_70[1];
        local_34 = *pfVar3;
        pfVar3 = &local_70[2];
        fVar5 = local_34;
        ((lVar2 + 8))->Set(local_4c, local_34, -*pfVar3);
        local_48 = this_01->GetFarBottomRight();
        local_40 = fVar5;
        local_70.SetXYZ(local_48);
        pVVar4 = (Vector3T<float>*)sceneViewData.SSOBeginPtr();
        local_70 -= *pVVar4;
        local_70 *= 1.0;
        lVar2 = (*this_00)[3];
        pfVar3 = &local_70[0];
        local_4c = *pfVar3;
        pfVar3 = &local_70[1];
        local_34 = *pfVar3;
        pfVar3 = &local_70[2];
        ((lVar2 + 20))->Set(local_4c, local_34, *pfVar3);
        uint8_t* this_02 = &local_60->field_232;
        auto arg3 = this_00->data();
        this_02->Update(0, 128, arg3, 0);
    }

} // namespace jag::graphics
