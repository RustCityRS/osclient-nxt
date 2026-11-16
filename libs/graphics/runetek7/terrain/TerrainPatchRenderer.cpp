// libs/graphics/runetek7/terrain/TerrainPatchRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TerrainPatchRenderer.h"

namespace jag::graphics {
    // 0x1039bd258, 96 bytes, __common; set at startup by ___cxx_global_var_init.164
    render::VertexDeclaration TerrainPatchRenderer::m_vertexDecl = VertexDeclaration();

    // 0x1039bd2b8, 96 bytes, __common; set at startup by ___cxx_global_var_init.165
    render::VertexDeclaration TerrainPatchRenderer::m_vertexDeclPos = VertexDeclaration();

    // 0x1007b8ae0, 48 bytes, base-object constructor, placed by class name and debug map
    // TerrainPatchRenderer::TerrainPatchRenderer()
    void TerrainPatchRenderer::TerrainPatchRenderer() {
        new (this) DrawableRenderer();
        field_0 = &PTR__TerrainPatchRenderer_100f146f0;
        field_8 = 4294967295;
        field_12 = 4294967295;
    }

    // 0x1007b8b10, 16 bytes, complete-object constructor, placed by class name and debug map
    // TerrainPatchRenderer::TerrainPatchRenderer(): jumps straight to the base-object constructor

    // 0x1007b8b20, 64 bytes, base-object destructor, placed by class name and debug map
    // TerrainPatchRenderer::~TerrainPatchRenderer()
    void TerrainPatchRenderer::~TerrainPatchRenderer() {
        field_0 = &PTR__TerrainPatchRenderer_100f146f0;
        Destroy(this);
        ~AutoSingleton();
    }

    // 0x1007b8b60, 16 bytes, placed by class name and debug map
    // TerrainPatchRenderer::Destroy()
    void TerrainPatchRenderer::Destroy() {
        DestroyRenderingResources(this);
    }

    // 0x1007b8b70, 16 bytes, complete-object destructor, placed by class name and debug map
    // TerrainPatchRenderer::~TerrainPatchRenderer(): jumps straight to the base-object destructor

    // 0x1007b8b80, 32 bytes, deleting destructor, placed by class name and debug map
    // TerrainPatchRenderer::~TerrainPatchRenderer()
    void TerrainPatchRenderer::~TerrainPatchRenderer() {
        ~TerrainPatchRenderer(this);
        operator_delete(this);
    }

    // 0x1007b8ba0, 80 bytes, placed by class name and debug map
    // TerrainPatchRenderer::Initialise(RT7Core&)
    undefined4 TerrainPatchRenderer::Initialise(RT7Core* param_1) {
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

    // 0x1007b8bf0, 48 bytes, placed by class name and debug map
    // TerrainPatchRenderer::CreateRenderingResources()
    undefined8 TerrainPatchRenderer::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10[8];

        local_10->~AutoSingleton("TerrainRenderer");
        InitialiseVertexDeclarations();
        return 1;
    }

    // 0x1007b8c20, 80 bytes, placed by class name and debug map
    // TerrainPatchRenderer::DestroyRenderingResources()
    void TerrainPatchRenderer::DestroyRenderingResources() {
        VertexDeclarationManager* pVVar1;
        Singleton<render::VertexDeclarationManager>* this_00;

        pVVar1 = (VertexDeclarationManager*)Instance();
        pVVar1->Unregister((VertexDeclaration*)&m_vertexDecl);
        this_00 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        m_vertexDecl.Destroy();
        pVVar1 = (VertexDeclarationManager*)this_00->Instance();
        pVVar1->Unregister((VertexDeclaration*)&m_vertexDeclPos);
        m_vertexDeclPos.Destroy();
    }

    // 0x1007b8c70, 2080 bytes, placed by class name and debug map
    // TerrainPatchRenderer::Render(TerrainPatch_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void TerrainPatchRenderer::Render(long param_1, RenderContext* param_2, DrawCallState* param_3,
                                      SceneViewData* param_4, undefined4 param_6, EffectManager* param_7) {
        Matrix44T* pMVar1;
        uint uVar2;
        TerrainPatch* pTVar3;
        ShaderProgram* pSVar4;
        bool bVar5;
        char cVar6;
        int iVar7;
        undefined4 uVar8;
        RenderPassEffect* this_00;
        shared_ptr* psVar9;
        shared_ptr<Shader>* this_01;
        Shader* this_02;
        Layout* this_03;
        RenderPipelineState* pRVar10;
        HashedString* pHVar11;
        SunlightDirectLighting* pSVar12;
        long lVar13;
        TextureAtlasReference* pTVar14;
        WorldmapAreaMetadata* this_04;
        Vector4T* pVVar15;
        RT7Core* this_05;
        Matrix44T* pMVar16;
        undefined4* puVar17;
        float* pfVar18;
        RasteriserState* pRVar19;
        InputAssemblerState* pIVar20;
        char* pcVar21;
        byte* pbVar22;
        byte* pbVar23;
        vector* this_06;
        undefined8 uVar24;
        Layout* this_07;
        undefined8 uVar25;
        RenderContext* pRVar26;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_08;
        undefined8* puVar27;
        float fVar28;
        undefined1 auVar29[16];
        RenderContext aRStack_82928[128];
        EffectList in_stack_fffffffffffff6d8;
        undefined1 local_8f8[16];
        undefined1 local_8e8[32];
        TerrainPatchRenderer* local_8c8;
        ParticleMaterial* local_8a8;
        float local_89c;
        TerrainPatch* local_898;
        ShaderProgram* local_890;
        math local_888[22];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_898 = *(TerrainPatch**)(param_1 + 184);
        local_8c8 = this;
        if (local_898 == (TerrainPatch*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pTerrainPatch != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatchRenderer.cpp",
                      55, (char*)0);
        }
        local_8a8 = (ParticleMaterial*)local_898->GetMaterial();
        this_00 = (RenderPassEffect*)local_8a8->GetRenderPassEffect(param_6);
        local_8e8._16_8_ = param_4;
        psVar9 = (shared_ptr*)this_00->GetShader(param_4);
        bVar5 = operator!=(psVar9, (_func_decltype_nullptr*)0);
        if (!bVar5) {
            /* WARNING: Subroutine does not return */
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatchRenderer.cpp",
                      60, "No shader program available for this render pass");
        }
        this_01 = (shared_ptr<Shader>*)this_00->GetShader(local_8e8._16_8_);
        this_02 = (Shader*)shared_ptr<Shader>::operator*(this_01);
        cVar6 = this_02->IsReady();
        if (cVar6 != '\0') {
            new ((aRStack_82928 + 128)) render::DrawCallState(param_3);
            local_890 = (ShaderProgram*)this_02->GetProgram();
            local_890->GetNativeShaderProgram();
            this_03 = (Layout*)this_02->second();
            eastl::string::Layout::SSOBeginPtr(this_03, (type*)param_3);
            pRVar10 = (RenderPipelineState*)((aRStack_82928 + 128))->GetRenderPipelineState();
            pSVar4 = local_890;
            pRVar10->SetShaderProgram(local_890);
            DebugReturn::SetShaderConstants(pSVar4);
            puVar27 = &this_00->field_16;
            cVar6 = puVar27->Contains(54);
            if (cVar6 != '\0') {
                local_888[0].field_0 = (float)FrameTime::GetSecondsSinceProgramStart();
                local_8f8._0_8_ = local_8f8._0_8_ & 18446744069414584320;
                local_8e8._0_4_ = 1199570688;
                local_89c = math::Wrap<float>(&local_888[0].field_0, (float*)local_8f8, (float*)local_8e8);
                pHVar11 = (HashedString*)graphics::operator*((graphics*)24);
                local_890->SetShaderConstFloat1(pHVar11, local_89c);
                pSVar12 = EffectManager::GetEffect<SunlightDirectLighting>(param_7, 54);
                iVar7 = local_8a8->GetEndPosition();
                pSVar12->SetViewportMapID(iVar7);
            }
            EffectManager::SetShaderConstants((DrawCallState*)param_7, aRStack_82928 + 128, (Shader*)param_2,
                                              in_stack_fffffffffffff6d8);
            lVar13 = local_8a8->GetTextureAtlasReference();
            if (lVar13 != 0) {
                cVar6 = puVar27->Contains(63);
                if (cVar6 != '\0') {
                    cVar6 = param_7->IsEnabled(27);
                    if (cVar6 != '\0') {
                        lVar13 = local_8a8->GetTextureAtlasReference();
                        if (lVar13 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("material.GetTextureAtlasReference() != nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/terrain/TerrainPatchRenderer.cpp",
                                      89, (char*)0);
                        }
                        pTVar14 = (TextureAtlasReference*)local_8a8->GetTextureAtlasReference();
                        TextureAtlasing::SetShaderConstants((DrawCallState*)(aRStack_82928 + 128), param_2, this_02,
                                                            pTVar14, local_8c8->field_8, local_8c8->field_12);
                        pHVar11 = (HashedString*)graphics::operator*((graphics*)117);
                        local_890->SetShaderConstFloat1(pHVar11, (float)local_898->m_gridSize);
                    }
                }
            }
            pHVar11 = (HashedString*)graphics::operator*((graphics*)116);
            cVar6 = param_7->IsEnabled(94);
            if (cVar6 == '\0') {
                fVar28 = 0.0;
            } else {
                fVar28 = *(float*)(param_1 + 176);
            }
            local_890->SetShaderConstFloat1(pHVar11, fVar28);
            cVar6 = puVar27->Contains(21);
            if (cVar6 != '\0') {
                cVar6 = param_7->IsEnabled(40);
                if (cVar6 == '\0') {
                    (&local_898->field_13120, this_02)->SetShaderConstants();
                } else {
                    IrradianceEffect::SetIdentityShaderConstants(this_02);
                }
            }
            cVar6 = puVar27->Contains(26);
            if (cVar6 != '\0') {
                this_04 = (WorldmapAreaMetadata*)(&local_898->field_13232)->end();
                if (this_04 != (WorldmapAreaMetadata*)0) {
                    cVar6 = this_04->IsReady();
                    if (cVar6 != '\0') {
                        this_04->SetLevel(local_898->field_600);
                        pVVar15 = (Vector4T*)this_04->GetOrigin();
                        this_04->SetFineCoordBounds(pVVar15);
                        (**(code**)(*(long*)this_04 + 56))(this_04, aRStack_82928 + 128, param_2, this_02);
                    }
                }
            }
            cVar6 = IsShadowPass(param_6);
            if (cVar6 == '\0') {
                pHVar11 = (HashedString*)graphics::operator*((graphics*)0);
                local_890->SetShaderConstMatrix4(pHVar11, 1, (Matrix44T*)(param_1 + 112), 0);
            } else {
                pSVar12 = EffectManager::GetEffect<SunlightDirectLighting>(param_7, 79);
                pMVar1 = (Matrix44T*)(param_1 + 112);
                this_05 = (RT7Core*)pSVar12->GetDefaultValue();
                pMVar16 = (Matrix44T*)this_05->GetImmediateThreadPool();
                math::operator*(local_888, pMVar1, pMVar16);
                pHVar11 = (HashedString*)graphics::operator*((graphics*)0);
                local_890->SetShaderConstMatrix4(pHVar11, 1, local_888, 0);
            }
            cVar6 = puVar27->Contains(116);
            if (cVar6 != '\0') {
                pHVar11 = (HashedString*)graphics::operator*((graphics*)205);
                uVar24 = local_8e8._16_8_;
                puVar17 = (undefined4*)local_8e8._16_8_->GetStippleNearClipParams();
                local_8a8 = (ParticleMaterial*)CONCAT44(local_8a8._4_4_, *puVar17);
                lVar13 = uVar24->GetStippleNearClipParams();
                local_8c8 = (TerrainPatchRenderer*)CONCAT44(local_8c8._4_4_, 1.0 / *(float*)(lVar13 + 4));
                pfVar18 = (float*)uVar24->GetStippleFarClipParams();
                local_89c = *pfVar18;
                lVar13 = uVar24->GetStippleFarClipParams();
                local_890->SetShaderConstFloat4(pHVar11, local_8a8._0_4_, local_8c8._0_4_, local_89c,
                                                1.0 / *(float*)(lVar13 + 4));
            }
            cVar6 = IsShadowPass(param_6);
            if (cVar6 != '\0') {
                if (local_898->field_600 == 0) {
                    pRVar26 = aRStack_82928 + 128;
                    pRVar10 = (RenderPipelineState*)pRVar26->GetRenderPipelineState();
                    lVar13 = pRVar26->Instance();
                    pRVar19 = (RasteriserState*)(lVar13 + 1272);
                } else {
                    pRVar26 = aRStack_82928 + 128;
                    pRVar10 = (RenderPipelineState*)pRVar26->GetRenderPipelineState();
                    lVar13 = pRVar26->Instance();
                    pRVar19 = (RasteriserState*)(lVar13 + 1200);
                }
                pRVar10->SetRasteriserState(pRVar19);
            }
            cVar6 = puVar27->Contains(0);
            if (cVar6 != '\0') {
                pRVar26 = aRStack_82928 + 128;
                pRVar10 = (RenderPipelineState*)pRVar26->GetRenderPipelineState();
                lVar13 = pRVar26->Instance();
                pRVar10->SetRasteriserState((RasteriserState*)(lVar13 + 1236));
            }
            pIVar20 = (InputAssemblerState*)((param_1 + 192))->GetInputAssemblerState();
            ((aRStack_82928 + 128))->SetInputAssemblerState(pIVar20);
            this_08 =
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(param_1 +
                                                                                                          240);
            cVar6 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_08);
            if (cVar6 == '\0') {
                new (local_888) render::FixedPrimitiveBatchData<256ul>();
                pTVar3 = local_898;
                pcVar21 = (char*)this_08->back();
                if (*pcVar21 != '\0') {
                    pcVar21 = (char*)this_08->front();
                    if (*pcVar21 != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("chunkIDList.back() == 0 || chunkIDList.front() == 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/terrain/TerrainPatchRenderer.cpp",
                                  190, (char*)0);
                    }
                }
                pbVar22 = (byte*)this_08->HeapBeginPtr();
                pbVar23 = (byte*)this_08->end();
                if (pbVar22 != pbVar23) {
                    do {
                        local_8e8._28_4_ = ZEXT14(*pbVar22);
                        auVar29 = (&pTVar3->field_632, (int*)(local_8e8 + 28))->find();
                        local_8f8 = auVar29;
                        auVar29 = (&pTVar3->field_632)->end();
                        pIVar20 = (InputAssemblerState*)local_8e8;
                        local_8e8._0_16_ = auVar29;
                        bVar5 = eastl::operator!=((eastl*)local_8f8, (hashtable_iterator_base*)pIVar20, auVar29._8_8_);
                        if (bVar5) {
                            lVar13 = local_8f8->HeapBeginPtr();
                            uVar2 = *(uint*)(lVar13 + 4);
                            lVar13 = local_8f8->HeapBeginPtr();
                            if (*(int*)(lVar13 + 12) != 0) {
                                pIVar20 = (InputAssemblerState*)(ulong)uVar2;
                                render::FixedPrimitiveBatchData<256ul>::AddPrimitiveBatch((int)local_888, uVar2);
                            }
                        }
                        pbVar22 = pbVar22 + 1;
                    } while (pbVar22 != pbVar23);
                }
                uVar8 = local_888->GetBatchCount();
                this_06 = local_888->SSOBeginPtr(pIVar20);
                uVar24 = this_06->HeapBeginPtr();
                this_07 = (Layout*)local_888->GetVertexCount();
                uVar25 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_07);
                param_2->DrawMultiPrimitives(aRStack_82928 + 128, 4, uVar8, uVar24, uVar25);
                local_888->~FixedPrimitiveBatchData();
            } else {
                iVar7 = local_898->GetFaceCount();
                param_2->DrawPrimitives(aRStack_82928 + 128, 4, 0, iVar7 * 3);
            }
            ((aRStack_82928 + 128))->~DrawCallState();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007b9670, 560 bytes, placed by class name
    // TerrainPatchRenderer::InitialiseVertexDeclarations()
    void TerrainPatchRenderer::InitialiseVertexDeclarations() {
        uint uVar1;
        int iVar2;
        ulong uVar3;
        VertexDeclarationManager* pVVar4;
        Singleton<render::VertexDeclarationManager>* pSVar5;
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

        uVar1 = graphics::operator*((graphics*)209);
        local_1d0.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)264);
        local_1a8.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)234);
        local_180.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)230);
        local_158.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)225);
        local_130.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)242);
        local_108.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)235);
        local_e0.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)243);
        local_b8.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)251);
        local_90.GetVertexElementDesc(uVar1);
        uVar3 = local_1d0.data();
        render::VertexDeclaration::Create((VertexElementDesc*)&m_vertexDecl, uVar3, (void*)9, 0);
        pSVar5 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        iVar2 = m_vertexDecl.GetVertexStride(0);
        if (iVar2 != 36) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDecl.GetVertexStride() == sizeof(TerrainPatchVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatchRenderer.cpp",
                      263, (char*)0);
        }
        pVVar4 = (VertexDeclarationManager*)pSVar5->Instance();
        pVVar4->Register((VertexDeclaration*)&m_vertexDecl);
        uVar1 = graphics::operator*((graphics*)209);
        local_68.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)264);
        local_40.GetVertexElementDesc(uVar1);
        uVar3 = local_68.data();
        render::VertexDeclaration::Create((VertexElementDesc*)&m_vertexDeclPos, uVar3, (void*)2, 0);
        pSVar5 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDeclPos;
        iVar2 = m_vertexDeclPos.GetVertexStride(0);
        if (iVar2 != 8) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDeclPos.GetVertexStride() == sizeof(TerrainPatchVertexPos)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatchRenderer.cpp",
                      276, (char*)0);
        }
        pVVar4 = (VertexDeclarationManager*)pSVar5->Instance();
        pVVar4->Register((VertexDeclaration*)&m_vertexDeclPos);
    }

    // 0x1007c9620, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.164
    void ___cxx_global_var_init_164() {
        new (&TerrainPatchRenderer::m_vertexDecl) render::VertexDeclaration();
        ___cxa_atexit(render::VertexDeclaration::~VertexDeclaration, &TerrainPatchRenderer::m_vertexDecl, 4294967296);
    }

    // 0x1007c9660, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.165
    void ___cxx_global_var_init_165() {
        new (&TerrainPatchRenderer::m_vertexDeclPos) render::VertexDeclaration();
        ___cxa_atexit(render::VertexDeclaration::~VertexDeclaration, &TerrainPatchRenderer::m_vertexDeclPos,
                      4294967296);
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1007b9490, 80 bytes, inline, placed by debug map only (low confidence)
    // float Wrap<float>(float const&, float const&, float const&)
    float Wrap<float>(float* param_1, float* param_2, float* param_3) {
        float fVar1;
        float fVar2;

        fVar2 = *param_1;
        fVar1 = *param_2;
        if (fVar2 < fVar1) {
            do {
                fVar2 = (fVar2 - fVar1) + *param_3;
            } while (fVar2 < fVar1);
        }
        for (; *param_3 <= fVar2; fVar2 = (fVar2 + fVar1) - *param_3) {
        }
        return fVar2;
    }

} // namespace jag::math
