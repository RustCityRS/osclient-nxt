// libs/graphics/runetek7/effects/irradiance/LightProbeRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "LightProbeRenderer.h"

namespace jag::graphics {
    // 0x103bc07c8, set at startup by ___cxx_global_var_init.205
    render::VertexDeclaration LightProbeRenderer::m_vertexDecl = VertexDeclaration();

    // 0x103bc0828
    bool LightProbeRenderer::m_enableResourceRecycling;

    // 0x10092f3d0
    unsigned long LightProbeRenderer::InitialiseLightProbe(LightProbe& lightProbe) {
        unsigned int uVar2;
        shared_ptr<render::BufferedRenderTargets>* bufferedRenderTargets;
        uint8_t* unaff_RBX;
        unsigned long uVar4;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        if (m_enableResourceRecycling != '\0') {
            unaff_RBX = &field_1296;
            if (unaff_RBX->size() == 0) {
                uVar4 = 0;
                goto LAB_10092f4ac;
            }
            bufferedRenderTargets = (shared_ptr<render::BufferedRenderTargets>*)
                eastl::stack<shared_ptr<render::BufferedRenderTargets>,
                             eastl::vector<shared_ptr<render::BufferedRenderTargets>>>::top();
            local_30 = *bufferedRenderTargets;
            eastl::stack<shared_ptr<render::BufferedRenderTargets>,
                         eastl::vector<shared_ptr<render::BufferedRenderTargets>>>::pop();
            if (!(local_30.unique())) {
                LogAssert("renderTargetsResources.unique()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "effects/irradiance/LightProbeRenderer.cpp",
                          165, nullptr);
            }
        }
        if (!(IsLightProbeResourceInitialised(&local_30))) {
            uVar2 = InitialiseLightProbeResources(local_30);
            unaff_RBX = (uint8_t*)(unsigned long)uVar2;
            if ((char)uVar2 == '\0') {
                LogAssert("false",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "effects/irradiance/LightProbeRenderer.cpp",
                          173, "Failed to initialise light probe resources");
            }
        }
        uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        lightProbe.SetRenderingResources(local_30);
    LAB_10092f4ac:
        return uVar4 & 4294967295;
    }

    // 0x100930050
    LightProbeRenderer::LightProbeRenderer(unsigned long arg1)
        : DrawableRenderer(), field_200(30), field_204(30), m_probeEnvMapRes(0), field_272("Texture2D"),
          field_784("TextureCube") {
        ((vector<shared_ptr<render::BufferedRenderTargets>>*)field_1296.SSOBeginPtr())->reserve(arg1);
    }

    // 0x100930280
    LightProbeRenderer::~LightProbeRenderer() {
        Destroy();
        field_1296.~stack();
        field_784.~TextureCube();
        field_272.~Texture2D();
        field_232.~Array();
        field_208.~Array();
        field_112.~IndexBuffer();
        field_32.~VertexBuffer();
        field_8.~Array();
    }

    // 0x100930370
    void LightProbeRenderer::Destroy() {
        DestroyRenderingResources();
    }

    // 0x1009303b0
    void LightProbeRenderer::Initialise(RT7Core& rt7Core) {
        CreateRenderingResources();
    }

    // 0x1009303c0
    uint8_t LightProbeRenderer::CreateRenderingResources() {
        unsigned long uVar9;
        unsigned long uVar10;
        uint8_t local_78[71];

        ((local_78 + 64))->~AutoSingleton();
        InitialiseVertexDeclaration();
        InitialiseSphereVertices();
        int iVar5 = graphicutils::GetSphereVertexCount(field_200, field_204);
        uint8_t bVar1 = field_32.Create(iVar5 * 24, 1, nullptr);
        unsigned int uVar6 = graphicutils::GetSphereTriListIndexCount(field_200, field_204);
        new (local_78) Array<unsigned int>((unsigned long)uVar6);
        unsigned int* arg1 = (unsigned int*)(*local_78)[0];
        graphicutils::CreateSphereTriListIndices<unsigned int>(arg1, 0, field_200, field_204, false);
        auto arg3 = local_78->data();
        uint8_t local_31 = field_112.Create(uVar6 << 2, 0, arg3, 5125);
        m_probeEnvMapRes = 16;
        new (local_78) render::Texture::Desc();
        local_78._0_4_ = m_probeEnvMapRes;
        local_78._12_4_ = 7;
        local_78._4_4_ = local_78._0_4_;
        uint8_t bVar2 = field_784.Create(*local_78);
        Desc* this_02 = (Desc*)local_78;
        new (local_78) render::Texture::Desc();
        local_78._4_4_ = m_probeEnvMapRes;
        local_78._0_4_ = local_78._4_4_ * 6;
        auto this_01 = this_02->Instance();
        iVar5 = render::GetMaxDepthBufferBits(*((RenderDeviceCaps*)this_01->GetOrigin()), 24);
        local_78._12_4_ = render::GetFormatFromDepthStencilBits(iVar5, 0, false);
        uint8_t bVar3 = field_272.Create(*local_78, nullptr, 0);
        uint8_t* this_00 = &field_1296;
        if (this_00->empty() == '\0') {
            LogAssert("m_freeRenderTargetsResources.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbeRenderer.cpp",
                      134, "No resources should be allocated already");
        }
        auto pvVar7 = this_00->SSOBeginPtr();
        if (pvVar7->capacity() == 0) {
            bVar1 = bVar2 & bVar3 & bVar1 & local_31;
        } else {
            uVar10 = 0;
            do {
                new (local_78) shared_ptr();
                bVar1 = InitialiseLightProbeResources(*local_78);
                if (bVar1 == 0) {
                    LogAssert("false",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "effects/irradiance/LightProbeRenderer.cpp",
                              142, "Failed to initialise light probe resources");
                }
                this_00->push(*local_78);
                if (bVar1 == 0) {
                    return 0;
                }
                uVar10 = uVar10 + 1;
                pvVar7 = (vector<math::Rect<int>,
                                 eastl::fixed_vector_allocator<16ul, 12ul, 4ul, 0ul, false, eastl::dummy_allocator>>*)
                             this_00->SSOBeginPtr();
                uVar9 = pvVar7->capacity();
            } while (uVar10 < uVar9);
        }
        return bVar1;
    }

    // 0x100930650
    void LightProbeRenderer::DestroyRenderingResources() {
        shared_ptr<render::BufferedRenderTargets>* this_01;

        field_784.Destroy();
        field_272.Destroy();
        field_112.Destroy();
        Singleton<render::VertexDeclarationManager>* this_04 = (Singleton<render::VertexDeclarationManager>*)&field_32;
        this_04->Destroy();
        this_04->Instance()->Unregister(&m_vertexDecl);
        m_vertexDecl.Destroy();
        bool cVar1 = field_1296.empty();
        while (true) {
            if (cVar1) {
                return;
            }
            if (((shared_ptr<oldscape::configdecoder::OldscapeVarType>*)
                     eastl::stack<shared_ptr<render::BufferedRenderTargets>,
                                  eastl::vector<shared_ptr<render::BufferedRenderTargets>>>::top())
                    ->use_count() != 1)
                break;
            this_01 = (shared_ptr<render::BufferedRenderTargets>*)
                eastl::stack<shared_ptr<render::BufferedRenderTargets>,
                             eastl::vector<shared_ptr<render::BufferedRenderTargets>>>::top();
            ((BufferedRenderTargets*)(*this_01).operator->())->Destroy();
            eastl::stack<shared_ptr<render::BufferedRenderTargets>,
                         eastl::vector<shared_ptr<render::BufferedRenderTargets>>>::pop();
            cVar1 = field_1296.empty();
        }
        LogAssert("m_freeRenderTargetsResources.top().use_count() == 1",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                  "irradiance/LightProbeRenderer.cpp",
                  224, "Shared pointer count should now be 1 so that resources are freed by this method.");
    }

    // 0x100930740
    void LightProbeRenderer::InitialiseVertexDeclaration() {
        VertexElementDesc* vertexElementDesc;

        auto pSVar2 = graphics::operator*(214);
        VertexElementDesc local_68 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(221);
        VertexElementDesc local_40 = pSVar2->GetVertexElementDesc(0);
        vertexElementDesc = (VertexElementDesc*)local_68.data();
        m_vertexDecl.Create(vertexElementDesc, 2, nullptr, 0);
        Singleton<render::VertexDeclarationManager>* this_00 =
            (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        if (m_vertexDecl.GetVertexStride(0) != 24) {
            LogAssert("m_vertexDecl.GetVertexStride() == sizeof(LightProbeVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbeRenderer.cpp",
                      324, nullptr);
        }
        this_00->Instance()->Register(&m_vertexDecl);
    }

    // 0x1009307f0
    void LightProbeRenderer::InitialiseSphereVertices() {
        graphicutils::GetSphereHorzVertSegCount(&field_200, &field_204, 30);
        unsigned int uVar1 = graphicutils::GetSphereVertexCount(field_200, field_204);
        unsigned long arg1 = (unsigned long)uVar1;
        field_8.set_max_size(arg1, 0);
        field_208.set_max_size(arg1, 0);
        field_232.set_max_size(arg1, 0);
        auto vector31 = field_208.data();
        auto vector32 = field_232.data();
        graphicutils::CreateSphereVertices(vector31, vector32, nullptr, 12, field_200, field_204);
    }

    // 0x100930ad0
    uint32_t LightProbeRenderer::InitialiseLightProbeResources(
        shared_ptr<render::BufferedRenderTargets>& bufferedRenderTargets) {
        ReturnValue local_40;
        int local_2c[3];

        int local_30 = GetFont12pxBoldID();
        local_2c[0] = local_30 * 6;
        local_2c[1] = 7;
        local_2c[2] = 1;
        make_shared<render::BufferedRenderTargets, int, int const&, int const&, render::Format&, char const(&)[11]>(
            &local_40, local_2c + 2, local_2c, &local_30, (Format*)(local_2c + 1), "LightProbe");
        bufferedRenderTargets = local_40;
        auto pBVar3 = bufferedRenderTargets.operator->();
        uint32_t uVar2 = 0;
        if (pBVar3->Create(0, 0, 1) != '\0') {
            pBVar3 = (BufferedRenderTargets*)bufferedRenderTargets.operator->();
            uVar2 = pBVar3->GetWriteRT()->BindDepthStencilTargetTexture(&field_272);
        }
        return uVar2;
    }

    // 0x100930d40
    void LightProbeRenderer::Render(const LightProbe_DE& lightProbe_DE, render::RenderContext& renderContext,
                                    const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                                    RenderPassType renderPassType, EffectManager& effectManager) {
        uint8_t* uint8_t;
        Texture* texture;
        CubeFace cubeFace;
        unsigned int uVar4;
        Vector3T<float>* pVVar5;
        long lVar6;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        VertexDeclaration* vertexDeclaration;
        shared_ptr* this_07;
        shared_ptr<render::BufferedRenderTargets>* this_08;
        uint32_t in_register_00000084;
        unsigned long arg1;
        unsigned long uVar8;
        EffectManager* in_stack_00000008;
        uint32_t in_stack_fffffffffffffec8;
        Matrix33T<float> local_110;
        VertexBuffer* local_50;
        ShaderProgram* local_38;

        SceneViewData* local_70 = (SceneViewData*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)renderPassType);
        PointLightShadows* local_48 = *(PointLightShadows**)(renderContext.m_immediateContext + 88);
        if (local_48 == nullptr) {
            LogAssert("pLightProbe != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbeRenderer.cpp",
                      242, nullptr);
        }
        unsigned long local_58 = graphicutils::GetSphereVertexCount(*(unsigned int*)&lightProbe_DE[1].field_88,
                                                                    *(unsigned int*)&lightProbe_DE[1].field_92);
        EffectList effectList = (uint8_t)in_stack_fffffffffffffec8;
        uint8_t* puVar1 = &lightProbe_DE.field_8;
        LightProbe_DE* local_40 = lightProbe_DE;
        if (0 < (int)local_58) {
            local_38 = (ShaderProgram*)&lightProbe_DE[1].field_96;
            local_50 = (VertexBuffer*)&lightProbe_DE[2].field_8;
            uVar8 = local_58 & 4294967295;
            arg1 = 0;
            do {
                pVVar5 = (Vector3T<float>*)(*local_38)[arg1];
                ((Vector4T<float>*)(*puVar1)[arg1])->SetXYZ(*pVVar5);
                pVVar5 = (Vector3T<float>*)(*local_50)[arg1];
                lVar6 = (*puVar1)[arg1];
                ((lVar6 + 12))->SetXYZ(*pVVar5);
                effectList = (uint8_t)in_stack_fffffffffffffec8;
                arg1 = arg1 + 1;
            } while (uVar8 != arg1);
        }
        uint8_t = &local_40->field_32;
        int iVar9 = (int)local_58;
        auto arg3 = puVar1->data();
        uint8_t->Update(0, iVar9 * 24, arg3, 0);
        auto this_01 = local_48->GetDefaultValue();
        auto this_02 = this_01->GetRenderPassEffect(4);
        DrawCallState local_a0(sceneViewData);
        SceneViewData* sceneViewData_00 = local_70;
        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_02->GetShader(*local_70);
        if (!*midiPlayerMainThread != nullptr) {
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbeRenderer.cpp",
                      264, "No shader program available for uint8_t render pass");
        }
        local_50 = (VertexBuffer*)uint8_t;
        auto this_03 = this_02->GetShader(*sceneViewData_00);
        Shader* this_04 = (Shader*)**this_03;
        local_38 = this_04->GetProgram();
        local_38->GetNativeShaderProgram();
        ((Layout*)this_04->second())->SSOBeginPtr();
        auto pRVar7 = local_a0.GetRenderPipelineState();
        pRVar7->SetShaderProgram(local_38);
        puVar1 = local_48->m_pointLightSMManager;
        auto irradianceSHCoefConsts = this_01->GetWaterParameters();
        ((puVar1 + 16))->SetCoefficients(*irradianceSHCoefConsts);
        ((puVar1 + 16))->SetShaderConstants(*this_04);
        in_stack_00000008->SetShaderConstants(local_a0, drawCallState, *this_04, effectList);
        math::Matrix33Scaling<float>(1000.0, 1000.0, 1000.0);
        HashedString local_e8(local_110, local_48->field_12);
        local_38->SetShaderConstMatrix4((HashedString*)graphics::operator*(0), 1, &local_e8, 0);
        auto this_06 = local_a0.GetInputAssemblerState();
        vertexDeclaration = (VertexDeclaration*)local_38->second();
        this_06->SetVertexStreamData(vertexDeclaration, local_50);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)local_a0.GetInputAssemblerState(),
                                                    (int)local_40 + 112);
        if (LightProbe::m_LightProbeRenderMode == 1) {
            this_07 = (shared_ptr*)local_48->GetPointLightSMManager();
            if (shared_ptr::operator_cast_to_bool(this_07) != '\0') {
                this_08 = (shared_ptr<render::BufferedRenderTargets>*)local_48->GetPointLightSMManager();
                drawCallState.SetRenderTargets(((BufferedRenderTargets*)(*this_08).operator->())->GetWriteRT());
                texture = (Texture*)(local_40 + 7);
                iVar9 = 0;
                do {
                    uVar4 = *(unsigned int*)&local_40[2].field_32;
                    cubeFace = render::GetCubeMapFace(iVar9);
                    drawCallState.CopyColourTargetData(texture, 0, 0, 0, 0, uVar4 * iVar9, 0, uVar4, uVar4, cubeFace);
                    iVar9 = iVar9 + 1;
                } while (iVar9 != 6);
                local_e8 = HashedString("uGlobalEnvironmentMap");
                iVar9 = local_38->GetConstIndex(local_e8);
                pRVar7 = (RenderPipelineState*)local_a0.GetRenderPipelineState();
                pRVar7->SetPSTextureSamplerPair(0, texture, iVar9, nullptr, false);
            }
        }
        uVar4 = graphicutils::GetSphereTriListIndexCount(*(unsigned int*)&local_40[1].field_88,
                                                         *(unsigned int*)&local_40[1].field_92);
        drawCallState.DrawIndexedPrimitives(&local_a0, 4, uVar4, 0);
    }

    // 0x1009315a0
    void LightProbeRenderer::RecycleRenderingResources(LightProbe& lightProbe) {
        unsigned long uVar2;
        unsigned long uVar3;
        BufferedRenderTargets* this_02;
        uint8_t* this_03;

        shared_ptr* this_00 = (shared_ptr*)lightProbe.GetPointLightSMManager();
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            if (!(this_00->unique())) {
                LogAssert("renderTargets.unique()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "effects/irradiance/LightProbeRenderer.cpp",
                          351, nullptr);
            }
            this_03 = &field_1296;
            uVar2 = this_03->size();
            uVar3 = ((vector<math::Rect<int>,
                             eastl::fixed_vector_allocator<16ul, 12ul, 4ul, 0ul, false, eastl::dummy_allocator>>*)
                         this_03->SSOBeginPtr())
                        ->capacity();
            this_02 = (BufferedRenderTargets*)(*this_00).operator->();
            if (uVar2 < uVar3) {
                this_02->ResetSyncFences();
                this_03->push(*this_00);
            } else {
                this_02->Destroy();
            }
        }
        lightProbe.ClearRenderingResources();
    }

} // namespace jag::graphics
