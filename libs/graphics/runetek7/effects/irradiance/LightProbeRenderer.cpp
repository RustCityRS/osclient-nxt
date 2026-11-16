// libs/graphics/runetek7/effects/irradiance/LightProbeRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "LightProbeRenderer.h"

namespace jag::graphics {
    // 0x103bc07c8, 96 bytes, __common; set at startup by ___cxx_global_var_init.205
    render::VertexDeclaration LightProbeRenderer::m_vertexDecl = VertexDeclaration();

    // 0x103bc0828, 4 bytes, __common; zero-initialised
    LightProbeRenderer::m_enableResourceRecycling;

    // 0x10092f3d0, 272 bytes, placed by class name and debug map
    // LightProbeRenderer::InitialiseLightProbe(LightProbe&)
    ulong LightProbeRenderer::InitialiseLightProbe(LightProbe* param_1) {
        char cVar1;
        uint uVar2;
        long lVar3;
        shared_ptr* psVar4;
        undefined1* unaff_RBX;
        ulong uVar5;
        shared_ptr local_30;

        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        if (m_enableResourceRecycling != '\0') {
            unaff_RBX = &field_1296;
            lVar3 = unaff_RBX->size();
            if (lVar3 == 0) {
                uVar5 = 0;
                goto LAB_10092f4ac;
            }
            psVar4 = (shared_ptr*)unaff_RBX->top();
            shared_ptr<render::BufferedRenderTargets>::operator=((shared_ptr<render::BufferedRenderTargets>*)&local_30,
                                                                 psVar4);
            unaff_RBX->pop();
            cVar1 = local_30.unique();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("renderTargetsResources.unique()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "effects/irradiance/LightProbeRenderer.cpp",
                          165, (char*)0);
            }
        }
        cVar1 = IsLightProbeResourceInitialised(&local_30);
        if (cVar1 == '\0') {
            uVar2 = InitialiseLightProbeResources(this, &local_30);
            unaff_RBX = (undefined1*)(ulong)uVar2;
            if ((char)uVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("false",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "effects/irradiance/LightProbeRenderer.cpp",
                          173, "Failed to initialise light probe resources");
            }
        }
        uVar5 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        param_1->SetRenderingResources(&local_30);
    LAB_10092f4ac:
        local_30.~shared_ptr();
        return uVar5 & 4294967295;
    }

    // 0x100930050, 368 bytes, base-object constructor, placed by class name
    // LightProbeRenderer::LightProbeRenderer(unsigned long)
    void LightProbeRenderer::LightProbeRenderer(ulong param_1) {
        vector* this_00;
        char* pcVar1;

        new (this) DrawableRenderer();
        field_0 = &PTR__LightProbeRenderer_100f19e30;
        new (&field_8) Array<LightProbeVertex, eastl::allocator>();
        new (&field_32) render::VertexBuffer();
        new (&field_112) render::IndexBuffer();
        field_200 = 30;
        field_204 = 30;
        new (&field_208) Array<math::Vector3T<float>, eastl::allocator>();
        new (&field_232) Array<math::Vector3T<float>, eastl::allocator>();
        m_probeEnvMapRes = 0;
        new (&field_272, "Texture2D") render::Texture2D();
        pcVar1 = "TextureCube";
        new (&field_784, "TextureCube") render::TextureCube();
        new (&field_1296) eastl::stack<shared_ptr<render::BufferedRenderTargets>,
                                       eastl::vector<shared_ptr<render::BufferedRenderTargets>, eastl::allocator>>();
        this_00 = (&field_1296, (type*)pcVar1)->SSOBeginPtr();
        this_00->reserve(param_1);
    }

    // 0x100930270, 16 bytes, complete-object constructor, placed by class name
    // LightProbeRenderer::LightProbeRenderer(unsigned long): jumps straight to the base-object constructor

    // 0x100930280, 240 bytes, base-object destructor, placed by class name
    // LightProbeRenderer::~LightProbeRenderer()
    void LightProbeRenderer::~LightProbeRenderer() {
        field_0 = &PTR__LightProbeRenderer_100f19e30;
        Destroy(this);
        (&field_1296)->~stack();
        (&field_784)->~TextureCube();
        (&field_272)->~Texture2D();
        (&field_232)->~Array();
        (&field_208)->~Array();
        (&field_112)->~IndexBuffer();
        (&field_32)->~VertexBuffer();
        (&field_8)->~Array();
        ~AutoSingleton();
    }

    // 0x100930370, 16 bytes, placed by class name
    // LightProbeRenderer::Destroy()
    void LightProbeRenderer::Destroy() {
        DestroyRenderingResources(this);
    }

    // 0x100930380, 16 bytes, complete-object destructor, placed by class name
    // LightProbeRenderer::~LightProbeRenderer(): jumps straight to the base-object destructor

    // 0x100930390, 32 bytes, deleting destructor, placed by class name
    // LightProbeRenderer::~LightProbeRenderer()
    void LightProbeRenderer::~LightProbeRenderer() {
        ~LightProbeRenderer(this);
        operator_delete(this);
    }

    // 0x1009303b0, 16 bytes, placed by class name
    // LightProbeRenderer::Initialise(RT7Core&)
    void LightProbeRenderer::Initialise(RT7Core* param_1) {
        CreateRenderingResources((LightProbeRenderer*)param_1);
    }

    // 0x1009303c0, 656 bytes, placed by class name
    // LightProbeRenderer::CreateRenderingResources()
    byte LightProbeRenderer::CreateRenderingResources() {
        undefined1* this_00;
        byte bVar1;
        byte bVar2;
        byte bVar3;
        char cVar4;
        int iVar5;
        uint uVar6;
        uint* puVar7;
        undefined8 uVar8;
        MapArea* this_01;
        RenderDeviceCaps* pRVar9;
        vector* pvVar10;
        long lVar11;
        ulong uVar12;
        Desc* this_02;
        Desc* this_03;
        ulong uVar13;
        undefined1 local_78[71];
        byte local_31;

        ((local_78 + 64))->~AutoSingleton("LightProbeRenderer");
        InitialiseVertexDeclaration();
        InitialiseSphereVertices(this);
        iVar5 = graphicutils::GetSphereVertexCount(field_200, field_204);
        bVar1 = (&field_32, iVar5 * 24, 1, (void*)0)->Create();
        uVar6 = graphicutils::GetSphereTriListIndexCount(field_200, field_204);
        new (local_78) Array<unsigned int, eastl::allocator>((ulong)uVar6);
        puVar7 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
            (Array<unsigned int, eastl::allocator>*)local_78, 0);
        graphicutils::CreateSphereTriListIndices<unsigned int>(puVar7, 0, field_200, field_204, false);
        uVar8 = local_78->data();
        local_31 = (&field_112, uVar6 << 2, 0, uVar8, 5125)->Create();
        local_78->~Array();
        m_probeEnvMapRes = 16;
        new (local_78) render::Texture::Desc();
        local_78._0_4_ = m_probeEnvMapRes;
        local_78._12_4_ = 7;
        local_78._4_4_ = local_78._0_4_;
        bVar2 = (&field_784, (Desc*)local_78)->Create();
        this_02 = (Desc*)local_78;
        this_03 = this_02;
        render::Texture::Desc::Desc(this_02);
        local_78._4_4_ = m_probeEnvMapRes;
        local_78._0_4_ = local_78._4_4_ * 6;
        this_01 = (MapArea*)this_03->Instance();
        pRVar9 = (RenderDeviceCaps*)this_01->GetOrigin();
        iVar5 = render::GetMaxDepthBufferBits(pRVar9, 24);
        local_78._12_4_ = render::GetFormatFromDepthStencilBits(iVar5, 0, false);
        bVar3 = (&field_272, this_02, (ResourceDataT*)0, 0)->Create();
        this_00 = &field_1296;
        cVar4 = this_00->empty();
        if (cVar4 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_freeRenderTargetsResources.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbeRenderer.cpp",
                      134, "No resources should be allocated already");
        }
        pvVar10 = this_00->SSOBeginPtr(this_02);
        lVar11 = pvVar10->capacity();
        if (lVar11 == 0) {
            bVar1 = bVar2 & bVar3 & bVar1 & local_31;
        } else {
            uVar13 = 0;
            do {
                new (local_78) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(this_02);
                bVar1 = InitialiseLightProbeResources(this, (shared_ptr*)local_78);
                if (bVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("false",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "effects/irradiance/LightProbeRenderer.cpp",
                              142, "Failed to initialise light probe resources");
                }
                this_02 = (Desc*)local_78;
                this_00->push(local_78);
                local_78->~shared_ptr();
                if (bVar1 == 0) {
                    return 0;
                }
                uVar13 = uVar13 + 1;
                pvVar10 = this_00->SSOBeginPtr(this_02);
                uVar12 = pvVar10->capacity();
            } while (uVar13 < uVar12);
        }
        return bVar1;
    }

    // 0x100930650, 240 bytes, placed by class name
    // LightProbeRenderer::DestroyRenderingResources()
    void LightProbeRenderer::DestroyRenderingResources() {
        char cVar1;
        VertexDeclarationManager* this_00;
        shared_ptr<render::BufferedRenderTargets>* this_01;
        BufferedRenderTargets* this_02;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_03;
        undefined1* this_04;
        Singleton<render::VertexDeclarationManager>* this_05;

        (&field_784)->Destroy();
        (&field_272)->Destroy();
        (&field_112)->Destroy();
        this_05 = (Singleton<render::VertexDeclarationManager>*)&field_32;
        this_05->Destroy();
        this_00 = (VertexDeclarationManager*)this_05->Instance();
        this_00->Unregister((VertexDeclaration*)&m_vertexDecl);
        m_vertexDecl.Destroy();
        this_04 = &field_1296;
        cVar1 = this_04->empty();
        while (true) {
            if (cVar1 != '\0') {
                return;
            }
            this_03 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)this_04->top();
            if (this_03->use_count() != 1)
                break;
            this_01 = (shared_ptr<render::BufferedRenderTargets>*)this_04->top();
            this_02 = (BufferedRenderTargets*)shared_ptr<render::BufferedRenderTargets>::operator->(this_01);
            this_02->Destroy();
            this_04->pop();
            cVar1 = this_04->empty();
        }
        /* WARNING: Subroutine does not return */
        LogAssert("m_freeRenderTargetsResources.top().use_count() == 1",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                  "irradiance/LightProbeRenderer.cpp",
                  224, "Shared pointer count should now be 1 so that resources are freed by this method.");
    }

    // 0x100930740, 176 bytes, placed by class name
    // LightProbeRenderer::InitialiseVertexDeclaration()
    void LightProbeRenderer::InitialiseVertexDeclaration() {
        uint uVar1;
        ulong uVar3;
        VertexDeclarationManager* this;
        Singleton<render::VertexDeclarationManager>* this_00;
        ShaderProgramVariable local_68;
        ShaderProgramVariable local_40;

        uVar1 = graphics::operator*((graphics*)214);
        local_68.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)221);
        local_40.GetVertexElementDesc(uVar1);
        uVar3 = local_68.data();
        render::VertexDeclaration::Create((VertexElementDesc*)&m_vertexDecl, uVar3, (void*)2, 0);
        this_00 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        if (m_vertexDecl.GetVertexStride(0) != 24) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDecl.GetVertexStride() == sizeof(LightProbeVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbeRenderer.cpp",
                      324, (char*)0);
        }
        this = (VertexDeclarationManager*)this_00->Instance();
        Register((VertexDeclaration*)&m_vertexDecl);
    }

    // 0x1009307f0, 176 bytes, placed by class name
    // LightProbeRenderer::InitialiseSphereVertices()
    void LightProbeRenderer::InitialiseSphereVertices() {
        Vector3T* pVVar1;
        Vector3T* pVVar2;
        uint uVar3;
        ulong uVar4;

        graphicutils::GetSphereHorzVertSegCount(&field_200, &field_204, 30);
        uVar3 = graphicutils::GetSphereVertexCount(field_200, field_204);
        uVar4 = (ulong)uVar3;
        (&field_8, uVar4, 0)->set_max_size();
        (&field_208, uVar4, 0)->set_max_size();
        (&field_232, uVar4, 0)->set_max_size();
        pVVar1 = (Vector3T*)(&field_208)->data();
        pVVar2 = (Vector3T*)(&field_232)->data();
        graphicutils::CreateSphereVertices(pVVar1, pVVar2, (Vector2T*)0, 12, field_200, field_204);
    }

    // 0x100930ad0, 208 bytes, placed by class name
    // LightProbeRenderer::InitialiseLightProbeResources(shared_ptr<render::BufferedRenderTargets>&)
    undefined4 LightProbeRenderer::InitialiseLightProbeResources(shared_ptr* param_1) {
        undefined4 uVar2;
        BufferedRenderTargets* pBVar3;
        RenderTargets* this_00;
        shared_ptr local_40;
        int local_30;
        int local_2c;
        undefined4 local_28;
        int local_24;

        local_30 = GetFont12pxBoldID();
        local_2c = local_30 * 6;
        local_28 = 7;
        local_24 = 1;
        make_shared<render::BufferedRenderTargets, int, int const&, int const&, render::Format&, char const(&)[11]>(
            (jag*)&local_40, &local_24, &local_2c, &local_30, (Format*)&local_28, "LightProbe");
        shared_ptr<render::BufferedRenderTargets>::operator=((shared_ptr<render::BufferedRenderTargets>*)param_1,
                                                             &local_40);
        local_40.~shared_ptr();
        pBVar3 = (BufferedRenderTargets*)shared_ptr<render::BufferedRenderTargets>::operator->(
            (shared_ptr<render::BufferedRenderTargets>*)param_1);
        uVar2 = 0;
        if (pBVar3->Create(0, 0, 1) != '\0') {
            pBVar3 = (BufferedRenderTargets*)shared_ptr<render::BufferedRenderTargets>::operator->(
                (shared_ptr<render::BufferedRenderTargets>*)param_1);
            this_00 = (RenderTargets*)pBVar3->GetWriteRT();
            uVar2 = this_00->BindDepthStencilTargetTexture((Texture*)&field_272);
        }
        return uVar2;
    }

    // 0x100930d40, 1088 bytes, placed by class name
    // LightProbeRenderer::Render(LightProbe_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void LightProbeRenderer::Render(long param_1, RenderContext* param_2, DrawCallState* param_3,
                                    SceneViewData* param_4, undefined8 param_6, DrawCallState* param_7) {
        undefined1* puVar1;
        undefined1* puVar2;
        int iVar3;
        bool bVar4;
        undefined4 uVar5;
        Vector3T* pVVar6;
        Vector4T<float>* this_01;
        long lVar7;
        undefined8 uVar8;
        WaterMaterial* this_02;
        RenderPassEffect* this_03;
        shared_ptr* psVar9;
        shared_ptr<Shader>* this_04;
        Shader* this_05;
        Layout* this_06;
        RenderPipelineState* pRVar10;
        IrradianceSHCoefConsts* pIVar11;
        HashedString* pHVar12;
        InputAssemblerState* this_07;
        VertexDeclaration* pVVar13;
        IndexBuffer* pIVar14;
        shared_ptr<render::BufferedRenderTargets>* this_08;
        BufferedRenderTargets* this_09;
        RenderTargets* pRVar15;
        ulong uVar17;
        ulong uVar18;
        int iVar19;
        EffectList EVar20;
        undefined4 in_stack_fffffffffffffec8;
        undefined1 local_110[40];
        DrawCallState local_a0;
        ulong local_58;
        VertexBuffer* local_50;
        PointLightShadows* local_48;
        LightProbeRenderer* local_40;
        ShaderProgram* local_38;

        local_48 = *(PointLightShadows**)(param_1 + 104);
        if (local_48 == (PointLightShadows*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pLightProbe != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbeRenderer.cpp",
                      242, (char*)0);
        }
        local_58 = graphicutils::GetSphereVertexCount(field_200, field_204);
        EVar20 = SUB41(in_stack_fffffffffffffec8, 0);
        puVar1 = &field_8;
        local_40 = this;
        if (0 < (int)local_58) {
            local_38 = (ShaderProgram*)&field_208;
            local_50 = (VertexBuffer*)&field_232;
            uVar18 = local_58 & 4294967295;
            uVar17 = 0;
            do {
                pVVar6 = (Vector3T*)Array<math::Vector3T<float>, eastl::allocator>::operator[](
                    (Array<math::Vector3T<float>, eastl::allocator>*)local_38, uVar17);
                this_01 = (Vector4T<float>*)Array<LightProbeVertex, eastl::allocator>::operator[](
                    (Array<LightProbeVertex, eastl::allocator>*)puVar1, uVar17);
                math::Vector4T<float>::SetXYZ(this_01, pVVar6);
                pVVar6 = (Vector3T*)Array<math::Vector3T<float>, eastl::allocator>::operator[](
                    (Array<math::Vector3T<float>, eastl::allocator>*)local_50, uVar17);
                lVar7 = Array<LightProbeVertex, eastl::allocator>::operator[](
                    (Array<LightProbeVertex, eastl::allocator>*)puVar1, uVar17);
                ((lVar7 + 12))->SetXYZ(pVVar6);
                EVar20 = SUB41(in_stack_fffffffffffffec8, 0);
                uVar17 = uVar17 + 1;
            } while (uVar18 != uVar17);
        }
        puVar2 = &local_40->field_32;
        iVar19 = (int)local_58;
        uVar8 = puVar1->data();
        puVar2->Update(0, iVar19 * 24, uVar8, 0);
        this_02 = (WaterMaterial*)local_48->GetDefaultValue();
        this_03 = (RenderPassEffect*)this_02->GetRenderPassEffect(4);
        new (&local_a0) render::DrawCallState(param_3);
        psVar9 = (shared_ptr*)this_03->GetShader(param_4);
        bVar4 = operator!=(psVar9, (_func_decltype_nullptr*)0);
        if (!bVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/LightProbeRenderer.cpp",
                      264, "No shader program available for this render pass");
        }
        local_50 = (VertexBuffer*)puVar2;
        this_04 = (shared_ptr<Shader>*)this_03->GetShader(param_4);
        this_05 = (Shader*)shared_ptr<Shader>::operator*(this_04);
        local_38 = (ShaderProgram*)this_05->GetProgram();
        local_38->GetNativeShaderProgram();
        this_06 = (Layout*)this_05->second();
        eastl::string::Layout::SSOBeginPtr(this_06, (type*)param_4);
        pRVar10 = (RenderPipelineState*)local_a0.GetRenderPipelineState();
        pRVar10->SetShaderProgram(local_38);
        puVar1 = local_48->m_pointLightSMManager;
        pIVar11 = (IrradianceSHCoefConsts*)this_02->GetWaterParameters();
        ((puVar1 + 16))->SetCoefficients(pIVar11);
        ((puVar1 + 16))->SetShaderConstants(this_05);
        EffectManager::SetShaderConstants(param_7, (RenderContext*)&local_a0, (Shader*)param_2, EVar20);
        math::Matrix33Scaling<float>((math*)local_110, 1000.0, 1000.0, 1000.0);
        new ((local_110 + 40)) math::Matrix44T<float>(local_110, (Vector3T*)&local_48->field_12);
        pHVar12 = (HashedString*)graphics::operator*((graphics*)0);
        local_38->SetShaderConstMatrix4(pHVar12, 1, (Matrix44T*)(local_110 + 40), 0);
        this_07 = (InputAssemblerState*)local_a0.GetInputAssemblerState();
        pVVar13 = (VertexDeclaration*)local_38->second();
        this_07->SetVertexStreamData(pVVar13, local_50);
        pIVar14 = (IndexBuffer*)local_a0.GetInputAssemblerState();
        render::InputAssemblerState::SetIndexBuffer(pIVar14, (int)local_40 + 112);
        if (LightProbe::m_LightProbeRenderMode == 1) {
            psVar9 = (shared_ptr*)local_48->GetPointLightSMManager();
            bVar4 = shared_ptr::operator_cast_to_bool(psVar9);
            if (bVar4) {
                this_08 = (shared_ptr<render::BufferedRenderTargets>*)local_48->GetPointLightSMManager();
                this_09 = (BufferedRenderTargets*)shared_ptr<render::BufferedRenderTargets>::operator->(this_08);
                pRVar15 = (RenderTargets*)this_09->GetWriteRT();
                param_2->SetRenderTargets(pRVar15);
                puVar1 = &local_40->field_784;
                iVar19 = 0;
                do {
                    iVar3 = local_40->m_probeEnvMapRes;
                    uVar5 = render::GetCubeMapFace(iVar19);
                    param_2->CopyColourTargetData(puVar1, 0, 0, 0, 0, iVar3 * iVar19, 0, iVar3, iVar3, uVar5);
                    iVar19 = iVar19 + 1;
                } while (iVar19 != 6);
                new ((local_110 + 40)) HashedString("uGlobalEnvironmentMap");
                iVar19 = local_38->GetConstIndex((HashedString*)(local_110 + 40));
                pRVar10 = (RenderPipelineState*)local_a0.GetRenderPipelineState();
                pRVar10->SetPSTextureSamplerPair(0, puVar1, iVar19, 0, false);
            }
        }
        uVar5 = graphicutils::GetSphereTriListIndexCount(local_40->field_200, local_40->field_204);
        param_2->DrawIndexedPrimitives(&local_a0, 4, uVar5, 0);
        local_a0.~DrawCallState();
    }

    // 0x1009315a0, 192 bytes, placed by class name
    // LightProbeRenderer::RecycleRenderingResources(LightProbe&)
    void LightProbeRenderer::RecycleRenderingResources(LightProbe* param_1) {
        char cVar2;
        shared_ptr* this_00;
        ulong uVar3;
        vector* this_01;
        ulong uVar4;
        BufferedRenderTargets* this_02;
        undefined1* this_03;

        this_00 = (shared_ptr*)param_1->GetPointLightSMManager();
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            cVar2 = this_00->unique();
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("renderTargets.unique()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "effects/irradiance/LightProbeRenderer.cpp",
                          351, (char*)0);
            }
            this_03 = &field_1296;
            uVar3 = this_03->size();
            this_01 = this_03->SSOBeginPtr(param_1);
            uVar4 = this_01->capacity();
            this_02 = (BufferedRenderTargets*)shared_ptr<render::BufferedRenderTargets>::operator->(
                (shared_ptr<render::BufferedRenderTargets>*)this_00);
            if (uVar3 < uVar4) {
                this_02->ResetSyncFences();
                this_03->push(this_00);
            } else {
                this_02->Destroy();
            }
        }
        param_1->ClearRenderingResources();
    }

    // 0x10094d060, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.205
    void ___cxx_global_var_init_205() {
        new (&LightProbeRenderer::m_vertexDecl) render::VertexDeclaration();
        ___cxa_atexit(render::VertexDeclaration::~VertexDeclaration, &LightProbeRenderer::m_vertexDecl, 4294967296);
    }

} // namespace jag::graphics
