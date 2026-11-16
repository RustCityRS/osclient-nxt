// libs/graphics/runetek7/effects/skybox/SkyBoxRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SkyBoxRenderer.h"

namespace jag::graphics {
    // 0x103bc0490, 96 bytes, __common; set at startup by ___cxx_global_var_init.48
    render::VertexDeclaration SkyBoxRenderer::m_vertexDecl = VertexDeclaration();

    // 0x100414cb0: the linker folded this into math::Transitionable<IrradianceSHCoefConsts>::GetEndValue(), which has identical code
    SkyBoxRenderer::GetDepthStencilState() const;

    // 0x10091c1f0, 976 bytes, placed by class name and debug map
    // SkyBoxRenderer::Render(SkyBox_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void SkyBoxRenderer::Render(long param_1, RenderContext* param_2, DrawCallState* param_3, SceneViewData* param_4,
                                undefined4 param_6, DrawCallState* param_7) {
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        RenderMaterial* pRVar4;
        RenderPassEffect* this_01;
        shared_ptr* psVar5;
        shared_ptr<Shader>* this_02;
        Shader* this_03;
        Layout* this_04;
        RenderPipelineState* pRVar6;
        long lVar7;
        HashedString* pHVar8;
        Texture* pTVar9;
        ShaderProgram* pSVar10;
        shared_ptr* this_05;
        shared_ptr* psVar11;
        EffectList in_stack_ffffffffffffff68;
        DrawCallState local_90;
        SkyBoxRenderer* local_50;
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>* local_48;
        shared_ptr* local_40;
        ShaderProgram* local_38;

        this_00 = *(fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>**)(param_1 + 104);
        local_50 = this;
        local_38 = (ShaderProgram*)param_3;
        if (this_00 == (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pSkyBox != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "skybox/SkyBoxRenderer.cpp",
                      75, (char*)0);
        }
        local_40 = (shared_ptr*)(this_00 + 576);
        bVar1 = shared_ptr::operator_cast_to_bool(local_40);
        if ((!bVar1) && (bVar1 = ((this_00 + 592))->operator_cast_to_bool(), !bVar1)) {
            return;
        }
        local_48 = this_00;
        pRVar4 = (RenderMaterial*)eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true,
                                                                   eastl::allocator>::get_overflow_allocator(this_00);
        this_01 = (RenderPassEffect*)pRVar4->GetRenderPassEffect(param_6);
        psVar5 = (shared_ptr*)this_01->GetShader(param_4);
        bVar1 = operator!=(psVar5, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "skybox/SkyBoxRenderer.cpp",
                      87, "No shader program available for this render pass");
        }
        this_02 = (shared_ptr<Shader>*)this_01->GetShader(param_4);
        this_03 = (Shader*)shared_ptr<Shader>::operator*(this_02);
        cVar2 = this_03->IsReady();
        if (cVar2 == '\0') {
            return;
        }
        pSVar10 = local_38;
        new (&local_90) render::DrawCallState(local_38);
        local_38 = (ShaderProgram*)this_03->GetProgram();
        local_38->GetNativeShaderProgram();
        this_04 = (Layout*)this_03->second();
        eastl::string::Layout::SSOBeginPtr(this_04, (type*)pSVar10);
        pRVar6 = (RenderPipelineState*)local_90.GetRenderPipelineState();
        pRVar6->SetShaderProgram(local_38);
        lVar7 = eastl::vector<render::Viewport,
                              eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::
        operator[](
            (vector<render::Viewport,
                    eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)&param_4->field_432,
            0);
        iVar3 = *(int*)(lVar7 + 8);
        lVar7 = eastl::vector<render::Viewport,
                              eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::
        operator[](
            (vector<render::Viewport,
                    eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)&param_4->field_432,
            0);
        UpdateVertexBuffer(local_50, iVar3, *(int*)(lVar7 + 12), param_4);
        EffectManager::SetShaderConstants(param_7, (RenderContext*)&local_90, (Shader*)param_2,
                                          in_stack_ffffffffffffff68);
        pHVar8 = (HashedString*)graphics::operator*((graphics*)4);
        local_38->SetShaderConstMatrix4(pHVar8, 1, (Matrix44T*)&local_50->field_16, 1);
        bVar1 = shared_ptr::operator_cast_to_bool(local_40);
        if (bVar1) {
            pTVar9 = (Texture*)shared_ptr<render::TextureCube>::operator->((shared_ptr<render::TextureCube>*)local_40);
            cVar2 = pTVar9->IsCreated();
            if (cVar2 != '\0')
                goto LAB_10091c417;
        }
        psVar5 = (shared_ptr*)(local_48 + 592);
        bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
        if (bVar1) {
            pTVar9 = (Texture*)shared_ptr<render::TextureCube>::operator->((shared_ptr<render::TextureCube>*)psVar5);
            cVar2 = pTVar9->IsCreated();
            if (cVar2 != '\0') {
            LAB_10091c417:
                pHVar8 = (HashedString*)graphics::operator*((graphics*)95);
                bVar1 = shared_ptr::operator_cast_to_bool(local_40);
                local_38->SetShaderConstInt1(pHVar8, (uint)bVar1);
                pRVar6 = (RenderPipelineState*)local_90.GetRenderPipelineState();
                psVar11 = local_40;
                bVar1 = shared_ptr::operator_cast_to_bool(local_40);
                psVar5 = (shared_ptr*)(local_48 + 592);
                this_05 = psVar5;
                if (bVar1) {
                    this_05 = psVar11;
                }
                pTVar9 = (Texture*)this_05->end();
                pHVar8 = (HashedString*)graphics::operator*((graphics*)92);
                iVar3 = local_38->GetConstIndex(pHVar8);
                pRVar6->SetPSTextureSamplerPair(0, pTVar9, iVar3, 0, false);
                pHVar8 = (HashedString*)graphics::operator*((graphics*)96);
                bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                local_38->SetShaderConstInt1(pHVar8, (uint)bVar1);
                pRVar6 = (RenderPipelineState*)local_90.GetRenderPipelineState();
                bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                psVar11 = local_40;
                if (bVar1) {
                    psVar11 = psVar5;
                }
                pTVar9 = (Texture*)psVar11->end();
                pHVar8 = (HashedString*)graphics::operator*((graphics*)93);
                iVar3 = local_38->GetConstIndex(pHVar8);
                pRVar6->SetPSTextureSamplerPair(1, pTVar9, iVar3, 0, false);
                pHVar8 = (HashedString*)graphics::operator*((graphics*)94);
                local_38->SetShaderConstFloat1(pHVar8, *(float*)(param_1 + 112));
                pHVar8 = (HashedString*)graphics::operator*((graphics*)97);
                local_38->SetShaderConstFloat1(pHVar8, *(float*)(local_48 + 720));
                local_90.SetInputAssemblerState(local_50->field_312);
                param_2->DrawPrimitives(&local_90, 5, 0, 4);
                local_90.~DrawCallState();
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("(pSkyBox->m_currentMap && pSkyBox->m_currentMap->IsCreated()) || (pSkyBox->m_targetMap && "
                  "pSkyBox->m_targetMap->IsCreated())",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                  "skybox/SkyBoxRenderer.cpp",
                  106, (char*)0);
    }

    // 0x10091d450, 192 bytes, base-object constructor, placed by class name
    // SkyBoxRenderer::SkyBoxRenderer()
    void SkyBoxRenderer::SkyBoxRenderer() {
        new (this) DrawableRenderer();
        field_0 = &PTR__SkyBoxRenderer_100f19430;
        new (&field_16) math::Matrix44T<float>();
        new (&field_80) math::Matrix44T<float>();
        new (&field_144) render::DepthStencilState();
        new (&field_208) Array<SkyBoxVertex, eastl::allocator>();
        new (&field_232) render::VertexBuffer();
        new (field_312) render::InputAssemblerState();
    }

    // 0x10091d530, 16 bytes, complete-object constructor, placed by class name
    // SkyBoxRenderer::SkyBoxRenderer(): jumps straight to the base-object constructor

    // 0x10091d540, 160 bytes, base-object destructor, placed by class name
    // SkyBoxRenderer::~SkyBoxRenderer()
    void SkyBoxRenderer::~SkyBoxRenderer() {
        field_0 = &PTR__SkyBoxRenderer_100f19430;
        Destroy(this);
        field_312->~InputAssemblerState();
        (&field_232)->~VertexBuffer();
        (&field_208)->~Array();
        (&field_144)->~DepthStencilState();
        ~AutoSingleton();
    }

    // 0x10091d5e0, 16 bytes, placed by class name
    // SkyBoxRenderer::Destroy()
    void SkyBoxRenderer::Destroy() {
        DestroyRenderingResources(this);
    }

    // 0x10091d5f0, 16 bytes, complete-object destructor, placed by class name
    // SkyBoxRenderer::~SkyBoxRenderer(): jumps straight to the base-object destructor

    // 0x10091d600, 32 bytes, deleting destructor, placed by class name
    // SkyBoxRenderer::~SkyBoxRenderer()
    void SkyBoxRenderer::~SkyBoxRenderer() {
        ~SkyBoxRenderer(this);
        operator_delete(this);
    }

    // 0x10091d620, 16 bytes, placed by class name
    // SkyBoxRenderer::Initialise(RT7Core&)
    undefined1 SkyBoxRenderer::Initialise(RT7Core* param_1) {
        CreateRenderingResources((SkyBoxRenderer*)param_1);
        return 1;
    }

    // 0x10091d630, 192 bytes, placed by class name
    // SkyBoxRenderer::CreateRenderingResources()
    undefined8 SkyBoxRenderer::CreateRenderingResources() {
        void* pvVar1;
        Desc local_60;
        AutoSingleton<ShaderThreadPoolSingleton> local_28[8];

        local_28->~AutoSingleton("SkyBoxRenderer");
        InitialiseVertexDeclaration();
        (&field_208, 4, 0)->set_max_size();
        pvVar1 = (void*)(&field_208)->data();
        (&field_232, 128, 1, pvVar1)->Create();
        (field_312, (VertexDeclaration*)&m_vertexDecl, (VertexBuffer*)&field_232)->SetVertexStreamData();
        new (&local_60) render::DepthStencilState::Desc();
        local_60.field_0 = '\x01';
        local_60.field_2 = '\0';
        local_60.field_12 = 515;
        (&field_144, &local_60)->Create();
        return 1;
    }

    // 0x10091d6f0, 96 bytes, placed by class name
    // SkyBoxRenderer::DestroyRenderingResources()
    void SkyBoxRenderer::DestroyRenderingResources() {
        VertexDeclarationManager* this_00;
        Singleton<render::VertexDeclarationManager>* this_01;

        (&field_144)->Destroy();
        field_312->Destroy();
        this_01 = (Singleton<render::VertexDeclarationManager>*)&field_232;
        this_01->Destroy();
        this_00 = (VertexDeclarationManager*)this_01->Instance();
        this_00->Unregister((VertexDeclaration*)&m_vertexDecl);
        m_vertexDecl.Destroy();
    }

    // 0x10091d750, 224 bytes, placed by class name
    // SkyBoxRenderer::InitialiseVertexDeclaration()
    void SkyBoxRenderer::InitialiseVertexDeclaration() {
        uint uVar1;
        ulong uVar3;
        VertexDeclarationManager* this;
        Singleton<render::VertexDeclarationManager>* this_00;
        ShaderProgramVariable local_90;
        ShaderProgramVariable local_68;
        ShaderProgramVariable local_40;

        uVar1 = graphics::operator*((graphics*)213);
        local_90.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)221);
        local_68.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)257);
        local_40.GetVertexElementDesc(uVar1);
        uVar3 = local_90.data();
        render::VertexDeclaration::Create((VertexElementDesc*)&m_vertexDecl, uVar3, (void*)3, 0);
        this_00 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        if (m_vertexDecl.GetVertexStride(0) != 32) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDecl.GetVertexStride() == sizeof(SkyBoxVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "skybox/SkyBoxRenderer.cpp",
                      233, (char*)0);
        }
        this = (VertexDeclarationManager*)this_00->Instance();
        Register((VertexDeclaration*)&m_vertexDecl);
    }

    // 0x10091d990, 1520 bytes, placed by class name
    // SkyBoxRenderer::UpdateVertexBuffer(int, int, SceneViewData const&)
    void SkyBoxRenderer::UpdateVertexBuffer(int param_1, int param_2, SceneViewData* param_3) {
        undefined1* this_00;
        Frustum* this_01;
        Vector2T<float>* pVVar1;
        long lVar2;
        float* pfVar3;
        vector* pvVar4;
        undefined8 uVar5;
        undefined1* puVar6;
        Vector3T* pVVar7;
        float fVar8;
        undefined4 uVar9;
        Matrix44T local_158;
        Frustum local_118;
        Vector3T<int> local_70[16];
        SkyBoxRenderer* local_60;
        Frustum* local_58;
        float local_50;
        float local_4c;
        undefined8 local_48;
        float local_40;
        float local_38;
        float local_34;

        local_4c = (float)param_1;
        local_34 = (float)param_2;
        local_60 = this;
        math::Matrix44OrthographicLH<float>(0, local_4c, 0, local_34, 0, 1065353216, &field_16, 0);
        math::Vector3T<int>::Vector3T(local_70);
        param_3->GetScreen();
        local_118.GetRot();
        new (&local_158) math::Matrix44T<float>((Matrix33T*)&local_118, PTR_ZERO_100ee66e8);
        new (&local_118) math::Frustum(&local_158, (Matrix44T*)&field_80);
        local_58 = (Frustum*)param_3->m_pViewFrustum;
        this_00 = &field_208;
        pVVar1 = (Vector2T<float>*)Array<SkyBoxVertex, eastl::allocator>::operator[](
            (Array<SkyBoxVertex, eastl::allocator>*)this_00, 0);
        fVar8 = local_34;
        pVVar1->Set(0.0, local_34);
        local_48 = local_118.GetNearTopLeft();
        local_40 = fVar8;
        local_70->SetXYZ((Vector3T*)&local_48);
        lVar2 = Array<SkyBoxVertex, eastl::allocator>::operator[]((Array<SkyBoxVertex, eastl::allocator>*)this_00, 0);
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 0);
        local_38 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 1);
        local_50 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 2);
        fVar8 = local_50;
        ((lVar2 + 8))->Set(local_38, local_50, -*pfVar3);
        this_01 = local_58;
        local_48 = local_58->GetFarTopLeft();
        pVVar7 = (Vector3T*)&local_48;
        local_40 = fVar8;
        local_70->SetXYZ(pVVar7);
        pvVar4 = param_3->SSOBeginPtr(pVVar7);
        math::Vector3T<float>::operator-=((Vector3T<float>*)local_70, (Vector3T*)pvVar4);
        math::Vector3T<float>::operator*=((Vector3T<float>*)local_70, 1.0);
        lVar2 = Array<SkyBoxVertex, eastl::allocator>::operator[]((Array<SkyBoxVertex, eastl::allocator>*)this_00, 0);
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 0);
        local_38 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 1);
        local_50 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 2);
        ((lVar2 + 20))->Set(local_38, local_50, *pfVar3);
        pVVar1 = (Vector2T<float>*)Array<SkyBoxVertex, eastl::allocator>::operator[](
            (Array<SkyBoxVertex, eastl::allocator>*)this_00, 1);
        fVar8 = local_34;
        pVVar1->Set(local_4c, local_34);
        local_48 = local_118.GetNearTopRight();
        local_40 = fVar8;
        local_70->SetXYZ((Vector3T*)&local_48);
        lVar2 = Array<SkyBoxVertex, eastl::allocator>::operator[]((Array<SkyBoxVertex, eastl::allocator>*)this_00, 1);
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 0);
        local_34 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 1);
        local_38 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 2);
        fVar8 = local_38;
        ((lVar2 + 8))->Set(local_34, local_38, -*pfVar3);
        local_48 = this_01->GetFarTopRight();
        pVVar7 = (Vector3T*)&local_48;
        local_40 = fVar8;
        local_70->SetXYZ(pVVar7);
        pvVar4 = param_3->SSOBeginPtr(pVVar7);
        math::Vector3T<float>::operator-=((Vector3T<float>*)local_70, (Vector3T*)pvVar4);
        math::Vector3T<float>::operator*=((Vector3T<float>*)local_70, 1.0);
        lVar2 = Array<SkyBoxVertex, eastl::allocator>::operator[]((Array<SkyBoxVertex, eastl::allocator>*)this_00, 1);
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 0);
        local_34 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 1);
        local_38 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 2);
        ((lVar2 + 20))->Set(local_34, local_38, *pfVar3);
        pVVar1 = (Vector2T<float>*)Array<SkyBoxVertex, eastl::allocator>::operator[](
            (Array<SkyBoxVertex, eastl::allocator>*)this_00, 2);
        uVar9 = 0;
        pVVar1->Set(0.0, 0.0);
        local_48 = local_118.GetNearBottomLeft();
        local_40 = (float)uVar9;
        local_70->SetXYZ((Vector3T*)&local_48);
        lVar2 = Array<SkyBoxVertex, eastl::allocator>::operator[]((Array<SkyBoxVertex, eastl::allocator>*)this_00, 2);
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 0);
        local_34 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 1);
        local_38 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 2);
        fVar8 = local_38;
        ((lVar2 + 8))->Set(local_34, local_38, -*pfVar3);
        local_48 = this_01->GetFarBottomLeft();
        pVVar7 = (Vector3T*)&local_48;
        local_40 = fVar8;
        local_70->SetXYZ(pVVar7);
        pvVar4 = param_3->SSOBeginPtr(pVVar7);
        math::Vector3T<float>::operator-=((Vector3T<float>*)local_70, (Vector3T*)pvVar4);
        math::Vector3T<float>::operator*=((Vector3T<float>*)local_70, 1.0);
        lVar2 = Array<SkyBoxVertex, eastl::allocator>::operator[]((Array<SkyBoxVertex, eastl::allocator>*)this_00, 2);
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 0);
        local_34 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 1);
        local_38 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 2);
        ((lVar2 + 20))->Set(local_34, local_38, *pfVar3);
        pVVar1 = (Vector2T<float>*)Array<SkyBoxVertex, eastl::allocator>::operator[](
            (Array<SkyBoxVertex, eastl::allocator>*)this_00, 3);
        uVar9 = 0;
        pVVar1->Set(local_4c, 0.0);
        local_48 = local_118.GetNearBottomRight();
        local_40 = (float)uVar9;
        local_70->SetXYZ((Vector3T*)&local_48);
        lVar2 = Array<SkyBoxVertex, eastl::allocator>::operator[]((Array<SkyBoxVertex, eastl::allocator>*)this_00, 3);
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 0);
        local_4c = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 1);
        local_34 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 2);
        fVar8 = local_34;
        ((lVar2 + 8))->Set(local_4c, local_34, -*pfVar3);
        local_48 = this_01->GetFarBottomRight();
        pVVar7 = (Vector3T*)&local_48;
        local_40 = fVar8;
        local_70->SetXYZ(pVVar7);
        pvVar4 = param_3->SSOBeginPtr(pVVar7);
        math::Vector3T<float>::operator-=((Vector3T<float>*)local_70, (Vector3T*)pvVar4);
        math::Vector3T<float>::operator*=((Vector3T<float>*)local_70, 1.0);
        lVar2 = Array<SkyBoxVertex, eastl::allocator>::operator[]((Array<SkyBoxVertex, eastl::allocator>*)this_00, 3);
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 0);
        local_4c = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 1);
        local_34 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_70, 2);
        ((lVar2 + 20))->Set(local_4c, local_34, *pfVar3);
        puVar6 = &local_60->field_232;
        uVar5 = this_00->data();
        puVar6->Update(0, 128, uVar5, 0);
    }

    // 0x100929e50, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.48
    void ___cxx_global_var_init_48() {
        new (&SkyBoxRenderer::m_vertexDecl) render::VertexDeclaration();
        ___cxa_atexit(render::VertexDeclaration::~VertexDeclaration, &SkyBoxRenderer::m_vertexDecl, 4294967296);
    }

} // namespace jag::graphics
