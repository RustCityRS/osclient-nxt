// libs/graphics/runetek7/lighting/shadowmapping/PointLightSMPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "PointLightSMPass.h"

namespace jag::graphics {
    // 0x1008ad900, 16 bytes, complete-object constructor, placed by class name and debug map
    // PointLightSMPass::PointLightSMPass(PointLightSM*, render::CubeFace, ThreadPool*): jumps straight to the base-object constructor

    // 0x1008ad910, 16 bytes, complete-object destructor, placed by class name and debug map
    // PointLightSMPass::~PointLightSMPass(): jumps straight to the base-object destructor

    // 0x1008af900, 160 bytes, base-object constructor, placed by class name
    // PointLightSMPass::PointLightSMPass(PointLightSM*, render::CubeFace, ThreadPool*)
    void PointLightSMPass::PointLightSMPass(vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_1,
                                            undefined8 param_3, undefined8 param_4) {
        BaseConfigTypeList* this_00;
        undefined8 uVar1;

        this_00 =
            (BaseConfigTypeList*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_1);
        uVar1 = this_00->GetConfigGroup();
        new (this) ShadowPass(1, uVar1, param_4);
        field_0 = &PTR__PointLightSMPass_100f183d0;
        field_800 = param_1;
        new (field_816) ViewTransforms();
        new (field_1024) math::OBB();
        new (field_1104) math::Sphere();
        *(undefined8*)(field_1104 + 16) = 4294967295;
        field_1128 = 4294967295;
    }

    // 0x1008af9a0, 16 bytes, base-object destructor, placed by class name
    // PointLightSMPass::~PointLightSMPass()
    void PointLightSMPass::~PointLightSMPass() {
        ~ShadowPass();
    }

    // 0x1008af9b0, 32 bytes, deleting destructor, placed by class name
    // PointLightSMPass::~PointLightSMPass()
    void PointLightSMPass::~PointLightSMPass() {
        ~PointLightSMPass(this);
        operator_delete(this);
    }

    // 0x1008af9d0, 16 bytes, placed by class name
    // PointLightSMPass::PreparePass(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void PointLightSMPass::PreparePass(RT7Core* param_1, EffectManager* param_2, SceneViewData* param_3,
                                       DrawableQueue* param_4) {
        PreparePass(param_1, param_2, param_3, param_4);
    }

    // 0x1008af9e0, 1312 bytes, placed by class name
    // PointLightSMPass::BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&, DrawableQueue const&)
    undefined8 PointLightSMPass::BeginPass(DrawCallState* param_1, RenderContext* param_2, EffectManager* param_3,
                                           SceneViewData* param_4, DrawableQueue* param_5) {
        undefined1* this_00;
        EffectManager* pEVar1;
        undefined1 uVar2;
        bool bVar3;
        uint uVar4;
        ViewTransforms* this_01;
        NXTPixToolkit* pNVar5;
        Matrix44T* pMVar6;
        long lVar7;
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>* pvVar8;
        AddMemberOldV1* this_02;
        SunlightDirectLighting* pSVar9;
        RT7Core* this_03;
        vector* pvVar10;
        Matrix44T* pMVar11;
        Viewport* pVVar12;
        OutputMergerState* pOVar13;
        undefined8* puVar14;
        PrimitiveShaderFamily* pPVar15;
        ShaderProgram* this_04;
        InputAssemblerState* this_05;
        VertexDeclaration* pVVar16;
        OSRenderCore_RenderThread_Common* pOVar17;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_06;
        VertexBuffer* pVVar18;
        RenderPipelineState* pRVar19;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_07;
        Layout* this_08;
        RenderToTextureHelper* this_09;
        type* ptVar20;
        DrawCallState* pDVar21;
        undefined1 auVar22[16];
        undefined1 local_138[64];
        Matrix44T local_f8;
        EffectManager* local_b0;
        DrawCallState* local_a8;
        RenderContext* local_a0;
        DrawCallState local_98;
        undefined4 local_68;
        undefined4 local_64;
        float local_60;
        float local_5c;
        ulong local_58;
        ulong local_50;
        DrawableQueue* local_48;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_40 = 0.0;
        local_3c = 0.0;
        local_58 = 0;
        local_50 = 0;
        local_b0 = param_3;
        local_a8 = param_1;
        local_a0 = param_2;
        local_48 = param_5;
        this_01 = (ViewTransforms*)param_4->SSOBeginPtr(param_1);
        this_01->GetNearFarPlaneDistances(&local_40, &local_3c);
        new (&local_f8) math::Vector3T<float>(3.4028235e+38);
        new (&local_98) math::Vector3T<float>(-3.4028235e+38);
        new ((local_138 + 32)) math::AABB((Vector3T*)&local_f8, (Vector3T*)&local_98);
        pMVar6 = &local_f8;
        new (pMVar6) math::Vector3T<float>(3.4028235e+38);
        new (&local_98) math::Vector3T<float>(-3.4028235e+38);
        new (local_138) math::AABB(pMVar6, (Vector3T*)&local_98);
        local_38 = local_40;
        local_34 = local_3c;
        pNVar5 = (NXTPixToolkit*)param_4->SSOBeginPtr(pMVar6);
        pMVar6 = (Matrix44T*)pNVar5->GetScreen();
        uVar2 = UpdateLightViewMatrices(this, &local_38, &local_34, &local_58, &local_50, (AABB*)(local_138 + 32),
                                        (AABB*)local_138, pMVar6, local_48);
        local_48 = (DrawableQueue*)CONCAT71(local_48._1_7_, uVar2);
        lVar7 = field_800->GetShadowParams();
        if (*(int*)(lVar7 + 4) == 0) {
            local_38 = local_40;
            local_34 = local_3c;
        }
        new (&local_f8) math::Matrix44T<float>();
        local_68 = math::Deg2Rad(90.0);
        pvVar8 = (vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)
                     param_4->GetStaticChildren();
        this_02 = (AddMemberOldV1*)
            eastl::vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar8, 0);
        local_64 = this_02->GetViewAspectRatio();
        local_60 = local_38;
        local_5c = local_34;
        uVar4 = this_02->GetID();
        ptVar20 = (type*)(ulong)uVar4;
        math::Matrix44PerspectiveFovLH<float>(local_68, local_64, local_60, local_5c, &local_f8);
        this_00 = field_816;
        pNVar5 = (NXTPixToolkit*)param_4->SSOBeginPtr(ptVar20);
        pMVar6 = (Matrix44T*)pNVar5->GetScreen();
        this_00->Set(pMVar6, &local_f8);
        pEVar1 = local_b0;
        ptVar20 = (type*)36;
        pSVar9 = EffectManager::GetEffect<SunlightDirectLighting>(local_b0);
        this_03 = (RT7Core*)param_4->SSOBeginPtr(ptVar20);
        pMVar6 = (Matrix44T*)this_03->GetImmediateThreadPool();
        pSVar9->SetLightViewProjTrans(pMVar6);
        pvVar10 = param_4->SSOBeginPtr(pMVar6);
        pvVar10 = pvVar10->SSOBeginPtr(pMVar6);
        pSVar9->SetLightPos(pvVar10);
        pSVar9->SetNearFarClip(local_40, local_3c);
        pSVar9 = EffectManager::GetEffect<SunlightDirectLighting>(pEVar1, 79);
        pMVar6 = (Matrix44T*)this_00->GetScreen();
        this_00->GetOrigin();
        ViewTransformsEffect::SetViewTransforms((Matrix44T*)pSVar9, pMVar6, local_38, local_34);
        if (((((char)local_48 == '\0') && (PointLightSMManager::m_enableForcedUpdates == '\0')) &&
             (*(ulong*)(field_1104 + 16) == local_58)) &&
            (field_1128 == local_50)) {
            pMVar11 = (Matrix44T*)this_00->GetScreen();
            pNVar5 = (NXTPixToolkit*)param_4->SSOBeginPtr(pMVar6);
            pMVar6 = (Matrix44T*)pNVar5->GetScreen();
            bVar3 = math::operator!=(pMVar11, pMVar6);
            if (!bVar3) {
                pMVar6 = (Matrix44T*)this_00->GetOrigin();
                bVar3 = math::operator!=(pMVar6, &local_f8);
                if (!bVar3) {
                    return 0;
                }
            }
        }
        pDVar21 = local_a8;
        pVVar12 = (Viewport*)local_a8->GetOutputMergerState();
        pvVar8 = (vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)
                     param_4->GetStaticChildren();
        uVar4 = eastl::vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar8, 0);
        render::OutputMergerState::SetViewports(pVVar12, uVar4);
        pOVar13 = (OutputMergerState*)pDVar21->GetOutputMergerState();
        puVar14 = (undefined8*)param_4->GetRenderTargets();
        pOVar13->SetRenderTargets((RenderTargets*)*puVar14);
        *(ulong*)(field_1104 + 16) = local_58;
        field_1128 = local_50;
        pDVar21 = &local_98;
        render::DrawCallState::DrawCallState(pDVar21);
        pPVar15 = (PrimitiveShaderFamily*)pDVar21->Instance();
        this_04 = (ShaderProgram*)pPVar15->GetShaderProgram(0);
        this_05 = (InputAssemblerState*)local_98.GetInputAssemblerState();
        pVVar16 = (VertexDeclaration*)this_04->second();
        pOVar17 = (OSRenderCore_RenderThread_Common*)
            eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_800);
        this_06 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)pOVar17->GetRenderStateNXT();
        pVVar18 = (VertexBuffer*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_06);
        this_05->SetVertexStreamData(pVVar16, pVVar18);
        pRVar19 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        pRVar19->SetShaderProgram(this_04);
        pDVar21 = &local_98;
        this_07 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar21->GetRenderPipelineState();
        auVar22 = pDVar21->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_07, (EntityHighlight**)(auVar22._0_8_ + 1524), auVar22._8_8_);
        pDVar21 = &local_98;
        pRVar19 = (RenderPipelineState*)pDVar21->GetRenderPipelineState();
        lVar7 = pDVar21->Instance();
        pRVar19->SetRasteriserState((RasteriserState*)(lVar7 + 1200));
        pDVar21 = &local_98;
        this_08 = (Layout*)pDVar21->GetRenderPipelineState();
        lVar7 = pDVar21->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_08, lVar7 + 900);
        pVVar12 = (Viewport*)local_98.GetOutputMergerState();
        pvVar8 = (vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)
                     param_4->GetStaticChildren();
        uVar4 = eastl::vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar8, 0);
        render::OutputMergerState::SetViewports(pVVar12, uVar4);
        pOVar13 = (OutputMergerState*)local_98.GetOutputMergerState();
        puVar14 = (undefined8*)param_4->GetRenderTargets();
        pOVar13->SetRenderTargets((RenderTargets*)*puVar14);
        pOVar17 = (OSRenderCore_RenderThread_Common*)
            eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_800);
        this_09 = (RenderToTextureHelper*)pOVar17->GetRenderStateNXT();
        this_09->RenderQuad(local_a0, &local_98);
        local_98.~DrawCallState();
        return 1;
    }

    // 0x1008aff00, 736 bytes, placed by class name
    // PointLightSMPass::UpdateLightViewMatrices(float&, float&, unsigned long&, unsigned long&, math::AABB&, math::AABB&, math::Matrix44T<float> const&, DrawableQueue const&)
    undefined8 PointLightSMPass::UpdateLightViewMatrices(float* param_1, float* param_2, ulong* param_3, ulong* param_4,
                                                         AABB* param_5, AABB* param_6, Matrix44T* param_7,
                                                         DrawableQueue* param_8) {
        float fVar1;
        float* pfVar2;
        ulong* puVar3;
        char cVar4;
        undefined4 uVar5;
        Layout* this_00;
        long lVar6;
        long lVar7;
        vector* pvVar8;
        ulong uVar9;
        Vector3T<float>* pVVar10;
        float* pfVar11;
        int iVar12;
        NXTPixToolkit* pNVar13;
        AABB* pAVar14;
        undefined8 uVar15;
        undefined1 local_138[40];
        ulong* local_f8;
        ulong* local_f0;
        int local_e4;
        OBB local_d8;
        OBB local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_88) math::OBB();
        new (&local_d8) math::OBB();
        *param_3 = 0;
        *param_4 = 0;
        uVar15 = 0;
        iVar12 = 0;
        local_f8 = param_4;
        local_f0 = param_3;
        do {
            uVar5 = ((PointLightSMPass*)this)->GetPos();
            local_e4 = iVar12;
            this_00 = (Layout*)param_8->GetGroup(iVar12, uVar5);
            lVar6 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            local_138._32_8_ = this_00->end();
            if (lVar6 != local_138._32_8_) {
                do {
                    lVar7 = std::unique_ptr<DrawableElement, DrawableElementDeleter>::operator*(
                        (unique_ptr<DrawableElement, DrawableElementDeleter>*)(lVar6 + 8));
                    math::OBB::operator=(&local_88, (OBB*)(lVar7 + 16));
                    math::OBB::operator=(&local_d8, &local_88);
                    local_d8.Transform(param_7);
                    new (local_138) math::AABB(&local_d8);
                    if ((*(byte*)(lVar7 + 96) & 1) != 0) {
                        pNVar13 = (NXTPixToolkit*)local_138;
                        param_5->AddAABB(local_138);
                        pvVar8 = local_138->SSOBeginPtr(pNVar13);
                        uVar9 = pvVar8->hash();
                        puVar3 = local_f0;
                        hash_combine(local_f0, uVar9);
                        pVVar10 = (Vector3T<float>*)local_138->GetScreen();
                        uVar9 = pVVar10->hash();
                        hash_combine(puVar3, uVar9);
                    }
                    if ((*(byte*)(lVar7 + 96) & 2) != 0) {
                        pAVar14 = (AABB*)local_138;
                        param_6->AddAABB(pAVar14);
                        pvVar8 = param_6->SSOBeginPtr(pAVar14);
                        uVar9 = pvVar8->hash();
                        puVar3 = local_f8;
                        hash_combine(local_f8, uVar9);
                        pVVar10 = (Vector3T<float>*)param_6->GetScreen();
                        uVar9 = pVVar10->hash();
                        hash_combine(puVar3, uVar9);
                    }
                    if ((*(byte*)(lVar7 + 96) & 8) != 0) {
                        uVar15 = 1;
                    }
                    lVar6 = lVar6 + 24;
                } while (lVar6 != local_138._32_8_);
            }
            iVar12 = local_e4 + 1;
        } while (iVar12 != 13);
        cVar4 = param_5->IsValid();
        if (cVar4 != '\0') {
            local_138._0_4_ = param_5->GetMinZ();
            pfVar2 = param_1;
            pfVar11 = std::max<float>((float*)local_138, param_1);
            *pfVar2 = *pfVar11;
            hash_combine<float>(local_f0, pfVar2);
        }
        cVar4 = param_6->IsValid();
        if (cVar4 != '\0') {
            local_138._0_4_ = param_6->GetMaxZ();
            pfVar2 = param_2;
            pfVar11 = std::min<float>((float*)local_138, param_2);
            fVar1 = *pfVar11;
            *pfVar2 = fVar1;
            *pfVar2 = fVar1 + 0.1;
            hash_combine<float>(local_f8, pfVar2);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar15;
    }

    // 0x1008b0210, 368 bytes, placed by class name
    // PointLightSMPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void PointLightSMPass::Render(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3,
                                  SceneViewData* param_4, DrawableQueue* param_5) {
        undefined4 uVar1;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        Layout* this_01;
        long lVar2;
        RenderPipelineState* pRVar3;
        BuiltinStates* pBVar4;
        RasteriserState* pRVar5;
        DrawCallState* pDVar6;
        undefined1 auVar7[16];
        DrawCallState local_70;
        SceneViewData* local_40;
        DrawableQueue* local_38;

        pDVar6 = &local_70;
        local_40 = param_4;
        local_38 = param_5;
        render::DrawCallState::DrawCallState(pDVar6, param_2);
        this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar6->GetRenderPipelineState();
        auVar7 = pDVar6->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_00, (EntityHighlight**)(auVar7._0_8_ + 2208), auVar7._8_8_);
        pDVar6 = &local_70;
        this_01 = (Layout*)pDVar6->GetRenderPipelineState();
        lVar2 = pDVar6->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_01, lVar2 + 780);
        pDVar6 = &local_70;
        pRVar3 = (RenderPipelineState*)pDVar6->GetRenderPipelineState();
        pBVar4 = (BuiltinStates*)pDVar6->Instance();
        pRVar5 = (RasteriserState*)pBVar4->GetShadowPassRS(1028);
        pRVar3->SetRasteriserState(pRVar5);
        uVar1 = GetPos();
        local_38->RenderGroup(param_1, &local_70, local_40, 0, uVar1, param_3);
        pDVar6 = &local_70;
        pRVar3 = (RenderPipelineState*)pDVar6->GetRenderPipelineState();
        pBVar4 = (BuiltinStates*)pDVar6->Instance();
        pRVar5 = (RasteriserState*)pBVar4->GetShadowPassRS(0);
        pRVar3->SetRasteriserState(pRVar5);
        uVar1 = GetPos();
        local_38->RenderGroup(param_1, &local_70, local_40, 1, uVar1, param_3);
        uVar1 = GetPos();
        local_38->RenderGroup(param_1, &local_70, local_40, 2, uVar1, param_3);
        local_70.~DrawCallState();
    }

    // 0x1008b03b0, 16 bytes, placed by class name
    // PointLightSMPass::RenderDebug(EffectManager&, DrawableQueue&)
    void PointLightSMPass::RenderDebug(EffectManager* param_1, DrawableQueue* param_2) {}

} // namespace jag::graphics
