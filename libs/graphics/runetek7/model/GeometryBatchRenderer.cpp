// libs/graphics/runetek7/model/GeometryBatchRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GeometryBatchRenderer.h"

namespace jag::graphics {
    // 0x103bbd418, set at startup by ___cxx_global_var_init.69
    render::VertexDeclaration GeometryBatchRenderer::m_vertexDecl = VertexDeclaration();

    // 0x103bbd478, set at startup by ___cxx_global_var_init.70
    render::VertexDeclaration GeometryBatchRenderer::m_vertexDeclSkinned = VertexDeclaration();

    // 0x100813c30
    GeometryBatchRenderer::GeometryBatchRenderer() : DrawableRenderer(), field_8(4294967295), field_12(4294967295) {}

    // 0x100813c70
    GeometryBatchRenderer::~GeometryBatchRenderer() {}

    // 0x100813c90
    void GeometryBatchRenderer::Destroy() {}

    // 0x100813cd0
    uint32_t GeometryBatchRenderer::Initialise(RT7Core& rt7Core) {
        unsigned int uVar1 = rt7Core.GetPSTextureSlotManager();
        uint32_t uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_8 = uVar2;
        uVar1 = rt7Core.GetPSTextureSlotManager();
        uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_12 = uVar2;
        CreateRenderingResources();
        return 1;
    }

    // 0x100813d20
    void GeometryBatchRenderer::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10;

        InitialiseVertexDeclarations();
        return 1;
    }

    // 0x100813d50
    void GeometryBatchRenderer::Render(const GeometryBatch_DE& geometryBatch_DE, render::RenderContext& renderContext,
                                       const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                                       RenderPassType renderPassType, EffectManager& effectManager) {
        uint8_t* uint8_t;
        GeometryBatchInstance* pGVar1;
        uint8_t bVar5;
        int iVar6;
        unsigned int uVar7;
        unsigned int arg2;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr* psVar10;
        HashedString* pHVar11;
        FogEffect* pFVar12;
        VertexAnimation* this_05;
        vector_map<unsigned short, unsigned short>* arg2_00;
        vector_map<unsigned short, unsigned short>* arg3;
        TextureAtlasReference* textureAtlasReference;
        uint8_t* puVar14;
        Vector4T<float>* pVVar16;
        uint64_t* puVar17;
        PointLightIndicesEffect* pPVar18;
        long* plVar19;
        GlobalEnvironmentMapping* pGVar20;
        shared_ptr<render::TextureCube>* textureCube;
        unsigned long long uVar21;
        Matrix44T<float>* pMVar22;
        uint32_t* puVar23;
        InputAssemblerState* inputAssemblerState;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_10;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_11;
        char* pcVar24;
        Layout* pLVar25;
        DrawCallState* pDVar27;
        uint32_t in_register_00000084;
        uint32_t uVar29;
        float fVar30;
        uint32_t in_XMM1_Da;
        uint32_t in_XMM1_Db;
        EffectManager* in_stack_00000008;
        EffectList in_stack_fffffffffffffea8;
        uint64_t local_138;
        uint8_t local_128[64];
        float local_b8[4];
        ColourHSL local_a8;
        float local_84;
        Shader* local_68;
        uint32_t local_5c;
        PointLightIndicesEffect* local_50;

        SceneViewData* pSVar28 = (SceneViewData*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)renderPassType);
        GeometryBatchInstance* this_00 = *(GeometryBatchInstance**)(renderContext.m_immediateContext + 104);
        if (this_00 == nullptr) {
            LogAssert("pGeometryBatchInstance != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      56, nullptr);
        }
        auto local_78 = this_00->GetGeometryBatch();
        MapSquare* local_38 = (MapSquare*)this_00->field_656;
        auto local_58 = this_00->GetMaterial();
        auto this_02 = local_58->GetRenderPassEffect((RenderPassType)effectManager);
        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_02->GetShader(*pSVar28);
        if (!*midiPlayerMainThread != nullptr) {
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      64, "No shader program available for uint8_t render pass");
        }
        SceneViewData* local_90 = pSVar28;
        auto this_03 = this_02->GetShader(*pSVar28);
        Shader* this_04 = (Shader*)**this_03;
        char cVar3 = this_04->IsReady();
        if (!cVar3) {
            return;
        }
        DrawCallState local_e8(sceneViewData);
        auto local_48 = this_04->GetProgram();
        local_48->GetNativeShaderProgram();
        auto pLVar8 = this_04->second();
        pLVar8->SSOBeginPtr();
        auto pRVar9 = local_e8.GetRenderPipelineState();
        pRVar9->SetShaderProgram(local_48);
        cVar3 = in_stack_00000008->IsEnabled(51);
        if ((!cVar3) || (cVar3 = this_02->field_16.Contains(51), !cVar3)) {
            local_5c = 0;
        } else {
            pRVar9 = (RenderPipelineState*)this_00->GetMaterial();
            psVar10 = (shared_ptr*)pRVar9->GetPSTextureSamplerPairs();
            local_5c = shared_ptr::operator_cast_to_bool(psVar10);
        }
        GeometryBatchRenderer* this_12 = (GeometryBatchRenderer*)&this_02->field_16;
        cVar3 = this_12->Contains(54);
        if (cVar3) {
            uVar29 = FrameTime::GetSecondsSinceProgramStart();
            local_128._0_4_ = uVar29;
            local_138._0_4_ = 0.0;
            local_b8[0] = 65535.0;
            fVar30 = math::Wrap<float>(*local_128, local_138, *local_b8);
            local_68 = (Shader*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)fVar30);
            pHVar11 = (HashedString*)graphics::operator*(24);
            local_48->SetShaderConstFloat1(pHVar11, local_68._0_4_);
            pFVar12 = in_stack_00000008->GetEffect<SunlightDirectLighting>(54);
            iVar6 = local_58->GetEndPosition();
            pFVar12->SetViewportMapID(iVar6);
        }
        in_stack_00000008->SetShaderConstants(local_e8, drawCallState, *this_04, in_stack_fffffffffffffea8);
        pHVar11 = (HashedString*)graphics::operator*(116);
        cVar3 = in_stack_00000008->IsEnabled(94);
        fVar30 = 0.0;
        if (cVar3) {
            fVar30 = (float)local_38->GetCurrentFade();
        }
        local_48->SetShaderConstFloat1(pHVar11, fVar30);
        pHVar11 = (HashedString*)graphics::operator*(118);
        fVar30 = (float)local_78->GetFarClip();
        local_48->SetShaderConstFloat1(pHVar11, fVar30);
        DebugReturn::SetShaderConstants(*local_48);
        cVar3 = local_78->HasBones();
        local_68 = this_04;
        if (((cVar3) || (cVar3 = this_00->GetAnimatesTransparency(), cVar3)) ||
            (cVar3 = this_00->GetAnimatedColourType(), cVar3 != '\x02')) {
            this_05 = (VertexAnimation*)this_00->GetVertexAnimation();
            pGVar1 = local_78;
            uVar7 = local_78->GetAlphaTestThreshold();
            arg2 = pGVar1->GetLabelCount();
            this_05->SetMaxSize(uVar7, arg2, 0);
            pGVar1 = local_78;
            local_50 = (PointLightIndicesEffect*)local_78->GetBoneIDMap();
            arg2_00 = (vector_map<unsigned short, unsigned short>*)pGVar1->GetJointIDMap();
            arg3 = (vector_map<unsigned short, unsigned short>*)pGVar1->GetMaterial();
            this_04 = local_68;
            this_05->DeferredUpdateAnimation(local_50, arg2_00, arg3, nullptr);
            this_05->SetShaderConstants(drawCallState, *this_04);
        }
        long lVar13 = local_58->GetTextureAtlasReference();
        if ((lVar13 != 0) && (cVar3 = this_12->Contains(63), cVar3)) {
            textureAtlasReference = (TextureAtlasReference*)local_58->GetTextureAtlasReference();
            TextureAtlasing::SetShaderConstants(local_e8, drawCallState, *this_04, *textureAtlasReference,
                                                ((GeometryBatchRenderer*)geometryBatch_DE)->field_8,
                                                ((GeometryBatchRenderer*)geometryBatch_DE)->field_12);
        }
        cVar3 = this_12->Contains(65);
        if ((!cVar3) && (cVar3 = this_12->Contains(81), !cVar3))
            goto LAB_1008141d4;
        cVar3 = this_12->Contains(66);
        char cVar4 = '\x01';
        if (!cVar3) {
            fVar30 = (float)local_38->GetCurrentFade();
            in_XMM1_Da = 0;
            in_XMM1_Db = 0;
            if (((0.0 <= fVar30) || (cVar3 = in_stack_00000008->IsEnabled(94), !cVar3)) &&
                (puVar14 = (uint8_t*)local_58->data(), puVar14 == AlphaMode::ALPHA_OPAQUE)) {
                cVar4 = this_00->GetAnimatesTransparency();
            }
        }
        cVar3 = IsShadowPass((RenderPassType)effectManager);
        if ((!cVar3) && ((RenderPassType)effectManager != 9)) {
            uVar7 = 4294967295;
            if (cVar4) {
            LAB_1008141aa:
                bVar5 = local_58->GetAlphaTestThreshold();
                uVar7 = (unsigned int)bVar5;
                if (GeometryBatchInstance::m_alphaTestThresholdOverride != '\0') {
                    uVar7 = GeometryBatchInstance::m_alphaTestThresholdOverrideValue;
                }
                if (bVar5 == 0) {
                    uVar7 = (unsigned int)bVar5;
                }
            }
        } else {
            puVar14 = (uint8_t*)local_58->data();
            uVar7 = 4294967295;
            if (puVar14 == AlphaMode::ALPHA_BLENDED) {
                uVar7 = 90;
            } else if (cVar4 == '\x01')
                goto LAB_1008141aa;
        }
        AlphaTesting::SetShaderConstants(*this_04, uVar7);
    LAB_1008141d4:
        QuaternionT<float>* this_06 = (QuaternionT<float>*)&local_138;
        local_138 = this_00->GetTint();
        uint32_t uStack_130 = in_XMM1_Da;
        uint32_t uStack_12c = in_XMM1_Db;
        auto pfVar15 = this_06->qw();
        if (*pfVar15 <= 0.0) {
            this_06 = (QuaternionT<float>*)local_38->GetParentLocationType();
        }
        local_b8._0_8_ = *(uint64_t*)this_06;
        local_b8._8_8_ = *(uint64_t*)(this_06 + 8);
        cVar3 = local_38->HasHighlight();
        MapSquare* this_01 = local_38;
        if (!cVar3) {
            cVar3 = this_12->Contains(82);
            if (cVar3) {
                TintingEffect::SetShaderConstants(*this_04, *local_b8);
            }
        } else if (renderContext.m_immediateContext[128] == '\0') {
            cVar3 = this_12->Contains(82);
            if (!cVar3) {
                new (local_128) math::Vector4T(0.0);
                ObjectHighlight::SetShaderConstants(*this_04, *local_128, 0.0);
            } else {
                ObjectHighlight::SetShaderConstants(*this_04, *local_b8, -0.5);
            }
        } else if (renderContext.m_immediateContext[129] == '\0') {
            puVar17 = (uint64_t*)local_38->GetMapSquarePointLights();
            local_128._0_8_ = *puVar17;
            local_128._8_8_ = puVar17[1];
            fVar30 = (float)this_01->GetHighlightSilhouetteAlpha();
            local_128._12_4_ = fVar30 * (float)local_128._12_4_;
            ObjectHighlight::SetShaderConstants(*this_04, *local_128, 0.0);
        } else {
            pVVar16 = (Vector4T<float>*)local_38->GetMapSquarePointLights();
            fVar30 = (float)this_01->GetHighlightScale();
            ObjectHighlight::SetShaderConstants(*this_04, *pVVar16, fVar30);
        }
        Vector3T<float>* pVVar26 = (Vector3T<float>*)26;
        cVar3 = this_12->Contains(26);
        if (cVar3) {
            pLVar8 = (Layout*)local_38->GetPointLightBounds();
            pfVar15 = (float*)pLVar8->SSOBeginPtr();
            local_50._0_4_ = *pfVar15;
            pfVar15 = (float*)pLVar8->second();
            local_50 =
                (PointLightIndicesEffect*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(local_50._0_4_ + *pfVar15));
            pfVar15 = (float*)pLVar8->y();
            local_84 = *pfVar15;
            pfVar15 = (float*)pLVar8->qw();
            uVar7 = 0;
            local_a8 = math::ColourHSL(local_50._0_4_, 0.0, local_84 + *pfVar15);
            local_128._0_8_ = *0.5 * local_a8;
            local_128._8_4_ = uVar7;
            psVar10 = local_128->GetEffect(pVVar26);
            cVar3 = shared_ptr::operator_cast_to_bool(psVar10);
            if (cVar3) {
                pPVar18 = (PointLightIndicesEffect*)(*psVar10).operator->();
                cVar3 = pPVar18->IsReady();
                if (cVar3) {
                    local_50 = (PointLightIndicesEffect*)(*psVar10).operator->();
                    iVar6 = local_38->GetLevel();
                    local_50->SetLevel(iVar6);
                    pPVar18 = (PointLightIndicesEffect*)(*psVar10).operator->();
                    pPVar18->SetFineCoordBounds(*pLVar8);
                    plVar19 = (long*)(*psVar10).operator->();
                    (**(void (**)(...))(*plVar19 + 56))(plVar19, &local_e8, (RenderContext*)drawCallState, this_04);
                }
            }
        }
        if ((char)local_5c != '\0') {
            pGVar20 = (GlobalEnvironmentMapping*)in_stack_00000008->GetEffect<SunlightDirectLighting>(51);
            pRVar9 = (RenderPipelineState*)this_00->GetMaterial();
            textureCube = (shared_ptr<render::TextureCube>*)pRVar9->GetPSTextureSamplerPairs();
            uVar21 = FrameTime::GetCurrentTimeMS();
            this_04 = local_68;
            pGVar20->SetTextureOverride(*textureCube, uVar21);
            pGVar20->SetShaderConstants((RenderContext*)&local_e8, (Shader*)(RenderContext*)drawCallState);
        }
        cVar3 = this_12->Contains(21);
        if (cVar3) {
            cVar3 = in_stack_00000008->IsEnabled(40);
            if (!cVar3) {
                ((IrradianceEffect*)local_38->GetIrradianceEffect())->SetShaderConstants(*this_04);
            } else {
                this_04->SetIdentityShaderConstants(*40);
            }
        }
        cVar3 = this_12->Contains(13);
        if (cVar3) {
            InstanceColourEffect::SetShaderConstants(*this_04, this_00->field_784);
        }
        uVar29 = FrameTime::GetSecondsSinceProgramStart();
        local_128._0_4_ = uVar29;
        local_a8.field_0 = 0.0;
        fVar30 = math::Wrap<float>(*local_128, local_a8.field_0, 65535.0);
        local_68 = (Shader*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)fVar30);
        pHVar11 = (HashedString*)graphics::operator*(24);
        local_48->SetShaderConstFloat1(pHVar11, local_68._0_4_);
        cVar3 = IsShadowPass((RenderPassType)effectManager);
        if (!cVar3) {
            pHVar11 = (HashedString*)graphics::operator*(0);
            pMVar22 = (Matrix44T<float>*)local_38->GetMaterial();
            local_48->SetShaderConstMatrix4(pHVar11, 1, pMVar22, 0);
        } else {
            pMVar22 = (Matrix44T<float>*)local_38->GetMaterial();
            pFVar12 = in_stack_00000008->GetEffect<SunlightDirectLighting>(79);
            ((RT7Core*)pFVar12->GetDefaultValue())->GetImmediateThreadPool();
            *local_128** pMVar22;
            pHVar11 = (HashedString*)graphics::operator*(0);
            local_48->SetShaderConstMatrix4(pHVar11, 1, local_128, 0);
            cVar3 = in_stack_00000008->IsEnabled(36);
            if (cVar3) {
                pHVar11 = (HashedString*)graphics::operator*(1);
                pMVar22 = (Matrix44T<float>*)local_38->GetMaterial();
                local_48->SetShaderConstMatrix4(pHVar11, 1, pMVar22, 0);
            }
        }
        cVar3 = this_12->Contains(108);
        if (cVar3) {
            pHVar11 = (HashedString*)graphics::operator*(68);
            pVVar16 = (Vector4T<float>*)local_58->GetRefractionParams();
            local_48->SetShaderConstVector4(pHVar11, 1, pVVar16, 1);
        }
        cVar3 = this_12->Contains(116);
        if (cVar3) {
            pHVar11 = (HashedString*)graphics::operator*(205);
            pSVar28 = local_90;
            puVar23 = (uint32_t*)local_90->GetStippleNearClipParams();
            local_58 = (ModelMaterial*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(*puVar23));
            lVar13 = pSVar28->GetStippleNearClipParams();
            local_68 = (Shader*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)(1.0 / *(float*)(lVar13 + 4)));
            puVar23 = (uint32_t*)pSVar28->GetStippleFarClipParams();
            local_50 = (PointLightIndicesEffect*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(*puVar23));
            lVar13 = pSVar28->GetStippleFarClipParams();
            local_48->SetShaderConstFloat4(pHVar11, local_58._0_4_, local_68._0_4_, local_50._0_4_,
                                           1.0 / *(float*)(lVar13 + 4));
        }
        inputAssemblerState =
            (InputAssemblerState*)local_78->GetIAState(*(unsigned int*)(renderContext.m_immediateContext + 96));
        local_e8.SetInputAssemblerState(inputAssemblerState);
        cVar3 = IsShadowPass((RenderPassType)effectManager);
        if (cVar3) {
            cVar3 = in_stack_00000008->IsEnabled(36);
            if (cVar3) {
                uint8_t = renderContext.m_immediateContext;
                pLVar8 = (Layout*)local_90->SSOBeginPtr();
                pVVar26 = (Vector3T<float>*)pLVar8->SSOBeginPtr();
                cVar3 = uint8_t->IsInside(*pVVar26);
                if (cVar3) {
                    pDVar27 = &local_e8;
                    pRVar9 = (RenderPipelineState*)pDVar27->GetRenderPipelineState();
                    pRVar9->SetRasteriserState(((BuiltinStates*)pDVar27->Instance())->GetShadowPassRS(0));
                }
            }
        }
        bVar5 = this_12->Contains(0);
        PrimitiveType primitiveType = (unsigned int)(bVar5 ^ 1) * 3 + 1;
        if ((RenderPassType)effectManager == 8) {
            this_10 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_e8.GetRenderPipelineState();
            this_11 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)this_10->end();
            cVar3 = local_38->GetHighlightsIgnoreDepth();
            if (cVar3) {
                pcVar24 = (char*)this_11->second();
                if (*pcVar24 != '\0') {
                    pDVar27 = &local_e8;
                    pLVar25 = (Layout*)pDVar27->GetRenderPipelineState();
                    lVar13 = pDVar27->Instance();
                    pLVar25->SetHeapSize((lVar13 + 1080));
                }
            }
            DrawHighlightedPrimitives((GeometryBatchRenderer*)geometryBatch_DE, (RenderContext*)drawCallState,
                                      &local_e8, (GeometryBatch_DE*)renderContext, primitiveType, this_04);
            pLVar25 = (Layout*)local_e8.GetRenderPipelineState();
            pLVar25->SetHeapSize(this_11);
        } else {
            DrawPrimitives(this_12, (RenderContext*)drawCallState, &local_e8, (GeometryBatch*)local_78,
                           *(unsigned int*)(renderContext.m_immediateContext + 96), primitiveType,
                           (vector<SourceModelExternalIndexSectionRangeOnly>*)&this_00->field_728,
                           *(vector_map<int, FaceGroupRenderMasks>**)(renderContext.m_immediateContext + 88), '\0',
                           (QueryView*)(renderContext.m_immediateContext + 112));
        }
        if ((char)local_5c != '\0') {
            pGVar20 = (GlobalEnvironmentMapping*)in_stack_00000008->GetEffect<SunlightDirectLighting>(51);
            new (local_128) shared_ptr();
            uVar21 = FrameTime::GetCurrentTimeMS();
            pGVar20->SetTextureOverride(*local_128, uVar21);
        }
    }

    // 0x100814980
    void GeometryBatchRenderer::DrawHighlightedPrimitives(render::RenderContext& renderContext,
                                                          render::DrawCallState& drawCallState,
                                                          const GeometryBatch_DE& geometryBatch_DE,
                                                          render::PrimitiveType primitiveType, Shader& shader) {
        Vector4T<float>* this_02;
        unsigned int arg4;
        float arg3;
        vector<SourceModelExternalIndexSectionRangeOnly>* sourceModelExternalIndexSectionRangeOnlys;
        vector_map<int, FaceGroupRenderMasks>* arg7;
        unsigned char arg8;
        Vector4T<float> local_68;
        vector<SourceModelExternalIndexSectionRangeOnly>* local_48;

        GeometryBatchInstance* this_00 = geometryBatch_DE.field_120;
        auto geometryBatch = this_00->GetGeometryBatch();
        Shader* this_01 = (Shader*)this_00->field_656;
        Shader* this_03 = this_01;
        bool cVar1 = this_01->HasHighlightedSection();
        if (cVar1) {
            this_03 = (Shader*)&this_00->field_728;
            local_48 = (vector<SourceModelExternalIndexSectionRangeOnly>*)this_03;
            cVar1 = this_03->empty();
            if ((!cVar1) && (geometryBatch_DE.field_104 != nullptr)) {
                DrawPrimitives((GeometryBatchRenderer*)this_03, renderContext, drawCallState, geometryBatch,
                               geometryBatch_DE.field_112, primitiveType, local_48, geometryBatch_DE.field_104, '\x01',
                               nullptr);
                if (*(char*)&geometryBatch_DE.field_144 == '\0') {
                    this_02 = &local_68;
                    new (this_02) math::Vector4T(0.0);
                    arg3 = 0.0;
                } else {
                    this_02 = (Vector4T<float>*)this_01->GetSwipeConfig();
                    arg3 = (float)this_01->GetHighlightedSectionScale();
                }
                this_03 = shader;
                ObjectHighlight::SetShaderConstants(shader, *this_02, arg3);
                arg4 = geometryBatch_DE.field_112;
                arg8 = '\x02';
                arg7 = geometryBatch_DE.field_104;
                sourceModelExternalIndexSectionRangeOnlys = local_48;
                goto LAB_100814a4c;
            }
        }
        arg4 = geometryBatch_DE.field_112;
        sourceModelExternalIndexSectionRangeOnlys =
            (vector<SourceModelExternalIndexSectionRangeOnly>*)&this_00->field_728;
        arg8 = '\x03';
        arg7 = geometryBatch_DE.field_104;
    LAB_100814a4c:
        DrawPrimitives((GeometryBatchRenderer*)this_03, renderContext, drawCallState, geometryBatch, arg4,
                       primitiveType, sourceModelExternalIndexSectionRangeOnlys, arg7, arg8, nullptr);
    }

    // 0x100814aa0
    void GeometryBatchRenderer::DrawPrimitives(
        render::RenderContext& renderContext, render::DrawCallState& drawCallState, const GeometryBatch& geometryBatch,
        unsigned int arg4, render::PrimitiveType primitiveType,
        const eastl::vector<SourceModelExternalIndexSectionRangeOnly>& sourceModelExternalIndexSectionRangeOnlys,
        const eastl::vector_map<int, FaceGroupRenderMasks>* arg7, unsigned char arg8,
        render::QueryView* queryView) const {
        unsigned int uVar2;
        IndexType IVar3;
        unsigned int uVar4;
        int iVar5;
        int iVar6;
        unsigned int uVar7;
        long lVar9;
        unsigned int* puVar10;
        long lVar11;
        Layout* pLVar12;
        int* arg4_00;
        void** arg5;
        unsigned long arg1;
        float fVar13;
        unsigned int local_ea4;
        FixedIndexPrimitiveBatchData<300ul> local_e98;

        if (4 < arg4) {
            LogAssert("lodLevel < MAX_LOD_LEVELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      408, nullptr);
        }
        char cVar1 = geometryBatch.VertexBuffersInitialised();
        if (!cVar1) {
            LogAssert("geometryBatch.VertexBuffersInitialised()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      409, nullptr);
        }
        auto this_00 = geometryBatch.GetIndexBuffer(arg4);
        unsigned long uVar8 = sourceModelExternalIndexSectionRangeOnlys.size();
        if ((arg7 == nullptr) || (uVar8 == 0)) {
            uVar7 = this_00->GetLoopLength();
            if (uVar7 != 0) {
                if ((queryView == nullptr) || (cVar1 = queryView->IsCreated(), !cVar1)) {
                    renderContext.DrawIndexedPrimitives(drawCallState, primitiveType, uVar7, 0);
                } else {
                    cVar1 = queryView->HasSubQueries();
                    if ((!cVar1) || (primitiveType != 4)) {
                        queryView->Begin(0);
                        renderContext.DrawIndexedPrimitives(drawCallState, primitiveType, uVar7, 0);
                        queryView->End(0);
                    } else {
                        uVar2 = queryView->GetPos();
                        fVar13 = (float)ceil((float)(uVar7 / 3) / (float)uVar2);
                        iVar6 = queryView->GetPos();
                        if (iVar6 != 0) {
                            uVar2 = 0;
                            iVar6 = 0;
                            do {
                                iVar5 = eastl::min<unsigned int>(iVar6 + (int)(long)fVar13, uVar7 / 3);
                                if (iVar5 - iVar6 != 0) {
                                    queryView->Begin(uVar2);
                                    renderContext.DrawIndexedPrimitives(drawCallState, 4, (iVar5 - iVar6) * 3,
                                                                        iVar6 * 3);
                                    queryView->End(uVar2);
                                    iVar6 = iVar5;
                                }
                                uVar2 = uVar2 + 1;
                                uVar4 = queryView->GetPos();
                            } while (uVar2 < uVar4);
                        }
                    }
                }
            }
        } else {
            local_e98 = render::FixedIndexPrimitiveBatchData<300ul>();
            local_ea4 = 0;
            iVar6 = 0;
            arg1 = 0;
            do {
                lVar9 = sourceModelExternalIndexSectionRangeOnlys[arg1];
                puVar10 = (unsigned int*)(*((lVar9 + 4)))[(unsigned long)arg4];
                lVar9 = eastl::vector_map<int, int>::find(*arg7);
                lVar11 = arg7->end();
                if (arg8 == '\0') {
                    if ((lVar9 != lVar11) && (cVar1 = ((lVar9 + 4))->IsHidden(), cVar1))
                        goto LAB_100814ca0;
                LAB_100814cf0:
                    if (uVar8 - 1 == arg1) {
                        uVar7 = puVar10[1];
                        uVar2 = this_00->GetLoopLength();
                        if (uVar2 < uVar7) {
                            LogAssert("(currentIndexStart + (indexRange.m_indexEnd - currentIndexStart)) <= "
                                      "indexBuffer.GetIndexCount()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/GeometryBatchRenderer.cpp",
                                      459, nullptr);
                        }
                        uVar7 = puVar10[1];
                        IVar3 = this_00->GetCurrentX();
                        local_e98.AddPrimitiveBatch(uVar7 - local_ea4, local_ea4, IVar3);
                    } else {
                        iVar6 = iVar6 + 1;
                    }
                } else {
                    if (lVar9 != lVar11) {
                        cVar1 = ((lVar9 + 4))->IsHidden();
                        if ((!cVar1) && (cVar1 = ((lVar9 + 4))->HasCustomisationMask(arg8), cVar1 == '\x01'))
                            goto LAB_100814cf0;
                    }
                LAB_100814ca0:
                    if (iVar6 != 0) {
                        uVar7 = *puVar10;
                        uVar2 = this_00->GetLoopLength();
                        if (uVar2 < uVar7) {
                            LogAssert("(currentIndexStart + (indexRange.m_indexStart - currentIndexStart)) <= "
                                      "indexBuffer.GetIndexCount()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/GeometryBatchRenderer.cpp",
                                      447, nullptr);
                        }
                        uVar7 = *puVar10;
                        IVar3 = this_00->GetCurrentX();
                        local_e98.AddPrimitiveBatch(uVar7 - local_ea4, local_ea4, IVar3);
                    }
                    local_ea4 = puVar10[1];
                    iVar6 = 0;
                }
                arg1 = arg1 + 1;
            } while (uVar8 != arg1);
            iVar6 = local_e98.GetBatchCount();
            if (iVar6 != 0) {
                uVar7 = local_e98.GetBatchCount();
                pLVar12 = (Layout*)local_e98.SSOBeginPtr();
                arg4_00 = (int*)pLVar12->HeapBeginPtr();
                pLVar12 = (Layout*)local_e98.GetStartIndexByteOffset();
                arg5 = (void**)pLVar12->HeapBeginPtr();
                renderContext.DrawMultiIndexedPrimitives(drawCallState, primitiveType, uVar7, arg4_00, arg5);
            }
        }
    }

    // 0x100814fb0
    void GeometryBatchRenderer::InitialiseVertexDeclarations() {
        auto pSVar2 = graphics::operator*(217);
        VertexElementDesc local_298 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(238);
        VertexElementDesc local_270 = pSVar2->GetVertexElementDesc(1);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(226);
        VertexElementDesc local_248 = pSVar2->GetVertexElementDesc(1);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(227);
        VertexElementDesc local_220 = pSVar2->GetVertexElementDesc(1);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(235);
        VertexElementDesc local_1f8 = pSVar2->GetVertexElementDesc(1);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(236);
        VertexElementDesc local_1d0 = pSVar2->GetVertexElementDesc(1);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(233);
        VertexElementDesc local_1a8 = pSVar2->GetVertexElementDesc(1);
        auto pVVar3 = local_298.data();
        m_vertexDecl.Create(pVVar3, 7, nullptr, 0);
        int iVar1 = m_vertexDecl.GetVertexStride(0);
        if (iVar1 != 8) {
            LogAssert("m_vertexDecl.GetVertexStride(0) == sizeof(GeometryBatchVertexPosLP)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      358, nullptr);
        }
        Singleton<render::VertexDeclarationManager>* pSVar5 =
            (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        iVar1 = m_vertexDecl.GetVertexStride(1);
        if (iVar1 != 24) {
            LogAssert("m_vertexDecl.GetVertexStride(1) == sizeof(GeometryBatchVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      359, nullptr);
        }
        auto pVVar4 = pSVar5->Instance();
        pVVar4->Register(&m_vertexDecl);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(217);
        VertexElementDesc local_180 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(238);
        VertexElementDesc local_158 = pSVar2->GetVertexElementDesc(1);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(226);
        VertexElementDesc local_130 = pSVar2->GetVertexElementDesc(1);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(227);
        VertexElementDesc local_108 = pSVar2->GetVertexElementDesc(1);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(235);
        VertexElementDesc local_e0 = pSVar2->GetVertexElementDesc(1);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(236);
        VertexElementDesc local_b8 = pSVar2->GetVertexElementDesc(1);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(233);
        VertexElementDesc local_90 = pSVar2->GetVertexElementDesc(1);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(218);
        VertexElementDesc local_68 = pSVar2->GetVertexElementDesc(2);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(219);
        VertexElementDesc local_40 = pSVar2->GetVertexElementDesc(2);
        pVVar3 = (VertexElementDesc*)local_180.data();
        m_vertexDeclSkinned.Create(pVVar3, 9, nullptr, 0);
        iVar1 = m_vertexDeclSkinned.GetVertexStride(0);
        if (iVar1 != 8) {
            LogAssert("m_vertexDeclSkinned.GetVertexStride(0) == sizeof(GeometryBatchVertexPosLP)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      391, nullptr);
        }
        iVar1 = m_vertexDeclSkinned.GetVertexStride(1);
        if (iVar1 != 24) {
            LogAssert("m_vertexDeclSkinned.GetVertexStride(1) == sizeof(GeometryBatchVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      392, nullptr);
        }
        pSVar5 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDeclSkinned;
        iVar1 = m_vertexDeclSkinned.GetVertexStride(2);
        if (iVar1 != 8) {
            LogAssert("m_vertexDeclSkinned.GetVertexStride(2) == sizeof(GeometryBatchVertexSkin)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      393, nullptr);
        }
        pVVar4 = pSVar5->Instance();
        pVVar4->Register(&m_vertexDeclSkinned);
    }

    // 0x100815340
    void GeometryBatchRenderer::DestroyRenderingResources() {
        auto pVVar1 = Instance();
        pVVar1->Unregister(&m_vertexDecl);
        Singleton<render::VertexDeclarationManager>* this_00 =
            (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        m_vertexDecl.Destroy();
        pVVar1 = this_00->Instance();
        pVVar1->Unregister(&m_vertexDeclSkinned);
        m_vertexDeclSkinned.Destroy();
    }

} // namespace jag::graphics
