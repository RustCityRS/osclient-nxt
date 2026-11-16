// libs/graphics/runetek7/model/GeometryBatchRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GeometryBatchRenderer.h"

namespace jag::graphics {
    // 0x103bbd418, 96 bytes, __common; set at startup by ___cxx_global_var_init.69
    render::VertexDeclaration GeometryBatchRenderer::m_vertexDecl = VertexDeclaration();

    // 0x103bbd478, 96 bytes, __common; set at startup by ___cxx_global_var_init.70
    render::VertexDeclaration GeometryBatchRenderer::m_vertexDeclSkinned = VertexDeclaration();

    // 0x100813c30, 48 bytes, base-object constructor, placed by class name and debug map
    // GeometryBatchRenderer::GeometryBatchRenderer()
    void GeometryBatchRenderer::GeometryBatchRenderer() {
        new (this) DrawableRenderer();
        field_0 = &PTR__GeometryBatchRenderer_100f15798;
        field_8 = 4294967295;
        field_12 = 4294967295;
    }

    // 0x100813c60, 16 bytes, complete-object constructor, placed by class name and debug map
    // GeometryBatchRenderer::GeometryBatchRenderer(): jumps straight to the base-object constructor

    // 0x100813c70, 32 bytes, base-object destructor, placed by class name and debug map
    // GeometryBatchRenderer::~GeometryBatchRenderer()
    void GeometryBatchRenderer::~GeometryBatchRenderer() {
        field_0 = &PTR__GeometryBatchRenderer_100f15798;
        AutoSingleton<ShaderThreadPoolSingleton>::~AutoSingleton();
    }

    // 0x100813c90, 16 bytes, placed by class name and debug map
    // GeometryBatchRenderer::Destroy()
    void GeometryBatchRenderer::Destroy() {}

    // 0x100813ca0, 16 bytes, complete-object destructor, placed by class name and debug map
    // GeometryBatchRenderer::~GeometryBatchRenderer(): jumps straight to the base-object destructor

    // 0x100813cb0, 32 bytes, deleting destructor, placed by class name and debug map
    // GeometryBatchRenderer::~GeometryBatchRenderer()
    void GeometryBatchRenderer::~GeometryBatchRenderer() {
        ~GeometryBatchRenderer(this);
        operator_delete(this);
    }

    // 0x100813cd0, 80 bytes, placed by class name and debug map
    // GeometryBatchRenderer::Initialise(RT7Core&)
    undefined4 GeometryBatchRenderer::Initialise(RT7Core* param_1) {
        uint uVar1;
        undefined4 uVar2;

        uVar1 = param_1->GetPSTextureSlotManager();
        uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_8 = uVar2;
        uVar1 = param_1->GetPSTextureSlotManager();
        uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_12 = uVar2;
        CreateRenderingResources();
        return 1;
    }

    // 0x100813d20, 48 bytes, placed by class name and debug map
    // GeometryBatchRenderer::CreateRenderingResources()
    undefined8 GeometryBatchRenderer::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10[8];

        local_10->~AutoSingleton("GeometryBatchRenderer");
        InitialiseVertexDeclarations();
        return 1;
    }

    // 0x100813d50, 3040 bytes, placed by class name and debug map
    // GeometryBatchRenderer::Render(GeometryBatch_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void GeometryBatchRenderer::Render(undefined8 param_1_00, undefined8 param_2_00, GeometryBatchRenderer* param_1,
                                       long param_2, RenderContext* param_3, DrawCallState* param_4,
                                       SceneViewData* param_7, int param_8, EffectManager* param_9) {
        OBB* this;
        GeometryBatchInstance* this_00;
        SceneViewData* this_01;
        GeometryBatch* pGVar1;
        MapSquare* this_02;
        bool bVar2;
        char cVar3;
        char cVar4;
        byte bVar5;
        int iVar6;
        uint uVar7;
        uint uVar8;
        RenderPassEffect* this_03;
        shared_ptr* psVar9;
        shared_ptr<Shader>* this_04;
        Shader* this_05;
        Layout* pLVar10;
        RenderPipelineState* pRVar11;
        undefined7 extraout_var;
        HashedString* pHVar12;
        SunlightDirectLighting* pSVar13;
        VertexAnimation* this_06;
        vector_map* pvVar14;
        vector_map* pvVar15;
        long lVar16;
        TextureAtlasReference* pTVar17;
        undefined* puVar18;
        float* pfVar19;
        QuaternionT<float>* this_07;
        Vector4T* pVVar20;
        undefined8* puVar21;
        vector* pvVar22;
        PointLightIndicesEffect* pPVar23;
        long* plVar24;
        GlobalEnvironmentMapping* pGVar25;
        ulonglong uVar26;
        IrradianceEffect* this_08;
        Matrix44T* pMVar27;
        RT7Core* this_09;
        Matrix44T* pMVar28;
        undefined4* puVar29;
        InputAssemblerState* pIVar30;
        BuiltinStates* pBVar31;
        RasteriserState* pRVar32;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_10;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_11;
        char* pcVar33;
        Layout* pLVar34;
        Vector3T* pVVar35;
        type* ptVar36;
        DrawCallState* pDVar37;
        undefined8* puVar38;
        undefined4 uVar39;
        float fVar40;
        undefined4 uVar41;
        undefined4 uVar42;
        EffectList in_stack_fffffffffffffea8;
        undefined8 local_138;
        undefined4 uStack_130;
        undefined4 uStack_12c;
        undefined1 local_128[64];
        DrawCallState local_e8;
        float local_b8[4];
        ColourHSL local_a8;
        GeometryBatchRenderer* local_98;
        SceneViewData* local_90;
        float local_88;
        float local_84;
        long local_80;
        GeometryBatch* local_78;
        RenderContext* local_70;
        Shader* local_68;
        undefined4 local_5c;
        ModelMaterial* local_58;
        PointLightIndicesEffect* local_50;
        ShaderProgram* local_48;
        int local_3c;
        MapSquare* local_38;

        uVar42 = (undefined4)((ulong)param_2_00 >> 32);
        uVar41 = (undefined4)param_2_00;
        this_00 = *(GeometryBatchInstance**)(param_2 + 120);
        local_98 = param_1;
        local_80 = param_2;
        local_70 = param_3;
        local_3c = param_8;
        if (this_00 == (GeometryBatchInstance*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pGeometryBatchInstance != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      56, (char*)0);
        }
        local_78 = (GeometryBatch*)this_00->GetGeometryBatch();
        local_38 = (MapSquare*)this_00->field_656;
        local_58 = (ModelMaterial*)this_00->GetMaterial();
        this_03 = (RenderPassEffect*)local_58->GetRenderPassEffect(local_3c);
        psVar9 = (shared_ptr*)this_03->GetShader(param_7);
        bVar2 = operator!=(psVar9, (_func_decltype_nullptr*)0);
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      64, "No shader program available for this render pass");
        }
        local_90 = param_7;
        this_04 = (shared_ptr<Shader>*)this_03->GetShader(param_7);
        this_05 = (Shader*)shared_ptr<Shader>::operator*(this_04);
        cVar3 = this_05->IsReady();
        if (cVar3 == '\0') {
            return;
        }
        new (&local_e8) render::DrawCallState(param_4);
        local_48 = (ShaderProgram*)this_05->GetProgram();
        local_48->GetNativeShaderProgram();
        pLVar10 = (Layout*)this_05->second();
        eastl::string::Layout::SSOBeginPtr(pLVar10, (type*)param_4);
        pRVar11 = (RenderPipelineState*)local_e8.GetRenderPipelineState();
        pRVar11->SetShaderProgram(local_48);
        cVar3 = param_9->IsEnabled(51);
        if ((cVar3 == '\0') || (cVar3 = (&this_03->field_16, 51)->Contains(), cVar3 == '\0')) {
            local_5c = 0;
        } else {
            pRVar11 = (RenderPipelineState*)this_00->GetMaterial();
            psVar9 = (shared_ptr*)pRVar11->GetPSTextureSamplerPairs();
            bVar2 = shared_ptr::operator_cast_to_bool(psVar9);
            local_5c = (undefined4)CONCAT71(extraout_var, bVar2);
        }
        puVar38 = &this_03->field_16;
        cVar3 = puVar38->Contains(54);
        if (cVar3 != '\0') {
            uVar39 = FrameTime::GetSecondsSinceProgramStart();
            local_128._0_4_ = uVar39;
            local_138._0_4_ = 0.0;
            local_b8[0] = 65535.0;
            fVar40 = math::Wrap<float>((float*)local_128, (float*)&local_138, local_b8);
            local_68 = (Shader*)CONCAT44(local_68._4_4_, fVar40);
            pHVar12 = (HashedString*)graphics::operator*((graphics*)24);
            local_48->SetShaderConstFloat1(pHVar12, local_68._0_4_);
            pSVar13 = EffectManager::GetEffect<SunlightDirectLighting>(param_9, 54);
            iVar6 = local_58->GetEndPosition();
            pSVar13->SetViewportMapID(iVar6);
        }
        EffectManager::SetShaderConstants((DrawCallState*)param_9, (RenderContext*)&local_e8, (Shader*)local_70,
                                          in_stack_fffffffffffffea8);
        pHVar12 = (HashedString*)graphics::operator*((graphics*)116);
        cVar3 = param_9->IsEnabled(94);
        fVar40 = 0.0;
        if (cVar3 != '\0') {
            fVar40 = (float)local_38->GetCurrentFade();
        }
        local_48->SetShaderConstFloat1(pHVar12, fVar40);
        pHVar12 = (HashedString*)graphics::operator*((graphics*)118);
        fVar40 = (float)local_78->GetFarClip();
        local_48->SetShaderConstFloat1(pHVar12, fVar40);
        DebugReturn::SetShaderConstants(local_48);
        cVar3 = local_78->HasBones();
        local_68 = this_05;
        if (((cVar3 != '\0') || (cVar3 = this_00->GetAnimatesTransparency(), cVar3 != '\0')) ||
            (cVar3 = this_00->GetAnimatedColourType(), cVar3 != '\x02')) {
            this_06 = (VertexAnimation*)this_00->GetVertexAnimation();
            pGVar1 = local_78;
            uVar7 = local_78->GetAlphaTestThreshold();
            uVar8 = pGVar1->GetLabelCount();
            this_06->SetMaxSize(uVar7, uVar8, 0);
            pGVar1 = local_78;
            local_50 = (PointLightIndicesEffect*)local_78->GetBoneIDMap();
            pvVar14 = (vector_map*)pGVar1->GetJointIDMap();
            pvVar15 = (vector_map*)pGVar1->GetMaterial();
            this_05 = local_68;
            this_06->DeferredUpdateAnimation(local_50, pvVar14, pvVar15, 0);
            this_06->SetShaderConstants(local_70, this_05);
        }
        lVar16 = local_58->GetTextureAtlasReference();
        if ((lVar16 != 0) && (cVar3 = puVar38->Contains(63), cVar3 != '\0')) {
            pTVar17 = (TextureAtlasReference*)local_58->GetTextureAtlasReference();
            TextureAtlasing::SetShaderConstants(&local_e8, local_70, this_05, pTVar17, local_98->field_8,
                                                local_98->field_12);
        }
        cVar3 = puVar38->Contains(65);
        if ((cVar3 == '\0') && (cVar3 = puVar38->Contains(81), cVar3 == '\0'))
            goto LAB_1008141d4;
        cVar3 = puVar38->Contains(66);
        cVar4 = '\x01';
        if (cVar3 == '\0') {
            fVar40 = (float)local_38->GetCurrentFade();
            uVar41 = 0;
            uVar42 = 0;
            if (((0.0 <= fVar40) || (cVar3 = param_9->IsEnabled(94), cVar3 == '\0')) &&
                (puVar18 = (undefined*)local_58->data(), puVar18 == AlphaMode::ALPHA_OPAQUE)) {
                cVar4 = this_00->GetAnimatesTransparency();
            }
        }
        cVar3 = IsShadowPass(local_3c);
        if ((cVar3 == '\0') && (local_3c != 9)) {
            uVar7 = 4294967295;
            if (cVar4 != '\0') {
            LAB_1008141aa:
                bVar5 = local_58->GetAlphaTestThreshold();
                uVar7 = (uint)bVar5;
                if (GeometryBatchInstance::m_alphaTestThresholdOverride != '\0') {
                    uVar7 = GeometryBatchInstance::m_alphaTestThresholdOverrideValue;
                }
                if (bVar5 == 0) {
                    uVar7 = (uint)bVar5;
                }
            }
        } else {
            puVar18 = (undefined*)local_58->data();
            uVar7 = 4294967295;
            if (puVar18 == AlphaMode::ALPHA_BLENDED) {
                uVar7 = 90;
            } else if (cVar4 == '\x01')
                goto LAB_1008141aa;
        }
        AlphaTesting::SetShaderConstants(this_05, uVar7);
    LAB_1008141d4:
        this_07 = (QuaternionT<float>*)&local_138;
        local_138 = this_00->GetTint();
        uStack_130 = uVar41;
        uStack_12c = uVar42;
        pfVar19 = (float*)math::QuaternionT<float>::qw(this_07);
        if (*pfVar19 <= 0.0) {
            this_07 = (QuaternionT<float>*)local_38->GetParentLocationType();
        }
        local_b8._0_8_ = *(undefined8*)this_07;
        local_b8._8_8_ = *(undefined8*)(this_07 + 8);
        cVar3 = local_38->HasHighlight();
        this_02 = local_38;
        if (cVar3 == '\0') {
            cVar3 = puVar38->Contains(82);
            if (cVar3 != '\0') {
                TintingEffect::SetShaderConstants(this_05, (Vector4T*)local_b8);
            }
        } else if (*(char*)(local_80 + 144) == '\0') {
            cVar3 = puVar38->Contains(82);
            if (cVar3 == '\0') {
                new (local_128) math::Vector4T<float>(0.0);
                ObjectHighlight::SetShaderConstants(this_05, (Vector4T*)local_128, 0.0);
            } else {
                ObjectHighlight::SetShaderConstants(this_05, (Vector4T*)local_b8, -0.5);
            }
        } else if (*(char*)(local_80 + 145) == '\0') {
            puVar21 = (undefined8*)local_38->GetMapSquarePointLights();
            local_128._0_8_ = *puVar21;
            local_128._8_8_ = puVar21[1];
            fVar40 = (float)this_02->GetHighlightSilhouetteAlpha();
            local_128._12_4_ = fVar40 * (float)local_128._12_4_;
            ObjectHighlight::SetShaderConstants(this_05, (Vector4T*)local_128, 0.0);
        } else {
            pVVar20 = (Vector4T*)local_38->GetMapSquarePointLights();
            fVar40 = (float)this_02->GetHighlightScale();
            ObjectHighlight::SetShaderConstants(this_05, pVVar20, fVar40);
        }
        pVVar35 = (Vector3T*)26;
        cVar3 = puVar38->Contains();
        if (cVar3 != '\0') {
            pLVar10 = (Layout*)local_38->GetPointLightBounds();
            pvVar22 = eastl::string::Layout::SSOBeginPtr(pLVar10, (type*)pVVar35);
            local_50._0_4_ = *(float*)pvVar22;
            pfVar19 = (float*)pLVar10->second();
            local_50 = (PointLightIndicesEffect*)CONCAT44(local_50._4_4_, local_50._0_4_ + *pfVar19);
            pfVar19 = (float*)pLVar10->y();
            local_84 = *pfVar19;
            pfVar19 = (float*)pLVar10->qw();
            uVar7 = 0;
            new (&local_a8) math::ColourHSL(local_50._0_4_, 0.0, local_84 + *pfVar19);
            local_128._0_8_ = math::operator*((Vector3T*)&local_a8, 0.5);
            local_128._8_4_ = uVar7;
            psVar9 = (shared_ptr*)local_128->GetEffect(pVVar35);
            bVar2 = shared_ptr::operator_cast_to_bool(psVar9);
            if (bVar2) {
                pPVar23 = (PointLightIndicesEffect*)shared_ptr<PointLightIndicesEffect>::operator->(
                    (shared_ptr<PointLightIndicesEffect>*)psVar9);
                cVar3 = pPVar23->IsReady();
                if (cVar3 != '\0') {
                    local_50 = (PointLightIndicesEffect*)shared_ptr<PointLightIndicesEffect>::operator->(
                        (shared_ptr<PointLightIndicesEffect>*)psVar9);
                    iVar6 = local_38->GetLevel();
                    local_50->SetLevel(iVar6);
                    pPVar23 = (PointLightIndicesEffect*)shared_ptr<PointLightIndicesEffect>::operator->(
                        (shared_ptr<PointLightIndicesEffect>*)psVar9);
                    pPVar23->SetFineCoordBounds(pLVar10);
                    plVar24 = (long*)shared_ptr<PointLightIndicesEffect>::operator->(
                        (shared_ptr<PointLightIndicesEffect>*)psVar9);
                    (**(code**)(*plVar24 + 56))(plVar24, &local_e8, local_70, this_05);
                }
            }
        }
        if ((char)local_5c != '\0') {
            pGVar25 = (GlobalEnvironmentMapping*)EffectManager::GetEffect<SunlightDirectLighting>(param_9, 51);
            pRVar11 = (RenderPipelineState*)this_00->GetMaterial();
            psVar9 = (shared_ptr*)pRVar11->GetPSTextureSamplerPairs();
            uVar26 = FrameTime::GetCurrentTimeMS();
            this_05 = local_68;
            pGVar25->SetTextureOverride(psVar9, uVar26);
            (*(code*)pGVar25->field_0[7])(pGVar25, &local_e8, local_70, this_05);
        }
        cVar3 = puVar38->Contains(21);
        if (cVar3 != '\0') {
            cVar3 = param_9->IsEnabled(40);
            if (cVar3 == '\0') {
                this_08 = (IrradianceEffect*)local_38->GetIrradianceEffect();
                this_08->SetShaderConstants(this_05);
            } else {
                IrradianceEffect::SetIdentityShaderConstants(this_05);
            }
        }
        cVar3 = puVar38->Contains(13);
        if (cVar3 != '\0') {
            InstanceColourEffect::SetShaderConstants(this_05, (Vector4T*)&this_00->field_784);
        }
        uVar41 = FrameTime::GetSecondsSinceProgramStart();
        local_128._0_4_ = uVar41;
        local_a8.field_0 = 0.0;
        local_88 = 65535.0;
        fVar40 = math::Wrap<float>((float*)local_128, &local_a8.field_0, &local_88);
        local_68 = (Shader*)CONCAT44(local_68._4_4_, fVar40);
        pHVar12 = (HashedString*)graphics::operator*((graphics*)24);
        local_48->SetShaderConstFloat1(pHVar12, local_68._0_4_);
        cVar3 = IsShadowPass(local_3c);
        if (cVar3 == '\0') {
            pHVar12 = (HashedString*)graphics::operator*((graphics*)0);
            pMVar27 = (Matrix44T*)local_38->GetMaterial();
            local_48->SetShaderConstMatrix4(pHVar12, 1, pMVar27, 0);
        } else {
            pMVar27 = (Matrix44T*)local_38->GetMaterial();
            pSVar13 = EffectManager::GetEffect<SunlightDirectLighting>(param_9, 79);
            this_09 = (RT7Core*)pSVar13->GetDefaultValue();
            pMVar28 = (Matrix44T*)this_09->GetImmediateThreadPool();
            math::operator*((math*)local_128, pMVar27, pMVar28);
            pHVar12 = (HashedString*)graphics::operator*((graphics*)0);
            local_48->SetShaderConstMatrix4(pHVar12, 1, local_128, 0);
            cVar3 = param_9->IsEnabled(36);
            if (cVar3 != '\0') {
                pHVar12 = (HashedString*)graphics::operator*((graphics*)&DAT_00000001);
                pMVar27 = (Matrix44T*)local_38->GetMaterial();
                local_48->SetShaderConstMatrix4(pHVar12, 1, pMVar27, 0);
            }
        }
        cVar3 = puVar38->Contains(108);
        if (cVar3 != '\0') {
            pHVar12 = (HashedString*)graphics::operator*((graphics*)68);
            pVVar20 = (Vector4T*)local_58->GetRefractionParams();
            local_48->SetShaderConstVector4(pHVar12, 1, pVVar20, 1);
        }
        cVar3 = puVar38->Contains(116);
        if (cVar3 != '\0') {
            pHVar12 = (HashedString*)graphics::operator*((graphics*)205);
            this_01 = local_90;
            puVar29 = (undefined4*)local_90->GetStippleNearClipParams();
            local_58 = (ModelMaterial*)CONCAT44(local_58._4_4_, *puVar29);
            lVar16 = this_01->GetStippleNearClipParams();
            local_68 = (Shader*)CONCAT44(local_68._4_4_, 1.0 / *(float*)(lVar16 + 4));
            puVar29 = (undefined4*)this_01->GetStippleFarClipParams();
            local_50 = (PointLightIndicesEffect*)CONCAT44(local_50._4_4_, *puVar29);
            lVar16 = this_01->GetStippleFarClipParams();
            local_48->SetShaderConstFloat4(pHVar12, local_58._0_4_, local_68._0_4_, local_50._0_4_,
                                           1.0 / *(float*)(lVar16 + 4));
        }
        pIVar30 = (InputAssemblerState*)local_78->GetIAState(*(uint*)(local_80 + 112));
        local_e8.SetInputAssemblerState(pIVar30);
        cVar3 = IsShadowPass(local_3c);
        if (cVar3 != '\0') {
            ptVar36 = (type*)36;
            cVar3 = param_9->IsEnabled();
            if (cVar3 != '\0') {
                this = (OBB*)(local_80 + 16);
                pvVar22 = local_90->SSOBeginPtr(ptVar36);
                pvVar22 = pvVar22->SSOBeginPtr(ptVar36);
                cVar3 = IsInside(pvVar22);
                if (cVar3 != '\0') {
                    pDVar37 = &local_e8;
                    pRVar11 = (RenderPipelineState*)pDVar37->GetRenderPipelineState();
                    pBVar31 = (BuiltinStates*)pDVar37->Instance();
                    pRVar32 = (RasteriserState*)pBVar31->GetShadowPassRS(0);
                    pRVar11->SetRasteriserState(pRVar32);
                }
            }
        }
        bVar5 = puVar38->Contains(0);
        if (local_3c == 8) {
            this_10 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_e8.GetRenderPipelineState();
            this_11 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_10);
            cVar3 = local_38->GetHighlightsIgnoreDepth();
            if (cVar3 != '\0') {
                pcVar33 = (char*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_11);
                if (*pcVar33 != '\0') {
                    pDVar37 = &local_e8;
                    pLVar34 = (Layout*)pDVar37->GetRenderPipelineState();
                    lVar16 = pDVar37->Instance();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::SetHeapSize(pLVar34, lVar16 + 1080);
                }
            }
            DrawHighlightedPrimitives(local_98, local_70, &local_e8, local_80, (uint)(bVar5 ^ 1) * 3 + 1, this_05);
            pLVar34 = (Layout*)local_e8.GetRenderPipelineState();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(pLVar34, (ulong)this_11);
        } else {
            DrawPrimitives();
        }
        if ((char)local_5c != '\0') {
            pGVar25 = (GlobalEnvironmentMapping*)EffectManager::GetEffect<SunlightDirectLighting>(param_9);
            new (local_128) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            uVar26 = FrameTime::GetCurrentTimeMS();
            pGVar25->SetTextureOverride(local_128, uVar26);
            local_128->~shared_ptr();
        }
        local_e8.~DrawCallState();
    }

    // 0x100814980, 288 bytes, placed by class name and debug map
    // GeometryBatchRenderer::DrawHighlightedPrimitives(render::RenderContext&, render::DrawCallState&, GeometryBatch_DE const&, render::PrimitiveType, Shader&)
    void GeometryBatchRenderer::DrawHighlightedPrimitives(undefined8 param_1, undefined8 param_2_00, undefined8 param_2,
                                                          long param_3, undefined4 param_5, Shader* param_6) {
        GeometryBatchInstance* this;
        Model* this_00;
        char cVar1;
        Vector4T<float>* this_01;
        float fVar2;
        Vector4T<float> local_68[24];
        undefined1* local_48;
        undefined8 local_40;
        undefined4 local_34;

        this = *(GeometryBatchInstance**)(param_3 + 120);
        local_40 = param_2;
        local_34 = param_5;
        GetGeometryBatch();
        this_00 = field_656;
        cVar1 = this_00->HasHighlightedSection();
        if (cVar1 != '\0') {
            local_48 = &field_728;
            cVar1 = local_48->empty();
            if ((cVar1 == '\0') && (*(long*)(param_3 + 104) != 0)) {
                DrawPrimitives();
                if (*(char*)(param_3 + 144) == '\0') {
                    this_01 = local_68;
                    math::Vector4T<float>::Vector4T(this_01, 0.0);
                    fVar2 = 0.0;
                } else {
                    this_01 = (Vector4T<float>*)this_00->GetSwipeConfig();
                    fVar2 = (float)this_00->GetHighlightedSectionScale();
                }
                ObjectHighlight::SetShaderConstants(param_6, (Vector4T*)this_01, fVar2);
            }
        }
        DrawPrimitives();
    }

    // 0x100814aa0, 1296 bytes, placed by class name and debug map
    // GeometryBatchRenderer::DrawPrimitives(render::RenderContext&, render::DrawCallState&, GeometryBatch const&, unsigned int, render::PrimitiveType, eastl::vector<SourceModelExternalIndexSectionRangeOnly, eastl::allocator> const&, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*, unsigned char, render::QueryView*) const
    void
    GeometryBatchRenderer::DrawPrimitives(undefined8 param_1_00, RenderContext* param_1, undefined8 param_2,
                                          GeometryBatch* param_3, uint param_4, int param_6,
                                          vector<DebugTri<DebugDataBasic>, eastl::allocator>* param_7,
                                          vector_map<int, int, eastl::less<int>, eastl::allocator,
                                                     eastl::vector<eastl::pair<int, int>, eastl::allocator>>* param_8,
                                          uchar param_9, CommandLine* param_10) {
        char cVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        undefined4 uVar7;
        Component* this;
        type* ptVar8;
        int* piVar9;
        uint* puVar10;
        long lVar11;
        long lVar12;
        vector* this_00;
        undefined8 uVar13;
        Layout* this_01;
        undefined8 uVar14;
        type* ptVar15;
        float fVar16;
        uint local_ea4;
        FixedIndexPrimitiveBatchData<300ul> local_e98[3680];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (4 < param_4) {
            /* WARNING: Subroutine does not return */
            LogAssert("lodLevel < MAX_LOD_LEVELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      408, (char*)0);
        }
        cVar1 = param_3->VertexBuffersInitialised();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("geometryBatch.VertexBuffersInitialised()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      409, (char*)0);
        }
        this = (Component*)param_3->GetIndexBuffer(param_4);
        ptVar8 = (type*)eastl::vector<DebugTri<DebugDataBasic>, eastl::allocator>::size(param_7);
        if ((param_8 == (vector_map<int, int, eastl::less<int>, eastl::allocator,
                                    eastl::vector<eastl::pair<int, int>, eastl::allocator>>*)0) ||
            (ptVar8 == (type*)0)) {
            uVar3 = GetLoopLength();
            if (uVar3 != 0) {
                if ((param_10 == (CommandLine*)0) || (cVar1 = param_10->IsCreated(), cVar1 == '\0')) {
                    param_1->DrawIndexedPrimitives(param_2, param_6, uVar3, 0);
                } else {
                    cVar1 = param_10->HasSubQueries();
                    if ((cVar1 == '\0') || (param_6 != 4)) {
                        param_10->Begin(0);
                        param_1->DrawIndexedPrimitives(param_2, param_6, uVar3, 0);
                        param_10->End(0);
                    } else {
                        uVar2 = param_10->GetPos();
                        fVar16 = (float)ceil((float)(uVar3 / 3) / (float)uVar2);
                        iVar6 = param_10->GetPos();
                        if (iVar6 != 0) {
                            uVar2 = 0;
                            iVar6 = 0;
                            do {
                                iVar5 = eastl::min<unsigned int>(iVar6 + (int)(long)fVar16, uVar3 / 3);
                                if (iVar5 - iVar6 != 0) {
                                    param_10->Begin(uVar2);
                                    param_1->DrawIndexedPrimitives(param_2, 4, (iVar5 - iVar6) * 3, iVar6 * 3);
                                    param_10->End(uVar2);
                                    iVar6 = iVar5;
                                }
                                uVar2 = uVar2 + 1;
                                uVar4 = param_10->GetPos();
                            } while (uVar2 < uVar4);
                        }
                    }
                }
            }
        } else {
            render::FixedIndexPrimitiveBatchData<300ul>::FixedIndexPrimitiveBatchData(local_e98);
            local_ea4 = 0;
            iVar6 = 0;
            ptVar15 = (type*)0;
            do {
                piVar9 = (int*)eastl::vector<SourceModelExternalIndexSectionRangeOnly, eastl::allocator>::operator[](
                    (vector<SourceModelExternalIndexSectionRangeOnly, eastl::allocator>*)param_7, (ulong)ptVar15);
                puVar10 = (uint*)std::array<IndexRange, 5ul>::operator[]((array<IndexRange, 5ul>*)(piVar9 + 1),
                                                                         (ulong)param_4);
                lVar11 =
                    eastl::vector_map<int, int, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, int>, eastl::allocator>>::find(param_8, piVar9);
                lVar12 = param_8->end();
                if (param_9 == '\0') {
                    if ((lVar11 != lVar12) && (cVar1 = ((lVar11 + 4))->IsHidden(), cVar1 != '\0'))
                        goto LAB_100814ca0;
                LAB_100814cf0:
                    if (ptVar8 + -1 == ptVar15) {
                        uVar3 = puVar10[1];
                        uVar2 = GetLoopLength();
                        if (uVar2 < uVar3) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("(currentIndexStart + (indexRange.m_indexEnd - currentIndexStart)) <= "
                                      "indexBuffer.GetIndexCount()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/GeometryBatchRenderer.cpp",
                                      459, (char*)0);
                        }
                        uVar3 = puVar10[1];
                        GetCurrentX();
                        local_e98->AddPrimitiveBatch(uVar3 - local_ea4, local_ea4);
                    } else {
                        iVar6 = iVar6 + 1;
                    }
                } else {
                    if (lVar11 != lVar12) {
                        cVar1 = ((lVar11 + 4))->IsHidden();
                        if ((cVar1 == '\0') && (cVar1 = ((lVar11 + 4))->HasCustomisationMask(param_9), cVar1 == '\x01'))
                            goto LAB_100814cf0;
                    }
                LAB_100814ca0:
                    if (iVar6 != 0) {
                        uVar3 = *puVar10;
                        uVar2 = GetLoopLength();
                        if (uVar2 < uVar3) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("(currentIndexStart + (indexRange.m_indexStart - currentIndexStart)) <= "
                                      "indexBuffer.GetIndexCount()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/GeometryBatchRenderer.cpp",
                                      447, (char*)0);
                        }
                        uVar3 = *puVar10;
                        GetCurrentX();
                        local_e98->AddPrimitiveBatch(uVar3 - local_ea4, local_ea4);
                    }
                    local_ea4 = puVar10[1];
                    iVar6 = 0;
                }
                ptVar15 = ptVar15 + 1;
            } while (ptVar8 != ptVar15);
            iVar6 = render::FixedIndexPrimitiveBatchData<300ul>::GetBatchCount(local_e98);
            if (iVar6 != 0) {
                uVar7 = render::FixedIndexPrimitiveBatchData<300ul>::GetBatchCount(local_e98);
                this_00 = local_e98->SSOBeginPtr(ptVar15);
                uVar13 = this_00->HeapBeginPtr();
                this_01 = (Layout*)local_e98->GetStartIndexByteOffset();
                uVar14 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                param_1->DrawMultiIndexedPrimitives(param_2, param_6, uVar7, uVar13, uVar14);
            }
            local_e98->~FixedIndexPrimitiveBatchData();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100814fb0, 912 bytes, placed by class name and debug map
    // GeometryBatchRenderer::InitialiseVertexDeclarations()
    void GeometryBatchRenderer::InitialiseVertexDeclarations() {
        uint uVar1;
        int iVar2;
        ulong uVar3;
        VertexDeclarationManager* pVVar4;
        Singleton<render::VertexDeclarationManager>* pSVar5;
        ShaderProgramVariable local_298;
        ShaderProgramVariable local_270;
        ShaderProgramVariable local_248;
        ShaderProgramVariable local_220;
        ShaderProgramVariable local_1f8;
        ShaderProgramVariable local_1d0;
        ShaderProgramVariable local_1a8;
        ShaderProgramVariable local_180;
        ShaderProgramVariable local_158;
        ShaderProgramVariable local_130;
        ShaderProgramVariable local_108;
        ShaderProgramVariable local_e0;
        ShaderProgramVariable local_b8;
        ShaderProgramVariable local_90;
        ShaderProgramVariable local_68;
        ShaderProgramVariable local_40;

        uVar1 = graphics::operator*((graphics*)217);
        local_298.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)238);
        local_270.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)226);
        local_248.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)227);
        local_220.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)235);
        local_1f8.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)236);
        local_1d0.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)233);
        local_1a8.GetVertexElementDesc(uVar1);
        uVar3 = local_298.data();
        render::VertexDeclaration::Create((VertexElementDesc*)&m_vertexDecl, uVar3, (void*)7, 0);
        iVar2 = m_vertexDecl.GetVertexStride(0);
        if (iVar2 != 8) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDecl.GetVertexStride(0) == sizeof(GeometryBatchVertexPosLP)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      358, (char*)0);
        }
        pSVar5 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        iVar2 = m_vertexDecl.GetVertexStride(1);
        if (iVar2 != 24) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDecl.GetVertexStride(1) == sizeof(GeometryBatchVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      359, (char*)0);
        }
        pVVar4 = (VertexDeclarationManager*)pSVar5->Instance();
        pVVar4->Register((VertexDeclaration*)&m_vertexDecl);
        uVar1 = graphics::operator*((graphics*)217);
        local_180.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)238);
        local_158.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)226);
        local_130.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)227);
        local_108.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)235);
        local_e0.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)236);
        local_b8.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)233);
        local_90.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)218);
        local_68.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)219);
        local_40.GetVertexElementDesc(uVar1);
        uVar3 = local_180.data();
        render::VertexDeclaration::Create((VertexElementDesc*)&m_vertexDeclSkinned, uVar3, (void*)9, 0);
        iVar2 = m_vertexDeclSkinned.GetVertexStride(0);
        if (iVar2 != 8) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDeclSkinned.GetVertexStride(0) == sizeof(GeometryBatchVertexPosLP)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      391, (char*)0);
        }
        iVar2 = m_vertexDeclSkinned.GetVertexStride(1);
        if (iVar2 != 24) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDeclSkinned.GetVertexStride(1) == sizeof(GeometryBatchVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      392, (char*)0);
        }
        pSVar5 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDeclSkinned;
        iVar2 = m_vertexDeclSkinned.GetVertexStride(2);
        if (iVar2 != 8) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDeclSkinned.GetVertexStride(2) == sizeof(GeometryBatchVertexSkin)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchRenderer.cpp",
                      393, (char*)0);
        }
        pVVar4 = (VertexDeclarationManager*)pSVar5->Instance();
        pVVar4->Register((VertexDeclaration*)&m_vertexDeclSkinned);
    }

    // 0x100815340, 80 bytes, placed by class name and debug map
    // GeometryBatchRenderer::DestroyRenderingResources()
    void GeometryBatchRenderer::DestroyRenderingResources() {
        VertexDeclarationManager* pVVar1;
        Singleton<render::VertexDeclarationManager>* this_00;

        pVVar1 = (VertexDeclarationManager*)Instance();
        pVVar1->Unregister((VertexDeclaration*)&m_vertexDecl);
        this_00 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        m_vertexDecl.Destroy();
        pVVar1 = (VertexDeclarationManager*)this_00->Instance();
        pVVar1->Unregister((VertexDeclaration*)&m_vertexDeclSkinned);
        m_vertexDeclSkinned.Destroy();
    }

    // 0x1008524a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.69
    void ___cxx_global_var_init_69() {
        new (&GeometryBatchRenderer::m_vertexDecl) render::VertexDeclaration();
        ___cxa_atexit(render::VertexDeclaration::~VertexDeclaration, &GeometryBatchRenderer::m_vertexDecl, 4294967296);
    }

    // 0x1008524e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.70
    void ___cxx_global_var_init_70() {
        new (&GeometryBatchRenderer::m_vertexDeclSkinned) render::VertexDeclaration();
        ___cxa_atexit(render::VertexDeclaration::~VertexDeclaration, &GeometryBatchRenderer::m_vertexDeclSkinned,
                      4294967296);
    }

} // namespace jag::graphics
